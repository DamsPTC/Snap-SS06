/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10703cab8; end: 10703cadf;  */

void FUN_10703cab8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010703cac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10703cae0; end: 10703caef; -[SCFeatureSettingsService resetBipaAcceptedPolicyVersion] */

void FUN_10703cae0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19ab70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setFeatureSettingWithItemId_valu_1126444f8,0x388,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9cb8);
  return;
}



/* Entry: 10703caf0; end: 10703cafb; -[SCFeatureSettingsService hasLockScreenWidgetEnabled] */

void FUN_10703caf0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e990d8);
  return;
}



/* Entry: 10703cafc; end: 10703cb07; -[SCFeatureSettingsService lockScreenWidgetEnabledServerParam] */

undefined ** FUN_10703cafc(void)

{
  return &PTR____CFConstantStringClassReference_110e990d8;
}



/* Entry: 10703cb08; end: 10703cb17; -[SCFeatureSettingsService setLockScreenWidgetEnabled:] */

void FUN_10703cb08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e990d8,param_3);
  return;
}



/* Entry: 10703cb18; end: 10703cb1f; -[SCFeatureSettingsService IOS_LOCK_SCREEN_WIDGET_ENABLED_client_value:] */

undefined * FUN_10703cb18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10703cb20; end: 10703cb27; -[SCFeatureSettingsService IOS_LOCK_SCREEN_WIDGET_ENABLED_server_value:] */

void FUN_10703cb20(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10703cb28; end: 10703cb37; -[SCFeatureSettingsService lockScreenWidgetEnabled] */

void FUN_10703cb28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e990d8,0);
  return;
}



/* Entry: 10703cb38; end: 10703cb77; -[SCFeatureSettingsService isCPRAOptoutEnabled] */

undefined8 FUN_10703cb38(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c296ea0(param_1,param_2,0x2d6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10703cb78; end: 10703cc6f; -[SCFeatureSettingsService setCPRAOptoutEnabled:completion:] */

void FUN_10703cb78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10703cc70;
  puStack_50 = &UNK_11085a1b8;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010c19ab80(param_1,param_2,0x2d6,puVar1,puVar3,&puStack_68);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 10703cc70; end: 10703cc83;  */

void FUN_10703cc70(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010703cc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10703cc84; end: 10703ccc3; -[SCFeatureSettingsService isFDBROptoutEnabled] */

undefined8 FUN_10703cc84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c296ea0(param_1,param_2,0x3fb);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10703ccc4; end: 10703cdbb; -[SCFeatureSettingsService setFDBROptoutEnabled:completion:] */

void FUN_10703ccc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10703cdbc;
  puStack_50 = &UNK_11085a1b8;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010c19ab80(param_1,param_2,0x3fb,puVar1,puVar3,&puStack_68);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 10703cdbc; end: 10703d057;  */

void FUN_10703cdbc(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010703cdc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10703d058; end: 10703d063; -[SCARBarAdapterServices .cxx_destruct] */

void FUN_10703d058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10703d064; end: 10703d0d7; -[SCCaaSCameraScopedARBarReplyAdapterServices initWithArBarReplyAdapterServices:] */

undefined1 * FUN_10703d064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8570;
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



/* Entry: 10703d0d8; end: 10703d0df; -[SCCaaSCameraScopedARBarReplyAdapterServices arBarReplyAdapterServices] */

undefined8 FUN_10703d0d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10703d0e0; end: 10703d0eb; -[SCCaaSCameraScopedARBarReplyAdapterServices .cxx_destruct] */

void FUN_10703d0e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10703d0ec; end: 10703d15f; -[SCChatCameraScopedARBarReplyAdapterServices initWithArBarReplyAdapterServices:] */

undefined1 * FUN_10703d0ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8578;
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



/* Entry: 10703d160; end: 10703d167; -[SCChatCameraScopedARBarReplyAdapterServices arBarReplyAdapterServices] */

undefined8 FUN_10703d160(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10703d168; end: 10703d173; -[SCChatCameraScopedARBarReplyAdapterServices .cxx_destruct] */

void FUN_10703d168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10703d174; end: 10703d1e7; -[SCLensesModularCameraScopedARBarReplyAdapterServices initWithArBarReplyAdapterServices:] */

undefined1 * FUN_10703d174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8580;
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



/* Entry: 10703d1e8; end: 10703d1ef; -[SCLensesModularCameraScopedARBarReplyAdapterServices arBarReplyAdapterServices] */

undefined8 FUN_10703d1e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10703d1f0; end: 10703d1fb; -[SCLensesModularCameraScopedARBarReplyAdapterServices .cxx_destruct] */

void FUN_10703d1f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10703d1fc; end: 10703d207; +[SCCaptureDevice defaultDeviceWithDeviceType:mediaType:position:] */

void FUN_10703d1fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf69330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0,
             PTR_s_defaultDeviceWithDeviceType_medi_1125b7e70);
  return;
}



/* Entry: 10703d208; end: 10703d213; +[SCCaptureDevice requestAccessForMediaType:completionHandler:] */

void FUN_10703d208(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c134790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0,
             PTR_s_requestAccessForMediaType_comple_11262ac00);
  return;
}



/* Entry: 10703d214; end: 10703d26f; +[SCCaptureDeviceInput captureDeviceInputWithDevice:error:] */

void FUN_10703d214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___AVCaptureDeviceInput_1126d4280;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00be40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10703d270; end: 10703d2a7;  */

void FUN_10703d270(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be511e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10703d2a8; end: 10703d41f; -[SCManagedCaptureDeviceLogger logCameraDecisionEventWithFeatureNames:sessionPreset:deviceType:devicePosition:] */

void FUN_10703d2a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c2326a0();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)uVar4 != 0) {
    func_0x00010035de64();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110ddd478);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(param_6);
    puVar3 = PTR_PTR_1126d4288;
    _objc_opt_new(PTR_PTR_1126d4288);
    func_0x00010c18a1a0();
    uVar4 = param_4;
    func_0x00010bf660a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18a1c0(puVar3,param_2,uVar4);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b29e0();
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10703d420; end: 10703d42f; -[SCManagedCaptureDeviceLogger logDiscoverySessionFailureWithDevicePosition:sessionId:] */

void FUN_10703d420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be525f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logDiscoverySessionEventWithTyp_112572318,1,param_3,param_4);
  return;
}



/* Entry: 10703d430; end: 10703d43f; -[SCManagedCaptureDeviceLogger logDiscoverySessionRetryWithDevicePosition:sessionId:] */

void FUN_10703d430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be525f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logDiscoverySessionEventWithTyp_112572318,2,param_3,param_4);
  return;
}



/* Entry: 10703d440; end: 10703d44f; -[SCManagedCaptureDeviceLogger logDiscoverySessionRetrySuccessWithDevicePosition:sessionId:] */

void FUN_10703d440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be525f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logDiscoverySessionEventWithTyp_112572318,3,param_3,param_4);
  return;
}



/* Entry: 10703d450; end: 10703d5e7; -[SCManagedCaptureDeviceLogger _logCameraDeviceConfigurationForFormats:deviceType:devicePosition:] */

void FUN_10703d450(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be34520(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    puVar4 = PTR_PTR_1126d4290;
    _objc_opt_new(PTR_PTR_1126d4290);
    func_0x00010bdc3940(param_1);
    func_0x00010c176b80(puVar4);
    func_0x00010bdc3920(param_1);
    func_0x00010c18cf80(puVar4);
    uVar5 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1109890f0);
    func_0x00010c18c920(puVar4);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b29e0();
    _objc_release(uVar5);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(uVar5);
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10703d5e8; end: 10703d5ef;  */

void FUN_10703d5e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf660b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_debugDescription_1125b71d0);
  return;
}



/* Entry: 10703d5f0; end: 10703d6a3; -[SCManagedCaptureDeviceLogger _logDiscoverySessionEventWithType:devicePosition:sessionId:] */

void FUN_10703d5f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c77d0;
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  lVar2 = param_1;
  func_0x00010bdc3940(param_1,param_2,param_4);
  func_0x00010c1764e0(puVar1,param_2,lVar2);
  func_0x00010c21acc0(puVar1,param_2,param_3);
  func_0x00010c18d000(puVar1,param_2,param_5);
  _objc_release(param_5);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10703d6a4; end: 10703d7cf; -[SCManagedCaptureDeviceLogger _SCACameraDeviceTypeFromAVCaptureDeviceType:] */

