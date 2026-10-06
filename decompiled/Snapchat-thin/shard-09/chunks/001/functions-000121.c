/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a3c488; end: 106a3c4e7; -[SCGenerativeDisclaimerConfiguration .cxx_destruct] */

void FUN_106a3c488(long param_1)

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



/* Entry: 106a3c4e8; end: 106a3c593; -[SCGenerativeDisclaimerHandler initWithGetterHandler:setterHandler:] */

undefined1 *
FUN_106a3c4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4530;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a3c594; end: 106a3c5b7; -[SCGenerativeDisclaimerHandler copyWithZone:] */

undefined8 FUN_106a3c594(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106a3c5b8; end: 106a3c62b; -[SCGenerativeDisclaimerHandler hash] */

undefined8 * FUN_106a3c5b8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong unaff_x21;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar5 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar5,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_106a3c708:
    puVar8 = (undefined8 *)0x1;
    goto LAB_106a3c71c;
  }
  puVar8 = (undefined8 *)0x0;
  if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106a3c71c;
  puVar8 = puVar5;
  _objc_opt_class(puVar5);
  puVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar8);
  if (((ulong)puVar3 & 1) == 0) {
    puVar8 = (undefined8 *)0x0;
    goto LAB_106a3c71c;
  }
  uVar6 = puVar5[1];
  uVar7 = param_3[1];
  if (uVar6 == uVar7) {
    puVar8 = (undefined8 *)puVar5[2];
    puVar5 = (undefined8 *)param_3[2];
    if (puVar8 == puVar5) goto LAB_106a3c708;
LAB_106a3c6dc:
    _objc_retainBlock();
    func_0x00010c071ae0(puVar8);
    _objc_release(puVar5);
    if (uVar6 == uVar7) goto LAB_106a3c71c;
  }
  else {
    unaff_x21 = uVar7;
    _objc_retainBlock(uVar7);
    uVar4 = uVar6;
    func_0x00010c071ae0();
    if ((uVar4 & 1) == 0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      puVar8 = (undefined8 *)puVar5[2];
      puVar5 = (undefined8 *)param_3[2];
      if (puVar8 != puVar5) goto LAB_106a3c6dc;
      puVar8 = (undefined8 *)0x1;
    }
  }
  _objc_release(unaff_x21);
LAB_106a3c71c:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 106a3c62c; end: 106a3c73f; -[SCGenerativeDisclaimerHandler isEqual:] */

long FUN_106a3c62c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong unaff_x21;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106a3c708:
    lVar5 = 1;
    goto LAB_106a3c71c;
  }
  lVar5 = 0;
  if ((param_1 == 0) || (param_3 == 0)) goto LAB_106a3c71c;
  uVar3 = param_1;
  _objc_opt_class(param_1);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,uVar3);
  if ((uVar4 & 1) == 0) {
    lVar5 = 0;
    goto LAB_106a3c71c;
  }
  uVar3 = *(ulong *)(param_1 + 8);
  uVar4 = *(ulong *)(param_3 + 8);
  if (uVar3 == uVar4) {
    lVar5 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_3 + 0x10);
    if (lVar5 == lVar2) goto LAB_106a3c708;
LAB_106a3c6dc:
    _objc_retainBlock();
    func_0x00010c071ae0(lVar5);
    _objc_release(lVar2);
    if (uVar3 == uVar4) goto LAB_106a3c71c;
  }
  else {
    unaff_x21 = uVar4;
    _objc_retainBlock(uVar4);
    uVar1 = uVar3;
    func_0x00010c071ae0();
    if ((uVar1 & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x10);
      lVar2 = *(long *)(param_3 + 0x10);
      if (lVar5 != lVar2) goto LAB_106a3c6dc;
      lVar5 = 1;
    }
  }
  _objc_release(unaff_x21);
LAB_106a3c71c:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 106a3c740; end: 106a3c747; -[SCGenerativeDisclaimerHandler getterHandler] */

