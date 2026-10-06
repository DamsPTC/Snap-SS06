/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106bffe1c; end: 106bffed3; -[SCTermsOfUseLoggerImpl _logServerDrivenTermsOfUseBlizzardComplianceStatus:complianceStatusCheckCount:isCompliant:tosAvailable:tosVersion:] */

void FUN_106bffe1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d1508;
  _objc_opt_new(PTR_PTR_1126d1508);
  func_0x00010c17fce0();
  func_0x00010c17fd20(puVar1,param_2,param_4);
  func_0x00010c1b01c0(puVar1,param_2,param_5);
  func_0x00010c217de0(puVar1,param_2,param_6);
  func_0x00010c217e40(puVar1,param_2,param_7);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106bffed4; end: 106bfffb3; -[SCTermsOfUseLoggerImpl _logServerDrivenTermsOfUseGrapheneWithComplianceStatus:complianceStatusCheckCount:isCompliant:tosAvailable:tosVersion:] */

void FUN_106bffed4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db3bb8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  FUN_106c02d28(*(undefined8 *)(param_1 + 0x20),puVar1,param_5,puVar2,param_6,puVar3,1,param_8,
                param_7);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106bfffb4; end: 106c00037; -[SCTermsOfUseLoggerImpl _logBlizzardAction:version:] */

void FUN_106bfffb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d1500;
  _objc_opt_new(PTR_PTR_1126d1500);
  func_0x00010c1ba7e0();
  lVar2 = param_1;
  func_0x00010be9a700(param_1,param_2,param_4);
  func_0x00010c1ba800(puVar1,param_2,lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c00038; end: 106c0018b; -[SCTermsOfUseLoggerImpl _logGrapheneWithAction:version:] */

void FUN_106c00038(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR_PTR_1126d1510;
  if (param_3 == 2) {
    func_0x00010c277140(PTR_PTR_1126d1510);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 1) {
    func_0x00010c277100(PTR_PTR_1126d1510);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 0) {
    func_0x00010c277160(PTR_PTR_1126d1510);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  func_0x000106bfebcc(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110dd8fd8,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(param_4);
  lVar2 = param_1;
  func_0x00010bea1620(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae878,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c26b4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 106c0018c; end: 106c00293; -[SCTermsOfUseLoggerImpl _sessionContext] */

void FUN_106c0018c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_a8 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106c00294;
  uStack_30 = 0x106c002a4;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x106c002ac;
  puStack_60 = &UNK_110847180;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x106c002c8;
  puStack_88 = &UNK_110842e78;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x106c002e4;
  puStack_b0 = &UNK_1108855a8;
  puStack_80 = puStack_a8;
  puStack_58 = puStack_a8;
  puStack_48 = puStack_a8;
  func_0x00010c0bfac0(*(undefined8 *)(param_1 + 8),param_2,&puStack_78,&puStack_a0,&puStack_c8);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c00294; end: 106c002ff;  */

void FUN_106c00294(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106c00300; end: 106c00347; -[SCTermsOfUseLoggerImpl .cxx_destruct] */

void FUN_106c00300(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c00348; end: 106c003bf; -[SCTermsOfUseAcceptedVersionSyncEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c00348(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_11275ab98;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000100262c34();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec6110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__submitJob_11258f1e8);
    return;
  }
  return;
}



/* Entry: 106c003c0; end: 106c0053f; -[SCTermsOfUseAcceptedVersionSyncEntryPoint _submitJob] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c003c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b7228;
  _objc_opt_new(PTR_PTR_1126b7228);
  func_0x00010c1b6840();
  func_0x00010c198180(puVar1,param_2,1);
  func_0x00010c1b6780(puVar1,param_2,0);
  puVar2 = PTR_PTR_1126b7230;
  _objc_opt_new(PTR_PTR_1126b7230);
  func_0x00010c1edbc0();
  func_0x00010c1ed860(puVar1,param_2,puVar2);
  puVar3 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  func_0x00010c1cc140();
  puVar4 = puVar3;
  func_0x00010bf06200(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf06200(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar4);
  func_0x00010c20bfc0(puVar3,param_2,0);
  func_0x00010c168b40(puVar3,param_2,0);
  func_0x00010c1b66e0(puVar1,param_2,puVar3);
  param_1 = param_1 + _DAT_11275ab9c;
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
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c00540; end: 106c00583; -[SCTermsOfUseAcceptedVersionSyncEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c00540(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275ab98);
  _objc_destroyWeak(param_1 + _DAT_11275aba0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275ab9c);
  return;
}



/* Entry: 106c00584; end: 106c00587; -[SCTermsOfUseHtmlBackgroundFetcherEntryPoint begin] */

void FUN_106c00584(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec6110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__submitJob_11258f1e8);
  return;
}



/* Entry: 106c00588; end: 106c00707; -[SCTermsOfUseHtmlBackgroundFetcherEntryPoint _submitJob] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c00588(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b7228;
  _objc_opt_new(PTR_PTR_1126b7228);
  func_0x00010c1b6840();
  func_0x00010c198180(puVar1,param_2,1);
  func_0x00010c1b6780(puVar1,param_2,0);
  puVar2 = PTR_PTR_1126b7230;
  _objc_opt_new(PTR_PTR_1126b7230);
  func_0x00010c1edbc0();
  func_0x00010c1ed860(puVar1,param_2,puVar2);
  puVar3 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  func_0x00010c1cc140();
  puVar4 = puVar3;
  func_0x00010bf06200(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf06200(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar4);
  func_0x00010c20bfc0(puVar3,param_2,0);
  func_0x00010c168b40(puVar3,param_2,0);
  func_0x00010c1b66e0(puVar1,param_2,puVar3);
  param_1 = param_1 + _DAT_11275aba4;
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
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c00708; end: 106c0077f; -[SCTermsOfUseHtmlBackgroundFetcherEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c00708(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275aba8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275aba4);
  return;
}



/* Entry: 106c00780; end: 106c007ef; -[SCTermsOfUseServiceProvider end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c00780(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275abac);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139860();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f5b40;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c007f0; end: 106c00997; -[SCTermsOfUseServiceProvider _atlasGwGrpcService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c007f0(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1ebf80(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd9618);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1,param_2,60000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11275abd4;
    _objc_loadWeakRetained(lVar9);
  }
  lVar2 = lVar9;
  func_0x00010bfcfa00(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = 0;
  if (param_1 != 0) {
    lVar4 = param_1 + _DAT_11275abd8;
    _objc_loadWeakRetained(lVar4);
  }
  lVar5 = lVar4;
  func_0x00010c0f98e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bfcd0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010bf56360(lVar3,param_2,&PTR____CFConstantStringClassReference_110dd9638,puVar1,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar9);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 106c00998; end: 106c00a4f; -[SCTermsOfUseServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c00998(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275abb8);
  _objc_destroyWeak(param_1 + _DAT_11275abc4);
  _objc_destroyWeak(param_1 + _DAT_11275abd8);
  _objc_destroyWeak(param_1 + _DAT_11275abd4);
  _objc_destroyWeak(param_1 + _DAT_11275abbc);
  _objc_destroyWeak(param_1 + _DAT_11275abb4);
  _objc_destroyWeak(param_1 + _DAT_11275abd0);
  _objc_destroyWeak(param_1 + _DAT_11275abcc);
  _objc_destroyWeak(param_1 + _DAT_11275abc0);
  _objc_destroyWeak(param_1 + _DAT_11275abc8);
  _objc_storeStrong(param_1 + _DAT_11275abb0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275abac,0);
  return;
}



/* Entry: 106c00a50; end: 106c00b2b; -[SCServerDrivenTermsOfUseService acceptTermsOfUse:] */

void FUN_106c00a50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c298be0(param_3);
  func_0x00010c1da520(uVar1,param_2,uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c298be0(param_3);
  func_0x00010c1b9380(uVar1,param_2,uVar2);
  _objc_release(uVar1);
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c298be0(param_3);
    func_0x00010bed24a0(param_1,param_2,uVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = param_3;
  func_0x00010c298be0(param_3);
  uVar1 = param_3;
  func_0x00010bf442a0(param_3);
  func_0x00010c0af380(uVar3,param_2,1,uVar2,(long)(int)uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c00b2c; end: 106c00ba3; -[SCServerDrivenTermsOfUseService acceptRemindMeLaterTermsOfUse:] */

void FUN_106c00b2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010c298be0(param_3);
  func_0x00010bed2660(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = param_3;
  func_0x00010c298be0(param_3);
  uVar2 = param_3;
  func_0x00010bf442a0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0af390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar3,PTR_s_logServerDrivenTermsOfUseAction__1126096f0,2,uVar1,(long)(int)uVar2);
  return;
}



/* Entry: 106c00ba4; end: 106c00bef; -[SCServerDrivenTermsOfUseService tosPromptType] */

undefined8 FUN_106c00ba4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf60080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf442a0();
  func_0x00010bde39e0(param_1,param_2,uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106c00bf0; end: 106c00bf3; -[SCServerDrivenTermsOfUseService latestTosMetaData] */

void FUN_106c00bf0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf60090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_currentShowingTosMetadata_1125b59c8);
  return;
}



/* Entry: 106c00bf4; end: 106c00c53; -[SCServerDrivenTermsOfUseService setServerDrivenTosPromptDidShow:] */

void FUN_106c00bf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c298be0(param_3);
  uVar2 = param_3;
  func_0x00010bf442a0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0af390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar3,PTR_s_logServerDrivenTermsOfUseAction__1126096f0,0,uVar1,(long)(int)uVar2);
  return;
}



/* Entry: 106c00c54; end: 106c00c5f; -[SCServerDrivenTermsOfUseService latestTermsOfUseVersion] */

undefined ** FUN_106c00c54(void)

{
  return &PTR____CFConstantStringClassReference_110e78f78;
}



/* Entry: 106c00c60; end: 106c00cc3; -[SCServerDrivenTermsOfUseService _updateCheckCountAndLogComplianceStatus:countAction:isCompliant:tosAvailable:tosVersion:] */

void FUN_106c00c60(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined4 param_7)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  undefined1 uStack_17;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106c00cc4;
  puStack_38 = &UNK_110861ef8;
  lStack_30 = param_1;
  uStack_28 = param_4;
  uStack_20 = param_3;
  uStack_1c = param_7;
  uStack_18 = param_5;
  uStack_17 = param_6;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_50);
  return;
}



/* Entry: 106c00cc4; end: 106c00d6f;  */

void FUN_106c00cc4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf442e0();
  _objc_release(uVar1);
  if ((*(long *)(param_1 + 0x28) == 1) || (*(long *)(param_1 + 0x28) == 2)) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17fd20();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0af3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),
             PTR_s_logServerDrivenTermsOfUseComplia_1126096f8,(long)*(int *)(param_1 + 0x30),
             (long)((int)uVar2 + 1),*(undefined1 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x39),
             (long)*(int *)(param_1 + 0x34));
  return;
}



