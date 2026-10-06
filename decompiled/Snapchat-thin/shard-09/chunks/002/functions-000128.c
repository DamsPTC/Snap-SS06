/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a58670; end: 106a586d7; +[QuestionResponse descriptor] */

void FUN_106a58670(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4868 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b0e770,
                        &PTR____CFConstantStringClassReference_110e68958,&PTR_DAT_11316d830,
                        &PTR_DAT_11316d848,2,0x10,0x1c);
    puRam00000001136c4868 = puVar1;
  }
  return;
}



/* Entry: 106a586d8; end: 106a5873f; +[SurveyResponse descriptor] */

void FUN_106a586d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4870 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b0e7c0,
                        &PTR____CFConstantStringClassReference_110e68978,&PTR_DAT_11316d830,
                        &PTR_s_version_11316d888,2,0x10,0x1c);
    puRam00000001136c4870 = puVar1;
  }
  return;
}



/* Entry: 106a58740; end: 106a587a7; +[GetSurveyDataRequest descriptor] */

void FUN_106a58740(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4878 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b0e810,
                        &PTR____CFConstantStringClassReference_110e68998,&PTR_DAT_11316d830,0,0,4,
                        0x1c);
    puRam00000001136c4878 = puVar1;
  }
  return;
}



/* Entry: 106a587a8; end: 106a5880f; +[GetSurveyDataResponse descriptor] */

void FUN_106a587a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4880 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b0e860,
                        &PTR____CFConstantStringClassReference_110e689b8,&PTR_DAT_11316d830,
                        &PTR_s_data_p_11316d8c8,2,0x10,0x1c);
    puRam00000001136c4880 = puVar1;
  }
  return;
}



/* Entry: 106a58810; end: 106a5889b; +[UpdateSurveyDataRequest descriptor] */

undefined * FUN_106a58810(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4888 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b0e8b0,
                        &PTR____CFConstantStringClassReference_110e689d8,&PTR_DAT_11316d830,
                        &PTR_s_data_p_11316d908,3,0x10,0x1c);
    func_0x00010c229040();
    puRam00000001136c4888 = puVar1;
  }
  return puRam00000001136c4888;
}



/* Entry: 106a5889c; end: 106a58903; +[UpdateSurveyDataResponse descriptor] */

void FUN_106a5889c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4890 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b0e900,
                        &PTR____CFConstantStringClassReference_110e689f8,&PTR_DAT_11316d830,0,0,4,
                        0x1c);
    puRam00000001136c4890 = puVar1;
  }
  return;
}



/* Entry: 106a58904; end: 106a5896f; -[SCCreatePublicProfileDeepLinkProcessor initWithNavigationDelegate:] */

