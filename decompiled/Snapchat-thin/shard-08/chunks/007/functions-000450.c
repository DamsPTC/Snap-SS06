/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106461778; end: 10646177f; +[SCCGenAIMySelfieOnboardingPrivacyPolicyPopupPresent asyncStrictMode] */

undefined8 FUN_106461778(void)

{
  return 0;
}



/* Entry: 106461780; end: 1064617e3; -[SCCGenAIMySelfieOnboardingPrivacyPolicyPopupPresent genAIMySelfieOnboardingPrivacyPolicyPopupPresentWithDeckContainerFactory:context:] */

void FUN_106461780(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x000106462178();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  func_0x000106462158();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064617e4; end: 10646194b; +[SCCGenAIMySelfieOnboardingPrivacyPolicyPopupPresent invokeWithJSRuntimeProvider:deckContainerFactory:context:completionHandler:] */

void FUN_1064617e4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  func_0x000106462178();
  _objc_retain(param_6);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1064618e0;
  puStack_58 = &UNK_1108465d0;
  lStack_50 = param_3;
  uStack_48 = param_4;
  uStack_40 = param_5;
  uStack_38 = param_6;
  _objc_retain(param_6);
  func_0x000106462178();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(lStack_50);
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x000106462158();
  _objc_release(param_3);
  return;
}



/* Entry: 10646194c; end: 10646196f; +[SCCGenAIMySelfieOnboardingPrivacyPolicyPopupPresent valdiMarshallableObjectDescriptor] */

void FUN_10646194c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109231c0;
  param_1[1] = &PTR_DAT_1109231f0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 106461970; end: 10646197b; +[SCCGenAIOnboardingCameosSelfieScreenDelegate valdiMarshallableObjectDescriptor] */

