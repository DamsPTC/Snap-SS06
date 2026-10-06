/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053cddb8; end: 1053cddcf; -[SCCreativeToolsABProvider isPreviewRetouchGatedAsExclusiveLens] */

void FUN_1053cddb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7818,0,0);
  return;
}



/* Entry: 1053cddd0; end: 1053cdde7; -[SCCreativeToolsABProvider isPreviewRetouchFreemiumEnabled] */

void FUN_1053cddd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7838,0,0);
  return;
}



/* Entry: 1053cdde8; end: 1053cde3b; -[SCCreativeToolsABProvider isSnapEditorDrawingToolEnabled:] */

uint FUN_1053cdde8(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf16980();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf1f440(uVar3,param_2,&PTR____CFConstantStringClassReference_110dd7a18,0,0);
    uVar1 = (uint)uVar3 | param_3 ^ 1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1053cde3c; end: 1053cde8f; -[SCCreativeToolsABProvider isSnapEditorScissorToolEnabled:] */

uint FUN_1053cde3c(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf16b40();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf1f440(uVar3,param_2,&PTR____CFConstantStringClassReference_110dd7a38,0,0);
    uVar1 = (uint)uVar3 | param_3 ^ 1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1053cde90; end: 1053cde97; -[SCCreativeToolsABProvider isSnapEditorVoiceoverToolEnabled:] */

uint FUN_1053cde90(undefined8 param_1,undefined8 param_2,uint param_3)

{
  return param_3 ^ 1;
}



/* Entry: 1053cde98; end: 1053cde9f; -[SCCreativeToolsABProvider isSnapEditorAutoCaptionsToolEnabled:] */

uint FUN_1053cde98(undefined8 param_1,undefined8 param_2,uint param_3)

{
  return param_3 ^ 1;
}



/* Entry: 1053cdea0; end: 1053cdeb7; -[SCCreativeToolsABProvider isSnapEditorAttachmentToolEnabled] */

uint FUN_1053cdea0(uint param_1)

{
  func_0x00010c06c860();
  return param_1 ^ 1;
}



/* Entry: 1053cdeb8; end: 1053cdef3; -[SCCreativeToolsABProvider isSnapEditorCropToolEnabled:] */

uint FUN_1053cdeb8(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110dd7a58,0,0);
  return (uint)uVar1 | param_3 ^ 1;
}



/* Entry: 1053cdef4; end: 1053cdf3f; -[SCCreativeToolsABProvider isSnapEditorToggleLensToolEnabled] */

undefined8 FUN_1053cdef4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c240dc0();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7a78,0,0);
  return uVar2;
}



/* Entry: 1053cdf40; end: 1053cdf8b; -[SCCreativeToolsABProvider isSnapEditorMagicEraserEnabled] */

undefined8 FUN_1053cdf40(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c240ac0();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7a98,0,0);
  return uVar2;
}



/* Entry: 1053cdf8c; end: 1053ce047; -[SCCreativeToolsABProvider _magicCaptionConfig] */

void FUN_1053cdf8c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1195e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110dd74b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b8470;
  _objc_alloc(PTR_PTR_1126b8470);
  uVar4 = uVar2;
  func_0x00010c296d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lStack_38 = 0;
  func_0x00010c008360(puVar3,param_2,uVar4,&lStack_38);
  lVar1 = lStack_38;
  _objc_release(uVar4);
  puVar5 = (undefined *)0x0;
  if (lVar1 == 0) {
    _objc_retain(puVar3);
    puVar5 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1053ce048; end: 1053ce103; -[SCCreativeToolsABProvider _previewDiscardAlertConfig] */

void FUN_1053ce048(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1195e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110dd7578,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b8478;
  _objc_alloc(PTR_PTR_1126b8478);
  uVar4 = uVar2;
  func_0x00010c296d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lStack_38 = 0;
  func_0x00010c008360(puVar3,param_2,uVar4,&lStack_38);
  lVar1 = lStack_38;
  _objc_release(uVar4);
  puVar5 = (undefined *)0x0;
  if (lVar1 == 0) {
    _objc_retain(puVar3);
    puVar5 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1053ce104; end: 1053ce10b; -[SCCreativeToolsABProvider killSwitchProvider] */

undefined8 FUN_1053ce104(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1053ce10c; end: 1053ce16b; -[SCCreativeToolsABProvider .cxx_destruct] */

void FUN_1053ce10c(long param_1)

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



/* Entry: 1053ce16c; end: 1053ce183; -[SCCreativeToolsKillSwitchProvider isMemoriesTrackingItemInstanceDisabled] */

void FUN_1053ce16c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7ab8,0,0);
  return;
}



/* Entry: 1053ce184; end: 1053ce19b; -[SCCreativeToolsKillSwitchProvider isMemoriesAnimatedStickersItemInstanceDisabled] */

void FUN_1053ce184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7ad8,0,0);
  return;
}



/* Entry: 1053ce19c; end: 1053ce1b3; -[SCCreativeToolsKillSwitchProvider isVideoTrackedStickersItemInstanceDisabled] */

void FUN_1053ce19c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7af8,0,0);
  return;
}



/* Entry: 1053ce1b4; end: 1053ce1cb; -[SCCreativeToolsKillSwitchProvider isStickerContainerStickersItemInstanceDisabled] */

void FUN_1053ce1b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7b18,0,0);
  return;
}



/* Entry: 1053ce1cc; end: 1053ce1e3; -[SCCreativeToolsKillSwitchProvider isStoryInviteRewriteDisabled] */

void FUN_1053ce1cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7b38,0,0);
  return;
}



/* Entry: 1053ce1e4; end: 1053ce1fb; -[SCCreativeToolsKillSwitchProvider isCaptionCarouselAppliedEntitiesMainThreadEnabled] */

void FUN_1053ce1e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7b58,0,0);
  return;
}



/* Entry: 1053ce1fc; end: 1053ce213; -[SCCreativeToolsKillSwitchProvider isCropOverlaySubviewV2MethodDisabled] */

void FUN_1053ce1fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7b78,0,0);
  return;
}



/* Entry: 1053ce214; end: 1053ce22b; -[SCCreativeToolsKillSwitchProvider isFriendmojiScrollingRemovalDisabled] */

void FUN_1053ce214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7b98,0,0);
  return;
}



/* Entry: 1053ce22c; end: 1053ce243; -[SCCreativeToolsKillSwitchProvider isToolbarHeightAdjustmentDisabled] */

void FUN_1053ce22c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7bb8,0,0);
  return;
}



/* Entry: 1053ce244; end: 1053ce25b; -[SCCreativeToolsKillSwitchProvider isCaptureLocationUpdateDisabled] */

void FUN_1053ce244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7bd8,0,0);
  return;
}



/* Entry: 1053ce25c; end: 1053ce273; -[SCCreativeToolsKillSwitchProvider isMusicCameraFavoriteButtonIgnoreLensCarouselDisabled] */

void FUN_1053ce25c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7bf8,0,0);
  return;
}



/* Entry: 1053ce274; end: 1053ce28b; -[SCCreativeToolsKillSwitchProvider isAnimatedStickerTouchAreaExtensionDisabled] */

void FUN_1053ce274(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7c18,0,0);
  return;
}



/* Entry: 1053ce28c; end: 1053ce2a3; -[SCCreativeToolsKillSwitchProvider isCaptionPreserveFallbackFontsDisabled] */

void FUN_1053ce28c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7c38,0,0);
  return;
}



/* Entry: 1053ce2a4; end: 1053ce2bb; -[SCCreativeToolsKillSwitchProvider isNilMediaContentBlockingEnabled] */

void FUN_1053ce2a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7c58,0,0);
  return;
}



/* Entry: 1053ce2bc; end: 1053ce2d3; -[SCCreativeToolsKillSwitchProvider isPreviewStickerPickerSimplifiedScrollingDisabled] */