undefined8 FUN_10703d6a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 == *(long *)PTR__AVCaptureDeviceTypeBuiltInWideAngleCamera_110347f20) {
    uVar2 = 0;
  }
  else if (param_3 == *(long *)PTR__AVCaptureDeviceTypeBuiltInTrueDepthCamera_110347f10) {
    uVar2 = 6;
  }
  else if (param_3 == *(long *)PTR__AVCaptureDeviceTypeBuiltInTelephotoCamera_110347f00) {
    uVar2 = 2;
  }
  else if (param_3 == *(long *)PTR__AVCaptureDeviceTypeBuiltInDualCamera_110347ee8) {
    uVar2 = 3;
  }
  else if (param_3 == *(long *)PTR__AVCaptureDeviceTypeBuiltInUltraWideCamera_110347f18) {
    uVar2 = 1;
  }
  else if (param_3 == *(long *)PTR__AVCaptureDeviceTypeBuiltInDualWideCamera_110347ef0) {
    uVar2 = 4;
  }
  else {
    iVar1 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    if (iVar1 != 0) {
      if (param_3 == *(long *)PTR__AVCaptureDeviceTypeBuiltInTripleCamera_110347f08) {
        uVar2 = 5;
        goto LAB_10703d7b8;
      }
      if (param_3 == *(long *)PTR__AVCaptureDeviceTypeBuiltInLiDARDepthCamera_110347ef8) {
        uVar2 = 7;
        goto LAB_10703d7b8;
      }
    }
    uVar2 = 0xffffffffffffffff;
  }
LAB_10703d7b8:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10703d7d0; end: 10703d7e7; -[SCManagedCaptureDeviceLogger _SCACameraDirectionFromAVCaptureDevicePosition:] */

undefined1 FUN_10703d7d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 0) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 10703d7e8; end: 10703d883; -[SCManagedCaptureDeviceLogger _hasReportedCameraDeviceConfigurationKeyWithDeviceType:devicePosition:] */

void FUN_10703d7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bdc3920();
  func_0x00010038f7e4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010035de64();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110ddd478);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10703d884; end: 10703d8cb; -[SCManagedCaptureDeviceLogger .cxx_destruct] */

void FUN_10703d884(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10703d8cc; end: 10703d8db;  */

void FUN_10703d8cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xa1);
  return;
}



/* Entry: 10703d8dc; end: 10703d9f7; -[SCCameraTimerContinuousCaptureSpinnerViewV2 startWithMaxDuration:initialElapsedTime:speedMultiplier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703d8dc(double param_1,double param_2,double param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  
  func_0x00010c137fe0();
  *(double *)(param_4 + _DAT_1127630d4) = param_1;
  *(double *)(param_4 + _DAT_1127630d8) = param_2;
  *(double *)(param_4 + _DAT_1127630dc) = param_2;
  if (param_3 <= 0.0) {
    param_3 = 1.0;
  }
  lVar4 = (long)_DAT_1127630e0;
  *(double *)(param_4 + lVar4) = param_3;
  _CACurrentMediaTime();
  *(double *)(param_4 + _DAT_1127630e4) = param_3;
  *(undefined1 *)(param_4 + _DAT_1127630e8) = 1;
  dVar5 = param_2 / param_1;
  if (param_1 <= 0.0) {
    dVar5 = 0.0;
  }
  dVar6 = 0.0;
  if (0.0 <= dVar5) {
    dVar6 = dVar5;
  }
  uVar7 = NEON_fminnm(dVar6,0x3ff0000000000000);
  lVar1 = param_4;
  func_0x00010bdf2fe0(0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_1127630ec;
  uVar2 = *(undefined8 *)(param_4 + lVar3);
  *(long *)(param_4 + lVar3) = lVar1;
  _objc_release(uVar2);
  func_0x00010c20e920(uVar7,*(undefined8 *)(param_4 + lVar3));
  if (0.0 < (param_1 - param_2) * *(double *)(param_4 + lVar4)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdcb090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar7,0x3ff0000000000000,param_4,PTR_s__animateSegment_from_to_duration_1125505c0,
               *(undefined8 *)(param_4 + lVar3));
    return;
  }
  return;
}



/* Entry: 10703d9f8; end: 10703dabf; -[SCCameraTimerContinuousCaptureSpinnerViewV2 pause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703d9f8(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  if (((*(char *)(param_2 + _DAT_1127630e8) == '\x01') &&
      (lVar1 = (long)_DAT_1127630f0, (*(byte *)(param_2 + lVar1) & 1) == 0)) &&
     (lVar2 = (long)_DAT_1127630ec, *(long *)(param_2 + lVar2) != 0)) {
    _CACurrentMediaTime();
    dVar3 = param_1 - *(double *)(param_2 + _DAT_1127630e4);
    dVar4 = dVar3 / *(double *)(param_2 + _DAT_1127630e0);
    if (*(double *)(param_2 + _DAT_1127630e0) <= 0.0) {
      dVar4 = dVar3;
    }
    *(double *)(param_2 + _DAT_1127630d8) = *(double *)(param_2 + _DAT_1127630d8) + dVar4;
    func_0x00010bf514c0(*(undefined8 *)(param_2 + lVar2),param_3,0);
    func_0x00010c207c40(0,*(undefined8 *)(param_2 + lVar2));
    func_0x00010c214e40(param_1,*(undefined8 *)(param_2 + lVar2));
    *(undefined1 *)(param_2 + lVar1) = 1;
  }
  return;
}



/* Entry: 10703dac0; end: 10703dca3; -[SCCameraTimerContinuousCaptureSpinnerViewV2 resumeWithSpeedMultiplier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703dac0(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  if (*(char *)(param_2 + _DAT_1127630e8) != '\x01') {
    return;
  }
  lVar5 = (long)_DAT_1127630f0;
  if (*(char *)(param_2 + lVar5) != '\x01') {
    return;
  }
  if (param_1 <= 0.0) {
    param_1 = 1.0;
  }
  lVar7 = (long)_DAT_1127630e0;
  *(double *)(param_2 + lVar7) = param_1;
  lVar6 = (long)_DAT_1127630ec;
  lVar1 = *(long *)(param_2 + lVar6);
  if (lVar1 == 0) {
    param_1 = *(double *)(param_2 + _DAT_1127630d0);
  }
  else {
    func_0x00010c10f4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25dc60();
    _objc_release(lVar1);
    if (*(long *)(param_2 + lVar6) != 0) {
      func_0x00010c20e920(param_1);
      func_0x00010c12aaa0(*(undefined8 *)(param_2 + lVar6));
      func_0x00010befa120(*(undefined8 *)(param_2 + _DAT_1127630c8),param_3,
                          *(undefined8 *)(param_2 + lVar6));
      uVar3 = *(undefined8 *)(param_2 + _DAT_1127630cc);
      lVar1 = (long)_DAT_1127630dc;
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(*(undefined8 *)(param_2 + lVar1),PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar3,param_3,puVar2);
      _objc_release(puVar2);
      *(double *)(param_2 + _DAT_1127630d0) = param_1;
      goto LAB_10703dbdc;
    }
  }
  lVar1 = (long)_DAT_1127630dc;
LAB_10703dbdc:
  lVar4 = (long)_DAT_1127630d8;
  *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_2 + lVar4);
  dVar8 = (1.0 - param_1) * 0.5;
  dVar9 = 0.0075;
  if (dVar8 <= 0.0075) {
    dVar9 = dVar8;
  }
  lVar1 = param_2;
  func_0x00010bdf2fe0(param_1 + dVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + lVar6);
  *(long *)(param_2 + lVar6) = lVar1;
  _objc_release(uVar3);
  func_0x00010c20e920(param_1,*(undefined8 *)(param_2 + lVar6));
  dVar9 = *(double *)(param_2 + _DAT_1127630d4) - *(double *)(param_2 + lVar4);
  if (0.0 < dVar9 * *(double *)(param_2 + lVar7)) {
    func_0x00010bdcb080(param_1,0x3ff0000000000000,param_2,param_3,*(undefined8 *)(param_2 + lVar6))
    ;
    dVar9 = param_1;
  }
  _CACurrentMediaTime();
  *(double *)(param_2 + _DAT_1127630e4) = dVar9;
  *(undefined1 *)(param_2 + lVar5) = 0;
  return;
}



/* Entry: 10703dca4; end: 10703dd07; -[SCCameraTimerContinuousCaptureSpinnerViewV2 discardCurrentSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10703dca4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127630ec;
  lVar2 = *(long *)(param_1 + lVar3);
  if (lVar2 != 0) {
    func_0x00010c12c940(lVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + _DAT_1127630d8) = *(undefined8 *)(param_1 + _DAT_1127630dc);
  }
  return lVar2 != 0;
}



/* Entry: 10703dd08; end: 10703de17; -[SCCameraTimerContinuousCaptureSpinnerViewV2 discardLastCompletedSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703dd08(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = (long)_DAT_1127630c8;
  lVar1 = *(long *)(param_2 + lVar4);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c089820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c940();
    func_0x00010c12cd60(*(undefined8 *)(param_2 + lVar4));
    lVar1 = (long)_DAT_1127630cc;
    uVar3 = *(undefined8 *)(param_2 + lVar1);
    func_0x00010c089820(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    uVar5 = param_1;
    _objc_release(uVar3);
    func_0x00010c12cd60(*(undefined8 *)(param_2 + lVar1));
    *(undefined8 *)(param_2 + _DAT_1127630dc) = param_1;
    *(undefined8 *)(param_2 + _DAT_1127630d8) = param_1;
    lVar1 = *(long *)(param_2 + lVar4);
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      *(undefined8 *)(param_2 + _DAT_1127630d0) = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + lVar4);
      func_0x00010c089820(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25dc60();
      *(undefined8 *)(param_2 + _DAT_1127630d0) = uVar5;
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
  }
  *(undefined1 *)(param_2 + _DAT_1127630f0) = 1;
  return;
}



/* Entry: 10703de18; end: 10703df8f; -[SCCameraTimerContinuousCaptureSpinnerViewV2 reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703de18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = (long)_DAT_1127630ec;
  func_0x00010c12c940(*(undefined8 *)(param_1 + lVar6));
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = 0;
  _objc_release(uVar1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar7 = (long)_DAT_1127630c8;
  lVar5 = *(long *)(param_1 + lVar7);
  _objc_retain(lVar5);
  lVar6 = lVar5;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(lVar5);
        }
        func_0x00010c12c940(*(undefined8 *)(lStack_118 + lVar10 * 8));
        lVar10 = lVar10 + 1;
      } while (lVar6 != lVar10);
      lVar6 = lVar5;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(lVar5);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + lVar7));
  lVar6 = *(long *)(param_1 + _DAT_1127630cc);
  func_0x00010c12adc0();
  *(undefined8 *)(param_1 + _DAT_1127630d8) = 0;
  *(undefined8 *)(param_1 + _DAT_1127630dc) = 0;
  *(undefined8 *)(param_1 + _DAT_1127630e4) = 0;
  *(undefined8 *)(param_1 + _DAT_1127630e0) = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + _DAT_1127630f0) = 0;
  *(undefined1 *)(param_1 + _DAT_1127630e8) = 0;
  *(undefined8 *)(param_1 + _DAT_1127630d0) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  lVar5 = (long)_DAT_1127630c4;
  _objc_retain(puVar3);
  uVar1 = *(undefined8 *)(lVar6 + lVar5);
  *(undefined8 **)(lVar6 + lVar5) = puVar3;
  _objc_release(uVar1);
  puVar2 = (undefined1 *)puVar3;
  _objc_retainAutorelease(puVar3);
  func_0x00010bdc0fe0();
  func_0x00010c20e8e0(*(undefined8 *)(lVar6 + _DAT_1127630ec),param_2,puVar2);
  uVar1 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  lVar5 = *(long *)(lVar6 + _DAT_1127630c8);
  _objc_retain(lVar5);
  lVar6 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_240,auStack_1f8,0x10);
  if (lVar6 != 0) {
    lVar7 = *plStack_230;
    do {
      lVar9 = 0;
      do {
        if (*plStack_230 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        uVar8 = *(undefined8 *)(lStack_238 + lVar9 * 8);
        puVar2 = (undefined1 *)puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc0fe0();
        func_0x00010c20e8e0(uVar8,param_2,puVar2);
        lVar9 = lVar9 + 1;
      } while (lVar6 != lVar9);
      lVar6 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_240,auStack_1f8,0x10);
    } while (lVar6 != 0);
  }
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)((long)puVar3 + (long)_DAT_1127630bc);
  func_0x00010bdc1040(uVar8);
  func_0x00010c1d9820(puVar4,param_2,uVar8);
  func_0x00010c1bdd00(*(undefined8 *)((long)puVar3 + (long)_DAT_1127630c0),puVar4);
  func_0x00010c1bdb40(puVar4,param_2,*(undefined8 *)PTR__kCALineCapButt_110346d38);
  func_0x00010c19bc00(puVar4,param_2,0);
  uVar8 = *(undefined8 *)((long)puVar3 + (long)_DAT_1127630c4);
  func_0x00010bdc0fe0(uVar8);
  func_0x00010c20e8e0(puVar4,param_2,uVar8);
  func_0x00010c20e9a0(uVar1,puVar4);
  func_0x00010c20e920(uVar1,puVar4);
  func_0x00010c08c0e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10703df90; end: 10703e0f3; -[SCCameraTimerContinuousCaptureSpinnerViewV2 setSpinnerColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703df90(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar5 = (long)_DAT_1127630c4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = param_3;
  _objc_release(uVar1);
  lVar5 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bdc0fe0();
  func_0x00010c20e8e0(*(undefined8 *)(param_1 + _DAT_1127630ec),param_2,lVar5);
  uVar1 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar4 = *(long *)(param_1 + _DAT_1127630c8);
  _objc_retain(lVar4);
  lVar5 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar5 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar4);
        }
        uVar6 = *(undefined8 *)(lStack_118 + lVar8 * 8);
        lVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc0fe0();
        func_0x00010c20e8e0(uVar6,param_2,lVar2);
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
      lVar5 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar5 != 0);
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + _DAT_1127630bc);
  func_0x00010bdc1040(uVar6);
  func_0x00010c1d9820(puVar3,param_2,uVar6);
  func_0x00010c1bdd00(*(undefined8 *)(param_3 + _DAT_1127630c0),puVar3);
  func_0x00010c1bdb40(puVar3,param_2,*(undefined8 *)PTR__kCALineCapButt_110346d38);
  func_0x00010c19bc00(puVar3,param_2,0);
  uVar6 = *(undefined8 *)(param_3 + _DAT_1127630c4);
  func_0x00010bdc0fe0(uVar6);
  func_0x00010c20e8e0(puVar3,param_2,uVar6);
  func_0x00010c20e9a0(uVar1,puVar3);
  func_0x00010c20e920(uVar1,puVar3);
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10703e0f4; end: 10703e1e3; -[SCCameraTimerContinuousCaptureSpinnerViewV2 _createSegmentAt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703e0f4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + _DAT_1127630bc);
  func_0x00010bdc1040(uVar2);
  func_0x00010c1d9820(puVar1,param_3,uVar2);
  func_0x00010c1bdd00(*(undefined8 *)(param_2 + _DAT_1127630c0),puVar1);
  func_0x00010c1bdb40(puVar1,param_3,*(undefined8 *)PTR__kCALineCapButt_110346d38);
  func_0x00010c19bc00(puVar1,param_3,0);
  uVar2 = *(undefined8 *)(param_2 + _DAT_1127630c4);
  func_0x00010bdc0fe0(uVar2);
  func_0x00010c20e8e0(puVar1,param_3,uVar2);
  func_0x00010c20e9a0(param_1,puVar1);
  func_0x00010c20e920(param_1,puVar1);
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10703e1e4; end: 10703e32f; -[SCCameraTimerContinuousCaptureSpinnerViewV2 _animateSegment:from:to:duration:] */