undefined1 * FUN_106a58904(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4798;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a58970; end: 106a58a23; -[SCCreatePublicProfileDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_106a58970(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_106a5b8ac();
  _objc_release(uVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  if ((int)uVar2 == 0) {
    func_0x00010c10c9e0();
  }
  else {
    func_0x00010c10d420();
  }
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x00010bf94720(param_5,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106a58a24; end: 106a58a2b; -[SCCreatePublicProfileDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_106a58a24(void)

{
  return 1;
}



/* Entry: 106a58a2c; end: 106a58a2f; -[SCCreatePublicProfileDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_106a58a2c(void)

{
  return;
}



/* Entry: 106a58a30; end: 106a58a37; -[SCCreatePublicProfileDeepLinkProcessor .cxx_destruct] */

void FUN_106a58a30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106a58a38; end: 106a58aa3; -[SCCreatePublicProfileDeepLinkProcessorPlugin initWithNavigationDelegate:] */

undefined1 * FUN_106a58a38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f47a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a58aa4; end: 106a58ab7; -[SCCreatePublicProfileDeepLinkProcessorPlugin identifier] */

void FUN_106a58aa4(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 106a58ab8; end: 106a58abf; -[SCCreatePublicProfileDeepLinkProcessorPlugin priority] */

undefined8 FUN_106a58ab8(void)

{
  return 1000;
}



/* Entry: 106a58ac0; end: 106a58ad3; -[SCCreatePublicProfileDeepLinkProcessorPlugin canProvideProcessorForFeature:] */

void FUN_106a58ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110f83af8);
  return;
}



/* Entry: 106a58ad4; end: 106a58b1f; -[SCCreatePublicProfileDeepLinkProcessorPlugin isValidDeepLink:] */

undefined8 FUN_106a58ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d2a0(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106a58b20; end: 106a58b73; -[SCCreatePublicProfileDeepLinkProcessorPlugin makeDeepLinkProcessor] */

void FUN_106a58b20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cff70;
  _objc_alloc(PTR_PTR_1126cff70);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c02e580(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a58b74; end: 106a58b7b; -[SCCreatePublicProfileDeepLinkProcessorPlugin .cxx_destruct] */

void FUN_106a58b74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106a58b7c; end: 106a58c17; -[SCGenericCreatorsDeepLinkProcessor initWithNavigationDelegate:simpleSnapchatExperimentConfigProvider:] */

undefined1 *
FUN_106a58b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f47a8;
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



/* Entry: 106a58c18; end: 106a58d17; -[SCGenericCreatorsDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_106a58c18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0dbde0();
  if ((int)uVar1 == 0) {
    _objc_release(uVar3);
  }
  else {
    lVar2 = param_1;
    func_0x00010be435a0(param_1,param_2,param_3);
    _objc_release(uVar3);
    if ((int)lVar2 != 0) {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      func_0x00010c10d420();
      goto LAB_106a58cdc;
    }
  }
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10c9e0();
LAB_106a58cdc:
  _objc_release(param_1);
  func_0x00010bf94720(param_5,param_2,0);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a58d18; end: 106a58d1f; -[SCGenericCreatorsDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_106a58d18(void)

{
  return 1;
}



/* Entry: 106a58d20; end: 106a58d23; -[SCGenericCreatorsDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_106a58d20(void)

{
  return;
}



/* Entry: 106a58d24; end: 106a58d6f; -[SCGenericCreatorsDeepLinkProcessor _isRoutingToActivityFeedForDeeplink:] */

undefined8 FUN_106a58d24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106a58d70; end: 106a58d9b; -[SCGenericCreatorsDeepLinkProcessor .cxx_destruct] */

void FUN_106a58d70(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106a58d9c; end: 106a58e37; -[SCGenericCreatorsDeepLinkProcessorPlugin initWithNavigationDelegate:simpleSnapchatExperimentConfigProvider:] */

undefined1 *
FUN_106a58d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f47b0;
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



/* Entry: 106a58e38; end: 106a58e4b; -[SCGenericCreatorsDeepLinkProcessorPlugin identifier] */

void FUN_106a58e38(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 106a58e4c; end: 106a58e53; -[SCGenericCreatorsDeepLinkProcessorPlugin priority] */

undefined8 FUN_106a58e4c(void)

{
  return 1000;
}



/* Entry: 106a58e54; end: 106a58f03; -[SCGenericCreatorsDeepLinkProcessorPlugin canProvideProcessorForFeature:] */

ulong FUN_106a58e54(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f83b18);
  if (((((uVar1 & 1) == 0) &&
       (uVar1 = param_3,
       func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f03e58),
       (uVar1 & 1) == 0)) &&
      (uVar1 = param_3,
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f03e78),
      (uVar1 & 1) == 0)) &&
     (uVar1 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f83b38),
     (uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f83b58);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106a58f04; end: 106a58f4f; -[SCGenericCreatorsDeepLinkProcessorPlugin isValidDeepLink:] */

undefined8 FUN_106a58f04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d2a0(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106a58f50; end: 106a58faf; -[SCGenericCreatorsDeepLinkProcessorPlugin makeDeepLinkProcessor] */

void FUN_106a58f50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126cff78;
  _objc_alloc(PTR_PTR_1126cff78);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c02e860(puVar1,param_2,lVar2,*(undefined8 *)(param_1 + 0x10));
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a58fb0; end: 106a58fdb; -[SCGenericCreatorsDeepLinkProcessorPlugin .cxx_destruct] */

void FUN_106a58fb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106a58fdc; end: 106a5909f; -[SCOurStoryDeepLinkProcessor initWithNavigationDelegate:circumstanceEngine:adPrefetchServices:] */

undefined1 *
FUN_106a58fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f47b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
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



/* Entry: 106a590a0; end: 106a5945b; -[SCOurStoryDeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:] */

long FUN_106a590a0(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = param_3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0720c0();
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = param_3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0720c0();
    if (((ulong)puVar4 & 1) != 0) {
LAB_106a591c8:
      _objc_release(puVar3);
      goto LAB_106a591d0;
    }
    puVar4 = param_3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0720c0();
    if (((ulong)puVar5 & 1) != 0) {
LAB_106a591c0:
      _objc_release(puVar4);
      goto LAB_106a591c8;
    }
    puVar5 = param_3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0720c0();
    if (((ulong)puVar6 & 1) != 0) {
LAB_106a591b8:
      _objc_release(puVar5);
      goto LAB_106a591c0;
    }
    puVar6 = param_3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0720c0();
    if (((ulong)puVar7 & 1) != 0) {
      _objc_release(puVar6);
      goto LAB_106a591b8;
    }
    puVar7 = param_3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (((ulong)puVar8 & 1) == 0) {
      puVar2 = param_3;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0720c0();
      if (((ulong)puVar3 & 1) == 0) {
        _objc_release(puVar2);
      }
      else {
        puVar3 = param_3;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        _objc_release(puVar2);
        if ((int)puVar4 != 0) {
          func_0x00010be2d600(param_1,param_2,param_3,param_4,param_5,0);
          goto LAB_106a59330;
        }
      }
      param_1 = 0;
      goto LAB_106a59330;
    }
  }
  else {
LAB_106a591d0:
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010c0f5840(param_3,param_2,1,0);
  _objc_retainAutoreleasedReturnValue();
  if ((puVar3 == (undefined *)0x0) ||
     (puVar4 = puVar3, func_0x00010c08fa60(), puVar4 == (undefined *)0x0)) {
    puVar4 = param_3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    if ((int)puVar5 != 0) {
      puVar4 = param_3;
      func_0x00010c11d6e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      goto LAB_106a592b8;
    }
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e56f18);
    _objc_retainAutoreleasedReturnValue();
LAB_106a592b8:
    func_0x00010c1d0640(puVar2,param_2,puVar5,&PTR____CFConstantStringClassReference_110ea16f8);
    _objc_release(puVar5);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x0001005929c0();
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  if (iVar1 == 0) {
    func_0x00010be2d520(param_1,param_2,param_3,param_4,puVar4);
  }
  else {
    func_0x00010be2d600();
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_106a59330:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106a5945c; end: 106a594cf; -[SCOurStoryDeepLinkProcessor _handleOpenURLForDiscoverFeed:sourceApplication:additionalInfo:] */

undefined8
FUN_106a5945c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10dfe0();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_1);
  return 1;
}



/* Entry: 106a594d0; end: 106a59b5f; -[SCOurStoryDeepLinkProcessor _handleOpenURLForSpotlight:sourceApplication:additionalInfo:snapId:] */

undefined **
FUN_106a594d0(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
             undefined *param_5,long param_6)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined **unaff_x26;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x000108f4b7d8();
  if (iVar1 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x000108f4b7ec();
    if ((iVar1 == 0) || (lVar2 = param_6, func_0x00010c08fa60(), lVar2 == 0)) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar12 = param_5;
      func_0x00010c0e00e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_6);
      lVar2 = param_6;
      func_0x00010c08fa60();
      if (lVar2 == 0) {
        puVar14 = (undefined *)0x0;
      }
      else {
        puVar3 = PTR_PTR_1126bdc38;
        _objc_alloc();
        func_0x00010c04e340();
        puVar4 = PTR_PTR_1126ca5f8;
        _objc_alloc();
        func_0x00010c047c60();
        puVar5 = PTR_PTR_1126bdc40;
        _objc_alloc();
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0472c0();
        puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar6);
        _objc_release(puVar4);
        _objc_release(puVar3);
      }
      _objc_release(param_6);
      _objc_release(puVar12);
    }
    func_0x00010bf529e0();
    unaff_x26 = *(undefined ***)(param_1 + 0x18);
    func_0x00010c24ada0(unaff_x26);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = unaff_x26;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = (undefined *)0x6;
    func_0x00010c107480();
    _objc_release(ppuVar11);
    _objc_release(unaff_x26);
    _objc_release(puVar14);
  }
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar7 = lVar2;
  func_0x00010010fab4();
  _objc_release(lVar2);
  if ((lVar2 == 0) || ((int)lVar7 == 0)) {
    ppuVar11 = param_3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar11;
    func_0x00010c0720c0();
    _objc_release(ppuVar11);
    if ((int)ppuVar8 == 0) {
      ppuVar11 = param_3;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar11;
      func_0x00010c0720c0();
      _objc_release(ppuVar11);
      if ((int)ppuVar8 == 0) {
        ppuVar11 = param_3;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar11;
        func_0x00010c0720c0();
        if (((ulong)ppuVar8 & 1) == 0) {
          unaff_x26 = param_3;
          func_0x00010c0f5800();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = unaff_x26;
          func_0x00010c0720c0();
          if (((ulong)ppuVar9 & 1) != 0) goto LAB_106a599cc;
          _objc_release(unaff_x26);
          _objc_release(ppuVar11);
        }
        else {
LAB_106a599cc:
          ppuVar9 = param_3;
          func_0x00010c11d6e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = ppuVar9;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(ppuVar9);
          if (((ulong)ppuVar8 & 1) == 0) {
            _objc_release(unaff_x26);
          }
          _objc_release(ppuVar11);
          if (ppuVar10 == (undefined **)0x0) {
            ppuVar11 = (undefined **)0x0;
            puVar12 = (undefined *)0x0;
            func_0x00010be623c0(param_1);
            goto LAB_106a59a8c;
          }
        }
        puVar12 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = &PTR____CFConstantStringClassReference_110e68ab8;
        func_0x00010bf17ba0();
        _objc_release(puVar12);
        puVar12 = param_5;
        func_0x00010be623c0(param_1);
        puVar14 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf94220();
      }
      else {
        puVar14 = param_5;
        func_0x00010c0d3c80(param_5);
        puVar12 = PTR_PTR_1126ce5a0;
        func_0x00010c0e90c0(PTR_PTR_1126ce5a0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar14);
        _objc_release(puVar12);
        puVar3 = puVar14;
        func_0x00010bf51e00(puVar14);
        ppuVar11 = param_3;
        puVar12 = puVar3;
        func_0x00010be623c0(param_1);
        _objc_release(puVar3);
      }
    }
    else {
      puVar14 = (undefined *)(param_1 + 8);
      _objc_loadWeakRetained(puVar14);
      ppuVar11 = (undefined **)0x1;
      puVar12 = param_5;
      func_0x00010c10d420();
    }
  }
  else {
    puVar14 = (undefined *)(param_1 + 8);
    _objc_loadWeakRetained(puVar14);
    ppuVar11 = param_3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar11;
    func_0x00010c0720c0();
    _objc_release(ppuVar11);
    if ((int)ppuVar8 == 0) {
      ppuVar11 = param_3;
      func_0x00010c0f5800();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar11;
      func_0x00010c0720c0();
      _objc_release(ppuVar11);
      puVar3 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      if ((int)ppuVar8 == 0) {
        ppuVar11 = &PTR____CFConstantStringClassReference_110e68ab8;
        func_0x00010bf17ba0(puVar3);
        _objc_release(puVar3);
        func_0x00010c0d6220(puVar14);
      }
      else {
        ppuVar11 = &PTR____CFConstantStringClassReference_110e68a98;
        func_0x00010bf17ba0(puVar3);
        _objc_release(puVar3);
        func_0x00010c0d6200(puVar14);
      }
      puVar3 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf94220();
    }
    else {
      puVar3 = param_5;
      func_0x00010c0d3c80(param_5);
      puVar4 = PTR_PTR_1126ce5a0;
      func_0x00010c0e90c0(PTR_PTR_1126ce5a0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = &PTR____CFConstantStringClassReference_110e68a78;
      func_0x00010bf17ba0();
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010bf51e00(puVar3);
      func_0x00010c0d6220(puVar14);
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf94220();
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar14);
LAB_106a59a8c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return (undefined **)0x1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar12);
  _objc_retain(ppuVar11);
  param_3 = param_3 + 1;
  _objc_loadWeakRetained(param_3);
  func_0x00010c10c0e0();
  _objc_release(puVar12);
  _objc_release(ppuVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return param_3;
}



/* Entry: 106a59b60; end: 106a59bcb; -[SCOurStoryDeepLinkProcessor _navigateToSpotlightWithDeepLinkURL:sourceApplication:additionalInfo:] */

void FUN_106a59b60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10c0e0();
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a59bcc; end: 106a59bdf; -[SCOurStoryDeepLinkProcessor identifier] */

void FUN_106a59bcc(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 106a59be0; end: 106a59be7; -[SCOurStoryDeepLinkProcessor priority] */

undefined8 FUN_106a59be0(void)

{
  return 1000;
}



/* Entry: 106a59be8; end: 106a59cc7; -[SCOurStoryDeepLinkProcessor canProvideProcessorForFeature:] */

ulong FUN_106a59be8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f14938);
  if (((((uVar1 & 1) == 0) &&
       (uVar1 = param_3,
       func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ddea98),
       (uVar1 & 1) == 0)) &&
      (uVar1 = param_3,
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f836b8),
      (uVar1 & 1) == 0)) &&
     (((uVar1 = param_3,
       func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e50718),
       (uVar1 & 1) == 0 &&
       (uVar1 = param_3,
       func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f83b78),
       (uVar1 & 1) == 0)) &&
      (uVar1 = param_3,
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e3cd18),
      (uVar1 & 1) == 0)))) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f83698);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106a59cc8; end: 106a59d13; -[SCOurStoryDeepLinkProcessor isValidDeepLink:] */

undefined8 FUN_106a59cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d2a0(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106a59d14; end: 106a59d17; -[SCOurStoryDeepLinkProcessor makeDeepLinkProcessor] */

void FUN_106a59d14(void)

{
  return;
}



/* Entry: 106a59d18; end: 106a59e17; -[SCOurStoryDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_106a59d18(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0d3c80(param_4);
  func_0x00010c1d0640();
  uVar1 = param_3;
  func_0x00010c2475e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1c20(param_1,param_2,param_3,uVar1,param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  if ((param_1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e68a38,
                        &PTR____CFConstantStringClassReference_110daafd8,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  func_0x00010bf94720(param_5,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106a59e18; end: 106a59e1f; -[SCOurStoryDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_106a59e18(void)

{
  return 0;
}



/* Entry: 106a59e20; end: 106a59e23; -[SCOurStoryDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_106a59e20(void)

{
  return;
}



/* Entry: 106a59e24; end: 106a59e5b; -[SCOurStoryDeepLinkProcessor .cxx_destruct] */

void FUN_106a59e24(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106a59e5c; end: 106a59f63; -[SCBillboardActionContext initWithNavigationUIContainer:uiContainer:action:surface:onComplete:] */

undefined1 *
FUN_106a59e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f47c0;
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    uVar2 = param_7;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a59f64; end: 106a59f6b; -[SCBillboardActionContext navigationUIContainer] */

undefined8 FUN_106a59f64(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106a59f6c; end: 106a59f73; -[SCBillboardActionContext uiContainer] */

undefined8 FUN_106a59f6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106a59f74; end: 106a59f7b; -[SCBillboardActionContext action] */

undefined8 FUN_106a59f74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106a59f7c; end: 106a59f83; -[SCBillboardActionContext surface] */

undefined8 FUN_106a59f7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106a59f84; end: 106a59f8b; -[SCBillboardActionContext onComplete] */

undefined8 FUN_106a59f84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106a59f8c; end: 106a59fd3; -[SCBillboardActionContext .cxx_destruct] */

void FUN_106a59f8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a59fd4; end: 106a5a047; -[SCBillboardActionHandlerScope initWithPlugInRegistry:] */

undefined1 * FUN_106a59fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f47c8;
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



/* Entry: 106a5a048; end: 106a5a04f; -[SCBillboardActionHandlerScope plugInRegistry] */

undefined8 FUN_106a5a048(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106a5a050; end: 106a5a05b; -[SCBillboardActionHandlerScope .cxx_destruct] */

void FUN_106a5a050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a5a05c; end: 106a5a0cf; -[SCGrapheneThirdPartyLoginDeeplinkMetric2 init] */

undefined1 * FUN_106a5a05c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f47d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106a5a0d0; end: 106a5a147;  */

void FUN_106a5a0d0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109585d8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a5a148; end: 106a5a1bf;  */

void FUN_106a5a148(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110958628,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a5a1c0; end: 106a5a237;  */

void FUN_106a5a1c0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110958678,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a5a238; end: 106a5a2af;  */

void FUN_106a5a238(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109586c8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a5a2b0; end: 106a5a327;  */

void FUN_106a5a2b0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110958718,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a5a328; end: 106a5a39f;  */

void FUN_106a5a328(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110958768,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a5a3a0; end: 106a5a417;  */

void FUN_106a5a3a0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109587b8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a5a418; end: 106a5a483; -[SCSearchOverlayTransitionController initWithSearchViewProvider:] */

undefined1 * FUN_106a5a418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f47d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a5a484; end: 106a5a487; -[SCSearchOverlayTransitionController animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_106a5a484(void)

{
  return;
}



/* Entry: 106a5a488; end: 106a5a48b; -[SCSearchOverlayTransitionController animationControllerForDismissedController:] */

void FUN_106a5a488(void)

{
  return;
}



/* Entry: 106a5a48c; end: 106a5a497; -[SCSearchOverlayTransitionController transitionDuration:] */

undefined8 FUN_106a5a48c(void)

{
  return 0x3fd851eb851eb852;
}



/* Entry: 106a5a498; end: 106a5a62b; -[SCSearchOverlayTransitionController animateTransition:] */

void FUN_106a5a498(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c29c220();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c29c220();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c06d1e0();
  uVar1 = uVar2;
  if ((int)uVar4 == 0) {
    uVar1 = uVar3;
  }
  _objc_retain(uVar1);
  func_0x00010c27a940(param_2);
  func_0x00010bf17b00(uVar1);
  _objc_initWeak(auStack_58,param_2);
  param_2 = param_2 + 8;
  _objc_loadWeakRetained(param_2);
  uStack_60 = (undefined1)uVar4;
  _objc_copyWeak(auStack_70,auStack_58);
  uStack_68 = param_1;
  _objc_retain(param_4);
  func_0x00010c0e48e0(param_2);
  _objc_release(param_2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 106a5a62c; end: 106a5a683;  */

void FUN_106a5a62c(long param_1)

{
  char cVar1;
  long lVar2;
  
  cVar1 = *(char *)(param_1 + 0x48);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  if (cVar1 == '\x01') {
    func_0x00010bdcb000();
  }
  else {
    func_0x00010bdcab60(*(undefined8 *)(param_1 + 0x40));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106a5a684; end: 106a5ac8b; -[SCSearchOverlayTransitionController _animatePresentationFrom:to:duration:transitionContext:] */

void FUN_106a5a684(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  float fVar14;
  double dVar15;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  double dStack_170;
  double dStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  dVar15 = param_1;
  _objc_retain(param_7);
  fVar14 = SUB84(dVar15,0);
  _objc_retain(param_9);
  _objc_retain(param_8);
  uVar2 = param_9;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_8;
  func_0x00010c29bf00(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2,param_6,uVar13);
  _objc_release(uVar13);
  uVar13 = param_8;
  func_0x00010c29bf00(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(uVar13);
  uVar13 = param_8;
  func_0x00010c29bf00(param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  func_0x00010c08cdc0(uVar13);
  _objc_release(uVar13);
  puVar3 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc();
  func_0x00010c00ee20();
  uVar13 = *(undefined8 *)(param_5 + 0x10);
  *(undefined **)(param_5 + 0x10) = puVar3;
  _objc_release(uVar13);
  func_0x00010bf20c00(uVar2);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + 0x10));
  func_0x00010c066fa0(uVar2,param_6,*(undefined8 *)(param_5 + 0x10),0);
  lVar4 = param_5 + 8;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c153500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_5 + 8;
  _objc_loadWeakRetained();
  lVar6 = lVar4;
  func_0x00010bf83360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_5 + 8;
  _objc_loadWeakRetained();
  lVar7 = lVar4;
  func_0x00010bf56620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_5 + 8;
  _objc_loadWeakRetained();
  lVar8 = lVar4;
  func_0x00010bfb2de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_5 + 8;
  _objc_loadWeakRetained();
  lVar9 = lVar4;
  func_0x00010bfb2dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_5 + 8;
  _objc_loadWeakRetained();
  lVar10 = lVar4;
  func_0x00010c152b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_5 + 8;
  _objc_loadWeakRetained();
  lVar11 = lVar4;
  func_0x00010bf14840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_5 + 8;
  _objc_loadWeakRetained();
  lVar12 = lVar4;
  func_0x00010bfdf080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar11;
  func_0x00010c08c0e0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e8ca0();
  dVar15 = (double)fVar14;
  _objc_release(lVar4);
  lVar4 = lVar12;
  func_0x00010c08c0e0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e8ca0();
  _objc_release(lVar4);
  lVar4 = lVar11;
  func_0x00010c08c0e0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(lVar4);
  lVar4 = lVar12;
  func_0x00010c08c0e0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(lVar4);
  lVar4 = lVar10;
  func_0x00010c08c0e0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(lVar4);
  func_0x00010bfb68e0(uVar2);
  _CGAffineTransformMakeTranslation(&uStack_d0,0,param_4);
  uStack_f8 = uStack_c8;
  uStack_100 = uStack_d0;
  uStack_e8 = uStack_b8;
  uStack_f0 = uStack_c0;
  uStack_d8 = uStack_a8;
  uStack_e0 = uStack_b0;
  func_0x00010c219960(lVar10,param_6,&uStack_100);
  lVar4 = lVar5;
  func_0x00010c08c0e0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(lVar4);
  lVar4 = lVar6;
  func_0x00010c08c0e0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(lVar4);
  lVar4 = lVar7;
  func_0x00010c08c0e0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(lVar4);
  lVar4 = lVar8;
  func_0x00010c08c0e0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(lVar4);
  lVar4 = lVar9;
  func_0x00010c08c0e0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(lVar4);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_106a5ac8c;
  puStack_120 = &UNK_110848ba8;
  lStack_118 = lVar5;
  lStack_110 = lVar6;
  lStack_108 = lVar7;
  func_0x00010bf03440(param_1 * 0.4,0,PTR__OBJC_CLASS___UIView_1126aec20,param_6,2,&puStack_138,0);
  puStack_160 = puVar3;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x106a5ad10;
  puStack_148 = &UNK_110842e18;
  lStack_140 = lVar10;
  func_0x00010bf03440(param_1 * 0.4,0,PTR__OBJC_CLASS___UIView_1126aec20,param_6,2,&puStack_160,0);
  puStack_1a8 = puVar3;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_106a5ad48;
  puStack_190 = &UNK_110876440;
  lStack_188 = lVar11;
  lStack_180 = lVar12;
  lStack_178 = param_5;
  dStack_170 = dVar15;
  dStack_168 = (double)fVar14;
  func_0x00010bf03440(param_1 * 0.8,0,PTR__OBJC_CLASS___UIView_1126aec20,param_6,2,&puStack_1a8,0);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_1d0 = puVar3;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_106a5adf4;
  puStack_1b8 = &UNK_110842e18;
  puStack_218 = puVar3;
  uStack_210 = 0xc2000000;
  pcStack_208 = FUN_106a5ae30;
  puStack_200 = &UNK_110958838;
  uStack_1f8 = param_9;
  uStack_1f0 = uVar2;
  uStack_1e8 = param_7;
  lStack_1e0 = lVar8;
  lStack_1d8 = lVar9;
  lStack_1b0 = lVar10;
  _objc_retain(param_7);
  _objc_retain(param_9);
  func_0x00010bf03460(param_1,0,0x3fee666666666666,0,puVar1,param_6,2,&puStack_1d0,&puStack_218);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1f8);
  _objc_release(param_7);
  _objc_release(param_9);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar2);
  return;
}



/* Entry: 106a5ac8c; end: 106a5ad47;  */

void FUN_106a5ac8c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0x3f800000);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0x3f800000);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0x3f800000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a5ad48; end: 106a5adf3;  */

void FUN_106a5ad48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  double dVar3;
  
  dVar3 = *(double *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0((float)dVar3);
  _objc_release(uVar1);
  dVar3 = *(double *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0((float)dVar3);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193d20(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106a5adf4; end: 106a5ae2f;  */

void FUN_106a5adf4(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_40 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_40);
  return;
}



/* Entry: 106a5ae30; end: 106a5af47;  */

void FUN_106a5ae30(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c27ac00();
  if (iVar1 == 0) {
    func_0x00010bf43bc0(*(undefined8 *)(param_1 + 0x20),param_2,1);
  }
  else {
    func_0x00010c12c960(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bf43bc0(*(undefined8 *)(param_1 + 0x20),param_2,0);
    func_0x00010bf17b00(*(undefined8 *)(param_1 + 0x30),param_2,1,1);
  }
  func_0x00010bf941a0(*(undefined8 *)(param_1 + 0x30));
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x106a5aee8;
  puStack_38 = &UNK_110841f80;
  uStack_28 = *(undefined8 *)(param_1 + 0x40);
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_50);
  return;
}



/* Entry: 106a5af48; end: 106a5b437; -[SCSearchOverlayTransitionController _animateDismissalFrom:to:duration:transitionContext:] */

void FUN_106a5af48(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6)

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
  long lVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_6;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1);
  _objc_release(lVar2);
  lVar2 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c153500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010bf83360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010bf56620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar6 = lVar2;
  func_0x00010bfb2de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar7 = lVar2;
  func_0x00010bfb2dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar8 = lVar2;
  func_0x00010c152b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar9 = lVar2;
  func_0x00010bf14840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar10 = lVar2;
  func_0x00010bfdf080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar11 != 0) {
    lVar2 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(lVar2);
  }
  if (*(long *)(param_2 + 0x10) == 0) {
    lVar12 = lVar1;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar12;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(lVar12);
        }
        uVar18 = *(ulong *)(lVar17 * 8);
        puVar13 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
        _objc_opt_class(PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0);
        uVar14 = uVar18;
        _objc_opt_isKindOfClass(uVar18,puVar13);
        if ((uVar14 & 1) != 0) {
          _objc_retain(uVar18);
          uVar15 = *(undefined8 *)(param_2 + 0x10);
          *(ulong *)(param_2 + 0x10) = uVar18;
          _objc_release(uVar15);
        }
        lVar17 = lVar17 + 1;
      } while (lVar2 != lVar17);
      lVar2 = lVar12;
      func_0x00010bf52a60();
    }
    _objc_release(lVar12);
  }
  func_0x00010bf03440(param_1 * 0.4,0,PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010bf03440(param_1 * 0.6,param_1 * 0.4,PTR__OBJC_CLASS___UIView_1126aec20);
  puVar13 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bf03460(param_1,0,0x3fee666666666666,0,puVar13);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c193d20(*(undefined8 *)(*(long *)(param_4 + 0x20) + 0x10));
  uVar15 = *(undefined8 *)(param_4 + 0x28);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(param_4 + 0x30);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(param_4 + 0x38);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(param_4 + 0x40);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(param_4 + 0x48);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(param_4 + 0x50);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(param_4 + 0x58);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar15);
  return;
}



/* Entry: 106a5b438; end: 106a5b593;  */

void FUN_106a5b438(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c193d20(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a5b594; end: 106a5b627;  */

void FUN_106a5b594(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double in_d3;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  double dStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    dStack_68 = 0.0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_90);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  _CGAffineTransformMakeTranslation(&uStack_60,0,in_d3 - dStack_68);
  uStack_b8 = uStack_58;
  uStack_c0 = uStack_60;
  uStack_a8 = uStack_48;
  uStack_b0 = uStack_50;
  uStack_98 = uStack_38;
  uStack_a0 = uStack_40;
  func_0x00010c219960(uVar1,param_2,&uStack_c0);
  return;
}



/* Entry: 106a5b628; end: 106a5b6d7;  */

void FUN_106a5b628(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c27ac00();
  if ((uVar2 & 1) == 0) {
    func_0x00010c12c960(*(undefined8 *)(param_1 + 0x28));
  }
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar3 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_50 = uVar3;
  uStack_48 = uVar5;
  uStack_40 = uVar7;
  uStack_38 = uVar8;
  uStack_30 = uVar4;
  uStack_28 = uVar6;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x30),param_2,&uStack_50);
  uStack_50 = uVar3;
  uStack_48 = uVar5;
  uStack_40 = uVar7;
  uStack_38 = uVar8;
  uStack_30 = uVar4;
  uStack_28 = uVar6;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x38),param_2,&uStack_50);
  uVar1 = (uint)uVar2 ^ 1;
  func_0x00010bf43bc0(*(undefined8 *)(param_1 + 0x20),param_2,uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  if ((uVar1 & 1) == 0) {
    func_0x00010bf17b00(uVar3,param_2,0,1);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
  }
  func_0x00010bf941a0(uVar3);
  return;
}



/* Entry: 106a5b6d8; end: 106a5b703; -[SCSearchOverlayTransitionController .cxx_destruct] */

void FUN_106a5b6d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106a5b704; end: 106a5b77f; -[SCSearchOverlayUIContainer initWithPresentingViewController:animated:] */

undefined1 *
FUN_106a5b704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f47e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined1 *)((long)puVar1 + 0x18) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a5b780; end: 106a5b82b; -[SCSearchOverlayUIContainer attachUI:] */

void FUN_106a5b780(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5690);
  if ((param_3 != 0) && ((int)lVar1 != 0)) {
    puVar2 = PTR_PTR_1126cff80;
    _objc_alloc();
    func_0x00010c042bc0();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1c8b80(param_3);
    func_0x00010c219b20(param_3);
  }
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a5b82c; end: 106a5b87f; -[SCSearchOverlayUIContainer detachUI:] */

void FUN_106a5b82c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf84b00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a5b880; end: 106a5b8ab; -[SCSearchOverlayUIContainer .cxx_destruct] */

void FUN_106a5b880(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106a5b8ac; end: 106a5bc53;  */

undefined1 * FUN_106a5b8ac(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined *unaff_x20;
  undefined *puVar7;
  undefined *unaff_x21;
  undefined1 *puVar8;
  undefined *unaff_x23;
  undefined **unaff_x24;
  ulong unaff_x25;
  ulong uVar9;
  ulong unaff_x26;
  ulong unaff_x27;
  long lVar10;
  long unaff_x28;
  undefined *puVar11;
  long lStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  long lStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1b0;
  long lStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined **ppuStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_1 == 0) {
    puVar8 = (undefined1 *)0x0;
  }
  else {
    unaff_x20 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    _objc_alloc();
    func_0x00010c057bc0();
    unaff_x21 = unaff_x20;
    func_0x00010c11d4e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain();
    param_3 = &puStack_130;
    puVar1 = unaff_x21;
    func_0x00010bf52a60();
    if (puVar1 == (undefined *)0x0) {
      puVar8 = (undefined1 *)0x0;
      puVar1 = unaff_x23;
    }
    else {
      unaff_x28 = *plStack_120;
      unaff_x24 = &PTR____CFConstantStringClassReference_110e738b8;
      puStack_138 = unaff_x20;
      do {
        puVar7 = (undefined *)0x0;
        do {
          if (*plStack_120 != unaff_x28) {
            _objc_enumerationMutation(unaff_x21);
          }
          unaff_x26 = *(ulong *)(lStack_128 + (long)puVar7 * 8);
          unaff_x25 = unaff_x26;
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = unaff_x25;
          func_0x00010c0720c0();
          if ((uVar2 & 1) == 0) {
            _objc_release(unaff_x25);
          }
          else {
            func_0x00010c296d80();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x26;
            param_3 = unaff_x24;
            func_0x00010c0720c0();
            _objc_release(unaff_x26);
            _objc_release(unaff_x25);
            if ((unaff_x27 & 1) != 0) {
              puVar8 = (undefined1 *)0x1;
              unaff_x20 = puStack_138;
              goto LAB_106a5ba30;
            }
          }
          puVar7 = puVar7 + 1;
        } while (puVar1 != puVar7);
        param_3 = &puStack_130;
        puVar1 = unaff_x21;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined *)0x0);
      puVar8 = (undefined1 *)0x0;
      unaff_x20 = puStack_138;
    }
LAB_106a5ba30:
    _objc_release(unaff_x21);
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
    unaff_x23 = puVar1;
  }
  lVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar8;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_270;
  uStack_148 = 0x106a5ba90;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a0 = unaff_x28;
  uStack_198 = unaff_x27;
  uStack_190 = unaff_x26;
  uStack_188 = unaff_x25;
  ppuStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar8;
  puStack_168 = unaff_x21;
  puStack_160 = unaff_x20;
  lStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain();
  if (lVar3 == 0) {
    puVar8 = (undefined1 *)0x0;
  }
  else {
    unaff_x20 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    _objc_alloc();
    func_0x00010c057bc0();
    puVar1 = unaff_x20;
    func_0x00010c11d4e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_268 = 0;
    puStack_270 = (undefined *)0x0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    _objc_retain();
    puVar7 = puVar1;
    func_0x00010bf52a60();
    if (puVar7 != (undefined *)0x0) {
      lVar10 = *plStack_260;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_260 != lVar10) {
            _objc_enumerationMutation(puVar1);
          }
          uVar9 = *(ulong *)(lStack_268 + (long)puVar11 * 8);
          uVar2 = uVar9;
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar2;
          ppuVar6 = &PTR____CFConstantStringClassReference_110f83ad8;
          func_0x00010c0720c0();
          if ((uVar4 & 1) == 0) {
            _objc_release(uVar2);
          }
          else {
            func_0x00010c296d80();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar9;
            func_0x00010bf1f3c0();
            _objc_release(uVar9);
            _objc_release(uVar2);
            if ((uVar4 & 1) != 0) {
              puVar8 = (undefined1 *)0x1;
              goto LAB_106a5bbf4;
            }
          }
          puVar11 = puVar11 + 1;
        } while (puVar7 != puVar11);
        puVar7 = puVar1;
        ppuVar6 = &puStack_270;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined *)0x0);
    }
    puVar8 = (undefined1 *)0x0;
