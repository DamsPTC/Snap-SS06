/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106bddd64; end: 106bddd77; -[SCSnapEditorBlockSendActionGuard onActionWithContext:completion:] */

void FUN_106bddd64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000106bddd74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3,param_4);
  return;
}



/* Entry: 106bddd78; end: 106bddd7f; -[SCSnapEditorBlockSendActionGuard priority] */

undefined8 FUN_106bddd78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106bddd80; end: 106bddd8b; -[SCSnapEditorBlockSendActionGuard .cxx_destruct] */

void FUN_106bddd80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bddd8c; end: 106bde073;  */

/* WARNING: Removing unreachable block (ram,0x000106bde03c) */

void FUN_106bddd8c(long param_1,char *param_2,char *param_3,char *param_4,int param_5,
                  undefined8 param_6)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *unaff_x25;
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
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_b8,pcVar1);
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
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,pcVar1);
    unaff_x25 = auStack_70;
    pcVar1 = "true";
    if (param_5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x25,pcVar1);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x00010007e1e8(&uStack_d8,auStack_b8,&lStack_58,4);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110966d80,&uStack_d8,param_6);
    puStack_c0 = &uStack_d8;
    func_0x00010007e5dc(&puStack_c0);
    lVar2 = 0;
    do {
      if ((&cStack_59)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x60);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_b8);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 106bde074; end: 106bde07f; -[SCFeatureSettingsService hasGenAIFeatureRestricted] */

void FUN_106bde074(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e77f78);
  return;
}



/* Entry: 106bde080; end: 106bde08b; -[SCFeatureSettingsService genAIFeatureRestrictedServerParam] */

undefined ** FUN_106bde080(void)

{
  return &PTR____CFConstantStringClassReference_110e77f78;
}



/* Entry: 106bde08c; end: 106bde09b; -[SCFeatureSettingsService setGenAIFeatureRestricted:] */

void FUN_106bde08c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e77f78,param_3);
  return;
}



/* Entry: 106bde09c; end: 106bde0a3; -[SCFeatureSettingsService gen_ai_feature_restricted_client_value:] */

undefined * FUN_106bde09c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106bde0a4; end: 106bde0ab; -[SCFeatureSettingsService gen_ai_feature_restricted_server_value:] */

void FUN_106bde0a4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106bde0ac; end: 106bde0bb; -[SCFeatureSettingsService genAIFeatureRestricted] */

void FUN_106bde0ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e77f78,0);
  return;
}



/* Entry: 106bde0bc; end: 106bde0c7; -[SCFeatureSettingsService hasGenAIIdentityOnboarded] */

void FUN_106bde0bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e77f98);
  return;
}



/* Entry: 106bde0c8; end: 106bde0d3; -[SCFeatureSettingsService genAIIdentityOnboardedServerParam] */

undefined ** FUN_106bde0c8(void)

{
  return &PTR____CFConstantStringClassReference_110e77f98;
}



/* Entry: 106bde0d4; end: 106bde0e3; -[SCFeatureSettingsService setGenAIIdentityOnboarded:] */

void FUN_106bde0d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e77f98,param_3);
  return;
}



/* Entry: 106bde0e4; end: 106bde0eb; -[SCFeatureSettingsService gen_ai_identity_onboarded_client_value:] */

undefined * FUN_106bde0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106bde0ec; end: 106bde0f3; -[SCFeatureSettingsService gen_ai_identity_onboarded_server_value:] */

void FUN_106bde0ec(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106bde0f4; end: 106bde103; -[SCFeatureSettingsService genAIIdentityOnboarded] */

void FUN_106bde0f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e77f98,0);
  return;
}



/* Entry: 106bde104; end: 106bde117; -[SCFeatureSettingsService dreamsFeatureViewUserPolicy] */

void FUN_106bde104(void)

{
  func_0x00010c069340();
  return;
}



/* Entry: 106bde118; end: 106bde11f; -[SCFeatureSettingsService setDreamsFeatureViewUserPolicy:] */

void FUN_106bde118(undefined8 param_1,undefined8 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ae550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setInternalDreamsFeatureViewUser_112649378,(long)param_3);
  return;
}



/* Entry: 106bde120; end: 106bde133; -[SCFeatureSettingsService dreamsFeatureGenerationPolicy] */