void FUN_10703e1e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  _objc_retain(param_6);
  func_0x00010bf04040(puVar1,param_5,&PTR____CFConstantStringClassReference_110e1f3f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar1,param_5,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar1,param_5,puVar2);
  _objc_release(puVar2);
  func_0x00010c192d40(param_3,puVar1);
  func_0x00010c19bc40(puVar1,param_5,*(undefined8 *)PTR__kCAFillModeForwards_110346ce0);
  func_0x00010c1ea580(puVar1,param_5,0);
  puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_5,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionLinear_110346d88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar1,param_5,puVar2);
  _objc_release(puVar2);
  func_0x00010bef6c20(param_6,param_5,puVar1,&PTR____CFConstantStringClassReference_110e99438);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10703e330; end: 10703e41f; -[SCCameraTimerContinuousCaptureSpinnerViewV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703e330(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127630c4,0);
  _objc_storeStrong(param_1 + _DAT_1127630bc,0);
  _objc_storeStrong(param_1 + _DAT_1127630ec,0);
  _objc_storeStrong(param_1 + _DAT_1127630cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127630c8,0);
  return;
}



/* Entry: 10703e420; end: 10703e487; -[SCCameraTimerCoolRecordingRingView _createActionButtonIconView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703e420(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + _DAT_112763144) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x00010c182220();
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_1127630f8),param_2,puVar1);
  }
  else {
    puVar1 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10703e488; end: 10703e51f; -[SCCameraTimerCoolRecordingRingView setPauseButtonVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703e488(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763118;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,1);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar2));
  lVar2 = (long)_DAT_11276311c;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed2710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateActionButtonIcon_112592368);
  return;
}



/* Entry: 10703e520; end: 10703e7eb; -[SCCameraTimerCoolRecordingRingView _updateActionButtonIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703e520(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = (long)_DAT_112763120;
  if (*(long *)(param_1 + lVar4) != 0) {
    func_0x00010c1a7f60(*(long *)(param_1 + lVar4),param_2,1);
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar4));
  }
  lVar5 = (long)_DAT_112763124;
  if (*(long *)(param_1 + lVar5) != 0) {
    func_0x00010c1a7f60(*(long *)(param_1 + lVar5),param_2,1);
  }
  puVar1 = param_1;
  func_0x00010beb6020();
  if ((((ulong)puVar1 & 1) == 0) && (puVar1 = param_1, func_0x00010beb6040(), (int)puVar1 == 0)) {
    if (param_1[_DAT_112763100] == '\x01') {
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf414e0(0x3fe0000000000000);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_1127630f8),param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    if (param_1[_DAT_11276314c] == '\x01') {
      lVar4 = (long)_DAT_11276311c;
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0x3ff0000000000000);
      _objc_release(uVar3);
    }
    if (param_1[_DAT_11276310c] == '\x01') {
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = 0x217;
    }
    else {
      puVar1 = param_1;
      func_0x00010bdf6800(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = 0x1b9;
    }
    puVar2 = PTR_PTR_1126b0c40;
    func_0x00010bfe7aa0(0x4039000000000000,0x4039000000000000,PTR_PTR_1126b0c40,param_2,uVar3,puVar1
                       );
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276311c);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  else {
    puVar1 = *(undefined **)(param_1 + _DAT_11276311c);
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      func_0x00010c1a7f60(puVar1,param_2,1);
      func_0x00010c1677c0(0,puVar1);
    }
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_1127630f8;
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6),param_2,puVar2);
    _objc_release(puVar2);
    if ((param_1[_DAT_112763150] & 1) == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,0);
      func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar4));
      func_0x00010bf21300(*(undefined8 *)(param_1 + lVar6),param_2,*(undefined8 *)(param_1 + lVar4))
      ;
    }
    if (*(long *)(param_1 + lVar5) != 0) {
      func_0x00010be49200(param_1);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,0);
    }
  }
  func_0x00010c1cbe20(param_1);
  func_0x00010c08cdc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10703e7ec; end: 10703e9fb; -[SCCameraTimerCoolRecordingRingView _setupInnerCircle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703e7ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  dVar5 = *(double *)(param_1 + _DAT_112763134);
  dVar6 = dVar5 + -86.0 + 64.0;
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  if (86.0 <= dVar5) {
    dVar6 = 64.0;
  }
  func_0x00010bf20c00(param_1);
  _CGRectGetWidth();
  dVar7 = dVar5 * 0.5;
  func_0x00010bf20c00(param_1);
  _CGRectGetHeight();
  func_0x00010c1dee80(dVar7,dVar5 * 0.5,puVar1);
  func_0x00010c1739e0(0,0,dVar6,dVar6,puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c20e8e0(puVar1,param_2,puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(puVar1,param_2,puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(puVar1);
  func_0x00010bf199a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar1,param_2,puVar3);
  _objc_release(puVar2);
  func_0x00010c1d4bc0(0,puVar1);
  _CATransform3DMakeScale(&uStack_e0,0,0,0x3ff0000000000000);
  uStack_118 = uStack_98;
  uStack_120 = uStack_a0;
  uStack_108 = uStack_88;
  uStack_110 = uStack_90;
  uStack_f8 = uStack_78;
  uStack_100 = uStack_80;
  uStack_e8 = uStack_68;
  uStack_f0 = uStack_70;
  uStack_158 = uStack_d8;
  uStack_160 = uStack_e0;
  uStack_148 = uStack_c8;
  uStack_150 = uStack_d0;
  uStack_138 = uStack_b8;
  uStack_140 = uStack_c0;
  uStack_128 = uStack_a8;
  uStack_130 = uStack_b0;
  func_0x00010c219960(puVar1,param_2,&uStack_160);
  *(undefined1 *)(param_1 + _DAT_112763104) = 0;
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127630f8);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10703e9fc; end: 10703ec63; -[SCCameraTimerCoolRecordingRingView showInnerCircleAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703e9fc(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = (long)_DAT_112763108;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar1 != 0) && ((*(byte *)(param_1 + _DAT_112763104) & 1) == 0)) {
    *(undefined1 *)(param_1 + _DAT_112763104) = 1;
    func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
    func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718,param_2,1);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4bc0(0x3f800000);
    _objc_release(uVar2);
    if (param_3 == 0) {
      _CATransform3DMakeScale(&uStack_240,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000);
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uStack_f8 = uStack_1f8;
      uStack_100 = uStack_200;
      uStack_e8 = uStack_1e8;
      uStack_f0 = uStack_1f0;
      uStack_d8 = uStack_1d8;
      uStack_e0 = uStack_1e0;
      uStack_c8 = uStack_1c8;
      uStack_d0 = uStack_1d0;
      uStack_138 = uStack_238;
      uStack_140 = uStack_240;
      uStack_128 = uStack_228;
      uStack_130 = uStack_230;
      uStack_118 = uStack_218;
      uStack_120 = uStack_220;
      uStack_108 = uStack_208;
      uStack_110 = uStack_210;
      func_0x00010c219960();
      _objc_release(uVar2);
      func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
    }
    else {
      _CATransform3DMakeScale(&uStack_c0,0,0,0x3ff0000000000000);
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uStack_f8 = uStack_78;
      uStack_100 = uStack_80;
      uStack_e8 = uStack_68;
      uStack_f0 = uStack_70;
      uStack_d8 = uStack_58;
      uStack_e0 = uStack_60;
      uStack_c8 = uStack_48;
      uStack_d0 = uStack_50;
      uStack_138 = uStack_b8;
      uStack_140 = uStack_c0;
      uStack_128 = uStack_a8;
      uStack_130 = uStack_b0;
      uStack_118 = uStack_98;
      uStack_120 = uStack_a0;
      uStack_108 = uStack_88;
      uStack_110 = uStack_90;
      func_0x00010c219960();
      _objc_release(uVar2);
      func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
      puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
      func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                          &PTR____CFConstantStringClassReference_110dc8938);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a1180();
      func_0x00010c216920(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9ce8);
      func_0x00010c192d40(0x3fc70a3d70a3d70a,puVar3);
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6c20();
      _objc_release(uVar2);
      func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
      func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718,param_2,1);
      _CATransform3DMakeScale(&uStack_1c0,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000);
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uStack_f8 = uStack_178;
      uStack_100 = uStack_180;
      uStack_e8 = uStack_168;
      uStack_f0 = uStack_170;
      uStack_d8 = uStack_158;
      uStack_e0 = uStack_160;
      uStack_c8 = uStack_148;
      uStack_d0 = uStack_150;
      uStack_138 = uStack_1b8;
      uStack_140 = uStack_1c0;
      uStack_128 = uStack_1a8;
      uStack_130 = uStack_1b0;
      uStack_118 = uStack_198;
      uStack_120 = uStack_1a0;
      uStack_108 = uStack_188;
      uStack_110 = uStack_190;
      func_0x00010c219960();
      _objc_release(uVar2);
      func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
      _objc_release(puVar3);
    }
  }
  return;
}



/* Entry: 10703ec64; end: 10703ef6f; -[SCCameraTimerCoolRecordingRingView hideInnerCircleAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703ec64(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_112763108;
  puVar1 = *(undefined **)(param_1 + lVar7);
  uVar6 = param_3;
  func_0x00010c06f880();
  if ((int)puVar1 != 0) {
    puVar2 = *(undefined **)(param_1 + lVar7);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    _objc_release();
    if ((puVar2 != (undefined *)0x0) && (*(char *)(param_1 + _DAT_112763104) == '\x01')) {
      *(undefined1 *)(param_1 + _DAT_112763104) = 0;
      if (param_3 == 0) {
        func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
        func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
        uVar5 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d4bc0(0);
        _objc_release(uVar5);
        _CATransform3DMakeScale(&uStack_200,0,0,0x3ff0000000000000);
        uVar5 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uStack_138 = uStack_1b8;
        uStack_140 = uStack_1c0;
        uStack_128 = uStack_1a8;
        uStack_130 = uStack_1b0;
        uStack_118 = uStack_198;
        uStack_120 = uStack_1a0;
        uStack_108 = uStack_188;
        uStack_110 = uStack_190;
        uStack_178 = uStack_1f8;
        uStack_180 = uStack_200;
        uStack_168 = uStack_1e8;
        uStack_170 = uStack_1f0;
        uStack_158 = uStack_1d8;
        uStack_160 = uStack_1e0;
        uStack_148 = uStack_1c8;
        uStack_150 = uStack_1d0;
        uVar6 = (uint)&uStack_180;
        func_0x00010c219960();
        _objc_release(uVar5);
        puVar1 = PTR__OBJC_CLASS___CATransaction_1126b5718;
        func_0x00010bf42760();
      }
      else {
        puVar1 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
        _objc_opt_new();
        puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
        func_0x00010bf04040();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a1180();
        func_0x00010c216920(puVar2);
        puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
        func_0x00010bf04040();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a1180();
        func_0x00010c216920(puVar3);
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_78 = puVar2;
        puStack_70 = puVar3;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c168400(puVar1);
        _objc_release(puVar4);
        func_0x00010c192d40(0x3fc70a3d70a3d70a,puVar1);
        uVar5 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef6c20();
        _objc_release(uVar5);
        func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
        func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
        uVar5 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d4bc0(0);
        _objc_release(uVar5);
        _CATransform3DMakeScale(&uStack_f8,0,0,0x3ff0000000000000);
        uVar5 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uStack_138 = uStack_b0;
        uStack_140 = uStack_b8;
        uStack_128 = uStack_a0;
        uStack_130 = uStack_a8;
        uStack_118 = uStack_90;
        uStack_120 = uStack_98;
        uStack_108 = uStack_80;
        uStack_110 = uStack_88;
        uStack_178 = uStack_f0;
        uStack_180 = uStack_f8;
        uStack_168 = uStack_e0;
        uStack_170 = uStack_e8;
        uStack_158 = uStack_d0;
        uStack_160 = uStack_d8;
        uStack_148 = uStack_c0;
        uStack_150 = uStack_c8;
        uVar6 = (uint)&uStack_180;
        func_0x00010c219960();
        _objc_release(uVar5);
        func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if ((((byte)puVar1[_DAT_112763150] != uVar6) &&
      (puVar1[_DAT_112763150] = (char)uVar6, puVar1[_DAT_11276310c] == '\x01')) &&
     (puVar1[_DAT_11276314c] == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010bed2710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 10703ef70; end: 10703efb7; -[SCCameraTimerCoolRecordingRingView setLensCarouselActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703ef70(long param_1,undefined8 param_2,uint param_3)

{
  if (((*(byte *)(param_1 + _DAT_112763150) != param_3) &&
      (*(char *)(param_1 + _DAT_112763150) = (char)param_3,
      *(char *)(param_1 + _DAT_11276310c) == '\x01')) &&
     (*(char *)(param_1 + _DAT_11276314c) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010bed2710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateActionButtonIcon_112592368);
    return;
  }
  return;
}



/* Entry: 10703efb8; end: 10703f2df; -[SCCameraTimerCoolRecordingRingView startRecordingAnimationWithMaxRecordingLength:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703efb8(double param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  if ((*(byte *)(param_2 + _DAT_11276310c) & 1) == 0) {
    *(undefined1 *)(param_2 + _DAT_112763100) = 0;
    func_0x00010be8d180();
    dVar9 = *(double *)(param_2 + _DAT_112763134);
    lVar8 = (long)_DAT_1127630f8;
    uVar3 = *(undefined8 *)(param_2 + lVar8);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(dVar9 * 0.5);
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___UISpringTimingParameters_1126b6230;
    _objc_alloc(PTR__OBJC_CLASS___UISpringTimingParameters_1126b6230);
    func_0x00010c008200(0x3fd999999999999a,0x4020000000000000,0x4020000000000000);
    puVar5 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
    _objc_alloc(PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0);
    func_0x00010c00eb20(0x3fd083126e978d50);
    lVar7 = param_2;
    func_0x00010beb5e20();
    if ((int)lVar7 == 0) {
      lVar7 = (long)_DAT_1127630fc;
      func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar7));
      iVar2 = (int)*(undefined8 *)(param_2 + lVar7);
      func_0x00010c06c0e0();
      if (iVar2 != 0) {
        func_0x00010c2558c0(*(undefined8 *)(param_2 + lVar7));
      }
      lVar7 = (long)_DAT_112763138;
      if (*(char *)(param_2 + lVar7) == '\x01') {
        _objc_initWeak(auStack_78,param_2);
        puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0xc2000000;
        uStack_b8 = 0x10703f314;
        puStack_b0 = &UNK_1108434b0;
        _objc_copyWeak(auStack_a8,auStack_78);
        func_0x00010bf03400(0x3fd083126e978d50,puVar1);
        _objc_copyWeak(auStack_d0,auStack_78);
        func_0x00010bef6cc0(puVar5);
        _objc_destroyWeak(auStack_d0);
        _objc_destroyWeak(auStack_a8);
        _objc_destroyWeak(auStack_78);
      }
      else {
        lVar6 = param_2;
        func_0x00010bdf6800(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440(*(undefined8 *)(param_2 + lVar8));
        _objc_release(lVar6);
        func_0x00010be68aa0(param_2);
      }
      lVar8 = (long)_DAT_1127630f4;
      func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_2 + lVar8));
      func_0x00010c250bc0(1.0 / param_1,*(undefined8 *)(param_2 + lVar8));
      if (*(char *)(param_2 + lVar7) == '\x01') {
        func_0x00010c24dc40(puVar5);
      }
    }
    else {
      _objc_initWeak(auStack_78,param_2);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_10703f2e0;
      puStack_88 = &UNK_1108434b0;
      _objc_copyWeak(auStack_80,auStack_78);
      func_0x00010bef6cc0(puVar5);
      lVar7 = (long)_DAT_1127630fc;
      func_0x00010c24dbc0(*(undefined8 *)(param_2 + lVar7));
      func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar7));
      func_0x00010c24dc40(puVar5);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  return;
}



/* Entry: 10703f2e0; end: 10703f3a3;  */

