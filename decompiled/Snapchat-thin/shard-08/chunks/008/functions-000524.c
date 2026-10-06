/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1065d6ce4; end: 1065d6ceb; -[SCSnapKitCreativeKitDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_1065d6ce4(void)

{
  return 1;
}



/* Entry: 1065d6cec; end: 1065d6cef; -[SCSnapKitCreativeKitDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_1065d6cec(void)

{
  return;
}



/* Entry: 1065d6cf0; end: 1065d6d6f; -[SCSnapKitCreativeKitDeepLinkProcessor .cxx_destruct] */

void FUN_1065d6cf0(long param_1)

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



/* Entry: 1065d6d70; end: 1065d6f37; -[SCSnapKitCreativeKitLiteDeepLinkProcessor initWithNavigationDelegate:userNetworkServices:safeBrowsingAPI:userPreferences:circumstanceEngine:blizzardLogger:metricsReporter:graphene:userAdIdProvider:] */

undefined1 *
FUN_1065d6d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f1f88;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
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



/* Entry: 1065d6f38; end: 1065d6f4b; -[SCSnapKitCreativeKitLiteDeepLinkProcessor identifier] */

void FUN_1065d6f38(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 1065d6f4c; end: 1065d6f53; -[SCSnapKitCreativeKitLiteDeepLinkProcessor priority] */

undefined8 FUN_1065d6f4c(void)

{
  return 1000;
}



/* Entry: 1065d6f54; end: 1065d6f67; -[SCSnapKitCreativeKitLiteDeepLinkProcessor canProvideProcessorForFeature:] */

void FUN_1065d6f54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110f83a38);
  return;
}



/* Entry: 1065d6f68; end: 1065d6fb3; -[SCSnapKitCreativeKitLiteDeepLinkProcessor isValidDeepLink:] */

undefined8 FUN_1065d6f68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d2a0(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1065d6fb4; end: 1065d6fb7; -[SCSnapKitCreativeKitLiteDeepLinkProcessor makeDeepLinkProcessor] */

void FUN_1065d6fb4(void)

{
  return;
}



/* Entry: 1065d6fb8; end: 1065d7153; -[SCSnapKitCreativeKitLiteDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_1065d6fb8(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126cb710;
  _objc_opt_class(PTR_PTR_1126cb710);
  uVar1 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010bf2d020();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010c0a3020(*(undefined8 *)(param_1 + 0x40));
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf94720(param_5);
      goto LAB_1065d7118;
    }
  }
  else {
    func_0x00010c0a3020(*(undefined8 *)(param_1 + 0x40));
    func_0x00010bf84280(PTR_PTR_1126cb718);
  }
  puVar4 = param_3;
  func_0x00010c2475e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1c40(param_1);
LAB_1065d7118:
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065d7154; end: 1065d722f; -[SCSnapKitCreativeKitLiteDeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:delegate:] */

undefined8
FUN_1065d7154(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c0a3020(*(undefined8 *)(param_1 + 0x40));
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1065d7230;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x000100c749e0(0x3dcccccd,"APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_6);
  _objc_release(param_3);
  return 1;
}



/* Entry: 1065d7230; end: 1065d7437;  */

void FUN_1065d7230(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c0a3020(uVar1,param_2,&PTR____CFConstantStringClassReference_110e55f18,
                      &PTR____CFConstantStringClassReference_110e55f78);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cbea8;
  _objc_alloc(PTR_PTR_1126cbea8);
  func_0x00010bff8500();
  puVar3 = PTR_PTR_1126cbeb0;
  _objc_alloc(PTR_PTR_1126cbeb0);
  func_0x00010c018080();
  puVar4 = PTR_PTR_1126cbec8;
  _objc_alloc(PTR_PTR_1126cbec8);
  func_0x00010c02f540();
  puVar5 = PTR_PTR_1126cbec0;
  _objc_alloc(PTR_PTR_1126cbec0);
  lVar6 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c009c40(puVar5);
  _objc_release(lVar6);
  uVar7 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained();
  uVar8 = uVar7;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar7 = uVar8;
  _objc_opt_respondsToSelector(uVar8,PTR_s_attachUIUsingKeyWindow__1125a0c18);
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  if ((uVar7 & 1) == 0) {
    func_0x00010c0a3020(uVar9);
    func_0x00010bf0c980(uVar8);
  }
  else {
    func_0x00010c0a3020(uVar9);
    func_0x00010bf0c9c0(uVar8);
  }
  func_0x00010c0a3020(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40));
  _objc_release(uVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065d7438; end: 1065d743f; -[SCSnapKitCreativeKitLiteDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_1065d7438(void)

{
  return 1;
}



/* Entry: 1065d7440; end: 1065d7443; -[SCSnapKitCreativeKitLiteDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_1065d7440(void)

{
  return;
}



/* Entry: 1065d7444; end: 1065d74c3; -[SCSnapKitCreativeKitLiteDeepLinkProcessor .cxx_destruct] */

void FUN_1065d7444(long param_1)

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



/* Entry: 1065d74c4; end: 1065d752f; -[SCSnapKitCreativeKitWebDeepLinkProcessor initWithNavigationDelegate:] */

undefined1 * FUN_1065d74c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1f90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065d7530; end: 1065d7543; -[SCSnapKitCreativeKitWebDeepLinkProcessor identifier] */

void FUN_1065d7530(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 1065d7544; end: 1065d754b; -[SCSnapKitCreativeKitWebDeepLinkProcessor priority] */

undefined8 FUN_1065d7544(void)

{
  return 1000;
}



/* Entry: 1065d754c; end: 1065d755f; -[SCSnapKitCreativeKitWebDeepLinkProcessor canProvideProcessorForFeature:] */

void FUN_1065d754c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110f83a58);
  return;
}



/* Entry: 1065d7560; end: 1065d75ab; -[SCSnapKitCreativeKitWebDeepLinkProcessor isValidDeepLink:] */

undefined8 FUN_1065d7560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d2a0(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1065d75ac; end: 1065d75af; -[SCSnapKitCreativeKitWebDeepLinkProcessor makeDeepLinkProcessor] */

void FUN_1065d75ac(void)

{
  return;
}



/* Entry: 1065d75b0; end: 1065d7693; -[SCSnapKitCreativeKitWebDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_1065d75b0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2475e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1c20(param_1,param_2,param_3,uVar1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  if ((param_1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e56018,
                        &PTR____CFConstantStringClassReference_110daafd8,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  func_0x00010bf94720(param_5,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1065d7694; end: 1065d769b; -[SCSnapKitCreativeKitWebDeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:] */

void FUN_1065d7694(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd1d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_handleOpenURL_sourceApplication__1125d20e8);
  return;
}



/* Entry: 1065d769c; end: 1065d77d7; -[SCSnapKitCreativeKitWebDeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:source:] */

undefined8
FUN_1065d769c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  if (param_5 != 0) {
    func_0x00010bef7f60(puVar1,param_2,param_5);
  }
  puVar3 = PTR____kCFBooleanTrue_11034ab68;
  func_0x00010c1d0640(puVar1,param_2,PTR____kCFBooleanTrue_11034ab68,
                      &PTR____CFConstantStringClassReference_110f83978);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110f002f8);
  _objc_release(puVar2);
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110f00318);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c10d100(param_1,param_2,0,param_3,puVar3,0);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(param_5);
  return 1;
}