void FUN_106bde120(void)

{
  func_0x00010c069320();
  return;
}



/* Entry: 106bde134; end: 106bde13b; -[SCFeatureSettingsService setDreamsFeatureGenerationPolicy:] */

void FUN_106bde134(undefined8 param_1,undefined8 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ae530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setInternalDreamsFeatureGenerati_112649370,(long)param_3);
  return;
}



/* Entry: 106bde13c; end: 106bde13f; -[SCFeatureSettingsService hasDreamsFeatureGenerationPolicy] */

void FUN_106bde13c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd8050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hasInternalDreamsFeatureGenerati_1125d39b8);
  return;
}



/* Entry: 106bde140; end: 106bde1a3; -[SCFeatureSettingsService dreamsFeatureGenerationPolicyObservable] */

void FUN_106bde140(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106bde1a4;
  puStack_20 = &UNK_11088e668;
  uStack_18 = param_1;
  func_0x00010bf54280(PTR_PTR_1126ae6b8,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bde1a4; end: 106bde377;  */

void FUN_106bde1a4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_2;
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  _objc_retain(param_2);
  func_0x00010c0e0c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126b0418;
  _objc_retain(uVar6);
  func_0x00010bf54280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar6);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0e00e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  func_0x00010c0df780(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar6);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 106bde378; end: 106bde3eb;  */

void FUN_106bde378(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106bde3ec; end: 106bde3f3;  */

void FUN_106bde3ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c281a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_unobserve_11267e0c0);
  return;
}



/* Entry: 106bde3f4; end: 106bde3ff; -[SCFeatureSettingsService hasDreamsSponsoredDisclaimerShownCount] */

void FUN_106bde3f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e77fb8);
  return;
}



/* Entry: 106bde400; end: 106bde40b; -[SCFeatureSettingsService dreamsSponsoredDisclaimerShownCountServerParam] */

undefined ** FUN_106bde400(void)

{
  return &PTR____CFConstantStringClassReference_110e77fb8;
}



/* Entry: 106bde40c; end: 106bde41b; -[SCFeatureSettingsService setDreamsSponsoredDisclaimerShownCount:] */

void FUN_106bde40c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e77fb8,param_3);
  return;
}



/* Entry: 106bde41c; end: 106bde423; -[SCFeatureSettingsService dreams_sponsored_disclaimer_shown_count_client_value:] */

void FUN_106bde41c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106bde424; end: 106bde42b; -[SCFeatureSettingsService dreams_sponsored_disclaimer_shown_count_server_value:] */

void FUN_106bde424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106bde42c; end: 106bde43b; -[SCFeatureSettingsService dreamsSponsoredDisclaimerShownCount] */

void FUN_106bde42c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e77fb8,0);
  return;
}



/* Entry: 106bde43c; end: 106bde447; -[SCFeatureSettingsService hasDreamsSnapchatPlusPopupShownCount] */

void FUN_106bde43c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e77fd8);
  return;
}



/* Entry: 106bde448; end: 106bde453; -[SCFeatureSettingsService dreamsSnapchatPlusPopupShownCountServerParam] */

undefined ** FUN_106bde448(void)

{
  return &PTR____CFConstantStringClassReference_110e77fd8;
}



/* Entry: 106bde454; end: 106bde463; -[SCFeatureSettingsService setDreamsSnapchatPlusPopupShownCount:] */

void FUN_106bde454(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e77fd8,param_3);
  return;
}



/* Entry: 106bde464; end: 106bde46b; -[SCFeatureSettingsService dreams_snapchat_plus_popup_shown_count_client_value:] */

void FUN_106bde464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106bde46c; end: 106bde473; -[SCFeatureSettingsService dreams_snapchat_plus_popup_shown_count_server_value:] */

void FUN_106bde46c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106bde474; end: 106bde483; -[SCFeatureSettingsService dreamsSnapchatPlusPopupShownCount] */

void FUN_106bde474(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e77fd8,0);
  return;
}



/* Entry: 106bde484; end: 106bde48f; -[SCFeatureSettingsService hasAICaptionsJitAcceptedVersion] */

void FUN_106bde484(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e77ff8);
  return;
}