void FUN_106461970(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110923208;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10646197c; end: 106461987; +[SCCGenAIOnboardingCameosSelfieURLProvider valdiMarshallableObjectDescriptor] */

void FUN_10646197c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110923268;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106461988; end: 1064619a3; +[SCCGenAIOnboardingCameraDetectionStage valdiMarshallableObjectDescriptor] */

void FUN_106461988(undefined8 *param_1)

{
  *param_1 = &PTR_s_identifier_110923298;
  param_1[1] = &PTR_DAT_1109232f8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 1064619a4; end: 1064619af; +[SCCGenAIOnboardingCameraFaceAngles valdiMarshallableObjectDescriptor] */

void FUN_1064619a4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110923310;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 1064619b0; end: 1064619bb; +[SCCGenAIOnboardingCameraFaceBoundingBox valdiMarshallableObjectDescriptor] */

void FUN_1064619b0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109233b8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 1064619bc; end: 1064619d7; +[SCCGenAIOnboardingCameraObserver valdiMarshallableObjectDescriptor] */

void FUN_1064619bc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110923478;
  param_1[1] = 0;
  param_1[2] = &PTR_DAT_110923448;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 1064619d8; end: 106461a03;  */

undefined8 FUN_1064619d8(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[2],*param_2,param_2[1],param_2[3]);
  return 0;
}



/* Entry: 106461a04; end: 106461a7f;  */

void FUN_106461a04(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1064620c8;
  puStack_30 = &UNK_1108d6b00;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  func_0x000106462158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106461a80; end: 106461a8b; +[SCCGenAIOnboardingCameraScreenConfiguration valdiMarshallableObjectDescriptor] */

void FUN_106461a80(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110923520;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106461a8c; end: 106461aa7; +[SCCGenAIOnboardingCameraScreenDelegate valdiMarshallableObjectDescriptor] */

void FUN_106461a8c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110923598;
  param_1[1] = &PTR_DAT_110923610;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106461aa8; end: 106461ab3; +[SCCGenAIOnboardingGenderScreenDelegate valdiMarshallableObjectDescriptor] */

void FUN_106461aa8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110923620;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106461ab4; end: 106461abf; +[SCCGenAIOnboardingOneShotPrivacyPolicyScreenDelegate valdiMarshallableObjectDescriptor] */

void FUN_106461ab4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110923698;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106461ac0; end: 106461acb; +[SCCGenAIOnboardingSelfieImageScreenDelegate valdiMarshallableObjectDescriptor] */

void FUN_106461ac0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109236f8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106461acc; end: 106461ad7; +[SCCGenAISelfieCustomSharingPolicySettingsScreenDelegate valdiMarshallableObjectDescriptor] */

void FUN_106461acc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110923758;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106461ad8; end: 106461ae3; +[SCCGenAIMySelfieOnboardingPrivacyPolicyPopupComponent componentPath] */

undefined ** FUN_106461ad8(void)

{
  return &PTR____CFConstantStringClassReference_110e50098;
}



/* Entry: 106461ae4; end: 106461b03; -[SCCGenAIMySelfieOnboardingPrivacyPolicyPopupComponent initWithViewModel:componentContext:runtime:] */

void FUN_106461ae4(void)

{
  FUN_1064620fc(PTR_PTR_1126f13e8);
  return;
}



/* Entry: 106461b04; end: 106461b37; -[SCCGenAIMySelfieOnboardingPrivacyPolicyPopupComponent setViewModel:] */

void FUN_106461b04(void)

{
  func_0x000106462124();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106462140();
  func_0x000106462158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106461b38; end: 106461b6f; -[SCCGenAIMySelfieOnboardingPrivacyPolicyPopupComponent viewModel] */

void FUN_106461b38(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010646214c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106461b70; end: 106461b7b; +[SCCGenAIOnboardingCameosSelfieScreen componentPath] */

undefined ** FUN_106461b70(void)

{
  return &PTR____CFConstantStringClassReference_110e500b8;
}



/* Entry: 106461b7c; end: 106461b9b; -[SCCGenAIOnboardingCameosSelfieScreen initWithViewModel:componentContext:runtime:] */

void FUN_106461b7c(void)

{
  FUN_1064620fc(PTR_PTR_1126f13f0);
  return;
}



/* Entry: 106461b9c; end: 106461bcf; -[SCCGenAIOnboardingCameosSelfieScreen setViewModel:] */

void FUN_106461b9c(void)

{
  func_0x000106462124();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106462140();
  func_0x000106462158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106461bd0; end: 106461c07; -[SCCGenAIOnboardingCameosSelfieScreen viewModel] */

void FUN_106461bd0(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010646214c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106461c08; end: 106461c13; +[SCCGenAIOnboardingCameraScreen componentPath] */

undefined ** FUN_106461c08(void)

{
  return &PTR____CFConstantStringClassReference_110e500d8;
}



/* Entry: 106461c14; end: 106461c33; -[SCCGenAIOnboardingCameraScreen initWithViewModel:componentContext:runtime:] */

void FUN_106461c14(void)

{
  FUN_1064620fc(PTR_PTR_1126f13f8);
  return;
}



/* Entry: 106461c34; end: 106461c67; -[SCCGenAIOnboardingCameraScreen setViewModel:] */

void FUN_106461c34(void)

{
  func_0x000106462124();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106462140();
  func_0x000106462158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106461c68; end: 106461c9f; -[SCCGenAIOnboardingCameraScreen viewModel] */

void FUN_106461c68(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010646214c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106461ca0; end: 106461cab; +[SCCGenAIOnboardingGenderScreen componentPath] */

undefined ** FUN_106461ca0(void)

{
  return &PTR____CFConstantStringClassReference_110e500f8;
}



/* Entry: 106461cac; end: 106461ccb; -[SCCGenAIOnboardingGenderScreen initWithViewModel:componentContext:runtime:] */

void FUN_106461cac(void)

{
  FUN_1064620fc(PTR_PTR_1126f1400);
  return;
}



/* Entry: 106461ccc; end: 106461cff; -[SCCGenAIOnboardingGenderScreen setViewModel:] */

void FUN_106461ccc(void)

{
  func_0x000106462124();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106462140();
  func_0x000106462158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106461d00; end: 106461d37; -[SCCGenAIOnboardingGenderScreen viewModel] */

void FUN_106461d00(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010646214c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106461d38; end: 106461d43; +[SCCGenAIOnboardingGuidelinesComponent componentPath] */

undefined ** FUN_106461d38(void)

{
  return &PTR____CFConstantStringClassReference_110e50118;
}



/* Entry: 106461d44; end: 106461d63; -[SCCGenAIOnboardingGuidelinesComponent initWithViewModel:componentContext:runtime:] */

void FUN_106461d44(void)

{
  FUN_1064620fc(PTR_PTR_1126f1408);
  return;
}



/* Entry: 106461d64; end: 106461d97; -[SCCGenAIOnboardingGuidelinesComponent setViewModel:] */

void FUN_106461d64(void)

{
  func_0x000106462124();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106462140();
  func_0x000106462158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106461d98; end: 106461dcf; -[SCCGenAIOnboardingGuidelinesComponent viewModel] */

void FUN_106461d98(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010646214c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106461dd0; end: 106461ddb; +[SCCGenAIOnboardingOneShotPrivacyPolicyScreen componentPath] */

undefined ** FUN_106461dd0(void)

{
  return &PTR____CFConstantStringClassReference_110e50138;
}



/* Entry: 106461ddc; end: 106461dfb; -[SCCGenAIOnboardingOneShotPrivacyPolicyScreen initWithViewModel:componentContext:runtime:] */

void FUN_106461ddc(void)

{
  FUN_1064620fc(PTR_PTR_1126f1410);
  return;
}



/* Entry: 106461dfc; end: 106461e2f; -[SCCGenAIOnboardingOneShotPrivacyPolicyScreen setViewModel:] */

void FUN_106461dfc(void)

{
  func_0x000106462124();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106462140();
  func_0x000106462158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106461e30; end: 106461e67; -[SCCGenAIOnboardingOneShotPrivacyPolicyScreen viewModel] */

void FUN_106461e30(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010646214c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106461e68; end: 106461e73; +[SCCGenAIOnboardingSelfieImageScreen componentPath] */

undefined ** FUN_106461e68(void)

{
  return &PTR____CFConstantStringClassReference_110e50158;
}



/* Entry: 106461e74; end: 106461e93; -[SCCGenAIOnboardingSelfieImageScreen initWithViewModel:componentContext:runtime:] */

void FUN_106461e74(void)

{
  FUN_1064620fc(PTR_PTR_1126f1418);
  return;
}



/* Entry: 106461e94; end: 106461ec7; -[SCCGenAIOnboardingSelfieImageScreen setViewModel:] */

void FUN_106461e94(void)

{
  func_0x000106462124();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106462140();
  func_0x000106462158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106461ec8; end: 106461eff; -[SCCGenAIOnboardingSelfieImageScreen viewModel] */

void FUN_106461ec8(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010646214c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106461f00; end: 106461f0b; +[SCCGenAIOnboardingSettingsEntryPointScreen componentPath] */

undefined ** FUN_106461f00(void)

{
  return &PTR____CFConstantStringClassReference_110e50178;
}



/* Entry: 106461f0c; end: 106461f2b; -[SCCGenAIOnboardingSettingsEntryPointScreen initWithViewModel:componentContext:runtime:] */

void FUN_106461f0c(void)

{
  FUN_1064620fc(PTR_PTR_1126f1420);
  return;
}



/* Entry: 106461f2c; end: 106461f5f; -[SCCGenAIOnboardingSettingsEntryPointScreen setViewModel:] */

void FUN_106461f2c(void)

{
  func_0x000106462124();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106462140();
  func_0x000106462158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106461f60; end: 106461f97; -[SCCGenAIOnboardingSettingsEntryPointScreen viewModel] */

void FUN_106461f60(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010646214c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106461f98; end: 106461fa3; +[SCCGenAIOnboardingSettingsScreen componentPath] */

undefined ** FUN_106461f98(void)

{
  return &PTR____CFConstantStringClassReference_110e50198;
}



/* Entry: 106461fa4; end: 106461fc3; -[SCCGenAIOnboardingSettingsScreen initWithViewModel:componentContext:runtime:] */

void FUN_106461fa4(void)

{
  FUN_1064620fc(PTR_PTR_1126f1428);
  return;
}



/* Entry: 106461fc4; end: 106461ff7; -[SCCGenAIOnboardingSettingsScreen setViewModel:] */

void FUN_106461fc4(void)

{
  func_0x000106462124();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106462140();
  func_0x000106462158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106461ff8; end: 10646202f; -[SCCGenAIOnboardingSettingsScreen viewModel] */

void FUN_106461ff8(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010646214c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106462030; end: 10646203b; +[SCCGenAISelfieCustomSharingPolicySettingsScreen componentPath] */

undefined ** FUN_106462030(void)

{
  return &PTR____CFConstantStringClassReference_110e501b8;
}



/* Entry: 10646203c; end: 10646205b; -[SCCGenAISelfieCustomSharingPolicySettingsScreen initWithViewModel:componentContext:runtime:] */

void FUN_10646203c(void)

{
  FUN_1064620fc(PTR_PTR_1126f1430);
  return;
}



/* Entry: 10646205c; end: 10646208f; -[SCCGenAISelfieCustomSharingPolicySettingsScreen setViewModel:] */

void FUN_10646205c(void)

{
  func_0x000106462124();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106462140();
  func_0x000106462158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106462090; end: 1064620c7; -[SCCGenAISelfieCustomSharingPolicySettingsScreen viewModel] */

void FUN_106462090(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010646214c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064620c8; end: 1064620fb;  */

void FUN_1064620c8(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1064620fc; end: 10646218b;  */

void FUN_1064620fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 10646218c; end: 1064621ff; -[SCLensStorySettingsService initWithFeatureSettings:] */

undefined1 * FUN_10646218c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1438;
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



/* Entry: 106462200; end: 106462207; -[SCLensStorySettingsService featureSettings] */

undefined8 FUN_106462200(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106462208; end: 106462213; -[SCLensStorySettingsService .cxx_destruct] */

void FUN_106462208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106462214; end: 10646225f; -[SCCameraDirectorModeLaunchServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106462214(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112747de8,0);
  _objc_storeStrong(param_1 + _DAT_112747de0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112747de4);
  return;
}



/* Entry: 106462260; end: 1064622f7; -[SCCameraImmediateLaunchServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106462260(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112747dfc,0);
  _objc_storeStrong(param_1 + _DAT_112747df8,0);
  _objc_storeStrong(param_1 + _DAT_112747df4,0);
  _objc_storeStrong(param_1 + _DAT_112747df0,0);
  _objc_storeStrong(param_1 + _DAT_112747dec,0);
  _objc_storeStrong(param_1 + _DAT_112747e08,0);
  _objc_destroyWeak(param_1 + _DAT_112747e04);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112747e00);
  return;
}



/* Entry: 1064622f8; end: 1064623bf; -[SCCommerceFeatureLaunchersEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064622f8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112747e30,0);
  _objc_storeStrong(param_1 + _DAT_112747e24,0);
  _objc_storeStrong(param_1 + _DAT_112747e20,0);
  _objc_storeStrong(param_1 + _DAT_112747e1c,0);
  _objc_storeStrong(param_1 + _DAT_112747e18,0);
  _objc_storeStrong(param_1 + _DAT_112747e2c,0);
  _objc_storeStrong(param_1 + _DAT_112747e10,0);
  _objc_storeStrong(param_1 + _DAT_112747e14,0);
  _objc_storeStrong(param_1 + _DAT_112747e0c,0);
  _objc_destroyWeak(param_1 + _DAT_112747e28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112747e34);
  return;
}



/* Entry: 1064623c0; end: 106462727; -[SCContextActionBarDataFetcher initWithUserSession:circumstanceEngine:userInfoServices:httpMetadataService:httpRequestModifier:bloopsOnboardingStateProvider:userInfoRequestProvider:contextMentionExperiments:contextExperimentService:aifTopLevelCardsExperimentsService:conversationIdResolver:snapchattersDataFetcher:delegate:lensPromptDataProvider:] */

undefined8 *
FUN_1064623c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126f1440;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[8];
    puVar1[8] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSCache_1126b3388;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_14;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 1,param_15);
    _objc_retain(param_16);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_16;
    _objc_release(uVar2);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106462728; end: 1064629ff; -[SCContextActionBarDataFetcher observeContextDataWithSessionParams:isUCC:contextSessionId:navigationStyle:performer:viewLogger:isFromSendSide:verticalNavigationCanSwipeLeft:viewDidLoadSignal:] */

void FUN_106462728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_118 [8];
  undefined1 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106462a00;
  puStack_c0 = &UNK_1109237d0;
  _objc_copyWeak(auStack_98,auStack_80);
  _objc_retain(param_3);
  uStack_b8 = param_3;
  _objc_retain(param_8);
  uStack_b0 = param_8;
  uStack_90 = param_6;
  _objc_retain(param_7);
  uStack_a8 = param_7;
  _objc_retain(param_5);
  uStack_a0 = param_5;
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = puVar2;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_106462e48;
  puStack_f0 = &UNK_110923800;
  uStack_e8 = param_1;
  _objc_retain(param_3);
  puVar2 = puVar1;
  uStack_e0 = param_3;
  func_0x00010bfb2660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde8c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_118,auStack_80);
  uStack_110 = param_9;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_11);
  puVar3 = puVar2;
  func_0x00010bf41860(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_11);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_118);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(uStack_e0);
  _objc_release(puVar1);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106462a00; end: 106462da3;  */

void FUN_106462a00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar8 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_2);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    FUN_1065ed754(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    FUN_1065ee048(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010c08bda0();
    if ((lVar4 - 3U < 6) || (lVar4 == 0x22)) {
      uVar5 = *(undefined8 *)(lVar1 + 0x10);
      func_0x00010c2923e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21e620(uVar2);
      _objc_release(uVar5);
      uVar6 = *(undefined8 *)(lVar1 + 0x20);
      func_0x00010c2946e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar5;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21f760(uVar2);
      _objc_release(uVar9);
      _objc_release(uVar5);
      _objc_release(uVar6);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf46560(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07dd00();
    _objc_release(uVar5);
    uVar7 = *(ulong *)(param_1 + 0x20);
    FUN_1064bc9c4();
    if ((uVar7 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c15ffa0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4f580(uVar5);
      _objc_release(uVar9);
      _objc_release(uVar5);
      puVar8 = PTR_PTR_1126af5d0;
      puVar10 = PTR_PTR_1126caaf8;
      func_0x00010c0cb140(PTR_PTR_1126caaf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2619e0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(param_2);
      _objc_release(puVar8);
      _objc_release(puVar10);
      puVar8 = PTR_PTR_1126b0418;
      func_0x00010bf54280(PTR_PTR_1126b0418);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar4 = lVar1;
      func_0x00010be19ac0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        _objc_retain(param_2);
        func_0x00010be19b00(lVar1);
      }
      else {
        lVar11 = *(long *)(param_1 + 0x30);
        if (lVar11 == 0) {
          lVar11 = *(long *)(lVar1 + 0x28);
        }
        _objc_retain(param_2);
        func_0x00010c0f7fc0(lVar11);
      }
      _objc_release(param_2);
      puVar8 = PTR_PTR_1126b0418;
      func_0x00010bf54280(PTR_PTR_1126b0418);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106462da4; end: 106462e47;  */

void FUN_106462da4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106462e48; end: 106462e57;  */

void FUN_106462e48(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc7ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__addPromptDataIfNeeded_sessionPa_11254f950,
             param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106462e58; end: 106462fd7;  */

void FUN_106462e58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106462fd8;
  puStack_88 = &UNK_1108651a8;
  _objc_retain(param_2);
  uStack_80 = param_2;
  _objc_copyWeak(auStack_60,param_1 + 0x38);
  uStack_58 = *(undefined1 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = uVar2;
  _objc_retain(uVar3);
  uStack_70 = uVar3;
  _objc_retain(param_3);
  ppuVar1 = &puStack_a0;
  uStack_68 = param_3;
  _objc_retainBlock();
  if (*(long *)(param_1 + 0x30) == 0) {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    func_0x00010c297260();
  }
  _objc_retain(param_2);
  _objc_release(ppuVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_60);
  _objc_release(uStack_80);
  _objc_release(param_2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106462fd8; end: 1064630bf;  */

void FUN_106462fd8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,param_1 + 0x40);
  uStack_38 = *(undefined1 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  func_0x00010c0c0800(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 1064630c0; end: 1064631e7;  */

void FUN_1064630c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = *(undefined8 *)(lVar1 + 0x10);
      func_0x00010c2923e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108436ba0(uVar4,uVar2);
      _objc_release(uVar2);
    }
    lVar3 = lVar1 + 8;
    _objc_loadWeakRetained(lVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    FUN_1065ee048(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beede00(lVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064631e8; end: 10646322b;  */

void FUN_1064631e8(long param_1,int param_2,long param_3)

{
  func_0x00010bf1f3c0();
  if ((param_3 == 0) && (param_2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010646321c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10646322c; end: 106463553; -[SCContextActionBarDataFetcher _addPromptDataIfNeeded:sessionParams:] */

void FUN_10646322c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  _objc_release(lVar1);
  if (((lVar2 == 0) || (lVar1 = param_4, func_0x00010c08bda0(), lVar1 == 0x14)) ||
     (*(long *)(param_1 + 0x80) == 0)) {
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_106463328;
  }
  lVar1 = param_4;
  func_0x0001084365e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bfd8500();
  if ((int)lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c091b80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c1185e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  lVar2 = lVar5;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
LAB_1064634c0:
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = lVar1;
    func_0x00010c091b80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c11cb60();
    _objc_release(lVar2);
    if ((int)lVar4 != 3) goto LAB_1064634c0;
    puStack_98 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_106463554;
    uStack_70 = 0x106463564;
    uStack_68 = 0;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10646356c;
    puStack_a0 = &UNK_110923890;
    puStack_88 = puStack_98;
    func_0x00010c0c0800(param_3);
    if (puStack_88[5] == 0) {
      puVar3 = PTR_PTR_1126ae6b8;
      func_0x00010c0860a0(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_initWeak(auStack_c0,param_1);
      puVar3 = PTR_PTR_1126ae6b8;
      _objc_copyWeak(auStack_c8,auStack_c0);
      _objc_retain(param_3);
      _objc_retain(lVar1);
      _objc_retain(param_4);
      func_0x00010bf54280(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
      _objc_release(lVar1);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_c8);
      _objc_destroyWeak(auStack_c0);
    }
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
  }
  _objc_release(lVar5);
  _objc_release(lVar1);
LAB_106463328:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106463554; end: 10646356b;  */

void FUN_106463554(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10646356c; end: 1064635a3;  */

void FUN_10646356c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064635a4; end: 1064639cf;  */

void FUN_1064635a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    puVar10 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_2);
    _objc_release(puVar10);
  }
  else {
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x3032000000;
    pcStack_80 = FUN_106463554;
    uStack_78 = 0x106463564;
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uStack_70 = uVar3;
    func_0x00010c091b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c118560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar3;
    func_0x00010bfe2ee0();
    uVar5 = uVar3;
    func_0x00010c0b5940(uVar3);
    func_0x000100c4a928(uVar4,uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar5;
    func_0x00010c0720c0();
    if ((int)uVar4 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c290fa0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c12a0();
      _objc_release(uVar4);
      _objc_release(uVar6);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c091b80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bfdab40();
    _objc_release(uVar6);
    if ((int)uVar4 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c091b80();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      func_0x00010c118860();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bfe2ee0();
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c091b80(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c118860();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar9;
      func_0x00010c0b5940();
      func_0x000100c4a928(uVar6,uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar6;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = puStack_90[5];
      puStack_90[5] = uVar12;
      _objc_release(uVar11);
      _objc_release(uVar6);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar4);
      _objc_release(uVar7);
    }
    uVar6 = *(undefined8 *)(lVar2 + 0x80);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c091b80(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    func_0x00010bf93ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    auVar13 = *(undefined1 (*) [16])(param_1 + 0x30);
    _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x30));
    auVar13 = NEON_ext(auVar13,auVar13,8,1);
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar12);
    _objc_retain(uVar5);
    func_0x00010bfc92c0(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar12);
    _objc_release(auVar13._8_8_);
    _objc_release(param_2);
    _objc_release(uVar5);
    _objc_release(uVar3);
    __Block_object_dispose(&uStack_98,8);
    _objc_release(uStack_70);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064639d0; end: 106463a07;  */

void FUN_1064639d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106463a08; end: 106463b8f;  */

void FUN_106463a08(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    if (param_3 == 0) {
      puVar1 = param_2;
      func_0x00010c27d340();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c06fe80();
      _objc_retain(param_2);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar2);
      _objc_retain(puVar1);
      func_0x00010bdf1fe0(uVar3);
      _objc_release(uVar2);
      _objc_release(puVar1);
      _objc_release(param_2);
      goto LAB_106463b5c;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x28);
  }
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
LAB_106463b5c:
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106463b90; end: 106463c77;  */

void FUN_106463b90(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c096d60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x28);
    func_0x00010c06eda0();
    if ((uVar4 & 1) == 0) {
      _objc_release(lVar2);
      if (param_2 == 0) goto LAB_106463c2c;
      lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
      func_0x00010c105080(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010beef4a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066b00();
      _objc_release(lVar3);
    }
  }
  _objc_release(lVar2);
LAB_106463c2c:
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puVar5 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106463c78; end: 106463e6b; -[SCContextActionBarDataFetcher _createPromptLensActionWithSessionParams:cci:isCurrentUsersTurn:promptCreatorUserId:promptReceiverUserId:completion:] */

void FUN_106463c78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_5 == 0) {
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    uVar1 = param_6;
    if ((int)uVar2 != 0) {
      _objc_retain(param_7);
      _objc_release(param_6);
      uVar1 = param_7;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_8);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c2448c0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_8);
  }
  else {
    uVar1 = param_3;
    func_0x0001070baac0(param_3,param_4,1,0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_8 + 0x10))(param_8,uVar1);
  }
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106463e6c; end: 106463f2b;  */

void FUN_106463e6c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  lVar4 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined1 *)(param_1 + 0x38);
  if ((param_2 == 0) || (param_3 != 0)) {
    func_0x0001070baac0(lVar4,uVar1,uVar3,0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,lVar4);
  }
  else {
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001070baac0(lVar4,uVar1,uVar3,param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,lVar4);
    _objc_release(lVar4);
    lVar4 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 106463f2c; end: 1064640ff; -[SCContextActionBarDataFetcher _conversationIdForStory:] */

void FUN_106463f2c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_106464100();
  puVar4 = PTR_PTR_1126ae6b8;
  if ((uVar1 & 1) == 0) {
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_106463554;
    uStack_40 = 0x106463564;
    puStack_38 = (undefined *)0x0;
    uVar1 = param_3;
    func_0x00010c290fa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c12a0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126ae6b8;
    if (puStack_58[5] == 0) {
      puVar3 = PTR_PTR_1126ae750;
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = *(undefined **)(param_1 + 0x68);
      func_0x00010c269d40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf50400();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar3);
    __Block_object_dispose(&uStack_60,8);
    puVar3 = puStack_38;
  }
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106464100; end: 10646418b;  */

bool FUN_106464100(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c08bda0();
  if (lVar2 == 10) {
    lVar2 = param_1;
    func_0x00010c25a6e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf82a60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    bVar1 = lVar4 == 0;
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10646418c; end: 1064641d3;  */

void FUN_10646418c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010c294260(PTR_PTR_1126b01c0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1064641d4; end: 106464397; -[SCContextActionBarDataFetcher _fromNetwork:snapContextInfo:snapIdentity:contextSessionId:isShareable:navigationStyle:verticalNavigationCanSwipeLeft:performer:completion:] */

void FUN_1064641d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uStack_70 = param_7;
  _objc_retain(param_6);
  uStack_78 = param_8;
  _objc_retain(param_11);
  _objc_retain(param_12);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106464398; end: 106464917;  */

void FUN_106464398(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126cab00;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar3 + 0x50);
    func_0x00010bfcbe80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126cab08;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    FUN_1065ee048(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2046c0(puVar6);
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    FUN_1065ee2b4(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204680(puVar6);
    _objc_release(uVar7);
    func_0x00010c1830e0(puVar6);
    FUN_1065ed714(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c177ca0(puVar6);
    func_0x00010c223020(puVar6);
    func_0x00010c1b44a0(puVar6);
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x20);
    func_0x000108437e04();
    lVar20 = *(long *)(param_1 + 0x30);
    uVar19 = *(undefined8 *)(param_1 + 0x20);
    uVar7 = *(undefined8 *)(lVar3 + 0x78);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar19);
    _objc_retain(uVar7);
    _objc_retain(lVar20);
    lVar11 = lVar20;
    func_0x00010bf4e420();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar20;
    func_0x00010bfd5c40();
    _objc_release(lVar20);
    uVar18 = 0;
    if (((int)lVar12 != 0) && (lVar11 != 0)) {
      lVar12 = lVar11;
      func_0x00010c0d3a00();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar11;
      func_0x00010bfd95a0();
      uVar18 = 0;
      if (((int)lVar20 != 0) && (lVar12 != 0)) {
        func_0x000108437a30(uVar19);
        func_0x00010c08bda0(uVar19);
        func_0x00010c29d360(uVar19);
        uVar13 = uVar7;
        func_0x00010c233ca0();
        func_0x00010c08bda0(uVar19);
        func_0x00010c29d360(uVar19);
        uVar14 = uVar7;
        func_0x00010c233c80();
        uVar18 = (uint)uVar13 | (uint)uVar14;
      }
      _objc_release(lVar12);
    }
    _objc_release(lVar11);
    _objc_release(uVar7);
    _objc_release(uVar19);
    _objc_release(uVar7);
    uVar19 = *(undefined8 *)(lVar3 + 0x78);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08bda0(*(undefined8 *)(param_1 + 0x20));
    func_0x000108437a30(*(undefined8 *)(param_1 + 0x20));
    uVar7 = uVar19;
    func_0x00010c2345a0();
    _objc_release(uVar19);
    if ((((uVar1 | uVar18) & 1) == 0) && ((int)uVar7 == 0)) {
      uVar19 = *(undefined8 *)(lVar3 + 0x60);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar19;
      func_0x00010c235560();
      _objc_release(uVar19);
      if ((int)uVar7 != 0) {
        func_0x00010c226bc0(puVar6);
      }
    }
    else {
      func_0x00010c226780(puVar6);
    }
    uVar8 = *(ulong *)(lVar3 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf1e060();
    _objc_release(uVar8);
    if ((uVar9 & 1) == 0) {
      puVar10 = PTR_PTR_1126ae740;
      func_0x00010bf09f00(PTR_PTR_1126ae740);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c198000(puVar6);
      _objc_release(puVar10);
      puVar10 = puVar6;
      func_0x00010bf9aca0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befc800();
      _objc_release(puVar10);
    }
    lVar11 = *(long *)(param_1 + 0x20);
    func_0x00010c08bda0();
    uVar8 = *(ulong *)(lVar3 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08bda0(*(undefined8 *)(param_1 + 0x20));
    uVar9 = uVar8;
    func_0x00010c0813e0();
    _objc_release(uVar8);
    iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
    FUN_106464100();
    uVar8 = *(ulong *)(param_1 + 0x28);
    func_0x00010c070a00();
    if (((((uVar8 & 1) != 0) || (lVar11 == 0x10)) || ((uVar9 & 1) != 0)) || (iVar2 != 0)) {
      lVar12 = *(long *)(param_1 + 0x20);
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar12;
      func_0x00010c0d2280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      lVar12 = lVar11;
      func_0x00010c158380();
      lVar20 = lVar11;
      func_0x00010c1581e0();
      if ((lVar11 == 0) || (lVar12 == lVar20 + -1)) {
        func_0x00010c2269e0(puVar6);
      }
      _objc_release(lVar11);
    }
    uVar19 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c290fa0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar19;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,param_1 + 0x50);
    _objc_retain(puVar6);
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar13);
    uVar14 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar14);
    uVar15 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar15);
    uStack_68 = *(undefined8 *)(param_1 + 0x58);
    uVar16 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar16);
    uVar17 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar17);
    func_0x00010bdf5fc0(lVar3);
    _objc_release(uVar7);
    _objc_release(uVar19);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_70);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 106464918; end: 106464a43;  */

void FUN_106464918(long param_1,long param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c223060(*(undefined8 *)(param_1 + 0x20));
    puVar2 = PTR_PTR_1126cab10;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e7c0();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0d3c80();
    func_0x00010c1ec480(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    param_4 = *(undefined8 *)(param_1 + 0x30);
    param_5 = *(undefined8 *)(param_1 + 0x38);
    param_3 = puVar2;
    func_0x00010be5c080(lVar1);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x000106464ac4(param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c0dff20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf51e00();
    _objc_release(uVar5);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 106464a44; end: 106464b7b; -[SCContextActionBarDataFetcher _fromCache:snapIdentity:navigationStyle:] */

void FUN_106464a44(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000106464ac4(param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0dff20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf51e00();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106464b7c; end: 106464e5f; -[SCContextActionBarDataFetcher _makeRequest:sessionParams:snapIdentity:contextSessionId:navigationStyle:performer:completion:] */

void FUN_106464b7c(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = param_3;
  func_0x00010c1373e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_9 + 0x10))(param_9,0,puVar1);
  }
  else {
    puVar2 = param_3;
    func_0x00010c1373e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    FUN_1064bc918(uVar3,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,param_1);
    _objc_retain(puVar1);
    puVar2 = puVar1;
    func_0x00010c2b3fe0();
    if ((int)puVar2 != 0) {
      puVar2 = puVar1;
      func_0x00010bf4e8e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bf4e420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar4);
    }
    _objc_release(puVar1);
    _objc_retain(puVar1);
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    uStack_70 = param_7;
    _objc_retain(param_9);
    func_0x00010c15c720(param_1);
    _objc_release(param_9);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106464e60; end: 106464f43;  */

void FUN_106464e60(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c2b3fe0();
  if (iVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c13be00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c241220(*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be2f3a0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106464f44; end: 1064651bf; -[SCContextActionBarDataFetcher sendRequest:metadata:performer:completion:] */

void FUN_106464f44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bdc1b00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar2 = param_4;
  func_0x00010bf16280(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc34c0(puVar3,param_2,&PTR____CFConstantStringClassReference_110e50218,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfe02c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1064651c0;
  puStack_80 = &UNK_110884ec8;
  uStack_78 = param_4;
  _objc_retain(param_4);
  uVar5 = uVar4;
  func_0x00010bf225e0(uVar4,param_2,1,puVar3,uVar2,param_3,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126b5730;
  _objc_alloc(PTR_PTR_1126b5730);
  func_0x00010c01b560();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c11de00(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106465210;
  puStack_a8 = &UNK_11086d168;
  uStack_a0 = param_6;
  _objc_retain(param_6);
  func_0x00010c25f600(uVar4,param_2,uVar5,puVar6,uVar2,&puStack_c0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uStack_a0);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uStack_78);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1064651c0; end: 10646520f;  */

void FUN_1064651c0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c2907c0(param_2);
  func_0x00010c243980(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c290a40(param_2);
  func_0x00010c28fde0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106465210; end: 106465303;  */

void FUN_106465210(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
    if ((param_5 != 0) && (param_6 == 0)) {
      puVar1 = PTR_PTR_1126cab18;
      _objc_alloc(PTR_PTR_1126cab18);
      func_0x00010c008360();
      param_6 = 0;
      _objc_retain(0);
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_6,puVar1);
    _objc_release(puVar1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_6,0);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 106465304; end: 1064654af; -[SCContextActionBarDataFetcher _handleResponse:error:sessionParams:snapIdentity:contextSessionId:navigationStyle:completion:] */

void FUN_106465304(long param_1,undefined8 param_2,undefined *param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  if ((param_3 == (undefined *)0x0) || (param_4 != 0)) {
    (**(code **)(param_9 + 0x10))(param_9,0,param_4);
  }
  else {
    puVar1 = param_3;
    func_0x00010c13be00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf529e0();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_9 + 0x10))(param_9,0,puVar1);
    }
    else {
      puVar2 = param_3;
      func_0x00010c13be00(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      lVar3 = param_5;
      func_0x000106464ac4(param_5,param_6,param_8);
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        puVar2 = puVar1;
        func_0x00010bf51e00(puVar1);
        func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x30));
        _objc_release(puVar2);
      }
      (**(code **)(param_9 + 0x10))(param_9,puVar1,0);
      _objc_release(lVar3);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064654b0; end: 10646564f; -[SCContextActionBarDataFetcher _creatorInfoForUserId:completion:] */

void FUN_1064654b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106463554;
  uStack_60 = 0x106463564;
  uStack_58 = 0;
  func_0x00010c0c12a0(param_3);
  if (puStack_78[5] == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010c2448c0(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_4);
  }
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106465650; end: 106465687;  */

void FUN_106465650(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106465688; end: 106465757;  */

void FUN_106465688(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  if ((param_2 == 0) || (param_3 != 0)) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  }
  else {
    _objc_retain(param_2);
    uVar1 = param_2;
    func_0x000100bf119c();
    if (((uVar1 & 1) == 0) && (uVar1 = param_2, func_0x00010901c5ac(), (uVar1 & 1) == 0)) {
      func_0x00010901c618();
    }
    _objc_release(param_2);
    puVar2 = PTR_PTR_1126cab20;
    _objc_opt_new(PTR_PTR_1126cab20);
    func_0x00010c1a0d00();
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