void FUN_10703f2e0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be688c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10703f3a4; end: 10703f753; -[SCCameraTimerCoolRecordingRingView startHandsFreeAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703f3a4(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  *(undefined1 *)(param_1 + (long)_DAT_112763100) = 1;
  if (*(char *)(param_1 + (long)_DAT_112763104) == '\x01') {
    func_0x00010bfe2100(param_1,param_2,1);
  }
  uVar3 = param_1;
  func_0x00010beb5e20();
  if (((uVar3 & 1) == 0) && ((*(byte *)(param_1 + (long)_DAT_112763114) & 1) == 0)) {
    *(undefined1 *)(param_1 + (long)_DAT_112763114) = 1;
    lVar13 = (long)_DAT_1127630f8;
    uVar4 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12aaa0();
    _objc_release(uVar4);
    lVar11 = (long)_DAT_1127630f4;
    uVar4 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12aaa0();
    _objc_release(uVar4);
    lVar12 = (long)_DAT_112763118;
    lVar5 = *(long *)(param_1 + lVar12);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      uVar4 = *(undefined8 *)(param_1 + lVar12);
      func_0x00010c08c0e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12aaa0();
      _objc_release(uVar4);
    }
    lVar5 = (long)_DAT_11276311c;
    iVar2 = (int)*(undefined8 *)(param_1 + lVar5);
    func_0x00010c06f880();
    if (iVar2 != 0) {
      lVar6 = *(long *)(param_1 + lVar5);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar6;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar6);
      if (lVar10 != 0) {
        uVar7 = *(undefined8 *)(param_1 + lVar5);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar7;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12aaa0();
        _objc_release(uVar4);
        _objc_release(uVar7);
      }
    }
    puVar1 = PTR__CGAffineTransformIdentity_110347008;
    if (*(char *)(param_1 + (long)_DAT_112763144) == '\x01') {
      lVar10 = (long)_DAT_1127630fc;
      if (*(long *)(param_1 + lVar10) != 0) {
        func_0x00010c2558c0();
        func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar10),param_2,1);
      }
      if (*(long *)(param_1 + (long)_DAT_112763154) != 0) {
        uStack_98 = *(undefined8 *)(puVar1 + 8);
        uStack_a0 = *(undefined8 *)puVar1;
        uStack_88 = *(undefined8 *)(puVar1 + 0x18);
        uStack_90 = *(undefined8 *)(puVar1 + 0x10);
        uStack_78 = *(undefined8 *)(puVar1 + 0x28);
        uStack_80 = *(undefined8 *)(puVar1 + 0x20);
        func_0x00010c219960(*(undefined8 *)(param_1 + lVar13),param_2,&uStack_a0);
      }
      lVar6 = (long)_DAT_112763120;
      lVar10 = *(long *)(param_1 + lVar6);
      if (lVar10 != 0) {
        func_0x00010c1a7f60(lVar10,param_2,1);
        func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar6));
      }
      if (*(long *)(param_1 + (long)_DAT_112763124) != 0) {
        func_0x00010c1a7f60(*(long *)(param_1 + (long)_DAT_112763124),param_2,1);
      }
    }
    func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
    func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718,param_2,1);
    func_0x00010be8d180(param_1);
    dVar14 = *(double *)(param_1 + (long)_DAT_112763134);
    uVar4 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(dVar14 * 0.5);
    _objc_release(uVar4);
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf414e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar13),param_2,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar8);
    uStack_98 = *(undefined8 *)(puVar1 + 8);
    uStack_a0 = *(undefined8 *)puVar1;
    uStack_88 = *(undefined8 *)(puVar1 + 0x18);
    uStack_90 = *(undefined8 *)(puVar1 + 0x10);
    uStack_78 = *(undefined8 *)(puVar1 + 0x28);
    uStack_80 = *(undefined8 *)(puVar1 + 0x20);
    func_0x00010c219960(param_1,param_2,&uStack_a0);
    if ((*(byte *)(param_1 + (long)_DAT_11276314c) & 1) == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar12),param_2,0);
      func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar12));
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0x3ff0000000000000);
      _objc_release(uVar4);
    }
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar11));
    func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
    func_0x00010c12e400(*(undefined8 *)(param_1 + lVar11));
    *(undefined1 *)(param_1 + (long)_DAT_112763158) = 0;
  }
  return;
}