/* Entry: 106c00d70; end: 106c00dd7; -[SCServerDrivenTermsOfUseService _isValidHTMLString:] */

undefined8 FUN_106c00d70(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (((param_3 == 0) ||
      (uVar1 = param_3,
      func_0x00010bfda7c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e78f38),
      (int)uVar1 == 0)) ||
     (uVar1 = param_3,
     func_0x00010bfdcf80(param_3,param_2,&PTR____CFConstantStringClassReference_110e78f58),
     (uVar1 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106c00dd8; end: 106c00def; -[SCServerDrivenTermsOfUseService _complianceRequirementToTosPromptType:] */

undefined1 FUN_106c00dd8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 106c00df0; end: 106c00e73; -[SCServerDrivenTermsOfUseService _cachedTOSHtmlString:] */

void FUN_106c00df0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_106bfec44();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf89320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106c00e74; end: 106c0110b; -[SCServerDrivenTermsOfUseService _saveTOSHTMLContentFromLoginIfNeeded:locale:htmlString:] */

void FUN_106c00e74(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  lVar2 = param_3;
  if (((lVar1 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) &&
     (lVar1 = param_5, func_0x00010c08fa60(), lVar1 != 0)) {
    func_0x00010c25ce40(param_3,param_2,&PTR____CFConstantStringClassReference_110db3638);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar1 = lVar2;
    func_0x00010c25ce40(lVar2,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf89320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar4;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c257400();
      _objc_release(uVar5);
    }
    _objc_release(lVar4);
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106c0110c; end: 106c01197;  */

void FUN_106c0110c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c067ec0(uVar2);
  func_0x00010c1b9380(uVar3,param_2,uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106c01198; end: 106c01243; -[SCServerDrivenTermsOfUseService _notAcceptedTOSVersionData:] */

void FUN_106c01198(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c08af20();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c298be0();
  if ((int)uVar3 < (int)uVar1) {
    _objc_retain(param_3);
    uVar3 = param_3;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = param_3;
    func_0x00010bf442a0(param_3);
    func_0x00010c0af3a0(uVar2,param_2,(long)(int)uVar1,0,1,0,(long)(int)uVar3);
    uVar3 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106c01244; end: 106c01293; -[SCServerDrivenTermsOfUseService _hasAckedTermsOfUseVersion:] */

bool FUN_106c01244(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c275e20();
  _objc_release(uVar1);
  return (ulong)(long)param_3 <= uVar2;
}



/* Entry: 106c01294; end: 106c012cb; -[SCServerDrivenTermsOfUseService _resetAckedTermsOfUseFromSUP] */

void FUN_106c01294(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c012cc; end: 106c01303; -[SCServerDrivenTermsOfUseService _resetAcceptedTermsOfUse] */

void FUN_106c012cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c01304; end: 106c013e7; -[SCServerDrivenTermsOfUseService _updateAcceptedTermsOfUseVersion:] */

void FUN_106c01304(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar2 = &puStack_60;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,uVar1);
  _objc_release(uVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106c013e8;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock(&puStack_60);
  func_0x00010bed24c0(param_1);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106c013e8; end: 106c01417;  */

void FUN_106c013e8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1da520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c01418; end: 106c015df; -[SCServerDrivenTermsOfUseService _updateAcceptedTermsOfUseVersionViaAtlasGW:successBlock:] */

void FUN_106c01418(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c0ca0;
  func_0x00010c0cb140(PTR_PTR_1126c0ca0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160d40();
  _objc_initWeak(auStack_58,param_1);
  puVar2 = PTR_PTR_1126ae988;
  _objc_alloc(PTR_PTR_1126ae988);
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_3;
  _objc_retain(param_4);
  _objc_opt_class(PTR_PTR_1126c0ca8);
  func_0x00010c0199c0(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 106c015e0; end: 106c0168b;  */

void FUN_106c015e0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      func_0x00010c0a02c0(*(undefined8 *)(lVar1 + 0x28));
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
    else {
      if (param_2 == 0) {
        uVar2 = *(undefined8 *)(lVar1 + 0x28);
      }
      else {
        func_0x000108c7d39c(param_2);
        uVar2 = *(undefined8 *)(lVar1 + 0x28);
      }
      func_0x00010c0a02c0(uVar2);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c0168c; end: 106c016c7; -[SCServerDrivenTermsOfUseService _updateAckedTermsOfUseVersion:] */

void FUN_106c0168c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c016c8; end: 106c016d3; -[SCServerDrivenTermsOfUseService cachedTOSHtmlString] */

void FUN_106c016c8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x60,1);
  return;
}



/* Entry: 106c016d4; end: 106c016db; -[SCServerDrivenTermsOfUseService setCachedTOSHtmlString:] */

void FUN_106c016d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 106c016dc; end: 106c016e7; -[SCServerDrivenTermsOfUseService currentShowingTosMetadata] */

void FUN_106c016dc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x68,1);
  return;
}



/* Entry: 106c016e8; end: 106c016ef; -[SCServerDrivenTermsOfUseService setCurrentShowingTosMetadata:] */

void FUN_106c016e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 106c016f0; end: 106c01797; -[SCServerDrivenTermsOfUseService .cxx_destruct] */

void FUN_106c016f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 106c01798; end: 106c017a3; -[SCFeatureSettingsService hasTosPromptAckedVersion] */

void FUN_106c01798(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e78f98);
  return;
}



/* Entry: 106c017a4; end: 106c017af; -[SCFeatureSettingsService tosPromptAckedVersionServerParam] */

undefined ** FUN_106c017a4(void)

{
  return &PTR____CFConstantStringClassReference_110e78f98;
}



/* Entry: 106c017b0; end: 106c017bf; -[SCFeatureSettingsService setTosPromptAckedVersion:] */

void FUN_106c017b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e78f98,param_3);
  return;
}



/* Entry: 106c017c0; end: 106c017c7; -[SCFeatureSettingsService tos_prompt_acked_version_client_value:] */

void FUN_106c017c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106c017c8; end: 106c017cf; -[SCFeatureSettingsService tos_prompt_acked_version_server_value:] */

void FUN_106c017c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106c017d0; end: 106c017df; -[SCFeatureSettingsService tosPromptAckedVersion] */

void FUN_106c017d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e78f98,0);
  return;
}



/* Entry: 106c017e0; end: 106c01887; -[SCPreferences hasAcceptedTermsOfUseVersion:] */

ulong FUN_106c017e0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = param_1;
  func_0x00010be9a6c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar3);
  uVar1 = param_1;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  if (uVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bf1f3c0(param_1);
  }
  _objc_release(uVar1);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 106c01888; end: 106c0192f; -[SCPreferences isUpdatingTermsOfUseVersion:] */

ulong FUN_106c01888(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = param_1;
  func_0x00010be9a6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar3);
  uVar1 = param_1;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  if (uVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bf1f3c0(param_1);
  }
  _objc_release(uVar1);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 106c01930; end: 106c0199f; -[SCPreferences setTermsOfUseVersion:accepted:] */

void FUN_106c01930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010be9a6c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1,param_2,puVar2,uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c019a0; end: 106c01a0f; -[SCPreferences setTermsOfUseVersion:isUpdating:] */

void FUN_106c019a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010be9a6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1,param_2,puVar2,uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c01a10; end: 106c01a9f; -[SCPreferences downloadedTosHtmlString:] */

void FUN_106c01a10(ulong param_1)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  ulong uVar4;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110e78ff8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e78ff8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar3);
  uVar1 = param_1;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c01aa0; end: 106c01b03; -[SCPreferences downloadedTosHtmlKeySet] */

void FUN_106c01aa0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e79018);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_class(PTR__OBJC_CLASS___NSSet_1126ae870);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c01b04; end: 106c01b8f; -[SCPreferences store:htmlString:] */

void FUN_106c01b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e78ff8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e78ff8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1,param_2,param_4,ppuVar1);
  func_0x00010bed7260(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106c01b90; end: 106c01bdb; -[SCPreferences setPendingUpdatingServerDrivenTermsOfUseVersion:] */

void FUN_106c01b90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110e79058);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c01bdc; end: 106c01c5f; -[SCPreferences complianceStatusCheckCount] */

ulong FUN_106c01bdc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e79078);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  if (uVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010c067ec0(param_1);
  }
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106c01c60; end: 106c01cab; -[SCPreferences setComplianceStatusCheckCount:] */

void FUN_106c01c60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110e79078);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c01cac; end: 106c01d2f; -[SCPreferences latestAcceptedServerDrivenTermsOfUseVersion] */

ulong FUN_106c01cac(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e79038);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  if (uVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010c067ec0(param_1);
  }
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106c01d30; end: 106c01d7b; -[SCPreferences setLatestAcceptedServerDrivenTermsOfUseVersion:] */

void FUN_106c01d30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110e79038);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c01d7c; end: 106c01e33; -[SCPreferences _updateDownloadedTosHtmlKeySet:htmlString:] */