void FUN_1053ce2bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7c78,0,0);
  return;
}



/* Entry: 1053ce2d4; end: 1053ce2eb; -[SCCreativeToolsKillSwitchProvider isCaptionPasteConfigurationANRFixDisabled] */

void FUN_1053ce2d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7c98,0,0);
  return;
}



/* Entry: 1053ce2ec; end: 1053ce2f7; -[SCCreativeToolsKillSwitchProvider .cxx_destruct] */

void FUN_1053ce2ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053ce2f8; end: 1053ce35f; +[SCCTPRemixStitchingSettings descriptor] */

void FUN_1053ce2f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb8d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a31e10,
                        &PTR____CFConstantStringClassReference_110dd7cb8,
                        &PTR_s_snapchat_creativetools_remix_1130d3f90,
                        &PTR_s_isStitchingEnabled_1130d3fa8,4,0x10,0x1c);
    puRam00000001136bb8d0 = puVar1;
  }
  return;
}



/* Entry: 1053ce360; end: 1053ce40b; -[SCNotificationExperienceAddFriendsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053ce360(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = param_1 + _DAT_1127229b8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0dc960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_1127229bc;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(long *)(param_1 + lVar6) = lVar3;
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  puVar4 = PTR_PTR_1126b8480;
  func_0x00010bf75ec0(PTR_PTR_1126b8480,param_2,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11ad40(uVar5,param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1053ce40c; end: 1053ce49b; -[SCNotificationExperienceAddFriendsEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053ce40c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127229bc);
  puVar1 = PTR_PTR_1126b8480;
  func_0x00010bf77860(PTR_PTR_1126b8480,param_2,5,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11ad40(uVar2);
  _objc_release(puVar1);
  puStack_38 = PTR_PTR_1126e7fd8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053ce49c; end: 1053ce4e3; -[SCNotificationExperienceAddFriendsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053ce49c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127229b8);
  _objc_destroyWeak(param_1 + _DAT_1127229c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127229bc,0);
  return;
}



/* Entry: 1053ce4e4; end: 1053ce583; -[SCPhoneContactBookStoreLogger initWithGrapheneRegistry:] */

undefined1 * FUN_1053ce4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e7fe0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0fab60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053ce584; end: 1053ce5d7; -[SCPhoneContactBookStoreLogger logContactBookSize:] */

