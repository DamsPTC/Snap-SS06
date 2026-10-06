/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105dbec44; end: 105dbecef; -[SCPreviewFeatureTextToSpeechServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dbec44(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112736650;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112736658;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c26c8e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105dbecf0; end: 105dbed33; -[SCPreviewFeatureTextToSpeechServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dbecf0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112736658);
  _objc_destroyWeak(param_1 + _DAT_112736654);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736650);
  return;
}



/* Entry: 105dbed34; end: 105dbed3f; -[SCFeatureSettingsService hasAcceptedTextToSpeechPermissionsPrompt] */

void FUN_105dbed34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e2a2f8);
  return;
}



/* Entry: 105dbed40; end: 105dbed4b; -[SCFeatureSettingsService acceptedTextToSpeechPermissionsPromptServerParam] */

undefined ** FUN_105dbed40(void)

{
  return &PTR____CFConstantStringClassReference_110e2a2f8;
}



/* Entry: 105dbed4c; end: 105dbed5b; -[SCFeatureSettingsService setAcceptedTextToSpeechPermissionsPrompt:] */

void FUN_105dbed4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e2a2f8,param_3);
  return;
}



/* Entry: 105dbed5c; end: 105dbed63; -[SCFeatureSettingsService text_to_speech_permissions_prompt_accepted_client_value:] */

undefined * FUN_105dbed5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 105dbed64; end: 105dbed6b; -[SCFeatureSettingsService text_to_speech_permissions_prompt_accepted_server_value:] */

void FUN_105dbed64(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 105dbed6c; end: 105dbed7b; -[SCFeatureSettingsService acceptedTextToSpeechPermissionsPrompt] */

void FUN_105dbed6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e2a2f8,0);
  return;
}



/* Entry: 105dbed7c; end: 105dbf9fb; -[SCPreviewFeatureTimelineImpl initWithUserSession:previewConfiguration:previewABServices:creativeToolsABServices:cameraConfigurationServices:drawing:autoCaptions:imageProcessCommandProvider:genericAssetMetadataProvider:renderingMetadataProvider:dialogCoordinator:videoThumbnailGenerator:circumstanceEngine:videoTranscoder:voiceoverFeature:webAttachment:userTagging:targetTrajectoryFactory:previewScopeServices:genericAssetsServices:stickerInjector:ctpItemViewService:previewLoggingServices:snapCrop:stickerContainer:viewportController:videoPlayback:captionFeature:tooltipPresenter:cameraFeatureLoggingServices:userInfoServices:previewCameraSourceOverlayService:overlayFormatServices:music:previewLegacyServices:galleryStorySaver:snapVideoFilterFactory:snapVideoFilterCoordinator:videoPlaybackLogger:bounceFeature:ucoInMemories:commonLoggingParamsBuilder:snapDocManager:snapDocConverterServices:snapDocEditorFactory:previewURLVideoProvider:commandMapper:snapchatterFetcher:watermarkServices:filterMetadataProvider:filterProcessCommandProvider:geoFilterProvider:venueFilterController:videoFilterStateController:] */

undefined8 *
FUN_105dbed7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain();
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  puStack_80 = PTR_PTR_1126ed188;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_7;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_3);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[8];
    puVar1[8] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_19;
    _objc_release(uVar2);
    uVar2 = param_22;
    func_0x00010c127e00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_14;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_3);
    _objc_retain(param_33);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[6];
    puVar1[6] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_46;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_47;
    _objc_release(uVar2);
    _objc_retain(param_48);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_48;
    _objc_release(uVar2);
    _objc_retain(param_49);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_49;
    _objc_release(uVar2);
    _objc_retain(param_50);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_50;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar2 = puVar1[0x37];
    puVar1[0x37] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_52);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_52;
    _objc_release(uVar2);
    _objc_retain(param_53);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_53;
    _objc_release(uVar2);
    _objc_retain(param_54);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_54;
    _objc_release(uVar2);
    _objc_retain(param_55);
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = param_55;
    _objc_release(uVar2);
    _objc_retain(param_56);
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = param_56;
    _objc_release(uVar2);
    uVar5 = param_6;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c081f80();
    *(char *)(puVar1 + 0x3e) = (char)uVar2;
    _objc_release(uVar5);
    _objc_initWeak(auStack_90,puVar1);
    uVar5 = puVar1[0xb];
    func_0x00010bfc0e40();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105dbf9fc;
    puStack_a0 = &UNK_1108531d0;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar2 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar4 = puVar1[6];
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c2701c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar5 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_retain(param_21);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_51);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_51;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
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



/* Entry: 105dbf9fc; end: 105dbfb07;  */

void FUN_105dbf9fc(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105dbfaa4;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  uStack_40 = param_2;
  _objc_retain(param_2);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105dbfb08; end: 105dbfb4f;  */

void FUN_105dbfb08(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1c9fc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dbfb50; end: 105dbfbaf; -[SCPreviewFeatureTimelineImpl snapEditor:updateLoggingWithBuilder:] */

void FUN_105dbfb50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0811c0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    func_0x00010c289fe0(param_1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105dbfbb0; end: 105dbfc0f; -[SCPreviewFeatureTimelineImpl snapEditor:didChangeToolBarButtonItemType:selected:] */

void FUN_105dbfbb0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 in_x4;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c06ba20();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c165550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_setAddSnapThumbnailsHidden__112636f70,in_x4);
    return;
  }
  return;
}



/* Entry: 105dbfc10; end: 105dbfc4f; -[SCPreviewFeatureTimelineImpl configureWithView:] */