void FUN_106c01d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf89300(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c226ce0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010c12d360();
  }
  else {
    func_0x00010befa120();
  }
  _objc_release(param_3);
  _objc_retain(puVar2);
  _objc_release(uVar1);
  func_0x00010c1d0640(param_1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e79018);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106c01e34; end: 106c01e3f; -[SCPreferences _scTosVersionToHasAcceptedPreferencesKey:] */

undefined ** FUN_106c01e34(void)

{
  return &PTR____CFConstantStringClassReference_110e78fb8;
}



/* Entry: 106c01e40; end: 106c01e4b; -[SCPreferences _scTosVersionToIsUpdatingPreferencesKey:] */

undefined ** FUN_106c01e40(void)

{
  return &PTR____CFConstantStringClassReference_110e78fd8;
}



/* Entry: 106c01e4c; end: 106c01f73; -[SCTermsOfUsePreferencesDefaultsRepository hasAcceptedTermsOfUseVersion:] */

uint FUN_106c01e4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd39a0();
  _objc_release(uVar2);
  lVar4 = param_1;
  func_0x00010be9a6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(ulong *)(param_1 + 0x10);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar7 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar6);
  uVar1 = uVar5;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar7 = uVar1;
  func_0x00010bf1f3c0(uVar1);
  _objc_release(uVar1);
  func_0x000106bfebcc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be54140(param_1);
  func_0x00010be54120(param_1);
  func_0x00010c1a5700(param_1);
  _objc_release(param_3);
  _objc_release(lVar4);
  return ((uint)uVar3 | (uint)uVar7) & 1;
}



/* Entry: 106c01f74; end: 106c0201b; -[SCTermsOfUsePreferencesDefaultsRepository setHasAcceptedTermsOfUseVersion:accepted:] */

void FUN_106c01f74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212e40();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9a6a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_2,puVar2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106c0201c; end: 106c02063; -[SCTermsOfUsePreferencesDefaultsRepository isUpdateingTermsOfUseVersion:] */

undefined8 FUN_106c0201c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c082380();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106c02064; end: 106c020af; -[SCTermsOfUsePreferencesDefaultsRepository setIsUpdateingTermsOfUseVersion:isUpdating:] */

void FUN_106c02064(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c020b0; end: 106c020e3; -[SCTermsOfUsePreferencesDefaultsRepository resetTermsOfUseData] */

/* WARNING: Possible PIC construction at 0x000106c020c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106c020cc) */

void FUN_106c020b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a5710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setHasAcceptedTermsOfUseVersion__112646fe0,0,0);
  return;
}



/* Entry: 106c020e4; end: 106c0214f; -[SCTermsOfUsePreferencesDefaultsRepository downloadedTosHtmlString:] */

void FUN_106c020e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf89320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c02150; end: 106c02197; -[SCTermsOfUsePreferencesDefaultsRepository downloadedTosHtmlKeySet] */