/* Entry: 106bde490; end: 106bde49b; -[SCFeatureSettingsService AICaptionsJitAcceptedVersionServerParam] */

undefined ** FUN_106bde490(void)

{
  return &PTR____CFConstantStringClassReference_110e77ff8;
}



/* Entry: 106bde49c; end: 106bde4ab; -[SCFeatureSettingsService setAICaptionsJitAcceptedVersion:] */

void FUN_106bde49c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e77ff8,param_3);
  return;
}



/* Entry: 106bde4ac; end: 106bde4b3; -[SCFeatureSettingsService ai_caption_jit_accepted_version_client_value:] */

void FUN_106bde4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106bde4b4; end: 106bde4bb; -[SCFeatureSettingsService ai_caption_jit_accepted_version_server_value:] */

void FUN_106bde4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106bde4bc; end: 106bde4cb; -[SCFeatureSettingsService AICaptionsJitAcceptedVersion] */

void FUN_106bde4bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e77ff8,0);
  return;
}



/* Entry: 106bde4cc; end: 106bde4d7; -[SCFeatureSettingsService hasDreamsBadgeLastSeenTimestampMs] */

void FUN_106bde4cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e78018);
  return;
}



/* Entry: 106bde4d8; end: 106bde4e3; -[SCFeatureSettingsService dreamsBadgeLastSeenTimestampMsServerParam] */

undefined ** FUN_106bde4d8(void)

{
  return &PTR____CFConstantStringClassReference_110e78018;
}



/* Entry: 106bde4e4; end: 106bde4f3; -[SCFeatureSettingsService setDreamsBadgeLastSeenTimestampMs:] */

void FUN_106bde4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e78018,param_3);
  return;
}



/* Entry: 106bde4f4; end: 106bde4fb; -[SCFeatureSettingsService dreams_tab_last_seen_timestamp_ms_client_value:] */

void FUN_106bde4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106bde4fc; end: 106bde503; -[SCFeatureSettingsService dreams_tab_last_seen_timestamp_ms_server_value:] */

void FUN_106bde4fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106bde504; end: 106bde513; -[SCFeatureSettingsService dreamsBadgeLastSeenTimestampMs] */

void FUN_106bde504(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e78018,0);
  return;
}



/* Entry: 106bde514; end: 106bde51f; -[SCFeatureSettingsService hasGenerativeAICameraTextToImageDisclaimerAccepted] */

void FUN_106bde514(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e78038);
  return;
}



/* Entry: 106bde520; end: 106bde52b; -[SCFeatureSettingsService generativeAICameraTextToImageDisclaimerAcceptedServerParam] */

undefined ** FUN_106bde520(void)

{
  return &PTR____CFConstantStringClassReference_110e78038;
}



/* Entry: 106bde52c; end: 106bde53b; -[SCFeatureSettingsService setGenerativeAICameraTextToImageDisclaimerAccepted:] */

void FUN_106bde52c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e78038,param_3);
  return;
}



/* Entry: 106bde53c; end: 106bde543; -[SCFeatureSettingsService generative_ai_camera_text_to_image_disclaimer_accepted_client_value:] */

undefined * FUN_106bde53c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106bde544; end: 106bde54b; -[SCFeatureSettingsService generative_ai_camera_text_to_image_disclaimer_accepted_server_value:] */

void FUN_106bde544(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106bde54c; end: 106bde55b; -[SCFeatureSettingsService generativeAICameraTextToImageDisclaimerAccepted] */

void FUN_106bde54c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e78038,0);
  return;
}



/* Entry: 106bde55c; end: 106bde567; -[SCFeatureSettingsService hasDreamsNewPackDreamsTabTopBannerSeenPacks] */

void FUN_106bde55c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e78058);
  return;
}



/* Entry: 106bde568; end: 106bde573; -[SCFeatureSettingsService dreamsNewPackDreamsTabTopBannerSeenPacksServerParam] */

undefined ** FUN_106bde568(void)

{
  return &PTR____CFConstantStringClassReference_110e78058;
}



/* Entry: 106bde574; end: 106bde583; -[SCFeatureSettingsService setDreamsNewPackDreamsTabTopBannerSeenPacks:] */

void FUN_106bde574(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110e78058,param_3);
  return;
}