void FUN_105dbfc10(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108cc6364(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x18,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105dbfc50; end: 105dbfc57; -[SCPreviewFeatureTimelineImpl responderChainPriority] */

undefined8 FUN_105dbfc50(void)

{
  return 0x7fffffff;
}



/* Entry: 105dbfc58; end: 105dbfc5f; -[SCPreviewFeatureTimelineImpl addSnapConfigurationFuture] */

void FUN_105dbfc58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x1b8),PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 105dbfc60; end: 105dbfd8b; -[SCPreviewFeatureTimelineImpl setupPreviewUIWithPlayerHandler:] */

void FUN_105dbfc60(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c0811c0();
  _objc_release(uVar1);
  lVar5 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar5;
  func_0x00010c06ba20();
  _objc_release(lVar5);
  if (((uVar2 & 1) == 0) && ((int)lVar3 == 0)) goto LAB_105dbfd74;
  if ((uVar2 & 1) == 0) {
    if ((int)lVar3 != 0) {
      lVar3 = param_1 + 8;
      _objc_loadWeakRetained();
      lVar5 = lVar3;
      func_0x00010befb5a0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105dbfd00;
    }
    lVar5 = 0;
  }
  else {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar5 = lVar3;
    func_0x00010c26fea0();
    _objc_retainAutoreleasedReturnValue();
LAB_105dbfd00:
    _objc_release(lVar3);
  }
  lVar3 = lVar5;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    func_0x00010c215960(param_1,param_2,lVar5,param_3);
    if (((uVar2 & 1) == 0) && ((*(byte *)(param_1 + 0x1f0) & 1) == 0)) {
      func_0x00010beb08a0(param_1);
    }
    func_0x00010c229620(param_1,param_2,*(undefined8 *)(param_1 + 0x208));
  }
  _objc_release(lVar5);
LAB_105dbfd74:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105dbfd8c; end: 105dbfddb; -[SCPreviewFeatureTimelineImpl setTimelineConfiguration:andPlayerHandler:] */

void FUN_105dbfd8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_storeWeak(param_1 + 0x20,param_3);
  _objc_storeWeak(param_1 + 0x38,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105dbfddc; end: 105dc07df; -[SCPreviewFeatureTimelineImpl timelineDidPlayToVideoIndex:lastIndex:shouldRestoreFiltersState:] */

void FUN_105dbfddc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  ulong param_9)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [48];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  *(undefined8 *)(param_5 + 0x60) = param_7;
  lVar2 = *(long *)(param_5 + 0x1f8);
  if (lVar2 == 0) {
    return;
  }
  func_0x00010c13afa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_5 + 0x160);
  func_0x00010befe940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f0c0();
  _objc_release();
  _dispatch_group_create();
  uVar4 = *(undefined8 *)(param_5 + 0x168);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010bf926c0();
  _objc_release(uVar4);
  if ((int)uVar9 == 0) {
    lVar19 = lVar2;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar19 == 0) {
      lVar5 = param_5 + 0x200;
      _objc_loadWeakRetained();
      lVar6 = lVar5;
      func_0x00010bfa2820();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar6;
      func_0x00010bf52160();
      _objc_release(lVar6);
      _objc_release(lVar5);
      lVar5 = 0;
      goto LAB_105dbff28;
    }
    _objc_retain();
    _objc_release(lVar19);
  }
  else {
    lVar5 = *(long *)(param_5 + 0xb8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar5;
    func_0x00010bf60ee0();
    _objc_retainAutoreleasedReturnValue();
LAB_105dbff28:
    _objc_release(lVar5);
    if (lVar19 == 0) {
      lVar19 = 0;
      goto LAB_105dc0198;
    }
  }
  lVar5 = param_5 + 0x200;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bfa2820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c80();
  func_0x000100841590();
  dVar22 = param_1;
  _objc_release(lVar6);
  _objc_release(lVar5);
  uVar7 = *(undefined8 *)(param_5 + 0x78);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010c1302a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  dVar20 = dVar22;
  func_0x00010c27ade0(lVar19);
  dVar21 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar22 = dVar22 + dVar21 * dVar20;
  uVar8 = *(undefined8 *)(param_5 + 0x78);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010c1302a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidY();
  dVar20 = dVar21;
  func_0x00010c27ae20(lVar19);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  lVar5 = param_5 + 0x200;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bfa2880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar22,dVar21 + param_1 * dVar20);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar7);
  func_0x00010c14e120(lVar19);
  dVar20 = dVar22;
  func_0x00010c14e120(lVar19);
  _CGAffineTransformMakeScale(&uStack_110,dVar22,dVar20);
  func_0x00010c141a80(lVar19);
  _CGAffineTransformMakeRotation(auStack_140);
  _CGAffineTransformConcat(&uStack_d8,&uStack_110,auStack_140);
  lVar5 = param_5 + 0x200;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bfa2880();
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = uStack_d0;
  uStack_110 = uStack_d8;
  uStack_f8 = uStack_c0;
  uStack_100 = uStack_c8;
  uStack_e8 = uStack_b0;
  uStack_f0 = uStack_b8;
  func_0x00010c219960();
  _objc_release(lVar6);
  _objc_release(lVar5);
  uVar9 = *(undefined8 *)(param_5 + 0x78);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf27a60(&uStack_110,lVar19);
  func_0x00010c2235a0(uVar9);
  _objc_release(uVar9);
  uVar4 = *(undefined8 *)(param_5 + 0xb8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c680();
  _objc_release(uVar9);
  _objc_release(uVar4);
LAB_105dc0198:
  lVar5 = lVar2;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_5 + 0x160);
  func_0x00010befe940(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f0c0();
  _objc_release(uVar9);
  _dispatch_group_enter(uVar3);
  uVar9 = *(undefined8 *)(param_5 + 0xc0);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_105dc07e0;
  puStack_150 = &UNK_110850cc8;
  _objc_retain(uVar3);
  uStack_148 = uVar3;
  func_0x00010c20bda0(uVar9);
  _objc_release(uVar9);
  lVar6 = lVar5;
  func_0x00010bf529e0();
  if (lVar6 != 0) {
    uVar9 = *(undefined8 *)(param_5 + 0x160);
    func_0x00010befe940(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94b80();
    _objc_release(uVar9);
  }
  lVar6 = lVar2;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_5 + 0x160);
  func_0x00010befe940(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f0c0();
  _objc_release(uVar9);
  uVar10 = *(ulong *)(param_5 + 0xa0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf30960();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x000108451380();
  _objc_release(uVar11);
  _objc_release(uVar10);
  if ((uVar12 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_5 + 0xa0);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178d00();
    _objc_release(uVar9);
  }
  lVar13 = lVar6;
  func_0x00010bf529e0();
  if (lVar13 != 0) {
    uVar9 = *(undefined8 *)(param_5 + 0x160);
    func_0x00010befe940(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94b80();
    _objc_release(uVar9);
  }
  lVar13 = lVar2;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_5 + 0x1f8);
  func_0x00010c13afa0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_5 + 0x160);
  func_0x00010befe940(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f0c0();
  _objc_release(uVar4);
  lVar14 = lVar13;
  func_0x00010c071ae0();
  if (((param_9 & 1) != 0) || ((int)lVar14 == 0)) {
    uVar4 = *(undefined8 *)(param_5 + 0x1e8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130e20();
    _objc_release(uVar4);
    lVar14 = lVar13;
    func_0x00010bf04980();
    if ((int)lVar14 != 0) {
      uVar4 = *(undefined8 *)(param_5 + 0x160);
      func_0x00010befe940(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf94b80();
      _objc_release(uVar4);
    }
  }
  lVar18 = *(long *)(param_5 + 0x1f8);
  uVar7 = *(undefined8 *)(param_5 + 0xb0);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010c273820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07d660();
  func_0x00010bf3d8c0(param_5);
  func_0x00010bf89fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar7);
  uVar4 = *(undefined8 *)(param_5 + 0x160);
  func_0x00010befe940(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f0c0();
  _objc_release(uVar4);
  lVar14 = param_5 + 8;
  _objc_loadWeakRetained(lVar14);
  lVar15 = lVar14;
  func_0x00010c0d2100();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280560();
  uVar7 = *(undefined8 *)(param_5 + 0xb0);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010c0d2180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193c00();
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  uVar4 = *(undefined8 *)(param_5 + 0xb0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c130de0();
  _objc_release(uVar4);
  lVar14 = param_5 + 0x18;
  _objc_loadWeakRetained(lVar14);
  lVar15 = lVar14;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c084f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  _objc_release(lVar14);
  func_0x00010bf529e0(lVar18);
  func_0x00010c21b4c0(lVar16);
  lVar14 = lVar18;
  func_0x00010bf529e0();
  if (lVar14 != 0) {
    uVar4 = *(undefined8 *)(param_5 + 0x160);
    func_0x00010befe940(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94b80();
    _objc_release(uVar4);
  }
  lVar14 = param_5 + 0x200;
  _objc_loadWeakRetained(lVar14);
  func_0x00010bfa2860();
  _objc_release(lVar14);
  uVar4 = *(undefined8 *)(param_5 + 0xe0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar2;
  func_0x00010bf0d660(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28ca40(uVar4);
  _objc_release(lVar14);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_5 + 0x58);
  lVar14 = lVar2;
  func_0x00010bfc0e60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2ac0(uVar4);
  _objc_release(lVar14);
  iVar1 = (int)*(undefined8 *)(param_5 + 0x1f8);
  func_0x00010bfd68e0();
  if (iVar1 != 0) {
    uVar4 = *(undefined8 *)(param_5 + 0x160);
    func_0x00010befe940(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94b80();
    _objc_release(uVar4);
  }
  _objc_initWeak(&uStack_110,param_5);
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_105dc07e8;
  puStack_178 = &UNK_1108434b0;
  _objc_copyWeak(auStack_170,&uStack_110);
  func_0x000100bc0718(uVar3,PTR___dispatch_main_q_11034be20,&puStack_190);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(&uStack_110);
  _objc_release(lVar16);
  _objc_release(lVar18);
  _objc_release(uVar9);
  _objc_release(lVar13);
  _objc_release(lVar6);
  _objc_release(uStack_148);
  _objc_release(lVar5);
  _objc_release(lVar19);
  _objc_release(uVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 105dc07e0; end: 105dc07e7;  */

void FUN_105dc07e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105dc07e8; end: 105dc081b;  */

void FUN_105dc07e8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bee2140(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dc081c; end: 105dc10fb; -[SCPreviewFeatureTimelineImpl exportToMultipleVideosForGallerySavingWithCompletion:] */

void FUN_105dc081c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  long lVar23;
  long lVar24;
  undefined *unaff_x23;
  undefined *puVar25;
  long lVar26;
  long lStack_248;
  long lStack_218;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar4 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar5 = uVar4;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c07f160();
  _objc_release(uVar5);
  _objc_release(uVar4);
  if ((uVar6 & 1) != 0) {
    lStack_248 = param_1;
    func_0x00010bfc8620();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = PTR_PTR_1126bf7a8;
    func_0x00010af219f8();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x23 == (undefined *)0x0) goto LAB_105dc10b8;
    *(undefined8 *)(unaff_x23 + 8) = 0;
    _objc_retain(unaff_x23);
    _objc_release(unaff_x23);
    *(undefined8 *)(unaff_x23 + 0x10) = 2;
    _objc_retain(unaff_x23);
    _objc_release(unaff_x23);
    unaff_x23[0x91] = 0;
    _objc_retain(unaff_x23);
    _objc_release(unaff_x23);
    *(undefined8 *)(unaff_x23 + 0xf8) = 0;
    _objc_retain(unaff_x23);
    puVar25 = unaff_x23;
    while( true ) {
      _objc_release(puVar25);
      puVar7 = PTR_PTR_1126bf7b0;
      func_0x00010af20be0();
      _objc_retainAutoreleasedReturnValue();
      lVar23 = param_1 + 8;
      _objc_loadWeakRetained();
      lVar8 = lVar23;
      func_0x00010c242400();
      if (puVar7 != (undefined *)0x0) {
        *(long *)(puVar7 + 8) = lVar8;
        _objc_retain(puVar7);
      }
      _objc_release(puVar7);
      _objc_release(lVar23);
      puVar9 = puVar7;
      func_0x00010af20ce8(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010af228f4(puVar25,puVar9);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar9);
      lVar23 = param_1 + 0x20;
      _objc_loadWeakRetained();
      lVar8 = lVar23;
      func_0x00010bf4b7e0();
      _objc_release(lVar23);
      if ((int)lVar8 != 0) {
        uVar10 = *(undefined8 *)(param_1 + 0x180);
        func_0x00010bf45e20();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar10;
        func_0x00010bf7f840();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar19;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010bf8ef40();
        bVar3 = (int)uVar12 == 0;
        puVar1 = (undefined8 *)0x11332ebf0;
        if (bVar3) {
          puVar1 = (undefined8 *)0x11332ec00;
        }
        puVar2 = (undefined8 *)0x11332ebe8;
        if (bVar3) {
          puVar2 = (undefined8 *)0x11332ebf8;
        }
        func_0x00010af2244c(*puVar2,*puVar1,puVar25);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar11);
        _objc_release(uVar19);
        _objc_release(uVar10);
      }
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uStack_118 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_120 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_110 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      lStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      plStack_150 = (long *)0x0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      lVar23 = param_1 + 0x20;
      _objc_loadWeakRetained();
      lVar8 = lVar23;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar23);
      lStack_218 = lVar8;
      func_0x00010bf52a60();
      if (lStack_218 != 0) {
        lVar23 = *plStack_150;
        do {
          lVar26 = 0;
          do {
            if (*plStack_150 != lVar23) {
              _objc_enumerationMutation(lVar8);
            }
            lVar24 = *(long *)(lStack_158 + lVar26 * 8);
            if (lVar24 == 0) {
              uStack_178 = 0;
              uStack_180 = 0;
              uStack_168 = 0;
              uStack_170 = 0;
              uStack_188 = 0;
              uStack_190 = 0;
            }
            else {
              func_0x00010c09e0e0(&uStack_190,lVar24);
            }
            lVar13 = lVar24;
            func_0x000107fb2960();
            uVar19 = 1;
            if ((int)lVar13 != 0) {
              uVar19 = 2;
            }
            puVar14 = PTR_PTR_1126bf6a0;
            _objc_alloc(PTR_PTR_1126bf6a0);
            puVar15 = PTR_PTR_1126bf698;
            func_0x00010bf0b7e0(lVar24);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf0b920(puVar15);
            _objc_retainAutoreleasedReturnValue();
            uStack_1a8 = uStack_188;
            uStack_1b0 = uStack_190;
            uStack_1a0 = uStack_180;
            puVar16 = PTR__OBJC_CLASS___NSValue_1126afdf8;
            func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
            _objc_retainAutoreleasedReturnValue();
            uStack_1a8 = uStack_170;
            uStack_1b0 = uStack_178;
            uStack_1a0 = uStack_168;
            puVar17 = PTR__OBJC_CLASS___NSValue_1126afdf8;
            func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
            _objc_retainAutoreleasedReturnValue();
            uStack_1a8 = uStack_118;
            uStack_1b0 = uStack_120;
            uStack_1a0 = uStack_110;
            puVar18 = PTR__OBJC_CLASS___NSValue_1126afdf8;
            func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010b7425e0(0x3ff0000000000000,puVar14,puVar15,uVar19,puVar16,puVar17,puVar18,0,
                                0,0);
            _objc_release(puVar18);
            _objc_release(puVar17);
            _objc_release(puVar16);
            _objc_release(puVar15);
            _objc_release(lVar24);
            func_0x00010befa120(puVar9);
            uStack_1a8 = uStack_118;
            uStack_1b0 = uStack_120;
            uStack_1a0 = uStack_110;
            uStack_1c8 = uStack_170;
            uStack_1d0 = uStack_178;
            uStack_1c0 = uStack_168;
            _CMTimeAdd(&uStack_120,&uStack_1b0,&uStack_1d0);
            _objc_release(puVar14);
            lVar26 = lVar26 + 1;
          } while (lStack_218 != lVar26);
          lStack_218 = lVar8;
          func_0x00010bf52a60();
        } while (lStack_218 != 0);
      }
      _objc_release(lVar8);
      puVar15 = PTR_PTR_1126bf7b8;
      func_0x00010af206d8();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar25;
      func_0x00010af22938(puVar25);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010af207cc(puVar15,puVar14);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar14);
      lVar23 = param_1 + 8;
      _objc_loadWeakRetained();
      lVar8 = lVar23;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      lVar26 = lVar8;
      func_0x00010c07f160();
      _objc_release(lVar8);
      _objc_release(lVar23);
      if ((int)lVar26 != 0) {
        uVar19 = *(undefined8 *)(param_1 + 0x1f8);
        func_0x00010bf8c880(uVar19);
        _objc_retainAutoreleasedReturnValue();
        lVar23 = param_1;
        func_0x00010be37640(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010af20810(puVar15,lVar23);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar23);
        _objc_release(uVar19);
      }
      puVar14 = PTR_PTR_1126bf6a8;
      _objc_alloc();
      func_0x00010b742360();
      puVar16 = PTR_PTR_1126bf6b0;
      _objc_alloc(PTR_PTR_1126bf6b0);
      puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_f8 = puVar14;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b742210(puVar16,puVar17);
      _objc_release(puVar17);
      puVar17 = PTR_PTR_1126bf6c0;
      _objc_alloc(PTR_PTR_1126bf6c0);
      func_0x00010b743b10();
      puVar18 = PTR_PTR_1126bf7c0;
      _objc_alloc(PTR_PTR_1126bf7c0);
      puVar20 = puVar15;
      func_0x00010af20854();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_100 = puVar20;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010af1fd14(puVar18,puVar17,puVar21);
      _objc_release(puVar21);
      _objc_release(puVar20);
      puVar20 = PTR_PTR_1126b1350;
      _objc_alloc(PTR_PTR_1126b1350);
      func_0x00010bfeee60();
      ppuVar22 = &PTR____CFConstantStringClassReference_110daafd8;
      func_0x000108553e88(&PTR____CFConstantStringClassReference_110daafd8,
                          &PTR____CFConstantStringClassReference_110dbab38,1,puVar20);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar20);
      puVar20 = PTR_PTR_1126c4a88;
      func_0x00010af200a8(PTR_PTR_1126c4a88);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010af200fc();
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar21 = puVar20;
      func_0x00010af200c8(puVar20);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(&uStack_190,param_1);
      unaff_x23 = *(undefined **)(param_1 + 0x120);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_1d8,&uStack_190);
      _objc_retain(param_3);
      _objc_retain(ppuVar22);
      _objc_retain(lStack_248);
      func_0x00010c25f8e0(unaff_x23);
      _objc_release(unaff_x23);
      _objc_release(lStack_248);
      _objc_release(ppuVar22);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_1d8);
      _objc_destroyWeak(&uStack_190);
      _objc_release(puVar21);
      _objc_release(puVar20);
      _objc_release(ppuVar22);
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(puVar14);
      _objc_release(puVar15);
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_release(puVar25);
      _objc_release(lStack_248);
      param_1 = lStack_248;
LAB_105dc1074:
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) break;
      ___stack_chk_fail();
LAB_105dc10b8:
      _objc_release();
      _objc_release(0);
      _objc_release(0);
      puVar25 = unaff_x23;
    }
    return;
  }
  func_0x00010be0c9a0(param_1);
  goto LAB_105dc1074;
}



/* Entry: 105dc10fc; end: 105dc124f;  */

void FUN_105dc10fc(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [8];
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined1 *puStack_1f8;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [128];
  long lStack_d0;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = param_5;
  _objc_retain(param_5);
  lVar17 = param_2 + 0x38;
  _objc_loadWeakRetained();
  if ((lVar17 == 0) || (param_3 == 2)) {
    lVar15 = *(long *)(param_2 + 0x30);
    pcVar14 = *(code **)(lVar15 + 0x10);
    puVar1 = param_5;
  }
  else {
    if (param_3 != 1) {
      if (param_3 == 0) {
        lVar15 = *(long *)(param_2 + 0x30);
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar1;
        (**(code **)(lVar15 + 0x10))(lVar15,1,0,puVar1,puVar3);
        _objc_release(puVar3);
        _objc_release(puVar1);
      }
      goto LAB_105dc120c;
    }
    lVar15 = *(long *)(param_2 + 0x30);
    pcVar14 = *(code **)(lVar15 + 0x10);
    puVar1 = (undefined *)0x0;
  }
  puVar11 = (undefined *)0x0;
  (*pcVar14)(lVar15,0,puVar1,0,0);
LAB_105dc120c:
  _objc_release(lVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar11);
  puVar1 = PTR_PTR_1126c4a90;
  func_0x00010af23194();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1350;
  _objc_alloc(PTR_PTR_1126b1350);
  func_0x00010bfeee60();
  func_0x00010af234ac(puVar1,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c29aae0(puVar11);
  if (puVar1 != (undefined *)0x0) {
    *(undefined8 *)(puVar1 + 0x38) = param_1;
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_5 + 0x168);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf926c0();
  _objc_release(uVar2);
  if ((int)uVar7 == 0) {
    puVar3 = puVar11;
    func_0x00010bf5c9c0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af23338(puVar1,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    puVar3 = *(undefined **)(param_5 + 0x168);
    func_0x00010c240000(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126affe8;
    func_0x00010c09e180(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x000107ffcb24(puVar3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af23338(puVar1,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  puVar4 = PTR_PTR_1126c3c98;
  _objc_alloc();
  puVar3 = param_5 + 8;
  _objc_loadWeakRetained();
  _objc_retain();
  puVar5 = puVar3;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c081be0();
  if ((int)puVar6 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_5 + 0xf8);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_5 + 0x50);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001ea0();
  _objc_release(uVar2);
  if ((int)puVar6 != 0) {
    _objc_release(uVar7);
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010c0918c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af233e0(puVar1,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  puVar5 = puVar11;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c27e680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar10 = &uStack_190;
  puVar12 = auStack_150;
  puVar5 = puVar6;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lVar17 = *plStack_180;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if (*plStack_180 != lVar17) {
          _objc_enumerationMutation(puVar6);
        }
        puVar8 = PTR_PTR_1126c4798;
        _objc_alloc(PTR_PTR_1126c4798);
        func_0x00010c0131a0();
        func_0x00010befa120(puVar3);
        _objc_release(puVar8);
        puVar16 = puVar16 + 1;
      } while (puVar5 != puVar16);
      puVar10 = &uStack_190;
      puVar12 = auStack_150;
      puVar5 = puVar6;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar6);
  func_0x00010af2326c(puVar1,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = param_5 + 8;
  _objc_loadWeakRetained();
  puVar6 = puVar5;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar6;
  func_0x00010c07f160();
  _objc_release(puVar6);
  _objc_release(puVar5);
  if ((int)puVar16 != 0) {
    puVar5 = param_5 + 8;
    _objc_loadWeakRetained();
    puVar6 = puVar5;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar6;
    func_0x00010c2490c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar16;
    func_0x000109024c88(0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
    _objc_release(puVar6);
    _objc_release(puVar5);
    if (puVar8 != (undefined *)0x0) {
      func_0x00010af23424(puVar1,puVar8);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    param_5 = param_5 + 8;
    _objc_loadWeakRetained(param_5);
    puVar5 = param_5;
    func_0x00010c249660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af23468(puVar1,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(param_5);
    _objc_release(puVar8);
  }
  puVar5 = puVar1;
  func_0x00010af23500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  _objc_retain(puVar12);
  if ((puVar10 != (undefined8 *)0x0) && (puVar12 != (undefined1 *)0x0)) {
    puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_210 = 0xc2000000;
    pcStack_208 = FUN_105dc1888;
    puStack_200 = &UNK_110857fa0;
    _objc_retain(puVar12);
    ppuVar9 = &puStack_218;
    puStack_1f8 = puVar12;
    _objc_retainBlock();
    _objc_initWeak(auStack_220,puVar11);
    _objc_retain(puVar10);
    _objc_copyWeak(auStack_228,auStack_220);
    _objc_retain(ppuVar9);
    _objc_retain(puVar12);
    func_0x00010bf9cf00(puVar11);
    _objc_release(puVar12);
    _objc_release(ppuVar9);
    _objc_destroyWeak(auStack_228);
    _objc_release(puVar10);
    _objc_destroyWeak(auStack_220);
    _objc_release(ppuVar9);
    _objc_release(puStack_1f8);
  }
  _objc_release(puVar12);
  _objc_release(puVar10);
  return;
}



/* Entry: 105dc1250; end: 105dc171b; -[SCPreviewFeatureTimelineImpl _imageProcessDataForIndex:editingState:] */

void FUN_105dc1250(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [8];
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined1 *puStack_198;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c4a90;
  func_0x00010af23194();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1350;
  _objc_alloc(PTR_PTR_1126b1350);
  func_0x00010bfeee60();
  func_0x00010af234ac(puVar1,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c29aae0(param_5);
  if (puVar1 != (undefined *)0x0) {
    *(undefined8 *)(puVar1 + 0x38) = param_1;
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x168);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf926c0();
  _objc_release(uVar3);
  if ((int)uVar6 == 0) {
    lVar4 = param_5;
    func_0x00010bf5c9c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af23338(puVar1,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    lVar4 = *(long *)(param_2 + 0x168);
    func_0x00010c240000(lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126affe8;
    func_0x00010c09e180(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x000107ffcb24(lVar4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af23338(puVar1,lVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(puVar2);
  }
  _objc_release(lVar4);
  puVar2 = PTR_PTR_1126c3c98;
  _objc_alloc();
  lVar4 = param_2 + 8;
  _objc_loadWeakRetained();
  _objc_retain();
  lVar5 = lVar4;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar5;
  func_0x00010c081be0();
  if ((int)lVar13 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0xf8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001ea0();
  _objc_release(uVar3);
  if ((int)lVar13 != 0) {
    _objc_release(uVar6);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar4);
  puVar7 = puVar2;
  func_0x00010c0918c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af233e0(puVar1,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar4 = param_5;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c27e680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  puVar10 = &uStack_130;
  puVar11 = auStack_f0;
  lVar4 = lVar5;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar5);
        }
        puVar8 = PTR_PTR_1126c4798;
        _objc_alloc(PTR_PTR_1126c4798);
        func_0x00010c0131a0();
        func_0x00010befa120(puVar7);
        _objc_release(puVar8);
        lVar12 = lVar12 + 1;
      } while (lVar4 != lVar12);
      puVar10 = &uStack_130;
      puVar11 = auStack_f0;
      lVar4 = lVar5;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar5);
  func_0x00010af2326c(puVar1,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar4 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar5;
  func_0x00010c07f160();
  _objc_release(lVar5);
  _objc_release(lVar4);
  if ((int)lVar13 != 0) {
    lVar4 = param_2 + 8;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar5;
    func_0x00010c2490c0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar13;
    func_0x000109024c88(0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar13);
    _objc_release(lVar5);
    _objc_release(lVar4);
    if (lVar12 != 0) {
      func_0x00010af23424(puVar1,lVar12);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    param_2 = param_2 + 8;
    _objc_loadWeakRetained(param_2);
    lVar4 = param_2;
    func_0x00010c249660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af23468(puVar1,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(param_2);
    _objc_release(lVar12);
  }
  puVar8 = puVar1;
  func_0x00010af23500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  if ((puVar10 != (undefined8 *)0x0) && (puVar11 != (undefined1 *)0x0)) {
    puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b0 = 0xc2000000;
    pcStack_1a8 = FUN_105dc1888;
    puStack_1a0 = &UNK_110857fa0;
    _objc_retain(puVar11);
    ppuVar9 = &puStack_1b8;
    puStack_198 = puVar11;
    _objc_retainBlock();
    _objc_initWeak(auStack_1c0,param_5);
    _objc_retain(puVar10);
    _objc_copyWeak(auStack_1c8,auStack_1c0);
    _objc_retain(ppuVar9);
    _objc_retain(puVar11);
    func_0x00010bf9cf00(param_5);
    _objc_release(puVar11);
    _objc_release(ppuVar9);
    _objc_destroyWeak(auStack_1c8);
    _objc_release(puVar10);
    _objc_destroyWeak(auStack_1c0);
    _objc_release(ppuVar9);
    _objc_release(puStack_198);
  }
  _objc_release(puVar11);
  _objc_release(puVar10);
  return;
}



/* Entry: 105dc171c; end: 105dc1887; -[SCPreviewFeatureTimelineImpl saveToCameraRollWithExportCompletion:saveToSnapAlbumCompletion:] */

void FUN_105dc171c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105dc1888;
    puStack_60 = &UNK_110857fa0;
    _objc_retain(param_4);
    ppuVar1 = &puStack_78;
    lStack_58 = param_4;
    _objc_retainBlock();
    _objc_initWeak(auStack_80,param_1);
    _objc_retain(param_3);
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(ppuVar1);
    _objc_retain(param_4);
    func_0x00010bf9cf00(param_1);
    _objc_release(param_4);
    _objc_release(ppuVar1);
    _objc_destroyWeak(auStack_88);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_release(ppuVar1);
    _objc_release(lStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105dc1888; end: 105dc1947;  */

void FUN_105dc1888(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1348;
  _objc_retain(param_2);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c14af80(puVar1);
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 105dc1948; end: 105dc1953;  */

void FUN_105dc1948(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105dc1950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105dc1954; end: 105dc1aef;  */

void FUN_105dc1954(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
  if (param_3 == 0) {
    lVar2 = param_1 + 0x38;
    _objc_loadWeakRetained();
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      uVar1 = param_2;
      func_0x00010c28f340(param_2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,uVar1,0);
      _objc_release(uVar1);
      lVar2 = 0;
    }
    else {
      uVar1 = param_2;
      func_0x00010c28f340(param_2);
      _objc_retainAutoreleasedReturnValue();
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_105dc1af0;
      puStack_50 = &UNK_110857fa0;
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar3);
      uStack_48 = uVar3;
      func_0x00010bdd0960(lVar2);
      _objc_release(uVar1);
      _objc_release(uStack_48);
    }
  }
  else {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x105dc1b04;
    puStack_80 = &UNK_11084aaa8;
    lVar2 = *(long *)(param_1 + 0x30);
    _objc_retain(lVar2);
    lStack_70 = lVar2;
    _objc_retain(param_3);
    lStack_78 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_98);
    _objc_release(lStack_78);
    lVar2 = lStack_70;
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105dc1af0; end: 105dc1b13;  */

void FUN_105dc1af0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105dc1afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105dc1b14; end: 105dc1b6b;  */

void FUN_105dc1b14(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x38,param_2 + 0x38);
  return;
}



/* Entry: 105dc1b6c; end: 105dc1eb7; -[SCPreviewFeatureTimelineImpl _attachWatermarkIfNeededForVideoUrl:completion:] */

void FUN_105dc1b6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_retain(uVar3);
  uVar1 = uVar3;
  func_0x00010c074540();
  if ((uVar1 & 1) == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,param_3,0);
    }
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x1b0);
    func_0x00010c2a29c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c094540(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0d4f60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf43020(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c092080();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar1;
    func_0x00010c097fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar4);
    uVar1 = uVar9;
    func_0x00010c2357e0();
    if ((uVar1 & 1) == 0) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))(param_4,param_3,0);
      }
    }
    else {
      puVar10 = PTR_PTR_1126c4288;
      func_0x00010b68eef4();
      _objc_retainAutoreleasedReturnValue();
      if (puVar10 != (undefined *)0x0) {
        puVar10[0x1b] = 1;
        _objc_retain(puVar10);
      }
      _objc_release(puVar10);
      puVar11 = puVar10;
      func_0x00010b68f1bc(puVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + 0xe8);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010bf58fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      uVar12 = *(undefined8 *)(param_1 + 0x198);
      func_0x00010c29af00(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c221d20(uVar13);
      func_0x00010c224ac0(uVar13);
      _objc_retain(param_4);
      _objc_retain(param_3);
      func_0x00010bfae7c0(*(undefined8 *)PTR__CGSizeZero_110347620,
                          *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),uVar13);
      _objc_release(param_3);
      _objc_release(param_4);
      _objc_release(uVar12);
      _objc_release(uVar13);
      _objc_release(puVar11);
      _objc_release(puVar10);
    }
    _objc_release(uVar9);
  }
  _objc_release(uVar3);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105dc1eb8; end: 105dc1f5b;  */

void FUN_105dc1eb8(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + 0x28);
  if ((param_2 == 0) || (param_4 != 0)) {
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,*(undefined8 *)(param_1 + 0x20),0);
    }
  }
  else if (lVar2 != 0) {
    lVar1 = param_2;
    func_0x00010c28f340(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,lVar1,0);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105dc1f5c; end: 105dc20e3; -[SCPreviewFeatureTimelineImpl exportBakedInEffectsToURLWithCompletion:] */

void FUN_105dc1f5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c4288;
  _objc_retain(param_3);
  func_0x00010b68eef4();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar1[0x1b] = 1;
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  puVar2 = puVar1;
  func_0x00010b68f1bc(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c1093c0(param_1,param_2,0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x158);
  func_0x00010bf982e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbf4c0(lVar3,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x168);
  func_0x00010c08f640(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c109380();
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010c290680(lVar3,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c109dc0(param_1,param_2,lVar3,puVar2);
  func_0x00010c21d9a0(lVar3,param_2,0);
  func_0x00010c1f5d00(lVar3,param_2,1);
  func_0x00010c1a8660(lVar3,param_2,1);
  func_0x00010c251480(lVar3);
  _objc_release(lVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105dc20e4; end: 105dc24ff; -[SCPreviewFeatureTimelineImpl prepareEphemeralMediaListWithSegmentation:destinationInfo:] */

void FUN_105dc20e4(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined8 uVar21;
  undefined1 auStack_160 [8];
  undefined8 uStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  puStack_88 = (undefined *)CONCAT44(puStack_88._4_4_,param_3);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_90 = param_4;
  _objc_retain(param_4);
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar5;
  func_0x00010c06e820();
  uStack_98 = 5;
  if ((int)lVar11 == 0) {
    uStack_98 = 0;
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar5 = *(long *)(param_1 + 0x1c8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010bf08000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  puVar6 = PTR_PTR_1126c4798;
  lStack_80 = lVar4;
  func_0x00010c0b7b40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c4290;
  _objc_alloc();
  lVar4 = param_1 + 0x20;
  puStack_a8 = puVar7;
  _objc_loadWeakRetained();
  uStack_b0 = *(undefined8 *)(param_1 + 0x1c0);
  lVar8 = *(long *)(param_1 + 0x1d0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar8;
  func_0x00010c0918e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar10 = lVar5;
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c243320();
  _objc_retainAutoreleasedReturnValue();
  uStack_c0 = *(undefined8 *)(param_1 + 0x40);
  uStack_c8 = uStack_98;
  uStack_d0 = SUB81(puStack_88,0);
  puVar7 = puStack_a8;
  lStack_e0 = lVar12;
  puStack_d8 = puVar6;
  puStack_88 = puVar6;
  func_0x00010c052700();
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar5);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lStack_a0);
  _objc_release(lVar4);
  lVar11 = *(long *)(param_1 + 0x78);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar11;
  func_0x00010bf14000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar11);
  if (lVar5 != 0) {
    lVar12 = *(long *)(param_1 + 0x78);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar12;
    func_0x00010bf14000();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c274320();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(param_1 + 0x78);
    lStack_78 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar11;
    func_0x00010bf14000();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar10;
    func_0x00010bf20040();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = lVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e4e0(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar8);
    _objc_release(lVar10);
    _objc_release(lVar11);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar12);
  }
  lVar5 = param_1 + 8;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c07e620();
  func_0x00010c1b13a0(puVar7);
  _objc_release(lVar5);
  uVar9 = uStack_90;
  uVar21 = uStack_90;
  func_0x00010c219700(puVar7);
  _objc_release(uVar9);
  lVar5 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar11 = lVar5;
  func_0x00010bf4b7e0();
  _objc_release(lVar5);
  if ((int)lVar11 != 0) {
    lVar5 = *(long *)(param_1 + 0x180);
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar5;
    func_0x00010bf7f840();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar11;
    func_0x00010bf8ef40();
    bVar3 = (int)lVar13 == 0;
    puVar1 = (undefined8 *)0x11332ebf0;
    if (bVar3) {
      puVar1 = (undefined8 *)0x11332ec00;
    }
    puVar2 = (undefined8 *)0x11332ebe8;
    if (bVar3) {
      puVar2 = (undefined8 *)0x11332ebf8;
    }
    func_0x00010c1ad7a0(*puVar2,*puVar1,puVar7);
    _objc_release(lVar11);
    _objc_release(param_1);
    _objc_release(lVar5);
  }
  _objc_release(puStack_88);
  lVar13 = lStack_80;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_105dc2500;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = auStack_150;
  lStack_130 = lVar8;
  lStack_128 = lVar4;
  lStack_120 = lVar12;
  lStack_118 = lVar10;
  lStack_110 = lVar11;
  puStack_108 = puVar7;
  lStack_100 = param_1;
  lStack_f8 = lVar5;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_initWeak(puVar14,lVar13);
  puVar6 = PTR_PTR_1126aed70;
  func_0x000108ede600();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = auStack_150;
  _objc_copyWeak(auStack_160,puVar20);
  uStack_158 = uVar21;
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  puVar7 = PTR_PTR_1126aed70;
  func_0x000108ede780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  puVar15 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar16 = puVar15;
  func_0x000108ede690();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x000108edecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_148 = puVar6;
  puStack_140 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  func_0x00010c211b40(puVar15);
  uVar9 = *(undefined8 *)(lVar13 + 0xa8);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237000();
  _objc_release(uVar9);
  _objc_release(puVar15);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_160);
  puVar14 = auStack_150;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_150);
  __Unwind_Resume();
  _objc_retain(puVar20);
  puVar14 = puVar14 + 0x20;
  _objc_loadWeakRetained();
  if (puVar14 != (undefined1 *)0x0) {
    puVar19 = puVar14 + 0x20;
    _objc_loadWeakRetained(puVar19);
    func_0x00010c1e1c00();
    _objc_release(puVar19);
    puVar19 = puVar14 + 0x200;
    _objc_loadWeakRetained(puVar19);
    func_0x00010bfa2800();
    _objc_release(puVar19);
    func_0x00010bf84b00(puVar20);
  }
  _objc_release(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar20);
  return;
}



/* Entry: 105dc2500; end: 105dc2763; -[SCPreviewFeatureTimelineImpl showDiscardWarningWithPreviewExitType:] */

void FUN_105dc2500(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_70;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000108ede600();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = auStack_70;
  _objc_copyWeak(auStack_80,puVar10);
  uStack_78 = param_3;
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000108ede780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x000108ede690();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000108edecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar2;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c211b40(puVar4);
  uVar8 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237000();
  _objc_release(uVar8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_80);
  puVar1 = auStack_70;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  _objc_retain(puVar10);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained();
  if (puVar1 != (undefined1 *)0x0) {
    puVar9 = puVar1 + 0x20;
    _objc_loadWeakRetained(puVar9);
    func_0x00010c1e1c00();
    _objc_release(puVar9);
    puVar9 = puVar1 + 0x200;
    _objc_loadWeakRetained(puVar9);
    func_0x00010bfa2800();
    _objc_release(puVar9);
    func_0x00010bf84b00(puVar10);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 105dc2764; end: 105dc27f7;  */

void FUN_105dc2764(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1e1c00();
    _objc_release(lVar1);
    lVar1 = param_1 + 0x200;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfa2800();
    _objc_release(lVar1);
    func_0x00010bf84b00(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105dc27f8; end: 105dc2807;  */

void FUN_105dc27f8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105dc2808; end: 105dc293b; -[SCPreviewFeatureTimelineImpl tryToShowRecordMoreTooltipBalloon] */

undefined8 FUN_105dc2808(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
  }
  else {
    func_0x00010c276460(&uStack_68,lVar1);
  }
  _CMTimeGetSeconds(&uStack_68);
  uVar2 = *(undefined8 *)(param_2 + 0x180);
  dVar6 = param_1;
  func_0x00010bf45e20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c123da0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c276a00();
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(lVar1);
  lVar1 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c0811c0();
  _objc_release(lVar1);
  uVar5 = 0;
  if (((int)lVar4 != 0) && (param_1 < dVar6 + -0.5)) {
    uVar5 = *(undefined8 *)(param_2 + 0x208);
    func_0x000108eded38();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c239840(0x4008000000000000,uVar5,param_3,lVar1);
    _objc_release(lVar1);
  }
  return uVar5;
}



/* Entry: 105dc293c; end: 105dc29ab; -[SCPreviewFeatureTimelineImpl tryToShowAddMoreSnapsTooltip] */

long FUN_105dc293c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c06ba20();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x208);
    func_0x000108eded20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235b20(uVar3,param_2,lVar1);
    _objc_release(lVar1);
  }
  return lVar2;
}



/* Entry: 105dc29ac; end: 105dc2a87; -[SCPreviewFeatureTimelineImpl tryToShowTimelineDraftEditFromMemoriesTooltip] */

long FUN_105dc29ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c07e620();
  if ((int)lVar2 == 0) {
    param_1 = 0;
  }
  else {
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 != 8) {
      return 0;
    }
    FUN_105dcea84();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bebb8c0(param_1,param_2,lVar1);
  }
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 105dc2a88; end: 105dc2ac3; -[SCPreviewFeatureTimelineImpl showApplyVideoEffectTooltip] */

void FUN_105dc2a88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001085936b8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebb8c0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105dc2ac4; end: 105dc2b83; -[SCPreviewFeatureTimelineImpl _showTootipAboveCollapsedThumbnailWithText:] */

bool FUN_105dc2ac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x208);
  func_0x00010bfb0fa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 200);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x208);
    func_0x00010bfb0fa0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23a8c0(0xc034000000000000,0x4014000000000000,uVar2,param_2,param_3,uVar3,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 105dc2b84; end: 105dc2b8b; -[SCPreviewFeatureTimelineImpl deselectSelectedSegmentIfAny] */

void FUN_105dc2b84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6e8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x208),PTR_s_deselectSelectedSegmentIfAny_1125b93d0);
  return;
}



/* Entry: 105dc2b8c; end: 105dc2f9f; -[SCPreviewFeatureTimelineImpl discardAllSegments] */

void FUN_105dc2b8c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_170;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0811c0();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    puStack_170 = (undefined *)0x0;
  }
  else {
    puStack_170 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar3 = lVar1;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puStack_170);
    func_0x00010bf97e80(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(puStack_170);
  }
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1e1c00();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  func_0x00010bf6b5c0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    _objc_retain(puStack_170);
    puVar4 = puStack_170;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puStack_170);
        }
        uVar5 = *(undefined8 *)(param_1 + 0x68);
        func_0x00010c23fba0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + 0x88);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar7;
        func_0x00010c1001c0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_1 + 8;
        _objc_loadWeakRetained();
        func_0x00010bf2b540();
        func_0x00010c0a2440(uVar6);
        _objc_release(lVar2);
        _objc_release(uVar11);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        puVar10 = puVar10 + 1;
      } while (puVar4 != puVar10);
      puVar4 = puStack_170;
      func_0x00010bf52a60();
    }
    _objc_release(puStack_170);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(*(long *)(puStack_170 + 0x20) + 0x68);
  _objc_retain(param_2);
  func_0x00010c23fba0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_2;
  func_0x00010bf311e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(*(long *)(puStack_170 + 0x20) + 0x88);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x00010c1001c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(puStack_170 + 0x20) + 8;
  _objc_loadWeakRetained();
  func_0x00010bf2b540();
  func_0x00010c0a2440(uVar6);
  _objc_release(lVar1);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar11);
  _objc_release(uVar6);
  _objc_release(uVar7);
  uVar11 = *(undefined8 *)(puStack_170 + 0x28);
  uVar6 = param_2;
  func_0x00010bf311e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c14c720(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 105dc2fa0; end: 105dc2fe7; -[SCPreviewFeatureTimelineImpl setMusicPickerSelection:] */

void FUN_105dc2fa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1c9fc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dc2fe8; end: 105dc306f; -[SCPreviewFeatureTimelineImpl globalEditingState] */

void FUN_105dc2fe8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c070a20();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x1f8);
  if ((int)lVar2 == 0) {
    func_0x00010c09df80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  else {
    func_0x00010bfcd140();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105dc3070; end: 105dc310b; -[SCPreviewFeatureTimelineImpl getOutputVideoTimeRangeForGallerySaving] */

void FUN_105dc3070(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [48];
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
  }
  else {
    func_0x00010c276460(&uStack_68,param_1);
  }
  uStack_78 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_80 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_70 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  _CMTimeRangeMake(auStack_50,&uStack_80,&uStack_68);
  func_0x00010c297240(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105dc310c; end: 105dc32eb; -[SCPreviewFeatureTimelineImpl saveFilterDataWithInfoStickerDataProvider:] */

void FUN_105dc310c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar3 = PTR_PTR_1126b00e8;
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c110b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c270220(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = puVar3;
  func_0x00010c14b920(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c4a98;
  _objc_alloc(PTR_PTR_1126c4a98);
  uVar9 = param_3;
  func_0x00010bfcc320(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfcb380(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bfc2f40(param_3);
  uVar8 = param_3;
  func_0x00010bfc2420(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c026c40(puVar5,param_2,0,uVar9,uVar6,uVar7,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar9);
  func_0x00010c1ac520(puVar4,param_2,puVar5);
  uVar9 = *(undefined8 *)(param_1 + 0x1d8);
  func_0x00010bfc1240(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2be0(puVar4,param_2,uVar9);
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + 0x1d8);
  func_0x00010bfc1160(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2b80(puVar4,param_2,uVar9);
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + 0x1e0);
  func_0x00010c297ce0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220880(puVar4,param_2,uVar9);
  _objc_release(uVar9);
  func_0x00010bee7b80(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105dc32ec; end: 105dc345b; -[SCPreviewFeatureTimelineImpl updateSnapCommonLoggingParamsBuilder:] */

void FUN_105dc32ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  func_0x00010be6ede0(param_1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c242f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  lVar3 = *(long *)(param_1 + 0x1f8);
  func_0x00010c09df80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  if (lVar1 == lVar4) {
    lVar1 = param_1;
    func_0x00010be5fbe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b8060(param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
    }
    else {
      func_0x00010c276460(&uStack_58,lVar1);
    }
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 == 0) {
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x00010c276200(&uStack_70,param_1);
    }
    _CMTimeCompare(&uStack_58,&uStack_70);
    _objc_release(param_1);
    _objc_release(lVar1);
    func_0x00010c2bbc80(param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105dc345c; end: 105dc3567; -[SCPreviewFeatureTimelineImpl _overrideSnapSourceIfNecessary:] */

void FUN_105dc345c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c1581e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = param_1 + 0x20;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c243400();
    _objc_release(uVar3);
    if (uVar5 - 0xb < 2) {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc0000000;
      pcStack_48 = FUN_105dc3568;
      puStack_40 = &UNK_1108e9870;
      uVar3 = uVar4;
      uStack_38 = uVar5;
      func_0x00010bf04920(uVar4,param_2,&puStack_58);
      if ((uVar3 & 1) == 0) {
        func_0x00010c2b9b80(param_3,param_2,uVar5);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
    }
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105dc3568; end: 105dc3597;  */

bool FUN_105dc3568(long param_1,long param_2)

{
  func_0x00010c243400(param_2);
  return param_2 != *(long *)(param_1 + 0x20);
}



/* Entry: 105dc3598; end: 105dc3657; -[SCPreviewFeatureTimelineImpl _mergedSegmentLoggingParamsFromExistingSegmentLoggingParamsArray:] */

void FUN_105dc3598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  uVar1 = param_3;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105dc3658; end: 105dc397b;  */

void FUN_105dc3658(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126affe8;
  _objc_retain(param_3);
  func_0x00010c09e180(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_2 + 0x20) + 0x1f8);
  func_0x00010c09df80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(*(long *)(param_2 + 0x28) + 8);
  *(long *)(lVar9 + 0x18) = *(long *)(lVar9 + 0x18) + 1;
  lVar9 = lVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x168);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf926c0();
  _objc_release(uVar3);
  if ((int)uVar4 == 0) {
    lVar2 = lVar9;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar5 = *(long *)(*(long *)(param_2 + 0x20) + 0x168);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x000107ffcb24();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
  }
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0xb8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfe6060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c072080(lVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  puVar6 = PTR_PTR_1126c4588;
  uVar4 = param_3;
  func_0x00010bf429e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23f8a0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010c2ab6a0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar5 = lVar9;
  func_0x00010bf308c0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c2aa120(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar9;
  func_0x00010bf8a020(lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c2aca40(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar9;
  func_0x00010c2553e0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c2ba100(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  puVar7 = PTR_PTR_1126c4aa0;
  _objc_alloc(PTR_PTR_1126c4aa0);
  func_0x00010c158380(param_3);
  func_0x00010c27c8a0(param_3);
  func_0x00010c27c980(param_3);
  puVar8 = puVar6;
  func_0x00010bf21f60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c67c0(param_3);
  _objc_release(param_3);
  func_0x00010c0439e0(param_1,puVar7);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release(lVar9);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105dc397c; end: 105dc3c03; -[SCPreviewFeatureTimelineImpl prepareAddSnapConfiguration:withVideoFuture:captureSessionID:lensSessionID:activeLensID:activeLensMusicTrackMetadata:activeCameraModes:completion:] */

void FUN_105dc397c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar1 = param_3;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar3;
    _objc_release(uVar4);
    _objc_initWeak(auStack_68,param_1);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    _objc_retain(param_7);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_8);
    _objc_retain(param_9);
    lVar1 = param_10;
    _objc_retain(param_10);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(param_4);
    _objc_release(lVar1);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_7);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  else if (param_10 != 0) {
    (**(code **)(param_10 + 0x10))(param_10);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105dc3c04; end: 105dc3e27;  */

void FUN_105dc3c04(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_105dc3e28;
    puStack_b8 = &UNK_1108e9240;
    _objc_retain(param_2);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uStack_b0 = param_2;
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uStack_a8 = uVar5;
    _objc_retain(uVar6);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uStack_a0 = uVar6;
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uStack_98 = uVar5;
    _objc_retain(uVar6);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    uStack_90 = uVar6;
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    uStack_88 = uVar5;
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    uStack_80 = uVar6;
    _objc_retain(uVar7);
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    uStack_78 = uVar7;
    _objc_retain(uVar5);
    ppuVar2 = &puStack_d0;
    lStack_70 = lVar1;
    uStack_68 = uVar5;
    _objc_retainBlock();
    puVar3 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0(PTR_PTR_1126ae790);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar4);
    _objc_retain(param_2);
    _objc_retain(ppuVar2);
    func_0x00010c0f7fc0(puVar3);
    _objc_release(ppuVar2);
    _objc_release(param_2);
    _objc_release(ppuVar2);
    _objc_release(puVar3);
    _objc_release(uStack_68);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105dc3e28; end: 105dc3f97;  */

void FUN_105dc3e28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c299d80(uVar3);
  _CMTimeMakeWithSeconds(auStack_58,600);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29bb40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9540(uVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  func_0x00010c221880(uVar1);
  puVar2 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c19d080(uVar1);
  _objc_release(puVar2);
  func_0x00010c179260(uVar1);
  func_0x00010c1bcbe0(uVar1);
  func_0x00010c162820(uVar1);
  func_0x00010c162880(uVar1);
  func_0x00010c162560(uVar1);
  func_0x00010befb2c0(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(param_1 + 0x68) + 0x10))();
  }
  func_0x00010bf43d60(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1b8));
  _objc_release(uVar1);
  return;
}



/* Entry: 105dc3f98; end: 105dc400b;  */

void FUN_105dc3f98(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),7);
  return;
}



/* Entry: 105dc400c; end: 105dc41c3;  */

void FUN_105dc400c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010c0fd9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___AVAsset_1126aff38;
  if (puVar1 == (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c29bb40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0b9e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
    _objc_alloc(PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170);
    func_0x00010bff41a0();
    func_0x00010c169b80();
    uStack_58 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_60 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_50 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar5 = puVar4;
    func_0x00010bf51e60(puVar4);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_alloc();
    func_0x00010bffa220();
    _CGImageRelease(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  puVar3 = puVar1;
  func_0x00010c14e6c0(0x4041800000000000,0x404f000000000000,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105dc41c4;
  puStack_80 = &UNK_11084a9e8;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  puStack_78 = puVar1;
  puStack_70 = puVar3;
  uStack_68 = uVar2;
  _objc_retain(puVar3);
  _objc_retain(puVar1);
  func_0x000100162d98("APPSTORE",&puStack_98);
  _objc_release(puStack_70);
  _objc_release(puStack_78);
  _objc_release(uStack_68);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 105dc41c4; end: 105dc41d7;  */

void FUN_105dc41c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105dc41d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105dc41d8; end: 105dc41eb; -[SCPreviewFeatureTimelineImpl setAddSnapThumbnailsHidden:] */

void FUN_105dc41d8(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24eb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x208),PTR_s_startEnterEditingModeWithThumbna_1126714e8,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c13fe90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x208),PTR_s_revealThumbnails_11262d9c0);
  return;
}



/* Entry: 105dc41ec; end: 105dc4293; -[SCPreviewFeatureTimelineImpl updateAddSnapTrimmedTimeRange:] */

void FUN_105dc41ec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010befb5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a5e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 105dc4294; end: 105dc42d7; -[SCPreviewFeatureTimelineImpl removeThumbnailsView] */

void FUN_105dc4294(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x208);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x208) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105dc42d8; end: 105dc4437; -[SCPreviewFeatureTimelineImpl handleAddToSnap] */

void FUN_105dc42d8(double param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  uVar1 = param_2;
  func_0x00010be44a00();
  if ((int)uVar1 == 0) {
    lVar2 = param_2 + 8;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c06ba20();
    _objc_release(lVar2);
    if ((int)lVar3 != 0) {
      lVar2 = param_2 + 8;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010befb5a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      func_0x00010c165520(lVar5,param_3,(long)(param_1 * 1000.0));
      _objc_release(puVar6);
      uVar1 = param_2;
      func_0x00010beb8b60(param_2,param_3,6);
      _objc_release(lVar5);
      if ((uVar1 & 1) != 0) {
        return;
      }
    }
    lVar2 = param_2 + 0x20;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c1e1c00();
    _objc_release(lVar2);
    lVar2 = param_2 + 0x200;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfa2800();
  }
  else {
    lVar2 = param_2 + 0x200;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfa27c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105dc4438; end: 105dc44a7; -[SCPreviewFeatureTimelineImpl clipsStateEditingType] */

undefined8 FUN_105dc4438(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar1 = lVar2;
  func_0x00010c26fea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x208);
    func_0x00010bf8c7a0();
    uVar3 = 1;
    if (lVar2 != 0x7fffffffffffffff) {
      uVar3 = 2;
    }
  }
  return uVar3;
}



/* Entry: 105dc44a8; end: 105dc44af; -[SCPreviewFeatureTimelineImpl currentPlayingSnapIndex] */

undefined8 FUN_105dc44a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105dc44b0; end: 105dc44db; -[SCPreviewFeatureTimelineImpl finishTouchControl:] */

void FUN_105dc44b0(long param_1)

{
  func_0x00010bf76f60(*(undefined8 *)(param_1 + 0x1f8));
                    /* WARNING: Could not recover jumptable at 0x00010c240630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_snapEditStateChangeShouldUpdateT_11266dbb0,1)
  ;
  return;
}



/* Entry: 105dc44dc; end: 105dc451b; -[SCPreviewFeatureTimelineImpl finishRewindingWithTrackableView:] */

void FUN_105dc44dc(long param_1,undefined8 param_2,int param_3)

{
  func_0x00010c081660();
  if (param_3 != 0) {
    func_0x00010bf6e8a0(*(undefined8 *)(param_1 + 0x208));
                    /* WARNING: Could not recover jumptable at 0x00010c13fe90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x208),PTR_s_revealThumbnails_11262d9c0);
    return;
  }
  return;
}



/* Entry: 105dc451c; end: 105dc464b; -[SCPreviewFeatureTimelineImpl snapEditStateChangeShouldUpdateThumbnails:] */

void FUN_105dc451c(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x1f8) != 0) {
    uVar1 = param_1 + 0x18;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c14a120();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c07cfa0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      lVar4 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar4);
      lVar5 = lVar4;
      func_0x00010c14a120();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c137fe0();
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    lVar4 = param_1;
    func_0x00010be44a00();
    if ((int)lVar4 != 0) {
      lVar4 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar4);
      lVar5 = lVar4;
      func_0x00010bf88120();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = param_1 + 8;
      _objc_loadWeakRetained(lVar4);
      lVar5 = lVar4;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c200f60();
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bee2150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateThumbnails_1125961f8);
      return;
    }
  }
  return;
}



/* Entry: 105dc464c; end: 105dc4673; -[SCPreviewFeatureTimelineImpl previewThumbnailsController] */

void FUN_105dc464c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x208);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105dc4674; end: 105dc48cf; -[SCPreviewFeatureTimelineImpl preparePreviewEphemeralMediaList:destinationInfo:] */

void FUN_105dc4674(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c4290;
  _objc_retain(param_5);
  _objc_opt_class(puVar2);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar4 = param_2 + 0x200;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bfa2720();
  _objc_release(lVar4);
  func_0x00010c219700(uVar1);
  _objc_release(param_5);
  func_0x00010bfc05c0(uVar1);
  func_0x00010be57320(param_2);
  func_0x00010c21d9a0(uVar1);
  func_0x00010c222080(param_1,uVar1);
  uVar5 = *(undefined8 *)(param_2 + 0xb8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5c600();
  func_0x00010c1d6440(uVar1);
  _objc_release(uVar5);
  func_0x00010c2142c0(uVar1);
  func_0x00010c1f5d00(uVar1);
  lVar4 = param_2 + 8;
  _objc_loadWeakRetained(lVar4);
  lVar6 = lVar4;
  func_0x00010bfb6c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f340(uVar1);
  _objc_release(lVar6);
  _objc_release(lVar4);
  func_0x00010bea4240(param_2);
  uVar7 = *(undefined8 *)(param_2 + 0xb0);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c0d2180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47520(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar7);
  lVar4 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar6 = lVar4;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010c07f160();
  _objc_release(lVar6);
  _objc_release(lVar4);
  if ((int)lVar8 != 0) {
    func_0x00010c21d9a0(uVar1);
    param_2 = param_2 + 8;
    _objc_loadWeakRetained();
    lVar4 = param_2;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c2490c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x000109024c88(0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(param_2);
    if (lVar8 != 0) {
      func_0x00010c207b40(uVar1);
    }
    _objc_release(lVar8);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105dc48d0; end: 105dc4a1b; -[SCPreviewFeatureTimelineImpl _logPreviewMediaExport] */

void FUN_105dc48d0(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar4;
  func_0x00010bf529e0();
  lVar3 = lVar5;
  func_0x00010bf529e0();
  ppuVar1 = (undefined **)0x0;
  if (lVar2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e2a358;
  }
  if (lVar3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e2a378;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x160);
  func_0x00010bf1cf00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x178);
  func_0x00010bf21f60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0acba0(uVar6,param_2,uVar7,ppuVar1,lVar2 != 0 && lVar3 != 0);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105dc4a1c; end: 105dc4a23;  */

void FUN_105dc4a1c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0b7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_assetURL_1125a07a0);
  return;
}



/* Entry: 105dc4a24; end: 105dc4a7f;  */

void FUN_105dc4a24(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (param_2 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010c09e0e0(&uStack_50,param_2);
  }
  func_0x00010c297240(puVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105dc4a80; end: 105dc4cbf; -[SCPreviewFeatureTimelineImpl timelineThumbnailsControllerDidSelectSegment:] */

void FUN_105dc4a80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c26fea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c28fca0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 2) {
    uVar4 = *(undefined8 *)(param_1 + 0xd8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105dc4cc0;
    puStack_50 = &UNK_110841f20;
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x00010bfd25e0(uVar4,param_2,&puStack_68);
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126c4aa8;
    uVar5 = *(undefined8 *)(param_1 + 0x168);
    func_0x00010c240640(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c240d40(puVar6,param_2,uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(uVar5);
    puVar7 = PTR_PTR_1126affe8;
    uVar4 = param_3;
    func_0x00010bf8c7a0(param_3);
    func_0x00010c09e180(puVar7,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ab840(puVar6,param_2,puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    uVar4 = param_3;
    func_0x00010bf8c7a0(param_3);
    func_0x00010c2ab860(puVar6,param_2,uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf21f60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x168);
    func_0x00010c240640(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c209fc0();
    _objc_release(uVar4);
    _objc_release(uVar8);
    _objc_release(puVar7);
    param_1 = param_1 + 0x200;
    _objc_loadWeakRetained(param_1);
    uVar4 = param_3;
    func_0x00010bf8c7a0(param_3);
    func_0x00010bfa2760(param_1,param_2,uVar4);
    _objc_release(param_1);
    _objc_release(puVar6);
    _objc_release(uStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105dc4cc0; end: 105dc4ccf;  */

void FUN_105dc4cc0(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf6e8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_deselectSelectedSegmentIfAny_1125b93d0);
    return;
  }
  return;
}



/* Entry: 105dc4cd0; end: 105dc4e3b; -[SCPreviewFeatureTimelineImpl timelineThumbnailsControllerDidDeselectSegment:] */

void FUN_105dc4cd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c4aa8;
  uVar5 = *(undefined8 *)(param_1 + 0x168);
  _objc_retain(param_3);
  func_0x00010c240640(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c240d40(puVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ab840(puVar2,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x168);
  func_0x00010c240640(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209fc0();
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(puVar3);
  param_1 = param_1 + 0x200;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_3;
  func_0x00010bf8c7a0(param_3);
  _objc_release(param_3);
  func_0x00010bfa2760(param_1,param_2,uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105dc4e3c; end: 105dc4e8f; -[SCPreviewFeatureTimelineImpl timelineThumbnailsControllerDidUpdateSegmentStates:] */

void FUN_105dc4e3c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c240620(param_1,param_2,1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c285d40(lVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105dc4e90; end: 105dc50ff; -[SCPreviewFeatureTimelineImpl timelineThumbnailsControllerDidPressDelete:deleteBlock:] */

void FUN_105dc4e90(long param_1,undefined1 *param_2,long param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined **unaff_x26;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x1f8) != 0) {
    puVar1 = auStack_70;
    _objc_initWeak(puVar1,param_1);
    puVar2 = PTR_PTR_1126aed70;
    func_0x000108edea80();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105dc5100;
    puStack_88 = &UNK_110853c30;
    _objc_retain(param_4);
    param_2 = auStack_70;
    uStack_80 = param_4;
    _objc_copyWeak(auStack_78,param_2);
    func_0x00010beff480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar3 = PTR_PTR_1126aed70;
    func_0x000108edea50();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar4 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar5 = puVar4;
    func_0x000108edea68();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_68 = puVar2;
    puStack_60 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010c211b40(puVar4);
    func_0x00010c10eda0(param_3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_78);
    _objc_release(uStack_80);
    _objc_destroyWeak(auStack_70);
    unaff_x26 = &puStack_a0;
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x26 + 0x28));
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  func_0x00010bf84b00(param_2);
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    lVar7 = param_3 + 0x200;
    _objc_loadWeakRetained(lVar7);
    func_0x00010bfa27a0();
    _objc_release(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105dc5100; end: 105dc5163;  */

void FUN_105dc5100(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x200;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfa27a0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dc5164; end: 105dc5173;  */

void FUN_105dc5164(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105dc5174; end: 105dc5177; -[SCPreviewFeatureTimelineImpl timelineThumbnailsControllerDidSelectAddMore:] */

void FUN_105dc5174(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_handleAddToSnap_1125d1a30);
  return;
}



/* Entry: 105dc5178; end: 105dc51b3; -[SCPreviewFeatureTimelineImpl didTapPreviewContainerView:] */

uint FUN_105dc5178(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c26e760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf6e8a0();
  _objc_release(param_1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105dc51b4; end: 105dc52ef; -[SCPreviewFeatureTimelineImpl snapEditor:willExportSnapDocInEditor:exportType:] */

void FUN_105dc51b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(puVar1);
  _objc_retain(param_4);
  func_0x00010be9a360(param_1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105dc52f0; end: 105dc541b;  */

void FUN_105dc52f0(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar3);
    _objc_release(puVar2);
  }
  else if (param_2 == 0) {
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    func_0x00010be99020(lVar1);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_48);
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105dc541c; end: 105dc54af;  */

void FUN_105dc541c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if (param_2 != 0) {
      func_0x00010bf43ca0(uVar3);
      goto LAB_105dc5494;
    }
  }
  puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar3);
  _objc_release(puVar2);
LAB_105dc5494:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105dc54b0; end: 105dc6287; -[SCPreviewFeatureTimelineImpl setupSnapStateHandlerWithMultiSnapIndexProvider:] */

void FUN_105dc54b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  _objc_retain(param_5);
  lVar1 = param_3 + 0x20;
  _objc_loadWeakRetained();
  lVar13 = lVar1;
  func_0x00010c110b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar13 == 0) {
    puVar2 = PTR_PTR_1126b00e8;
    _objc_alloc_init(PTR_PTR_1126b00e8);
    puVar12 = PTR_PTR_1126c4ab0;
    _objc_alloc(PTR_PTR_1126c4ab0);
    lVar1 = param_3 + 0x20;
    _objc_loadWeakRetained();
    lVar8 = param_3 + 8;
    _objc_loadWeakRetained();
    func_0x00010be6e9a0(param_3);
    lVar11 = param_3 + 0x10;
    _objc_loadWeakRetained();
    uVar6 = *(undefined8 *)(param_3 + 0xd0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_3 + 0x140);
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_3 + 0x160);
    func_0x00010bf1cf00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_3 + 0x168);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052740(param_1,param_2,puVar12);
    func_0x00010c20a0c0(puVar2);
    _objc_release(puVar12);
    _objc_release(uVar3);
    _objc_release(uVar18);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar11);
    _objc_release(lVar8);
    _objc_release(lVar1);
    lVar1 = param_3 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1e1ba0();
    _objc_release(lVar1);
    lVar1 = param_3 + 8;
    _objc_loadWeakRetained();
    lVar8 = lVar1;
    func_0x00010c07e920();
    _objc_release(lVar1);
    if ((int)lVar8 != 0) {
      puVar12 = puVar2;
      func_0x00010c2525e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = (undefined *)(param_3 + 8);
      _objc_loadWeakRetained(puVar4);
      puVar14 = puVar4;
      func_0x00010bf8c8a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar14;
      func_0x00010bfccec0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3 + 8;
      _objc_loadWeakRetained(lVar1);
      lVar8 = lVar1;
      func_0x00010bf8c8a0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar8;
      func_0x00010c09e9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13c340(puVar12);
      _objc_release(lVar11);
      _objc_release(lVar8);
      _objc_release(lVar1);
      _objc_release(puVar5);
      _objc_release(puVar14);
      goto LAB_105dc57bc;
    }
  }
  else {
    puVar12 = (undefined *)(param_3 + 0x20);
    _objc_loadWeakRetained(puVar12);
    puVar2 = puVar12;
    func_0x00010c110b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar12 = (undefined *)(param_3 + 8);
    _objc_loadWeakRetained(puVar12);
    puVar4 = puVar2;
    func_0x00010c2525e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e1ae0();
LAB_105dc57bc:
    _objc_release(puVar4);
    _objc_release(puVar12);
  }
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b00e8;
  lVar1 = param_3 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar8 = lVar1;
  func_0x00010c110b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c270220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar1);
  puVar12 = puVar2;
  func_0x00010c2525e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6e9a0(param_3);
  func_0x00010c1d77e0(puVar12);
  _objc_release(puVar12);
  lVar1 = param_3 + 0x20;
  _objc_loadWeakRetained(lVar1);
  puVar12 = puVar2;
  func_0x00010c2525e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c180a40();
  _objc_release(puVar12);
  _objc_release(lVar1);
  puVar12 = puVar2;
  func_0x00010c2525e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ac080();
  _objc_release(puVar12);
  uVar6 = *(undefined8 *)(param_3 + 0x168);
  func_0x00010c240000(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  func_0x00010c2525e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203f60();
  _objc_release(puVar12);
  _objc_release(uVar6);
  puVar12 = puVar2;
  func_0x00010c2525e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x1f8);
  *(undefined **)(param_3 + 0x1f8) = puVar12;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_3 + 0xc0);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c3100(*(undefined8 *)(param_3 + 0x1f8));
  func_0x00010c1c38a0(uVar6);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_3 + 0xb0);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9760();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_3 + 0xa0);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9760();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_3 + 0x90);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9760();
  _objc_release(uVar6);
  uVar18 = *(undefined8 *)(param_3 + 0x1f8);
  uVar7 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73420(uVar18);
  _objc_release(uVar6);
  _objc_release(uVar7);
  lVar1 = param_3 + 8;
  _objc_loadWeakRetained();
  lVar8 = lVar1;
  func_0x00010bf16100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar8 != 0) {
    uVar6 = *(undefined8 *)(param_3 + 0x1f8);
    lVar1 = param_3 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar8 = lVar1;
    func_0x00010bf16100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf73080(uVar6);
    _objc_release(lVar8);
    _objc_release(lVar1);
  }
  lVar8 = *(long *)(param_3 + 0xd8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010bf08020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar8);
  if (lVar1 != 0) {
    uVar18 = *(undefined8 *)(param_3 + 0x1f8);
    uVar7 = *(undefined8 *)(param_3 + 0xd8);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010bf08020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf73860(uVar18);
    _objc_release(uVar6);
    _objc_release(uVar7);
  }
  lVar1 = param_3 + 8;
  _objc_loadWeakRetained();
  lVar8 = lVar1;
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar8 != 0) {
    uVar6 = *(undefined8 *)(param_3 + 0x1f8);
    lVar1 = param_3 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar8 = lVar1;
    func_0x00010c09a760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf73360(uVar6);
    _objc_release(lVar8);
    _objc_release(lVar1);
  }
  lVar1 = param_3 + 8;
  _objc_loadWeakRetained();
  lVar8 = lVar1;
  func_0x00010c1115c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar8 != 0) {
    uVar6 = *(undefined8 *)(param_3 + 0x1f8);
    lVar1 = param_3 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar8 = lVar1;
    func_0x00010c1115c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf73500(uVar6);
    _objc_release(lVar8);
    _objc_release(lVar1);
  }
  lVar8 = *(long *)(param_3 + 0x58);
  func_0x00010bf00140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010bf529e0();
  _objc_release(lVar8);
  if (lVar1 != 0) {
    uVar7 = *(undefined8 *)(param_3 + 0x1f8);
    uVar6 = *(undefined8 *)(param_3 + 0x58);
    func_0x00010bf00140(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf73220(uVar7);
    _objc_release(uVar6);
  }
  lVar1 = param_3 + 8;
  _objc_loadWeakRetained();
  lVar8 = lVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar8;
  func_0x00010c232fa0();
  _objc_release(lVar8);
  _objc_release(lVar1);
  lVar1 = param_3 + 8;
  _objc_loadWeakRetained();
  lVar8 = lVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  if ((int)lVar11 == 0) {
    lVar11 = lVar8;
    func_0x00010c06e860();
    _objc_release(lVar8);
    _objc_release(lVar1);
    if ((int)lVar11 != 0) {
      uVar6 = *(undefined8 *)(param_3 + 0x1f8);
      lVar11 = *(long *)(param_3 + 0xb8);
      func_0x00010c269d40(lVar11);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar11;
      func_0x00010bf60ee0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf73120(uVar6);
      _objc_release(lVar1);
      goto LAB_105dc5d04;
    }
  }
  else {
    lVar9 = lVar8;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x000107ff9fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c130740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar1);
    func_0x00010bf73120(*(undefined8 *)(param_3 + 0x1f8));
LAB_105dc5d04:
    _objc_release(lVar11);
  }
  if (lVar13 != 0) goto LAB_105dc6258;
  lVar1 = param_3;
  func_0x00010bfccf80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_3 + 0x168);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf926c0();
  _objc_release(uVar7);
  puVar12 = (undefined *)(param_3 + 8);
  _objc_loadWeakRetained(puVar12);
  if ((int)uVar6 == 0) {
    puVar4 = puVar12;
    func_0x00010c255460();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar4;
    func_0x000109200044();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20bc80(lVar1);
  }
  else {
    puVar5 = puVar12;
    func_0x00010c07e840();
    _objc_release(puVar12);
    uVar7 = *(undefined8 *)(param_3 + 0x168);
    func_0x00010c2407e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c07bf40();
    _objc_release(uVar7);
    puVar12 = *(undefined **)(param_3 + 0x168);
    func_0x00010c240000(puVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_3 + 0x100);
    puVar4 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x000108eb6800(puVar12,uVar7,puVar4,puVar5,uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar14;
    func_0x00010c0d3c80();
    func_0x00010c20bc80(lVar1);
    _objc_release(puVar5);
  }
  _objc_release(puVar14);
  _objc_release(puVar4);
  _objc_release(puVar12);
  lVar8 = *(long *)(param_3 + 0x168);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar8;
  func_0x00010bf926c0();
  if ((int)lVar13 == 0) {
LAB_105dc5f00:
    _objc_release(lVar8);
  }
  else {
    lVar13 = lVar1;
    func_0x00010bf0d660();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar13;
    func_0x00010c08fa60();
    _objc_release(lVar13);
    _objc_release(lVar8);
    if (lVar11 == 0) {
      lVar13 = *(long *)(param_3 + 0x168);
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR_PTR_1126affe8;
      func_0x00010bfccec0(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar13;
      func_0x000108eb6ce4(lVar13,puVar12,*(undefined8 *)(param_3 + 0x100));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_release(lVar13);
      if (lVar8 != 0) {
        func_0x00010c16b3a0(lVar1);
      }
      goto LAB_105dc5f00;
    }
  }
  uVar7 = *(undefined8 *)(param_3 + 0x168);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf926c0();
  _objc_release(uVar7);
  if ((int)uVar6 == 0) {
    puVar14 = *(undefined **)(param_3 + 0xa0);
    func_0x00010c269d40(puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar14;
    func_0x00010bf30960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar12;
    func_0x000109200044();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178c80(lVar1);
  }
  else {
    puVar14 = *(undefined **)(param_3 + 0x168);
    func_0x00010c240000(puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = *(undefined **)(param_3 + 0x1a8);
    func_0x00010c269d40(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar14;
    func_0x000108e35f68(puVar14,puVar12,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar5;
    func_0x00010c0d3c80();
    func_0x00010c178c80(lVar1);
    _objc_release(puVar15);
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar12);
  _objc_release(puVar14);
  uVar7 = *(undefined8 *)(param_3 + 0x168);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf926c0();
  _objc_release(uVar7);
  if ((int)uVar6 == 0) {
    puVar12 = (undefined *)(param_3 + 8);
    _objc_loadWeakRetained(puVar12);
    puVar4 = puVar12;
    func_0x00010bf89f40();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar4;
    func_0x00010bf8a020();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar14;
    func_0x000109200044();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar12 = *(undefined **)(param_3 + 0x168);
    func_0x00010c240000(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf8a040(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar14;
    func_0x00010c0d3c80();
  }
  func_0x00010c191a20(lVar1);
  _objc_release(puVar5);
  _objc_release(puVar14);
  _objc_release(puVar4);
  _objc_release(puVar12);
  uVar7 = *(undefined8 *)(param_3 + 0x168);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf926c0();
  _objc_release(uVar7);
  if ((int)uVar6 == 0) {
    lVar13 = param_3 + 8;
    _objc_loadWeakRetained(lVar13);
    lVar8 = lVar13;
    func_0x00010bf114c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16cc80(lVar1);
  }
  else {
    uVar7 = *(undefined8 *)(param_3 + 0x168);
    func_0x00010c240000(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010bf114e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16cc80(lVar1);
    _objc_release(uVar6);
    _objc_release(puVar12);
    _objc_release(uVar7);
    lVar13 = *(long *)(param_3 + 0x90);
    func_0x00010c269d40(lVar13);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010bf11400(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a380(lVar13);
  }
  _objc_release(lVar8);
  _objc_release(lVar13);
  uVar16 = *(ulong *)(param_3 + 0x168);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010bf926c0();
  puVar12 = PTR_PTR_1126bcd68;
  if ((uVar17 & 1) == 0) {
    param_3 = param_3 + 8;
    _objc_loadWeakRetained(param_3);
    func_0x00010bf0f0e0();
  }
  else {
    param_3 = *(long *)(param_3 + 0x168);
    func_0x00010c240000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfdc700(puVar12);
  }
  func_0x00010c16bc20(lVar1);
  _objc_release(param_3);
  _objc_release(uVar16);
  _objc_release(lVar1);
LAB_105dc6258:
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105dc6288; end: 105dc6427; -[SCPreviewFeatureTimelineImpl generateEditedThumbnailsForSegmentIndex:thumbnailCount:thumbnailSize:] */

void FUN_105dc6288(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if (*(long *)(param_3 + 0x1f8) != 0) {
    puVar1 = param_3 + 0x20;
    _objc_loadWeakRetained();
    _objc_release();
    puVar5 = PTR____NSArray0__struct_11034ab48;
    if (puVar1 != (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_3 + 0x1f8);
      func_0x00010bf46560(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      func_0x00010be1b2e0(param_3,param_4,uVar4,puVar1,puVar2);
      puVar5 = param_3 + 0x20;
      _objc_loadWeakRetained(puVar5);
      puVar6 = param_3;
      func_0x00010be23cc0(param_3,param_4,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = param_3 + 0x20;
      _objc_loadWeakRetained(puVar5);
      puVar7 = param_3;
      func_0x00010be23ce0(param_3,param_4,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      func_0x00010be1c360(param_1,param_2,param_3,param_4,param_5,param_6,puVar6,puVar7,puVar1,
                          puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(uVar4);
      _objc_release(puVar2);
      _objc_release(puVar1);
      puVar5 = param_3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105dc6428; end: 105dc682b; -[SCPreviewFeatureTimelineImpl _setupThumbnailsView] */

void FUN_105dc6428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_5;
  if (*(long *)(param_5 + 0x208) == 0) {
    puVar1 = PTR_PTR_1126c4ab8;
    _objc_alloc();
    lVar2 = param_5 + 0x20;
    _objc_loadWeakRetained(lVar2);
    lVar3 = param_5 + 0x38;
    _objc_loadWeakRetained(lVar3);
    uVar4 = *(undefined8 *)(param_5 + 0x110);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_5 + 0x180);
    func_0x00010bf45e20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c270180();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c001ca0();
    uVar11 = *(undefined8 *)(param_5 + 0x208);
    *(undefined **)(param_5 + 0x208) = puVar1;
    _objc_release(uVar11);
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_5 + 8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c06ba20();
    func_0x00010c202140(*(undefined8 *)(param_5 + 0x208));
    _objc_release(lVar2);
    lVar2 = param_5 + 8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c0811c0();
    func_0x00010c21a620(*(undefined8 *)(param_5 + 0x208));
    _objc_release(lVar2);
    func_0x00010c1e1b60(*(undefined8 *)(param_5 + 0x208));
    lVar2 = param_5 + 0x18;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c215b20();
    _objc_release(lVar2);
    lVar2 = param_5 + 0x18;
    _objc_loadWeakRetained();
    func_0x00010c270420();
    uVar7 = *(undefined8 *)(param_5 + 0x208);
    func_0x00010c29bf00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(uVar7);
    _objc_release();
    _dispatch_group_create();
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lVar3 = param_5 + 0x20;
    _objc_loadWeakRetained();
    lVar8 = lVar3;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar8;
    func_0x00010bf52a60();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar3 != 0) {
      lVar14 = *plStack_140;
      do {
        lVar12 = 0;
        do {
          if (*plStack_140 != lVar14) {
            _objc_enumerationMutation(lVar8);
          }
          lVar13 = *(long *)(lStack_148 + lVar12 * 8);
          lVar9 = lVar13;
          func_0x00010bfb13c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar9 != 0) {
            lVar9 = lVar13;
            func_0x00010bf8c600();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar9 == 0) {
              _dispatch_group_enter(lVar2);
              lVar9 = lVar13;
              func_0x00010bfb13c0(lVar13);
              _objc_retainAutoreleasedReturnValue();
              puStack_180 = puVar1;
              uStack_178 = 0xc2000000;
              pcStack_170 = FUN_105dc682c;
              puStack_168 = &UNK_1108be268;
              lVar10 = lVar2;
              lStack_160 = lVar13;
              _objc_retain(lVar2);
              lStack_158 = lVar2;
              func_0x000100078e94();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c297260(lVar9);
              _objc_release(lVar10);
              _objc_release(lVar9);
              _objc_release(lStack_158);
            }
          }
          lVar12 = lVar12 + 1;
        } while (lVar3 != lVar12);
        lVar3 = lVar8;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar8);
    _objc_initWeak(auStack_188,param_5);
    puStack_1b0 = puVar1;
    uStack_1a8 = 0xc2000000;
    pcStack_1a0 = FUN_105dc6858;
    puStack_198 = &UNK_1108434b0;
    _objc_copyWeak(auStack_190,auStack_188);
    func_0x000100bc0718(lVar2,PTR___dispatch_main_q_11034be20,&puStack_1b0);
    _objc_destroyWeak(auStack_190);
    _objc_destroyWeak(auStack_188);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c193a80(*(undefined8 *)(lVar2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(lVar2 + 0x28));
  return;
}



/* Entry: 105dc682c; end: 105dc6857;  */

void FUN_105dc682c(long param_1,undefined8 param_2)

{
  func_0x00010c193a80(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105dc6858; end: 105dc6937;  */

void FUN_105dc6858(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfe5d60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x208);
    func_0x00010c29bf00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fe0(lVar2,param_2,uVar3,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dc6938; end: 105dc6a0b; -[SCPreviewFeatureTimelineImpl _updateThumbnails] */

void FUN_105dc6938(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c070a20();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010be235c0(param_1);
    _objc_destroyWeak(auStack_40);
  }
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105dc6a0c; end: 105dc6ac7;  */

void FUN_105dc6a0c(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105dc6ac8;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105dc6ac8; end: 105dc6b1f;  */

void FUN_105dc6ac8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c193aa0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dc6b20; end: 105dc6dfb; -[SCPreviewFeatureTimelineImpl _getTimelineEditedThumbnailsWithCompletion:] */

void FUN_105dc6b20(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  if (*(long *)(param_2 + 0x1f8) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x1f8);
    func_0x00010bf46560(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010be1b2e0(param_2,param_3,uVar4,puVar1,puVar2);
    lVar5 = param_2 + 0x20;
    _objc_loadWeakRetained(lVar5);
    lVar6 = param_2;
    func_0x00010be23cc0(param_2,param_3,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = param_2 + 0x20;
    _objc_loadWeakRetained(lVar5);
    lVar7 = param_2;
    func_0x00010be23ce0(param_2,param_3,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar8);
    lVar5 = param_2 + 0x20;
    _objc_loadWeakRetained(lVar5);
    lVar9 = lVar5;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedc960(param_1 * 35.0,param_1 * 62.0,param_2,param_3,lVar9,lVar6,lVar7,puVar1,
                        puVar2);
    _objc_release(lVar9);
    _objc_release(lVar5);
    func_0x00010be1c360(param_1 * 35.0,param_1 * 62.0,param_2,param_3,0,4,lVar6,lVar7,puVar1,puVar2)
    ;
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_2;
    func_0x00010c0b8780(param_2,param_3,&PTR___NSConcreteGlobalBlock_1108e9320,0,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105dc6e24;
    puStack_80 = &UNK_11084e3a0;
    _objc_retain(param_4);
    ppuVar10 = &puStack_98;
    uStack_78 = param_4;
    _objc_retainBlock(ppuVar10);
    ppuVar11 = ppuVar10;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar9,param_3,ppuVar10,ppuVar11);
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    _objc_release(uStack_78);
    _objc_release(lVar9);
    _objc_release(param_2);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 105dc6dfc; end: 105dc6e23;  */

void FUN_105dc6dfc(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105dc6e24; end: 105dc6e2f;  */

void FUN_105dc6e24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105dc6e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105dc6e30; end: 105dc70df; -[SCPreviewFeatureTimelineImpl _updateOverlayStateForSegments:videoAsset:videoComposition:images:imageTimeRanges:thumbnailSize:] */

void FUN_105dc6e30(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  ulong uStack_110;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar8 = param_3;
  _objc_initWeak(auStack_a0,param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  for (uVar10 = 0; uVar2 = param_5, func_0x00010bf529e0(), uVar10 < uVar2; uVar10 = uVar10 + 1) {
    uVar2 = param_5;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    if (uVar2 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
    }
    else {
      func_0x00010c27c900(&uStack_d0,uVar2);
    }
    uStack_e8 = uStack_c8;
    uStack_f0 = uStack_d0;
    uStack_e0 = uStack_c0;
    func_0x00010c297200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puStack_138 = puVar1;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_105dc70e0;
    puStack_120 = &UNK_1108e9340;
    puVar8 = auStack_a0;
    _objc_copyWeak(auStack_108);
    _objc_retain(puVar4);
    puStack_118 = puVar4;
    uStack_100 = param_1;
    uStack_f8 = param_2;
    _objc_retain(uVar2);
    ppuVar5 = &puStack_138;
    uStack_110 = uVar2;
    _objc_retainBlock(ppuVar5);
    uVar9 = uVar10;
    func_0x00010c0ef520(param_1,param_2,*(undefined8 *)(param_3 + 0x1f8));
    _objc_release(ppuVar5);
    _objc_release(uStack_110);
    _objc_release(puStack_118);
    _objc_destroyWeak(auStack_108);
    _objc_release(puVar4);
    _objc_release(uVar2);
  }
  _objc_destroyWeak(auStack_a0);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(auStack_a0);
  __Unwind_Resume();
  _objc_retain(puVar8);
  _objc_retain(uVar9);
  lVar6 = param_5 + 0x30;
  _objc_loadWeakRetained();
  if (lVar6 != 0) {
    lVar7 = lVar6;
    func_0x00010becbb60(*(undefined8 *)(param_5 + 0x38),*(undefined8 *)(param_5 + 0x40),lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdce620(lVar6);
    _objc_release(lVar7);
  }
  _objc_release(lVar6);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 105dc70e0; end: 105dc7183;  */

void FUN_105dc70e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010becbb60(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdce620(lVar1);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105dc7184; end: 105dc73c3; -[SCPreviewFeatureTimelineImpl _generateThumbnailsForSegmentIndex:thumbnailCount:thumbnailSize:videoAsset:videoComposition:images:imageTimeRanges:] */

void FUN_105dc7184(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae560;
  for (lVar1 = param_6; PTR_PTR_1126ae560 = puVar3, lVar1 != 0; lVar1 = lVar1 + -1) {
    _objc_opt_new(puVar3);
    func_0x00010befa120(puVar2);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae560;
  }
  _objc_initWeak(auStack_78,param_3);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_105dc73c4;
  puStack_c8 = &UNK_1108e93d0;
  _objc_copyWeak(auStack_98,auStack_78);
  _objc_retain(param_7);
  uStack_c0 = param_7;
  lStack_90 = param_6;
  _objc_retain(param_8);
  uStack_b8 = param_8;
  uStack_88 = param_1;
  uStack_80 = param_2;
  _objc_retain(param_9);
  uStack_b0 = param_9;
  _objc_retain(param_10);
  uStack_a8 = param_10;
  _objc_retain(puVar2);
  ppuVar4 = &puStack_e0;
  puStack_a0 = puVar2;
  _objc_retainBlock(ppuVar4);
  func_0x00010c0ef520(param_1,param_2,*(undefined8 *)(param_3 + 0x1f8));
  puVar3 = puVar2;
  func_0x00010c0b8600(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(puStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar2);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105dc73c4; end: 105dc753b;  */

void FUN_105dc73c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_68);
    }
    lVar2 = lVar1;
    func_0x00010be1c240(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010becbb80(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010be1b000(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105dc753c;
    puStack_78 = &UNK_1108e93a0;
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar6);
    ppuVar5 = &puStack_90;
    uStack_70 = uVar6;
    _objc_retainBlock(ppuVar5);
    func_0x00010bf97e80(lVar4);
    _objc_release(ppuVar5);
    _objc_release(uStack_70);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}


