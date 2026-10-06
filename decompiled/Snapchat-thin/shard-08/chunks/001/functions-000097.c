/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d7d8bc; end: 105d7d8ff; -[SCPreviewFeatureMagicToolsServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d7d8bc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112735a40);
  _objc_destroyWeak(param_1 + _DAT_112735a3c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735a38);
  return;
}



/* Entry: 105d7d900; end: 105d7d9ab; -[SCPreviewFeatureMagicToolsToolbarItemProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d7d900(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112735a44;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112735a4c;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c0b6540(lVar2);
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



/* Entry: 105d7d9ac; end: 105d7d9ef; -[SCPreviewFeatureMagicToolsToolbarItemProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d7d9ac(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112735a4c);
  _objc_destroyWeak(param_1 + _DAT_112735a48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735a44);
  return;
}



/* Entry: 105d7d9f0; end: 105d7da6b; -[SCPreviewSingleShotExportCompletion initWithCompletion:] */

undefined1 * FUN_105d7d9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed080;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d7da6c; end: 105d7daff; -[SCPreviewSingleShotExportCompletion completeWithVideoURL:error:] */

void FUN_105d7da6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 8);
  if (lVar1 != 0) {
    uVar2 = param_3;
    if (param_4 != 0) {
      uVar2 = 0;
    }
    (**(code **)(lVar1 + 0x10))(lVar1,uVar2,param_4);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d7db00; end: 105d7db0b; -[SCPreviewSingleShotExportCompletion .cxx_destruct] */

void FUN_105d7db00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105d7db0c; end: 105d7e483; -[SCPreviewFeatureMultiSnapImpl initWithUserSession:previewConfiguration:previewScopeServices:creativeToolsABServices:drawing:autoCaptions:imageProcessCommandProvider:userPreferenceTimeProviderServices:previewTooltipsServices:featureSettingServices:voiceoverFeature:webAttachment:userTagging:targetTrajectoryFactory:genericAssetsServices:circumstanceEngine:stickerInjector:ctpItemViewService:previewCameraSourceOverlayService:userInfoServices:overlayFormatServices:captionFeature:stickerContainer:snapCrop:music:previewLegacyServices:galleryStorySaver:filterMetadataProvider:videoFilterStateController:snapVideoFilterFactory:snapVideoFilterCoordinator:overlayComposition:commonLoggingServices:previewLoggingServices:viewportController:videoPlayback:timer:snapchatterFetcher:memoriesExperimentService:snapEditorTweaks:watermarkingServices:genAIDreamsService:] */

undefined8 *
FUN_105d7db0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain();
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  puStack_70 = PTR_PTR_1126ed088;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_4);
    _objc_storeWeak(puVar1 + 2,param_3);
    _objc_retain(param_5);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[8];
    puVar1[8] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[9];
    puVar1[9] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_10;
    _objc_release(uVar2);
    uVar2 = param_11;
    func_0x00010c274120();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x18];
    puVar1[0x18] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_12);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[7];
    puVar1[7] = param_18;
    _objc_release(uVar2);
    uVar2 = param_17;
    func_0x00010c127e00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_19);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_20;
    _objc_release(uVar2);
    uVar4 = puVar1[0x20];
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c081fa0();
    *(char *)((long)puVar1 + 0x31) = (char)uVar2;
    _objc_release(uVar4);
    _objc_retain(param_21);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[4];
    puVar1[4] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[5];
    puVar1[5] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_44;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0x2f) = 0;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    uVar4 = puVar1[0xb];
    func_0x00010bfc0e40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    uVar2 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
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



/* Entry: 105d7e484; end: 105d7e59b;  */

void FUN_105d7e484(long param_1,undefined8 param_2)

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
  uStack_50 = 0x105d7e52c;
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



/* Entry: 105d7e59c; end: 105d7e8bf; -[SCPreviewFeatureMultiSnapImpl snapEditor:updateLoggingWithBuilder:] */

