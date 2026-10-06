/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1084241dc; end: 1084241e3; -[SCSendToConfiguration userSession] */

undefined8 FUN_1084241dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1084241e4; end: 108424213; -[SCSendToConfiguration setUserSession:] */

void FUN_1084241e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108424214; end: 10842421b; -[SCSendToConfiguration snapSource] */

undefined8 FUN_108424214(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10842421c; end: 108424223; -[SCSendToConfiguration setSnapSource:] */

void FUN_10842421c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 108424224; end: 10842422b; -[SCSendToConfiguration isOpenedFromMemoriesTabInChatDrawer] */

undefined1 FUN_108424224(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 10842422c; end: 108424233; -[SCSendToConfiguration setIsOpenedFromMemoriesTabInChatDrawer:] */

void FUN_10842422c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 108424234; end: 10842423b; -[SCSendToConfiguration isMultiSnap] */

undefined1 FUN_108424234(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 10842423c; end: 108424243; -[SCSendToConfiguration setIsMultiSnap:] */

void FUN_10842423c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x19) = param_3;
  return;
}



/* Entry: 108424244; end: 10842424b; -[SCSendToConfiguration isBatchCapture] */

undefined1 FUN_108424244(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a);
}



/* Entry: 10842424c; end: 108424253; -[SCSendToConfiguration setIsBatchCapture:] */

void FUN_10842424c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1a) = param_3;
  return;
}



/* Entry: 108424254; end: 10842425b; -[SCSendToConfiguration isSponsoredSnap] */

undefined1 FUN_108424254(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1b);
}



/* Entry: 10842425c; end: 108424263; -[SCSendToConfiguration setIsSponsoredSnap:] */

void FUN_10842425c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1b) = param_3;
  return;
}



/* Entry: 108424264; end: 10842426b; -[SCSendToConfiguration isMusicSnap] */

undefined1 FUN_108424264(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1c);
}



/* Entry: 10842426c; end: 108424273; -[SCSendToConfiguration setIsMusicSnap:] */

void FUN_10842426c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1c) = param_3;
  return;
}



/* Entry: 108424274; end: 10842427b; -[SCSendToConfiguration isImageSnap] */

undefined1 FUN_108424274(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1d);
}



/* Entry: 10842427c; end: 108424283; -[SCSendToConfiguration setIsImageSnap:] */

void FUN_10842427c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1d) = param_3;
  return;
}



/* Entry: 108424284; end: 10842428b; -[SCSendToConfiguration isMultiSelection] */

undefined1 FUN_108424284(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1e);
}



/* Entry: 10842428c; end: 108424293; -[SCSendToConfiguration setIsMultiSelection:] */

void FUN_10842428c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1e) = param_3;
  return;
}



/* Entry: 108424294; end: 10842429b; -[SCSendToConfiguration isShortVideo] */

undefined1 FUN_108424294(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1f);
}



/* Entry: 10842429c; end: 1084242a3; -[SCSendToConfiguration setIsShortVideo:] */

void FUN_10842429c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1f) = param_3;
  return;
}



/* Entry: 1084242a4; end: 1084242ab; -[SCSendToConfiguration isCameosSnap] */

undefined1 FUN_1084242a4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 1084242ac; end: 1084242b3; -[SCSendToConfiguration setIsCameosSnap:] */

void FUN_1084242ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 1084242b4; end: 1084242bb; -[SCSendToConfiguration hasLensPreselection] */

undefined1 FUN_1084242b4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 1084242bc; end: 1084242c3; -[SCSendToConfiguration setHasLensPreselection:] */

void FUN_1084242bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x21) = param_3;
  return;
}



/* Entry: 1084242c4; end: 1084242cb; -[SCSendToConfiguration isEligibleForSpotlight] */

undefined1 FUN_1084242c4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x22);
}



/* Entry: 1084242cc; end: 1084242d3; -[SCSendToConfiguration setIsEligibleForSpotlight:] */

void FUN_1084242cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x22) = param_3;
  return;
}



/* Entry: 1084242d4; end: 1084242db; -[SCSendToConfiguration isPromptLensWithRestrictedDestinations] */