void FUN_106c02150(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf89300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c02198; end: 106c02207; -[SCTermsOfUsePreferencesDefaultsRepository store:htmlString:] */

void FUN_106c02198(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c257400();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c02208; end: 106c0236f; -[SCTermsOfUsePreferencesDefaultsRepository latestAcceptedServerDrivenTermsOfUseVersion] */

int FUN_106c02208(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c08af20();
  _objc_release(uVar3);
  uVar5 = *(ulong *)(param_1 + 0x10);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar7 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar6);
  uVar2 = uVar5;
  if ((uVar7 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar5);
  uVar7 = uVar2;
  func_0x00010c067ec0();
  _objc_release(uVar2);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126d14f8;
  _objc_opt_new(PTR_PTR_1126d14f8);
  FUN_106c03034();
  FUN_106c03034(puVar9,&PTR____CFConstantStringClassReference_110e790f8,puVar8,1);
  iVar1 = (int)uVar4;
  if ((int)uVar4 <= (int)uVar7) {
    iVar1 = (int)uVar7;
  }
  func_0x00010c1b9380(param_1);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  return iVar1;
}



/* Entry: 106c02370; end: 106c023f3; -[SCTermsOfUsePreferencesDefaultsRepository setLatestAcceptedServerDrivenTermsOfUseVersion:] */

void FUN_106c02370(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9380();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e790b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106c023f4; end: 106c0242f; -[SCTermsOfUsePreferencesDefaultsRepository setPendingUpdatingServerDrivenTermsOfUseVersion:] */

void FUN_106c023f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1da520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c02430; end: 106c0246f; -[SCTermsOfUsePreferencesDefaultsRepository complianceStatusCheckCount] */

undefined8 FUN_106c02430(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf442e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106c02470; end: 106c024ab; -[SCTermsOfUsePreferencesDefaultsRepository setComplianceStatusCheckCount:] */

void FUN_106c02470(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17fd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c024ac; end: 106c024b7; -[SCTermsOfUsePreferencesDefaultsRepository _scTosVersionToHasAcceptedDefaultsKey:] */

undefined ** FUN_106c024ac(void)

{
  return &PTR____CFConstantStringClassReference_110e79098;
}



/* Entry: 106c024b8; end: 106c024cb; -[SCTermsOfUsePreferencesDefaultsRepository _logGrapheneCounterForPreferences:accepted:] */

void FUN_106c024b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be54190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logGrapheneCounterWithSource_ve_112572a00,
             &PTR____CFConstantStringClassReference_110e790d8,param_3,param_4);
  return;
}



/* Entry: 106c024cc; end: 106c024df; -[SCTermsOfUsePreferencesDefaultsRepository _logGrapheneCounterForDefaults:accepted:] */

void FUN_106c024cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be54190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logGrapheneCounterWithSource_ve_112572a00,
             &PTR____CFConstantStringClassReference_110e790f8,param_3,param_4);
  return;
}



/* Entry: 106c024e0; end: 106c0262f; -[SCTermsOfUsePreferencesDefaultsRepository _logGrapheneCounterWithSource:version:accepted:] */

void FUN_106c024e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126d1510;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c277120(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dad3f8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c26b4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar7);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 106c02630; end: 106c0266b; -[SCTermsOfUsePreferencesDefaultsRepository .cxx_destruct] */

void FUN_106c02630(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c0266c; end: 106c02697; +[SCGrapheneTermsOfUseMetric touShow] */

void FUN_106c0266c(void)

{
  _objc_alloc(PTR_PTR_1126d1510);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c02698; end: 106c026c3; +[SCGrapheneTermsOfUseMetric touAccept] */

void FUN_106c02698(void)

{
  _objc_alloc(PTR_PTR_1126d1510);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c026c4; end: 106c026ef; +[SCGrapheneTermsOfUseMetric touLogout] */

void FUN_106c026c4(void)

{
  _objc_alloc(PTR_PTR_1126d1510);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c026f0; end: 106c0271b; +[SCGrapheneTermsOfUseMetric touPreferenceNull] */

void FUN_106c026f0(void)

{
  _objc_alloc(PTR_PTR_1126d1510);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c0271c; end: 106c02747; +[SCGrapheneTermsOfUseMetric touUpdateResponse] */

void FUN_106c0271c(void)

{
  _objc_alloc(PTR_PTR_1126d1510);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c02748; end: 106c02773; +[SCGrapheneTermsOfUseMetric touClientProperties] */

void FUN_106c02748(void)

{
  _objc_alloc(PTR_PTR_1126d1510);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c02774; end: 106c0279f; +[SCGrapheneTermsOfUseMetric touData] */

void FUN_106c02774(void)

{
  _objc_alloc(PTR_PTR_1126d1510);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c027a0; end: 106c027cb; +[SCGrapheneTermsOfUseMetric touRemindLater] */

void FUN_106c027a0(void)

{
  _objc_alloc(PTR_PTR_1126d1510);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c027cc; end: 106c0286b; -[SCGrapheneTermsOfUseMetric description] */

void FUN_106c027cc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e79118;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e79118,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f5b58;
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



/* Entry: 106c0286c; end: 106c029f3; -[SCGrapheneRegistry termsOfUseGraphene] */

void FUN_106c0286c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106c028f4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c6dd8 != -1) {
    func_0x00010002a2fc(0x1136c6dd8,&puStack_48);
  }
  uVar1 = uRam00000001136c6dd0;
  _objc_retain(uRam00000001136c6dd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c029f4; end: 106c02d27;  */

/* WARNING: Removing unreachable block (ram,0x000106c02ffc) */
/* WARNING: Removing unreachable block (ram,0x000106c02ce8) */
/* WARNING: Removing unreachable block (ram,0x000106c034ac) */

undefined1 **
FUN_106c029f4(long param_1,undefined1 **param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 **ppuVar2;
  undefined8 *puVar3;
  undefined1 **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 **ppuVar7;
  undefined1 **ppuVar8;
  undefined1 ***pppuVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 **ppuVar21;
  long lVar22;
  undefined8 *puVar23;
  long *plVar24;
  undefined8 *unaff_x25;
  undefined1 **ppuStack_4a0;
  undefined *puStack_498;
  undefined8 *puStack_490;
  undefined1 *puStack_488;
  undefined1 **ppuStack_480;
  undefined1 **ppuStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 *puStack_448;
  undefined1 **appuStack_440 [2];
  char cStack_429;
  long lStack_428;
  undefined8 *puStack_420;
  undefined1 *puStack_418;
  undefined1 **ppuStack_410;
  undefined1 **ppuStack_408;
  undefined8 ***pppuStack_400;
  code *pcStack_3f8;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 *puStack_3d0;
  undefined1 auStack_3c8 [24];
  undefined8 auStack_3b0 [2];
  char cStack_399;
  long lStack_398;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined1 **ppuStack_378;
  undefined8 *puStack_370;
  undefined1 **ppuStack_368;
  undefined8 ***pppuStack_360;
  code *pcStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined1 *puStack_338;
  undefined8 auStack_330 [3];
  undefined1 auStack_318 [24];
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined1 **ppuStack_2b8;
  undefined8 *puStack_2b0;
  undefined1 **ppuStack_2a8;
  undefined1 ***pppuStack_2a0;
  code *pcStack_298;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 *puStack_270;
  undefined8 auStack_268 [2];
  char cStack_251;
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined1 **ppuStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined1 **ppuStack_208;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 auStack_1c8 [3];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined8 auStack_168 [2];
  char cStack_151;
  long alStack_150 [2];
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 auStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar21 = param_2;
  puVar1 = param_3;
  puVar5 = param_4;
  puVar3 = param_5;
  puVar14 = param_6;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar24 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined1 **)0x0) {
      ppuVar21 = (undefined1 **)&UNK_10f3bfd47;
    }
    else {
      ppuVar21 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_b8,ppuVar21);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3bfd47;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3bfd47;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3bfd47;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x00010007e1e8(&uStack_d8,auStack_b8,&lStack_58,4);
    ppuVar21 = (undefined1 **)&UNK_110968350;
    unaff_x25 = &uStack_d8;
    puVar1 = &uStack_d8;
    (**(code **)(*plVar24 + 0x18))(plVar24);
    puStack_c0 = unaff_x25;
    func_0x00010007e5dc(&puStack_c0);
    lVar22 = 0;
    puVar5 = param_6;
    do {
      if ((&cStack_59)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  ppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puVar16 = auStack_b8;
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != puVar16);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_e8 = FUN_106c02d28;
  alStack_150[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar21;
  puVar13 = puVar1;
  puVar17 = puVar5;
  puVar19 = puVar3;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar21);
  _objc_retain(puVar5);
  _objc_retain(puVar14);
  if (ppuVar2 != (undefined1 **)0x0) {
    plVar24 = (long *)ppuVar2[1];
    _objc_retain(ppuVar21);
    if (ppuVar21 == (undefined1 **)0x0) {
      ppuVar2 = (undefined1 **)&UNK_10f3bfd47;
    }
    else {
      ppuVar2 = ppuVar21;
      _objc_retainAutorelease(ppuVar21);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar21);
    func_0x00010002b838(auStack_1c8,ppuVar2);
    puVar12 = &UNK_10f3bfda1;
    if ((int)puVar1 == 0) {
      puVar12 = &UNK_10f3bfda6;
    }
    func_0x00010002b838(auStack_1b0,puVar12);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3bfd47;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar1 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_198,puVar1);
    puVar1 = auStack_1c8;
    puVar12 = &UNK_10f3bfda1;
    if ((int)puVar3 == 0) {
      puVar12 = &UNK_10f3bfda6;
    }
    func_0x00010002b838(auStack_180,puVar12);
    _objc_retain(puVar14);
    if (puVar14 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3bfd47;
    }
    else {
      _objc_retainAutorelease(puVar14);
      puVar3 = puVar14;
      func_0x00010bdc3520();
    }
    _objc_release(puVar14);
    func_0x00010002b838(auStack_168,puVar3);
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    func_0x00010007e1e8(&uStack_1e8,auStack_1c8,alStack_150,5);
    ppuVar7 = (undefined1 **)&UNK_1109683a0;
    puVar16 = &uStack_1e8;
    puVar13 = &uStack_1e8;
    (**(code **)(*plVar24 + 0x18))(plVar24);
    puStack_1d0 = puVar16;
    func_0x00010007e5dc(&puStack_1d0);
    lVar22 = 0;
    puVar17 = param_7;
    do {
      if ((&cStack_151)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_168 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x78);
  }
  _objc_release(puVar14);
  _objc_release(puVar5);
  ppuVar2 = ppuVar21;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_150[0]) {
    ___stack_chk_fail();
    _objc_release(puVar14);
    puVar23 = auStack_1c8;
    do {
      puVar16 = puVar16 + -3;
    } while (puVar16 != puVar23);
    _objc_release(puVar14);
    _objc_release(puVar5);
    _objc_release(ppuVar21);
    ppuVar4 = ppuVar2;
    __Unwind_Resume();
    pcStack_1f8 = FUN_106c03034;
    lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar8 = ppuVar7;
    puVar6 = puVar13;
    puVar18 = puVar17;
    puStack_230 = puVar16;
    puStack_228 = puVar23;
    ppuStack_220 = ppuVar2;
    puStack_218 = puVar14;
    puStack_210 = puVar5;
    ppuStack_208 = ppuVar21;
    ppuStack_200 = &puStack_f0;
    _objc_retain(ppuVar7);
    _objc_retain(puVar13);
    puVar5 = (undefined8 *)0x0;
    if (ppuVar4 != (undefined1 **)0x0) {
      plVar24 = (long *)ppuVar4[1];
      _objc_retain(ppuVar7);
      if (ppuVar7 == (undefined1 **)0x0) {
        ppuVar21 = (undefined1 **)&UNK_10f3bfd47;
      }
      else {
        ppuVar21 = ppuVar7;
        _objc_retainAutorelease(ppuVar7);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar7);
      puVar16 = auStack_268;
      func_0x00010002b838(auStack_268,ppuVar21);
      _objc_retain(puVar13);
      if (puVar13 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&UNK_10f3bfd47;
      }
      else {
        _objc_retainAutorelease(puVar13);
        puVar5 = puVar13;
        func_0x00010bdc3520(puVar13);
      }
      _objc_release(puVar13);
      func_0x00010002b838(auStack_250,puVar5);
      uStack_288 = 0;
      uStack_280 = 0;
      uStack_278 = 0;
      func_0x00010007e1e8(&uStack_288,auStack_268,&lStack_238,2);
      ppuVar8 = (undefined1 **)&UNK_1109683f0;
      puVar23 = &uStack_288;
      puVar6 = &uStack_288;
      (**(code **)(*plVar24 + 0x18))(plVar24);
      puStack_270 = puVar23;
      func_0x00010007e5dc(&puStack_270);
      lVar22 = 0;
      puVar5 = auStack_268;
      puVar18 = puVar17;
      do {
        if ((&cStack_239)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_250 + lVar22));
        }
        lVar22 = lVar22 + -0x18;
      } while (lVar22 != -0x30);
    }
    _objc_release(puVar13);
    ppuVar21 = ppuVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
      return ppuVar21;
    }
    ___stack_chk_fail();
    _objc_release(puVar13);
    if (cStack_251 < '\0') {
      __ZdlPv(auStack_268[0]);
    }
    _objc_release(puVar13);
    _objc_release(ppuVar7);
    ppuVar4 = ppuVar21;
    __Unwind_Resume();
    puVar15 = &uStack_350;
    pcStack_298 = FUN_106c03264;
    lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar2 = ppuVar8;
    puVar14 = puVar6;
    puVar17 = puVar18;
    puVar20 = puVar19;
    puStack_2e0 = puVar1;
    puStack_2d8 = puVar3;
    puStack_2d0 = puVar16;
    puStack_2c8 = puVar23;
    puStack_2c0 = puVar5;
    ppuStack_2b8 = ppuVar21;
    puStack_2b0 = puVar13;
    ppuStack_2a8 = ppuVar7;
    pppuStack_2a0 = &ppuStack_200;
    _objc_retain(ppuVar8);
    _objc_retain(puVar18);
    if (ppuVar4 != (undefined1 **)0x0) {
      plVar24 = (long *)ppuVar4[1];
      _objc_retain(ppuVar8);
      if (ppuVar8 == (undefined1 **)0x0) {
        ppuVar21 = (undefined1 **)&UNK_10f3bfd47;
      }
      else {
        ppuVar21 = ppuVar8;
        _objc_retainAutorelease(ppuVar8);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar8);
      func_0x00010002b838(auStack_330,ppuVar21);
      puVar12 = &UNK_10f3bfda1;
      if ((int)puVar6 == 0) {
        puVar12 = &UNK_10f3bfda6;
      }
      func_0x00010002b838(auStack_318,puVar12);
      _objc_retain(puVar18);
      if (puVar18 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)&UNK_10f3bfd47;
      }
      else {
        _objc_retainAutorelease(puVar18);
        puVar6 = puVar18;
        func_0x00010bdc3520();
      }
      _objc_release(puVar18);
      func_0x00010002b838(auStack_300,puVar6);
      uStack_350 = 0;
      uStack_348 = 0;
      uStack_340 = 0;
      func_0x00010007e1e8(&uStack_350,auStack_330,&lStack_2e8,3);
      ppuVar2 = (undefined1 **)&UNK_110968440;
      (**(code **)(*plVar24 + 0x18))(plVar24);
      puStack_338 = (undefined1 *)&uStack_350;
      func_0x00010007e5dc(&puStack_338);
      lVar22 = 0;
      puVar14 = puVar15;
      puVar17 = puVar19;
      do {
        if ((&cStack_2e9)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar22));
        }
        lVar22 = lVar22 + -0x18;
        puVar23 = &uStack_350;
      } while (lVar22 != -0x48);
    }
    _objc_release(puVar18);
    ppuVar21 = ppuVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
      return ppuVar21;
    }
    ___stack_chk_fail();
    _objc_release(puVar18);
    puStack_380 = auStack_330;
    do {
      puVar23 = puVar23 + -3;
    } while (puVar23 != puStack_380);
    _objc_release(puVar18);
    _objc_release(ppuVar8);
    ppuVar7 = ppuVar21;
    __Unwind_Resume();
    pcStack_358 = FUN_106c034dc;
    lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar4 = ppuVar2;
    puVar1 = puVar14;
    puVar5 = puVar17;
    puStack_390 = puVar6;
    puStack_388 = puVar23;
    ppuStack_378 = ppuVar21;
    puStack_370 = puVar18;
    ppuStack_368 = ppuVar8;
    pppuStack_360 = &pppuStack_2a0;
    _objc_retain(ppuVar2);
    iVar11 = (int)ppuVar4;
    puVar3 = (undefined8 *)0x0;
    if (ppuVar7 != (undefined1 **)0x0) {
      plVar24 = (long *)ppuVar7[1];
      _objc_retain(ppuVar2);
      if (ppuVar2 == (undefined1 **)0x0) {
        ppuVar21 = (undefined1 **)&UNK_10f3bfd47;
      }
      else {
        ppuVar21 = ppuVar2;
        _objc_retainAutorelease(ppuVar2);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar2);
      func_0x00010002b838(auStack_3c8,ppuVar21);
      puVar12 = &UNK_10f3bfda1;
      if ((int)puVar14 == 0) {
        puVar12 = &UNK_10f3bfda6;
      }
      func_0x00010002b838(auStack_3b0,puVar12);
      uStack_3e8 = 0;
      uStack_3e0 = 0;
      uStack_3d8 = 0;
      func_0x00010007e1e8(&uStack_3e8,auStack_3c8,&lStack_398,2);
      puVar12 = &UNK_110968490;
      puVar14 = &uStack_3e8;
      puVar1 = &uStack_3e8;
      (**(code **)(*plVar24 + 0x18))(plVar24);
      puStack_3d0 = puVar14;
      func_0x00010007e5dc(&puStack_3d0);
      lVar22 = 0;
      puVar3 = (undefined8 *)auStack_3c8;
      puVar5 = puVar17;
      do {
        if ((&cStack_399)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3b0 + lVar22));
        }
        iVar11 = (int)puVar12;
        lVar22 = lVar22 + -0x18;
      } while (lVar22 != -0x30);
    }
    ppuVar21 = ppuVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_398) {
      ___stack_chk_fail();
      _objc_release(ppuVar2);
      _objc_release(ppuVar2);
      ppuVar8 = ppuVar21;
      __Unwind_Resume();
      puVar13 = &uStack_460;
      pcStack_3f8 = FUN_106c036c4;
      lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar7 = (undefined1 **)0x0;
      puVar16 = puVar1;
      puStack_420 = puVar14;
      puStack_418 = (undefined1 *)puVar3;
      ppuStack_410 = ppuVar21;
      ppuStack_408 = ppuVar2;
      pppuStack_400 = &pppuStack_360;
      if (ppuVar8 != (undefined1 **)0x0) {
        ppuVar21 = (undefined1 **)ppuVar8[1];
        puVar12 = &UNK_10f3bfda1;
        if (iVar11 == 0) {
          puVar12 = &UNK_10f3bfda6;
        }
        func_0x00010002b838(appuStack_440,puVar12);
        uStack_460 = 0;
        uStack_458 = 0;
        uStack_450 = 0;
        func_0x00010007e1e8(&uStack_460,appuStack_440,&lStack_428,1);
        (**(code **)(*ppuVar21 + 0x18))(ppuVar21,&UNK_1109684e0);
        ppuVar7 = &puStack_448;
        puStack_448 = (undefined1 *)&uStack_460;
        func_0x00010007e5dc();
        puVar16 = puVar13;
        puVar5 = puVar1;
        puVar3 = &uStack_460;
        if (cStack_429 < '\0') {
          ppuVar7 = appuStack_440[0];
          __ZdlPv();
          puVar16 = puVar13;
          puVar5 = puVar1;
          puVar3 = &uStack_460;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_428) {
        ___stack_chk_fail();
        puStack_448 = (undefined1 *)puVar3;
        func_0x00010007e5dc(&puStack_448);
        if (cStack_429 < '\0') {
          __ZdlPv(appuStack_440[0]);
        }
        ppuVar2 = ppuVar7;
        __Unwind_Resume();
        pppuVar9 = &ppuStack_4a0;
        pcStack_468 = FUN_106c037dc;
        puStack_490 = puVar14;
        puStack_488 = (undefined1 *)puVar3;
        ppuStack_480 = ppuVar21;
        ppuStack_478 = ppuVar7;
        pppuStack_470 = &pppuStack_400;
        _objc_retain(puVar16);
        _objc_retain(puVar5);
        _objc_retain(puVar20);
        puStack_498 = PTR_PTR_1126f5b68;
        ppuStack_4a0 = ppuVar2;
        _objc_msgSendSuper2(&ppuStack_4a0,PTR_s_init_1125d9248);
        if (pppuVar9 != (undefined1 ***)0x0) {
          _objc_retain(puVar16);
          puVar10 = (undefined1 *)pppuVar9[1];
          pppuVar9[1] = (undefined1 **)puVar16;
          _objc_release(puVar10);
          _objc_retain(puVar5);
          puVar10 = (undefined1 *)pppuVar9[3];
          pppuVar9[3] = (undefined1 **)puVar5;
          _objc_release(puVar10);
          _objc_retain(puVar20);
          puVar10 = (undefined1 *)pppuVar9[4];
          pppuVar9[4] = (undefined1 **)puVar20;
          _objc_release(puVar10);
        }
        _objc_release(puVar20);
        _objc_release(puVar5);
        _objc_release(puVar16);
        return (undefined1 **)pppuVar9;
      }
      return ppuVar7;
    }
    return ppuVar21;
  }
  return ppuVar2;
}