/* Entry: 1065d77d8; end: 1065d77df; -[SCSnapKitCreativeKitWebDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_1065d77d8(void)

{
  return 0;
}



/* Entry: 1065d77e0; end: 1065d77e3; -[SCSnapKitCreativeKitWebDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_1065d77e0(void)

{
  return;
}



/* Entry: 1065d77e4; end: 1065d77eb; -[SCSnapKitCreativeKitWebDeepLinkProcessor .cxx_destruct] */

void FUN_1065d77e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1065d77ec; end: 1065d7a6b; -[SCCreativeKitSendToDeepLinkViewController initWithVideoProvider:cameraDeepLinkMetadata:sendToContentMetadata:userSession:navigationDelegate:legacySendToLauncher:ephemeralMediaFactory:filterServices:deepLinkUrl:previewSnapSenderFactory:galleryStorySaver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1065d77ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
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
  puStack_68 = PTR_PTR_1126f1f98;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_11274b634,param_7);
    lVar3 = (long)_DAT_11274b638;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274b63c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274b640;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274b644;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274b648;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274b64c;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274b650;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274b654;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274b658;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274b65c;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_13;
    _objc_release(uVar2);
  }
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



/* Entry: 1065d7a6c; end: 1065d7b7f; -[SCCreativeKitSendToDeepLinkViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065d7a6c(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  ulong uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1f98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  uVar2 = param_1;
  func_0x00010be6ff40();
  if ((uVar2 & 1) == 0) {
    _objc_initWeak(auStack_48,param_1);
    puVar1 = PTR_PTR_1126cbed0;
    lVar3 = param_1 + (long)_DAT_11274b634;
    _objc_loadWeakRetained(lVar3);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c237420(puVar1);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else {
    func_0x00010be7e5e0(param_1);
  }
  return;
}



/* Entry: 1065d7b80; end: 1065d7bb3;  */