undefined8 FUN_106a3c740(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106a3c748; end: 106a3c74f; -[SCGenerativeDisclaimerHandler setterHandler] */

undefined8 FUN_106a3c748(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106a3c750; end: 106a3c77f; -[SCGenerativeDisclaimerHandler .cxx_destruct] */

void FUN_106a3c750(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a3c780; end: 106a3c783; -[SCCGenAIOnboardingCameosSelfieScreenUsecase__Enum init] */

void FUN_106a3c780(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 106a3c784; end: 106a3c787; -[SCCGenAIOnboardingCameraScreenDismissButtonStyle__Enum init] */

void FUN_106a3c784(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 106a3c788; end: 106a3c78b; -[SCCGenAIOnboardingSelfieImageScreenUsecase__Enum init] */

void FUN_106a3c788(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 106a3c78c; end: 106a3c793; -[SCCGenerativeAIUserPolicy__Enum init] */

void FUN_106a3c78c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,6);
  return;
}



/* Entry: 106a3c794; end: 106a3c7eb; -[SCCGenAIMySelfieOnboardingPrivacyPolicyPopupContext initWithOnCancel:onContinue:] */

void FUN_106a3c794(void)

{
  func_0x000106a3ce5c();
  func_0x000106a3cf08();
  func_0x000106a3ce84();
  func_0x000106a3ceac();
  func_0x000106a3cea0();
  func_0x000106a3ce7c(&stack0xffffffffffffffc0);
  func_0x000106a3cec0();
  func_0x000106a3cf00();
  return;
}



/* Entry: 106a3c7ec; end: 106a3c7ff; +[SCCGenAIMySelfieOnboardingPrivacyPolicyPopupContext valdiMarshallableObjectDescriptor] */

void FUN_106a3c7ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110954e68;
  param_1[1] = &PTR_DAT_110954ec8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a3c800; end: 106a3c827; -[SCCGenAIOnboardingCameosSelfieScreenConfiguration initWithShowCloseButton:title:subtitle:continueButtonTitle:retakeButtonTitle:] */

void FUN_106a3c800(void)

{
  func_0x000106a3ce38(PTR_PTR_1126f4540);
  func_0x000106a3ce48();
  return;
}



/* Entry: 106a3c828; end: 106a3c837; +[SCCGenAIOnboardingCameosSelfieScreenConfiguration valdiMarshallableObjectDescriptor] */

void FUN_106a3c828(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110954ed8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a3c838; end: 106a3c867; -[SCCGenAIOnboardingCameosSelfieScreenContext initWithDelegate:] */

void FUN_106a3c838(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000106a3ce38(PTR_PTR_1126f4548);
  func_0x000106a3ce7c(auStack_20);
  return;
}



/* Entry: 106a3c868; end: 106a3c87b; +[SCCGenAIOnboardingCameosSelfieScreenContext valdiMarshallableObjectDescriptor] */

void FUN_106a3c868(undefined8 *param_1)

{
  *param_1 = &PTR_s_delegate_110954f68;
  param_1[1] = &PTR_DAT_110954fe0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a3c87c; end: 106a3c937; -[SCCGenAIOnboardingCameraScreenContext initWithCameraPreviewLayerFactory:configuration:registerCameraObserver:unregisterCameraObserver:] */

undefined8 *
FUN_106a3c87c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain();
  func_0x000106a3cf08();
  func_0x000106a3ce84();
  func_0x000106a3ceb8();
  puStack_48 = PTR_PTR_1126f4550;
  uStack_50 = param_1;
  func_0x000106a3cea0();
  puVar2 = &uStack_50;
  func_0x000106a3ce7c(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  func_0x000106a3cf00();
  return puVar2;
}



/* Entry: 106a3c938; end: 106a3c94b; +[SCCGenAIOnboardingCameraScreenContext valdiMarshallableObjectDescriptor] */

void FUN_106a3c938(undefined8 *param_1)

{
  *param_1 = &PTR_s_delegate_110955008;
  param_1[1] = &PTR_DAT_1109550e0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a3c94c; end: 106a3c97f; -[SCCGenAIOnboardingGenderScreenContext initWithDelegate:] */

void FUN_106a3c94c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f4558;
  uStack_20 = param_1;
  func_0x000106a3cea0();
  func_0x000106a3ce7c(&uStack_20);
  return;
}



/* Entry: 106a3c980; end: 106a3c993; +[SCCGenAIOnboardingGenderScreenContext valdiMarshallableObjectDescriptor] */

void FUN_106a3c980(undefined8 *param_1)

{
  *param_1 = &PTR_s_delegate_110955118;
  param_1[1] = &PTR_DAT_110955148;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a3c994; end: 106a3c9b7; -[SCCGenAIOnboardingGuidelinesComponentContext init] */

void FUN_106a3c994(void)

{
  func_0x000106a3ceec(PTR_PTR_1126f4560);
  return;
}



/* Entry: 106a3c9b8; end: 106a3c9cb; +[SCCGenAIOnboardingGuidelinesComponentContext valdiMarshallableObjectDescriptor] */

void FUN_106a3c9b8(undefined8 *param_1)

{
  *param_1 = &PTR_s_cofStore_110955158;
  param_1[1] = &PTR_s_SCComposerCOFStoring_110955188;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a3c9cc; end: 106a3c9fb; -[SCCGenAIOnboardingOneShotPrivacyPolicyScreenContext initWithDelegate:] */

void FUN_106a3c9cc(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000106a3ce38(PTR_PTR_1126f4568);
  func_0x000106a3ce7c(auStack_20);
  return;
}



/* Entry: 106a3c9fc; end: 106a3ca0f; +[SCCGenAIOnboardingOneShotPrivacyPolicyScreenContext valdiMarshallableObjectDescriptor] */

void FUN_106a3c9fc(undefined8 *param_1)

{
  *param_1 = &PTR_s_delegate_110955198;
  param_1[1] = &PTR_DAT_110955210;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a3ca10; end: 106a3ca37; -[SCCGenAIOnboardingSelfieImageScreenConfiguration initWithShowCloseButton:title:subtitle:primaryButtonTitle:secondaryButtonTitle:] */

void FUN_106a3ca10(void)

{
  func_0x000106a3ce38(PTR_PTR_1126f4570);
  func_0x000106a3ce48();
  return;
}



/* Entry: 106a3ca38; end: 106a3ca47; +[SCCGenAIOnboardingSelfieImageScreenConfiguration valdiMarshallableObjectDescriptor] */

void FUN_106a3ca38(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110955230;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a3ca48; end: 106a3ca7f; -[SCCGenAIOnboardingSelfieImageScreenContext initWithDelegate:] */

void FUN_106a3ca48(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000106a3ce38(PTR_PTR_1126f4578);
  func_0x000106a3ce7c(auStack_20);
  return;
}



/* Entry: 106a3ca80; end: 106a3ca93; +[SCCGenAIOnboardingSelfieImageScreenContext valdiMarshallableObjectDescriptor] */

void FUN_106a3ca80(undefined8 *param_1)

{
  *param_1 = &PTR_s_delegate_1109552c0;
  param_1[1] = &PTR_DAT_110955350;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a3ca94; end: 106a3caeb; -[SCCGenAIOnboardingSettingsEntryPointScreenContext initWithOnDismissButtonTapped:onStartOnboardingButtonTapped:] */

void FUN_106a3ca94(void)

{
  func_0x000106a3ce5c();
  func_0x000106a3cf08();
  func_0x000106a3ce84();
  func_0x000106a3ceac();
  func_0x000106a3cea0();
  func_0x000106a3ce7c(&stack0xffffffffffffffc0);
  func_0x000106a3cec0();
  func_0x000106a3cf00();
  return;
}



/* Entry: 106a3caec; end: 106a3cafb; +[SCCGenAIOnboardingSettingsEntryPointScreenContext valdiMarshallableObjectDescriptor] */

void FUN_106a3caec(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_onDismissButtonTapped_110955378;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a3cafc; end: 106a3cb53; -[SCCGenAIOnboardingSettingsScreenContext initWithOnDismissButtonTapped:didSelectUserPolicySetting:] */

void FUN_106a3cafc(void)

{
  func_0x000106a3ce5c();
  func_0x000106a3cf08();
  func_0x000106a3ce84();
  func_0x000106a3ceac();
  func_0x000106a3cea0();
  func_0x000106a3ce7c(&stack0xffffffffffffffc0);
  func_0x000106a3cec0();
  func_0x000106a3cf00();
  return;
}



/* Entry: 106a3cb54; end: 106a3cb67; +[SCCGenAIOnboardingSettingsScreenContext valdiMarshallableObjectDescriptor] */

void FUN_106a3cb54(undefined8 *param_1)

{
  *param_1 = &PTR_s_onDismissButtonTapped_1109553d8;
  param_1[1] = &PTR_DAT_110955450;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a3cb68; end: 106a3cb97; -[SCCGenAIOnboardingSettingsViewModel initWithUserPolicySettings:featureToggles:actions:] */

void FUN_106a3cb68(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000106a3ce38(PTR_PTR_1126f4590);
  func_0x000106a3ce7c(auStack_20);
  return;
}



/* Entry: 106a3cb98; end: 106a3cbab; +[SCCGenAIOnboardingSettingsViewModel valdiMarshallableObjectDescriptor] */

void FUN_106a3cb98(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110955470;
  param_1[1] = &PTR_DAT_1109554e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a3cbac; end: 106a3cbdb; -[SCCGenAISelfieCustomSharingPolicySettingsScreenContext initWithGrpcClientFactory:delegate:] */

void FUN_106a3cbac(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000106a3ce38(PTR_PTR_1126f4598);
  func_0x000106a3ce7c(auStack_20);
  return;
}



/* Entry: 106a3cbdc; end: 106a3cbef; +[SCCGenAISelfieCustomSharingPolicySettingsScreenContext valdiMarshallableObjectDescriptor] */

void FUN_106a3cbdc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110955508;
  param_1[1] = &PTR_s_SCComposerNetworkingGrpcServiceF_110955580;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a3cbf0; end: 106a3cc13; -[SCCGenAISelfieCustomSharingPolicySettingsScreenViewModel init] */

void FUN_106a3cbf0(void)

{
  func_0x000106a3ceec(PTR_PTR_1126f45a0);
  return;
}



/* Entry: 106a3cc14; end: 106a3cc23; +[SCCGenAISelfieCustomSharingPolicySettingsScreenViewModel valdiMarshallableObjectDescriptor] */

void FUN_106a3cc14(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10dde3a88;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a3cc24; end: 106a3cc57; -[SCCGenerativeAIFeatureToggle initWithFeatureTitle:featureDescription:isOn:] */

void FUN_106a3cc24(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000106a3ce38(PTR_PTR_1126f45a8);
  func_0x000106a3ce7c(auStack_20);
  return;
}



/* Entry: 106a3cc58; end: 106a3cc77; +[SCCGenerativeAIFeatureToggle valdiMarshallableObjectDescriptor] */

void FUN_106a3cc58(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109555f0;
  param_1[1] = 0;
  param_1[2] = &PTR_s_ob_v_1109555a8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a3cc78; end: 106a3cc93;  */

undefined8 FUN_106a3cc78(void)

{
  code *extraout_x8;
  
  func_0x000106a3cf48();
  (*extraout_x8)();
  return 0;
}



/* Entry: 106a3cc94; end: 106a3ccf3;  */

void FUN_106a3cc94(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x000106a3cf10(FUN_106a3cdec);
  _objc_retainBlock(&puStack_48);
  func_0x000106a3cf28();
  func_0x000106a3ceb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a3ccf4; end: 106a3cd0f;  */

ulong FUN_106a3ccf4(ulong param_1)

{
  code *extraout_x8;
  
  func_0x000106a3cf48();
  (*extraout_x8)();
  return param_1 & 0xffffffff;
}



/* Entry: 106a3cd10; end: 106a3cd6f;  */

void FUN_106a3cd10(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x000106a3cf10(0x106a3ce08);
  _objc_retainBlock(&puStack_48);
  func_0x000106a3cf28();
  func_0x000106a3ceb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a3cd70; end: 106a3cda3; -[SCCGenerativeAISettingsAction initWithTitle:] */

void FUN_106a3cd70(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f45b0;
  uStack_20 = param_1;
  func_0x000106a3cea0();
  func_0x000106a3ce7c(&uStack_20);
  return;
}



/* Entry: 106a3cda4; end: 106a3cdb3; +[SCCGenerativeAISettingsAction valdiMarshallableObjectDescriptor] */

void FUN_106a3cda4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_title_110955698;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a3cdb4; end: 106a3cdd7; -[SCCGenerativeAIUserPolicySetting initWithIdentifier:title:value:] */

void FUN_106a3cdb4(void)

{
  func_0x000106a3ce38(PTR_PTR_1126f45b8);
  func_0x000106a3ce48();
  return;
}



/* Entry: 106a3cdd8; end: 106a3cdeb; +[SCCGenerativeAIUserPolicySetting valdiMarshallableObjectDescriptor] */

void FUN_106a3cdd8(undefined8 *param_1)

{
  *param_1 = &PTR_s_identifier_1109556e0;
  param_1[1] = &PTR_DAT_110955740;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a3cdec; end: 106a3ce27;  */

void FUN_106a3cdec(void)

{
  func_0x000106a3cecc();
  return;
}



/* Entry: 106a3ce28; end: 106a3cf5b;  */

void FUN_106a3ce28(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a3cf5c; end: 106a3cf67; +[SCCChatMediaPreviewComposeView componentPath] */

undefined ** FUN_106a3cf5c(void)

{
  return &PTR____CFConstantStringClassReference_110e67f38;
}



/* Entry: 106a3cf68; end: 106a3cf9b; -[SCCChatMediaPreviewComposeView initWithViewModel:componentContext:runtime:] */

void FUN_106a3cf68(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f45c0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 106a3cf9c; end: 106a3cfeb; -[SCCChatMediaPreviewComposeView setViewModel:] */

void FUN_106a3cf9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a3cfec; end: 106a3d02f; -[SCCChatMediaPreviewComposeView viewModel] */

void FUN_106a3cfec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a3d030; end: 106a3d06b; -[SCCChatMediaPreviewComposeViewModel initWithChatMediaItems:] */

void FUN_106a3d030(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f45c8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 106a3d06c; end: 106a3d07f; +[SCCChatMediaPreviewComposeViewModel valdiMarshallableObjectDescriptor] */

void FUN_106a3d06c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110955780;
  param_1[1] = &PTR_DAT_1109557b0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a3d080; end: 106a3d0a3; -[SCCChatMediaPreviewContext init] */

void FUN_106a3d080(void)

{
  func_0x000106a3d0f4(PTR_PTR_1126f45d0);
  return;
}



/* Entry: 106a3d0a4; end: 106a3d0b7; +[SCCChatMediaPreviewContext valdiMarshallableObjectDescriptor] */

void FUN_106a3d0a4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109557c0;
  param_1[1] = &PTR_DAT_110955808;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a3d0b8; end: 106a3d0db; -[SCCChatMediaPreviewItem init] */

void FUN_106a3d0b8(void)

{
  func_0x000106a3d0f4(PTR_PTR_1126f45d8);
  return;
}



/* Entry: 106a3d0dc; end: 106a3d117; +[SCCChatMediaPreviewItem valdiMarshallableObjectDescriptor] */

void FUN_106a3d0dc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110955818;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a3d118; end: 106a3d2cf; -[SCContactPermissionResumeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a3d118(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126cfdf0;
  _objc_alloc(PTR_PTR_1126cfdf0);
  lVar11 = (long)_DAT_112756380;
  lVar2 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar2);
  lVar10 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112756384;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112756388;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057000(puVar1,param_2,lVar10,lVar4,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar10);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126aeb48;
  _objc_alloc(PTR_PTR_1126aeb48);
  func_0x00010c0404c0();
  puVar8 = PTR_PTR_1126cfdf8;
  _objc_alloc();
  lVar2 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf4a1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar11);
  lVar5 = lVar11;
  func_0x00010bf4a200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c013960(puVar8,param_2,lVar3,puVar7,lVar5);
  lVar10 = (long)_DAT_11275638c;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar8;
  _objc_release(uVar9);
  _objc_release(lVar5);
  _objc_release(lVar11);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bf17a60(*(undefined8 *)(param_1 + lVar10));
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a3d2d0; end: 106a3d323; -[SCContactPermissionResumeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a3d2d0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112756384);
  _objc_destroyWeak(param_1 + _DAT_112756388);
  _objc_destroyWeak(param_1 + _DAT_112756380);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275638c,0);
  return;
}



/* Entry: 106a3d324; end: 106a3d3ef; -[SCContactPermissionResumeUIRouteActions initWithUIContainer:navigationDelegate:resourceDownloader:] */

undefined1 *
FUN_106a3d324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f45e0;
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



/* Entry: 106a3d3f0; end: 106a3d427; -[SCContactPermissionResumeUIRouteActions openOSSettings] */

void FUN_106a3d3f0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a3d428; end: 106a3d63f; -[SCContactPermissionResumeUIRouteActions showResumePermissionAlertWithDelegate:] */

void FUN_106a3d428(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  
  uVar2 = param_3;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___UIAlertController_1126aeb78;
  func_0x000106a40868();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x000106a40880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff3e0(puVar3,param_2,uVar2,uVar6,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
  func_0x000106a40838();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106a3d640;
  puStack_70 = &UNK_110846190;
  _objc_retain(param_3);
  uStack_68 = param_3;
  func_0x00010beef340(puVar4,param_2,uVar2,0,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
  func_0x00010b75e3ec();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x106a3d648;
  puStack_98 = &UNK_110846190;
  uStack_90 = param_3;
  _objc_retain(param_3);
  func_0x00010beef340(puVar5,param_2,uVar2,0,&puStack_b0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010bef6960(puVar3,param_2,puVar4);
  func_0x00010bef6960(puVar3,param_2,puVar5);
  func_0x00010c1dfe00(puVar3,param_2,puVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _objc_release(uVar7);
  _objc_release(uVar6);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x10),param_2,puVar3);
  _objc_release(puVar5);
  _objc_release(uStack_90);
  _objc_release(puVar4);
  _objc_release(uStack_68);
  _objc_release(param_3);
  _objc_release(puVar3);
  return;
}



/* Entry: 106a3d640; end: 106a3d64f;  */

void FUN_106a3d640(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4a1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_contactPermissionResumeOpenOSSet_1125b0218);
  return;
}



/* Entry: 106a3d650; end: 106a3d7e7; -[SCContactPermissionResumeUIRouteActions showResumePermissionPageWithDelegate:] */

void FUN_106a3d650(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  puVar2 = PTR_PTR_1126aebd8;
  func_0x00010c14e3a0(PTR_PTR_1126aebd8,param_2,&PTR____CFConstantStringClassReference_110e67f58,
                      &PTR____CFConstantStringClassReference_110e67f78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  lVar4 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar3,param_2,lVar4,0x13);
  _objc_release(lVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf88c20();
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126cfe00;
  _objc_alloc(PTR_PTR_1126cfe00);
  puVar7 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00a860(puVar6,param_2,param_3,puVar7);
  _objc_release(param_3);
  _objc_release(puVar7);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 8),param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 106a3d7e8; end: 106a3d7f3;  */

void FUN_106a3d7e8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 106a3d7f4; end: 106a3d99f; -[SCContactPermissionResumeUIRouteActions showiOS18ResumePermissionPageWithDelegate:trayHostDelegate:] */

void FUN_106a3d7f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double in_d3;
  
  puVar1 = PTR_PTR_1126cfe08;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00a2c0();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar2;
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126cfe10;
  _objc_alloc(PTR_PTR_1126cfe10);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c150e00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042340(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126b0a08;
  _objc_alloc();
  func_0x00010c055600();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar3;
  _objc_release(uVar5);
  func_0x00010c219d60(*(undefined8 *)(param_1 + 0x30),param_2,0);
  func_0x00010c219e20(*(undefined8 *)(param_1 + 0x30),param_2,param_4);
  _objc_release(param_4);
  func_0x00010c16d3e0(*(undefined8 *)(param_1 + 0x30),param_2,0);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  _objc_release(uVar6);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c10c720(545.0 / in_d3,uVar4,param_2,uVar5,1,8);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a3d9a0; end: 106a3d9ab; -[SCContactPermissionResumeUIRouteActions dismissAllPresentedViews] */

void FUN_106a3d9a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 106a3d9ac; end: 106a3da0b; -[SCContactPermissionResumeUIRouteActions .cxx_destruct] */

void FUN_106a3d9ac(long param_1)

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



/* Entry: 106a3da0c; end: 106a3da7f; -[SCContactPermissionResumeBusinessLogic initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106a3da0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f45e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127563a8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a3da80; end: 106a3daef; -[SCContactPermissionResumeBusinessLogic handleAction:] */

void FUN_106a3da80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106a3daf0;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106a3db28;
  puStack_48 = &UNK_110842e18;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bce00(param_3,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 106a3daf0; end: 106a3db5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a3daf0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_1127563a8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf4a180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a3db60; end: 106a3db6f; -[SCContactPermissionResumeBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a3db60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127563a8);
  return;
}



/* Entry: 106a3db70; end: 106a3dc67; -[SCContactPermissionResumeViewController initWithDelegate:instructionImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106a3db70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f45f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127563b0),param_3);
    lVar4 = (long)_DAT_1127563b4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c1c8b80();
    func_0x00010b837400();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_1127563b8;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined1 **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    func_0x00010c1797c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c219b20(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a3dc68; end: 106a3dc6f; -[SCContactPermissionResumeViewController cardTransitionShouldBeginWithView:touchLocation:] */

undefined8 FUN_106a3dc68(void)

{
  return 1;
}



/* Entry: 106a3dc70; end: 106a3dc73; -[SCContactPermissionResumeViewController cardToExpandTransition] */

void FUN_106a3dc70(void)

{
  return;
}



/* Entry: 106a3dc74; end: 106a3dcc7; -[SCContactPermissionResumeViewController cardTransitionWillBeginWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a3dc74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bf84b00(param_1,param_2,1,0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a3dcc8; end: 106a3dd5b; -[SCContactPermissionResumeViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a3dcc8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  if (param_4 == 1) {
    puVar1 = (undefined *)(param_1 + _DAT_1127563b0);
    _objc_loadWeakRetained(puVar1);
    func_0x00010bf4a240();
  }
  else {
    if (param_4 != 0) goto LAB_106a3dd48;
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c106ec0(param_1);
    func_0x00010c14dc60(puVar1,param_2,param_1);
  }
  _objc_release(puVar1);
LAB_106a3dd48:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a3dd5c; end: 106a3ddf3; -[SCContactPermissionResumeViewController viewDidLoad] */

void FUN_106a3dd5c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f45f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010be3a720(param_1);
  return;
}



/* Entry: 106a3ddf4; end: 106a3de9b; -[SCContactPermissionResumeViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a3ddf4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f45f0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(param_1 + _DAT_1127563ac) = puVar2;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc60(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 106a3de9c; end: 106a3de9f; -[SCContactPermissionResumeViewController preferredStatusBarStyle] */

undefined8 FUN_106a3de9c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 106a3dea0; end: 106a3dee3; -[SCContactPermissionResumeViewController _initSubviews] */

void FUN_106a3dea0(undefined8 param_1)

{
  func_0x00010be398c0();
  func_0x00010be39d40(param_1);
  func_0x00010be39ce0(param_1);
  func_0x00010be39ea0(param_1);
  func_0x00010be398a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be3cef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__installPullToDismiss_11256cd58);
  return;
}



/* Entry: 106a3dee4; end: 106a3df8f; -[SCContactPermissionResumeViewController _initContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a3dee4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  lVar4 = (long)_DAT_1127563bc;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 106a3df90; end: 106a3e277; -[SCContactPermissionResumeViewController _initHeaderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a3df90(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af078;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar12 = (long)_DAT_1127563c0;
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c219b60(uVar10);
  FUN_106a40700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf5eee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240();
  _objc_release(uVar2);
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf5eee0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8460();
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf5eee0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20eaa0();
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf5eee0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f820();
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf5eee0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar10);
  lVar14 = (long)_DAT_1127563bc;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar14));
  puStack_88 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar12);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  lStack_80 = lVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar12);
  uStack_78 = uVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_88);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar10);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar11);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_106a3e278;
  lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  uVar15 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar15,uVar16,uVar17,uVar18);
  lVar13 = (long)_DAT_1127563c4;
  uVar10 = *(undefined8 *)(lVar3 + lVar13);
  *(undefined **)(lVar3 + lVar13) = puVar1;
  _objc_release(uVar10);
  func_0x000106a40718();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar3 + lVar13));
  _objc_release(uVar10);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar3 + lVar13));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar3 + lVar13));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar3 + lVar13));
  func_0x00010c1cfce0(*(undefined8 *)(lVar3 + lVar13));
  func_0x00010c219b60(*(undefined8 *)(lVar3 + lVar13));
  func_0x00010c21e900(*(undefined8 *)(lVar3 + lVar13));
  lVar11 = (long)_DAT_1127563bc;
  func_0x00010befbb60(*(undefined8 *)(lVar3 + lVar11));
  puStack_1a0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(lVar3 + lVar13);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar3 + _DAT_1127563c0);
  lStack_180 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_188 = uVar10;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar3 + lVar13);
  lStack_190 = uVar2;
  uStack_150 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar3 + lVar11);
  puStack_198 = (undefined *)uVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_1a8 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar3 + lVar13);
  uStack_148 = uVar4;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar3 + lVar11);
  lStack_178 = lVar11;
  func_0x00010c08e400(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010bf493c0(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar3 + lVar13);
  uStack_140 = uVar10;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar3 + lVar11);
  func_0x00010c1408a0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf493c0(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_138 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1a0);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar10);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uStack_1a8);
  _objc_release(puStack_198);
  _objc_release(lStack_190);
  _objc_release(uStack_188);
  _objc_release(lStack_180);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar15,uVar16,uVar17,uVar18);
  lVar14 = (long)_DAT_1127563c8;
  uVar10 = *(undefined8 *)(lVar3 + lVar14);
  *(undefined **)(lVar3 + lVar14) = puVar1;
  _objc_release(uVar10);
  func_0x000106a40760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar3 + lVar14));
  _objc_release(uVar10);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar3 + lVar14));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar3 + lVar14));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar3 + lVar14));
  func_0x00010c1cfce0(*(undefined8 *)(lVar3 + lVar14));
  func_0x00010c219b60(*(undefined8 *)(lVar3 + lVar14));
  func_0x00010c21e900(*(undefined8 *)(lVar3 + lVar14));
  lVar11 = lStack_178;
  func_0x00010befbb60(*(undefined8 *)(lVar3 + lStack_178));
  puStack_198 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar12 = *(long *)(lVar3 + lVar14);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar3 + lVar13);
  lStack_180 = lVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_188 = uVar10;
  func_0x00010bf493c0(0x4052000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar3 + lVar14);
  lStack_190 = lVar12;
  lStack_170 = lVar12;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar3 + lVar11);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar3 + lVar14);
  uStack_168 = uVar4;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar3 + lVar11);
  func_0x00010c08e400(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493c0(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar3 + lVar14);
  uStack_160 = uVar10;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar3 + lVar11);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar15;
  func_0x00010bf493c0(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_158 = uVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_198);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lStack_190);
  _objc_release(uStack_188);
  lVar11 = lStack_180;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1b8 = FUN_106a3e8b8;
  puStack_1e0 = puVar1;
  uStack_1d8 = uVar2;
  uStack_1d0 = uVar15;
  uStack_1c8 = uVar16;
  ppuStack_1c0 = &puStack_a0;
  _objc_initWeak(auStack_1e8,lVar11);
  uVar10 = *(undefined8 *)(lVar11 + _DAT_1127563b4);
  puVar9 = auStack_1f0;
  _objc_copyWeak(puVar9,auStack_1e8);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar10);
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_1f0);
  _objc_destroyWeak(auStack_1e8);
  return;
}



/* Entry: 106a3e278; end: 106a3e8b7; -[SCContactPermissionResumeViewController _initInstructionLabels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a3e278(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  uVar14 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
  lVar13 = (long)_DAT_1127563c4;
  uVar10 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar1;
  _objc_release(uVar10);
  func_0x000106a40718();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar13));
  _objc_release(uVar10);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar13));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar13));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar13));
  lVar11 = (long)_DAT_1127563bc;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar11));
  puStack_110 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + _DAT_1127563c0);
  lStack_f0 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = uVar10;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  lStack_100 = uVar2;
  uStack_c0 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  puStack_108 = (undefined *)uVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_b8 = uVar3;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar11);
  lStack_e8 = lVar11;
  func_0x00010c08e400(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010bf493c0(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar13);
  uStack_b0 = uVar10;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c1408a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bf493c0(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_110);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar10);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uStack_118);
  _objc_release(puStack_108);
  _objc_release(lStack_100);
  _objc_release(uStack_f8);
  _objc_release(lStack_f0);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
  lVar12 = (long)_DAT_1127563c8;
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar10);
  func_0x000106a40760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar12));
  _objc_release(uVar10);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar12));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar12));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar12));
  lVar11 = lStack_e8;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lStack_e8));
  puStack_108 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar8 = *(long *)(param_1 + lVar12);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar13);
  lStack_f0 = lVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = uVar10;
  func_0x00010bf493c0(0x4052000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  lStack_100 = lVar8;
  lStack_e0 = lVar8;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar12);
  uStack_d8 = uVar3;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c08e400(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar6;
  func_0x00010bf493c0(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar12);
  uStack_d0 = uVar10;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar14;
  func_0x00010bf493c0(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c8 = uVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_108);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lStack_100);
  _objc_release(uStack_f8);
  lVar11 = lStack_f0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_106a3e8b8;
  puStack_150 = puVar1;
  uStack_148 = uVar2;
  uStack_140 = uVar14;
  uStack_138 = uVar15;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_158,lVar11);
  uVar10 = *(undefined8 *)(lVar11 + _DAT_1127563b4);
  puVar9 = auStack_160;
  _objc_copyWeak(puVar9,auStack_158);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar10);
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_158);
  return;
}



/* Entry: 106a3e8b8; end: 106a3e98b; -[SCContactPermissionResumeViewController _initContactSettingInstructionImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a3e8b8(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127563b4);
  puVar1 = auStack_40;
  _objc_copyWeak(puVar1,auStack_38);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106a3e98c; end: 106a3e9d3;  */

void FUN_106a3e98c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beabb00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a3e9d4; end: 106a3ed8f; -[SCContactPermissionResumeViewController _setupContactSettingInstructionImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a3e9d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c01bf60();
  _objc_release(param_3);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010c21e900(puVar1,param_2,1);
  lVar18 = (long)_DAT_1127563bc;
  lStack_90 = lVar18;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar18),param_2,puVar1);
  puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127563c8);
  func_0x00010bf1ff80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf493c0(0x4028000000000000,puVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  puStack_78 = puVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf34860(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar9,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar9 = puVar2;
  func_0x000106a40730();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar2,param_2,puVar9);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar2,param_2,puVar9);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar2,param_2,puVar9);
  _objc_release(puVar9);
  func_0x00010c213040(puVar2,param_2,1);
  func_0x00010c1cfce0(puVar2,param_2,1);
  func_0x00010c219b60(puVar2,param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lStack_90),param_2,puVar2);
  puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010bf493c0(0x403e000000000000,puVar4,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  puStack_88 = puVar7;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar8;
  func_0x00010bf493c0(0x4051800000000000,puVar8,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar9,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar11 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puStack_c8 = puVar9;
  pcStack_98 = FUN_106a3ed90;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = PTR_PTR_1126aec40;
  puStack_e0 = puVar10;
  puStack_d8 = puVar8;
  puStack_d0 = puVar7;
  puStack_c0 = puVar5;
  puStack_b8 = puVar2;
  puStack_b0 = puVar4;
  puStack_a8 = puVar1;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_1127563cc;
  uVar3 = *(undefined8 *)(puVar11 + lVar16);
  *(undefined **)(puVar11 + lVar16) = puVar9;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar11 + lVar16);
  func_0x00010befbd60(uVar3,param_2,puVar11,PTR_s__gotoSettingButtonTapped_112532be0,0x40);
  uVar6 = *(undefined8 *)(puVar11 + lVar16);
  func_0x000106a40748();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar6,param_2,uVar3,0);
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(puVar11 + lVar16),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(puVar11 + lVar16),param_2,
                      &PTR____CFConstantStringClassReference_110e67f98);
  func_0x00010c21e900(*(undefined8 *)(puVar11 + lVar16),param_2,1);
  lVar17 = (long)_DAT_1127563bc;
  func_0x00010befbb60(*(undefined8 *)(puVar11 + lVar17),param_2,*(undefined8 *)(puVar11 + lVar16));
  puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar13 = *(long *)(puVar11 + lVar16);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar11 + lVar17);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar13;
  func_0x00010bf493a0(lVar13,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(puVar11 + lVar16);
  lStack_f8 = lVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(puVar11 + lVar17);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar14;
  func_0x00010bf493c0(0xc04c000000000000,uVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_f0 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_f8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar9,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(lVar18);
  _objc_release(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar18 = (long)_DAT_1127563bc;
  uVar3 = *(undefined8 *)(lVar13 + lVar18);
  func_0x00010c261580(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar9,param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010befa120(puVar9,param_2,*(undefined8 *)(lVar13 + lVar18));
  func_0x00010c067a20(*(undefined8 *)(lVar13 + _DAT_1127563b8),param_2,puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 106a3ed90; end: 106a3efa3; -[SCContactPermissionResumeViewController _initGotoSettingButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a3ed90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_1127563cc;
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010befbd60(uVar6,param_2,param_1,PTR_s__gotoSettingButtonTapped_112532be0,0x40);
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  func_0x000106a40748();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar7,param_2,uVar6,0);
  _objc_release(uVar6);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar9),param_2,
                      &PTR____CFConstantStringClassReference_110e67f98);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar9),param_2,1);
  lVar10 = (long)_DAT_1127563bc;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar10),param_2,*(undefined8 *)(param_1 + lVar9));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar9);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  lStack_68 = lVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493c0(0xc04c000000000000,uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar8 = (long)_DAT_1127563bc;
  uVar6 = *(undefined8 *)(lVar2 + lVar8);
  func_0x00010c261580(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,uVar6);
  _objc_release(uVar6);
  func_0x00010befa120(puVar1,param_2,*(undefined8 *)(lVar2 + lVar8));
  func_0x00010c067a20(*(undefined8 *)(lVar2 + _DAT_1127563b8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a3efa4; end: 106a3f033; -[SCContactPermissionResumeViewController _installPullToDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a3efa4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar3 = (long)_DAT_1127563bc;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c261580(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010befa120(puVar1,param_2,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c067a20(*(undefined8 *)(param_1 + _DAT_1127563b8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a3f034; end: 106a3f08b; -[SCContactPermissionResumeViewController _gotoSettingButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a3f034(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + _DAT_1127563b0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4a220();
  _objc_release(param_1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a3f08c; end: 106a3f0cf; -[SCContactPermissionResumeViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a3f08c(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_1,param_2,1,0);
  param_1 = param_1 + _DAT_1127563b0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4a240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a3f0d0; end: 106a3f16b; -[SCContactPermissionResumeViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a3f0d0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127563b8,0);
  _objc_storeStrong(param_1 + _DAT_1127563cc,0);
  _objc_storeStrong(param_1 + _DAT_1127563c8,0);
  _objc_storeStrong(param_1 + _DAT_1127563c4,0);
  _objc_storeStrong(param_1 + _DAT_1127563c0,0);
  _objc_storeStrong(param_1 + _DAT_1127563bc,0);
  _objc_storeStrong(param_1 + _DAT_1127563b4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127563b0);
  return;
}



/* Entry: 106a3f16c; end: 106a3f20f; -[SCContactPermissionPlaceholderData initWithTitle:subtitle:] */

undefined1 *
FUN_106a3f16c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f45f8;
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



/* Entry: 106a3f210; end: 106a3f217; -[SCContactPermissionPlaceholderData title] */

undefined8 FUN_106a3f210(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106a3f218; end: 106a3f247; -[SCContactPermissionPlaceholderData setTitle:] */

void FUN_106a3f218(long param_1,undefined8 param_2,undefined8 param_3)

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