/* Entry: 106c02d28; end: 106c03033;  */

/* WARNING: Removing unreachable block (ram,0x000106c02ffc) */
/* WARNING: Removing unreachable block (ram,0x000106c034ac) */

undefined1 **
FUN_106c02d28(long param_1,undefined1 **param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined8 *puVar4;
  undefined1 **ppuVar5;
  undefined8 *puVar6;
  undefined1 **ppuVar7;
  undefined1 ***pppuVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 **ppuVar19;
  long lVar20;
  long *plVar21;
  undefined8 *unaff_x24;
  undefined1 **ppuStack_3c0;
  undefined *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined1 *puStack_3a8;
  undefined1 **ppuStack_3a0;
  undefined1 **ppuStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined1 **appuStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined1 *puStack_338;
  undefined1 **ppuStack_330;
  undefined1 **ppuStack_328;
  undefined8 ***pppuStack_320;
  code *pcStack_318;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 *puStack_2f0;
  undefined1 auStack_2e8 [24];
  undefined8 auStack_2d0 [2];
  char cStack_2b9;
  long lStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined1 **ppuStack_298;
  undefined8 *puStack_290;
  undefined1 **ppuStack_288;
  undefined1 ***pppuStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 *puStack_258;
  undefined8 auStack_250 [3];
  undefined1 auStack_238 [24];
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined1 **ppuStack_1d8;
  undefined8 *puStack_1d0;
  undefined1 **ppuStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 auStack_188 [2];
  char cStack_171;
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined1 **ppuStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined1 **ppuStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 auStack_e8 [3];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 auStack_88 [2];
  char cStack_71;
  long alStack_70 [2];
  
  alStack_70[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar19 = param_2;
  puVar1 = param_3;
  puVar12 = param_4;
  puVar16 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_1 != 0) {
    plVar21 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined1 **)0x0) {
      ppuVar19 = (undefined1 **)&UNK_10f3bfd47;
    }
    else {
      ppuVar19 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_e8,ppuVar19);
    puVar11 = &UNK_10f3bfda1;
    if ((int)param_3 == 0) {
      puVar11 = &UNK_10f3bfda6;
    }
    func_0x00010002b838(auStack_d0,puVar11);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3bfd47;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_b8,puVar1);
    param_3 = auStack_e8;
    puVar11 = &UNK_10f3bfda1;
    if ((int)param_5 == 0) {
      puVar11 = &UNK_10f3bfda6;
    }
    func_0x00010002b838(auStack_a0,puVar11);
    _objc_retain(param_6);
    if (param_6 == (undefined8 *)0x0) {
      param_5 = (undefined8 *)&UNK_10f3bfd47;
    }
    else {
      _objc_retainAutorelease(param_6);
      param_5 = param_6;
      func_0x00010bdc3520();
    }
    _objc_release(param_6);
    func_0x00010002b838(auStack_88,param_5);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    func_0x00010007e1e8(&uStack_108,auStack_e8,alStack_70,5);
    ppuVar19 = (undefined1 **)&UNK_1109683a0;
    unaff_x24 = &uStack_108;
    puVar1 = &uStack_108;
    (**(code **)(*plVar21 + 0x18))(plVar21);
    puStack_f0 = unaff_x24;
    func_0x00010007e5dc(&puStack_f0);
    lVar20 = 0;
    puVar12 = param_7;
    do {
      if ((&cStack_71)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_88 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x78);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  ppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_70[0]) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  puVar4 = auStack_e8;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar4);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_2);
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  pcStack_118 = FUN_106c03034;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar19;
  puVar6 = puVar1;
  puVar14 = puVar12;
  puStack_150 = unaff_x24;
  puStack_148 = puVar4;
  ppuStack_140 = ppuVar2;
  puStack_138 = param_6;
  puStack_130 = param_4;
  ppuStack_128 = param_2;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar19);
  _objc_retain(puVar1);
  puVar17 = (undefined8 *)0x0;
  if (ppuVar3 != (undefined1 **)0x0) {
    plVar21 = (long *)ppuVar3[1];
    _objc_retain(ppuVar19);
    if (ppuVar19 == (undefined1 **)0x0) {
      ppuVar2 = (undefined1 **)&UNK_10f3bfd47;
    }
    else {
      ppuVar2 = ppuVar19;
      _objc_retainAutorelease(ppuVar19);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar19);
    unaff_x24 = auStack_188;
    func_0x00010002b838(auStack_188,ppuVar2);
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3bfd47;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar4 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_170,puVar4);
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    func_0x00010007e1e8(&uStack_1a8,auStack_188,&lStack_158,2);
    ppuVar7 = (undefined1 **)&UNK_1109683f0;
    puVar4 = &uStack_1a8;
    puVar6 = &uStack_1a8;
    (**(code **)(*plVar21 + 0x18))(plVar21);
    puStack_190 = puVar4;
    func_0x00010007e5dc(&puStack_190);
    lVar20 = 0;
    puVar17 = auStack_188;
    puVar14 = puVar12;
    do {
      if ((&cStack_159)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  _objc_release(puVar1);
  ppuVar2 = ppuVar19;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  if (cStack_171 < '\0') {
    __ZdlPv(auStack_188[0]);
  }
  _objc_release(puVar1);
  _objc_release(ppuVar19);
  ppuVar5 = ppuVar2;
  __Unwind_Resume();
  puVar13 = &uStack_270;
  pcStack_1b8 = FUN_106c03264;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar7;
  puVar12 = puVar6;
  puVar15 = puVar14;
  puVar18 = puVar16;
  puStack_200 = param_3;
  puStack_1f8 = param_5;
  puStack_1f0 = unaff_x24;
  puStack_1e8 = puVar4;
  puStack_1e0 = puVar17;
  ppuStack_1d8 = ppuVar2;
  puStack_1d0 = puVar1;
  ppuStack_1c8 = ppuVar19;
  ppuStack_1c0 = &puStack_120;
  _objc_retain(ppuVar7);
  _objc_retain(puVar14);
  if (ppuVar5 != (undefined1 **)0x0) {
    plVar21 = (long *)ppuVar5[1];
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined1 **)0x0) {
      ppuVar19 = (undefined1 **)&UNK_10f3bfd47;
    }
    else {
      ppuVar19 = ppuVar7;
      _objc_retainAutorelease(ppuVar7);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar7);
    func_0x00010002b838(auStack_250,ppuVar19);
    puVar11 = &UNK_10f3bfda1;
    if ((int)puVar6 == 0) {
      puVar11 = &UNK_10f3bfda6;
    }
    func_0x00010002b838(auStack_238,puVar11);
    _objc_retain(puVar14);
    if (puVar14 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f3bfd47;
    }
    else {
      _objc_retainAutorelease(puVar14);
      puVar6 = puVar14;
      func_0x00010bdc3520();
    }
    _objc_release(puVar14);
    func_0x00010002b838(auStack_220,puVar6);
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    func_0x00010007e1e8(&uStack_270,auStack_250,&lStack_208,3);
    ppuVar3 = (undefined1 **)&UNK_110968440;
    (**(code **)(*plVar21 + 0x18))(plVar21);
    puStack_258 = (undefined1 *)&uStack_270;
    func_0x00010007e5dc(&puStack_258);
    lVar20 = 0;
    puVar12 = puVar13;
    puVar15 = puVar16;
    do {
      if ((&cStack_209)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
      puVar4 = &uStack_270;
    } while (lVar20 != -0x48);
  }
  _objc_release(puVar14);
  ppuVar19 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_208) {
    ___stack_chk_fail();
    _objc_release(puVar14);
    puStack_2a0 = auStack_250;
    do {
      puVar4 = puVar4 + -3;
    } while (puVar4 != puStack_2a0);
    _objc_release(puVar14);
    _objc_release(ppuVar7);
    ppuVar2 = ppuVar19;
    __Unwind_Resume();
    pcStack_278 = FUN_106c034dc;
    lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar5 = ppuVar3;
    puVar1 = puVar12;
    puVar17 = puVar15;
    puStack_2b0 = puVar6;
    puStack_2a8 = puVar4;
    ppuStack_298 = ppuVar19;
    puStack_290 = puVar14;
    ppuStack_288 = ppuVar7;
    pppuStack_280 = &ppuStack_1c0;
    _objc_retain(ppuVar3);
    iVar10 = (int)ppuVar5;
    puVar16 = (undefined8 *)0x0;
    if (ppuVar2 != (undefined1 **)0x0) {
      plVar21 = (long *)ppuVar2[1];
      _objc_retain(ppuVar3);
      if (ppuVar3 == (undefined1 **)0x0) {
        ppuVar19 = (undefined1 **)&UNK_10f3bfd47;
      }
      else {
        ppuVar19 = ppuVar3;
        _objc_retainAutorelease(ppuVar3);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar3);
      func_0x00010002b838(auStack_2e8,ppuVar19);
      puVar11 = &UNK_10f3bfda1;
      if ((int)puVar12 == 0) {
        puVar11 = &UNK_10f3bfda6;
      }
      func_0x00010002b838(auStack_2d0,puVar11);
      uStack_308 = 0;
      uStack_300 = 0;
      uStack_2f8 = 0;
      func_0x00010007e1e8(&uStack_308,auStack_2e8,&lStack_2b8,2);
      puVar11 = &UNK_110968490;
      puVar12 = &uStack_308;
      puVar1 = &uStack_308;
      (**(code **)(*plVar21 + 0x18))(plVar21);
      puStack_2f0 = puVar12;
      func_0x00010007e5dc(&puStack_2f0);
      lVar20 = 0;
      puVar16 = (undefined8 *)auStack_2e8;
      puVar17 = puVar15;
      do {
        if ((&cStack_2b9)[lVar20] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2d0 + lVar20));
        }
        iVar10 = (int)puVar11;
        lVar20 = lVar20 + -0x18;
      } while (lVar20 != -0x30);
    }
    ppuVar19 = ppuVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
      return ppuVar19;
    }
    ___stack_chk_fail();
    _objc_release(ppuVar3);
    _objc_release(ppuVar3);
    ppuVar7 = ppuVar19;
    __Unwind_Resume();
    puVar6 = &uStack_380;
    pcStack_318 = FUN_106c036c4;
    lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar2 = (undefined1 **)0x0;
    puVar4 = puVar1;
    puStack_340 = puVar12;
    puStack_338 = (undefined1 *)puVar16;
    ppuStack_330 = ppuVar19;
    ppuStack_328 = ppuVar3;
    pppuStack_320 = &pppuStack_280;
    if (ppuVar7 != (undefined1 **)0x0) {
      ppuVar19 = (undefined1 **)ppuVar7[1];
      puVar11 = &UNK_10f3bfda1;
      if (iVar10 == 0) {
        puVar11 = &UNK_10f3bfda6;
      }
      func_0x00010002b838(appuStack_360,puVar11);
      uStack_380 = 0;
      uStack_378 = 0;
      uStack_370 = 0;
      func_0x00010007e1e8(&uStack_380,appuStack_360,&lStack_348,1);
      (**(code **)(*ppuVar19 + 0x18))(ppuVar19,&UNK_1109684e0);
      ppuVar2 = &puStack_368;
      puStack_368 = (undefined1 *)&uStack_380;
      func_0x00010007e5dc();
      puVar4 = puVar6;
      puVar17 = puVar1;
      puVar16 = &uStack_380;
      if (cStack_349 < '\0') {
        ppuVar2 = appuStack_360[0];
        __ZdlPv();
        puVar4 = puVar6;
        puVar17 = puVar1;
        puVar16 = &uStack_380;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_348) {
      ___stack_chk_fail();
      puStack_368 = (undefined1 *)puVar16;
      func_0x00010007e5dc(&puStack_368);
      if (cStack_349 < '\0') {
        __ZdlPv(appuStack_360[0]);
      }
      ppuVar7 = ppuVar2;
      __Unwind_Resume();
      pppuVar8 = &ppuStack_3c0;
      pcStack_388 = FUN_106c037dc;
      puStack_3b0 = puVar12;
      puStack_3a8 = (undefined1 *)puVar16;
      ppuStack_3a0 = ppuVar19;
      ppuStack_398 = ppuVar2;
      pppuStack_390 = &pppuStack_320;
      _objc_retain(puVar4);
      _objc_retain(puVar17);
      _objc_retain(puVar18);
      puStack_3b8 = PTR_PTR_1126f5b68;
      ppuStack_3c0 = ppuVar7;
      _objc_msgSendSuper2(&ppuStack_3c0,PTR_s_init_1125d9248);
      if (pppuVar8 != (undefined1 ***)0x0) {
        _objc_retain(puVar4);
        puVar9 = (undefined1 *)pppuVar8[1];
        pppuVar8[1] = (undefined1 **)puVar4;
        _objc_release(puVar9);
        _objc_retain(puVar17);
        puVar9 = (undefined1 *)pppuVar8[3];
        pppuVar8[3] = (undefined1 **)puVar17;
        _objc_release(puVar9);
        _objc_retain(puVar18);
        puVar9 = (undefined1 *)pppuVar8[4];
        pppuVar8[4] = (undefined1 **)puVar18;
        _objc_release(puVar9);
      }
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(puVar4);
      return (undefined1 **)pppuVar8;
    }
    return ppuVar2;
  }
  return ppuVar19;
}



