/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106bde804; end: 106bde80b; -[SCFeatureSettingsService ai_snap_in_chat_disclaimer_version_client_value:] */

void FUN_106bde804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106bde80c; end: 106bde813; -[SCFeatureSettingsService ai_snap_in_chat_disclaimer_version_server_value:] */

void FUN_106bde80c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106bde814; end: 106bde823; -[SCFeatureSettingsService AISnapInChatDisclaimerVersion] */

void FUN_106bde814(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e78138,0);
  return;
}



/* Entry: 106bde824; end: 106bde9a3; -[SCFeatureSettingsService freemiumLensGroupUsageCountersList:] */

/* WARNING: Possible PIC construction at 0x000106bde9f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106bde9f8) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_106bde824(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_1;
  ppuVar4 = param_3;
  func_0x00010bfbe8e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar6;
  func_0x00010c08fa60();
  _objc_release(ppuVar6);
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = (undefined **)PTR_PTR_1126d1350;
    _objc_alloc_init();
    ppuVar6 = ppuVar1;
  }
  else {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    func_0x00010bfbe8e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = param_1;
    func_0x00010bff6b20();
    _objc_release(param_1);
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar6 = (undefined **)0x0;
      if (param_3 != (undefined **)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110e77f58;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_3 = puVar3;
        _objc_release(puVar2);
        ppuVar6 = (undefined **)0x0;
      }
    }
    else {
      ppuVar6 = (undefined **)PTR_PTR_1126d1350;
      _objc_alloc();
      ppuVar4 = ppuVar1;
      func_0x00010c008360();
    }
    _objc_release(ppuVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
    return;
  }
  ___stack_chk_fail();
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    func_0x00010bf63640(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar4;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a2430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (ppuVar1,PTR_s_setGenAILensFreemiumGroupCounter_112646328,ppuVar6);
  return;
}



/* Entry: 106bde9a4; end: 106bdea27; -[SCFeatureSettingsService setFreemiumLensGroupUsageCountersList:] */

/* WARNING: Possible PIC construction at 0x000106bde9f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106bde9f8) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_106bde9a4(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  
  if (param_3 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    func_0x00010bf63640(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = param_3;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a2430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setGenAILensFreemiumGroupCounter_112646328,ppuVar1);
  return;
}



/* Entry: 106bdea28; end: 106bdeb77; -[SCFeatureSettingsService aiCreditsStateSnapshot:] */

/* WARNING: Possible PIC construction at 0x000106bdea54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106bdea58) */
/* WARNING: Removing unreachable block (ram,0x000106bdeaac) */
/* WARNING: Removing unreachable block (ram,0x000106bdea6c) */
/* WARNING: Removing unreachable block (ram,0x000106bdeab4) */
/* WARNING: Removing unreachable block (ram,0x000106bdeab8) */
/* WARNING: Removing unreachable block (ram,0x000106bdea8c) */
/* WARNING: Removing unreachable block (ram,0x000106bdeb30) */
/* WARNING: Removing unreachable block (ram,0x000106bdeb38) */
/* WARNING: Removing unreachable block (ram,0x000106bdeb74) */
/* WARNING: Removing unreachable block (ram,0x000106bdeb58) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */

void FUN_106bdea28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befeb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_aiCreditsStateSnapshotProto_11259d470);
  return;
}



/* Entry: 106bdeb78; end: 106bdeb7b; -[SCFeatureSettingsService aiCreditsStateSnapshotRawString] */

void FUN_106bdeb78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befeb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_aiCreditsStateSnapshotProto_11259d470);
  return;
}



/* Entry: 106bdeb7c; end: 106bdeb87; -[SCFeatureSettingsService hasInternalDreamsFeatureViewUserPolicy] */

void FUN_106bdeb7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e78178);
  return;
}



/* Entry: 106bdeb88; end: 106bdeb93; -[SCFeatureSettingsService internalDreamsFeatureViewUserPolicyServerParam] */

undefined ** FUN_106bdeb88(void)

{
  return &PTR____CFConstantStringClassReference_110e78178;
}



/* Entry: 106bdeb94; end: 106bdeba3; -[SCFeatureSettingsService setInternalDreamsFeatureViewUserPolicy:] */

void FUN_106bdeb94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e78178,param_3);
  return;
}



/* Entry: 106bdeba4; end: 106bdebab; -[SCFeatureSettingsService dreams_view_policy_client_value:] */

void FUN_106bdeba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106bdebac; end: 106bdebb3; -[SCFeatureSettingsService dreams_view_policy_server_value:] */

void FUN_106bdebac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106bdebb4; end: 106bdebc3; -[SCFeatureSettingsService internalDreamsFeatureViewUserPolicy] */

void FUN_106bdebb4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e78178,0);
  return;
}



/* Entry: 106bdebc4; end: 106bdebcf; -[SCFeatureSettingsService hasInternalDreamsFeatureGenerationPolicy] */

void FUN_106bdebc4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e78198);
  return;
}



/* Entry: 106bdebd0; end: 106bdebdb; -[SCFeatureSettingsService internalDreamsFeatureGenerationPolicyServerParam] */

undefined ** FUN_106bdebd0(void)

{
  return &PTR____CFConstantStringClassReference_110e78198;
}



/* Entry: 106bdebdc; end: 106bdebeb; -[SCFeatureSettingsService setInternalDreamsFeatureGenerationPolicy:] */

void FUN_106bdebdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e78198,param_3);
  return;
}



/* Entry: 106bdebec; end: 106bdebf3; -[SCFeatureSettingsService dreams_generation_policy_client_value:] */

void FUN_106bdebec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106bdebf4; end: 106bdebfb; -[SCFeatureSettingsService dreams_generation_policy_server_value:] */

void FUN_106bdebf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106bdebfc; end: 106bdec0b; -[SCFeatureSettingsService internalDreamsFeatureGenerationPolicy] */

void FUN_106bdebfc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e78198,0);
  return;
}



/* Entry: 106bdec0c; end: 106bdec17; -[SCFeatureSettingsService hasGenAILensFreemiumGroupCountersProto] */

void FUN_106bdec0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e781b8);
  return;
}



/* Entry: 106bdec18; end: 106bdec23; -[SCFeatureSettingsService genAILensFreemiumGroupCountersProtoServerParam] */

undefined ** FUN_106bdec18(void)

{
  return &PTR____CFConstantStringClassReference_110e781b8;
}



/* Entry: 106bdec24; end: 106bdec33; -[SCFeatureSettingsService setGenAILensFreemiumGroupCountersProto:] */

void FUN_106bdec24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110e781b8,param_3);
  return;
}



/* Entry: 106bdec34; end: 106bdec5b; -[SCFeatureSettingsService genai_lens_freemium_group_counters_proto_client_value:] */

void FUN_106bdec34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106bdec5c; end: 106bdec83; -[SCFeatureSettingsService genai_lens_freemium_group_counters_proto_server_value:] */