void FUN_1065d7b80(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065d7bb4; end: 1065d7c63; -[SCCreativeKitSendToDeepLinkViewController _parseAndVerifyMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1065d7bb4(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11274b644;
  lVar2 = *(long *)(param_1 + lVar6);
  func_0x00010bf4e440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    bVar1 = true;
  }
  else {
    puVar3 = PTR_PTR_1126b5c10;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bf4e440(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360(puVar3,param_2,uVar4,0);
    lVar2 = (long)_DAT_11274b660;
    uVar5 = *(undefined8 *)(param_1 + lVar2);
    *(undefined **)(param_1 + lVar2) = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    bVar1 = *(long *)(param_1 + lVar2) != 0;
  }
  return bVar1;
}



/* Entry: 1065d7c64; end: 1065d7d7b; -[SCCreativeKitSendToDeepLinkViewController _presentSendTo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065d7c64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b1a18;
  _objc_alloc(PTR_PTR_1126b1a18);
  lVar2 = param_1;
  func_0x00010c0f2220(param_1);
  func_0x00010c048720(puVar1,param_2,0x11,0xffffffffffffffff,lVar2);
  puVar3 = PTR_PTR_1126b1a20;
  _objc_alloc(PTR_PTR_1126b1a20);
  func_0x00010c01d640();
  puVar4 = PTR_PTR_1126b1a28;
  _objc_alloc();
  func_0x00010c038ea0();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11274b664);
  *(undefined **)(param_1 + _DAT_11274b664) = puVar4;
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126b1a30;
  _objc_alloc(PTR_PTR_1126b1a30);
  func_0x00010bff5040();
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + _DAT_11274b648),param_2,puVar4,param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065d7d7c; end: 1065d7e77; -[SCCreativeKitSendToDeepLinkViewController legacySendToScopeDidDismiss:selectedItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065d7d7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274b648);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf94c40(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274b664);
  *(undefined8 *)(param_1 + _DAT_11274b664) = 0;
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065d7e78; end: 1065d7eab;  */

void FUN_1065d7e78(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065d7eac; end: 1065d7f9f; -[SCCreativeKitSendToDeepLinkViewController legacySendToScopeWillSend:sendToSelection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065d7eac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274b664);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010bf6f440(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065d7fa0; end: 1065d7fd3;  */

void FUN_1065d7fa0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065d7fd4; end: 1065d80c7; -[SCCreativeKitSendToDeepLinkViewController _didDetachUIWithSendToSelection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065d7fd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274b648);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf94c40(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274b664);
  *(undefined8 *)(param_1 + _DAT_11274b664) = 0;
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1065d80c8; end: 1065d811b;  */

void FUN_1065d80c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bea04c0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065d811c; end: 1065d8123; -[SCCreativeKitSendToDeepLinkViewController _transcodingMediaSource] */

undefined8 FUN_1065d811c(void)

{
  return 0;
}



/* Entry: 1065d8124; end: 1065d81a7; -[SCCreativeKitSendToDeepLinkViewController _transcodingMediaDestinationWithSendToSelection:] */

undefined8 FUN_1065d8124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ee300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x000108f41ba8();
  uVar1 = 3;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 1065d81a8; end: 1065d86b3; -[SCCreativeKitSendToDeepLinkViewController _sendSnapWithSendToSelection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065d81a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4468;
  _objc_alloc();
  func_0x00010c05ce40();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274b658);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c243220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x000100504554();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x000100504554();
  _objc_release(uVar3);
  uVar7 = *(ulong *)(param_1 + _DAT_11274b64c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf56080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar9 = PTR_PTR_1126b4470;
  _objc_retain(uVar8);
  _objc_opt_class(puVar9);
  uVar10 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar9);
  uVar7 = uVar8;
  if ((uVar10 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(uVar8);
  uVar10 = uVar7;
  func_0x00010bf982c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  func_0x00010c21acc0(uVar10);
  lVar15 = (long)_DAT_11274b650;
  uVar11 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c243b20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  uVar12 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c243b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beceaa0(param_1);
  func_0x00010becea80(param_1);
  uVar11 = uVar3;
  func_0x00010bf58fc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2142c0();
  func_0x00010c1faa60(uVar11);
  uVar13 = *(undefined8 *)(param_1 + _DAT_11274b63c);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c221d20(uVar11);
  _objc_release(uVar13);
  func_0x00010c16bc20(uVar11);
  func_0x00010c2216a0(uVar10);
  func_0x00010c2056c0(uVar10);
  func_0x00010c176420(uVar10);
  lVar15 = (long)_DAT_11274b660;
  if (*(long *)(param_1 + lVar15) != 0) {
    puVar9 = PTR_PTR_1126b2378;
    _objc_opt_new(PTR_PTR_1126b2378);
    func_0x00010c183080(uVar10);
    _objc_release(puVar9);
    uVar7 = uVar10;
    func_0x00010bf4e840(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21b4e0();
    _objc_release(uVar7);
    iVar1 = (int)*(undefined8 *)(param_1 + lVar15);
    func_0x00010bfd95a0();
    if (iVar1 != 0) {
      uVar13 = *(undefined8 *)(param_1 + lVar15);
      func_0x00010c0d3a00(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar10;
      func_0x00010bf42a00(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b4360();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar7);
      uVar7 = uVar10;
      func_0x00010bf42a00(uVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c277e80(uVar13);
      func_0x00010c0df880(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b43a0(uVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(uVar7);
      _objc_release(uVar13);
    }
  }
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1065d86c4;
  puStack_a8 = &UNK_11092e9b8;
  uStack_a0 = uVar10;
  lStack_98 = param_1;
  uStack_90 = uVar3;
  uStack_88 = uVar12;
  uStack_80 = param_3;
  uStack_78 = uVar5;
  uStack_70 = uVar6;
  uStack_68 = uVar4;
  _objc_retain(uVar4);
  _objc_retain(uVar6);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  _objc_retain(uVar12);
  _objc_retain(uVar3);
  _objc_retain(uVar10);
  ppuVar14 = &puStack_c0;
  _objc_retainBlock(ppuVar14);
  uVar13 = uVar12;
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar10;
  func_0x00010bf3cf60(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfae6a0(uVar13);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(ppuVar14);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_a0);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release(uVar12);
  _objc_release(uVar3);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(puVar2);
  return;
}



/* Entry: 1065d86b4; end: 1065d86c3;  */

void FUN_1065d86b4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d4f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_name_112612df0);
  return;
}



/* Entry: 1065d86c4; end: 1065d893b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1065d86c4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  if (param_5 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c299e20(PTR_PTR_1126b0010);
    func_0x00010c214bc0(uVar5);
    puVar1 = PTR_PTR_1126c4290;
    _objc_alloc(PTR_PTR_1126c4290);
    uStack_50 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010720(puVar1,param_2,puVar2,
                        *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_11274b65c),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    _objc_release(puVar2);
    lVar6 = (long)_DAT_11274b644;
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + lVar6);
    func_0x00010c281680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar6);
      func_0x00010c281680(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21bd60(puVar1,param_2,uVar5);
      _objc_release(uVar5);
    }
    func_0x00010c1b13a0(puVar1,param_2,0);
    puVar2 = PTR_PTR_1126cbed8;
    func_0x00010c111ca0(PTR_PTR_1126cbed8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c2584a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba320(puVar2,param_2,uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf24f00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a9aa0(puVar2,param_2,uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    func_0x00010c2ae860(puVar2,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ae820(puVar2,param_2,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b69a0(puVar2,param_2,*(undefined8 *)(param_1 + 0x48));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b6980(puVar2,param_2,*(undefined8 *)(param_1 + 0x50));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    puVar4 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bfcf800(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15bc20(uVar7,param_2,puVar1,puVar4,0,0,uVar5,0,0);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)0x44;
}



/* Entry: 1065d893c; end: 1065d8943; -[SCCreativeKitSendToDeepLinkViewController pageViewName] */

undefined8 FUN_1065d893c(void)

{
  return 0x44;
}



/* Entry: 1065d8944; end: 1065d8a3f; -[SCCreativeKitSendToDeepLinkViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065d8944(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274b65c,0);
  _objc_storeStrong(param_1 + _DAT_11274b658,0);
  _objc_storeStrong(param_1 + _DAT_11274b654,0);
  _objc_storeStrong(param_1 + _DAT_11274b650,0);
  _objc_storeStrong(param_1 + _DAT_11274b64c,0);
  _objc_storeStrong(param_1 + _DAT_11274b668,0);
  _objc_storeStrong(param_1 + _DAT_11274b660,0);
  _objc_storeStrong(param_1 + _DAT_11274b644,0);
  _objc_storeStrong(param_1 + _DAT_11274b640,0);
  _objc_storeStrong(param_1 + _DAT_11274b63c,0);
  _objc_storeStrong(param_1 + _DAT_11274b664,0);
  _objc_storeStrong(param_1 + _DAT_11274b648,0);
  _objc_storeStrong(param_1 + _DAT_11274b638,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274b634);
  return;
}



/* Entry: 1065d8a40; end: 1065d8b0b; -[SCSnapKitContentLoader initWithDeepLinkURL:networkServices:userPreferences:] */

undefined1 *
FUN_1065d8a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f1fa0;
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



/* Entry: 1065d8b0c; end: 1065d8b37; -[SCSnapKitContentLoader loadMainContentFromPayload:isLocal:encryptionKey:encryptionIv:success:failure:] */

void FUN_1065d8b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be4dd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__loadLocalContentWithPayload_enc_1125710e0,param_3,param_5,param_6,
               param_7,param_8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be4e570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__loadRemoteContentWithPayload_en_1125712f8,param_3,param_5,param_6,
             param_7,param_8);
  return;
}



/* Entry: 1065d8b38; end: 1065d8b63; -[SCSnapKitContentLoader loadStickerContentFromPayload:isLocal:encryptionKey:encryptionIv:success:failure:] */

void FUN_1065d8b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be4dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__loadLocalStickersWithPayload_en_112571100,param_3,param_5,param_6,
               param_7,param_8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be4e5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__loadRemoteStickersWithPayload_e_112571308,param_3,param_5,param_6,
             param_7,param_8);
  return;
}



/* Entry: 1065d8b64; end: 1065d8caf; -[SCSnapKitContentLoader loadCaptionFromPayload:encryptionKey:encryptionIv:] */

void FUN_1065d8b64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e2a618);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e2a618);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126cbe48;
    if (lVar3 != 0) {
      lVar1 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e2a618);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf66c20(puVar4,param_2,lVar2,param_4,param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      goto LAB_1065d8c7c;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_1065d8c7c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1065d8cb0; end: 1065d8dfb; -[SCSnapKitContentLoader loadAttachmentURLFromPayload:encryptionKey:encryptionIv:] */

void FUN_1065d8cb0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e552f8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e552f8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126cbe48;
    if (lVar3 != 0) {
      lVar1 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e552f8);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf66c20(puVar4,param_2,lVar2,param_4,param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      goto LAB_1065d8dc8;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_1065d8dc8:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1065d8dfc; end: 1065d8e0f; -[SCSnapKitContentLoader loadAppNameFromMetadata:] */

void FUN_1065d8dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110effed8);
  return;
}



/* Entry: 1065d8e10; end: 1065d8e9b; -[SCSnapKitContentLoader loadCameraViewStateFromPayload:] */

void FUN_1065d8e10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110efff38);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126cbee0;
  _objc_alloc(PTR_PTR_1126cbee0);
  func_0x00010bffb8c0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1065d8e9c; end: 1065d90ef; -[SCSnapKitContentLoader _loadRemoteContentWithPayload:encryptionKey:encryptionIv:success:failure:] */

void FUN_1065d8e9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf225e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfe4c00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c25f600(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar3);
  return;
}