/* Entry: 10703f754; end: 10703f7bb; -[SCCameraTimerCoolRecordingRingView setCaptureColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703f754(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11276315c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  if (*(long *)(param_1 + _DAT_112763118) != 0) {
    func_0x00010c16e440(*(long *)(param_1 + _DAT_112763118),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10703f7bc; end: 10703f867; -[SCCameraTimerCoolRecordingRingView setCustomCaptureButtonData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703f7bc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112763154;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(long *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b2720;
    func_0x00010c14d040(PTR_PTR_1126b2720,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf03660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10703f868; end: 10703f8d7; -[SCCameraTimerCoolRecordingRingView setRingStyle:] */

/* WARNING: Possible PIC construction at 0x00010703f8b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010703f8b4) */

void FUN_10703f868(long param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  
  piVar1 = (int *)&DAT_112763128;
  if (param_3 == 0) {
    piVar1 = (int *)&DAT_112763160;
  }
  else {
    if (param_3 != 1) {
      return;
    }
    func_0x00010beacd80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + *piVar1),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 10703f8d8; end: 10703fb6b; -[SCCameraTimerCoolRecordingRingView animatedImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703f8d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_1127630fc;
  lVar7 = *(long *)(param_1 + lVar8);
  if (lVar7 == 0) {
    puVar1 = PTR_PTR_1126bb2a0;
    _objc_alloc_init();
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar1;
    _objc_release(uVar6);
    func_0x00010c16ce00(*(undefined8 *)(param_1 + lVar8),param_2,0);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar8),param_2,1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar8));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar8),param_2,0);
    puStack_b8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    uStack_90 = uVar6;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lStack_98 = lVar7;
    func_0x00010bf493a0(uVar6,param_2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar8);
    uStack_a0 = uVar6;
    uStack_88 = uVar6;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    uStack_a8 = uVar2;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_b0 = lVar7;
    func_0x00010bf493a0(uVar2,param_2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    uStack_80 = uVar2;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c2a5060(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf493a0(uVar3,param_2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    uStack_78 = uVar6;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bfe0660(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010bf493a0(uVar4,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_b8,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(uVar9);
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(lVar7);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lStack_b0);
    _objc_release(uStack_a8);
    _objc_release(uStack_a0);
    _objc_release(lStack_98);
    _objc_release(uStack_90);
    lVar7 = *(long *)(param_1 + lVar8);
    unaff_x19 = param_1;
  }
  lVar8 = lVar7;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_10703fb6c;
  uVar2 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar6 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar10 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar9 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_140 = uVar6;
  uStack_138 = uVar2;
  uStack_130 = uVar4;
  uStack_128 = uVar10;
  uStack_120 = uVar9;
  uStack_118 = uVar3;
  lStack_e0 = lVar7;
  lStack_d8 = unaff_x19;
  puStack_d0 = &stack0xfffffffffffffff0;
  _CGAffineTransformScale(&uStack_110,0,0,&uStack_140);
  uStack_138 = uStack_108;
  uStack_140 = uStack_110;
  uStack_128 = uStack_f8;
  uStack_130 = uStack_100;
  uStack_118 = uStack_e8;
  uStack_120 = uStack_f0;
  func_0x00010c219960(*(undefined8 *)(lVar8 + _DAT_1127630f8),param_2,&uStack_140);
  uStack_140 = uVar6;
  uStack_138 = uVar2;
  uStack_130 = uVar4;
  uStack_128 = uVar10;
  uStack_120 = uVar9;
  uStack_118 = uVar3;
  _CGAffineTransformScale(&uStack_170,0x3ffccccccccccccd,0x3ffccccccccccccd,&uStack_140);
  uStack_138 = uStack_168;
  uStack_140 = uStack_170;
  uStack_128 = uStack_158;
  uStack_130 = uStack_160;
  uStack_118 = uStack_148;
  uStack_120 = uStack_150;
  func_0x00010c219960(*(undefined8 *)(lVar8 + _DAT_1127630fc),param_2,&uStack_140);
  return;
}



/* Entry: 10703fb6c; end: 10703fc33; -[SCCameraTimerCoolRecordingRingView _onCustomCaptureButtonAnimationStarted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703fb6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar1 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar2 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_80 = uVar1;
  uStack_78 = uVar3;
  uStack_70 = uVar5;
  uStack_68 = uVar6;
  uStack_60 = uVar2;
  uStack_58 = uVar4;
  _CGAffineTransformScale(&uStack_50,0,0,&uStack_80);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + _DAT_1127630f8),param_2,&uStack_80);
  uStack_80 = uVar1;
  uStack_78 = uVar3;
  uStack_70 = uVar5;
  uStack_68 = uVar6;
  uStack_60 = uVar2;
  uStack_58 = uVar4;
  _CGAffineTransformScale(&uStack_b0,0x3ffccccccccccccd,0x3ffccccccccccccd,&uStack_80);
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  func_0x00010c219960(*(undefined8 *)(param_1 + _DAT_1127630fc),param_2,&uStack_80);
  return;
}



/* Entry: 10703fc34; end: 10703fcb3; -[SCCameraTimerCoolRecordingRingView _onDefaultCaptureButtonAnimationStarted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703fc34(long param_1,undefined8 param_2)

{
  double dVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  dVar1 = 95.0 / *(double *)(param_1 + _DAT_112763134);
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_80 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformScale(&uStack_50,dVar1,dVar1,&uStack_80);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(param_1,param_2,&uStack_80);
  return;
}



/* Entry: 10703fcb4; end: 10703fcf7; -[SCCameraTimerCoolRecordingRingView _shouldShowCustomCaptureButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10703fcb4(long param_1)

{
  if ((*(char *)(param_1 + _DAT_112763100) == '\x01') &&
     ((*(byte *)(param_1 + _DAT_112763144) & 1) != 0)) {
    return false;
  }
  return *(long *)(param_1 + _DAT_112763154) != 0;
}



/* Entry: 10703fcf8; end: 10703fe1f; -[SCCameraTimerCoolRecordingRingView _setupGradientRingIfNeededWithStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703fcf8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = (long)_DAT_112763160;
  if (*(long *)(param_1 + lVar6) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  _objc_opt_new();
  lVar7 = (long)_DAT_1127630f8;
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c19f0e0(puVar1);
  if (param_3 != 0) {
    if (param_3 == 1) {
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                          &PTR____CFConstantStringClassReference_110e99458);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      _objc_retainAutorelease();
      func_0x00010bdc1020();
      func_0x00010c182c80(puVar1,param_2,puVar3);
      _objc_release(puVar2);
    }
    lVar4 = param_1;
    func_0x00010bdf2a20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00(puVar1,param_2,lVar4);
    _objc_release(lVar4);
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(uVar5);
    _objc_retain(puVar1);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10703fe20; end: 10703fe57; -[SCCameraTimerCoolRecordingRingView _removeRingSublayers] */

/* WARNING: Possible PIC construction at 0x00010703fe40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010703fe44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703fe20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112763160),PTR_s_removeFromSuperlayer_112628c70);
  return;
}



/* Entry: 10703fe58; end: 10703febb; -[SCCameraTimerCoolRecordingRingView enterHandsFreePreviewAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703fe58(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010beb5e20();
  if ((((uVar1 & 1) == 0) && ((*(byte *)(param_1 + (long)_DAT_112763158) & 1) == 0)) &&
     ((*(byte *)(param_1 + (long)_DAT_112763114) & 1) == 0)) {
    *(undefined1 *)(param_1 + (long)_DAT_112763158) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdce270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__applyHandsFreeLookAnimated__112551238,param_3);
    return;
  }
  return;
}



/* Entry: 10703febc; end: 10703feeb; -[SCCameraTimerCoolRecordingRingView exitHandsFreePreviewAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703febc(long param_1)

{
  if ((*(char *)(param_1 + _DAT_112763158) == '\x01') &&
     ((*(byte *)(param_1 + _DAT_112763114) & 1) == 0)) {
    *(undefined1 *)(param_1 + _DAT_112763158) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be973f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__revertToRecordingLookAnimated__112583698);
    return;
  }
  return;
}



/* Entry: 10703feec; end: 10703ff8f; -[SCCameraTimerCoolRecordingRingView _applyHandsFreeLookAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703feec(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  ppuVar1 = &puStack_50;
  uStack_28 = *(undefined8 *)(param_1 + _DAT_112763134);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10703ff90;
  puStack_38 = &UNK_110848c48;
  lStack_30 = param_1;
  _objc_retainBlock();
  if (param_3 == 0) {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  else {
    func_0x00010bf03400(0x3fd083126e978d50,PTR__OBJC_CLASS___UIView_1126aec20,param_2,ppuVar1);
  }
  _objc_release(ppuVar1);
  return;
}



/* Entry: 10703ff90; end: 107040127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703ff90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010be8d180(*(undefined8 *)(param_1 + 0x20));
  dVar6 = *(double *)(param_1 + 0x28);
  lVar5 = (long)_DAT_1127630f8;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar6 * 0.5);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127630f4));
  lVar5 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar5 + _DAT_11276314c) & 1) == 0) {
    lVar4 = (long)_DAT_112763118;
    func_0x00010c1a7f60(*(undefined8 *)(lVar5 + lVar4),param_2,0);
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4));
  }
  else {
    lVar4 = (long)_DAT_11276311c;
    uVar1 = *(undefined8 *)(lVar5 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(uVar1);
  }
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_80 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 107040128; end: 1070401db; -[SCCameraTimerCoolRecordingRingView _revertToRecordingLookAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107040128(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + _DAT_11276310c) & 1) == 0) {
    ppuVar1 = &puStack_50;
    uStack_28 = *(undefined8 *)(param_1 + _DAT_112763134);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1070401dc;
    puStack_38 = &UNK_110848c48;
    lStack_30 = param_1;
    _objc_retainBlock();
    if (param_3 == 0) {
      (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
    }
    else {
      func_0x00010bf03400(0x3fd083126e978d50,PTR__OBJC_CLASS___UIView_1126aec20,param_2,ppuVar1);
    }
    _objc_release(ppuVar1);
  }
  return;
}



/* Entry: 1070401dc; end: 10704030f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070401dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  dVar3 = *(double *)(param_1 + 0x28);
  lVar2 = (long)_DAT_1127630f8;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar3 * 0.5);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdf6800(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2),param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010c1677c0(0x3ff0000000000000,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127630f4));
  lVar2 = (long)_DAT_112763118;
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2),param_2,1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276311c);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  func_0x00010c1a7f60(uVar1,param_2,1);
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_70 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_70);
  _objc_release(uVar1);
  return;
}



/* Entry: 107040310; end: 1070403fb; -[SCCameraTimerCoolRecordingRingView enterContinuousCapturePausedAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107040310(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  *(undefined1 *)(param_1 + _DAT_11276310c) = 1;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = *(undefined8 *)(param_1 + _DAT_112763134);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1070403fc;
  puStack_58 = &UNK_110848c48;
  ppuVar2 = &puStack_70;
  lStack_50 = param_1;
  _objc_retainBlock();
  if (param_3 == 0) {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  else {
    puStack_98 = puVar1;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1070405f8;
    puStack_80 = &UNK_110841f20;
    lStack_78 = param_1;
    func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,ppuVar2,
                        &puStack_98);
  }
  _objc_release(ppuVar2);
  return;
}



/* Entry: 1070403fc; end: 1070405f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070403fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112763128),param_2,1);
  dVar6 = *(double *)(param_1 + 0x28);
  lVar5 = (long)_DAT_1127630f8;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar6 * 0.5);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_80 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  lVar5 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar5 + _DAT_11276314c) & 1) == 0) {
    _CGAffineTransformMakeScale(&uStack_b0,0x3ff599999999999a,0x3ff599999999999a);
    lVar4 = (long)_DAT_112763118;
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    uStack_68 = uStack_98;
    uStack_70 = uStack_a0;
    uStack_58 = uStack_88;
    uStack_60 = uStack_90;
    func_0x00010c219960(*(undefined8 *)(lVar5 + lVar4),param_2,&uStack_80);
    func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4),param_2,0);
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4),param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    lVar4 = (long)_DAT_11276311c;
    uVar1 = *(undefined8 *)(lVar5 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(uVar1);
    func_0x00010bed2700(*(undefined8 *)(param_1 + 0x20));
  }
  return;
}



/* Entry: 1070405f8; end: 10704062b;  */

/* WARNING: Possible PIC construction at 0x00010704060c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107040610) */

void FUN_1070405f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setNeedsDisplay_112650978);
  return;
}