void FUN_106bdec5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106bdec84; end: 106bdec97; -[SCFeatureSettingsService genAILensFreemiumGroupCountersProto] */

void FUN_106bdec84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110e781b8,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 106bdec98; end: 106bdeca3; -[SCFeatureSettingsService hasAiCreditsStateSnapshotProto] */

void FUN_106bdec98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e781d8);
  return;
}



/* Entry: 106bdeca4; end: 106bdecaf; -[SCFeatureSettingsService aiCreditsStateSnapshotProtoServerParam] */

undefined ** FUN_106bdeca4(void)

{
  return &PTR____CFConstantStringClassReference_110e781d8;
}



/* Entry: 106bdecb0; end: 106bdecbf; -[SCFeatureSettingsService setAiCreditsStateSnapshotProto:] */

void FUN_106bdecb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110e781d8,param_3);
  return;
}



/* Entry: 106bdecc0; end: 106bdece7; -[SCFeatureSettingsService ai_credits_state_snapshot_proto_client_value:] */

void FUN_106bdecc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106bdece8; end: 106bded0f; -[SCFeatureSettingsService ai_credits_state_snapshot_proto_server_value:] */

void FUN_106bdece8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106bded10; end: 106bded23; -[SCFeatureSettingsService aiCreditsStateSnapshotProto] */

void FUN_106bded10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110e781d8,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 106bded24; end: 106bded8b; +[SCPbGenAILensGroupUsageCounter descriptor] */

void FUN_106bded24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6d00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b20c40,
                        &PTR____CFConstantStringClassReference_110e781f8,&PTR_DAT_113177740,
                        &PTR_DAT_113177778,3,0x18,0x1c);
    puRam00000001136c6d00 = puVar1;
  }
  return;
}



/* Entry: 106bded8c; end: 106bdedf3; +[SCPbGenAILensGroupUsageCountersList descriptor] */

void FUN_106bded8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6d08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b20c90,
                        &PTR____CFConstantStringClassReference_110e78218,&PTR_DAT_113177740,
                        &PTR_DAT_113177758,1,0x10,0x1c);
    puRam00000001136c6d08 = puVar1;
  }
  return;
}



/* Entry: 106bdedf4; end: 106bdee5b; +[SCSubscriptionShopPbCreditStateSnapshot descriptor] */

void FUN_106bdedf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6d10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b20d30,
                        &PTR____CFConstantStringClassReference_110e78238,&PTR_DAT_1131777d8,
                        &PTR_DAT_1131777f0,3,0x20,0x1c);
    puRam00000001136c6d10 = puVar1;
  }
  return;
}



/* Entry: 106bdee5c; end: 106bdef4f; -[SCSpectaclesBoomboxEntryPoint begin] */

void FUN_106bdee5c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar2 = PTR_PTR_1126ae790;
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar2);
  return;
}



/* Entry: 106bdef50; end: 106bdf3af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bdef50(long param_1)

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
  undefined *puStack_c8;
  undefined1 auStack_68 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_11275a604;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar1 + _DAT_11275a600;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010bf97260();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126af4c0;
    if (lVar4 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      lVar5 = lVar1 + _DAT_11275a600;
      _objc_loadWeakRetained(lVar5);
      lVar6 = lVar5;
      func_0x00010bf97260();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar1 + _DAT_11275a610;
      _objc_loadWeakRetained(lVar8);
      lVar9 = lVar8;
      func_0x00010c0c8780();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa6ee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
    _objc_release(lVar2);
    lVar2 = lVar1 + _DAT_11275a600;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010c241420();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = PTR_PTR_1126af4d0;
    if (lVar4 == 0) {
      puStack_c8 = (undefined *)0x0;
    }
    else {
      lVar5 = lVar1 + _DAT_11275a600;
      _objc_loadWeakRetained(lVar5);
      lVar6 = lVar5;
      func_0x00010c241420();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar1 + _DAT_11275a610;
      _objc_loadWeakRetained(lVar8);
      lVar9 = lVar8;
      func_0x00010c0c8780();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7580();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
    _objc_release(lVar2);
    lVar2 = lVar1 + _DAT_11275a600;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010c064420();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126af4d0;
    if (lVar4 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      lVar5 = lVar1 + _DAT_11275a600;
      _objc_loadWeakRetained(lVar5);
      lVar6 = lVar5;
      func_0x00010c064420();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar1 + _DAT_11275a610;
      _objc_loadWeakRetained(lVar8);
      lVar7 = lVar8;
      func_0x00010c0c8780();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa72e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      _objc_release(lVar7);
      _objc_release(lVar8);
      _objc_release(lVar6);
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
    _objc_release(lVar2);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,param_1 + 0x20);
    _objc_retain(lVar3);
    _objc_retain(puVar11);
    _objc_retain(puStack_c8);
    _objc_retain(puVar12);
    func_0x00010c0f7fc0(lVar2);
    _objc_release(lVar2);
    _objc_release(puVar12);
    _objc_release(puStack_c8);
    _objc_release(puVar11);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar12);
    _objc_release(puStack_c8);
    _objc_release(puVar11);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106bdf3b0; end: 106bdf3d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bdf3b0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275a600);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bdf3d4; end: 106bdf633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bdf3d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
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
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d1360;
    _objc_alloc(PTR_PTR_1126d1360);
    uVar17 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = lVar1 + _DAT_11275a620;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c0cadc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1 + _DAT_11275a618;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010bf93a20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1 + _DAT_11275a61c;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010c0c84c0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1 + _DAT_11275a614;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c08f100();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar1 + _DAT_11275a608;
    _objc_loadWeakRetained(lVar11);
    uVar20 = *(undefined8 *)(param_1 + 0x30);
    uVar19 = *(undefined8 *)(param_1 + 0x28);
    uVar18 = *(undefined8 *)(param_1 + 0x38);
    lVar12 = lVar1 + _DAT_11275a600;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010c29e220();
    lVar14 = lVar1 + _DAT_11275a60c;
    _objc_loadWeakRetained();
    lVar15 = lVar1 + _DAT_11275a624;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010bf27740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05dda0(puVar2,param_2,uVar17,lVar4,lVar6,lVar8,lVar10,lVar11,uVar19,uVar20,uVar18,
                        lVar13,lVar14,lVar16,*(undefined8 *)(lVar1 + _DAT_11275a628));
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
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
    func_0x00010c18b5e0(puVar2,param_2,lVar1);
    lVar3 = lVar1 + _DAT_11275a600;
    _objc_loadWeakRetained(lVar3);
    lVar5 = lVar3;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106bdf634; end: 106bdf75b; -[SCSpectaclesBoomboxEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bdf634(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  lVar5 = param_1;
  FUN_106bdf3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  if (lVar1 == 0) {
    puStack_38 = PTR_PTR_1126f5960;
    plVar4 = &lStack_40;
    lStack_40 = param_1;
    _objc_msgSendSuper2(plVar4,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    plVar2 = (long *)PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11275a5fc;
    _objc_retain();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(long **)(param_1 + lVar5) = plVar2;
    _objc_release(uVar3);
    _objc_retain(plVar2);
    func_0x00010bf6f440(lVar1);
    plVar4 = plVar2;
    func_0x00010c117720(plVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(plVar2);
    _objc_release(plVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 106bdf75c; end: 106bdf763;  */