/* Entry: 106bde584; end: 106bde5ab; -[SCFeatureSettingsService dreams_new_pack_dreams_tab_top_banner_seen_packs_client_value:] */

void FUN_106bde584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106bde5ac; end: 106bde5d3; -[SCFeatureSettingsService dreams_new_pack_dreams_tab_top_banner_seen_packs_server_value:] */

void FUN_106bde5ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106bde5d4; end: 106bde5e7; -[SCFeatureSettingsService dreamsNewPackDreamsTabTopBannerSeenPacks] */

void FUN_106bde5d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110e78058,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 106bde5e8; end: 106bde5f3; -[SCFeatureSettingsService hasDreamsNewPackSnapsTabBottomBannerSeenPacks] */

void FUN_106bde5e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e78078);
  return;
}



/* Entry: 106bde5f4; end: 106bde5ff; -[SCFeatureSettingsService dreamsNewPackSnapsTabBottomBannerSeenPacksServerParam] */

undefined ** FUN_106bde5f4(void)

{
  return &PTR____CFConstantStringClassReference_110e78078;
}



/* Entry: 106bde600; end: 106bde60f; -[SCFeatureSettingsService setDreamsNewPackSnapsTabBottomBannerSeenPacks:] */

void FUN_106bde600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110e78078,param_3);
  return;
}



/* Entry: 106bde610; end: 106bde637; -[SCFeatureSettingsService dreams_new_pack_snaps_tab_bottom_banner_seen_packs_client_value:] */

void FUN_106bde610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106bde638; end: 106bde65f; -[SCFeatureSettingsService dreams_new_pack_snaps_tab_bottom_banner_seen_packs_server_value:] */

void FUN_106bde638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106bde660; end: 106bde673; -[SCFeatureSettingsService dreamsNewPackSnapsTabBottomBannerSeenPacks] */

void FUN_106bde660(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110e78078,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 106bde674; end: 106bde67f; -[SCFeatureSettingsService hasMySelfieSeeInAdsEnabled] */

void FUN_106bde674(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e78098);
  return;
}



/* Entry: 106bde680; end: 106bde68b; -[SCFeatureSettingsService mySelfieSeeInAdsEnabledServerParam] */

undefined ** FUN_106bde680(void)

{
  return &PTR____CFConstantStringClassReference_110e78098;
}



/* Entry: 106bde68c; end: 106bde69b; -[SCFeatureSettingsService setMySelfieSeeInAdsEnabled:] */

void FUN_106bde68c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e78098,param_3);
  return;
}



/* Entry: 106bde69c; end: 106bde6a3; -[SCFeatureSettingsService my_selfie_see_in_ads_enabled_client_value:] */

undefined * FUN_106bde69c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106bde6a4; end: 106bde6ab; -[SCFeatureSettingsService my_selfie_see_in_ads_enabled_server_value:] */

void FUN_106bde6a4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106bde6ac; end: 106bde6bb; -[SCFeatureSettingsService mySelfieSeeInAdsEnabled] */

void FUN_106bde6ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e78098,0);
  return;
}



/* Entry: 106bde6bc; end: 106bde6c7; -[SCFeatureSettingsService hasMySelfieHasSeenOnboardingJit] */

void FUN_106bde6bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e780b8);
  return;
}



/* Entry: 106bde6c8; end: 106bde6d3; -[SCFeatureSettingsService mySelfieHasSeenOnboardingJitServerParam] */

undefined ** FUN_106bde6c8(void)

{
  return &PTR____CFConstantStringClassReference_110e780b8;
}



/* Entry: 106bde6d4; end: 106bde6e3; -[SCFeatureSettingsService setMySelfieHasSeenOnboardingJit:] */

void FUN_106bde6d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e780b8,param_3);
  return;
}



/* Entry: 106bde6e4; end: 106bde6eb; -[SCFeatureSettingsService my_selfie_has_seen_onboarding_jit_client_value:] */

undefined * FUN_106bde6e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106bde6ec; end: 106bde6f3; -[SCFeatureSettingsService my_selfie_has_seen_onboarding_jit_server_value:] */

void FUN_106bde6ec(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106bde6f4; end: 106bde703; -[SCFeatureSettingsService mySelfieHasSeenOnboardingJit] */

void FUN_106bde6f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e780b8,0);
  return;
}