/* Entry: 106c03034; end: 106c03263;  */

/* WARNING: Removing unreachable block (ram,0x000106c034ac) */

undefined1 **
FUN_106c03034(long param_1,undefined1 **param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  undefined1 ***pppuVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 **ppuVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 **ppuVar16;
  long lVar17;
  long *plVar18;
  undefined8 *unaff_x23;
  undefined1 **ppuStack_2b0;
  undefined *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined1 *puStack_298;
  undefined1 **ppuStack_290;
  undefined1 **ppuStack_288;
  undefined8 ***pppuStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 *puStack_258;
  undefined1 **appuStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined8 *puStack_230;
  undefined1 *puStack_228;
  undefined1 **ppuStack_220;
  undefined1 **ppuStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined1 auStack_1d8 [24];
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined1 **ppuStack_188;
  undefined8 *puStack_180;
  undefined1 **ppuStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
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
  ppuVar16 = param_2;
  puVar1 = param_3;
  puVar13 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar18 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined1 **)0x0) {
      ppuVar16 = (undefined1 **)&UNK_10f3bfd47;
    }
    else {
      ppuVar16 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,ppuVar16);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3bfd47;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    ppuVar16 = (undefined1 **)&UNK_1109683f0;
    unaff_x23 = &uStack_98;
    puVar1 = &uStack_98;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar17 = 0;
    puVar13 = param_4;
    do {
      if ((&cStack_49)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  _objc_release(param_3);
  ppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar11 = &uStack_160;
  pcStack_a8 = FUN_106c03264;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar16;
  puVar10 = puVar1;
  puVar12 = puVar13;
  puVar15 = param_5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar16);
  _objc_retain(puVar13);
  if (ppuVar2 != (undefined1 **)0x0) {
    plVar18 = (long *)ppuVar2[1];
    _objc_retain(ppuVar16);
    if (ppuVar16 == (undefined1 **)0x0) {
      ppuVar2 = (undefined1 **)&UNK_10f3bfd47;
    }
    else {
      ppuVar2 = ppuVar16;
      _objc_retainAutorelease(ppuVar16);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar16);
    func_0x00010002b838(auStack_140,ppuVar2);
    puVar9 = &UNK_10f3bfda1;
    if ((int)puVar1 == 0) {
      puVar9 = &UNK_10f3bfda6;
    }
    func_0x00010002b838(auStack_128,puVar9);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3bfd47;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar1 = puVar13;
      func_0x00010bdc3520();
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_110,puVar1);
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    func_0x00010007e1e8(&uStack_160,auStack_140,&lStack_f8,3);
    ppuVar4 = (undefined1 **)&UNK_110968440;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_148 = (undefined1 *)&uStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar17 = 0;
    puVar10 = puVar11;
    puVar12 = param_5;
    do {
      if ((&cStack_f9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      unaff_x23 = &uStack_160;
    } while (lVar17 != -0x48);
  }
  _objc_release(puVar13);
  ppuVar2 = ppuVar16;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    _objc_release(puVar13);
    puStack_190 = auStack_140;
    do {
      unaff_x23 = unaff_x23 + -3;
    } while (unaff_x23 != puStack_190);
    _objc_release(puVar13);
    _objc_release(ppuVar16);
    ppuVar3 = ppuVar2;
    __Unwind_Resume();
    pcStack_168 = FUN_106c034dc;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar8 = ppuVar4;
    puVar11 = puVar10;
    puVar14 = puVar12;
    puStack_1a0 = puVar1;
    puStack_198 = unaff_x23;
    ppuStack_188 = ppuVar2;
    puStack_180 = puVar13;
    ppuStack_178 = ppuVar16;
    ppuStack_170 = &puStack_b0;
    _objc_retain(ppuVar4);
    iVar7 = (int)ppuVar8;
    puVar1 = (undefined8 *)0x0;
    if (ppuVar3 != (undefined1 **)0x0) {
      plVar18 = (long *)ppuVar3[1];
      _objc_retain(ppuVar4);
      if (ppuVar4 == (undefined1 **)0x0) {
        ppuVar16 = (undefined1 **)&UNK_10f3bfd47;
      }
      else {
        ppuVar16 = ppuVar4;
        _objc_retainAutorelease(ppuVar4);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar4);
      func_0x00010002b838(auStack_1d8,ppuVar16);
      puVar9 = &UNK_10f3bfda1;
      if ((int)puVar10 == 0) {
        puVar9 = &UNK_10f3bfda6;
      }
      func_0x00010002b838(auStack_1c0,puVar9);
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      func_0x00010007e1e8(&uStack_1f8,auStack_1d8,&lStack_1a8,2);
      puVar9 = &UNK_110968490;
      puVar10 = &uStack_1f8;
      puVar11 = &uStack_1f8;
      (**(code **)(*plVar18 + 0x18))(plVar18);
      puStack_1e0 = puVar10;
      func_0x00010007e5dc(&puStack_1e0);
      lVar17 = 0;
      puVar1 = (undefined8 *)auStack_1d8;
      puVar14 = puVar12;
      do {
        if ((&cStack_1a9)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar17));
        }
        iVar7 = (int)puVar9;
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != -0x30);
    }
    ppuVar16 = ppuVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      _objc_release(ppuVar4);
      _objc_release(ppuVar4);
      ppuVar3 = ppuVar16;
      __Unwind_Resume();
      puVar12 = &uStack_270;
      pcStack_208 = FUN_106c036c4;
      lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar2 = (undefined1 **)0x0;
      puVar13 = puVar11;
      puStack_230 = puVar10;
      puStack_228 = (undefined1 *)puVar1;
      ppuStack_220 = ppuVar16;
      ppuStack_218 = ppuVar4;
      pppuStack_210 = &ppuStack_170;
      if (ppuVar3 != (undefined1 **)0x0) {
        ppuVar16 = (undefined1 **)ppuVar3[1];
        puVar9 = &UNK_10f3bfda1;
        if (iVar7 == 0) {
          puVar9 = &UNK_10f3bfda6;
        }
        func_0x00010002b838(appuStack_250,puVar9);
        uStack_270 = 0;
        uStack_268 = 0;
        uStack_260 = 0;
        func_0x00010007e1e8(&uStack_270,appuStack_250,&lStack_238,1);
        (**(code **)(*ppuVar16 + 0x18))(ppuVar16,&UNK_1109684e0);
        ppuVar2 = &puStack_258;
        puStack_258 = (undefined1 *)&uStack_270;
        func_0x00010007e5dc();
        puVar13 = puVar12;
        puVar14 = puVar11;
        puVar1 = &uStack_270;
        if (cStack_239 < '\0') {
          ppuVar2 = appuStack_250[0];
          __ZdlPv();
          puVar13 = puVar12;
          puVar14 = puVar11;
          puVar1 = &uStack_270;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_238) {
        ___stack_chk_fail();
        puStack_258 = (undefined1 *)puVar1;
        func_0x00010007e5dc(&puStack_258);
        if (cStack_239 < '\0') {
          __ZdlPv(appuStack_250[0]);
        }
        ppuVar4 = ppuVar2;
        __Unwind_Resume();
        pppuVar5 = &ppuStack_2b0;
        pcStack_278 = FUN_106c037dc;
        puStack_2a0 = puVar10;
        puStack_298 = (undefined1 *)puVar1;
        ppuStack_290 = ppuVar16;
        ppuStack_288 = ppuVar2;
        pppuStack_280 = &pppuStack_210;
        _objc_retain(puVar13);
        _objc_retain(puVar14);
        _objc_retain(puVar15);
        puStack_2a8 = PTR_PTR_1126f5b68;
        ppuStack_2b0 = ppuVar4;
        _objc_msgSendSuper2(&ppuStack_2b0,PTR_s_init_1125d9248);
        if (pppuVar5 != (undefined1 ***)0x0) {
          _objc_retain(puVar13);
          puVar6 = (undefined1 *)pppuVar5[1];
          pppuVar5[1] = (undefined1 **)puVar13;
          _objc_release(puVar6);
          _objc_retain(puVar14);
          puVar6 = (undefined1 *)pppuVar5[3];
          pppuVar5[3] = (undefined1 **)puVar14;
          _objc_release(puVar6);
          _objc_retain(puVar15);
          puVar6 = (undefined1 *)pppuVar5[4];
          pppuVar5[4] = (undefined1 **)puVar15;
          _objc_release(puVar6);
        }
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        return (undefined1 **)pppuVar5;
      }
      return ppuVar2;
    }
    return ppuVar16;
  }
  return ppuVar2;
}