LAB_106a5bbf4:
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(unaff_x20);
    param_3 = ppuVar6;
  }
  lVar10 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
    ___stack_chk_fail();
    plVar5 = &lStack_2a0;
    pcStack_278 = FUN_106a5bc54;
    puStack_290 = unaff_x20;
    lStack_288 = lVar3;
    ppuStack_280 = &puStack_150;
    _objc_retain(param_3);
    puStack_298 = PTR_PTR_1126f47e8;
    lStack_2a0 = lVar10;
    _objc_msgSendSuper2(&lStack_2a0,PTR_s_init_1125d9248);
    if (plVar5 != (long *)0x0) {
      _objc_storeWeak((undefined1 *)((long)plVar5 + 8),param_3);
    }
    _objc_release(param_3);
    return (undefined1 *)plVar5;
  }
  return puVar8;
}



/* Entry: 106a5bc54; end: 106a5bcbf; -[SCLensExplorerDeepLinkProcessing initWithNavigationDelegate:] */

undefined1 * FUN_106a5bc54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f47e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a5bcc0; end: 106a5be23; -[SCLensExplorerDeepLinkProcessing processDeepLinkURL:additionalInfo:delegate:] */

void FUN_106a5bcc0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  if (param_4 != 0) {
    func_0x00010bef7f60(puVar1,param_2,param_4);
  }
  lVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f83d78);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f3c0();
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110dcb898);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf1f3c0();
  _objc_release(lVar2);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,((uint)lVar3 | (uint)lVar4) & 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar5,&PTR____CFConstantStringClassReference_110dcefb8);
  _objc_release(puVar5);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10d100();
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x00010bf94720(param_5,param_2,0);
  _objc_release(param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a5be24; end: 106a5be2b; -[SCLensExplorerDeepLinkProcessing shouldForceNavigation] */

undefined8 FUN_106a5be24(void)

{
  return 0;
}



/* Entry: 106a5be2c; end: 106a5be2f; -[SCLensExplorerDeepLinkProcessing processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_106a5be2c(void)

{
  return;
}



/* Entry: 106a5be30; end: 106a5be37; -[SCLensExplorerDeepLinkProcessing .cxx_destruct] */

void FUN_106a5be30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106a5be38; end: 106a5bea3; -[SCLensExplorerDeepLinkProcessorPlugin initWithNavigationDelegate:] */

undefined1 * FUN_106a5be38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f47f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a5bea4; end: 106a5beb7; -[SCLensExplorerDeepLinkProcessorPlugin identifier] */

void FUN_106a5bea4(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 106a5beb8; end: 106a5bebf; -[SCLensExplorerDeepLinkProcessorPlugin priority] */

undefined8 FUN_106a5beb8(void)

{
  return 1000;
}



/* Entry: 106a5bec0; end: 106a5bed3; -[SCLensExplorerDeepLinkProcessorPlugin canProvideProcessorForFeature:] */

void FUN_106a5bec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110db9078);
  return;
}