void FUN_1053ce584(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8488;
  func_0x00010bf70180(PTR_PTR_1126b8488);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053ce5d8; end: 1053ce62b; -[SCPhoneContactBookStoreLogger logContactBookFilteredSize:] */

void FUN_1053ce5d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8488;
  func_0x00010bf70120(PTR_PTR_1126b8488);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053ce62c; end: 1053ce67f; -[SCPhoneContactBookStoreLogger logContactBookRatio:] */

void FUN_1053ce62c(float param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8488;
  func_0x00010bf70140(PTR_PTR_1126b8488);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_2 + 8),param_3,puVar1,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053ce680; end: 1053ce68b; -[SCPhoneContactBookStoreLogger .cxx_destruct] */

void FUN_1053ce680(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053ce68c; end: 1053ce72f; -[SCPhoneContactBookStore initWithContactStore:logger:] */

undefined1 *
FUN_1053ce68c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7fe8;
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



/* Entry: 1053ce730; end: 1053cea37; -[SCPhoneContactBookStore fetchPhoneBookContactsWithMetadata:] */

void FUN_1053ce730(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_1053cea38;
  uStack_90 = 0x1053cea48;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x2020000000;
  uStack_b8 = 0;
  uStack_60 = *(undefined8 *)PTR__CNContactIdentifierKey_110349b10;
  uStack_58 = *(undefined8 *)PTR__CNContactPhoneNumbersKey_110349b30;
  puVar3 = PTR__OBJC_CLASS___CNContactFormatter_1126b8498;
  puStack_88 = puVar2;
  func_0x00010bf6e780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar2;
  if (param_3 == 0) {
    _objc_retain(puVar2);
  }
  else {
    uStack_80 = *(undefined8 *)PTR__CNContactEmailAddressesKey_110349af8;
    uStack_78 = *(undefined8 *)PTR__CNContactImageDataAvailableKey_110349b18;
    uStack_70 = *(undefined8 *)PTR__CNContactDatesKey_110349af0;
    uStack_68 = *(undefined8 *)PTR__CNContactSocialProfilesKey_110349b38;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  puVar4 = PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0;
  _objc_alloc(PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0);
  func_0x00010c0210c0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bf97b60(*(undefined8 *)(param_1 + 8));
  _objc_retain(0);
  func_0x00010c0a3a00(*(undefined8 *)(param_1 + 0x10));
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf529e0(puStack_a8[5]);
  func_0x00010c0a39c0(uVar7);
  if (0 < (long)puStack_c8[3]) {
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = puStack_a8[5];
    func_0x00010bf529e0(uVar5);
    uVar1 = 0;
    if (puStack_c8[3] != 0) {
      uVar1 = uVar5 / (ulong)puStack_c8[3];
    }
    func_0x00010c0a39e0((float)uVar1,uVar7);
  }
  uVar7 = puStack_a8[5];
  _objc_retain(uVar7);
  _objc_release(0);
  _objc_release(puVar4);
  __Block_object_dispose(&uStack_d0,8);
  __Block_object_dispose(&uStack_b0,8);
  puVar2 = puStack_88;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_d0,8);
  lVar6 = 8;
  __Block_object_dispose(&uStack_b0);
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = 0;
  return;
}



/* Entry: 1053cea38; end: 1053cea4f;  */

void FUN_1053cea38(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1053cea50; end: 1053ceab7;  */

void FUN_1053cea50(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  FUN_1053ceb98(param_2,*(undefined1 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053ceab8; end: 1053ceb5f; -[SCPhoneContactBookStore fetchContactBookChangesSinceHistoryToken:] */

void FUN_1053ceab8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___CNChangeHistoryFetchRequest_1126b8490;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c209d40();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  lStack_38 = 0;
  func_0x00010bf98180(uVar2,param_2,puVar1,&lStack_38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  if (lStack_38 == 0) {
    _objc_retain(uVar2);
    uVar3 = uVar2;
  }
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1053ceb60; end: 1053ceb8f; -[SCPhoneContactBookStore .cxx_destruct] */

void FUN_1053ceb60(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053ceb90; end: 1053ceb97;  */

void FUN_1053ceb90(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_value_112683588);
  return;
}



/* Entry: 1053ceb98; end: 1053ceef7;  */

void FUN_1053ceb98(long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar2 = param_1;
  func_0x00010c0fb120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar2);
      }
      lVar4 = *(long *)(lVar11 * 8);
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = lVar5;
      func_0x00010c08fa60();
      if (lVar4 != 0) {
        func_0x00010befa120(puVar1);
      }
      _objc_release(lVar5);
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release(param_1);
  lVar3 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar6 != 0) {
    puVar7 = puVar1;
    func_0x00010bf529e0();
    if (param_2 == 0) {
      puVar10 = (undefined *)0x0;
      if (puVar7 == (undefined *)0x0) goto LAB_1053ceea8;
    }
    else {
      if (puVar7 == (undefined *)0x0) {
        lVar3 = param_1;
        func_0x00010bf8d6e0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar3;
        func_0x00010bf529e0();
        _objc_release(lVar3);
        if (lVar6 == 0) goto LAB_1053ceea8;
      }
      _objc_retain(param_1);
      lVar3 = param_1;
      func_0x00010bf8d6e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x000100504554();
      _objc_release(lVar3);
      func_0x00010bfe7320(param_1);
      lVar3 = param_1;
      func_0x00010bf65660(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      _objc_release(lVar3);
      lVar3 = param_1;
      func_0x00010c075e60();
      if ((int)lVar3 != 0) {
        lVar3 = param_1;
        func_0x00010c246080(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        _objc_release(lVar3);
      }
      puVar10 = PTR_PTR_1126b84a0;
      _objc_alloc(PTR_PTR_1126b84a0);
      func_0x00010c00f4c0();
      _objc_release(lVar6);
      _objc_release(param_1);
    }
    puVar7 = PTR_PTR_1126b84a8;
    _objc_alloc(PTR_PTR_1126b84a8);
    lVar3 = param_1;
    func_0x00010bfe5ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___CNContactFormatter_1126b8498;
    func_0x00010c25d3c0(PTR__OBJC_CLASS___CNContactFormatter_1126b8498);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0023a0(puVar7);
    _objc_release(puVar8);
    _objc_release(lVar3);
    _objc_release(puVar10);
  }
LAB_1053ceea8:
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126b8488);
    func_0x00010c01b780();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053ceef8; end: 1053cef23; +[SCGraphenePhoneContactBookStoreMetric deviceContactTotal] */

void FUN_1053ceef8(void)

{
  _objc_alloc(PTR_PTR_1126b8488);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053cef24; end: 1053cef4f; +[SCGraphenePhoneContactBookStoreMetric deviceContactFiltered] */

void FUN_1053cef24(void)

{
  _objc_alloc(PTR_PTR_1126b8488);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053cef50; end: 1053cef7b; +[SCGraphenePhoneContactBookStoreMetric deviceContactRatio] */

void FUN_1053cef50(void)

{
  _objc_alloc(PTR_PTR_1126b8488);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053cef7c; end: 1053cf01b; -[SCGraphenePhoneContactBookStoreMetric description] */

void FUN_1053cef7c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd7cd8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dd7cd8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e7ff0;
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



/* Entry: 1053cf01c; end: 1053cf173; -[SCGrapheneRegistry phoneContactBookStoreGraphene] */

void FUN_1053cf01c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1053cf0a4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bb8e0 != -1) {
    func_0x00010002a2fc(0x1136bb8e0,&puStack_48);
  }
  uVar1 = uRam00000001136bb8d8;
  _objc_retain(uRam00000001136bb8d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053cf174; end: 1053cf19f; +[SCGrapheneIncomingFriendsSyncMetric fullSync] */

void FUN_1053cf174(void)

{
  _objc_alloc(PTR_PTR_1126b84b0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053cf1a0; end: 1053cf1cb; +[SCGrapheneIncomingFriendsSyncMetric requestFailure] */

void FUN_1053cf1a0(void)

{
  _objc_alloc(PTR_PTR_1126b84b0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053cf1cc; end: 1053cf26b; -[SCGrapheneIncomingFriendsSyncMetric description] */

void FUN_1053cf1cc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd7d58;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dd7d58,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e7ff8;
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



/* Entry: 1053cf26c; end: 1053cf34f; -[UNIFriendRequests processWithRequest:callOptionsBuilder:handler:] */

void FUN_1053cf26c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b84b8;
  _objc_opt_class(PTR_PTR_1126b84b8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd7eb8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1053cf350; end: 1053cf35b; -[UNIFriendRequests .cxx_destruct] */

void FUN_1053cf350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053cf35c; end: 1053cf51b; -[SCSnapchattersPinningMetadataDefaultRepository pinningMetadataObservableOfTopSuggestions] */

void FUN_1053cf35c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  lVar8 = *(long *)(param_1 + 0x30);
  if (lVar8 == 0) {
    lVar1 = param_1;
    func_0x00010be74080();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar2;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    lVar8 = lVar1;
    func_0x00010bf0a540(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5,param_2,lVar8);
    _objc_release(lVar8);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar7);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1053cf51c;
    puStack_50 = &UNK_110883750;
    _objc_retain(uVar7);
    uVar5 = uVar3;
    uStack_48 = uVar7;
    func_0x00010c0e0a80(uVar3,param_2,lVar1,uVar4,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar8 = *(long *)(param_1 + 0x30);
    _objc_retain(lVar8);
    _objc_release(uStack_48);
    _objc_release(uVar7);
    _objc_release(lVar1);
  }
  else {
    _objc_retain(lVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 1053cf51c; end: 1053cf56f;  */

void FUN_1053cf51c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf0a540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053cf570; end: 1053cfd77; -[SCSnapchattersPinningMetadataDefaultRepository pinningMetadataObservableOfRecentlyJoiners] */

undefined8 * FUN_1053cf570(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar10;
  undefined8 unaff_x23;
  undefined8 uStack_4a8;
  undefined4 uStack_4a0;
  undefined1 uStack_499;
  long lStack_498;
  long lStack_490;
  undefined8 uStack_488;
  long lStack_480;
  long lStack_478;
  undefined **ppuStack_468;
  undefined4 uStack_460;
  undefined4 uStack_450;
  undefined4 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long lStack_420;
  long lStack_418;
  undefined8 uStack_410;
  long *plStack_408;
  long *plStack_400;
  undefined1 uStack_3f1;
  undefined **ppuStack_3f0;
  undefined4 uStack_3e8;
  undefined2 uStack_3d8;
  byte bStack_3d6;
  byte bStack_3d5;
  undefined1 *puStack_3b8;
  undefined ***pppuStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  undefined8 uStack_398;
  long *plStack_390;
  long *plStack_388;
  undefined **ppuStack_380;
  undefined4 uStack_378;
  undefined4 uStack_368;
  undefined4 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long lStack_330;
  undefined8 uStack_328;
  long *plStack_320;
  long *plStack_318;
  undefined1 uStack_309;
  undefined **ppuStack_308;
  undefined4 uStack_300;
  undefined2 uStack_2f0;
  byte bStack_2ee;
  byte bStack_2ed;
  undefined1 *puStack_2d0;
  undefined ***pppuStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined **ppuStack_298;
  undefined4 uStack_290;
  undefined4 uStack_280;
  undefined4 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  undefined8 uStack_240;
  long *plStack_238;
  long *plStack_230;
  undefined1 uStack_221;
  undefined **ppuStack_220;
  undefined4 uStack_218;
  undefined2 uStack_208;
  undefined2 uStack_206;
  undefined1 *puStack_1e8;
  undefined ***pppuStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined **ppuStack_1b0;
  undefined4 uStack_1a8;
  undefined2 uStack_198;
  byte bStack_196;
  byte bStack_195;
  undefined ***pppuStack_178;
  undefined ***pppuStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined **ppuStack_140;
  undefined4 uStack_138;
  undefined2 uStack_128;
  byte bStack_126;
  byte bStack_125;
  undefined ***pppuStack_108;
  undefined ***pppuStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined4 uStack_8c;
  code *pcStack_88;
  undefined8 uStack_80;
  long alStack_78 [3];
  
  alStack_78[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = *(undefined8 **)(param_1 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    if (*(long *)(param_1 + 0x48) == -1) {
      lVar1 = *(long *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126b84c8);
      if (lVar1 == 0) {
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        func_0x00010bfa6be0(&uStack_d0,lVar1);
      }
      puVar2 = &uStack_221;
      FUN_105820364();
      uStack_290 = 0xf;
      uStack_280 = 0x100;
      uStack_268 = 2;
      ppuStack_298 = &PTR_SUB_110883850;
      uStack_258 = 0;
      uStack_260 = 0;
      lStack_248 = 0;
      lStack_250 = 0;
      plStack_238 = (long *)0x0;
      uStack_240 = 0;
      plStack_230 = (long *)0x0;
      uStack_206 = *(undefined2 *)(puVar2 + 0x1a);
      uStack_218 = 10;
      uStack_208 = 0x100;
      ppuStack_220 = &PTR_FUN_1108837f0;
      pppuStack_1e0 = &ppuStack_298;
      lStack_1d0 = 0;
      lStack_1d8 = 0;
      plStack_1c0 = (long *)0x0;
      uStack_1c8 = 0;
      plStack_1b8 = (long *)0x0;
      puVar3 = &uStack_309;
      puStack_1e8 = puVar2;
      FUN_105820364();
      uStack_378 = 0xf;
      uStack_368 = 0x100;
      uStack_350 = 3;
      ppuStack_380 = &PTR_SUB_110883850;
      uStack_340 = 0;
      uStack_348 = 0;
      lStack_330 = 0;
      lStack_338 = 0;
      plStack_320 = (long *)0x0;
      uStack_328 = 0;
      plStack_318 = (long *)0x0;
      bStack_2ee = puVar3[0x1a];
      bStack_2ed = puVar3[0x1b];
      uStack_300 = 10;
      uStack_2f0 = 0x100;
      ppuStack_308 = &PTR_FUN_1108837f0;
      pppuStack_2c8 = &ppuStack_380;
      plStack_2a0 = (long *)0x0;
      lStack_2b8 = 0;
      lStack_2c0 = 0;
      plStack_2a8 = (long *)0x0;
      uStack_2b0 = 0;
      bStack_196 = (byte)uStack_206 | bStack_2ee;
      bStack_195 = uStack_206._1_1_ | bStack_2ed;
      uStack_1a8 = 5;
      uStack_198 = 0x100;
      ppuStack_1b0 = &PTR_SUB_1108629c8;
      pppuStack_178 = &ppuStack_220;
      pppuStack_170 = &ppuStack_308;
      uStack_160 = 0;
      lStack_168 = 0;
      plStack_150 = (long *)0x0;
      uStack_158 = 0;
      plStack_148 = (long *)0x0;
      puVar2 = &uStack_3f1;
      puStack_2d0 = puVar3;
      func_0x000100a14b1c();
      uStack_460 = 0xf;
      uStack_450 = 0x100;
      uStack_438 = (undefined4)*(undefined8 *)(param_1 + 0x50);
      ppuStack_468 = &PTR_FUN_110864c08;
      uStack_428 = 0;
      uStack_430 = 0;
      lStack_418 = 0;
      lStack_420 = 0;
      plStack_408 = (long *)0x0;
      uStack_410 = 0;
      plStack_400 = (long *)0x0;
      bStack_3d6 = puVar2[0x1a];
      bStack_3d5 = puVar2[0x1b];
      uStack_3e8 = 6;
      uStack_3d8 = 0x100;
      ppuStack_3f0 = &PTR_FUN_110866be0;
      pppuStack_3b0 = &ppuStack_468;
      lStack_3a0 = 0;
      lStack_3a8 = 0;
      plStack_390 = (long *)0x0;
      uStack_398 = 0;
      plStack_388 = (long *)0x0;
      bStack_126 = bStack_196 | bStack_3d6;
      bStack_125 = bStack_195 & bStack_3d5;
      uStack_138 = 4;
      uStack_128 = 0x100;
      ppuStack_140 = &PTR_SUB_1108629c8;
      pppuStack_108 = &ppuStack_1b0;
      pppuStack_100 = &ppuStack_3f0;
      plStack_d8 = (long *)0x0;
      plStack_e0 = (long *)0x0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_f8 = 0;
      puVar3 = &uStack_499;
      puStack_3b8 = puVar2;
      FUN_105820218();
      uStack_98 = *(undefined8 *)(puVar3 + 0x10);
      uStack_90 = puVar3[0x19];
      uStack_8f = puVar3[0x18];
      uStack_80 = *(undefined8 *)(puVar3 + 0x28);
      uStack_8c = 1;
      pcStack_88 = FUN_1053d2874;
      lStack_490 = 0;
      uStack_488 = 0;
      lStack_498 = 0;
      func_0x000100c435d0(&lStack_498,&uStack_98,alStack_78,1);
      func_0x000100c436b8(&lStack_480,&lStack_498);
      uStack_4a0 = 2;
      unaff_x21 = &uStack_d0;
      func_0x0001000e77a0(unaff_x21,&ppuStack_140,&lStack_480,&uStack_4a0);
      _objc_retainAutoreleasedReturnValue();
      if (lStack_480 != 0) {
        lStack_478 = lStack_480;
        __ZdlPv();
      }
      if (lStack_498 != 0) {
        lStack_490 = lStack_498;
        __ZdlPv();
      }
      plVar7 = plStack_d8;
      ppuStack_140 = &PTR_SUB_1108629c8;
      plStack_d8 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      plVar7 = plStack_e0;
      plStack_e0 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      if (lStack_f8 != 0) {
        __ZdlPv();
      }
      plVar7 = plStack_388;
      ppuStack_3f0 = &PTR_FUN_110866be0;
      plStack_388 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      plVar7 = plStack_390;
      plStack_390 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      if (lStack_3a8 != 0) {
        lStack_3a0 = lStack_3a8;
        __ZdlPv();
      }
      plVar7 = plStack_400;
      ppuStack_468 = &PTR_FUN_110864c08;
      plStack_400 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      plVar7 = plStack_408;
      plStack_408 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      if (lStack_420 != 0) {
        lStack_418 = lStack_420;
        __ZdlPv();
      }
      plVar7 = plStack_148;
      ppuStack_1b0 = &PTR_SUB_1108629c8;
      plStack_148 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      plVar7 = plStack_150;
      plStack_150 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      if (lStack_168 != 0) {
        __ZdlPv();
      }
      plVar7 = plStack_2a0;
      ppuStack_308 = &PTR_FUN_1108837f0;
      plStack_2a0 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      plVar7 = plStack_2a8;
      plStack_2a8 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      if (lStack_2c0 != 0) {
        lStack_2b8 = lStack_2c0;
        __ZdlPv();
      }
      plVar7 = plStack_318;
      ppuStack_380 = &PTR_SUB_110883850;
      plStack_318 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      plVar7 = plStack_320;
      plStack_320 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      if (lStack_338 != 0) {
        lStack_330 = lStack_338;
        __ZdlPv();
      }
      plVar7 = plStack_1b8;
      ppuStack_220 = &PTR_FUN_1108837f0;
      plStack_1b8 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      plVar7 = plStack_1c0;
      plStack_1c0 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      if (lStack_1d8 != 0) {
        lStack_1d0 = lStack_1d8;
        __ZdlPv();
      }
      plVar7 = plStack_230;
      ppuStack_298 = &PTR_SUB_110883850;
      plStack_230 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      plVar7 = plStack_238;
      plStack_238 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      if (lStack_250 != 0) {
        lStack_248 = lStack_250;
        __ZdlPv();
      }
      func_0x0001000e76e0(&uStack_a8);
      _objc_release(uStack_b8);
      _objc_release(uStack_c0);
      _objc_release(lVar1);
      puVar4 = PTR_PTR_1126ae820;
      _objc_opt_new();
      puVar10 = (undefined8 *)(param_1 + 0x38);
      uVar8 = *puVar10;
      *puVar10 = puVar4;
      _objc_release(uVar8);
      uVar8 = *puVar10;
      puVar10 = unaff_x21;
      func_0x00010bf0a540(unaff_x21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar8);
      _objc_release(puVar10);
      unaff_x20 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(unaff_x20);
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c11de00(unaff_x23);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(unaff_x20);
      uVar8 = uVar5;
      func_0x00010c0e0a80();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = uVar8;
      _objc_release(uVar9);
      _objc_release(unaff_x23);
      _objc_release(uVar5);
      puVar10 = *(undefined8 **)(param_1 + 0x38);
      _objc_retain(puVar10);
      _objc_release(unaff_x20);
      _objc_release(unaff_x20);
      puVar6 = unaff_x21;
      _objc_release();
      uStack_4a8 = unaff_x20;
      goto LAB_1053cf5f0;
    }
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar4;
    _objc_release(uVar8);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38));
    puVar10 = *(undefined8 **)(param_1 + 0x38);
  }
  puVar6 = puVar10;
  _objc_retain();
LAB_1053cf5f0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_78[0]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  _objc_release(uStack_4a8);
  _objc_release(unaff_x23);
  _objc_release(puVar10);
  _objc_release(unaff_x20);
  _objc_release(unaff_x21);
  __Unwind_Resume();
  *puVar6 = &PTR_FUN_1108837f0;
  plVar7 = (long *)puVar6[0xd];
  puVar6[0xd] = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  plVar7 = (long *)puVar6[0xc];
  puVar6[0xc] = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  if (puVar6[9] != 0) {
    puVar6[10] = puVar6[9];
    __ZdlPv();
  }
  return puVar6;
}



/* Entry: 1053cfd78; end: 1053cfe53;  */

undefined8 * FUN_1053cfd78(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1108837f0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1053cfe54; end: 1053cfea7;  */

void FUN_1053cfe54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf0a540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053cfea8; end: 1053cff27;  */

void FUN_1053cfea8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf0a540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000100a179a8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1053cff28; end: 1053d00c7; -[SCSnapchattersPinningMetadataDefaultRepository incrementImpressionCountInPinningMetadataOfUserIds:completionBlock:] */

void FUN_1053cff28(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(long *)(param_1 + 8) != 0) && (lVar2 = param_3, func_0x00010bf529e0(), lVar2 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1053d00c8;
    puStack_60 = &UNK_11084f688;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    lStack_58 = param_3;
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = puVar1;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1053d04e0;
    puStack_90 = &UNK_1108837b0;
    _objc_retain(param_4);
    uStack_80 = param_4;
    _objc_retain(param_3);
    lStack_88 = param_3;
    func_0x00010c0f8500(uVar3,param_2,&puStack_78,uVar4,&puStack_a8);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lStack_88);
    _objc_release(uStack_80);
    _objc_release(lStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053d00c8; end: 1053d04df;  */

void FUN_1053d00c8(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f1;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong auStack_170 [17];
  undefined **appuStack_e8 [9];
  undefined8 auStack_a0 [3];
  long *plStack_88;
  long *plStack_80;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  _objc_retain(lVar7);
  _objc_opt_class(PTR_PTR_1126b84c8);
  if (param_2 == 0) {
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1f0,param_2);
  }
  puVar2 = &uStack_1f1;
  FUN_105820014(puVar2);
  _objc_retain(lVar7);
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_210 = 0;
  lVar3 = lVar7;
  func_0x00010bf529e0(lVar7);
  func_0x0001004c2bb4(&uStack_210,lVar3);
  puStack_1a8 = (undefined8 *)0x0;
  puStack_1b0 = (undefined8 *)0x0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar10 = *plStack_1a0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1a0 != lVar10) {
          _objc_enumerationMutation(lVar7);
        }
        uVar8 = *(ulong *)((long)puStack_1a8 + lVar11 * 8);
        _objc_retain(uVar8);
        auStack_170[0] = uVar8;
        func_0x0001004c2d3c(&uStack_210,auStack_170);
        _objc_release(auStack_170[0]);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar7;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar7);
  _objc_release(lVar7);
  func_0x0001004c2e3c(appuStack_e8,0xc,puVar2,&uStack_210);
  puStack_1b0 = (undefined8 *)0x0;
  puStack_1a8 = (undefined8 *)0x0;
  plStack_1a0 = (long *)0x0;
  auStack_170[0] = auStack_170[0] & 0xffffffff00000000;
  puVar4 = &uStack_1f0;
  func_0x0001000e77a0(puVar4,appuStack_e8,&puStack_1b0,auStack_170);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1b0 != (undefined8 *)0x0) {
    puStack_1a8 = puStack_1b0;
    __ZdlPv();
  }
  plVar1 = plStack_80;
  appuStack_e8[0] = &PTR_FUN_110862700;
  plStack_80 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_88;
  plStack_88 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1b0 = auStack_a0;
  func_0x000100105004(&puStack_1b0);
  puStack_1b0 = &uStack_210;
  func_0x000100105004(&puStack_1b0);
  func_0x0001000e76e0(&uStack_1c8);
  _objc_release(uStack_1d8);
  _objc_release(uStack_1e0);
  _objc_release(lVar7);
  _objc_release(param_2);
  puVar5 = puVar4;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_retain(puVar5);
  puVar4 = puVar5;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar4 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(puVar5);
      }
      uVar9 = *(undefined8 *)((long)puVar12 * 8);
      puVar6 = PTR_PTR_1126b84d0;
      FUN_1058207f0(PTR_PTR_1126b84d0,uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfea640();
      if (puVar6 != (undefined *)0x0) {
        *(int *)(puVar6 + 0x14) = (int)uVar9 + 1;
      }
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar12 = (undefined8 *)((long)puVar12 + 1);
    } while (puVar4 != puVar12);
    puVar4 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  lVar7 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(param_2);
  __Unwind_Resume();
  if (*(long *)(lVar7 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001053d04ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar7 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1053d04e0; end: 1053d04f3;  */

void FUN_1053d04e0(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001053d04ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1053d04f4; end: 1053d0be7; -[SCSnapchattersPinningMetadataDefaultRepository _pinningMetadataFromTopSuggestions] */

void FUN_1053d04f4(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined ***pppuVar5;
  long lVar6;
  undefined4 uStack_350;
  undefined1 uStack_349;
  long lStack_348;
  long lStack_340;
  undefined8 uStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined4 uStack_300;
  undefined4 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  long *plStack_2b8;
  long *plStack_2b0;
  undefined1 uStack_2a1;
  undefined **ppuStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long lStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined1 uStack_221;
  undefined **ppuStack_220;
  undefined4 uStack_218;
  undefined4 uStack_208;
  undefined4 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined ***pppuStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined **ppuStack_1b0;
  undefined4 uStack_1a8;
  undefined2 uStack_198;
  undefined2 uStack_196;
  undefined ***pppuStack_178;
  undefined ***pppuStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined1 uStack_ff;
  undefined4 uStack_fc;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined1 *puStack_b0;
  undefined ***pppuStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x48) == -1) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b84c8);
    if (lVar1 == 0) {
      uStack_110 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      ppuStack_138 = (undefined **)0x0;
      ppuStack_140 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_140,lVar1);
    }
    puVar3 = &uStack_221;
    FUN_105820364();
    uStack_298 = CONCAT44(uStack_298._4_4_,0xf);
    uStack_288 = CONCAT44(uStack_288._4_4_,0x100);
    uStack_270 = CONCAT44(uStack_270._4_4_,1);
    ppuStack_2a0 = &PTR_SUB_110883850;
    uStack_260 = 0;
    uStack_268 = 0;
    lStack_250 = 0;
    lStack_258 = 0;
    plStack_240 = (long *)0x0;
    uStack_248 = 0;
    plStack_238 = (long *)0x0;
    uStack_218 = 10;
    uStack_208 = CONCAT22(*(undefined2 *)(puVar3 + 0x1a),0x100);
    ppuStack_220 = &PTR_FUN_1108837f0;
    pppuStack_1e0 = &ppuStack_2a0;
    lStack_1d0 = 0;
    lStack_1d8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1c8 = 0;
    plStack_1b8 = (long *)0x0;
    puVar4 = &uStack_2a1;
    puStack_1e8 = puVar3;
    func_0x000100a14b1c();
    ppuStack_310 = (undefined **)CONCAT44(ppuStack_310._4_4_,0xf);
    uStack_300 = 0x100;
    uStack_2e8 = (undefined4)*(undefined8 *)(param_1 + 0x50);
    ppuStack_318 = &PTR_FUN_110864c08;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    lStack_2c8 = 0;
    lStack_2d0 = 0;
    plStack_2b8 = (long *)0x0;
    uStack_2c0 = 0;
    plStack_2b0 = (long *)0x0;
    uStack_e0 = 6;
    uStack_d0._0_4_ = CONCAT13(puVar4[0x1b],CONCAT12(puVar4[0x1a],0x100));
    ppuStack_e8 = &PTR_FUN_110866be0;
    pppuStack_a8 = &ppuStack_318;
    lStack_98 = 0;
    lStack_a0 = 0;
    plStack_88 = (long *)0x0;
    uStack_90 = 0;
    plStack_80 = (long *)0x0;
    uStack_1a8 = 4;
    uStack_198 = 0x100;
    uStack_196 = CONCAT11(uStack_208._3_1_ & puVar4[0x1b],uStack_208._2_1_ | puVar4[0x1a]);
    ppuStack_1b0 = &PTR_SUB_1108629c8;
    pppuStack_178 = &ppuStack_220;
    pppuStack_170 = &ppuStack_e8;
    plStack_148 = (long *)0x0;
    plStack_150 = (long *)0x0;
    uStack_158 = 0;
    lStack_160 = 0;
    lStack_168 = 0;
    puVar3 = &uStack_349;
    puStack_b0 = puVar4;
    FUN_105820218();
    uStack_108 = *(undefined8 *)(puVar3 + 0x10);
    uStack_100 = puVar3[0x19];
    uStack_ff = puVar3[0x18];
    uStack_f0 = *(undefined8 *)(puVar3 + 0x28);
    uStack_fc = 1;
    pcStack_f8 = FUN_1053d2874;
    lStack_340 = 0;
    uStack_338 = 0;
    lStack_348 = 0;
    func_0x000100c435d0(&lStack_348,&uStack_108,&ppuStack_e8,1);
    func_0x000100c436b8(&ppuStack_330,&lStack_348);
    uStack_350 = 2;
    pppuVar5 = &ppuStack_140;
    func_0x0001000e77a0(pppuVar5,&ppuStack_1b0,&ppuStack_330,&uStack_350);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_330 != (undefined **)0x0) {
      ppuStack_328 = ppuStack_330;
      __ZdlPv();
    }
    if (lStack_348 != 0) {
      lStack_340 = lStack_348;
      __ZdlPv();
    }
    plVar2 = plStack_148;
    ppuStack_1b0 = &PTR_SUB_1108629c8;
    plStack_148 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_150;
    plStack_150 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_168 != 0) {
      __ZdlPv();
    }
    plVar2 = plStack_80;
    ppuStack_e8 = &PTR_FUN_110866be0;
    plStack_80 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_88;
    plStack_88 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_a0 != 0) {
      lStack_98 = lStack_a0;
      __ZdlPv();
    }
    plVar2 = plStack_2b0;
    ppuStack_318 = &PTR_FUN_110864c08;
    plStack_2b0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_2b8;
    plStack_2b8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_2d0 != 0) {
      lStack_2c8 = lStack_2d0;
      __ZdlPv();
    }
    plVar2 = plStack_1b8;
    ppuStack_220 = &PTR_FUN_1108837f0;
    plStack_1b8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_1c0;
    plStack_1c0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_1d8 != 0) {
      lStack_1d0 = lStack_1d8;
      __ZdlPv();
    }
    plVar2 = plStack_238;
    ppuStack_2a0 = &PTR_SUB_110883850;
    plStack_238 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_240;
    plStack_240 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_258 != 0) {
      lStack_250 = lStack_258;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_118);
    _objc_release(uStack_128);
    _objc_release(uStack_130);
    lVar6 = lVar1;
    _objc_release();
  }
  else {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b84c8);
    if (lVar1 == 0) {
      uStack_270 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_298 = 0;
      ppuStack_2a0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_2a0,lVar1);
    }
    pppuVar5 = &ppuStack_330;
    func_0x000100a14b1c();
    uStack_218 = 0xf;
    uStack_208 = 0x100;
    uStack_1f0 = (undefined4)*(undefined8 *)(param_1 + 0x50);
    ppuStack_220 = &PTR_FUN_110864c08;
    pppuStack_1e0 = (undefined ***)0x0;
    puStack_1e8 = (undefined1 *)0x0;
    lStack_1d0 = 0;
    lStack_1d8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1c8 = 0;
    plStack_1b8 = (long *)0x0;
    uStack_196 = *(undefined2 *)((long)pppuVar5 + 0x1a);
    uStack_1a8 = 6;
    uStack_198 = 0x100;
    ppuStack_1b0 = &PTR_FUN_110866be0;
    pppuStack_170 = &ppuStack_220;
    lStack_160 = 0;
    lStack_168 = 0;
    plStack_150 = (long *)0x0;
    uStack_158 = 0;
    plStack_148 = (long *)0x0;
    plVar2 = &lStack_348;
    pppuStack_178 = pppuVar5;
    FUN_105820218();
    ppuStack_e8 = (undefined **)plVar2[2];
    uStack_d0 = plVar2[5];
    uStack_e0._0_2_ = CONCAT11((char)plVar2[3],*(undefined1 *)((long)plVar2 + 0x19));
    uStack_dc = 1;
    pcStack_d8 = FUN_1053d2874;
    uStack_130 = 0;
    ppuStack_140 = (undefined **)0x0;
    ppuStack_138 = (undefined **)0x0;
    func_0x000100c435d0(&ppuStack_140,&ppuStack_e8,auStack_c8,1);
    func_0x000100c436b8(&ppuStack_318,&ppuStack_140);
    uStack_108 = CONCAT44(uStack_108._4_4_,(int)*(undefined8 *)(param_1 + 0x48));
    pppuVar5 = &ppuStack_2a0;
    func_0x0001000e77a0(pppuVar5,&ppuStack_1b0,&ppuStack_318,&uStack_108);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_318 != (undefined **)0x0) {
      ppuStack_310 = ppuStack_318;
      __ZdlPv();
    }
    if (ppuStack_140 != (undefined **)0x0) {
      ppuStack_138 = ppuStack_140;
      __ZdlPv();
    }
    plVar2 = plStack_148;
    ppuStack_1b0 = &PTR_FUN_110866be0;
    plStack_148 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_150;
    plStack_150 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_168 != 0) {
      lStack_160 = lStack_168;
      __ZdlPv();
    }
    plVar2 = plStack_1b8;
    ppuStack_220 = &PTR_FUN_110864c08;
    plStack_1b8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_1c0;
    plStack_1c0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_1d8 != 0) {
      lStack_1d0 = lStack_1d8;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_278);
    _objc_release(uStack_288);
    _objc_release(uStack_290);
    lVar6 = lVar1;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar5);
    return;
  }
  ___stack_chk_fail();
  func_0x000105007830(&ppuStack_1b0);
  FUN_1050cc748(&ppuStack_e8);
  FUN_1050797f4(&ppuStack_318);
  FUN_1053cfd78(&ppuStack_220);
  func_0x0001053cfde4(&ppuStack_2a0);
  func_0x000104d96620(&ppuStack_140);
  _objc_release(lVar1);
  __Unwind_Resume(lVar6);
  _objc_storeStrong(lVar6 + 0x40,0);
  _objc_storeStrong(lVar6 + 0x38,0);
  _objc_storeStrong(lVar6 + 0x30,0);
  _objc_storeStrong(lVar6 + 0x28,0);
  _objc_storeStrong(lVar6 + 0x20,0);
  _objc_storeStrong(lVar6 + 0x18,0);
  _objc_storeStrong(lVar6 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar6 + 8,0);
  return;
}