/* Entry: 1065d90f0; end: 1065d90f3;  */

void FUN_1065d90f0(void)

{
  return;
}



/* Entry: 1065d90f4; end: 1065d91ff;  */

void FUN_1065d90f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_5);
  if (((param_6 == 0) && (func_0x00010c252ee0(), param_5 != 0)) && (param_4 == 200)) {
    lVar1 = param_5;
    func_0x00010bdc2560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    lVar4 = lVar1;
    func_0x00010c0720c0();
    if ((int)lVar4 == 0) {
      (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
    }
    else {
      lVar4 = param_5;
      func_0x00010c156c60(param_5);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),lVar4);
      _objc_release(lVar4);
    }
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1065d9200; end: 1065d93ff; -[SCSnapKitContentLoader _loadLocalContentWithPayload:encryptionKey:encryptionIv:success:failure:] */

void FUN_1065d9200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfa9240();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    (**(code **)(param_7 + 0x10))(param_7);
  }
  else {
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
    puVar4 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar3);
    puVar3 = puVar2;
    if (((ulong)puVar4 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x0) {
      (**(code **)(param_7 + 0x10))(param_7);
    }
    else {
      puVar4 = puVar2;
      func_0x00010bdc2560();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      puVar7 = puVar4;
      func_0x00010c0720c0();
      if ((int)puVar7 == 0) {
        (**(code **)(param_7 + 0x10))(param_7);
      }
      else {
        func_0x00010c156c60(puVar2);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_6 + 0x10))(param_6,puVar2);
        _objc_release(puVar2);
      }
      _objc_release(uVar6);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065d9400; end: 1065d96bb; -[SCSnapKitContentLoader _loadRemoteStickersWithPayload:encryptionKey:encryptionIv:success:failure:] */