/* Entry: 106a5bed4; end: 106a5bf1f; -[SCLensExplorerDeepLinkProcessorPlugin isValidDeepLink:] */

undefined8 FUN_106a5bed4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106a5bf20; end: 106a5bf73; -[SCLensExplorerDeepLinkProcessorPlugin makeDeepLinkProcessor] */

void FUN_106a5bf20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cff88;
  _objc_alloc(PTR_PTR_1126cff88);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c02e580(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a5bf74; end: 106a5bf7b; -[SCLensExplorerDeepLinkProcessorPlugin .cxx_destruct] */

void FUN_106a5bf74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106a5bf7c; end: 106a5c01f; -[SCLensRemoteApiOAuthDeeplinkHandler initWithLegacyNavigationServices:dataProvider:] */

undefined1 *
FUN_106a5bf7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f47f8;
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



/* Entry: 106a5c020; end: 106a5c3c7; -[SCLensRemoteApiOAuthDeeplinkHandler processDeepLinkURL:additionalInfo:delegate:] */

void FUN_106a5c020(long param_1,undefined8 param_2,ulong param_3,undefined *param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94720(param_5);
  }
  else {
    puVar3 = param_4;
    func_0x00010c0d3c80();
    if (puVar3 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar3);
      puVar4 = puVar3;
    }
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfc6540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar6;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar5;
    func_0x00010c0720c0(uVar5,uVar8,uVar7);
    if ((((int)uVar10 != 0) && (uVar9 = uVar2, func_0x00010c08fa60(), uVar9 != 0)) ||
       (uVar9 = uVar8, func_0x00010c08fa60(), uVar9 != 0)) {
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c149fe0();
      _objc_release(uVar10);
    }
    uVar10 = uVar6;
    func_0x00010c094540(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(uVar10);
    puVar3 = PTR_PTR_1126b1068;
    _objc_alloc(PTR_PTR_1126b1068);
    uVar9 = param_3;
    func_0x00010bdc2b80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_3;
    func_0x00010c2475e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c057c40(puVar3);
    _objc_release(uVar11);
    _objc_release(uVar9);
    uVar12 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0d6760(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar4;
    func_0x00010bf51e00(puVar4);
    _objc_retain(param_5);
    func_0x00010c10d100(uVar10);
    _objc_release(puVar13);
    _objc_release(uVar10);
    _objc_release(uVar12);
    _objc_release(param_5);
    _objc_release(puVar3);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar5);
    _objc_release(uVar6);
  }
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a5c3c8; end: 106a5c3d3;  */

void FUN_106a5c3c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_endDeepLinkProcessingScopeWithEr_1125c2b70,0);
  return;
}



/* Entry: 106a5c3d4; end: 106a5c3db; -[SCLensRemoteApiOAuthDeeplinkHandler shouldForceNavigation] */

undefined8 FUN_106a5c3d4(void)

{
  return 1;
}