void FUN_105d7e59c(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c287d80(param_1);
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c0d2100();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c26f640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c2b4160(param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    func_0x00010c0d2440();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c09df80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar2 = lVar4;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar4);
        }
        lVar6 = *(long *)(lVar11 * 8);
        func_0x00010c2553e0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (lVar7 != 0) {
          lVar12 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar6);
            }
            lVar13 = *(long *)(lVar12 * 8);
            lVar8 = lVar13;
            func_0x00010c27dd80();
            puVar9 = PTR_PTR_1126bac28;
            if (lVar8 == 0xb) {
              func_0x00010bf377a0(lVar13);
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar13;
              func_0x00010c2540c0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c113fe0(puVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar5);
              _objc_release(puVar9);
              _objc_release(lVar8);
              _objc_release(lVar13);
            }
            lVar12 = lVar12 + 1;
          } while (lVar7 != lVar12);
          lVar7 = lVar6;
          func_0x00010bf52a60();
        }
        _objc_release(lVar6);
        lVar11 = lVar11 + 1;
      } while (lVar11 != lVar2);
      lVar2 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    func_0x00010bf529e0(puVar5);
    func_0x00010c2ba0a0(param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    param_3 = puVar5;
    func_0x00010c2ba0c0(param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108cc6364(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_4 + 0x18,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d7e8c0; end: 105d7e8ff; -[SCPreviewFeatureMultiSnapImpl configureWithView:] */

void FUN_105d7e8c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108cc6364(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x18,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d7e900; end: 105d7e907; -[SCPreviewFeatureMultiSnapImpl responderChainPriority] */

undefined8 FUN_105d7e900(void)

{
  return 4;
}



/* Entry: 105d7e908; end: 105d7e90f; -[SCPreviewFeatureMultiSnapImpl multiSnapConfigurationFuture] */

void FUN_105d7e908(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x160),PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 105d7e910; end: 105d7ea57; -[SCPreviewFeatureMultiSnapImpl displayTapToTrimTooltipIfNecessary] */

void FUN_105d7e910(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  if (*(long *)(param_1 + 0x198) == 0) {
    return;
  }
  uVar1 = *(ulong *)(param_1 + 0xf0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22f8e0();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    lVar4 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c07f1a0();
    if ((int)lVar6 == 0) {
      _objc_release(lVar5);
      _objc_release(lVar4);
      goto LAB_105d7ea40;
    }
    uVar7 = uVar1;
    func_0x00010bfdba00();
    _objc_release(lVar5);
    _objc_release(lVar4);
    if ((uVar7 & 1) != 0) goto LAB_105d7ea40;
    func_0x00010bf86640(*(undefined8 *)(param_1 + 0x198));
  }
  else {
    func_0x00010bf86640(*(undefined8 *)(param_1 + 0x198));
    uVar3 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c190540();
    _objc_release(uVar3);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar4 = param_1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c07f1a0();
    _objc_release(lVar4);
    _objc_release(param_1);
    if ((int)lVar5 == 0) goto LAB_105d7ea40;
  }
  func_0x00010c1fa080(uVar1,param_2,1);
LAB_105d7ea40:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d7ea58; end: 105d7ebf7; -[SCPreviewFeatureMultiSnapImpl updateMultiSnapCommonLoggingParamsBuilder:] */

void FUN_105d7ea58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0d2100();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c26f640();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  func_0x00010c2b4240(param_3,param_2,lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0d2100();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb4f40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  func_0x00010c2b4200(param_3,param_2,lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0d2100();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf04a40();
  func_0x00010c2bbc80(param_3,param_2,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x1a0);
  func_0x00010bfd7ee0(uVar5);
  func_0x00010c2af2e0(param_3,param_2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c0d2100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfd6360();
  uVar5 = 5;
  if ((int)lVar2 == 0) {
    uVar5 = 0;
  }
  func_0x00010c2ac240(param_3,param_2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d7ebf8; end: 105d7ed57; -[SCPreviewFeatureMultiSnapImpl setupMultiSnapV2WithPlayerHandler:] */

void FUN_105d7ebf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x198);
  if (lVar1 != 0) {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(lVar1);
    func_0x00010c12c8e0(*(undefined8 *)(param_1 + 0x198));
    uVar2 = *(undefined8 *)(param_1 + 0x198);
    *(undefined8 *)(param_1 + 0x198) = 0;
    _objc_release(uVar2);
  }
  puVar3 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_retain();
  uVar2 = *(undefined8 *)(param_1 + 0x160);
  *(undefined **)(param_1 + 0x160) = puVar3;
  _objc_release(uVar2);
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar3);
  _objc_retain(param_3);
  func_0x00010befa300(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 105d7ed58; end: 105d7ee27;  */

void FUN_105d7ed58(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 8;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c233c60();
    _objc_release(lVar2);
    if ((int)lVar3 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar4 = param_2;
      func_0x00010c0d2100(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43d60(uVar5);
      _objc_release(uVar4);
      lVar2 = lVar1;
      func_0x00010bdf03e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be868c0(lVar1);
      _objc_release(lVar2);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d7ee28; end: 105d7ef27; -[SCPreviewFeatureMultiSnapImpl _createMultiSnapV2CollectionViewControllerWithPlayerHandler:] */

void FUN_105d7ee28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_1126c4780;
  if ((*(byte *)(param_1 + 0x31) & 1) == 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar4);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0d2100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c001c80(puVar4,param_2,lVar2,param_3,*(undefined8 *)(param_1 + 0x38));
    _objc_release(param_3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar3 = puVar4;
    func_0x00010c29bf00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d4a0();
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010c29bf00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(puVar3);
    func_0x00010c1e1b60(puVar4,param_2,param_1);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105d7ef28; end: 105d7fdef; -[SCPreviewFeatureMultiSnapImpl _realSetupMultiSnapV2WithController:PlayerHandler:] */

undefined1  [16]
FUN_105d7ef28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_5 + 0x198);
  *(long *)(param_5 + 0x198) = param_7;
  _objc_release(uVar1);
  lVar4 = param_5 + 0x18;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c1c9a20();
  _objc_release(lVar4);
  lVar4 = param_5 + 0x18;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c0d2620();
  uVar1 = *(undefined8 *)(param_5 + 0x198);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
  _objc_release(lVar4);
  uVar1 = *(undefined8 *)(param_5 + 0x198);
  lVar4 = param_5 + 8;
  _objc_loadWeakRetained(lVar4);
  lVar6 = lVar4;
  func_0x00010c0d2100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284780(uVar1);
  _objc_release(lVar6);
  _objc_release(lVar4);
  puVar8 = PTR_PTR_1126c4788;
  _objc_alloc();
  lVar4 = param_5 + 8;
  _objc_loadWeakRetained();
  lVar16 = lVar4;
  func_0x00010c0d2100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar16;
  func_0x00010c26f640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6e9a0(param_5);
  lVar6 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar6);
  uVar1 = *(undefined8 *)(param_5 + 0xa8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5 + 8;
  _objc_loadWeakRetained();
  func_0x00010c06d080();
  func_0x00010c02cb20(param_1,param_2);
  uVar14 = *(undefined8 *)(param_5 + 0x1a0);
  *(undefined **)(param_5 + 0x1a0) = puVar8;
  _objc_release(uVar14);
  _objc_release(lVar3);
  _objc_release(uVar1);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar16);
  _objc_release(lVar4);
  uVar1 = *(undefined8 *)(param_5 + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9760();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_5 + 0x80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9760();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_5 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9760();
  _objc_release(uVar1);
  func_0x00010c1faac0(*(undefined8 *)(param_5 + 0x198));
  lVar4 = *(long *)(param_5 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c255300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar3);
      }
      func_0x00010bf736e0(*(undefined8 *)(param_5 + 0x1a0));
      lVar16 = lVar16 + 1;
    } while (lVar4 != lVar16);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  uVar1 = 0;
  lVar4 = *(long *)(param_5 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010beffc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar3);
      }
      func_0x00010bf736c0(*(undefined8 *)(param_5 + 0x1a0));
      lVar16 = lVar16 + 1;
    } while (lVar4 != lVar16);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  uVar5 = *(undefined8 *)(param_5 + 0x130);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar5;
  func_0x00010bf926c0();
  _objc_release(uVar5);
  if ((int)uVar14 == 0) {
    lVar6 = *(long *)(param_5 + 0xb8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010bf0d6c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    if (lVar4 != 0) {
      uVar15 = *(undefined8 *)(param_5 + 0x1a0);
      uVar5 = *(undefined8 *)(param_5 + 0xb8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar5;
      func_0x00010bf0d6c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf72fc0(uVar15);
      _objc_release(uVar14);
      goto LAB_105d7f434;
    }
  }
  else {
    uVar14 = *(undefined8 *)(param_5 + 0x130);
    func_0x00010c240000(uVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar14;
    func_0x000108eb6ce4(uVar14,puVar8,*(undefined8 *)(param_5 + 0xd8));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(uVar14);
    func_0x00010bf72fc0(*(undefined8 *)(param_5 + 0x1a0));
LAB_105d7f434:
    _objc_release(uVar5);
  }
  lVar6 = *(long *)(param_5 + 0x1a0);
  func_0x00010c09df80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010bf529e0();
  if (lVar4 == 1) {
    lVar4 = param_5 + 8;
    _objc_loadWeakRetained();
    lVar3 = lVar4;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar3;
    func_0x00010c07f160();
    if ((int)lVar16 != 0) {
      _objc_release(lVar3);
      _objc_release(lVar4);
      _objc_release(lVar6);
LAB_105d7f4ec:
      lVar4 = *(long *)(param_5 + 0x1a0);
      func_0x00010c09df80(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      uVar5 = *(undefined8 *)(param_5 + 0x130);
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar5;
      func_0x00010bf926c0();
      _objc_release(uVar5);
      lVar4 = param_5 + 8;
      _objc_loadWeakRetained();
      if ((int)uVar14 == 0) {
        lVar3 = lVar4;
        func_0x00010c255460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar4);
        if (lVar3 != 0) {
          puVar8 = (undefined *)(param_5 + 8);
          _objc_loadWeakRetained(puVar8);
          puVar11 = puVar8;
          func_0x00010c255460();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar11;
          func_0x00010c0d3c80();
          func_0x00010c20bc80(lVar6);
          goto LAB_105d7f644;
        }
      }
      else {
        lVar3 = lVar4;
        func_0x00010c07e840();
        _objc_release(lVar4);
        uVar5 = *(undefined8 *)(param_5 + 0x130);
        func_0x00010c2407e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar5;
        func_0x00010c07bf40();
        _objc_release(uVar5);
        puVar8 = *(undefined **)(param_5 + 0x130);
        func_0x00010c240000(puVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_5 + 0xd8);
        puVar11 = PTR_PTR_1126affe8;
        func_0x00010bfccec0(PTR_PTR_1126affe8);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar8;
        func_0x000108eb6800(puVar8,uVar5,puVar11,lVar3,uVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar10;
        func_0x00010c0d3c80();
        func_0x00010c20bc80(lVar6);
        _objc_release(puVar9);
LAB_105d7f644:
        _objc_release(puVar10);
        _objc_release(puVar11);
        _objc_release(puVar8);
      }
      uVar5 = *(undefined8 *)(param_5 + 0x130);
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar5;
      func_0x00010bf926c0();
      _objc_release(uVar5);
      if ((int)uVar14 == 0) {
        lVar4 = param_5 + 8;
        _objc_loadWeakRetained();
        lVar3 = lVar4;
        func_0x00010bf30960();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar4);
        if (lVar3 != 0) {
          puVar8 = (undefined *)(param_5 + 8);
          _objc_loadWeakRetained(puVar8);
          puVar11 = puVar8;
          func_0x00010bf30960();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar11;
          func_0x00010c0d3c80();
          func_0x00010c178c80(lVar6);
          goto LAB_105d7f764;
        }
      }
      else {
        puVar8 = *(undefined **)(param_5 + 0x130);
        func_0x00010c240000(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = *(undefined **)(param_5 + 0x148);
        func_0x00010c269d40(puVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR_PTR_1126affe8;
        func_0x00010bfccec0(PTR_PTR_1126affe8);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x000108e35f68(puVar8,puVar11,puVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar9;
        func_0x00010c0d3c80();
        func_0x00010c178c80(lVar6);
        _objc_release(puVar12);
        _objc_release(puVar9);
LAB_105d7f764:
        _objc_release(puVar10);
        _objc_release(puVar11);
        _objc_release(puVar8);
      }
      uVar5 = *(undefined8 *)(param_5 + 0x130);
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar5;
      func_0x00010bf926c0();
      _objc_release(uVar5);
      if ((int)uVar14 == 0) {
        lVar4 = param_5 + 8;
        _objc_loadWeakRetained(lVar4);
        lVar3 = lVar4;
        func_0x00010bf114c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16cc80(lVar6);
      }
      else {
        uVar5 = *(undefined8 *)(param_5 + 0x130);
        func_0x00010c240000(uVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126affe8;
        func_0x00010bfccec0(PTR_PTR_1126affe8);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar5;
        func_0x00010bf114e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16cc80(lVar6);
        _objc_release(uVar14);
        _objc_release(puVar8);
        _objc_release(uVar5);
        lVar4 = *(long *)(param_5 + 0x78);
        func_0x00010c269d40(lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar6;
        func_0x00010bf11400(lVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28a380(lVar4);
      }
      _objc_release(lVar3);
      _objc_release(lVar4);
      uVar5 = *(undefined8 *)(param_5 + 0x130);
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar5;
      func_0x00010bf926c0();
      _objc_release(uVar5);
      if ((int)uVar14 == 0) {
        lVar4 = param_5 + 8;
        _objc_loadWeakRetained();
        lVar3 = lVar4;
        func_0x00010bf89f40();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar3;
        func_0x00010bf8a020();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar3);
        _objc_release(lVar4);
        if (lVar16 == 0) goto LAB_105d7f98c;
        puVar8 = (undefined *)(param_5 + 8);
        _objc_loadWeakRetained(puVar8);
        puVar11 = puVar8;
        func_0x00010bf89f40();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar11;
        func_0x00010bf8a020();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar8 = *(undefined **)(param_5 + 0x130);
        func_0x00010c240000(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR_PTR_1126affe8;
        func_0x00010bfccec0(PTR_PTR_1126affe8);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar8;
        func_0x00010bf8a040(puVar8);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar9 = puVar10;
      func_0x00010c0d3c80();
      func_0x00010c191a20(lVar6);
      _objc_release(puVar9);
      _objc_release(puVar10);
      _objc_release(puVar11);
      _objc_release(puVar8);
      goto LAB_105d7f98c;
    }
    lVar16 = param_5 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar16;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010c077140();
    _objc_release(lVar2);
    _objc_release(lVar16);
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar6);
    if ((int)lVar7 != 0) goto LAB_105d7f4ec;
  }
  else {
LAB_105d7f98c:
    _objc_release(lVar6);
  }
  lVar4 = param_5 + 8;
  _objc_loadWeakRetained();
  lVar6 = lVar4;
  func_0x00010c07e880();
  _objc_release(lVar4);
  if ((int)lVar6 == 0) {
    lVar4 = param_5 + 8;
    _objc_loadWeakRetained();
    lVar6 = lVar4;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010c232fa0();
    _objc_release(lVar6);
    _objc_release(lVar4);
    if ((int)lVar3 == 0) goto LAB_105d7fa98;
    lVar4 = param_5 + 8;
    _objc_loadWeakRetained(lVar4);
    lVar6 = lVar4;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar3;
    func_0x000107ff9fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar16;
    func_0x00010c130740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar16);
    _objc_release(lVar3);
    _objc_release(lVar6);
  }
  else {
    lVar4 = *(long *)(param_5 + 0x90);
    func_0x00010c269d40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf5e580();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar4);
  func_0x00010bf73120(*(undefined8 *)(param_5 + 0x1a0));
  _objc_release(lVar2);
LAB_105d7fa98:
  if (*(long *)(param_5 + 0x198) != 0) {
    lVar4 = param_5 + 400;
    _objc_loadWeakRetained(lVar4);
    lVar6 = lVar4;
    func_0x00010c0f3d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef76c0();
    _objc_release(lVar6);
    _objc_release(lVar4);
    lVar4 = param_5 + 0x18;
    _objc_loadWeakRetained(lVar4);
    lVar3 = lVar4;
    func_0x00010bfe5d60();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_5 + 0x198);
    func_0x00010c29bf00(uVar14);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_5 + 0x18;
    _objc_loadWeakRetained(lVar6);
    lVar16 = lVar6;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar16;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fe0(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar16);
    _objc_release(lVar6);
    _objc_release(uVar14);
    _objc_release(lVar3);
    _objc_release(lVar4);
  }
  uVar5 = *(undefined8 *)(param_5 + 0x88);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar5;
  func_0x00010c0d2180();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5 + 8;
  _objc_loadWeakRetained(lVar4);
  lVar6 = lVar4;
  func_0x00010c0d2100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28ca20(uVar14);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(uVar14);
  _objc_release(uVar5);
  lVar6 = *(long *)(param_5 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar6);
  if (lVar4 != 0) {
    uVar15 = *(undefined8 *)(param_5 + 0x1a0);
    uVar5 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar5;
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf73420(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar5);
  }
  lVar4 = param_5 + 8;
  _objc_loadWeakRetained();
  lVar6 = lVar4;
  func_0x00010bf16100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  if (lVar6 != 0) {
    uVar14 = *(undefined8 *)(param_5 + 0x1a0);
    lVar4 = param_5 + 8;
    _objc_loadWeakRetained(lVar4);
    lVar6 = lVar4;
    func_0x00010bf16100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf73080(uVar14);
    _objc_release(lVar6);
    _objc_release(lVar4);
  }
  lVar6 = *(long *)(param_5 + 0xb0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010bf08020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar6);
  if (lVar4 != 0) {
    uVar15 = *(undefined8 *)(param_5 + 0x1a0);
    uVar5 = *(undefined8 *)(param_5 + 0xb0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar5;
    func_0x00010bf08020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf73860(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar5);
  }
  lVar4 = param_5 + 8;
  _objc_loadWeakRetained();
  lVar6 = lVar4;
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  if (lVar6 != 0) {
    uVar14 = *(undefined8 *)(param_5 + 0x1a0);
    lVar4 = param_5 + 8;
    _objc_loadWeakRetained(lVar4);
    lVar6 = lVar4;
    func_0x00010c09a760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf73360(uVar14);
    _objc_release(lVar6);
    _objc_release(lVar4);
  }
  func_0x00010beccf20(param_5);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    auVar17._8_8_ = param_2;
    auVar17._0_8_ = uVar1;
    return auVar17;
  }
  ___stack_chk_fail();
  param_7 = param_7 + 0x18;
  _objc_loadWeakRetained(param_7);
  func_0x00010bf4cf40();
  puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010b690ad8(param_3,param_4,uVar1);
  _objc_release(puVar8);
  _objc_release(param_7);
  auVar18._8_8_ = param_4;
  auVar18._0_8_ = param_3;
  return auVar18;
}



/* Entry: 105d7fdf0; end: 105d7fe73; -[SCPreviewFeatureMultiSnapImpl _outputOverlaySize] */

undefined1  [16]
FUN_105d7fdf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  param_5 = param_5 + 0x18;
  _objc_loadWeakRetained(param_5);
  func_0x00010bf4cf40();
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010b690ad8(param_3,param_4,param_1);
  _objc_release(puVar1);
  _objc_release(param_5);
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 105d7fe74; end: 105d7fe7f; -[SCPreviewFeatureMultiSnapImpl exportBakedInEffectsToURLWithCompletion:] */

void FUN_105d7fe74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0c930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__exportToURLWithJustUCOBackedIn__112560be8,0,param_3);
  return;
}



/* Entry: 105d7fe80; end: 105d7fe8b; -[SCPreviewFeatureMultiSnapImpl exportBakedInUCOToURLWithCompletion:] */

void FUN_105d7fe80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0c930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__exportToURLWithJustUCOBackedIn__112560be8,1,param_3);
  return;
}



/* Entry: 105d7fe8c; end: 105d7fe9b; -[SCPreviewFeatureMultiSnapImpl exportBakedInUCOToURLWithProgressHandler:completion:] */

void FUN_105d7fe8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0c950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__exportToURLWithJustUCOBackedIn__112560bf0,1,param_3,param_4);
  return;
}



/* Entry: 105d7fe9c; end: 105d7feab; -[SCPreviewFeatureMultiSnapImpl exportBakedInEffectsToURLWithProgressHandler:completion:] */

void FUN_105d7fe9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0c950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__exportToURLWithJustUCOBackedIn__112560bf0,0,param_3,param_4);
  return;
}



/* Entry: 105d7feac; end: 105d7ff67; -[SCPreviewFeatureMultiSnapImpl cancelOngoingTranscoding] */

void FUN_105d7feac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _os_unfair_lock_lock(param_1 + 0x178);
  uVar2 = *(undefined8 *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x180) = 0;
  _objc_retain(uVar2);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = 0;
  _objc_retain(uVar3);
  _objc_release(uVar3);
  _os_unfair_lock_unlock(param_1 + 0x178);
  func_0x00010bf2f2e0(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110ed3b58,1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43da0(uVar3,param_2,0,puVar1);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d7ff68; end: 105d7ff73; -[SCPreviewFeatureMultiSnapImpl _exportToURLWithJustUCOBackedIn:completion:] */

void FUN_105d7ff68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0c950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__exportToURLWithJustUCOBackedIn__112560bf0,param_3,0,param_4);
  return;
}



/* Entry: 105d7ff74; end: 105d80257; -[SCPreviewFeatureMultiSnapImpl _exportToURLWithJustUCOBackedIn:progressHandler:completion:] */

void FUN_105d7ff74(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010be3b460();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c4790;
  _objc_alloc();
  func_0x00010c0003e0();
  _os_unfair_lock_lock(param_1 + 0x178);
  _objc_retain(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x180);
  *(long *)(param_1 + 0x180) = lVar1;
  _objc_release(uVar3);
  _objc_retain(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x188);
  *(undefined **)(param_1 + 0x188) = puVar2;
  _objc_release(uVar3);
  _os_unfair_lock_unlock(param_1 + 0x178);
  uVar4 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010bf982e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbf4c0(lVar1);
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x130);
  func_0x00010c08f640(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c109380();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_initWeak(auStack_68,param_1);
  _objc_retain(puVar2);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c290680(lVar1);
  if (param_4 != 0) {
    func_0x00010c1e47a0(lVar1);
  }
  puVar5 = PTR_PTR_1126c4288;
  func_0x00010b68eef4();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 != (undefined *)0x0) {
    puVar5[0x1b] = 1;
    _objc_retain(puVar5);
  }
  _objc_release(puVar5);
  puVar6 = puVar5;
  func_0x00010b68f1bc(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be78ec0(param_1);
  _objc_release(puVar6);
  func_0x00010c21d9a0(lVar1);
  func_0x00010c1f5d00(lVar1);
  func_0x00010c1a8660(lVar1);
  if ((param_3 & 1) == 0) {
    lVar7 = *(long *)(param_1 + 0x170);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar7 != 0) && (lVar8 = lVar7, func_0x00010bfbe9e0(), (int)lVar8 != 0)) {
      func_0x00010bdceee0(param_1);
    }
    _objc_release(lVar7);
  }
  func_0x00010c251480(lVar1);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105d80258; end: 105d802cf;  */

void FUN_105d80258(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf43da0(*(undefined8 *)(param_1 + 0x20),param_2,param_2,param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _os_unfair_lock_lock(lVar1 + 0x178);
    if (*(long *)(lVar1 + 0x188) == *(long *)(param_1 + 0x20)) {
      uVar2 = *(undefined8 *)(lVar1 + 0x180);
      *(undefined8 *)(lVar1 + 0x180) = 0;
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(lVar1 + 0x188);
      *(undefined8 *)(lVar1 + 0x188) = 0;
      _objc_release(uVar2);
    }
    _os_unfair_lock_unlock(lVar1 + 0x178);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d802d0; end: 105d80537; -[SCPreviewFeatureMultiSnapImpl _initializeEphemeralMediaListForSaving] */

void FUN_105d802d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
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
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c233c60();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf08000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126c4798;
    func_0x00010c0b7b40(PTR_PTR_1126c4798,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR_PTR_1126c4290;
    _objc_alloc(PTR_PTR_1126c4290);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar6 = lVar1;
    func_0x00010bf12b80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar7 = lVar2;
    func_0x00010c0d2100();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c26f660();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + 0x120);
    uVar3 = *(undefined8 *)(param_1 + 200);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + 0xd0);
    lVar9 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010bf311e0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar12 = lVar11;
    func_0x00010c243320();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1;
    func_0x00010c0d2440();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010c07e920();
    func_0x00010bfeef60(puVar18,param_2,lVar6,lVar8,uVar16,uVar3,uVar17,lVar10,lVar12,lVar13,puVar5,
                        (char)lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(uVar3);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar2);
    _objc_release(lVar6);
    _objc_release(lVar1);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c07e620();
    func_0x00010c1b13a0(puVar18,param_2,lVar1);
    _objc_release(param_1);
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 105d80538; end: 105d8085b; -[SCPreviewFeatureMultiSnapImpl _applyWatermarkProfileToSnapVideoFilters:] */

void FUN_105d80538(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c075060();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    uVar5 = param_1 + 8;
    _objc_loadWeakRetained();
    uVar6 = uVar5;
    func_0x00010c09a760();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c09a760();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar2 == 0) || (uVar3 == 0)) {
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    else {
      uVar5 = uVar3;
      func_0x00010c074540();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((uVar5 & 1) != 0) {
        uVar7 = *(ulong *)(param_1 + 0x168);
        func_0x00010c2a29c0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        func_0x00010c094540(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar3;
        func_0x00010c0d4f60(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar3;
        func_0x00010bf43020(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c092080();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar5;
        func_0x00010c097fc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar6);
        _objc_release(uVar5);
        goto LAB_105d805d4;
      }
    }
    _objc_release(uVar3);
    uVar13 = 0;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x168);
    func_0x00010c2a29c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar7;
    func_0x00010bfbeb40();
    _objc_retainAutoreleasedReturnValue();
LAB_105d805d4:
    _objc_release(uVar7);
    _objc_release(uVar3);
    if ((uVar13 != 0) && (uVar5 = uVar13, func_0x00010c2357e0(), (int)uVar5 != 0)) {
      lVar4 = param_3;
      func_0x00010c243b40();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar1 != 0) {
        lVar14 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar4);
          }
          func_0x00010c224ac0(*(undefined8 *)(lVar14 * 8));
          lVar14 = lVar14 + 1;
        } while (lVar1 != lVar14);
        lVar1 = lVar4;
        func_0x00010bf52a60();
      }
      _objc_release(lVar4);
    }
  }
  _objc_release(uVar13);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be9a1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105d8085c; end: 105d8086b; -[SCPreviewFeatureMultiSnapImpl saveToCameraRollWithExportCompletion:saveToSnapAlbumCompletion:] */