void FUN_106bdf75c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 106bdf764; end: 106bdf7db; -[SCSpectaclesBoomboxEntryPoint boomboxViewControllerDidTapBackButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bdf764(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  FUN_106bdf3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11275a600;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f600(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106bdf7dc; end: 106bdf893; -[SCSpectaclesBoomboxEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bdf7dc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275a628,0);
  _objc_destroyWeak(param_1 + _DAT_11275a624);
  _objc_destroyWeak(param_1 + _DAT_11275a620);
  _objc_destroyWeak(param_1 + _DAT_11275a61c);
  _objc_destroyWeak(param_1 + _DAT_11275a618);
  _objc_destroyWeak(param_1 + _DAT_11275a614);
  _objc_destroyWeak(param_1 + _DAT_11275a610);
  _objc_destroyWeak(param_1 + _DAT_11275a60c);
  _objc_destroyWeak(param_1 + _DAT_11275a600);
  _objc_destroyWeak(param_1 + _DAT_11275a608);
  _objc_destroyWeak(param_1 + _DAT_11275a604);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275a5fc,0);
  return;
}



/* Entry: 106bdf894; end: 106bdf89f; -[SCSpectaclesBoomboxGLPhotoCell disparityOffset] */

undefined8 FUN_106bdf894(void)

{
  return 0x404c800000000000;
}



/* Entry: 106bdf8a0; end: 106bdfbdb; -[SCSpectaclesBoomboxGLPhotoCell loadPlaybackSessionWithId:player:cloudFile:snapDetail:memoriesCachingMediaHelper:completion:] */

void FUN_106bdf8a0(double param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [8];
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [16];
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  uVar1 = param_5;
  func_0x00010c08e680(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfccde0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar3 = param_5;
  func_0x00010c08e680(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfccde0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4e040();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_90,param_5);
  uVar1 = param_5;
  func_0x00010bf12380();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0b480();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c23f220(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93a20(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_90);
  _objc_retain(param_7);
  _objc_retain(param_12);
  _objc_retain(param_9);
  lStack_a0 = (long)(param_3 * param_1);
  lStack_98 = (long)(param_4 * param_1);
  _objc_retain(param_10);
  _objc_retain(param_11);
  func_0x00010c1357e0(uVar3);
  _objc_release(uVar6);
  _objc_release(param_5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_12);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_90);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 106bdfbdc; end: 106bdfcd7;  */

void FUN_106bdfbdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if ((param_5 == 0) && (uVar1 != 0)) {
    uVar2 = uVar1;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      func_0x00010bdf1960(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),uVar1);
      goto LAB_106bdfca0;
    }
  }
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0,0,param_5);
LAB_106bdfca0:
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106bdfcd8; end: 106be01e7; -[SCSpectaclesBoomboxGLPhotoCell _createPlaybackSession:cloudFile:image:metadataToken:outputSize:snapDetail:memoriesCachingMediaHelper:completion:] */

void FUN_106bdfcd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar2 = PTR_PTR_1126bfb80;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010c23f220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010bf12380(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar11;
  func_0x00010c1307e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c046fe0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar11);
  _objc_release(uVar3);
  puVar6 = puVar2;
  func_0x00010c1245c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c1245c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_10;
  func_0x00010c269d40(param_10);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c23f220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010bfc04e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c23f220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ed100();
  uVar9 = param_9;
  func_0x00010c0ef4a0(param_9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010bfe8560(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar11);
  _objc_release();
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_106be01e8;
  uStack_98 = 0x106be01f8;
  uStack_90 = 0;
  uStack_e8 = 0;
  uStack_d8 = 0x3032000000;
  pcStack_d0 = FUN_106be01e8;
  uStack_c8 = 0x106be01f8;
  uStack_c0 = 0;
  puStack_e0 = &uStack_e8;
  puStack_b0 = &uStack_b8;
  _dispatch_group_create();
  _dispatch_group_enter();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_106be0200;
  puStack_118 = &UNK_110966e40;
  puStack_108 = &uStack_b8;
  puStack_100 = &uStack_e8;
  uStack_f8 = param_1;
  uStack_f0 = param_2;
  _objc_retain(uVar3);
  uStack_110 = uVar3;
  func_0x00010c09bd80(param_3);
  _objc_initWeak(auStack_138,param_3);
  uVar11 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_1b0 = puVar1;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_106be02d4;
  puStack_198 = &UNK_110966e70;
  _objc_copyWeak(auStack_140,auStack_138);
  puStack_150 = &uStack_b8;
  puStack_148 = &uStack_e8;
  uStack_158 = param_11;
  uStack_190 = param_5;
  puStack_188 = puVar2;
  puStack_180 = puVar6;
  puStack_178 = puVar7;
  uStack_170 = uVar10;
  uStack_168 = param_7;
  uStack_160 = param_8;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(uVar10);
  _objc_retain(puVar7);
  _objc_retain(puVar6);
  _objc_retain(puVar2);
  _objc_retain(param_11);
  _objc_retain(param_5);
  func_0x000100bc0718(uVar3,uVar11,&puStack_1b0);
  _objc_release(uVar11);
  _objc_release(uStack_160);
  _objc_release(uStack_168);
  _objc_release(uStack_170);
  _objc_release(puStack_178);
  _objc_release(puStack_180);
  _objc_release(puStack_188);
  _objc_release(uStack_158);
  _objc_release(uStack_190);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  _objc_release(uStack_110);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_e8,8);
  _objc_release(uStack_c0);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(uVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(param_11);
  _objc_release(param_5);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  return;
}



/* Entry: 106be01e8; end: 106be01ff;  */

void FUN_106be01e8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106be0200; end: 106be02d3;  */