undefined1 FUN_1084242d4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x23);
}



/* Entry: 1084242dc; end: 1084242e3; -[SCSendToConfiguration setIsPromptLensWithRestrictedDestinations:] */

void FUN_1084242dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x23) = param_3;
  return;
}



/* Entry: 1084242e4; end: 1084242eb; -[SCSendToConfiguration isPlanStickerWithRestrictedDestinations] */

undefined1 FUN_1084242e4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x24);
}



/* Entry: 1084242ec; end: 1084242f3; -[SCSendToConfiguration setIsPlanStickerWithRestrictedDestinations:] */

void FUN_1084242ec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x24) = param_3;
  return;
}



/* Entry: 1084242f4; end: 1084242fb; -[SCSendToConfiguration friendsInThisSnapUserIds] */

undefined8 FUN_1084242f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1084242fc; end: 108424303; -[SCSendToConfiguration setFriendsInThisSnapUserIds:] */

void FUN_1084242fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108424304; end: 10842430b; -[SCSendToConfiguration captureSessionId] */

undefined8 FUN_108424304(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10842430c; end: 108424313; -[SCSendToConfiguration setCaptureSessionId:] */

void FUN_10842430c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108424314; end: 10842431b; -[SCSendToConfiguration ourStorySubtext] */

undefined8 FUN_108424314(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10842431c; end: 10842434b; -[SCSendToConfiguration setOurStorySubtext:] */

void FUN_10842431c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10842434c; end: 108424353; -[SCSendToConfiguration topicsCollection] */

undefined8 FUN_10842434c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108424354; end: 108424383; -[SCSendToConfiguration setTopicsCollection:] */

void FUN_108424354(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108424384; end: 10842438b; -[SCSendToConfiguration replyParameters] */

undefined8 FUN_108424384(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10842438c; end: 1084243bb; -[SCSendToConfiguration setReplyParameters:] */

void FUN_10842438c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084243bc; end: 1084243c3; -[SCSendToConfiguration enableChatMediaSendAlert] */

undefined1 FUN_1084243bc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x25);
}



/* Entry: 1084243c4; end: 1084243cb; -[SCSendToConfiguration setEnableChatMediaSendAlert:] */

void FUN_1084243c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x25) = param_3;
  return;
}



/* Entry: 1084243cc; end: 1084243d3; -[SCSendToConfiguration spectaclesSnapsOnly] */

undefined1 FUN_1084243cc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x26);
}



/* Entry: 1084243d4; end: 1084243db; -[SCSendToConfiguration setSpectaclesSnapsOnly:] */

void FUN_1084243d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x26) = param_3;
  return;
}



/* Entry: 1084243dc; end: 1084243e3; -[SCSendToConfiguration thisChatUserIds] */

undefined8 FUN_1084243dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1084243e4; end: 1084243eb; -[SCSendToConfiguration setThisChatUserIds:] */

void FUN_1084243e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1084243ec; end: 1084243f3; -[SCSendToConfiguration thisChatGroupIds] */

undefined8 FUN_1084243ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1084243f4; end: 1084243fb; -[SCSendToConfiguration setThisChatGroupIds:] */

void FUN_1084243f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1084243fc; end: 108424403; -[SCSendToConfiguration baseViewControllerPageViewName] */

undefined8 FUN_1084243fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108424404; end: 10842440b; -[SCSendToConfiguration setBaseViewControllerPageViewName:] */

void FUN_108424404(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10842440c; end: 108424413; -[SCSendToConfiguration preSelectedItems] */

undefined8 FUN_10842440c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108424414; end: 108424443; -[SCSendToConfiguration setPreSelectedItems:] */

void FUN_108424414(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108424444; end: 10842444b; -[SCSendToConfiguration thumbnailMedia] */

undefined8 FUN_108424444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10842444c; end: 10842447b; -[SCSendToConfiguration setThumbnailMedia:] */

void FUN_10842444c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10842447c; end: 10842452f; -[SCSendToConfiguration .cxx_destruct] */

void FUN_10842447c(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108424530; end: 10842453b; -[SCFeatureSettingsService hasSeenSendToQuickAddAlert] */

void FUN_108424530(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed7c18);
  return;
}



/* Entry: 10842453c; end: 108424547; -[SCFeatureSettingsService seenSendToQuickAddAlertServerParam] */

undefined ** FUN_10842453c(void)

{
  return &PTR____CFConstantStringClassReference_110ed7c18;
}



/* Entry: 108424548; end: 108424557; -[SCFeatureSettingsService setSeenSendToQuickAddAlert:] */

void FUN_108424548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed7c18,param_3);
  return;
}