void FUN_105d8085c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9a1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__saveToCameraRollWithDeleteAfter_112584218,1,param_3,param_4);
  return;
}



/* Entry: 105d8086c; end: 105d8086f; -[SCPreviewFeatureMultiSnapImpl exportBakedInUCOToCameraRollWithDeleteAfterSaving:exportCompletion:saveToSnapAlbumCompletion:] */

void FUN_105d8086c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9a1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__saveToCameraRollWithDeleteAfter_112584218);
  return;
}



/* Entry: 105d80870; end: 105d80927; -[SCPreviewFeatureMultiSnapImpl _saveToCameraRollWithDeleteAfterSaving:exportCompletion:saveToSnapAlbumCompletion:] */

void FUN_105d80870(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105d80928;
  puStack_50 = &UNK_1108e79c0;
  uStack_48 = param_4;
  uStack_40 = param_5;
  uStack_38 = param_3;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf9cf00(param_1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105d80928; end: 105d80b1b;  */

void FUN_105d80928(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_105d80b1c;
  uStack_50 = 0x105d80b2c;
  _objc_retain(param_2);
  uStack_48 = param_2;
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
  lVar1 = puStack_68[5];
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x105d80b34;
    puStack_88 = &UNK_11084aaa8;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uStack_78 = uVar3;
    _objc_retain(param_3);
    uStack_80 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_a0);
    _objc_release(uStack_80);
    uVar3 = uStack_78;
  }
  else {
    puVar2 = PTR_PTR_1126b1348;
    func_0x00010c22b6a0(PTR_PTR_1126b1348);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    _objc_retain(param_3);
    func_0x00010c14af80(puVar2);
    _objc_release(puVar2);
    _objc_release(param_3);
  }
  _objc_release(uVar3);
  _objc_release(lVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105d80b1c; end: 105d80b43;  */

void FUN_105d80b1c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105d80b44; end: 105d80b83;  */

void FUN_105d80b44(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 == 0) {
    param_2 = *(long *)(param_1 + 0x20);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d80b84; end: 105d80d17; -[SCPreviewFeatureMultiSnapImpl updateThumbnailsForV2] */

void FUN_105d80b84(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  uVar1 = *(ulong *)(param_1 + 0x198);
  if (uVar1 != 0) {
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      uVar1 = param_1 + 8;
      _objc_loadWeakRetained();
      uVar2 = uVar1;
      func_0x00010c07e920();
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) {
        return;
      }
      uVar1 = *(ulong *)(param_1 + 0x198);
    }
    func_0x00010bf8c7a0();
    if (uVar1 < 0x7fffffffffffffff) {
      lVar3 = *(long *)(param_1 + 0x198);
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c280560();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      if (lVar6 != 0) {
        lVar3 = *(long *)(param_1 + 0x198);
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        _objc_release(lVar3);
        lVar4 = lVar5;
        func_0x00010c26db80();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar4;
        func_0x00010bf529e0();
        _objc_release(lVar4);
        if (lVar3 == 0) {
          func_0x00010bfa4d80(*(undefined8 *)(param_1 + 0x198));
        }
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0xc2000000;
        pcStack_60 = FUN_105d80d18;
        puStack_58 = &UNK_1108b8e10;
        lStack_50 = param_1;
        lStack_48 = lVar6;
        func_0x00010c0d2560(param_1,param_2,uVar1,&puStack_70);
        _objc_release(lVar5);
      }
    }
  }
  return;
}



/* Entry: 105d80d18; end: 105d80daf;  */

void FUN_105d80d18(long param_1,long param_2)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105d80db0;
    puStack_40 = &UNK_110844b80;
    uStack_38 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_2);
    uStack_28 = *(undefined8 *)(param_1 + 0x28);
    lStack_30 = param_2;
    func_0x000100162d98("APPSTORE",&puStack_58);
    _objc_release(lStack_30);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 105d80db0; end: 105d80dc3;  */

void FUN_105d80db0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c285610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x198),
             PTR_s_updateEditedThumbnails_forSegmen_11267efa8,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105d80dc4; end: 105d80ee3; -[SCPreviewFeatureMultiSnapImpl multiSnapV2EditedThumbnailsAtIndex:completion:] */

void FUN_105d80dc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105d80ee4;
  puStack_80 = &UNK_1108e7a10;
  lStack_78 = param_1;
  uStack_70 = param_4;
  uStack_68 = param_3;
  _objc_retain(param_4);
  ppuVar2 = &puStack_98;
  _objc_retainBlock();
  lVar3 = param_1 + 8;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0d2100();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105d816bc;
  puStack_b0 = &UNK_1108ce848;
  lStack_a8 = param_1;
  ppuStack_a0 = ppuVar2;
  _objc_retain(ppuVar2);
  func_0x00010c0eda60(lVar4,param_2,param_3,&puStack_c8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(ppuStack_a0);
  _objc_release(ppuVar2);
  _objc_release(uStack_70);
  _objc_release(param_4);
  return;
}



/* Entry: 105d80ee4; end: 105d81643;  */

void FUN_105d80ee4(double param_1,double param_2,long param_3,undefined *param_4,undefined8 param_5,
                  long param_6,long param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar17 = *(ulong *)(param_3 + 0x30);
  uVar1 = *(ulong *)(*(long *)(param_3 + 0x20) + 0x1a0);
  func_0x00010c09df80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (uVar17 < uVar2) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_3 + 0x20) + 0x1a0);
    func_0x00010c09df80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar5;
    func_0x00010c2a0420();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar5;
    func_0x00010bfaee40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar11;
    func_0x00010c27e680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      puVar8 = PTR_PTR_1126b26d8;
      func_0x00010bf978e0(PTR_PTR_1126b26d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar7);
      _objc_release(puVar8);
    }
    lVar11 = lVar6;
    func_0x00010bf529e0();
    if (lVar11 != 0) {
      lVar11 = lVar6;
      func_0x00010c0b8600(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar7);
      _objc_release(lVar11);
    }
    puVar9 = puVar7;
    func_0x00010bf529e0();
    puVar8 = PTR_PTR_1126b26e0;
    if (puVar9 == (undefined *)0x0) {
      lVar11 = 0;
    }
    else {
      lVar11 = *(long *)(param_3 + 0x20) + 8;
      _objc_loadWeakRetained(lVar11);
      lVar10 = lVar11;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07f160();
      func_0x00010c29b780(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      _objc_release(lVar11);
      lVar11 = *(long *)(*(long *)(param_3 + 0x20) + 0x50);
      func_0x00010bf41e60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
    }
    lVar10 = lVar11;
    func_0x00010bf529e0();
    if (lVar10 != 0) {
      func_0x00010befa160(puVar3);
    }
    lVar10 = param_7;
    if (param_6 != 0) {
      puVar8 = param_4;
      func_0x00010bfb1920(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      dVar19 = param_1;
      dVar21 = param_2;
      _objc_release(puVar8);
      func_0x00010c23d0a0(param_6);
      func_0x00010c23d0a0(param_6);
      dVar20 = param_1;
      dVar22 = param_2;
      func_0x00010b690934(param_1,param_2,dVar19 / dVar21);
      param_1 = dVar20 / param_1;
      puVar8 = PTR_PTR_1126b2700;
      _objc_alloc(PTR_PTR_1126b2700);
      func_0x00010c055500(0x3fe0000000000000,0x3fe0000000000000,0x3ff0000000000000,0);
      puVar9 = PTR_PTR_1126c41f8;
      func_0x00010c252d00(PTR_PTR_1126c41f8);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR_PTR_1126c4200;
      _objc_alloc(PTR_PTR_1126c4200);
      func_0x00010c02fc00(param_1,dVar22 / param_2);
      func_0x00010bf09f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_7);
      _objc_release(puVar13);
      _objc_release(puVar9);
      _objc_release(puVar8);
    }
    uVar12 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x130);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar12;
    func_0x00010bf926c0();
    _objc_release(uVar12);
    if ((int)uVar18 == 0) {
      puVar13 = *(undefined **)(*(long *)(param_3 + 0x20) + 0x1a0);
      func_0x00010c09df80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar13;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf5c9c0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar13 = *(undefined **)(*(long *)(param_3 + 0x20) + 0x130);
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126affe8;
      func_0x00010c09e180(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar13;
      puVar16 = puVar8;
      func_0x000107ffcb24(puVar13,puVar8);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar8);
    _objc_release(puVar13);
    uVar12 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x1a0);
    func_0x00010c09df80(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar12;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29aae0();
    _objc_release(uVar18);
    _objc_release(uVar12);
    lVar14 = lVar10;
    func_0x00010bf529e0();
    if (lVar14 != 0) {
      puVar8 = PTR_PTR_1126b26f0;
      func_0x00010bf41e00(param_1,PTR_PTR_1126b26f0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(puVar8);
    }
    if (puVar9 == (undefined *)0x0) {
      uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_d0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_c0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_b0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    }
    else {
      func_0x00010bf27a60(&uStack_d0,puVar9);
    }
    uVar2 = 0;
    _CGAffineTransformIsIdentity();
    puVar8 = puVar3;
    if ((lVar4 == 0) && ((uVar2 & 1) == 0)) {
      puVar16 = PTR_PTR_1126b26c8;
      func_0x00010c22b820();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_98 = puVar16;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar13;
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar15;
      func_0x00010c0d3c80();
      _objc_release(puVar3);
      _objc_release(puVar15);
      _objc_release(puVar13);
      _objc_release(puVar16);
      puVar16 = puVar3;
    }
    puVar3 = puVar8;
    func_0x00010bf529e0();
    if (puVar3 == (undefined *)0x0) {
      puVar16 = param_4;
      (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(*(long *)(param_3 + 0x28),param_4);
    }
    else {
      puVar3 = PTR_PTR_1126bf4c8;
      _objc_alloc(PTR_PTR_1126bf4c8);
      puVar13 = PTR_PTR_1126bf4d0;
      func_0x00010c22bec0(PTR_PTR_1126bf4d0);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = param_5;
      func_0x00010bf51e00(param_5);
      func_0x00010c03c6e0(puVar3);
      _objc_release(uVar18);
      _objc_release(puVar13);
      func_0x00010c21dc00(puVar3);
      _objc_retain(param_4);
      uVar18 = *(undefined8 *)(param_3 + 0x28);
      _objc_retain(uVar18);
      func_0x00010c142ae0(puVar3);
      _objc_release(uVar18);
      _objc_release(param_4);
      _objc_release(puVar3);
    }
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar11);
    _objc_release(lVar5);
    _objc_release(puVar8);
    param_7 = lVar10;
  }
  else {
    puVar16 = (undefined *)0x0;
    (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(*(long *)(param_3 + 0x28),0);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf97970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b26d8,PTR_s_entryWithLensId__1125c3800,puVar16)
  ;
  return;
}



/* Entry: 105d81644; end: 105d81653;  */

void FUN_105d81644(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b26d8,PTR_s_entryWithLensId__1125c3800,param_2)
  ;
  return;
}