void FUN_106be0200(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126bf488;
  _objc_retainAutorelease(param_2);
  _objc_retain(param_3);
  func_0x00010bdc1020(param_2);
  func_0x00010bf41dc0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126bf488;
  _objc_retainAutorelease(param_3);
  func_0x00010bdc1020();
  _objc_release(param_3);
  func_0x00010bf41dc0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106be02d4; end: 106be05fb;  */

void FUN_106be02d4(float param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  float fStack_80;
  undefined1 auStack_78 [8];
  
  uVar1 = param_2 + 0x70;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(param_2 + 0x28);
      func_0x00010bf321a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(param_2 + 0x28);
      func_0x00010bf321a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      if ((*(long *)(param_2 + 0x30) != 0) && (*(long *)(param_2 + 0x38) != 0)) {
        func_0x00010befa120(puVar6);
        func_0x00010befa120(puVar7);
      }
      func_0x00010befa160(puVar6);
      func_0x00010befa160(puVar7);
      if ((*(long *)(*(long *)(*(long *)(param_2 + 0x60) + 8) + 0x28) != 0) &&
         (*(long *)(*(long *)(*(long *)(param_2 + 0x68) + 8) + 0x28) != 0)) {
        func_0x00010befa120(puVar6);
        func_0x00010befa120(puVar7);
      }
      if ((lVar4 != 0) && (lVar5 != 0)) {
        func_0x00010befa120(puVar6);
        func_0x00010befa120(puVar7);
      }
      uVar2 = uVar1;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfed740();
      fVar11 = 3.0;
      if ((uVar3 & 1) == 0) {
        uVar3 = uVar1;
        func_0x00010c23f220(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8b160();
        fVar11 = 3.0;
        if (param_1 != 0.0) {
          uVar8 = uVar1;
          fVar11 = param_1;
          func_0x00010c23f220(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf8b160();
          _objc_release(uVar8);
        }
        _objc_release(uVar3);
      }
      _objc_release(uVar2);
      _objc_initWeak(auStack_78,uVar1);
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_106be05fc;
      puStack_c0 = &UNK_11094c6f8;
      _objc_copyWeak(auStack_88,auStack_78);
      uVar9 = *(undefined8 *)(param_2 + 0x20);
      _objc_retain(uVar9);
      uVar10 = *(undefined8 *)(param_2 + 0x58);
      uStack_b8 = uVar9;
      _objc_retain(uVar10);
      uVar9 = *(undefined8 *)(param_2 + 0x48);
      uStack_90 = uVar10;
      _objc_retain(uVar9);
      uStack_b0 = uVar9;
      _objc_retain(puVar6);
      puStack_a8 = puVar6;
      _objc_retain(puVar7);
      uVar9 = *(undefined8 *)(param_2 + 0x50);
      puStack_a0 = puVar7;
      fStack_80 = fVar11;
      _objc_retain(uVar9);
      uStack_98 = uVar9;
      func_0x000100162d98("APPSTORE",&puStack_d8);
      _objc_release(uStack_98);
      _objc_release(puStack_a0);
      _objc_release(puStack_a8);
      _objc_release(uStack_b0);
      _objc_release(uStack_90);
      _objc_release(uStack_b8);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_78);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      goto LAB_106be05d0;
    }
  }
  (**(code **)(*(long *)(param_2 + 0x58) + 0x10))(*(long *)(param_2 + 0x58),0,0,0);
LAB_106be05d0:
  _objc_release(uVar1);
  return;
}



/* Entry: 106be05fc; end: 106be0787;  */

void FUN_106be05fc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      lVar9 = *(long *)(param_1 + 0x48);
      puVar4 = PTR_PTR_1126d1368;
      _objc_alloc(PTR_PTR_1126d1368);
      uVar2 = uVar1;
      func_0x00010c08e680();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfccde0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010c140b00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfccde0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bf51e00(uVar7);
      uVar8 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bf51e00(uVar8);
      func_0x00010c01c1c0(*(undefined4 *)(param_1 + 0x58),puVar4);
      (**(code **)(lVar9 + 0x10))(lVar9,puVar4,*(undefined8 *)(param_1 + 0x40),0);
      _objc_release(puVar4);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      goto LAB_106be0764;
    }
  }
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0,0,0);
LAB_106be0764:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106be0788; end: 106be0817;  */

void FUN_106be0788(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),7);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x70,param_2 + 0x70);
  return;
}



/* Entry: 106be0818; end: 106be0823; -[SCSpectaclesBoomboxGLVideoCell disparityOffset] */

undefined8 FUN_106be0818(void)

{
  return 0x4044000000000000;
}



/* Entry: 106be0824; end: 106be0be3; -[SCSpectaclesBoomboxGLVideoCell loadPlaybackSessionWithId:player:cloudFile:snapDetail:memoriesCachingMediaHelper:completion:] */

void FUN_106be0824(double param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [8];
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [16];
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar1 = PTR_PTR_1126bfb80;
  _objc_alloc();
  uVar2 = param_5;
  func_0x00010c23f220(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010bf12380(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c1307e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c046fe0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c08e680(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfccde0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar4 = param_5;
  func_0x00010c08e680(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfccde0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4e040();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_90,param_5);
  uVar2 = param_5;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23f220(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x000108d4ad38();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_90);
  _objc_retain(param_7);
  _objc_retain(param_12);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lStack_a0 = (long)(param_3 * param_1);
  lStack_98 = (long)(param_4 * param_1);
  _objc_retain(puVar1);
  _objc_retain(param_10);
  func_0x00010c1346c0(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_10);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_12);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar1);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 106be0be4; end: 106be0e2f;  */

void FUN_106be0be4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if ((param_3 == 0) && (uVar1 != 0)) {
    uVar2 = uVar1;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar2 = uVar1;
      func_0x00010bf12380(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf0b480();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010c23f220(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bf9ee60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar2 = uVar1;
      func_0x00010bf12380();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c1306e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010c23f220(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010c07c3c0();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar7 & 1) == 0) {
        lVar9 = *(long *)(param_1 + 0x48);
        puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar9 + 0x10))(lVar9,0,0,puVar8);
        _objc_release(puVar8);
      }
      else {
        func_0x00010bdf1980(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),uVar1);
      }
      _objc_release(uVar6);
      goto LAB_106be0dfc;
    }
  }
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0,0,param_3);
LAB_106be0dfc:
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106be0e30; end: 106be154f; -[SCSpectaclesBoomboxGLVideoCell _createPlaybackSession:player:cloudFile:avAsset:metadataToken:outputSize:provider:snapDetail:completion:] */