/* Entry: 106c03264; end: 106c034db;  */

/* WARNING: Removing unreachable block (ram,0x000106c034ac) */

undefined1 **
FUN_106c03264(long param_1,undefined1 **param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined1 **ppuVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined1 ***pppuVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 **ppuVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 *unaff_x23;
  undefined1 **ppuStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined1 *puStack_1f8;
  undefined1 **ppuStack_1f0;
  undefined1 **ppuStack_1e8;
  undefined1 ***pppuStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 **appuStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined8 *puStack_190;
  undefined1 *puStack_188;
  undefined1 **ppuStack_180;
  undefined1 **ppuStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined1 auStack_138 [24];
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 **ppuStack_e8;
  undefined8 *puStack_e0;
  undefined1 **ppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar9 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_2;
  puVar8 = param_3;
  puVar11 = param_4;
  puVar13 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined1 **)0x0) {
      ppuVar1 = (undefined1 **)&UNK_10f3bfd47;
    }
    else {
      ppuVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,ppuVar1);
    puVar7 = &UNK_10f3bfda1;
    if ((int)param_3 == 0) {
      puVar7 = &UNK_10f3bfda6;
    }
    func_0x00010002b838(auStack_88,puVar7);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)&UNK_10f3bfd47;
    }
    else {
      _objc_retainAutorelease(param_4);
      param_3 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,param_3);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    ppuVar1 = (undefined1 **)&UNK_110968440;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar15 = 0;
    puVar8 = puVar9;
    puVar11 = param_5;
    do {
      if ((&cStack_59)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x23 = &uStack_c0;
    } while (lVar15 != -0x48);
  }
  _objc_release(param_4);
  ppuVar14 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppuVar14;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f0 = auStack_a0;
  do {
    unaff_x23 = (undefined8 *)((long)unaff_x23 + -0x18);
  } while (unaff_x23 != (undefined8 *)puStack_f0);
  _objc_release(param_4);
  _objc_release(param_2);
  ppuVar2 = ppuVar14;
  __Unwind_Resume();
  pcStack_c8 = FUN_106c034dc;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar1;
  puVar9 = puVar8;
  puVar12 = puVar11;
  puStack_100 = param_3;
  puStack_f8 = (undefined1 *)unaff_x23;
  ppuStack_e8 = ppuVar14;
  puStack_e0 = param_4;
  ppuStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar1);
  iVar6 = (int)ppuVar3;
  puVar16 = (undefined8 *)0x0;
  if (ppuVar2 != (undefined1 **)0x0) {
    plVar17 = (long *)ppuVar2[1];
    _objc_retain(ppuVar1);
    if (ppuVar1 == (undefined1 **)0x0) {
      ppuVar14 = (undefined1 **)&UNK_10f3bfd47;
    }
    else {
      ppuVar14 = ppuVar1;
      _objc_retainAutorelease(ppuVar1);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar1);
    func_0x00010002b838(auStack_138,ppuVar14);
    puVar7 = &UNK_10f3bfda1;
    if ((int)puVar8 == 0) {
      puVar7 = &UNK_10f3bfda6;
    }
    func_0x00010002b838(auStack_120,puVar7);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    puVar7 = &UNK_110968490;
    puVar8 = &uStack_158;
    puVar9 = &uStack_158;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_140 = puVar8;
    func_0x00010007e5dc(&puStack_140);
    lVar15 = 0;
    puVar16 = (undefined8 *)auStack_138;
    puVar12 = puVar11;
    do {
      if ((&cStack_109)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar15));
      }
      iVar6 = (int)puVar7;
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  ppuVar14 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(ppuVar1);
    _objc_release(ppuVar1);
    ppuVar3 = ppuVar14;
    __Unwind_Resume();
    puVar10 = &uStack_1d0;
    pcStack_168 = FUN_106c036c4;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar2 = (undefined1 **)0x0;
    puVar11 = puVar9;
    puStack_190 = puVar8;
    puStack_188 = (undefined1 *)puVar16;
    ppuStack_180 = ppuVar14;
    ppuStack_178 = ppuVar1;
    ppuStack_170 = &puStack_d0;
    if (ppuVar3 != (undefined1 **)0x0) {
      ppuVar14 = (undefined1 **)ppuVar3[1];
      puVar7 = &UNK_10f3bfda1;
      if (iVar6 == 0) {
        puVar7 = &UNK_10f3bfda6;
      }
      func_0x00010002b838(appuStack_1b0,puVar7);
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      func_0x00010007e1e8(&uStack_1d0,appuStack_1b0,&lStack_198,1);
      (**(code **)(*ppuVar14 + 0x18))(ppuVar14,&UNK_1109684e0);
      ppuVar2 = &puStack_1b8;
      puStack_1b8 = (undefined1 *)&uStack_1d0;
      func_0x00010007e5dc();
      puVar11 = puVar10;
      puVar12 = puVar9;
      puVar16 = &uStack_1d0;
      if (cStack_199 < '\0') {
        ppuVar2 = appuStack_1b0[0];
        __ZdlPv();
        puVar11 = puVar10;
        puVar12 = puVar9;
        puVar16 = &uStack_1d0;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      puStack_1b8 = (undefined1 *)puVar16;
      func_0x00010007e5dc(&puStack_1b8);
      if (cStack_199 < '\0') {
        __ZdlPv(appuStack_1b0[0]);
      }
      ppuVar1 = ppuVar2;
      __Unwind_Resume();
      pppuVar4 = &ppuStack_210;
      pcStack_1d8 = FUN_106c037dc;
      puStack_200 = puVar8;
      puStack_1f8 = (undefined1 *)puVar16;
      ppuStack_1f0 = ppuVar14;
      ppuStack_1e8 = ppuVar2;
      pppuStack_1e0 = &ppuStack_170;
      _objc_retain(puVar11);
      _objc_retain(puVar12);
      _objc_retain(puVar13);
      puStack_208 = PTR_PTR_1126f5b68;
      ppuStack_210 = ppuVar1;
      _objc_msgSendSuper2(&ppuStack_210,PTR_s_init_1125d9248);
      if (pppuVar4 != (undefined1 ***)0x0) {
        _objc_retain(puVar11);
        puVar5 = (undefined1 *)pppuVar4[1];
        pppuVar4[1] = (undefined1 **)puVar11;
        _objc_release(puVar5);
        _objc_retain(puVar12);
        puVar5 = (undefined1 *)pppuVar4[3];
        pppuVar4[3] = (undefined1 **)puVar12;
        _objc_release(puVar5);
        _objc_retain(puVar13);
        puVar5 = (undefined1 *)pppuVar4[4];
        pppuVar4[4] = (undefined1 **)puVar13;
        _objc_release(puVar5);
      }
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      return (undefined1 **)pppuVar4;
    }
    return ppuVar2;
  }
  return ppuVar14;
}