/* Entry: 105d81654; end: 105d816bb;  */

void FUN_105d81654(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  lVar3 = param_2;
  if (lVar1 != lVar2) {
    lVar3 = *(long *)(param_1 + 0x20);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d816bc; end: 105d817df;  */

void FUN_105d816bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x90);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5c940();
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfc8640(param_1,uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d817e0; end: 105d817fb;  */

void FUN_105d817e0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000105d817f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),param_2,param_3);
  return;
}



/* Entry: 105d817fc; end: 105d81837; -[SCPreviewFeatureMultiSnapImpl multiSnapV2HasAudioVisualEdits] */

long FUN_105d817fc(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x1a0);
  func_0x00010c2529c0();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0d25d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_multiSnapV2HasTrimOrSplit_112612388);
  return param_1;
}



/* Entry: 105d81838; end: 105d8190b; -[SCPreviewFeatureMultiSnapImpl multiSnapV2HasTrimOrSplit] */

long FUN_105d81838(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar1 = lVar5;
  func_0x00010c0d2100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar5);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    uVar2 = param_1 + 8;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c0d2100();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfd6360();
    if ((uVar4 & 1) == 0) {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c0d2100();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x00010bf04a40();
      _objc_release(lVar1);
      _objc_release(param_1);
    }
    else {
      lVar5 = 1;
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  return lVar5;
}



/* Entry: 105d8190c; end: 105d819e3; -[SCPreviewFeatureMultiSnapImpl _setGeofilterAttachmentUrlIfNeededToEphemeralMediaList:] */

void FUN_105d8190c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0xb8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0d6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    param_1 = param_1 + 400;
    _objc_loadWeakRetained();
    lVar2 = param_1;
    func_0x00010bfa2840();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c28f360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(param_1);
    lVar2 = lVar3;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      func_0x00010c16b3c0(param_3,param_2,lVar3);
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d819e4; end: 105d81e4b; -[SCPreviewFeatureMultiSnapImpl saveCurrentOverlayItemsToMultiSnapV2AtIndex:shouldUpdateThumbnails:] */