void FUN_106be0e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [8];
  undefined *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  uVar1 = param_12;
  _objc_retain();
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  pcStack_b0 = FUN_106be1550;
  uStack_a8 = 0x106be1560;
  uStack_a0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_106be1550;
  uStack_d8 = 0x106be1560;
  uStack_d0 = 0;
  _dispatch_group_create();
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x2020000000;
  uStack_100 = 0;
  _dispatch_group_enter();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_106be1568;
  puStack_138 = &UNK_11084fa08;
  _objc_retain(param_8);
  uStack_130 = param_8;
  _objc_retain(uVar1);
  puStack_120 = &uStack_118;
  uStack_128 = uVar1;
  func_0x00010c09c640(param_8);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar4 = param_3;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000107ffa11c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _dispatch_group_enter(uVar1);
  puVar2 = PTR_PTR_1126bf6d0;
  _objc_alloc();
  uVar4 = param_11;
  func_0x00010c0ef4a0(param_11);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  uStack_170 = 0x106be1748;
  puStack_168 = &UNK_110853230;
  puStack_158 = &uStack_c8;
  _objc_retain(uVar1);
  uStack_160 = uVar1;
  func_0x00010c0328a0(param_1,param_2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c0c9ee0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620();
  _objc_release(uVar4);
  _dispatch_group_enter(uVar1);
  puVar3 = PTR_PTR_1126bf6d0;
  _objc_alloc(PTR_PTR_1126bf6d0);
  uVar4 = param_11;
  func_0x00010c0ef4a0(param_11);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  uStack_1a0 = 0x106be1788;
  puStack_198 = &UNK_110853230;
  puStack_188 = &uStack_f8;
  _objc_retain(uVar1);
  uStack_190 = uVar1;
  func_0x00010c0328a0(param_1,param_2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c0c9ee0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620();
  _objc_release(uVar4);
  uStack_1e0 = 0;
  uStack_1d0 = 0x3032000000;
  pcStack_1c8 = FUN_106be1550;
  uStack_1c0 = 0x106be1560;
  uStack_1b8 = 0;
  uStack_210 = 0;
  uStack_200 = 0x3032000000;
  pcStack_1f8 = FUN_106be1550;
  uStack_1f0 = 0x106be1560;
  uStack_1e8 = 0;
  puStack_208 = &uStack_210;
  puStack_1d8 = &uStack_1e0;
  _dispatch_group_enter(uVar1);
  puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_240 = 0xc2000000;
  pcStack_238 = FUN_106be17c8;
  puStack_230 = &UNK_110966ed0;
  puStack_220 = &uStack_1e0;
  puStack_218 = &uStack_210;
  _objc_retain(uVar1);
  uStack_228 = uVar1;
  func_0x00010c09bd80(param_3);
  _objc_initWeak(auStack_250,param_3);
  puStack_2d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2d0 = 0xc2000000;
  pcStack_2c8 = FUN_106be1ab4;
  puStack_2c0 = &UNK_110966f00;
  _objc_copyWeak(auStack_258,auStack_250);
  uStack_2b0 = param_11;
  puStack_280 = &uStack_c8;
  uStack_288 = param_12;
  puStack_278 = &uStack_1e0;
  puStack_270 = &uStack_f8;
  puStack_268 = &uStack_210;
  puStack_260 = &uStack_118;
  uStack_2b8 = param_5;
  uStack_2a8 = param_10;
  uStack_2a0 = param_8;
  uStack_298 = param_6;
  uStack_290 = param_9;
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_5);
  func_0x000100bc0718(uVar1,PTR___dispatch_main_q_11034be20,&puStack_2d8);
  _objc_release(uStack_290);
  _objc_release(uStack_298);
  _objc_release(uStack_2a0);
  _objc_release(uStack_2a8);
  _objc_release(uStack_2b0);
  _objc_release(uStack_288);
  _objc_release(uStack_2b8);
  _objc_destroyWeak(auStack_258);
  _objc_destroyWeak(auStack_250);
  _objc_release(uStack_228);
  __Block_object_dispose(&uStack_210,8);
  _objc_release(uStack_1e8);
  __Block_object_dispose(&uStack_1e0,8);
  _objc_release(uStack_1b8);
  _objc_release(puVar3);
  _objc_release(uStack_190);
  _objc_release(puVar2);
  _objc_release(uStack_160);
  _objc_release(uVar5);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  __Block_object_dispose(&uStack_118,8);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(uStack_a0);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_8);
  _objc_release(param_10);
  _objc_release(param_11);
  _objc_release(param_12);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_210,8);
  __Block_object_dispose(&uStack_1e0,8);
  __Block_object_dispose(&uStack_118,8);
  __Block_object_dispose(&uStack_f8,8);
  lVar8 = 8;
  __Block_object_dispose(&uStack_c8);
  __Unwind_Resume();
  *(undefined8 *)(param_7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = 0;
  return;
}



/* Entry: 106be1550; end: 106be1567;  */

void FUN_106be1550(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106be1568; end: 106be16d3;  */

void FUN_106be1568(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c279200(lVar1,param_2,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar6 == 0) {
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&DAT_10f3be3bb);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_40 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106be16d4;
    puStack_60 = &UNK_11084fa08;
    uStack_48 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(lVar6);
    param_1 = *(long *)(param_1 + 0x28);
    lStack_58 = lVar6;
    _objc_retain(param_1);
    lStack_50 = param_1;
    func_0x00010c09c640(lVar6,param_2,puVar3,&puStack_78);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lStack_50);
    _objc_release(lStack_58);
  }
  lVar1 = lVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_d0;
  pcStack_88 = FUN_106be16d4;
  lStack_a0 = param_1;
  lStack_98 = lVar6;
  puStack_90 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar1 + 0x20) == 0) {
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    func_0x00010c106f40(&uStack_d0);
  }
  func_0x00010b691288();
  *(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x30) + 8) + 0x18) = puVar4;
  lVar6 = *(long *)(*(long *)(lVar1 + 0x30) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x18);
  func_0x00010b69138c();
  *(undefined8 *)(lVar6 + 0x18) = uVar5;
  _dispatch_group_leave(*(undefined8 *)(lVar1 + 0x28));
  return;
}



/* Entry: 106be16d4; end: 106be17c7;  */

void FUN_106be16d4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_50;
  if (*(long *)(param_1 + 0x20) == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010c106f40(&uStack_50);
  }
  func_0x00010b691288();
  *(undefined8 **)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = puVar1;
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  func_0x00010b69138c();
  *(undefined8 *)(lVar3 + 0x18) = uVar2;
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106be17c8; end: 106be1ab3;  */

void FUN_106be17c8(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2700;
  _objc_alloc();
  func_0x00010c055500(0x3fe0000000000000,0x3fe0000000000000,0x3ff0000000000000,0);
  puVar2 = PTR_PTR_1126b2708;
  _objc_alloc();
  uVar17 = 0x3ff0000000000000;
  func_0x00010c01ce60(0x3ff0000000000000,0x3ff0000000000000);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (param_2 != 0) {
    puVar2 = PTR_PTR_1126b26e8;
    _objc_alloc();
    puVar4 = PTR_PTR_1126b26c8;
    func_0x00010c22b820();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b26f0;
    _objc_alloc();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = 0x3ff0000000000000;
    func_0x00010c01d120(0x3ff0000000000000);
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfffdc0();
    lVar15 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar14 = *(undefined8 *)(lVar15 + 0x28);
    *(undefined **)(lVar15 + 0x28) = puVar2;
    _objc_release(uVar14);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
  if (param_3 != 0) {
    puVar2 = PTR_PTR_1126b26e8;
    _objc_alloc();
    puVar4 = PTR_PTR_1126b26c8;
    func_0x00010c22b820();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b26f0;
    _objc_alloc();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = 0x3ff0000000000000;
    func_0x00010c01d120(0x3ff0000000000000);
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfffdc0();
    lVar15 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar14 = *(undefined8 *)(lVar15 + 0x28);
    *(undefined **)(lVar15 + 0x28) = puVar2;
    _objc_release(uVar14);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = param_2 + 0x80;
  _objc_loadWeakRetained();
  if (uVar8 != 0) {
    uVar9 = uVar8;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c0720c0();
    _objc_release(uVar9);
    puVar1 = PTR_PTR_1126bfb98;
    if ((uVar10 & 1) != 0) {
      uVar14 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c0ef4a0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c100560(puVar1);
      _objc_release(uVar14);
      uVar14 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c0ef4a0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07cac0();
      _objc_release(uVar14);
      uVar14 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c0ef4a0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0efc0();
      _objc_release(uVar14);
      func_0x00010c14c720(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x58) + 8) + 0x28));
      uVar16 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x58) + 8) + 0x28);
      uVar14 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010bf321a0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar16);
      _objc_release(uVar14);
      func_0x00010c14c720(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x68) + 8) + 0x28));
      uVar16 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x68) + 8) + 0x28);
      uVar14 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010bf321a0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar16);
      _objc_release(uVar14);
      lVar13 = *(long *)(param_2 + 0x50);
      puVar1 = PTR_PTR_1126d1370;
      _objc_alloc();
      uVar9 = uVar8;
      func_0x00010c08e680();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bfccde0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar8;
      func_0x00010c140b00(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010bfccde0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c1245c0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c1245c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2318e0();
      func_0x00010bff4260(uVar17,puVar1);
      (**(code **)(lVar13 + 0x10))(lVar13,puVar1,*(undefined8 *)(param_2 + 0x48),0);
      _objc_release(puVar1);
      _objc_release(uVar16);
      _objc_release(uVar14);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      goto LAB_106be1db4;
    }
  }
  (**(code **)(*(long *)(param_2 + 0x50) + 0x10))(*(long *)(param_2 + 0x50),0,0,0);