/* Entry: 106bde704; end: 106bde70f; -[SCFeatureSettingsService hasMySelfieAiSnapsEnabled] */

void FUN_106bde704(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e780d8);
  return;
}



/* Entry: 106bde710; end: 106bde71b; -[SCFeatureSettingsService mySelfieAiSnapsEnabledServerParam] */

undefined ** FUN_106bde710(void)

{
  return &PTR____CFConstantStringClassReference_110e780d8;
}



/* Entry: 106bde71c; end: 106bde72b; -[SCFeatureSettingsService setMySelfieAiSnapsEnabled:] */

void FUN_106bde71c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e780d8,param_3);
  return;
}



/* Entry: 106bde72c; end: 106bde733; -[SCFeatureSettingsService my_selfie_ai_snaps_enabled_client_value:] */

undefined * FUN_106bde72c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106bde734; end: 106bde73b; -[SCFeatureSettingsService my_selfie_ai_snaps_enabled_server_value:] */

void FUN_106bde734(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106bde73c; end: 106bde74b; -[SCFeatureSettingsService mySelfieAiSnapsEnabled] */

void FUN_106bde73c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e780d8,0);
  return;
}



/* Entry: 106bde74c; end: 106bde757; -[SCFeatureSettingsService hasAIStoryReplyDisclaimerAccepted] */

void FUN_106bde74c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e780f8);
  return;
}



/* Entry: 106bde758; end: 106bde763; -[SCFeatureSettingsService AIStoryReplyDisclaimerAcceptedServerParam] */

undefined ** FUN_106bde758(void)

{
  return &PTR____CFConstantStringClassReference_110e780f8;
}



/* Entry: 106bde764; end: 106bde773; -[SCFeatureSettingsService setAIStoryReplyDisclaimerAccepted:] */

void FUN_106bde764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e780f8,param_3);
  return;
}



/* Entry: 106bde774; end: 106bde77b; -[SCFeatureSettingsService ai_story_reply_disclaimer_accepted_client_value:] */

undefined * FUN_106bde774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106bde77c; end: 106bde783; -[SCFeatureSettingsService ai_story_reply_disclaimer_accepted_server_value:] */

void FUN_106bde77c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106bde784; end: 106bde793; -[SCFeatureSettingsService AIStoryReplyDisclaimerAccepted] */

void FUN_106bde784(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e780f8,0);
  return;
}



/* Entry: 106bde794; end: 106bde79f; -[SCFeatureSettingsService hasAISnapInChatTooltipShownVersion] */

void FUN_106bde794(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e78118);
  return;
}



/* Entry: 106bde7a0; end: 106bde7ab; -[SCFeatureSettingsService AISnapInChatTooltipShownVersionServerParam] */

undefined ** FUN_106bde7a0(void)

{
  return &PTR____CFConstantStringClassReference_110e78118;
}



/* Entry: 106bde7ac; end: 106bde7bb; -[SCFeatureSettingsService setAISnapInChatTooltipShownVersion:] */

void FUN_106bde7ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e78118,param_3);
  return;
}



/* Entry: 106bde7bc; end: 106bde7c3; -[SCFeatureSettingsService ai_snap_in_chat_tooltip_version_client_value:] */

void FUN_106bde7bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106bde7c4; end: 106bde7cb; -[SCFeatureSettingsService ai_snap_in_chat_tooltip_version_server_value:] */

void FUN_106bde7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106bde7cc; end: 106bde7db; -[SCFeatureSettingsService AISnapInChatTooltipShownVersion] */

void FUN_106bde7cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e78118,0);
  return;
}



/* Entry: 106bde7dc; end: 106bde7e7; -[SCFeatureSettingsService hasAISnapInChatDisclaimerVersion] */

void FUN_106bde7dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e78138);
  return;
}



/* Entry: 106bde7e8; end: 106bde7f3; -[SCFeatureSettingsService AISnapInChatDisclaimerVersionServerParam] */

undefined ** FUN_106bde7e8(void)

{
  return &PTR____CFConstantStringClassReference_110e78138;
}



/* Entry: 106bde7f4; end: 106bde803; -[SCFeatureSettingsService setAISnapInChatDisclaimerVersion:] */

void FUN_106bde7f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e78138,param_3);
  return;
}