void FUN_1065d9400(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bf529e0(), lVar1 == 0)) {
    (**(code **)(param_6 + 0x10))(param_6,0,0);
  }
  else {
    lVar1 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfe4d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf225e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfe4c00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(lVar1);
    func_0x00010c25f600(uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(lVar1);
    _objc_release(lVar1);
    _objc_release(uVar6);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1065d96bc; end: 1065d96bf;  */

void FUN_1065d96bc(void)

{
  return;
}



/* Entry: 1065d96c0; end: 1065d980f;  */

void FUN_1065d96c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  if (((param_6 == 0) && (lVar1 = param_4, func_0x00010c252ee0(), param_5 != 0)) && (lVar1 == 200))
  {
    lVar1 = param_5;
    func_0x00010bdc2560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0720c0();
    if ((int)lVar3 == 0) {
      (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
    }
    else {
      lVar3 = param_5;
      func_0x00010c156c60(param_5);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
                (*(long *)(param_1 + 0x38),lVar3,*(undefined8 *)(param_1 + 0x20));
      _objc_release(lVar3);
    }
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
  }
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065d9810; end: 1065d9a73; -[SCSnapKitContentLoader _loadLocalStickersWithPayload:encryptionKey:encryptionIv:success:failure:] */

void FUN_1065d9810(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfa9240();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cbe58;
  if (puVar1 == (undefined *)0x0) {
    (**(code **)(param_7 + 0x10))(param_7);
  }
  else {
    puVar8 = puVar1;
    func_0x00010c0e00e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1212e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    if (puVar2 == (undefined *)0x0) {
      (**(code **)(param_7 + 0x10))(param_7);
    }
    else {
      lVar3 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if ((lVar3 == 0) || (lVar7 = lVar3, func_0x00010bf529e0(), lVar7 == 0)) {
        lVar7 = 0;
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar4 = puVar2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bdc2560();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar7;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        puVar8 = puVar5;
        func_0x00010c0720c0();
        if (((ulong)puVar8 & 1) == 0) {
          (**(code **)(param_7 + 0x10))(param_7);
        }
        puVar8 = puVar4;
        func_0x00010c156c60(puVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar3;
        func_0x00010c0dfd40(lVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      (**(code **)(param_6 + 0x10))(param_6,puVar8,lVar7);
      _objc_release(lVar7);
      _objc_release(puVar8);
      _objc_release(lVar3);
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065d9a74; end: 1065d9aaf; -[SCSnapKitContentLoader .cxx_destruct] */

void FUN_1065d9a74(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065d9ab0; end: 1065d9c8b; -[SCSnapKitCreativeKitDeepLinkRequestHandler initWithDeepLinkURL:safeBrowsingAPI:deepLinkRequestParser:navigationDelegate:metricsReporter:delegate:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1065d9ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
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
  puStack_68 = PTR_PTR_1126f1fa8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11274b678),param_6);
    lVar4 = (long)_DAT_11274b67c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274b680;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274b684;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar4 = (long)_DAT_11274b688;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    func_0x00010c1a8560(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar4));
    lVar4 = (long)_DAT_11274b68c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11274b690),param_8);
    lVar4 = (long)_DAT_11274b694;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065d9c8c; end: 1065d9eb3; -[SCSnapKitCreativeKitDeepLinkRequestHandler loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065d9c8c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c222380(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11274b688;
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar9);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  lStack_78 = lVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_1065d9eb4;
  puStack_a8 = PTR_PTR_1126f1fa8;
  lStack_b0 = lVar2;
  lStack_a0 = lVar3;
  lStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_b0,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c0a2fe0(*(undefined8 *)(lVar2 + _DAT_11274b68c));
  func_0x00010c24dbc0(*(undefined8 *)(lVar2 + _DAT_11274b688));
  return;
}



/* Entry: 1065d9eb4; end: 1065d9f23; -[SCSnapKitCreativeKitDeepLinkRequestHandler viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065d9eb4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1fa8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c0a2fe0(*(undefined8 *)(param_1 + _DAT_11274b68c));
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + _DAT_11274b688));
  return;
}



/* Entry: 1065d9f24; end: 1065d9f6f; -[SCSnapKitCreativeKitDeepLinkRequestHandler viewDidAppear:] */

void FUN_1065d9f24(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1fa8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010be27fc0(param_1);
  return;
}



/* Entry: 1065d9f70; end: 1065da0b7; -[SCSnapKitCreativeKitDeepLinkRequestHandler _handleDeepLinkURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065d9f70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  func_0x00010c0a2fe0(*(undefined8 *)(param_1 + _DAT_11274b68c));
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274b67c);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1065da0b8;
  puStack_68 = &UNK_11092ea58;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c0f3f80(uVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1065da0b8; end: 1065da187;  */

void FUN_1065da0b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec8c80();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065da188; end: 1065da67b; -[SCSnapKitCreativeKitDeepLinkRequestHandler _successHelperWithContent:redirectURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065da188(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 *puStack_160;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar8 = (long)_DAT_11274b68c;
  func_0x00010c0a2fe0(*(undefined8 *)(param_1 + lVar8));
  puVar1 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfbedc0(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6440();
  _objc_release(puVar1);
  func_0x00010c0a2fe0(*(undefined8 *)(param_1 + lVar8));
  lVar2 = param_3;
  func_0x00010c110a00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  _objc_release();
  lVar4 = 0;
  if (lVar2 != 0) {
    lVar3 = param_3;
    func_0x00010c110a00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010be2e680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) goto LAB_1065da624;
  }
  _dispatch_group_create();
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 999;
  lVar2 = param_3;
  func_0x00010bf0d6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
LAB_1065da40c:
    _objc_initWeak(auStack_140,param_1);
    _objc_copyWeak(auStack_148,param_1 + _DAT_11274b690);
    puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_198 = 0xc2000000;
    pcStack_190 = FUN_1065da788;
    puStack_188 = &UNK_11092eae8;
    lStack_180 = param_1;
    _objc_retain(param_3);
    puStack_160 = &uStack_98;
    lStack_178 = param_3;
    _objc_copyWeak(auStack_158,auStack_148);
    _objc_retain(param_4);
    uStack_170 = param_4;
    _objc_copyWeak(auStack_150,auStack_140);
    _objc_retain(lVar4);
    lStack_168 = lVar4;
    func_0x000100bc0718(lVar3,PTR___dispatch_main_q_11034be20,&puStack_1a0);
    _objc_release(lStack_168);
    _objc_destroyWeak(auStack_150);
    _objc_release(uStack_170);
    _objc_destroyWeak(auStack_158);
    _objc_release(lStack_178);
    _objc_destroyWeak(auStack_148);
    _objc_destroyWeak(auStack_140);
  }
  else {
    func_0x00010c0a2fe0(*(undefined8 *)(param_1 + lVar8));
    _dispatch_group_enter(lVar3);
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc();
    lVar2 = param_3;
    func_0x00010bf0d6a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820();
    _objc_release(lVar2);
    if (puVar1 != (undefined *)0x0) {
      puVar5 = puVar1;
      func_0x00010c1504a0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 != (undefined *)0x0) {
        puVar6 = puVar1;
        func_0x00010bfe4420();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar5);
        puVar5 = PTR___NSConcreteStackBlock_11034bd00;
        if (puVar6 != (undefined *)0x0) {
          uVar7 = *(undefined8 *)(param_1 + _DAT_11274b684);
          puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_f8 = 0xc2000000;
          pcStack_f0 = FUN_1065da6d8;
          puStack_e8 = &UNK_11092ea88;
          _objc_retain(lVar3);
          puStack_138 = puVar5;
          uStack_130 = 0xc2000000;
          uStack_128 = 0x1065da730;
          puStack_120 = &UNK_11092eab8;
          lStack_118 = param_1;
          lStack_e0 = lVar3;
          lStack_d8 = param_1;
          puStack_d0 = &uStack_98;
          _objc_retain(lVar3);
          lStack_110 = lVar3;
          puStack_108 = &uStack_98;
          func_0x00010bf386c0(uVar7);
          _objc_release(lStack_110);
          _objc_release(lStack_e0);
          _objc_release(puVar1);
          goto LAB_1065da40c;
        }
      }
    }
    func_0x00010c0a2fe0(*(undefined8 *)(param_1 + lVar8));
    _dispatch_group_leave(lVar3);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_11274b690;
    lVar2 = param_1 + lVar8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c0a5fe0();
    _objc_release(lVar2);
    lVar8 = param_1 + lVar8;
    _objc_loadWeakRetained(lVar8);
    func_0x00010bf94700();
    _objc_release(lVar8);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1065da67c;
    puStack_b0 = &UNK_110841f80;
    lStack_a8 = param_1;
    _objc_retain(param_4);
    uStack_a0 = param_4;
    func_0x000100162d98("APPSTORE",&puStack_c8);
    _objc_release(uStack_a0);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar1);
  }
  __Block_object_dispose(&uStack_98,8);
  _objc_release(lVar3);
  _objc_release(lVar4);
LAB_1065da624:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065da67c; end: 1065da6d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065da67c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126cbed0;
  lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_11274b678;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c237400(puVar1,param_2,0,lVar2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1065da6d8; end: 1065da787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065da6d8(long param_1,undefined8 param_2)

{
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0a2fe0(*(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_11274b68c));
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 1065da788; end: 1065dadc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065da788(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined1 auStack_68 [8];
  
  func_0x00010c2558c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274b688));
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf0d6a0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) &&
     (lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18), _objc_release(),
     lVar1 != 0)) {
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a2fe0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274b68c));
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0a5fe0();
    _objc_release(lVar1);
    lVar1 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf94700();
    _objc_release(lVar1);
    puVar2 = PTR_PTR_1126cbed0;
    lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11274b678;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c237400(puVar2);
    _objc_release(lVar1);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c253880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = puVar2;
  if (lVar1 != 0) {
    puVar3 = (undefined *)(param_1 + 0x50);
    _objc_loadWeakRetained();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c253880(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010be30e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf2bba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf2bba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2a2c0();
    _objc_release(uVar4);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0b3ba0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf0a640();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb4100(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  func_0x00010c06a9c0(*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR_PTR_1126cbee8;
  _objc_alloc();
  func_0x00010c01a6e0();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0b3ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x000108eca2ac();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar3 = PTR_PTR_1126b5868;
  _objc_alloc(PTR_PTR_1126b5868);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf0d6a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf2fba0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf05000(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c096de0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2759e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a840();
  func_0x00010bff4d40(puVar3);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(uVar7);
  puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010c1d0640(puVar12);
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c15d0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c1d0640(puVar12);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c15d0c0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar12);
      _objc_release(uVar6);
      goto LAB_1065dac70;
    }
  }
  func_0x00010c1d0640(puVar12);
LAB_1065dac70:
  func_0x00010c1d0640(puVar12);
  func_0x00010c1d0640(puVar12);
  func_0x00010c0a2fe0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274b68c));
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0a5fe0();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11274b678;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_68,param_1 + 0x48);
  func_0x00010c10d100(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar12);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar5);
  return;
}