/* Entry: 1053d0be8; end: 1053d0ccf; -[SCSnapchattersPinningMetadataDefaultRepository .cxx_destruct] */

void FUN_1053d0be8(long param_1)

{
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



/* Entry: 1053d0cd0; end: 1053d138b;  */

void FUN_1053d0cd0(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001053d1330;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001053d1350;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001053d1350;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x0001053d12c4:
                    /* WARNING: Could not recover jumptable at 0x0001053d12e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001053d12c4;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x0001053d1350;
    }
    goto code_r0x0001053d1344;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001053d1344;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x0001053d1350;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001053d1350;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_1053d1360;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001053d1330:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001053d1344:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001053d1350:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1053d1360:
  return;
}



/* Entry: 1053d138c; end: 1053d1413;  */

void FUN_1053d138c(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001053d1400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1053d1414; end: 1053d1547;  */

void FUN_1053d1414(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      for (puVar5 = *(undefined4 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar3 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined4 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001053d153c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1053d1548; end: 1053d15f7;  */

ulong FUN_1053d1548(long param_1,ulong param_2,ulong param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    uVar3 = 0;
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    uVar3 = (ulong)*(uint *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    uVar3 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      uVar3 = param_2;
    }
    (**(code **)(param_1 + lVar1))(uVar3,param_4);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1053d15f8; end: 1053d1633;  */

undefined8 FUN_1053d15f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_1053d1634(uVar1,param_1);
  return uVar1;
}



/* Entry: 1053d1634; end: 1053d17df;  */

void FUN_1053d1634(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x0001053d1874(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x0001053d17e0(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_1053d1720:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        FUN_1053d1974(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_1053d1720;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_SUB_110883850;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 1053d17e0; end: 1053d1973;  */

undefined8 * FUN_1053d17e0(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_SUB_110883850;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1053d1974; end: 1053d1a0b;  */

undefined8 * FUN_1053d1974(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_SUB_110883850;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_1053d1a0c(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 2);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1053d1a0c; end: 1053d1a83;  */

void FUN_1053d1a0c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1053d1a84(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1053d1a84; end: 1053d1abf;  */

void FUN_1053d1a84(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  if (param_2 >> 0x3e == 0) {
    plVar2 = param_1 + 2;
    FUN_1053d1ad4();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)plVar2 + param_2 * 4;
    return;
  }
  FUN_1053d1ac0();
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_1108837f0;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1053d1ac0; end: 1053d1ad3;  */

void FUN_1053d1ac0(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_1108837f0;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1053d1ad4; end: 1053d1b73;  */

void FUN_1053d1ad4(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1108837f0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1053d1b74; end: 1053d222f;  */

void FUN_1053d1b74(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001053d21d4;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001053d21f4;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001053d21f4;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x0001053d2168:
                    /* WARNING: Could not recover jumptable at 0x0001053d218c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001053d2168;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x0001053d21f4;
    }
    goto code_r0x0001053d21e8;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001053d21e8;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x0001053d21f4;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001053d21f4;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_1053d2204;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001053d21d4:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001053d21e8:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001053d21f4:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1053d2204:
  return;
}



/* Entry: 1053d2230; end: 1053d22b7;  */

void FUN_1053d2230(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001053d22a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1053d22b8; end: 1053d23eb;  */

void FUN_1053d22b8(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      for (puVar5 = *(undefined4 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar3 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001053d23e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1053d23ec; end: 1053d25f7;  */

uint FUN_1053d23ec(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  uint uVar11;
  long *plVar12;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain(param_3);
  uVar11 = *(uint *)(param_1 + 8);
  if ((int)uVar11 < 0xe) {
    if (1 < uVar11 - 1) {
      if (uVar11 - 0xc < 2) {
        plVar12 = *(long **)(param_1 + 0x38);
        _objc_retain(param_3);
        (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,param_4);
        piVar2 = *(int **)(param_1 + 0x48);
        piVar3 = *(int **)(param_1 + 0x50);
        iVar7 = (int)plVar12;
        if (uVar11 == 0xc) {
          if (piVar2 == piVar3) {
            uVar11 = 0;
          }
          else {
            do {
              piVar10 = piVar2 + 1;
              iVar4 = *piVar2;
              uVar11 = (uint)(iVar7 == iVar4);
              piVar2 = piVar10;
            } while (iVar7 != iVar4 && piVar10 != piVar3);
          }
        }
        else if (piVar2 == piVar3) {
          uVar11 = 1;
        }
        else {
          do {
            piVar10 = piVar2 + 1;
            iVar4 = *piVar2;
            uVar11 = (uint)(iVar7 != iVar4);
            piVar2 = piVar10;
          } while (iVar7 != iVar4 && piVar10 != piVar3);
        }
        _objc_release(param_3);
        goto LAB_1053d25d0;
      }
      goto LAB_1053d251c;
    }
    *param_4 = 0;
    bStack_43 = 0;
    (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
              (*(long **)(param_1 + 0x38),param_2,param_3,&bStack_43);
    bVar6 = uVar11 != 1;
    bVar5 = bStack_43;
  }
  else {
    if (uVar11 - 0xf < 2) {
      *param_4 = 0;
      uVar11 = (uint)*(byte *)(param_1 + 0x30);
      goto LAB_1053d25d0;
    }
    if (uVar11 == 0xe) {
      lVar1 = 0x28;
      lVar8 = param_3;
      if (param_2 != 0) {
        lVar1 = 0x20;
        lVar8 = param_2;
      }
      (**(code **)(param_1 + lVar1))(lVar8,param_4);
      uVar11 = (uint)lVar8;
      goto LAB_1053d25d0;
    }
LAB_1053d251c:
    if ((uVar11 & 0xfffffffe) != 10) {
      uVar11 = 0;
      goto LAB_1053d25d0;
    }
    plVar12 = *(long **)(param_1 + 0x38);
    plVar9 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,&bStack_41);
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2,param_3,&bStack_42);
    *param_4 = (bStack_41 | bStack_42) & 1;
    bVar6 = uVar11 == 0xb;
    bVar5 = (int)plVar12 == (int)plVar9;
  }
  uVar11 = (uint)(bVar6 ^ bVar5);
LAB_1053d25d0:
  _objc_release(param_3);
  return uVar11 & 1;
}



/* Entry: 1053d25f8; end: 1053d2873;  */

undefined8 * FUN_1053d25f8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  iVar10 = *(int *)(param_1 + 8);
  if (0xb < iVar10) {
    if (iVar10 < 0xf) {
      if (iVar10 - 0xcU < 2) {
        plVar7 = *(long **)(param_1 + 0x38);
        (**(code **)(*plVar7 + 0x30))();
        uVar5 = *(undefined2 *)((long)plVar7 + 0x19);
        uVar3 = *(undefined1 *)((long)plVar7 + 0x1b);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined1 *)(puVar6 + 3) = 0;
        *(undefined2 *)((long)puVar6 + 0x19) = uVar5;
        *(undefined1 *)((long)puVar6 + 0x1b) = uVar3;
        *puVar6 = &PTR_FUN_1108837f0;
        puVar6[7] = plVar7;
        lVar1 = *(long *)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x50);
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        FUN_1053d1a0c(puVar6 + 9,lVar1,lVar2,lVar2 - lVar1 >> 2);
        puVar6[0xc] = plVar7;
        puVar6[0xd] = 0;
        return puVar6;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      bVar9 = *(byte *)(param_1 + 0x18);
      bVar12 = *(byte *)(param_1 + 0x19);
      *(undefined4 *)(puVar6 + 1) = 0xe;
      puVar6[2] = uVar11;
      *(byte *)(puVar6 + 3) = bVar9;
      *(byte *)((long)puVar6 + 0x19) = bVar12;
      *(byte *)((long)puVar6 + 0x1a) = bVar12 ^ 1;
      *(byte *)((long)puVar6 + 0x1b) = (bVar12 | bVar9) ^ 1;
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      puVar6[5] = *(undefined8 *)(param_1 + 0x28);
      puVar6[4] = uVar11;
    }
    else {
      if (iVar10 != 0xf) {
        iVar10 = 0x10;
      }
      *(int *)(puVar6 + 1) = iVar10;
      *(undefined4 *)(puVar6 + 3) = 0x100;
      *(undefined1 *)(puVar6 + 6) = *(undefined1 *)(param_1 + 0x30);
    }
    *puVar6 = &PTR_FUN_1108837f0;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[10] = 0;
    puVar6[9] = 0;
    puVar6[0xc] = 0;
    puVar6[0xb] = 0;
    puVar6[0xd] = 0;
    return puVar6;
  }
  if (8 < iVar10 - 3U) {
    plVar7 = *(long **)(param_1 + 0x38);
    (**(code **)(*plVar7 + 0x30))();
    uVar3 = *(undefined1 *)((long)plVar7 + 0x19);
    uVar4 = *(undefined1 *)((long)plVar7 + 0x1a);
    if (*(int *)(param_1 + 8) == 0) {
      bVar9 = 1;
    }
    else {
      bVar9 = *(byte *)((long)plVar7 + 0x1b);
    }
    *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
    *(undefined1 *)(puVar6 + 3) = 0;
    *(undefined1 *)((long)puVar6 + 0x19) = uVar3;
    *(undefined1 *)((long)puVar6 + 0x1a) = uVar4;
    *(byte *)((long)puVar6 + 0x1b) = bVar9 & 1;
    *puVar6 = &PTR_FUN_1108837f0;
    puVar6[7] = plVar7;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[0xc] = plVar7;
    return puVar6;
  }
  plVar7 = *(long **)(param_1 + 0x38);
  (**(code **)(*plVar7 + 0x30))();
  plVar8 = *(long **)(param_1 + 0x40);
  (**(code **)(*plVar8 + 0x30))();
  if ((*(byte *)((long)plVar7 + 0x19) & 1) == 0) {
    bVar9 = *(byte *)((long)plVar8 + 0x19);
  }
  else {
    bVar9 = 1;
  }
  if ((*(byte *)((long)plVar7 + 0x1a) & 1) == 0) {
    bVar12 = *(byte *)((long)plVar8 + 0x1a);
  }
  else {
    bVar12 = 1;
  }
  if (*(int *)(param_1 + 8) == 4) {
    if ((*(byte *)((long)plVar7 + 0x1b) & 1) == 0) {
      bVar13 = 0;
      goto LAB_1053d2720;
    }
  }
  else if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
    bVar13 = 1;
    goto LAB_1053d2720;
  }
  bVar13 = *(byte *)((long)plVar8 + 0x1b);
LAB_1053d2720:
  *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  *(byte *)((long)puVar6 + 0x19) = bVar9 & 1;
  *(byte *)((long)puVar6 + 0x1a) = bVar12 & 1;
  *(byte *)((long)puVar6 + 0x1b) = bVar13 & 1;
  *puVar6 = &PTR_FUN_1108837f0;
  puVar6[7] = plVar7;
  puVar6[8] = plVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = plVar7;
  puVar6[0xd] = plVar8;
  return puVar6;
}



/* Entry: 1053d2874; end: 1053d2927;  */

undefined4 FUN_1053d2874(double param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain();
  _objc_retain(param_3);
  (*param_4)(param_2,&bStack_41);
  dVar4 = param_1;
  (*param_4)(param_3,&bStack_42);
  uVar3 = 2;
  uVar1 = uVar3;
  if (bStack_42 == 0) {
    uVar1 = 0;
  }
  if (bStack_41 == 0) {
    uVar1 = 1;
  }
  if (dVar4 < param_1) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (dVar4 <= param_1) {
    uVar2 = uVar3;
  }
  uVar3 = uVar1;
  if ((bStack_42 & 1) == 0) {
    uVar3 = uVar2;
  }
  if ((bStack_41 & 1) == 0) {
    uVar1 = uVar3;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1053d2928; end: 1053d2abb;  */

long * FUN_1053d2928(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  plVar1 = (long *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126e8010;
    plVar1 = &lStack_50;
    lStack_50 = param_1;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      _objc_retain(param_2);
      lVar2 = plVar1[1];
      plVar1[1] = param_2;
      _objc_release(lVar2);
      _objc_retain(param_3);
      lVar2 = plVar1[2];
      plVar1[2] = param_3;
      _objc_release(lVar2);
      puVar3 = PTR_PTR_1126ae820;
      _objc_opt_new();
      lVar2 = plVar1[3];
      plVar1[3] = (long)puVar3;
      _objc_release(lVar2);
      lVar2 = plVar1[3];
      plVar4 = plVar1;
      func_0x00010bf5ff60(plVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(lVar2);
      _objc_release(plVar4);
      _objc_initWeak(auStack_58,plVar1);
      lVar2 = plVar1[2];
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = plVar1[4];
      plVar1[4] = lVar2;
      _objc_release(lVar5);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return plVar1;
}



/* Entry: 1053d2abc; end: 1053d2ae7;  */

void FUN_1053d2abc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed96c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053d2ae8; end: 1053d2b77; -[SCCofBasedUserSegmentsProviderImpl currentSegments] */

void FUN_1053d2ae8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b84d8;
  _objc_alloc(PTR_PTR_1126b84d8);
  uVar2 = param_1;
  func_0x00010be423a0(param_1);
  uVar3 = param_1;
  func_0x00010be3ddc0(param_1);
  uVar4 = param_1;
  func_0x00010be434e0(param_1);
  uVar5 = param_1;
  func_0x00010be42340(param_1);
  func_0x00010be410a0(param_1);
  func_0x00010c01f2a0(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053d2b78; end: 1053d2b7f; -[SCCofBasedUserSegmentsProviderImpl updates] */

void FUN_1053d2b78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 1053d2b80; end: 1053d2b9b; -[SCCofBasedUserSegmentsProviderImpl _isNewUser] */

void FUN_1053d2b80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7f18,0,0);
  return;
}



/* Entry: 1053d2b9c; end: 1053d2bb7; -[SCCofBasedUserSegmentsProviderImpl _is14DaysNewUser] */

void FUN_1053d2b9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7f38,0,0);
  return;
}



/* Entry: 1053d2bb8; end: 1053d2bd3; -[SCCofBasedUserSegmentsProviderImpl _isResurrectedUser] */

void FUN_1053d2bb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7f58,0,0);
  return;
}



/* Entry: 1053d2bd4; end: 1053d2c2f; -[SCCofBasedUserSegmentsProviderImpl _isNewOrHighRiskUser] */

ulong FUN_1053d2bd4(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010be423a0();
  if (((((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010be40ee0(), (uVar1 & 1) == 0)) &&
      (uVar1 = param_1, func_0x00010be40ec0(), (uVar1 & 1) == 0)) &&
     (uVar1 = param_1, func_0x00010be434e0(), (uVar1 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be3f870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isDeepChurnUser_11256d7b8);
    return param_1;
  }
  return 1;
}



/* Entry: 1053d2c30; end: 1053d2c4b; -[SCCofBasedUserSegmentsProviderImpl _isHighChurnRiskNewUser] */

void FUN_1053d2c30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7f78,0,0);
  return;
}



/* Entry: 1053d2c4c; end: 1053d2c67; -[SCCofBasedUserSegmentsProviderImpl _isHighChurnRiskActiveUser] */

void FUN_1053d2c4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7f98,0,0);
  return;
}



/* Entry: 1053d2c68; end: 1053d2c83; -[SCCofBasedUserSegmentsProviderImpl _isDeepChurnUser] */

void FUN_1053d2c68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7fb8,0,0);
  return;
}



/* Entry: 1053d2c84; end: 1053d2c9f; -[SCCofBasedUserSegmentsProviderImpl _isInAppRatingPromptTargetUser] */

void FUN_1053d2c84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7fd8,0,0);
  return;
}



/* Entry: 1053d2ca0; end: 1053d2cdb; -[SCCofBasedUserSegmentsProviderImpl _updateIfNeeded] */

void FUN_1053d2ca0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf5ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