void FUN_105d819e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,uint param_8)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 *puVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 auStack_370 [24];
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_5 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c279080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar10 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar10 == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = 0;
    do {
      lVar19 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        puVar2 = PTR_PTR_1126ba960;
        uVar16 = *(ulong *)(lVar19 * 8);
        _objc_retain(uVar16);
        _objc_opt_class(puVar2);
        uVar3 = uVar16;
        _objc_opt_isKindOfClass(uVar16,puVar2);
        uVar5 = uVar16;
        if ((uVar3 & 1) == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar16);
        if (uVar5 != 0) {
          func_0x00010bf7e500(*(undefined8 *)(param_5 + 0x1a0));
          uVar18 = 1;
        }
        _objc_release(uVar5);
        lVar19 = lVar19 + 1;
      } while (lVar10 != lVar19);
      lVar10 = lVar4;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  _objc_release(lVar4);
  dVar20 = 0.0;
  lVar4 = *(long *)(param_5 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c278d20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar4);
  puVar15 = auStack_170;
  lVar1 = lVar10;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar19 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar10);
      }
      puVar2 = PTR_DAT_1126a51d0;
      lVar17 = *(long *)(lVar19 * 8);
      _objc_retain(lVar17);
      lVar7 = lVar17;
      func_0x00010010fab4(lVar17,puVar2);
      lVar14 = lVar17;
      if ((int)lVar7 == 0) {
        lVar14 = 0;
      }
      _objc_retain(lVar14);
      _objc_release(lVar17);
      lVar7 = lVar14;
      func_0x00010bf2fba0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar14);
      if (lVar7 != 0) {
        func_0x00010bf73780(*(undefined8 *)(param_5 + 0x1a0));
        uVar18 = 1;
      }
      _objc_release(lVar7);
      lVar19 = lVar19 + 1;
    } while (lVar1 != lVar19);
    puVar15 = auStack_170;
    lVar1 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  uVar5 = param_5 + 400;
  _objc_loadWeakRetained();
  uVar3 = uVar5;
  func_0x00010bfa2740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126ba960;
  _objc_opt_class(PTR_PTR_1126ba960);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  puVar2 = PTR_DAT_1126a51c0;
  if ((uVar5 & 1) == 0) {
    _objc_retain(uVar3);
    uVar5 = uVar3;
    func_0x00010010fab4(uVar3,puVar2);
    _objc_release(uVar3);
    if (((int)uVar5 != 0) && (uVar3 != 0)) {
      func_0x00010bf736c0(*(undefined8 *)(param_5 + 0x1a0));
    }
  }
  else {
    func_0x00010bf736e0(*(undefined8 *)(param_5 + 0x1a0));
  }
  if ((param_8 & uVar18) == 1) {
    func_0x00010c240620(param_5);
  }
  uVar6 = *(undefined8 *)(param_5 + 0x130);
  func_0x00010c08f640(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2876e0();
  _objc_release(uVar8);
  _objc_release(uVar6);
  lVar7 = *(long *)(param_5 + 0x110);
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar10;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_5 + 0x1a0);
  func_0x00010c09df80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar19;
  func_0x00010c17f520();
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(lVar19);
  _objc_release(lVar10);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(uVar3 + 0x128);
  func_0x00010befe940(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f0c0();
  _objc_release(uVar8);
  uVar16 = *(ulong *)(uVar3 + 0x1a0);
  func_0x00010c09df80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar16;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  if (puVar15 == (undefined1 *)0x7fffffffffffffff) {
    lVar1 = 0;
  }
  else {
    lVar4 = *(long *)(uVar3 + 0x1a0);
    func_0x00010c09df80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar1 != 0) {
      func_0x00010c14a2a0(uVar3);
    }
  }
  uVar6 = *(undefined8 *)(uVar3 + 0x130);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf926c0();
  _objc_release(uVar6);
  if ((int)uVar8 == 0) {
    uVar16 = uVar5;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar9 = *(ulong *)(uVar3 + 0x130);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126affe8;
    func_0x00010c09e180(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar9;
    func_0x000107ffcb24(uVar9,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar9);
    lVar10 = *(long *)(uVar3 + 0x130);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126affe8;
    func_0x00010c09e180(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar10;
    func_0x000107ffcb24(lVar10,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar10);
  }
  if (uVar16 != 0 || lVar4 != 0) {
    if (uVar16 == 0) {
      uVar9 = uVar3 + 400;
      _objc_loadWeakRetained();
      uVar11 = uVar9;
      func_0x00010bfa2820();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar11;
      func_0x00010bf52160();
      _objc_release(uVar11);
      _objc_release(uVar9);
    }
    lVar10 = uVar3 + 400;
    _objc_loadWeakRetained(lVar10);
    lVar19 = lVar10;
    func_0x00010bfa2820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c80();
    func_0x000100841590();
    dVar23 = dVar20;
    _objc_release(lVar19);
    _objc_release(lVar10);
    uVar12 = *(undefined8 *)(uVar3 + 0x68);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar12;
    func_0x00010c1302a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMidX();
    dVar21 = dVar23;
    func_0x00010c27ade0(uVar16);
    dVar22 = dVar20;
    _CGRectGetWidth(dVar20,param_2,param_3,param_4);
    dVar23 = dVar23 + dVar22 * dVar21;
    uVar13 = *(undefined8 *)(uVar3 + 0x68);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar13;
    func_0x00010c1302a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMidY();
    dVar21 = dVar22;
    func_0x00010c27ae20(uVar16);
    _CGRectGetHeight(dVar20,param_2,param_3,param_4);
    lVar10 = uVar3 + 400;
    _objc_loadWeakRetained(lVar10);
    lVar19 = lVar10;
    func_0x00010bfa2880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(dVar23,dVar22 + dVar20 * dVar21);
    _objc_release(lVar19);
    _objc_release(lVar10);
    _objc_release(uVar6);
    _objc_release(uVar13);
    _objc_release(uVar8);
    _objc_release(uVar12);
    func_0x00010c14e120(uVar16);
    dVar20 = dVar23;
    func_0x00010c14e120(uVar16);
    _CGAffineTransformMakeScale(&uStack_310,dVar23,dVar20);
    func_0x00010c141a80(uVar16);
    _CGAffineTransformMakeRotation(&uStack_340);
    _CGAffineTransformConcat(&uStack_2d8,&uStack_310,&uStack_340);
    lVar10 = uVar3 + 400;
    _objc_loadWeakRetained(lVar10);
    lVar19 = lVar10;
    func_0x00010bfa2880();
    _objc_retainAutoreleasedReturnValue();
    uStack_308 = uStack_2d0;
    uStack_310 = uStack_2d8;
    uStack_2f8 = uStack_2c0;
    uStack_300 = uStack_2c8;
    uStack_2e8 = uStack_2b0;
    uStack_2f0 = uStack_2b8;
    func_0x00010c219960();
    _objc_release(lVar19);
    _objc_release(lVar10);
    uVar8 = *(undefined8 *)(uVar3 + 0x68);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    if (uVar16 == 0) {
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
    }
    else {
      func_0x00010bf27a60(&uStack_310,uVar16);
    }
    func_0x00010c2235a0(uVar8);
    _objc_release(uVar8);
    uVar6 = *(undefined8 *)(uVar3 + 0x90);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c0efe60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28c680();
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar16);
  }
  uVar8 = *(undefined8 *)(uVar3 + 0x128);
  func_0x00010befe940(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f0c0();
  _objc_release(uVar8);
  uVar16 = uVar5;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010c2553e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar16;
  func_0x00010c071b60();
  _objc_release(lVar10);
  _objc_release(uVar16);
  if ((uVar9 & 1) == 0) {
    uVar8 = *(undefined8 *)(uVar3 + 0x98);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar5;
    func_0x00010c2553e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20bda0(uVar8);
    _objc_release(uVar16);
    _objc_release(uVar8);
  }
  uVar16 = uVar5;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar16;
  func_0x00010bf529e0();
  _objc_release(uVar16);
  if (uVar9 != 0) {
    uVar8 = *(undefined8 *)(uVar3 + 0x128);
    func_0x00010befe940(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94b80();
    _objc_release(uVar8);
  }
  uVar8 = *(undefined8 *)(uVar3 + 0x128);
  func_0x00010befe940(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f0c0();
  _objc_release(uVar8);
  uVar16 = uVar5;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010bf308c0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar16;
  func_0x00010c071b60();
  _objc_release(lVar10);
  _objc_release(uVar16);
  if ((uVar9 & 1) == 0) {
    uVar8 = *(undefined8 *)(uVar3 + 0x80);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar5;
    func_0x00010bf308c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178d00(uVar8);
    _objc_release(uVar16);
    _objc_release(uVar8);
  }
  uVar16 = uVar5;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar16;
  func_0x00010bf529e0();
  _objc_release(uVar16);
  if (uVar9 != 0) {
    uVar8 = *(undefined8 *)(uVar3 + 0x128);
    func_0x00010befe940(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94b80();
    _objc_release(uVar8);
  }
  uVar8 = *(undefined8 *)(uVar3 + 0x128);
  func_0x00010befe940(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f0c0();
  _objc_release(uVar8);
  uVar16 = uVar5;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010bfaee40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar16;
  func_0x00010c071ae0();
  _objc_release(lVar10);
  _objc_release(uVar16);
  if ((uVar9 & 1) == 0) {
    uVar8 = *(undefined8 *)(uVar3 + 0x48);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar5;
    func_0x00010bfaee40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1;
    func_0x00010bfaee40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130e20(uVar8);
    _objc_release(lVar10);
    _objc_release(uVar16);
    _objc_release(uVar8);
  }
  uVar16 = uVar5;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar16;
  func_0x00010bf04980();
  _objc_release(uVar16);
  if ((int)uVar9 != 0) {
    uVar8 = *(undefined8 *)(uVar3 + 0x128);
    func_0x00010befe940(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94b80();
    _objc_release(uVar8);
  }
  uVar8 = *(undefined8 *)(uVar3 + 0x128);
  func_0x00010befe940(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f0c0();
  _objc_release(uVar8);
  lVar10 = uVar3 + 8;
  _objc_loadWeakRetained(lVar10);
  lVar19 = lVar10;
  func_0x00010c0d2100();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar19;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar7;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280560();
  uVar6 = *(undefined8 *)(uVar3 + 0x88);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c0d2180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193c00();
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(lVar17);
  _objc_release(lVar7);
  _objc_release(lVar19);
  _objc_release(lVar10);
  uVar16 = uVar5;
  func_0x00010bf8a020();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010bf8a020(lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar16;
  func_0x00010c071b60();
  _objc_release(lVar10);
  _objc_release(uVar16);
  if ((uVar9 & 1) == 0) {
    uVar8 = *(undefined8 *)(uVar3 + 0x88);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar5;
    func_0x00010bf8a020(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130de0(uVar8);
    _objc_release(uVar16);
    _objc_release(uVar8);
    lVar10 = uVar3 + 0x18;
    _objc_loadWeakRetained(lVar10);
    lVar19 = lVar10;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar19;
    func_0x00010c084f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar19);
    _objc_release(lVar10);
    uVar16 = uVar5;
    func_0x00010bf8a020(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c21b4c0(lVar7);
    _objc_release(uVar16);
    _objc_release(lVar7);
  }
  uVar16 = uVar5;
  func_0x00010bf8a020();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar16;
  func_0x00010bf529e0();
  _objc_release(uVar16);
  if (uVar9 != 0) {
    uVar8 = *(undefined8 *)(uVar3 + 0x128);
    func_0x00010befe940(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94b80();
    _objc_release(uVar8);
  }
  lVar10 = uVar3 + 400;
  _objc_loadWeakRetained(lVar10);
  func_0x00010bfa2860();
  _objc_release(lVar10);
  uVar8 = *(undefined8 *)(uVar3 + 0xb8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar5;
  func_0x00010bf0d660(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28ca40(uVar8);
  _objc_release(uVar16);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(uVar3 + 0x58);
  uVar16 = uVar5;
  func_0x00010bfc0e60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2ac0(uVar8);
  _objc_release(uVar16);
  uVar9 = *(ulong *)(uVar3 + 0x1a0);
  func_0x00010c09df80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar9;
  func_0x00010bf529e0();
  if (lVar14 + 1U < uVar16) {
    lVar19 = *(long *)(uVar3 + 0x1a0);
    func_0x00010c09df80();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar19;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar19);
    _objc_release(uVar9);
    if (lVar10 != 0) {
      func_0x00010c26f040(&uStack_358,lVar10);
      goto LAB_105d82984;
    }
  }
  else {
    _objc_release(uVar9);
  }
  lVar10 = *(long *)(uVar3 + 0x70);
  func_0x00010c269d40(lVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c276200();
  _CMTimeMakeWithSeconds(&uStack_358,600);
LAB_105d82984:
  _objc_release(lVar10);
  if (uVar5 == 0) {
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    uStack_300 = 0;
  }
  else {
    func_0x00010c26f040(&uStack_340,uVar5);
    func_0x00010c26f040(&uStack_310,uVar5);
  }
  uStack_388 = uStack_350;
  uStack_390 = uStack_358;
  uStack_380 = uStack_348;
  _CMTimeSubtract(auStack_370,&uStack_390,&uStack_310);
  _CMTimeRangeMake(&uStack_310,&uStack_340,auStack_370);
  uVar8 = *(undefined8 *)(uVar3 + 0x20);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar5;
  func_0x00010c0d36c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uStack_338 = uStack_308;
  uStack_340 = uStack_310;
  uStack_328 = uStack_2f8;
  uStack_330 = uStack_300;
  uStack_318 = uStack_2e8;
  uStack_320 = uStack_2f0;
  func_0x00010c289b00(uVar8);
  _objc_release(uVar16);
  _objc_release(uVar8);
  uVar16 = uVar5;
  func_0x00010bfd68c0();
  if ((int)uVar16 != 0) {
    uVar8 = *(undefined8 *)(uVar3 + 0x128);
    func_0x00010befe940(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94b80();
    _objc_release(uVar8);
  }
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(uVar5);
  return;
}



/* Entry: 105d81e4c; end: 105d82ac3; -[SCPreviewFeatureMultiSnapImpl multiSnapV2DidPlayToVideoIndex:lastIndex:] */

void FUN_105d81e4c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_170 [24];
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
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  uVar1 = *(undefined8 *)(param_5 + 0x128);
  func_0x00010befe940(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f0c0();
  _objc_release(uVar1);
  uVar2 = *(ulong *)(param_5 + 0x1a0);
  func_0x00010c09df80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (param_8 == 0x7fffffffffffffff) {
    lVar15 = 0;
  }
  else {
    lVar4 = *(long *)(param_5 + 0x1a0);
    func_0x00010c09df80();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar15 != 0) {
      func_0x00010c14a2a0(param_5);
    }
  }
  uVar5 = *(undefined8 *)(param_5 + 0x130);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf926c0();
  _objc_release(uVar5);
  if ((int)uVar1 == 0) {
    uVar2 = uVar3;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar15;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar6 = *(ulong *)(param_5 + 0x130);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126affe8;
    func_0x00010c09e180(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x000107ffcb24(uVar6,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(uVar6);
    lVar8 = *(long *)(param_5 + 0x130);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126affe8;
    func_0x00010c09e180(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar8;
    func_0x000107ffcb24(lVar8,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(lVar8);
  }
  if (uVar2 != 0 || lVar4 != 0) {
    if (uVar2 == 0) {
      uVar6 = param_5 + 400;
      _objc_loadWeakRetained();
      uVar9 = uVar6;
      func_0x00010bfa2820();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar9;
      func_0x00010bf52160();
      _objc_release(uVar9);
      _objc_release(uVar6);
    }
    lVar8 = param_5 + 400;
    _objc_loadWeakRetained(lVar8);
    lVar14 = lVar8;
    func_0x00010bfa2820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c80();
    func_0x000100841590();
    dVar18 = param_1;
    _objc_release(lVar14);
    _objc_release(lVar8);
    uVar10 = *(undefined8 *)(param_5 + 0x68);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar10;
    func_0x00010c1302a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMidX();
    dVar16 = dVar18;
    func_0x00010c27ade0(uVar2);
    dVar17 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    dVar18 = dVar18 + dVar17 * dVar16;
    uVar11 = *(undefined8 *)(param_5 + 0x68);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar11;
    func_0x00010c1302a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMidY();
    dVar16 = dVar17;
    func_0x00010c27ae20(uVar2);
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    lVar8 = param_5 + 400;
    _objc_loadWeakRetained(lVar8);
    lVar14 = lVar8;
    func_0x00010bfa2880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(dVar18,dVar17 + param_1 * dVar16);
    _objc_release(lVar14);
    _objc_release(lVar8);
    _objc_release(uVar5);
    _objc_release(uVar11);
    _objc_release(uVar1);
    _objc_release(uVar10);
    func_0x00010c14e120(uVar2);
    dVar16 = dVar18;
    func_0x00010c14e120(uVar2);
    _CGAffineTransformMakeScale(&uStack_110,dVar18,dVar16);
    func_0x00010c141a80(uVar2);
    _CGAffineTransformMakeRotation(&uStack_140);
    _CGAffineTransformConcat(&uStack_d8,&uStack_110,&uStack_140);
    lVar8 = param_5 + 400;
    _objc_loadWeakRetained(lVar8);
    lVar14 = lVar8;
    func_0x00010bfa2880();
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = uStack_d0;
    uStack_110 = uStack_d8;
    uStack_f8 = uStack_c0;
    uStack_100 = uStack_c8;
    uStack_e8 = uStack_b0;
    uStack_f0 = uStack_b8;
    func_0x00010c219960();
    _objc_release(lVar14);
    _objc_release(lVar8);
    uVar1 = *(undefined8 *)(param_5 + 0x68);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
    }
    else {
      func_0x00010bf27a60(&uStack_110,uVar2);
    }
    func_0x00010c2235a0(uVar1);
    _objc_release(uVar1);
    uVar5 = *(undefined8 *)(param_5 + 0x90);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c0efe60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28c680();
    _objc_release(uVar1);
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  uVar1 = *(undefined8 *)(param_5 + 0x128);
  func_0x00010befe940(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f0c0();
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar15;
  func_0x00010c2553e0(lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c071b60();
  _objc_release(lVar8);
  _objc_release(uVar2);
  if ((uVar6 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_5 + 0x98);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c2553e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20bda0(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar2 = uVar3;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (uVar6 != 0) {
    uVar1 = *(undefined8 *)(param_5 + 0x128);
    func_0x00010befe940(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94b80();
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_5 + 0x128);
  func_0x00010befe940(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f0c0();
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar15;
  func_0x00010bf308c0(lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c071b60();
  _objc_release(lVar8);
  _objc_release(uVar2);
  if ((uVar6 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_5 + 0x80);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf308c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178d00(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar2 = uVar3;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (uVar6 != 0) {
    uVar1 = *(undefined8 *)(param_5 + 0x128);
    func_0x00010befe940(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94b80();
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_5 + 0x128);
  func_0x00010befe940(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f0c0();
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar15;
  func_0x00010bfaee40(lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c071ae0();
  _objc_release(lVar8);
  _objc_release(uVar2);
  if ((uVar6 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_5 + 0x48);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfaee40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar15;
    func_0x00010bfaee40(lVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130e20(uVar1);
    _objc_release(lVar8);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar2 = uVar3;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf04980();
  _objc_release(uVar2);
  if ((int)uVar6 != 0) {
    uVar1 = *(undefined8 *)(param_5 + 0x128);
    func_0x00010befe940(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94b80();
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_5 + 0x128);
  func_0x00010befe940(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f0c0();
  _objc_release(uVar1);
  lVar8 = param_5 + 8;
  _objc_loadWeakRetained(lVar8);
  lVar14 = lVar8;
  func_0x00010c0d2100();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar14;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280560();
  uVar5 = *(undefined8 *)(param_5 + 0x88);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c0d2180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193c00();
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar14);
  _objc_release(lVar8);
  uVar2 = uVar3;
  func_0x00010bf8a020();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar15;
  func_0x00010bf8a020(lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c071b60();
  _objc_release(lVar8);
  _objc_release(uVar2);
  if ((uVar6 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_5 + 0x88);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf8a020(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130de0(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    lVar8 = param_5 + 0x18;
    _objc_loadWeakRetained(lVar8);
    lVar14 = lVar8;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar14;
    func_0x00010c084f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    _objc_release(lVar8);
    uVar2 = uVar3;
    func_0x00010bf8a020(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c21b4c0(lVar12);
    _objc_release(uVar2);
    _objc_release(lVar12);
  }
  uVar2 = uVar3;
  func_0x00010bf8a020();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (uVar6 != 0) {
    uVar1 = *(undefined8 *)(param_5 + 0x128);
    func_0x00010befe940(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94b80();
    _objc_release(uVar1);
  }
  lVar8 = param_5 + 400;
  _objc_loadWeakRetained(lVar8);
  func_0x00010bfa2860();
  _objc_release(lVar8);
  uVar1 = *(undefined8 *)(param_5 + 0xb8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf0d660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28ca40(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_5 + 0x58);
  uVar2 = uVar3;
  func_0x00010bfc0e60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2ac0(uVar1);
  _objc_release(uVar2);
  uVar6 = *(ulong *)(param_5 + 0x1a0);
  func_0x00010c09df80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bf529e0();
  if (param_7 + 1U < uVar2) {
    lVar14 = *(long *)(param_5 + 0x1a0);
    func_0x00010c09df80();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar14;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    _objc_release(uVar6);
    if (lVar8 != 0) {
      func_0x00010c26f040(&uStack_158,lVar8);
      goto LAB_105d82984;
    }
  }
  else {
    _objc_release(uVar6);
  }
  lVar8 = *(long *)(param_5 + 0x70);
  func_0x00010c269d40(lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c276200();
  _CMTimeMakeWithSeconds(&uStack_158,600);
LAB_105d82984:
  _objc_release(lVar8);
  if (uVar3 == 0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
  }
  else {
    func_0x00010c26f040(&uStack_140,uVar3);
    func_0x00010c26f040(&uStack_110,uVar3);
  }
  uStack_188 = uStack_150;
  uStack_190 = uStack_158;
  uStack_180 = uStack_148;
  _CMTimeSubtract(auStack_170,&uStack_190,&uStack_110);
  _CMTimeRangeMake(&uStack_110,&uStack_140,auStack_170);
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0d36c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uStack_138 = uStack_108;
  uStack_140 = uStack_110;
  uStack_128 = uStack_f8;
  uStack_130 = uStack_100;
  uStack_118 = uStack_e8;
  uStack_120 = uStack_f0;
  func_0x00010c289b00(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010bfd68c0();
  if ((int)uVar2 != 0) {
    uVar1 = *(undefined8 *)(param_5 + 0x128);
    func_0x00010befe940(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94b80();
    _objc_release(uVar1);
  }
  _objc_release(lVar4);
  _objc_release(lVar15);
  _objc_release(uVar3);
  return;
}



/* Entry: 105d82ac4; end: 105d82bc3; -[SCPreviewFeatureMultiSnapImpl multiSnapV2FirstFrameRendered] */

void FUN_105d82ac4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  *(undefined1 *)(param_1 + 0x30) = 1;
  if (*(long *)(param_1 + 0x1a0) != 0) {
    lVar1 = *(long *)(param_1 + 0x198);
    if (lVar1 == 0) {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      func_0x00010c233c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 1) {
      func_0x00010bfa4d80(*(undefined8 *)(param_1 + 0x198));
    }
    uVar4 = *(undefined8 *)(param_1 + 0x198);
    func_0x00010c29bf00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(uVar4);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c07e920();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c28b010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateThumbnailsForV2_112680628);
      return;
    }
  }
  return;
}



/* Entry: 105d82bc4; end: 105d82bef; -[SCPreviewFeatureMultiSnapImpl finishTouchControl:] */

void FUN_105d82bc4(long param_1)

{
  func_0x00010bf76f60(*(undefined8 *)(param_1 + 0x1a0));
                    /* WARNING: Could not recover jumptable at 0x00010c240630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_snapEditStateChangeShouldUpdateT_11266dbb0,1)
  ;
  return;
}



/* Entry: 105d82bf0; end: 105d82bf7; -[SCPreviewFeatureMultiSnapImpl finishRewindingWithTrackableView:] */

void FUN_105d82bf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13fe90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x198),PTR_s_revealThumbnails_11262d9c0);
  return;
}



/* Entry: 105d82bf8; end: 105d82cb3; -[SCPreviewFeatureMultiSnapImpl snapEditStateChangeShouldUpdateThumbnails:] */

void FUN_105d82bf8(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x1a0) != 0) {
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
    if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c28b010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateThumbnailsForV2_112680628);
      return;
    }
  }
  return;
}



/* Entry: 105d82cb4; end: 105d82cdb; -[SCPreviewFeatureMultiSnapImpl previewThumbnailsController] */

void FUN_105d82cb4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d82cdc; end: 105d82ce7; -[SCPreviewFeatureMultiSnapImpl preparePreviewEphemeralMediaList:destinationInfo:] */

void FUN_105d82cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be78ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__preparePreviewEphemeralMediaLis_11257bd50,param_3,0,param_4);
  return;
}



/* Entry: 105d82ce8; end: 105d83063; -[SCPreviewFeatureMultiSnapImpl _preparePreviewEphemeralMediaList:bakedInJustUCOFilters:destinationInfo:] */

void FUN_105d82ce8(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,int param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  _objc_retain(param_4);
  puVar10 = PTR_PTR_1126c4290;
  _objc_retain(param_6);
  _objc_opt_class(puVar10);
  uVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar10);
  uVar1 = param_4;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c219700(uVar1);
  _objc_release(param_6);
  lVar3 = param_2 + 400;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bfa2720();
  _objc_release(lVar3);
  lVar3 = param_2 + 8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c07e920();
  _objc_release(lVar3);
  uVar2 = param_2 + 8;
  _objc_loadWeakRetained();
  uVar4 = uVar2;
  func_0x00010c07e920();
  if ((uVar4 & 1) == 0) {
    _objc_release(uVar2);
  }
  else {
    lVar5 = *(long *)(param_2 + 0x1a0);
    func_0x00010c09df80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010bf529e0();
    _objc_release(lVar5);
    _objc_release(uVar2);
    if (lVar3 == 1) {
      func_0x00010bfc0200(uVar1);
      goto LAB_105d82e28;
    }
  }
  lVar3 = param_2 + 8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c07e880();
  func_0x00010bfc0200(uVar1);
  _objc_release(lVar3);
LAB_105d82e28:
  func_0x00010c21d9a0(uVar1);
  func_0x00010c222080(param_1,uVar1);
  uVar6 = *(undefined8 *)(param_2 + 0x90);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5c600();
  func_0x00010c1d6440(uVar1);
  _objc_release(uVar6);
  func_0x00010c2142c0(uVar1);
  func_0x00010c1f5d00(uVar1);
  lVar3 = param_2 + 8;
  _objc_loadWeakRetained(lVar3);
  lVar5 = lVar3;
  func_0x00010bfb6c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f340(uVar1);
  _objc_release(lVar5);
  _objc_release(lVar3);
  lVar3 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar5 = lVar3;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c07f160();
  _objc_release(lVar5);
  _objc_release(lVar3);
  if ((int)lVar7 != 0) {
    lVar3 = param_2 + 8;
    _objc_loadWeakRetained();
    lVar5 = lVar3;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c2490c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x000109024c88(0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(lVar3);
    if (lVar8 != 0) {
      func_0x00010c207b40(uVar1);
    }
    _objc_release(lVar8);
  }
  func_0x00010bea4240(param_2);
  if (param_5 == 0) {
    puVar10 = *(undefined **)(param_2 + 0x1a0);
    _objc_retain(puVar10);
  }
  else {
    puVar10 = PTR_PTR_1126c47a0;
    _objc_alloc(PTR_PTR_1126c47a0);
    uVar6 = *(undefined8 *)(param_2 + 0x1a0);
    func_0x00010c09df80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0269c0(puVar10);
    _objc_release(uVar6);
  }
  lVar3 = param_2 + 8;
  _objc_loadWeakRetained(lVar3);
  lVar5 = lVar3;
  func_0x00010c0d2100();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar9;
  func_0x00010c0d2180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47200(uVar1);
  _objc_release(uVar6);
  _objc_release(uVar9);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(puVar10);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105d83064; end: 105d8312b; -[SCPreviewFeatureMultiSnapImpl multiSnapV2CollectionViewControllerDidTapToSelectSegment:] */

void FUN_105d83064(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105d8312c;
  puStack_40 = &UNK_110841f20;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bfd25e0(uVar1,param_2,&puStack_58);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ccc0();
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105d8312c; end: 105d8313b;  */

void FUN_105d8312c(long param_1,int param_2)

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



/* Entry: 105d8313c; end: 105d83183; -[SCPreviewFeatureMultiSnapImpl multiSnapV2CollectionViewControllerDidUpdateSegmentStates:] */

void FUN_105d8313c(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x1a0) != 0) && (*(long *)(param_1 + 0x198) == param_3)) {
    func_0x00010c287dc0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d83184; end: 105d83223; -[SCPreviewFeatureMultiSnapImpl updateMultiSnapToolbarButtons] */

void FUN_105d83184(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x1a0) != 0) {
    func_0x00010bf8c7a0(*(undefined8 *)(param_1 + 0x198));
    uVar1 = *(undefined8 *)(param_1 + 0x198);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010becca00(param_1);
    func_0x00010beccc60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beccf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__toggleTimerToolButton_112590d70);
    return;
  }
  return;
}



/* Entry: 105d83224; end: 105d833bf; -[SCPreviewFeatureMultiSnapImpl _toggleAttachmentToolButton:] */

void FUN_105d83224(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c084f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
  if (((param_3 & 1) == 0) && (lVar3 != 0)) {
    lVar2 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar2);
    param_1 = lVar2;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc80();
  }
  else {
    if ((param_3 == 0) || (lVar3 != 0)) goto LAB_105d833a4;
    func_0x00010bf8c7a0(*(undefined8 *)(param_1 + 0x198));
    lVar4 = *(long *)(param_1 + 0xb8);
    func_0x00010c269d40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_s__toolbarButtonTapped__11252d108;
    uVar5 = *(undefined8 *)(param_1 + 0x1a0);
    func_0x00010c09df80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf0d660();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf5a120(lVar4,param_2,param_1,puVar1,uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(lVar4);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0669c0();
    _objc_release(lVar4);
  }
  _objc_release(param_1);
  _objc_release(lVar2);
LAB_105d833a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105d833c0; end: 105d8350b; -[SCPreviewFeatureMultiSnapImpl _toggleFilterStackingToolButton:] */

void FUN_105d833c0(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c084f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (((param_3 & 1) == 0) && (lVar2 != 0)) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    param_1 = lVar1;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc80();
LAB_105d834e4:
    _objc_release(param_1);
  }
  else {
    if ((param_3 == 0) || (lVar2 != 0)) goto LAB_105d834f4;
    func_0x00010bf8c7a0(*(undefined8 *)(param_1 + 0x198));
    lVar3 = *(long *)(param_1 + 0x1a0);
    func_0x00010c09df80(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar4 = PTR_PTR_1126c42b0;
    lVar3 = lVar1;
    func_0x00010bfaee40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dee00(puVar4,param_2,lVar3);
    _objc_release(lVar3);
    if (puVar4 != (undefined *)0x0) {
      param_1 = param_1 + 400;
      _objc_loadWeakRetained(param_1);
      func_0x00010bfa28a0();
      goto LAB_105d834e4;
    }
  }
  _objc_release(lVar1);
LAB_105d834f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105d8350c; end: 105d8376b; -[SCPreviewFeatureMultiSnapImpl _toggleTimerToolButton] */

void FUN_105d8350c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0d2100();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb4f60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c084f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((lVar3 < 2) || (lVar4 == 0)) {
    if ((1 < lVar3) || (lVar4 != 0)) goto LAB_105d83734;
    uVar5 = *(ulong *)(param_1 + 0xa0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf599c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar7 = *(ulong *)(param_1 + 0xa0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010bf80f20();
    _objc_release(uVar7);
    if ((uVar5 & 1) == 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x140);
      func_0x00010c293220(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      puVar9 = PTR_PTR_1126c42c0;
      uVar8 = uVar10;
      func_0x00010c29b300(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c084f00(puVar9,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214da0(uVar6,param_2,puVar9);
      _objc_release(puVar9);
      _objc_release(uVar8);
      uVar5 = uVar6;
      func_0x00010c26f400(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c075760();
      func_0x00010c1c8c60(uVar6,param_2,uVar7 & 0xffffffff);
      _objc_release(uVar5);
      _objc_release(uVar10);
    }
    if (uVar6 != 0) {
      uVar5 = param_1 + 0x18;
      _objc_loadWeakRetained(uVar5);
      uVar7 = uVar5;
      func_0x00010c2737a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0669c0();
      _objc_release(uVar7);
      goto LAB_105d83724;
    }
  }
  else {
    uVar6 = param_1 + 0x18;
    _objc_loadWeakRetained(uVar6);
    uVar5 = uVar6;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc80();
LAB_105d83724:
    _objc_release(uVar5);
  }
  _objc_release(uVar6);
LAB_105d83734:
  uVar10 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c129080();
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105d8376c; end: 105d838bf; -[SCPreviewFeatureMultiSnapImpl multiSnapV2CollectionViewController:didPerformOperationOnSegment:shouldUpdateThumbnails:] */

void FUN_105d8376c(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x1a0) != 0) && (*(long *)(param_1 + 0x198) == param_3)) {
    func_0x00010c240620(param_1,param_2,param_5);
    lVar1 = *(long *)(param_1 + 0x198);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 1) {
      func_0x00010beccf20(param_1);
    }
    if (param_4 == 1) {
      lVar2 = param_1 + 400;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bfa27a0();
      _objc_release(lVar2);
    }
    lVar2 = param_1 + 400;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfa28c0();
    _objc_release(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0d2180();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c0d2100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28ca20(uVar5,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(param_1);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d838c0; end: 105d83b6f; -[SCPreviewFeatureMultiSnapImpl multiSnapV2CollectionViewControllerDidPressDelete:deleteBlock:] */

void FUN_105d838c0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(long *)(param_1 + 0x1a0) != 0) && (*(long *)(param_1 + 0x198) == param_3)) {
    uVar1 = *(ulong *)(param_1 + 0xc0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c233c40();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126af180;
    if ((uVar2 & 1) == 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
    else {
      func_0x000108edea80();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      func_0x00010beef320();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      puVar4 = PTR_PTR_1126af180;
      func_0x000108edea50();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef320();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      puVar5 = PTR_PTR_1126af180;
      func_0x000108edea38();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      func_0x00010beef320();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      puVar6 = PTR_PTR_1126af178;
      func_0x00010c22b900(PTR_PTR_1126af178);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x000108edea68();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c235c40(puVar6);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(param_4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(param_4);
    }
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000105d83b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
  return;
}



/* Entry: 105d83b70; end: 105d83b7b;  */

void FUN_105d83b70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105d83b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105d83b7c; end: 105d83bc3;  */

void FUN_105d83b7c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c190c60();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000105d83bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 105d83bc4; end: 105d83bd3;  */

void FUN_105d83bc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 105d83bd4; end: 105d83c23; -[SCPreviewFeatureMultiSnapImpl _toolbarButtonTapped:] */

void FUN_105d83bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa27e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d83c24; end: 105d83c6f; -[SCPreviewFeatureMultiSnapImpl didTapPreviewContainerView:] */

uint FUN_105d83c24(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x198) != 0) {
    func_0x00010c0d2600();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf6e8a0();
    _objc_release(param_1);
    return (uint)lVar1 ^ 1;
  }
  return 1;
}



/* Entry: 105d83c70; end: 105d83c87; -[SCPreviewFeatureMultiSnapImpl delegate] */

void FUN_105d83c70(long param_1)

{
  _objc_loadWeakRetained(param_1 + 400);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d83c88; end: 105d83c93; -[SCPreviewFeatureMultiSnapImpl setDelegate:] */

void FUN_105d83c88(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 400,param_3);
  return;
}



/* Entry: 105d83c94; end: 105d83c9b; -[SCPreviewFeatureMultiSnapImpl multiSnapV2ViewController] */

undefined8 FUN_105d83c94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x198);
}



/* Entry: 105d83c9c; end: 105d83ca3; -[SCPreviewFeatureMultiSnapImpl multiSnapStateHandler] */

undefined8 FUN_105d83c9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a0);
}



/* Entry: 105d83ca4; end: 105d83f03; -[SCPreviewFeatureMultiSnapImpl .cxx_destruct] */

void FUN_105d83ca4(long param_1)

{
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_destroyWeak(param_1 + 400);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105d83f04; end: 105d840b7; -[SCPreviewFeatureMultiSnapServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d83f04(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_1 + _DAT_112735b2c;
    _objc_loadWeakRetained();
  }
  uVar1 = uVar5;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar5 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar1);
  func_0x00010c2485a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = 1;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c47b0;
  _objc_alloc(PTR_PTR_1126c47b0);
  func_0x00010c02cae0();
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112735bd0);
  }
  _objc_retain(uVar6);
  func_0x00010bf9d660(uVar6);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar5);
  return;
}



/* Entry: 105d840b8; end: 105d848eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d840b8(long param_1,undefined8 param_2)

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
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  undefined8 uVar73;
  undefined *puVar74;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (*(char *)(param_1 + 0x30) != '\x01')) {
    puVar74 = (undefined *)0x0;
  }
  else {
    puVar74 = PTR_PTR_1126c47a8;
    _objc_alloc();
    lVar2 = lVar1 + _DAT_112735b30;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    uVar73 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = lVar1 + _DAT_112735b94;
    _objc_loadWeakRetained();
    lVar5 = lVar1 + _DAT_112735b40;
    _objc_loadWeakRetained();
    lVar6 = lVar1 + _DAT_112735b54;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1 + _DAT_112735b4c;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010bf11400();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1 + _DAT_112735ba4;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010bf69900();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar1 + _DAT_112735bac;
    _objc_loadWeakRetained();
    lVar14 = lVar1 + _DAT_112735b98;
    _objc_loadWeakRetained();
    lVar15 = lVar1 + _DAT_112735b38;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar1 + _DAT_112735b80;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010c2a0940();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar1 + _DAT_112735b84;
    _objc_loadWeakRetained();
    lVar20 = lVar19;
    func_0x00010c2a2e80();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar1 + _DAT_112735b74;
    _objc_loadWeakRetained();
    lVar22 = lVar21;
    func_0x00010c293d00();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar1 + _DAT_112735bb0;
    _objc_loadWeakRetained();
    lVar24 = lVar23;
    func_0x00010c26a1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar1 + _DAT_112735b88;
    _objc_loadWeakRetained();
    lVar26 = lVar1 + _DAT_112735b34;
    _objc_loadWeakRetained();
    lVar27 = lVar26;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = lVar1 + _DAT_112735ba0;
    _objc_loadWeakRetained();
    lVar29 = lVar28;
    func_0x00010c2542a0();
    _objc_retainAutoreleasedReturnValue();
    lVar30 = lVar1 + _DAT_112735bc0;
    _objc_loadWeakRetained();
    lVar31 = lVar30;
    func_0x00010c084e20();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = lVar1 + _DAT_112735b44;
    _objc_loadWeakRetained();
    lVar33 = lVar1 + _DAT_112735ba8;
    _objc_loadWeakRetained();
    lVar34 = lVar1 + _DAT_112735b3c;
    _objc_loadWeakRetained();
    lVar35 = lVar1 + _DAT_112735b50;
    _objc_loadWeakRetained();
    lVar36 = lVar35;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    lVar37 = lVar1 + _DAT_112735b64;
    _objc_loadWeakRetained();
    lVar38 = lVar37;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    lVar39 = lVar1 + _DAT_112735b60;
    _objc_loadWeakRetained();
    lVar40 = lVar39;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    lVar41 = lVar1 + _DAT_112735b58;
    _objc_loadWeakRetained();
    lVar42 = lVar41;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    lVar43 = lVar1 + _DAT_112735b8c;
    _objc_loadWeakRetained();
    lVar44 = lVar1 + _DAT_112735bc8;
    _objc_loadWeakRetained();
    lVar45 = lVar44;
    func_0x00010bfbdac0();
    _objc_retainAutoreleasedReturnValue();
    lVar46 = lVar1 + _DAT_112735b68;
    _objc_loadWeakRetained();
    lVar47 = lVar46;
    func_0x00010bf07a40();
    _objc_retainAutoreleasedReturnValue();
    lVar48 = lVar1 + _DAT_112735b6c;
    _objc_loadWeakRetained();
    lVar49 = lVar48;
    func_0x00010c252540();
    _objc_retainAutoreleasedReturnValue();
    lVar50 = lVar1 + _DAT_112735b9c;
    _objc_loadWeakRetained();
    lVar51 = lVar50;
    func_0x00010c243b20();
    _objc_retainAutoreleasedReturnValue();
    lVar52 = lVar1 + _DAT_112735b9c;
    _objc_loadWeakRetained();
    lVar53 = lVar52;
    func_0x00010c243b00();
    _objc_retainAutoreleasedReturnValue();
    lVar54 = lVar1 + _DAT_112735b5c;
    _objc_loadWeakRetained();
    lVar55 = lVar54;
    func_0x00010c0ef680();
    _objc_retainAutoreleasedReturnValue();
    lVar56 = lVar1 + _DAT_112735b48;
    _objc_loadWeakRetained();
    lVar57 = lVar1 + _DAT_112735b90;
    _objc_loadWeakRetained();
    lVar58 = lVar1 + _DAT_112735b78;
    _objc_loadWeakRetained();
    lVar59 = lVar58;
    func_0x00010c29f540();
    _objc_retainAutoreleasedReturnValue();
    lVar60 = lVar1 + _DAT_112735b7c;
    _objc_loadWeakRetained();
    lVar61 = lVar60;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar62 = lVar1 + _DAT_112735b70;
    _objc_loadWeakRetained();
    lVar63 = lVar62;
    func_0x00010c2705e0();
    _objc_retainAutoreleasedReturnValue();
    lVar64 = lVar1 + _DAT_112735bb4;
    _objc_loadWeakRetained();
    lVar65 = lVar64;
    func_0x00010c244d60();
    _objc_retainAutoreleasedReturnValue();
    lVar66 = lVar1 + _DAT_112735bc4;
    _objc_loadWeakRetained();
    lVar67 = lVar66;
    func_0x00010c0c8940();
    _objc_retainAutoreleasedReturnValue();
    lVar68 = lVar1 + _DAT_112735bcc;
    _objc_loadWeakRetained();
    lVar69 = lVar68;
    func_0x00010c27d8a0();
    _objc_retainAutoreleasedReturnValue();
    lVar70 = lVar1 + _DAT_112735bb8;
    _objc_loadWeakRetained();
    lVar71 = lVar1 + _DAT_112735bbc;
    _objc_loadWeakRetained();
    lVar72 = lVar71;
    func_0x00010bfbe800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05e1e0(puVar74,param_2,lVar3,uVar73,lVar4,lVar5,lVar7,lVar9,lVar12,lVar13,lVar14,
                        lVar16,lVar18,lVar20,lVar22,lVar24,lVar25,lVar27,lVar29,lVar31,lVar32,lVar33
                        ,lVar34,lVar36,lVar38,lVar40,lVar42,lVar43,lVar45,lVar47,lVar49,lVar51,
                        lVar53,lVar55,lVar56,lVar57,lVar59,lVar61,lVar63,lVar65,lVar67,lVar69,lVar70
                        ,lVar72);
    _objc_release(lVar72);
    _objc_release(lVar71);
    _objc_release(lVar70);
    _objc_release(lVar69);
    _objc_release(lVar68);
    _objc_release(lVar67);
    _objc_release(lVar66);
    _objc_release(lVar65);
    _objc_release(lVar64);
    _objc_release(lVar63);
    _objc_release(lVar62);
    _objc_release(lVar61);
    _objc_release(lVar60);
    _objc_release(lVar59);
    _objc_release(lVar58);
    _objc_release(lVar57);
    _objc_release(lVar56);
    _objc_release(lVar55);
    _objc_release(lVar54);
    _objc_release(lVar53);
    _objc_release(lVar52);
    _objc_release(lVar51);
    _objc_release(lVar50);
    _objc_release(lVar49);
    _objc_release(lVar48);
    _objc_release(lVar47);
    _objc_release(lVar46);
    _objc_release(lVar45);
    _objc_release(lVar44);
    _objc_release(lVar43);
    _objc_release(lVar42);
    _objc_release(lVar41);
    _objc_release(lVar40);
    _objc_release(lVar39);
    _objc_release(lVar38);
    _objc_release(lVar37);
    _objc_release(lVar36);
    _objc_release(lVar35);
    _objc_release(lVar34);
    _objc_release(lVar33);
    _objc_release(lVar32);
    _objc_release(lVar31);
    _objc_release(lVar30);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(lVar27);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
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
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar74);
  return;
}



/* Entry: 105d848ec; end: 105d84b07; -[SCPreviewFeatureMultiSnapServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d848ec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112735bd0,0);
  _objc_destroyWeak(param_1 + _DAT_112735bcc);
  _objc_destroyWeak(param_1 + _DAT_112735bc8);
  _objc_destroyWeak(param_1 + _DAT_112735bc4);
  _objc_destroyWeak(param_1 + _DAT_112735bc0);
  _objc_destroyWeak(param_1 + _DAT_112735bbc);
  _objc_destroyWeak(param_1 + _DAT_112735bb8);
  _objc_destroyWeak(param_1 + _DAT_112735bb4);
  _objc_destroyWeak(param_1 + _DAT_112735bb0);
  _objc_destroyWeak(param_1 + _DAT_112735bac);
  _objc_destroyWeak(param_1 + _DAT_112735ba8);
  _objc_destroyWeak(param_1 + _DAT_112735ba4);
  _objc_destroyWeak(param_1 + _DAT_112735ba0);
  _objc_destroyWeak(param_1 + _DAT_112735b9c);
  _objc_destroyWeak(param_1 + _DAT_112735b98);
  _objc_destroyWeak(param_1 + _DAT_112735b94);
  _objc_destroyWeak(param_1 + _DAT_112735b90);
  _objc_destroyWeak(param_1 + _DAT_112735b8c);
  _objc_destroyWeak(param_1 + _DAT_112735b88);
  _objc_destroyWeak(param_1 + _DAT_112735b84);
  _objc_destroyWeak(param_1 + _DAT_112735b80);
  _objc_destroyWeak(param_1 + _DAT_112735b7c);
  _objc_destroyWeak(param_1 + _DAT_112735b78);
  _objc_destroyWeak(param_1 + _DAT_112735b74);
  _objc_destroyWeak(param_1 + _DAT_112735b70);
  _objc_destroyWeak(param_1 + _DAT_112735b6c);
  _objc_destroyWeak(param_1 + _DAT_112735b68);
  _objc_destroyWeak(param_1 + _DAT_112735b64);
  _objc_destroyWeak(param_1 + _DAT_112735b60);
  _objc_destroyWeak(param_1 + _DAT_112735b5c);
  _objc_destroyWeak(param_1 + _DAT_112735b58);
  _objc_destroyWeak(param_1 + _DAT_112735b54);
  _objc_destroyWeak(param_1 + _DAT_112735b50);
  _objc_destroyWeak(param_1 + _DAT_112735b4c);
  _objc_destroyWeak(param_1 + _DAT_112735b48);
  _objc_destroyWeak(param_1 + _DAT_112735b44);
  _objc_destroyWeak(param_1 + _DAT_112735b40);
  _objc_destroyWeak(param_1 + _DAT_112735b3c);
  _objc_destroyWeak(param_1 + _DAT_112735b38);
  _objc_destroyWeak(param_1 + _DAT_112735b34);
  _objc_destroyWeak(param_1 + _DAT_112735b30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735b2c);
  return;
}



/* Entry: 105d84b08; end: 105d84bb3; -[SCPreviewFeatureMultiSnapServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d84b08(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112735bd4;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112735bdc;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c0d20c0(lVar2);
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



/* Entry: 105d84bb4; end: 105d84bf7; -[SCPreviewFeatureMultiSnapServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d84bb4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112735bdc);
  _objc_destroyWeak(param_1 + _DAT_112735bd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735bd4);
  return;
}



/* Entry: 105d84bf8; end: 105d84d53; -[SCMusicStickerPresenter initWithStickerContainer:itemViewService:experiments:snapDocEditor:videoTracking:] */

undefined1 *
FUN_105d84bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ed090;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b33c0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d84d54; end: 105d84d97; -[SCMusicStickerPresenter preloadMusicStickerForSelection:] */

void FUN_105d84d54(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bec2be0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d84d98; end: 105d84fcf; -[SCMusicStickerPresenter presentMusicStickerForSelection:selectedMusicStickerData:snapSegmentDuration:previewView:captureMode:isRemovable:] */

void FUN_105d84d98(double param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  dVar8 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_5;
  func_0x00010c2551e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010808d884();
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    func_0x00010bf0ffa0(&uStack_88,lVar1);
  }
  _CMTimeGetSeconds(&uStack_88);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126bf6f0;
  lVar1 = param_4;
  func_0x00010c15a4a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c277e80();
  lVar4 = param_5;
  func_0x00010c0b5900(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c240180(puVar5,param_3,lVar3,lVar2,lVar4,(long)(dVar8 * 1000.0),
                      *(undefined8 *)(param_2 + 0x38));
  _objc_release(lVar4);
  _objc_release(lVar1);
  if (((ulong)puVar5 & 1) == 0) {
    puVar5 = PTR_PTR_1126bf6f0;
    func_0x00010bfc7ba0(PTR_PTR_1126bf6f0,param_3,*(undefined8 *)(param_2 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    if ((puVar5 != (undefined *)0x0) && (puVar6 = puVar5, func_0x00010c2551e0(), (int)puVar6 == 4))
    {
      func_0x00010bf6b520(PTR_PTR_1126bf6f0,param_3,*(undefined8 *)(param_2 + 0x38));
    }
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12ad20();
    _objc_release(uVar7);
    if (param_4 != 0) {
      lVar1 = param_5;
      func_0x00010c0b5900();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c08fa60();
      _objc_release(lVar1);
      if (lVar2 == 0) {
        func_0x00010be7eaa0(param_2,param_3,param_4,param_5,param_6,param_8,param_7);
      }
      else {
        func_0x00010be7c4a0(param_1);
      }
    }
    _objc_release(puVar5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105d84fd0; end: 105d85053; -[SCMusicStickerPresenter sendTimeObservable:toStickerViewIfNeeded:] */

void FUN_105d84fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010010fab4();
  lVar1 = param_4;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(param_4);
  if (lVar1 != 0) {
    func_0x00010c214de0(param_4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d85054; end: 105d850e3; -[SCMusicStickerPresenter getMusicPreviewStickerView] */

void FUN_105d85054(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c255320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bfaea20(uVar2,param_2,&PTR___NSConcreteGlobalBlock_1108e7ab0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105d850e4; end: 105d85137;  */

bool FUN_105d850e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bab40;
  func_0x00010c253880(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee100(puVar1);
  _objc_release(param_2);
  return puVar1 == (undefined *)0xb;
}



/* Entry: 105d85138; end: 105d85177; -[SCMusicStickerPresenter setStickersHidden:] */

void FUN_105d85138(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20bd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d85178; end: 105d851ef; -[SCMusicStickerPresenter setCurrentTimeObservable:] */

void FUN_105d85178(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010bfc7b80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010c15ce20(param_1,param_2,param_3,lVar2);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d851f0; end: 105d852c3; -[SCMusicStickerPresenter updateDurationForStickerView:timeRange:] */

void FUN_105d851f0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010010fab4();
    _objc_release(lVar1);
    if ((lVar1 != 0) && ((int)lVar2 != 0)) {
      puVar3 = PTR_PTR_1126bf6f0;
      func_0x00010c240340();
      if (((ulong)puVar3 & 1) == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf083a0();
        _objc_release(uVar4);
      }
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105d852c4; end: 105d853f3; -[SCMusicStickerPresenter _stickerViewForPickerSelection:] */

void FUN_105d852c4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = param_3;
    func_0x00010c277f60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c07b240();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      puVar7 = PTR_PTR_1126bc968;
      _objc_alloc(PTR_PTR_1126bc968);
      uVar1 = param_3;
      func_0x00010c15a4a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c277e80();
      uVar3 = param_3;
      func_0x00010c277f60(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c278a00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c277f60(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf0a460();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c054c80(puVar7,param_2,uVar2,uVar4,uVar6);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar1);
      goto LAB_105d853d0;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_105d853d0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105d853f4; end: 105d858af; -[SCMusicStickerPresenter _presentLyricsStickerViewForSelection:snapSegmentDuration:lyricsStickerData:] */

void FUN_105d853f4(double param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined *param_5)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined1 auStack_a0 [8];
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  _objc_release(uVar3);
  uVar4 = param_2;
  func_0x00010bfc7b80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126bc948;
  _objc_opt_class(PTR_PTR_1126bc948);
  uVar7 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar6);
  uVar1 = uVar5;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar5 = uVar1;
  func_0x00010c277e80();
  uVar7 = param_4;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c277e80();
  _objc_release(uVar7);
  if (uVar5 != uVar8) {
    uVar2 = (undefined4)*(undefined8 *)(param_2 + 0x48);
    func_0x00010bfec280();
    puVar6 = PTR_PTR_1126bc958;
    _objc_alloc();
    puVar9 = param_5;
    func_0x00010c0b58a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c027d20();
    _objc_release(puVar9);
    puVar9 = param_5;
    func_0x00010c2551e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    if (puVar9 == PTR_PTR_1133bb410) {
      uVar17 = 2;
    }
    else if (puVar9 == PTR_PTR_1133bb418) {
      uVar17 = 3;
    }
    else if (puVar9 == PTR_PTR_1133bb408) {
      uVar17 = 1;
    }
    else {
      uVar17 = 4;
      if (puVar9 != PTR_PTR_1133bb400) {
        uVar17 = 0;
      }
    }
    _objc_release(puVar9);
    _objc_release(puVar9);
    uVar5 = param_4;
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == 0) {
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x00010bf0ffa0(&uStack_90,uVar5);
    }
    _CMTimeGetSeconds(&uStack_90);
    _objc_release(uVar5);
    uVar5 = param_4;
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c277e80();
    uVar8 = param_4;
    func_0x00010c277f60(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010c278a00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_4;
    func_0x00010c277f60(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf0a460();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_5;
    func_0x00010c0b5900(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_4;
    func_0x00010c277f60(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c081860();
    func_0x00010808d6d4(uVar7,uVar10,uVar12,uVar17,(long)(param_1 * 1000.0),puVar9,uVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    _objc_release(puVar9);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar8);
    _objc_release(uVar5);
    puVar9 = PTR_PTR_1126bc960;
    func_0x00010c2904a0(PTR_PTR_1126bc960);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar15;
    func_0x00010c29ce00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar15);
    _objc_initWeak(&uStack_90,param_2);
    uVar15 = uVar3;
    func_0x00010c0e0460(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a0,&uStack_90);
    uStack_98 = uVar2;
    _objc_retain(uVar7);
    uVar16 = uVar15;
    func_0x00010c25ff60(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(&uStack_90);
    _objc_release(uVar3);
    _objc_release(puVar9);
    _objc_release(uVar7);
    _objc_release(puVar6);
  }
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105d858b0; end: 105d85973;  */

void FUN_105d858b0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(lVar2 + 0x48);
    func_0x00010c296d80();
    if (iVar1 == *(int *)(param_1 + 0x30)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar3);
      func_0x00010c0c0800(param_2);
      _objc_release(uVar3);
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d85974; end: 105d85aeb;  */

void FUN_105d85974(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12ad20();
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126bc970;
  _objc_alloc(PTR_PTR_1126bc970);
  func_0x00010c020180();
  puVar2 = PTR_PTR_1126ba960;
  _objc_alloc(PTR_PTR_1126ba960);
  func_0x00010c04c640();
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126c3d58;
  _objc_opt_new(PTR_PTR_1126c3d58);
  func_0x00010c2aa4a0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1340(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b0ec0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b01a0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b06e0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066e80(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d85aec; end: 105d85aef;  */

void FUN_105d85aec(void)

{
  return;
}



/* Entry: 105d85af0; end: 105d85d2b; -[SCMusicStickerPresenter _presentStickerViewForSelection:selectedMusicStickerData:previewView:isRemovable:captureMode:] */

void FUN_105d85af0(ulong param_1,undefined8 param_2,ulong param_3,undefined *param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bfc7b80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bc968;
  _objc_opt_class(PTR_PTR_1126bc968);
  uVar6 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar4 = uVar2;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010c277e80();
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c277e80();
  _objc_release(uVar4);
  if (uVar2 == uVar6) goto LAB_105d85cf4;
  puVar5 = param_4;
  func_0x00010c2551e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1133bb400;
  _objc_release();
  if (puVar5 == puVar3) {
    func_0x00010be2c760(param_1);
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
LAB_105d85c7c:
      uVar4 = param_1;
      func_0x00010bec2be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c277f60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c081860();
      func_0x00010be3c5e0(param_1);
      _objc_release(uVar2);
    }
    else {
      uVar4 = param_3;
      func_0x00010c15a4a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010c277e80();
      uVar6 = *(ulong *)(param_1 + 8);
      func_0x00010c277e80();
      _objc_release(uVar4);
      if (uVar2 != uVar6) goto LAB_105d85c7c;
      uVar4 = param_3;
      func_0x00010c277f60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c081860();
      func_0x00010be3c5e0(param_1);
    }
    _objc_release(uVar4);
  }
  uVar7 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar7);
LAB_105d85cf4:
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d85d2c; end: 105d85f27; -[SCMusicStickerPresenter _insertMusicStickerView:previewView:isRemovable:captureMode:isTrending:] */

void FUN_105d85d2c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126bc978;
  if (param_5 != 0) {
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_alloc(puVar1);
    lVar2 = param_5;
    func_0x00010c277e80(param_5);
    lVar3 = param_5;
    func_0x00010c2711a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_5;
    func_0x00010bf0a460(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054ce0(puVar1,param_4,lVar2,lVar3,lVar4,param_9);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar5 = PTR_PTR_1126ba960;
    _objc_alloc(PTR_PTR_1126ba960);
    func_0x00010c04c640();
    func_0x00010be618c0(param_3,param_4,param_5,param_6,param_8);
    _objc_release(param_6);
    _objc_release(param_5);
    puVar6 = PTR_PTR_1126c3d58;
    _objc_opt_new(PTR_PTR_1126c3d58);
    func_0x00010c2aa4a0(param_1,param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b1340(puVar6,param_4,param_7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b0ec0(puVar6,param_4,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b01a0(puVar6,param_4,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b06e0(puVar6,param_4,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_3 + 0x18);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf21f60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066e80(uVar7,param_4,puVar5,puVar8);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105d85f28; end: 105d860bf; -[SCMusicStickerPresenter _handleMusicOnlySelection:] */

void FUN_105d85f28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c15a4a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c277e80();
  uVar4 = param_3;
  func_0x00010c277f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c278a00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c277f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf0a460();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c277f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar9 = uVar8;
  func_0x00010c081860(uVar8);
  func_0x00010808d6d4(uVar3,uVar5,uVar7,4,0,0,uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b13b8;
  puVar10 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb980(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),
                      *(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),0x3ff0000000000000,0,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105d860c0; end: 105d862e3; -[SCMusicStickerPresenter _musicStickerPositionForSticker:previewView:captureMode:] */

undefined1  [16]
FUN_105d860c0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
             long param_6)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  _objc_retain(param_5);
  dVar4 = 0.0;
  dVar5 = 0.0;
  if (param_6 == 4) goto LAB_105d862bc;
  func_0x00010bfb68e0(param_4);
  _CGRectGetWidth();
  lVar1 = *(long *)(param_2 + 0x10);
  dVar3 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d38e0();
  _objc_release(lVar1);
  if (lVar2 - 1U < 2) {
    lVar2 = param_5;
    func_0x00010bf4b2a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMinX();
    dVar3 = dVar3 + 20.0;
    dVar4 = param_1 * 0.5 + dVar3;
    _objc_release(lVar2);
  }
  else if (lVar2 == 3) {
    lVar2 = param_5;
    func_0x00010c2737a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c273b00();
    _CGRectGetMinX();
    dVar3 = dVar3 + -20.0;
    dVar4 = dVar3 - param_1 * 0.5;
    _objc_release(lVar2);
    func_0x00010bf4cf40(param_5);
    _CGRectGetMaxX();
    dVar3 = (dVar3 + -20.0) - param_1 * 0.5;
    if (dVar3 <= dVar4) {
      dVar4 = dVar3;
    }
  }
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d38e0();
  _objc_release(lVar1);
  lVar1 = param_5;
  if (lVar2 - 2U < 2) {
    lVar2 = param_5;
    func_0x00010c270400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010c110940(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetMinY();
      dVar5 = -20.0;
      goto LAB_105d862b0;
    }
    func_0x00010c270400();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMinY();
    dVar5 = dVar3 + -20.0;
    _objc_release(lVar2);
  }
  else {
    dVar5 = 0.0;
    if (lVar2 != 1) goto LAB_105d862bc;
    func_0x00010c2be8a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMaxY();
    dVar5 = 20.0;
LAB_105d862b0:
    dVar5 = dVar3 + dVar5;
  }
  _objc_release(lVar1);
LAB_105d862bc:
  _objc_release(param_5);
  auVar6._8_8_ = dVar5;
  auVar6._0_8_ = dVar4;
  return auVar6;
}



/* Entry: 105d862e4; end: 105d862eb; -[SCMusicStickerPresenter currentTimeObservable] */

undefined8 FUN_105d862e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105d862ec; end: 105d8636f; -[SCMusicStickerPresenter .cxx_destruct] */

void FUN_105d862ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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