/* Entry: 1065dadc4; end: 1065daec7;  */

void FUN_1065dadc4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0a6880();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf94700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065daec8; end: 1065db073; -[SCSnapKitCreativeKitDeepLinkRequestHandler _failureHelperWithErrorMessage:redirectURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065daec8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0a2fe0(*(undefined8 *)(param_1 + _DAT_11274b68c));
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11274b690;
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0a5fe0();
  _objc_release(lVar2);
  lVar4 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bf94700();
  _objc_release(lVar4);
  puVar3 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfbedc0(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6440();
  _objc_release(puVar3);
  _objc_initWeak(auStack_48,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1065db074;
  puStack_68 = &UNK_110848218;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uStack_60 = param_3;
  _objc_retain(param_4);
  uStack_58 = param_4;
  func_0x000100162d98("APPSTORE",&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065db074; end: 1065db0a7;  */

void FUN_1065db074(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10c0c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065db0a8; end: 1065db1f7; -[SCSnapKitCreativeKitDeepLinkRequestHandler _failurePopupFromPreview:redirectURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065db0a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0a2fe0(*(undefined8 *)(param_1 + _DAT_11274b68c));
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_11274b690;
  lVar2 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0a5fe0();
  _objc_release(lVar2);
  lVar3 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf94700();
  _objc_release(lVar3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1065db1f8;
  puStack_60 = &UNK_110848ba8;
  lStack_58 = param_1;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_78);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 1065db1f8; end: 1065db26b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065db1f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  func_0x00010c2558c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274b688));
  puVar2 = PTR_PTR_1126cbed0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x20) + (long)_DAT_11274b678;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c237400(puVar2,param_2,uVar1,lVar3,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1065db26c; end: 1065db2ef; -[SCSnapKitCreativeKitDeepLinkRequestHandler presentFailurePopupWithErrorMessage:redirectURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065db26c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274b688);
  _objc_retain(param_4);
  func_0x00010c2558c0(uVar3);
  puVar1 = PTR_PTR_1126cbed0;
  lVar2 = param_1 + _DAT_11274b678;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c237400(puVar1,param_2,0,lVar2,param_4,param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1065db2f0; end: 1065db5b3; -[SCSnapKitCreativeKitDeepLinkRequestHandler _handlePreviewData:redirectURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065db2f0(double param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar7 = (long)_DAT_11274b68c;
  func_0x00010c0a2fe0(*(undefined8 *)(param_2 + lVar7),param_3,
                      &PTR____CFConstantStringClassReference_110e56138,
                      &PTR____CFConstantStringClassReference_110dbf578);
  uVar1 = param_4;
  func_0x00010c105b00();
  if ((uVar1 < 9) && ((1L << (uVar1 & 0x3f) & 0x149U) != 0)) {
    func_0x00010be0e400(param_2,param_3,0,param_5);
    puVar6 = (undefined *)0x0;
    goto LAB_1065db388;
  }
  func_0x00010c0a2fe0(*(undefined8 *)(param_2 + lVar7),param_3,
                      &PTR____CFConstantStringClassReference_110e56138,
                      &PTR____CFConstantStringClassReference_110e562b8);
  uVar1 = param_4;
  func_0x00010c105b00();
  func_0x00010bd50910();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar6 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_3,&PTR____CFConstantStringClassReference_110df1c18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar6);
  func_0x0001005c6500();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    func_0x00010be0e400(param_2,param_3,0,param_5);
LAB_1065db560:
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x00010c0a2fe0(*(undefined8 *)(param_2 + lVar7),param_3,
                        &PTR____CFConstantStringClassReference_110e56138,
                        &PTR____CFConstantStringClassReference_110e562d8);
    func_0x00010c14e060(param_4,param_3,puVar4,0);
    func_0x00010c299e20(PTR_PTR_1126b0010,param_3,puVar4);
    uVar5 = *(undefined8 *)(param_2 + lVar7);
    if (300.0 < param_1) {
      func_0x00010c0a2fe0(uVar5,param_3,&PTR____CFConstantStringClassReference_110e56138,
                          &PTR____CFConstantStringClassReference_110e562f8);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000108ed0878();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar6,param_3,uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      func_0x00010be0e400(param_2,param_3,puVar6,param_5);
      _objc_release(puVar6);
      goto LAB_1065db560;
    }
    func_0x00010c0a2fe0(uVar5,param_3,&PTR____CFConstantStringClassReference_110e56138,
                        &PTR____CFConstantStringClassReference_110dc9138);
    puVar6 = PTR_PTR_1126cbef0;
    _objc_alloc(PTR_PTR_1126cbef0);
    func_0x00010c0399c0();
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(uVar1);
LAB_1065db388:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1065db5b4; end: 1065db6ab; -[SCSnapKitCreativeKitDeepLinkRequestHandler _handleStickerState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1065db5b4(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined *puVar7;
  undefined1 *puStack_40;
  long lStack_38;
  
  ppuVar6 = &puStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bfe7300();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = param_3;
    func_0x00010bfe7300();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c105b00();
    _objc_release(puVar1);
    if ((puVar2 < (undefined1 *)0x8) && ((0xe1U >> (ulong)((uint)puVar2 & 0x1f) & 1) != 0)) {
      puVar7 = (undefined *)0x0;
      ppuVar6 = (undefined1 **)puVar5;
      goto LAB_1065db670;
    }
  }
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
LAB_1065db670:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  puVar7 = PTR_PTR_1126ae780;
  _objc_retain(ppuVar6);
  _objc_alloc_init(puVar7);
  puVar3 = PTR_PTR_1126c4980;
  _objc_alloc_init(PTR_PTR_1126c4980);
  func_0x00010c1d0440();
  _objc_release(ppuVar6);
  func_0x00010c204b80(puVar7,param_2,puVar3);
  puVar4 = *(undefined **)(param_3 + _DAT_11274b694);
  func_0x00010bf1f440(puVar4,param_2,&PTR____CFConstantStringClassReference_110e56078,0,puVar7);
  _objc_release(puVar3);
  _objc_release(puVar7);
  return puVar4;
}



/* Entry: 1065db6ac; end: 1065db753; -[SCSnapKitCreativeKitDeepLinkRequestHandler _shouldHideMusicTool:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1065db6ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae780;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126c4980;
  _objc_alloc_init(PTR_PTR_1126c4980);
  func_0x00010c1d0440();
  _objc_release(param_3);
  func_0x00010c204b80(puVar1,param_2,puVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274b694);
  func_0x00010bf1f440(uVar3,param_2,&PTR____CFConstantStringClassReference_110e56078,0,puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 1065db754; end: 1065db7eb; -[SCSnapKitCreativeKitDeepLinkRequestHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065db754(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274b694,0);
  _objc_destroyWeak(param_1 + _DAT_11274b690);
  _objc_storeStrong(param_1 + _DAT_11274b68c,0);
  _objc_storeStrong(param_1 + _DAT_11274b688,0);
  _objc_storeStrong(param_1 + _DAT_11274b684,0);
  _objc_storeStrong(param_1 + _DAT_11274b680,0);
  _objc_storeStrong(param_1 + _DAT_11274b67c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274b678);
  return;
}



/* Entry: 1065db7ec; end: 1065db88b; +[SCDeeplinkOAuth2Handler urlIsValid:] */

bool FUN_1065db7ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c11db20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c11db20(param_3,param_2,&PTR____CFConstantStringClassReference_110db9598);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar3 != 0 && lVar2 != 0;
}



/* Entry: 1065db88c; end: 1065dbc63; +[SCDeeplinkOAuth2Handler createOAuth2ScopeForDeepLinkURL:phoneNumberVerifyId:features:consentRequired:is1PA:presentingViewController:delegate:] */

void FUN_1065db88c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  ulong in_stack_ffffffffffffff40;
  
  _objc_retain();
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11db20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010baff1d0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b5890;
  _objc_alloc();
  uVar1 = uVar2;
  func_0x00010c11db20(uVar2,param_2,&PTR____CFConstantStringClassReference_110db9578);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c11db20(uVar2,param_2,&PTR____CFConstantStringClassReference_110ddfed8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c11db20(uVar2,param_2,&PTR____CFConstantStringClassReference_110db95f8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c11db20(uVar2,param_2,&PTR____CFConstantStringClassReference_110db9598);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c11db20(uVar2,param_2,&PTR____CFConstantStringClassReference_110db95d8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010c11db20(uVar2,param_2,&PTR____CFConstantStringClassReference_110db9618);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010c11db20(uVar2,param_2,&PTR____CFConstantStringClassReference_110e18e18);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar2;
  func_0x00010c11db20(uVar2,param_2,&PTR____CFConstantStringClassReference_110e56318);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar2;
  func_0x00010c11db20(uVar2,param_2,&PTR____CFConstantStringClassReference_110e18df8);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010c11db20(uVar2,param_2,&PTR____CFConstantStringClassReference_110e18e98);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar13;
  func_0x00010bfff040(puVar4,param_2,uVar1,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13
                      ,in_stack_ffffffffffffff40 & 0xffffffffffffff00);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar1);
  puVar14 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  _objc_release(param_8);
  uVar1 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x000108ecd7f0();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar6 = uVar1;
  func_0x000108ecd834();
  _objc_release(uVar1);
  puVar15 = PTR_PTR_1126b5898;
  _objc_alloc(PTR_PTR_1126b5898);
  uVar1 = 0;
  if (param_4 != 0) {
    uVar1 = 3;
  }
  uVar7 = uVar2;
  func_0x00010c11db20(uVar2,param_2,&PTR____CFConstantStringClassReference_110e56338);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057060(puVar15,param_2,puVar14,puVar4,param_4,param_5,param_6,param_7,uVar3,uVar1,
                      uVar7,CONCAT71(CONCAT61((int6)((ulong)uVar16 >> 0x10),(char)uVar6),(char)uVar5
                                    ),param_9);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar7);
  _objc_release(puVar14);
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 1065dbc64; end: 1065dc0d7; +[SCDeeplinkOAuth2Handler handleClientDeepLinkRequest:userNetworkServices:systemApplicationLoggerServices:completion:] */

void FUN_1065dbc64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11db20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c11db20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = lVar1;
  func_0x00010c11db20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar1 = lVar4;
  func_0x00010bf44740(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar11 = param_5;
    func_0x00010c266da0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0fa0();
    _objc_release(uVar12);
    _objc_release(uVar11);
    puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,0,0,puVar13,0);
    _objc_release(puVar13);
  }
  else {
    puVar6 = PTR_PTR_1126cbef8;
    func_0x00010c0cb140(PTR_PTR_1126cbef8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0440();
    func_0x00010c168b20(puVar6);
    puVar7 = puVar5;
    func_0x00010bf529e0();
    puVar13 = (undefined *)0x0;
    if (puVar7 != (undefined *)0x0) {
      puVar13 = puVar6;
      func_0x00010c19aec0(puVar6);
    }
    func_0x000108ecf104();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar8 = puVar7;
    func_0x000108ed08f4();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0720c0();
    if (((ulong)puVar9 & 1) == 0) {
      func_0x00010c1d0560(puVar7);
    }
    uVar11 = param_4;
    func_0x00010bfe4d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010bf63640(puVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar12;
    func_0x00010bf225e0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(uVar12);
    _objc_release(uVar11);
    puVar9 = &UNK_10f3864c8;
    _dispatch_queue_create(&UNK_10f3864c8,0);
    uVar11 = param_4;
    func_0x00010bfe4c00(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    func_0x00010c25f600(uVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(param_6);
    _objc_release(puVar9);
    _objc_release(uVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar13);
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1065dc0d8; end: 1065dc0e3;  */

void FUN_1065dc0d8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c290a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_useSnapTokenHeaderWithAccessType_112681cb8,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1065dc0e4; end: 1065dc2e7;  */

void FUN_1065dc0e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126cbf00;
  _objc_alloc();
  func_0x00010c008360();
  _objc_retain(0);
  puVar3 = puVar2;
  func_0x00010bfa25a0();
  puVar5 = PTR_PTR_1126cbf08;
  if (puVar3 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x00010bfa2580(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bddb0e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf49080(puVar2);
    func_0x00010c0df6e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar5);
  }
  func_0x00010c073000(puVar2);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar5);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),param_5,param_4,param_6,puVar1);
  _objc_release(0);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 1065dc2e8; end: 1065dc307; +[SCDeeplinkOAuth2Handler _canvasAppFeaturesFromProtoFeatureItems:] */

void FUN_1065dc2e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11092eb18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065dc308; end: 1065dc3b7;  */

void FUN_1065dc308(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126be098;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c0cc580(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c272e00(param_2);
  uVar3 = param_2;
  func_0x00010bfa2440(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c02dba0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065dc3b8; end: 1065dc52b; -[SCOAuth2DeepLinkProcessingPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065dc3b8(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126cbf10;
  _objc_alloc(PTR_PTR_1126cbf10);
  lVar2 = param_1 + _DAT_11274b698;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11274b69c;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11274b6a0;
  _objc_loadWeakRetained(lVar8);
  lVar9 = param_1 + _DAT_11274b6a4;
  _objc_loadWeakRetained(lVar9);
  func_0x00010c02e5e0(puVar1,param_2,lVar4,lVar7,lVar8,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11274b6a8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065dc52c; end: 1065dc59f; -[SCOAuth2DeepLinkProcessingPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065dc52c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274b6a4);
  _objc_destroyWeak(param_1 + _DAT_11274b6b0);
  _objc_destroyWeak(param_1 + _DAT_11274b6a0);
  _objc_destroyWeak(param_1 + _DAT_11274b69c);
  _objc_destroyWeak(param_1 + _DAT_11274b698);
  _objc_destroyWeak(param_1 + _DAT_11274b6ac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274b6a8);
  return;
}



/* Entry: 1065dc5a0; end: 1065dc693; -[SCOAuth2DeepLinkProcessor initWithNavigationDelegate:blizzardLogger:userNetworkServices:systemApplicationLoggerServices:] */

undefined1 *
FUN_1065dc5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f1fb0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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



/* Entry: 1065dc694; end: 1065dc6a7; -[SCOAuth2DeepLinkProcessor identifier] */

void FUN_1065dc694(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 1065dc6a8; end: 1065dc6af; -[SCOAuth2DeepLinkProcessor priority] */

undefined8 FUN_1065dc6a8(void)

{
  return 1000;
}



/* Entry: 1065dc6b0; end: 1065dc6c3; -[SCOAuth2DeepLinkProcessor canProvideProcessorForFeature:] */

void FUN_1065dc6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110dfe2d8);
  return;
}



/* Entry: 1065dc6c4; end: 1065dc70f; -[SCOAuth2DeepLinkProcessor isValidDeepLink:] */

undefined8 FUN_1065dc6c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d2a0(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1065dc710; end: 1065dc713; -[SCOAuth2DeepLinkProcessor makeDeepLinkProcessor] */

void FUN_1065dc710(void)

{
  return;
}



/* Entry: 1065dc714; end: 1065dc7ab; -[SCOAuth2DeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_1065dc714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2475e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1c40(param_1,param_2,param_3,uVar1,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065dc7ac; end: 1065dcb0b; -[SCOAuth2DeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:delegate:] */

undefined *
FUN_1065dc7ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c11db20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baff1d0();
  _objc_release(uVar7);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ecd7f0();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ecd834();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b5840;
  _objc_alloc();
  uVar1 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c11db20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c11db20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c11db20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffef40();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c266da0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0f80();
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_initWeak(auStack_68,param_6);
  puVar8 = PTR_PTR_1126cbf08;
  _objc_retain(param_3);
  _objc_retain(puVar2);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_5);
  func_0x00010bfd0820(puVar8);
  puVar8 = PTR_PTR_1126cbf08;
  func_0x00010c28f6c0(PTR_PTR_1126cbf08);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 1065dcb0c; end: 1065dd023;  */

void FUN_1065dcb0c(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  if (((param_3 != 0) && (param_4 == 0)) && (lVar6 = param_3, func_0x00010c252ee0(), lVar6 == 200))
  {
    lVar6 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c0a5fe0();
    _objc_release(lVar6);
    puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b8 = 0xc2000000;
    pcStack_1b0 = FUN_1065dd0b4;
    puStack_1a8 = &UNK_11085ae98;
    lVar6 = *(long *)(param_1 + 0x38);
    _objc_retain(lVar6);
    lStack_1a0 = lVar6;
    _objc_retain(param_5);
    uStack_190 = *(undefined8 *)(param_1 + 0x30);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lStack_198 = param_5;
    _objc_retain(uVar7);
    uStack_188 = uVar7;
    _objc_copyWeak(auStack_180,param_1 + 0x40);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_1c0);
    _objc_destroyWeak(auStack_180);
    _objc_release(uStack_188);
    _objc_release(lStack_198);
    lVar6 = lStack_1a0;
    goto LAB_1065dcfbc;
  }
  puVar1 = PTR_PTR_1126cbf18;
  _objc_alloc();
  lStack_f8 = 0;
  func_0x00010c008360();
  lVar6 = lStack_f8;
  _objc_retain(lStack_f8);
  if (lVar6 == 0) {
    puStack_1e8 = puVar1;
    func_0x00010bf990e0();
    if ((int)puStack_1e8 == 2) {
      func_0x000108ed0548();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      uStack_1f0 = uVar7;
      func_0x00010c11db20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      puStack_1f8 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puStack_1e8 = puVar1;
      func_0x00010bf990e0();
      if ((int)puStack_1e8 != 1) goto LAB_1065dcc84;
      func_0x000108ed0560();
      _objc_retainAutoreleasedReturnValue();
      puStack_1f8 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      uStack_1f0 = 0;
    }
  }
  else {
LAB_1065dcc84:
    puStack_1f8 = (undefined *)0x0;
    uStack_1f0 = 0;
    puStack_1e8 = (undefined *)0x0;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar3 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar9 = *plStack_130;
    do {
      lVar8 = 0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(lVar3);
        }
        uVar7 = *(undefined8 *)(lStack_138 + lVar8 * 8);
        func_0x00010c0d4f60(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar7);
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  lVar4 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c252ee0(param_3);
  func_0x00010c0a9c60(uVar7);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20);
  func_0x00010c266da0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0fa0();
  _objc_release(uVar7);
  _objc_release(uVar5);
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c0a5fe0();
  _objc_release(lVar3);
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf94700();
  _objc_release(lVar3);
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_1065dd024;
  puStack_160 = &UNK_110848ba8;
  uStack_150 = *(undefined8 *)(param_1 + 0x30);
  puStack_158 = puStack_1e8;
  uStack_148 = uStack_1f0;
  _objc_retain(puStack_1e8);
  _objc_retain(uStack_1f0);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_178);
  _objc_release(uStack_148);
  _objc_release(puStack_158);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(puStack_1f8);
  _objc_release(uStack_1f0);
  _objc_release(puStack_1e8);
  _objc_release(puVar1);
LAB_1065dcfbc:
  _objc_release(lVar6);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126cbed0;
    lVar6 = *(long *)(param_2 + 0x28) + 8;
    _objc_loadWeakRetained(lVar6);
    lVar3 = *(long *)(param_2 + 0x28) + 8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c2a0180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237400(puVar1);
    _objc_release(lVar4);
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar6);
    return;
  }
  return;
}



/* Entry: 1065dd024; end: 1065dd0b3;  */

void FUN_1065dd024(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar3 = PTR_PTR_1126cbed0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = *(long *)(param_1 + 0x28) + 8;
  _objc_loadWeakRetained(lVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  lVar5 = *(long *)(param_1 + 0x28) + 8;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237400(puVar3,param_2,uVar1,lVar4,uVar2,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}