LAB_106be1db4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 106be1ab4; end: 106be1ddb;  */

void FUN_106be1ab4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar1 = param_2 + 0x80;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126bfb98;
    if ((uVar3 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c0ef4a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c100560(puVar5);
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c0ef4a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07cac0();
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c0ef4a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0efc0();
      _objc_release(uVar4);
      func_0x00010c14c720(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x58) + 8) + 0x28));
      uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x58) + 8) + 0x28);
      uVar4 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010bf321a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar8);
      _objc_release(uVar4);
      func_0x00010c14c720(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x68) + 8) + 0x28));
      uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x68) + 8) + 0x28);
      uVar4 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010bf321a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar8);
      _objc_release(uVar4);
      lVar9 = *(long *)(param_2 + 0x50);
      puVar5 = PTR_PTR_1126d1370;
      _objc_alloc();
      uVar2 = uVar1;
      func_0x00010c08e680();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfccde0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar1;
      func_0x00010c140b00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfccde0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c1245c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c1245c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2318e0();
      func_0x00010bff4260(param_1,puVar5);
      (**(code **)(lVar9 + 0x10))(lVar9,puVar5,*(undefined8 *)(param_2 + 0x48),0);
      _objc_release(puVar5);
      _objc_release(uVar8);
      _objc_release(uVar4);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar2);
      goto LAB_106be1db4;
    }
  }
  (**(code **)(*(long *)(param_2 + 0x50) + 0x10))(*(long *)(param_2 + 0x50),0,0,0);
LAB_106be1db4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106be1ddc; end: 106be1f27;  */

void FUN_106be1ddc(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),7);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  __Block_object_assign(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x80,param_2 + 0x80);
  return;
}



/* Entry: 106be1f28; end: 106be25cb; -[SCSpectaclesBoomboxMediaCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106be1f28(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c8 = PTR_PTR_1126f5968;
  uVar10 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar1 = &uStack_d0;
  puVar7 = (undefined8 *)PTR_s_initWithFrame__1125e2948;
  uStack_d0 = param_1;
  _objc_msgSendSuper2(uVar10,uVar11,uVar12,uVar13);
  puVar2 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    uStack_c0 = *(undefined8 *)PTR__kEAGLDrawablePropertyRetainedBacking_11034b938;
    uStack_b8 = *(undefined8 *)PTR__kEAGLDrawablePropertyColorFormat_11034b930;
    uStack_a8 = *(undefined8 *)PTR__kEAGLColorFormatRGBA8_11034b928;
    puStack_b0 = PTR____kCFBooleanFalse_11034ab60;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00ee20();
    lVar9 = (long)_DAT_11275a62c;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar3;
    _objc_release(uVar8);
    _objc_release(puVar4);
    puVar5 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1677c0(0,*(undefined8 *)((long)puVar1 + lVar9));
    puVar3 = PTR_PTR_1126d1378;
    _objc_alloc();
    func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
    lVar9 = (long)_DAT_11275a630;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar3;
    _objc_release(uVar8);
    func_0x00010c221ca0(*(undefined8 *)((long)puVar1 + lVar9));
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010bfccde0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4c20();
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010bfccde0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1917e0();
    _objc_release(uVar8);
    puVar5 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    puVar3 = PTR_PTR_1126d1378;
    _objc_alloc();
    func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
    lVar9 = (long)_DAT_11275a634;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar3;
    _objc_release(uVar8);
    func_0x00010c221ca0(*(undefined8 *)((long)puVar1 + lVar9));
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010bfccde0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4c20();
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010bfccde0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1917e0();
    _objc_release(uVar8);
    puVar5 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275a638);
    *(undefined **)((long)puVar1 + (long)_DAT_11275a638) = puVar3;
    _objc_release(uVar8);
    puVar5 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275a63c);
    *(undefined **)((long)puVar1 + (long)_DAT_11275a63c) = puVar3;
    _objc_release(uVar8);
    puVar5 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    puVar3 = PTR_PTR_1126d1380;
    _objc_alloc();
    puVar4 = PTR_PTR_1126d1388;
    func_0x00010c238fa0(PTR_PTR_1126d1388);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061ce0();
    lVar9 = (long)_DAT_11275a640;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar3;
    _objc_release(uVar8);
    _objc_release(puVar4);
    func_0x00010c23d620(*(undefined8 *)((long)puVar1 + lVar9));
    puVar5 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d1380;
    _objc_alloc();
    puVar4 = PTR_PTR_1126d1388;
    func_0x00010c238fa0(PTR_PTR_1126d1388);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061ce0();
    lVar9 = (long)_DAT_11275a644;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar3;
    _objc_release(uVar8);
    _objc_release(puVar4);
    func_0x00010c23d620(*(undefined8 *)((long)puVar1 + lVar9));
    puVar5 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
    lVar9 = (long)_DAT_11275a648;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar3;
    _objc_release(uVar10);
    puVar5 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199e0(0,0,0x4010000000000000,0x405c800000000000,0x4000000000000000,
                        0x4000000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    _objc_alloc_init();
    _objc_retainAutorelease(puVar3);
    func_0x00010bdc1040();
    func_0x00010c1d9820(puVar4);
    uVar10 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010c08c0e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(uVar10);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar9));
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010bf4dce0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)puVar1[2])(puVar1,uVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return puVar7;
}



/* Entry: 106be25cc; end: 106be2653;  */