/* Entry: 106c034dc; end: 106c036c3;  */

undefined1 **
FUN_106c034dc(long param_1,undefined1 **param_2,undefined8 *param_3,undefined8 *param_4,
             undefined1 *param_5)

{
  undefined1 **ppuVar1;
  undefined1 **ppuVar2;
  undefined1 ***pppuVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined1 **ppuVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined1 **ppuStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined1 *puStack_138;
  undefined1 **ppuStack_130;
  undefined1 **ppuStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 *puStack_f8;
  undefined1 **appuStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 **ppuStack_c0;
  undefined1 **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar12 = param_2;
  puVar7 = param_3;
  puVar10 = param_4;
  _objc_retain(param_2);
  iVar5 = (int)ppuVar12;
  puVar14 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined1 **)0x0) {
      ppuVar12 = (undefined1 **)&UNK_10f3bfd47;
    }
    else {
      ppuVar12 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,ppuVar12);
    puVar6 = &UNK_10f3bfda1;
    if ((int)param_3 == 0) {
      puVar6 = &UNK_10f3bfda6;
    }
    func_0x00010002b838(auStack_60,puVar6);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar6 = &UNK_110968490;
    param_3 = &uStack_98;
    puVar7 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_80 = param_3;
    func_0x00010007e5dc(&puStack_80);
    lVar11 = 0;
    puVar14 = (undefined8 *)auStack_78;
    puVar10 = param_4;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      iVar5 = (int)puVar6;
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  ppuVar12 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar12;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  ppuVar1 = ppuVar12;
  __Unwind_Resume();
  puVar8 = &uStack_110;
  pcStack_a8 = FUN_106c036c4;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  puVar9 = puVar7;
  puStack_d0 = param_3;
  puStack_c8 = (undefined1 *)puVar14;
  ppuStack_c0 = ppuVar12;
  ppuStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (ppuVar1 != (undefined1 **)0x0) {
    ppuVar12 = (undefined1 **)ppuVar1[1];
    puVar6 = &UNK_10f3bfda1;
    if (iVar5 == 0) {
      puVar6 = &UNK_10f3bfda6;
    }
    func_0x00010002b838(appuStack_f0,puVar6);
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    func_0x00010007e1e8(&uStack_110,appuStack_f0,&lStack_d8,1);
    (**(code **)(*ppuVar12 + 0x18))(ppuVar12,&UNK_1109684e0);
    ppuVar2 = &puStack_f8;
    puStack_f8 = (undefined1 *)&uStack_110;
    func_0x00010007e5dc();
    puVar9 = puVar8;
    puVar10 = puVar7;
    puVar14 = &uStack_110;
    if (cStack_d9 < '\0') {
      ppuVar2 = appuStack_f0[0];
      __ZdlPv();
      puVar9 = puVar8;
      puVar10 = puVar7;
      puVar14 = &uStack_110;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  puStack_f8 = (undefined1 *)puVar14;
  func_0x00010007e5dc(&puStack_f8);
  if (cStack_d9 < '\0') {
    __ZdlPv(appuStack_f0[0]);
  }
  ppuVar1 = ppuVar2;
  __Unwind_Resume();
  pppuVar3 = &ppuStack_150;
  pcStack_118 = FUN_106c037dc;
  puStack_140 = param_3;
  puStack_138 = (undefined1 *)puVar14;
  ppuStack_130 = ppuVar12;
  ppuStack_128 = ppuVar2;
  ppuStack_120 = &puStack_b0;
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  _objc_retain(param_5);
  puStack_148 = PTR_PTR_1126f5b68;
  ppuStack_150 = ppuVar1;
  _objc_msgSendSuper2(&ppuStack_150,PTR_s_init_1125d9248);
  if (pppuVar3 != (undefined1 ***)0x0) {
    _objc_retain(puVar9);
    puVar4 = (undefined1 *)pppuVar3[1];
    pppuVar3[1] = (undefined1 **)puVar9;
    _objc_release(puVar4);
    _objc_retain(puVar10);
    puVar4 = (undefined1 *)pppuVar3[3];
    pppuVar3[3] = (undefined1 **)puVar10;
    _objc_release(puVar4);
    _objc_retain(param_5);
    puVar4 = (undefined1 *)pppuVar3[4];
    pppuVar3[4] = (undefined1 **)param_5;
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(puVar10);
  _objc_release(puVar9);
  return (undefined1 **)pppuVar3;
}



/* Entry: 106c036c4; end: 106c037db;  */

undefined1 **
FUN_106c036c4(long param_1,int param_2,undefined1 *param_3,undefined1 *param_4,undefined1 *param_5)

{
  undefined *puVar1;
  undefined1 **ppuVar2;
  undefined1 ***pppuVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 *unaff_x21;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar5 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  puVar6 = param_3;
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    puVar1 = &UNK_10f3bfda1;
    if (param_2 == 0) {
      puVar1 = &UNK_10f3bfda6;
    }
    func_0x00010002b838(appuStack_50,puVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1109684e0);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    puVar6 = (undefined1 *)puVar5;
    param_4 = param_3;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      puVar6 = (undefined1 *)puVar5;
      param_4 = param_3;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  pppuVar3 = &ppuStack_b0;
  _objc_retain(puVar6);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_a8 = PTR_PTR_1126f5b68;
  ppuStack_b0 = ppuVar2;
  _objc_msgSendSuper2(&ppuStack_b0,PTR_s_init_1125d9248);
  if (pppuVar3 != (undefined1 ***)0x0) {
    _objc_retain(puVar6);
    puVar4 = (undefined1 *)pppuVar3[1];
    pppuVar3[1] = (undefined1 **)puVar6;
    _objc_release(puVar4);
    _objc_retain(param_4);
    puVar4 = (undefined1 *)pppuVar3[3];
    pppuVar3[3] = (undefined1 **)param_4;
    _objc_release(puVar4);
    _objc_retain(param_5);
    puVar4 = (undefined1 *)pppuVar3[4];
    pppuVar3[4] = (undefined1 **)param_5;
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar6);
  return (undefined1 **)pppuVar3;
}



/* Entry: 106c037dc; end: 106c038a7; -[SCCommerceScreenshopMemoriesBackgroundFetcher initWithDataSource:commerceConfigProvider:commerceEventLogger:] */

undefined1 *
FUN_106c037dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f5b68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c038a8; end: 106c038fb; -[SCCommerceScreenshopMemoriesBackgroundFetcher dealloc] */

void FUN_106c038a8(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bea6fe0(param_1,param_2,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010bf86d40();
  }
  puStack_28 = PTR_PTR_1126f5b68;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}