/* Entry: 108424558; end: 10842455f; -[SCFeatureSettingsService seen_quick_add_dialog_in_sendto_page_client_value:] */

undefined * FUN_108424558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108424560; end: 108424567; -[SCFeatureSettingsService seen_quick_add_dialog_in_sendto_page_server_value:] */

void FUN_108424560(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108424568; end: 108424577; -[SCFeatureSettingsService seenSendToQuickAddAlert] */

void FUN_108424568(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed7c18,0);
  return;
}



/* Entry: 108424578; end: 108424583; -[SCFeatureSettingsService hasSeenSendToSMSSnapAlert] */

void FUN_108424578(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed7c38);
  return;
}



/* Entry: 108424584; end: 10842458f; -[SCFeatureSettingsService seenSendToSMSSnapAlertServerParam] */

undefined ** FUN_108424584(void)

{
  return &PTR____CFConstantStringClassReference_110ed7c38;
}



/* Entry: 108424590; end: 10842459f; -[SCFeatureSettingsService setSeenSendToSMSSnapAlert:] */

void FUN_108424590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed7c38,param_3);
  return;
}



/* Entry: 1084245a0; end: 1084245a7; -[SCFeatureSettingsService seen_sms_snap_dialog_in_sendto_page_v2_client_value:] */

undefined * FUN_1084245a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1084245a8; end: 1084245af; -[SCFeatureSettingsService seen_sms_snap_dialog_in_sendto_page_v2_server_value:] */

void FUN_1084245a8(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 1084245b0; end: 1084245bf; -[SCFeatureSettingsService seenSendToSMSSnapAlert] */

void FUN_1084245b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed7c38,0);
  return;
}



/* Entry: 1084245c0; end: 1084245cb; -[SCFeatureSettingsService hasSeenAutoFriendInviteAlert] */

void FUN_1084245c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed7c58);
  return;
}



/* Entry: 1084245cc; end: 1084245d7; -[SCFeatureSettingsService seenAutoFriendInviteAlertServerParam] */

undefined ** FUN_1084245cc(void)

{
  return &PTR____CFConstantStringClassReference_110ed7c58;
}



/* Entry: 1084245d8; end: 1084245e7; -[SCFeatureSettingsService setSeenAutoFriendInviteAlert:] */

void FUN_1084245d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed7c58,param_3);
  return;
}



/* Entry: 1084245e8; end: 1084245ef; -[SCFeatureSettingsService seen_auto_friend_invite_dialog_client_value:] */

undefined * FUN_1084245e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1084245f0; end: 1084245f7; -[SCFeatureSettingsService seen_auto_friend_invite_dialog_server_value:] */

void FUN_1084245f0(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 1084245f8; end: 108424607; -[SCFeatureSettingsService seenAutoFriendInviteAlert] */

void FUN_1084245f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed7c58,0);
  return;
}



/* Entry: 108424608; end: 108424613; -[SCFeatureSettingsService hasSeenCameraModuleLens] */

void FUN_108424608(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed7c78);
  return;
}



/* Entry: 108424614; end: 10842461f; -[SCFeatureSettingsService seenCameraModuleLensServerParam] */

undefined ** FUN_108424614(void)

{
  return &PTR____CFConstantStringClassReference_110ed7c78;
}



/* Entry: 108424620; end: 10842462f; -[SCFeatureSettingsService setSeenCameraModuleLens:] */

void FUN_108424620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed7c78,param_3);
  return;
}



/* Entry: 108424630; end: 108424637; -[SCFeatureSettingsService seen_camera_module_lens_client_value:] */