void FUN_106be25cc(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106be2654; end: 106be2873;  */

void FUN_106be2654(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c08e680(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c08e680(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106be2874; end: 106be2aeb; -[SCSpectaclesBoomboxMediaCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be2874(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f5968;
  lStack_60 = param_2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  lVar2 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  dVar4 = param_1;
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _objc_release(lVar2);
  param_1 = param_1 - dVar4;
  lVar2 = (long)_DAT_11275a630;
  func_0x00010c19f0e0(param_1,0,dVar4,dVar4,*(undefined8 *)(param_2 + lVar2));
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetMaxX();
  lVar3 = (long)_DAT_11275a634;
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + lVar3));
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar2));
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + _DAT_11275a638));
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar3));
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + _DAT_11275a63c));
  lVar2 = param_2;
  func_0x00010c23f220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000109023cdc();
  dVar5 = param_1;
  _objc_release(lVar2);
  func_0x00010bf850a0(param_2);
  puVar1 = PTR_PTR_1126d1390;
  func_0x00010c22b6a0(PTR_PTR_1126d1390);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf321c0();
  _objc_release(puVar1);
  dVar4 = dVar5 / param_1 + dVar4;
  func_0x00010c0bbfe0(*(undefined8 *)(param_2 + _DAT_11275a640));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfe0(*(undefined8 *)(param_2 + _DAT_11275a644));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  dVar5 = dVar4 + -2.0;
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _objc_release(lVar2);
  func_0x00010c19f0e0(dVar5,dVar4 + -114.0,0x4010000000000000,0x405c800000000000,
                      *(undefined8 *)(param_2 + _DAT_11275a648));
  return;
}



/* Entry: 106be2aec; end: 106be2d8f;  */