/* Entry: 10704062c; end: 1070406cb; -[SCCameraTimerCoolRecordingRingView exitContinuousCapturePausedAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704062c(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  *(undefined1 *)(param_1 + _DAT_11276310c) = 0;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1070406cc;
  puStack_30 = &UNK_110842e18;
  ppuVar1 = &puStack_48;
  lStack_28 = param_1;
  _objc_retainBlock();
  if (param_3 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,ppuVar1);
  }
  _objc_release(ppuVar1);
  return;
}



/* Entry: 1070406cc; end: 107040787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070406cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__CGAffineTransformIdentity_110347008;
  lVar2 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar2 + _DAT_11276314c) & 1) == 0) {
    func_0x00010bdf6800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = (long)_DAT_112763118;
    func_0x00010c16e440(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3),param_2,lVar2);
    _objc_release(lVar2);
    uStack_58 = *(undefined8 *)(puVar1 + 8);
    uStack_60 = *(undefined8 *)puVar1;
    uStack_48 = *(undefined8 *)(puVar1 + 0x18);
    uStack_50 = *(undefined8 *)(puVar1 + 0x10);
    uStack_38 = *(undefined8 *)(puVar1 + 0x28);
    uStack_40 = *(undefined8 *)(puVar1 + 0x20);
    func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3),param_2,&uStack_60);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  uStack_58 = *(undefined8 *)(puVar1 + 8);
  uStack_60 = *(undefined8 *)puVar1;
  uStack_48 = *(undefined8 *)(puVar1 + 0x18);
  uStack_50 = *(undefined8 *)(puVar1 + 0x10);
  uStack_38 = *(undefined8 *)(puVar1 + 0x28);
  uStack_40 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010c219960(lVar2,param_2,&uStack_60);
  func_0x00010bed2700(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107040788; end: 107040797; -[SCCameraTimerCoolRecordingRingView startContinuousCaptureSpinnerWithMaxDuration:initialElapsedTime:speedMultiplier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107040788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c251b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112763110),
             PTR_s_startWithMaxDuration_initialElap_112672100);
  return;
}



/* Entry: 107040798; end: 1070407a7; -[SCCameraTimerCoolRecordingRingView pauseContinuousCaptureSpinner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107040798(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112763110),PTR_s_pause_11261b0e8);
  return;
}



/* Entry: 1070407a8; end: 1070407b7; -[SCCameraTimerCoolRecordingRingView resumeContinuousCaptureSpinnerWithSpeedMultiplier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070407a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112763110),PTR_s_resumeWithSpeedMultiplier__11262d110);
  return;
}



/* Entry: 1070407b8; end: 1070407c7; -[SCCameraTimerCoolRecordingRingView resetContinuousCaptureSpinner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070407b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112763110),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 1070407c8; end: 1070407d7; -[SCCameraTimerCoolRecordingRingView discardCurrentContinuousCaptureSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070407c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf80ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112763110),PTR_s_discardCurrentSegment_1125bdda0);
  return;
}



/* Entry: 1070407d8; end: 107040817; -[SCCameraTimerCoolRecordingRingView discardLastCompletedContinuousCaptureSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070407d8(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763110;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x00010bf80fe0();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf81050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_discardLastCompletedSegment_1125bddb8);
  return;
}



/* Entry: 107040818; end: 1070408ff; -[SCCameraTimerCoolRecordingRingView showContinuousCaptureSpinnerAndPauseButton:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107040818(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  if (param_4 == 0) {
    uVar1 = 0x3ff0000000000000;
    if (param_3 == 0) {
      uVar1 = 0;
    }
    uVar2 = 0;
    if (param_3 == 0) {
      uVar2 = 0x3ff0000000000000;
    }
    func_0x00010c1677c0(uVar1,*(undefined8 *)(param_1 + _DAT_112763110));
    func_0x00010c1677c0(uVar2,*(undefined8 *)(param_1 + _DAT_1127630f4));
  }
  else {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107040900;
    puStack_58 = &UNK_110845ce0;
    lStack_50 = param_1;
    uStack_48 = (char)param_3;
    func_0x00010bf03440(0x3fd3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0,
                        &puStack_70,0);
  }
  *(char *)(param_1 + _DAT_11276314c) = (char)param_3;
  if (param_3 != 0) {
    func_0x00010c1d9900(param_1);
  }
  return;
}



/* Entry: 107040900; end: 107040967;  */