undefined * FUN_108424630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108424638; end: 10842463f; -[SCFeatureSettingsService seen_camera_module_lens_server_value:] */

void FUN_108424638(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108424640; end: 10842464f; -[SCFeatureSettingsService seenCameraModuleLens] */

void FUN_108424640(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed7c78,0);
  return;
}



/* Entry: 108424650; end: 10842465b; -[SCFeatureSettingsService hasSeenCameraModuleScan] */

void FUN_108424650(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed7c98);
  return;
}



/* Entry: 10842465c; end: 108424667; -[SCFeatureSettingsService seenCameraModuleScanServerParam] */

undefined ** FUN_10842465c(void)

{
  return &PTR____CFConstantStringClassReference_110ed7c98;
}



/* Entry: 108424668; end: 108424677; -[SCFeatureSettingsService setSeenCameraModuleScan:] */

void FUN_108424668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed7c98,param_3);
  return;
}



/* Entry: 108424678; end: 10842467f; -[SCFeatureSettingsService seen_camera_module_scan_client_value:] */

undefined * FUN_108424678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108424680; end: 108424687; -[SCFeatureSettingsService seen_camera_module_scan_server_value:] */

void FUN_108424680(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108424688; end: 108424697; -[SCFeatureSettingsService seenCameraModuleScan] */

void FUN_108424688(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed7c98,0);
  return;
}



/* Entry: 108424698; end: 1084246a3; -[SCFeatureSettingsService hasSeenCameraModuleSearch] */

void FUN_108424698(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed7cb8);
  return;
}



/* Entry: 1084246a4; end: 1084246af; -[SCFeatureSettingsService seenCameraModuleSearchServerParam] */

undefined ** FUN_1084246a4(void)

{
  return &PTR____CFConstantStringClassReference_110ed7cb8;
}



/* Entry: 1084246b0; end: 1084246bf; -[SCFeatureSettingsService setSeenCameraModuleSearch:] */

void FUN_1084246b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed7cb8,param_3);
  return;
}



/* Entry: 1084246c0; end: 1084246c7; -[SCFeatureSettingsService seen_camera_module_search_client_value:] */

undefined * FUN_1084246c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1084246c8; end: 1084246cf; -[SCFeatureSettingsService seen_camera_module_search_server_value:] */

void FUN_1084246c8(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 1084246d0; end: 1084246df; -[SCFeatureSettingsService seenCameraModuleSearch] */

void FUN_1084246d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed7cb8,0);
  return;
}



/* Entry: 1084246e0; end: 1084246eb; -[SCFeatureSettingsService hasSelectedClipboardOption] */

void FUN_1084246e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed7cd8);
  return;
}



/* Entry: 1084246ec; end: 1084246f7; -[SCFeatureSettingsService selectedClipboardOptionServerParam] */

undefined ** FUN_1084246ec(void)

{
  return &PTR____CFConstantStringClassReference_110ed7cd8;
}



/* Entry: 1084246f8; end: 108424707; -[SCFeatureSettingsService setSelectedClipboardOption:] */

void FUN_1084246f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed7cd8,param_3);
  return;
}



/* Entry: 108424708; end: 10842470f; -[SCFeatureSettingsService clipboard_detector_option_selected_client_value:] */

undefined * FUN_108424708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108424710; end: 108424717; -[SCFeatureSettingsService clipboard_detector_option_selected_server_value:] */

void FUN_108424710(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108424718; end: 108424727; -[SCFeatureSettingsService selectedClipboardOption] */

void FUN_108424718(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed7cd8,0);
  return;
}



/* Entry: 108424728; end: 108424733; -[SCFeatureSettingsService hasAllowedClipboardAccess] */

void FUN_108424728(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed7cf8);
  return;
}



/* Entry: 108424734; end: 10842473f; -[SCFeatureSettingsService allowedClipboardAccessServerParam] */

undefined ** FUN_108424734(void)

{
  return &PTR____CFConstantStringClassReference_110ed7cf8;
}



/* Entry: 108424740; end: 10842474f; -[SCFeatureSettingsService setAllowedClipboardAccess:] */

void FUN_108424740(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed7cf8,param_3);
  return;
}