void FUN_106be2aec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c08e680(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c08e680(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106be2d90; end: 106be2e3f; -[SCSpectaclesBoomboxMediaCell dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be2d90(long param_1)

{
  long lVar1;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + _DAT_11275a64c);
  if (lVar1 != 0) {
    _objc_retain(lVar1);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106be2e40;
    puStack_30 = &UNK_110842e18;
    lStack_28 = lVar1;
    _objc_retain(lVar1);
    func_0x000100162d98("APPSTORE",&puStack_48);
    _objc_release(lStack_28);
    _objc_release(lVar1);
  }
  puStack_50 = PTR_PTR_1126f5968;
  lStack_58 = param_1;
  _objc_msgSendSuper2(&lStack_58,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106be2e40; end: 106be2e47;  */

void FUN_106be2e40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2568b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_stopRunning_112673450);
  return;
}



/* Entry: 106be2e48; end: 106be2eaf; -[SCSpectaclesBoomboxMediaCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be2e48(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5968;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c1097a0(*(undefined8 *)(param_1 + _DAT_11275a640));
  func_0x00010c1097a0(*(undefined8 *)(param_1 + _DAT_11275a644));
  func_0x00010bf3a200(param_1);
  return;
}



/* Entry: 106be2eb0; end: 106be2f6f; -[SCSpectaclesBoomboxMediaCell cleanup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be2eb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11275a62c));
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + _DAT_11275a630));
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + _DAT_11275a634));
  lVar3 = (long)_DAT_11275a64c;
  func_0x00010c2568a0(*(undefined8 *)(param_1 + lVar3));
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275a650);
  *(undefined8 *)(param_1 + _DAT_11275a650) = 0;
  _objc_release(uVar1);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11275a638),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275a63c);
  func_0x00010c1a9f00(uVar1,param_2,0);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275a654);
  *(undefined8 *)(param_1 + _DAT_11275a654) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106be2f70; end: 106be316f; -[SCSpectaclesBoomboxMediaCell setupCellWithSnap:userSession:mergedDataSource:encryptedContentManager:cloudFS:shouldLoopPlayback:delegate:auxiliaryContentServices:memoriesCachingMediaHelper:memoriesTrackingImageProcessCommandScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be2f70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_11);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275a658);
  *(undefined8 *)(param_1 + _DAT_11275a658) = param_4;
  _objc_retain(param_4);
  _objc_retain(param_12);
  _objc_retain(param_9);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275a65c);
  *(undefined8 *)(param_1 + _DAT_11275a65c) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275a660);
  *(undefined8 *)(param_1 + _DAT_11275a660) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275a664);
  *(undefined8 *)(param_1 + _DAT_11275a664) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar1);
  _objc_storeWeak(param_1 + _DAT_11275a668,param_9);
  _objc_release(param_9);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275a66c);
  *(undefined8 *)(param_1 + _DAT_11275a66c) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_11275a670) = param_8;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275a674);
  *(undefined8 *)(param_1 + _DAT_11275a674) = param_10;
  _objc_retain(param_10);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275a678);
  *(undefined8 *)(param_1 + _DAT_11275a678) = param_11;
  _objc_release(uVar1);
  _objc_release(param_10);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_storeWeak(param_1 + _DAT_11275a67c,param_12);
  _objc_release(param_12);
                    /* WARNING: Could not recover jumptable at 0x00010bf3a210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cleanup_1125ac228);
  return;
}



/* Entry: 106be3170; end: 106be33c7; -[SCSpectaclesBoomboxMediaCell playWithPlayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be3170(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_11275a64c) == 0) {
    func_0x00010c239660(param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11275a664);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c23f220(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c13a8c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(uVar2);
    lVar3 = param_1;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,param_1);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puVar5 = PTR_PTR_1126bf788;
    _objc_alloc(PTR_PTR_1126bf788);
    func_0x00010c017ba0();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106be33c8;
    puStack_80 = &UNK_110966f30;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(lVar3);
    lStack_78 = lVar3;
    _objc_copyWeak(auStack_a0,auStack_68);
    _objc_retain(lVar3);
    _objc_retain(param_3);
    func_0x00010bf89240(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar1 = PTR___dispatch_main_q_11034be20;
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_a0);
    _objc_release(lStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar3);
    _objc_release(uVar4);
  }
  else {
    func_0x00010c2504a0();
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106be33c8; end: 106be3463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be33c8(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0720c0();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      func_0x00010c1e4680((float)param_1,*(undefined8 *)(param_2 + _DAT_11275a640));
      func_0x00010c1e4680((float)param_1,*(undefined8 *)(param_2 + _DAT_11275a644));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106be3464; end: 106be3677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be3464(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0720c0();
    _objc_release(lVar2);
    if ((int)lVar3 != 0) {
      uVar4 = *(undefined8 *)(lVar1 + _DAT_11275a664);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c23f220(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c13a8c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(uVar4);
      uVar6 = *(undefined8 *)(lVar1 + _DAT_11275a65c);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c23f220(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010bfa7140(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(uVar6);
      lVar2 = lVar1;
      func_0x00010c15ffa0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_68,param_1 + 0x30);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar6);
      func_0x00010c09be80(lVar1);
      _objc_release(lVar2);
      _objc_release(uVar6);
      _objc_destroyWeak(auStack_68);
      _objc_release(uVar4);
      _objc_release(uVar5);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106be3678; end: 106be38c3;  */

void FUN_106be3678(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x106be3790;
  puStack_70 = &UNK_11085ae98;
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_68 = uVar1;
  _objc_retain(param_2);
  uStack_60 = param_2;
  _objc_retain(param_4);
  uStack_58 = param_4;
  _objc_retain(param_3);
  uStack_50 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_88);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106be38c4; end: 106be390f; -[SCSpectaclesBoomboxMediaCell reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be38c4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11275a64c;
  uVar1 = *(ulong *)(param_1 + lVar3);
  _objc_opt_respondsToSelector(uVar1,PTR_s_reset_11262ba18);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_reset_11262ba18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2568b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_stopRunning_112673450);
  return;
}



/* Entry: 106be3910; end: 106be397b; -[SCSpectaclesBoomboxMediaCell fastReverse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be3910(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275a64c;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_fastReverse_1125c5cf0);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfa0d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar2),PTR_s_fastReverse_1125c5cf0);
    return;
  }
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f5a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106be397c; end: 106be39fb; -[SCSpectaclesBoomboxMediaCell showProgressIndicator] */

/* WARNING: Possible PIC construction at 0x000106be39d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106be39dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be397c(long param_1)

{
  long lVar1;
  
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11275a62c));
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + _DAT_11275a630));
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + _DAT_11275a634));
  lVar1 = (long)_DAT_11275a640;
  func_0x00010c1097a0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 106be39fc; end: 106be3ae3; -[SCSpectaclesBoomboxMediaCell hideProgressIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be39fc(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106be3a88;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48);
  func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_11275a640));
  func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_11275a644));
  return;
}



/* Entry: 106be3ae4; end: 106be3ca7; -[SCSpectaclesBoomboxMediaCell loadOverlayImagesWithId:cloudFile:snapDetail:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be3ae4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275a660);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23f220(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c136020(uVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106be3ca8; end: 106be3f4b;  */

void FUN_106be3ca8(double param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_4);
  uVar1 = param_3 + 0x38;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar4 = param_4;
      func_0x00010c1511c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_3 + 0x28);
      func_0x00010c0ef4a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x000107ff7990();
      _objc_release(uVar5);
      uVar5 = uVar4;
      if ((int)uVar6 != 0) {
        uVar6 = *(undefined8 *)(param_3 + 0x28);
        func_0x00010c0ef4a0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c23f220(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x000109023974();
        uVar3 = uVar1;
        func_0x00010c23f220(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar3;
        func_0x00010c2a5040();
        uVar8 = uVar1;
        func_0x00010c23f220(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010bfe0640();
        uVar5 = uVar6;
        func_0x000107ff7d2c(param_1,param_2,(double)(int)uVar7,(double)(int)uVar9,uVar6,uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(uVar8);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar6);
      }
      uVar4 = param_4;
      func_0x00010c0c5d00(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c23f220(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x000109023974();
      _objc_release(uVar2);
      uVar6 = uVar5;
      func_0x00010854478c(param_1,param_2,0x3ff0000000000000,0x3ff0000000000000,uVar5,uVar4,0,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf850a0(uVar1);
      uVar10 = uVar6;
      func_0x00010bfe98e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf850a0(uVar1);
      uVar11 = uVar6;
      func_0x00010bfe98e0(-param_1,0,uVar6);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(*(long *)(param_3 + 0x30) + 0x10))(*(long *)(param_3 + 0x30),uVar10,uVar11);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar5);
      goto LAB_106be3f1c;
    }
  }
  (**(code **)(*(long *)(param_3 + 0x30) + 0x10))(*(long *)(param_3 + 0x30),0,0);
LAB_106be3f1c:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106be3f4c; end: 106be3f9f; -[SCSpectaclesBoomboxMediaCell playbackSession:didPlayToEnd:] */

void FUN_106be3f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010bf1f5e0();
  }
  else {
    func_0x00010bf1f5a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106be3fa0; end: 106be3fdf; -[SCSpectaclesBoomboxMediaCell playbackSessionDidLoadFirstFrame:] */

void FUN_106be3fa0(undefined8 param_1)

{
  func_0x00010bfe26a0();
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106be3fe0; end: 106be405b; -[SCSpectaclesBoomboxMediaCell playbackSession:didReceiveError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be3fe0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275a64c;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(param_4);
  func_0x00010c2568a0(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f580();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106be405c; end: 106be40af; -[SCSpectaclesBoomboxMediaCell disparityOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_106be405c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw();
  return *(undefined8 *)(puVar1 + _DAT_11275a630);
}



/* Entry: 106be40b0; end: 106be4153; -[SCSpectaclesBoomboxMediaCell loadPlaybackSessionWithId:player:cloudFile:snapDetail:memoriesCachingMediaHelper:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_106be40b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  return *(undefined8 *)(puVar1 + _DAT_11275a630);
}



/* Entry: 106be4154; end: 106be4163; -[SCSpectaclesBoomboxMediaCell leftGLView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106be4154(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275a630);
}



/* Entry: 106be4164; end: 106be4173; -[SCSpectaclesBoomboxMediaCell rightGLView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106be4164(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275a634);
}



/* Entry: 106be4174; end: 106be4183; -[SCSpectaclesBoomboxMediaCell userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106be4174(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275a658);
}



/* Entry: 106be4184; end: 106be4193; -[SCSpectaclesBoomboxMediaCell mergedDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106be4184(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275a65c);
}



/* Entry: 106be4194; end: 106be41a3; -[SCSpectaclesBoomboxMediaCell encryptedContentManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106be4194(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275a660);
}



/* Entry: 106be41a4; end: 106be41b3; -[SCSpectaclesBoomboxMediaCell cloudFS] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106be41a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275a664);
}



/* Entry: 106be41b4; end: 106be41c3; -[SCSpectaclesBoomboxMediaCell snap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106be41b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275a66c);
}



/* Entry: 106be41c4; end: 106be41e3; -[SCSpectaclesBoomboxMediaCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be41c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275a668);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106be41e4; end: 106be41f3; -[SCSpectaclesBoomboxMediaCell auxiliaryContentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106be41e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275a674);
}



/* Entry: 106be41f4; end: 106be4213; -[SCSpectaclesBoomboxMediaCell memoriesTrackingImageProcessCommandScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be41f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275a67c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106be4214; end: 106be4223; -[SCSpectaclesBoomboxMediaCell shouldLoopPlayback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106be4214(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275a670);
}



/* Entry: 106be4224; end: 106be4233; -[SCSpectaclesBoomboxMediaCell sessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106be4224(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275a654);
}



/* Entry: 106be4234; end: 106be423f; -[SCSpectaclesBoomboxMediaCell setSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be4234(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106be4240; end: 106be424f; -[SCSpectaclesBoomboxMediaCell leftImageOverlayImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106be4240(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275a638);
}