/* WARNING: Possible PIC construction at 0x00010704093c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107040940) */
/* WARNING: Removing unreachable block (ram,0x000107040948) */
/* WARNING: Removing unreachable block (ram,0x00010704094c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107040900(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x3ff0000000000000;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112763110),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107040968; end: 107040a97; -[SCCameraTimerCoolRecordingRingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107040968(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112763124,0);
  _objc_storeStrong(param_1 + _DAT_112763108,0);
  _objc_storeStrong(param_1 + _DAT_112763140,0);
  _objc_storeStrong(param_1 + _DAT_112763120,0);
  _objc_storeStrong(param_1 + _DAT_11276311c,0);
  _objc_storeStrong(param_1 + _DAT_112763118,0);
  _objc_storeStrong(param_1 + _DAT_11276313c,0);
  _objc_storeStrong(param_1 + _DAT_112763160,0);
  _objc_storeStrong(param_1 + _DAT_112763128,0);
  _objc_storeStrong(param_1 + _DAT_1127630fc,0);
  _objc_storeStrong(param_1 + _DAT_112763154,0);
  _objc_storeStrong(param_1 + _DAT_1127630f8,0);
  _objc_storeStrong(param_1 + _DAT_112763110,0);
  _objc_storeStrong(param_1 + _DAT_1127630f4,0);
  _objc_storeStrong(param_1 + _DAT_11276315c,0);
  _objc_storeStrong(param_1 + _DAT_112763130,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276312c,0);
  return;
}



/* Entry: 107040a98; end: 107040b6f; -[SCCameraTimerDirectorModeCameraRingView _setRingsToInitialScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107040a98(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = (long)_DAT_112763168;
  uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + _DAT_112763164));
  func_0x00010c1d4bc0(uVar3,*(undefined8 *)(param_1 + lVar1));
  lVar2 = (long)_DAT_11276316c;
  func_0x00010c1d4bc0(0x3f800000,*(undefined8 *)(param_1 + lVar2));
  _CATransform3DMakeScale(&uStack_b0,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000);
  uStack_e8 = uStack_68;
  uStack_f0 = uStack_70;
  uStack_d8 = uStack_58;
  uStack_e0 = uStack_60;
  uStack_c8 = uStack_48;
  uStack_d0 = uStack_50;
  uStack_b8 = uStack_38;
  uStack_c0 = uStack_40;
  uStack_128 = uStack_a8;
  uStack_130 = uStack_b0;
  uStack_118 = uStack_98;
  uStack_120 = uStack_a0;
  uStack_108 = uStack_88;
  uStack_110 = uStack_90;
  uStack_f8 = uStack_78;
  uStack_100 = uStack_80;
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar1),param_2,&uStack_130);
  _CATransform3DMakeScale(&uStack_1b0,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000);
  uStack_e8 = uStack_168;
  uStack_f0 = uStack_170;
  uStack_d8 = uStack_158;
  uStack_e0 = uStack_160;
  uStack_c8 = uStack_148;
  uStack_d0 = uStack_150;
  uStack_b8 = uStack_138;
  uStack_c0 = uStack_140;
  uStack_128 = uStack_1a8;
  uStack_130 = uStack_1b0;
  uStack_118 = uStack_198;
  uStack_120 = uStack_1a0;
  uStack_108 = uStack_188;
  uStack_110 = uStack_190;
  uStack_f8 = uStack_178;
  uStack_100 = uStack_180;
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_130);
  return;
}



/* Entry: 107040b70; end: 107040f8f; -[SCCameraTimerDirectorModeCameraRingView initWithFrame:styleProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107040b70(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  
  puVar1 = &uStack_b0;
  _objc_retain(param_7);
  puStack_a8 = PTR_PTR_1126f85a0;
  uStack_b0 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_b0,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf2b280(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11276316c;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar5);
    dVar7 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    dVar8 = param_1;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    dVar9 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    dVar10 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    func_0x00010c1dee80(dVar9 * 0.5,dVar10 * 0.5,*(undefined8 *)((long)puVar1 + lVar6));
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c1739e0(0,0,dVar7,dVar8,uVar5);
    func_0x0001007f73bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar3);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bdd5fe0(0,0,dVar7,dVar8,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x00010c1d9820(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar4);
    func_0x00010bf2a680(uVar2);
    func_0x00010c1bdd00(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1bdb40(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c20e9a0(0,*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c20e920(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar6));
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112763168;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar5);
    dVar9 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    func_0x00010c1dee80(dVar9 * 0.5,param_1 * 0.5,*(undefined8 *)((long)puVar1 + lVar6));
    dVar9 = 0.0;
    _CGRectGetWidth(0,0,dVar7,dVar8);
    dVar10 = 0.0;
    _CGRectGetHeight(0,0,dVar7,dVar8);
    func_0x00010c1739e0(0,0,dVar9 * 0.818,dVar10 * 0.818,*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf20c00(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010bf199a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x00010c1d9820(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar3);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar4);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112763164) = 1;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 107040f90; end: 10704112f; -[SCCameraTimerDirectorModeCameraRingView startRecordingAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107040f90(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_158 [48];
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined1 auStack_88 [48];
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bfe20e0();
  puVar1 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  _objc_opt_new();
  _CGAffineTransformMakeScale(auStack_88,0x3ff3333333333333,0x3ff3333333333333);
  lVar6 = (long)_DAT_11276316c;
  func_0x00010c166440(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c1d4bc0(0,*(undefined8 *)(param_1 + lVar6));
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar2);
  puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_58 = puVar2;
  puStack_50 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar1);
  _objc_release(puVar4);
  func_0x00010c192d40(0x3fc70a3d70a3d70a,puVar1);
  func_0x00010bef6c20(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  _objc_opt_new();
  _CGAffineTransformMakeScale(auStack_158,0,0);
  lVar6 = (long)_DAT_112763168;
  func_0x00010c166440(*(undefined8 *)(puVar1 + lVar6));
  puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar3);
  puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar4);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_128 = puVar3;
  puStack_120 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar2);
  _objc_release(puVar5);
  func_0x00010c192d40(0x3fc70a3d70a3d70a,puVar2);
  func_0x00010bef6c20(*(undefined8 *)(puVar1 + lVar6));
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(puVar1);
  func_0x00010c12aaa0(*(undefined8 *)(puVar2 + _DAT_112763168));
  func_0x00010c12aaa0(*(undefined8 *)(puVar2 + _DAT_11276316c));
                    /* WARNING: Could not recover jumptable at 0x00010bea6dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s__setRingsToInitialScale_112587518);
  return;
}



/* Entry: 107041130; end: 1070412c3; -[SCCameraTimerDirectorModeCameraRingView hideInnerCircleAnimated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107041130(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_98 [48];
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  _objc_opt_new();
  _CGAffineTransformMakeScale(auStack_98,0,0);
  lVar5 = (long)_DAT_112763168;
  func_0x00010c166440(*(undefined8 *)(param_1 + lVar5));
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar2);
  puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar2;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar1);
  _objc_release(puVar4);
  func_0x00010c192d40(0x3fc70a3d70a3d70a,puVar1);
  func_0x00010bef6c20(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(puVar2);
  func_0x00010c12aaa0(*(undefined8 *)(puVar1 + _DAT_112763168));
  func_0x00010c12aaa0(*(undefined8 *)(puVar1 + _DAT_11276316c));
                    /* WARNING: Could not recover jumptable at 0x00010bea6dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s__setRingsToInitialScale_112587518);
  return;
}



/* Entry: 1070412c4; end: 10704131f; -[SCCameraTimerDirectorModeCameraRingView resetToInitialState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070412c4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(lVar1);
  func_0x00010c12aaa0(*(undefined8 *)(param_1 + _DAT_112763168));
  func_0x00010c12aaa0(*(undefined8 *)(param_1 + _DAT_11276316c));
                    /* WARNING: Could not recover jumptable at 0x00010bea6dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setRingsToInitialScale_112587518);
  return;
}



/* Entry: 107041320; end: 107041347; -[SCCameraTimerDirectorModeCameraRingView setInnerCircleVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107041320(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112763164) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112763164) = (char)param_3;
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1399b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetToInitialState_11262c088);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe20f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hideInnerCircleAnimated_1125d61f8);
  return;
}



/* Entry: 107041348; end: 10704135b; -[SCCameraTimerDirectorModeCameraRingView prepareTransitionIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107041348(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d4bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + _DAT_112763168),PTR_s_setOpacity__112652d18);
  return;
}



/* Entry: 10704135c; end: 1070413f3; -[SCCameraTimerDirectorModeCameraRingView begineTransitionIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704135c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763168;
  func_0x00010c1d4bc0(0x3f800000,*(undefined8 *)(param_1 + lVar2));
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                      &PTR____CFConstantStringClassReference_110dc8938);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9d00);
  func_0x00010c192d40(0x3fc70a3d70a3d70a,puVar1);
  func_0x00010bef6c20(*(undefined8 *)(param_1 + lVar2),param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070413f4; end: 1070413f7; -[SCCameraTimerDirectorModeCameraRingView prepareTransitionOut] */

void FUN_1070413f4(void)

{
  return;
}



/* Entry: 1070413f8; end: 10704148f; -[SCCameraTimerDirectorModeCameraRingView begineTransitionOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070413f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763168;
  func_0x00010c1d4bc0(0,*(undefined8 *)(param_1 + lVar2));
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                      &PTR____CFConstantStringClassReference_110dc8938);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9d18);
  func_0x00010c192d40(0x3fc70a3d70a3d70a,puVar1);
  func_0x00010bef6c20(*(undefined8 *)(param_1 + lVar2),param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107041490; end: 107041563; -[SCCameraTimerDirectorModeCameraRingView _buildCutoutPathWithRect:] */

void FUN_107041490(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199a0(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar4 = (param_1 + -76.0) * 0.5;
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199a0(dVar4,dVar4,0x4053000000000000,0x4053000000000000,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf19940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bf06f40(puVar1,param_6,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


