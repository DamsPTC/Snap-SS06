/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ec2674; end: 105ec267b; -[SCCMapLocationTraySectionType__Enum init] */

void FUN_105ec2674(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 105ec267c; end: 105ec26c7; -[SCCMapInputBarContext initWithActionHandler:emojiUpdateObservable:showArrivalNotificationsOnboarding:expandedMapActionHanders:] */

void FUN_105ec267c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105ec28bc(PTR_PTR_1126edbd0);
  func_0x000105ec28b4(auStack_20);
  return;
}



/* Entry: 105ec26c8; end: 105ec2703; +[SCCMapInputBarContext valdiMarshallableObjectDescriptor] */

void FUN_105ec26c8(undefined8 *param_1)

{
  *param_1 = &PTR_s_actionHandler_1108f2248;
  param_1[1] = &PTR_DAT_1108f2380;
  param_1[2] = &PTR_DAT_1108f2218;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105ec2704; end: 105ec2783;  */

void FUN_105ec2704(undefined8 param_1)

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
  pcStack_38 = FUN_105ec2874;
  puStack_30 = &UNK_1108f2610;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105ec2784; end: 105ec27c3; -[SCCMapInputBarViewModel initWithUserId:participantInfos:] */

void FUN_105ec2784(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105ec28bc(PTR_PTR_1126edbd8);
  func_0x000105ec28b4(auStack_20);
  return;
}



/* Entry: 105ec27c4; end: 105ec27d7; +[SCCMapInputBarViewModel valdiMarshallableObjectDescriptor] */

void FUN_105ec27c4(undefined8 *param_1)

{
  *param_1 = &PTR_s_userId_1108f23d0;
  param_1[1] = &PTR_DAT_1108f24a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105ec27d8; end: 105ec280f; -[SCCMapLocationTraySection initWithSectionType:sectionItems:] */

void FUN_105ec27d8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126edbe0;
  uStack_20 = param_1;
  func_0x000105ec28b4(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105ec2810; end: 105ec2823; +[SCCMapLocationTraySection valdiMarshallableObjectDescriptor] */

void FUN_105ec2810(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f24c8;
  param_1[1] = &PTR_DAT_1108f2510;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105ec2824; end: 105ec285f; -[SCCParticipantSharingInfo initWithId2:displayName:isSharingLiveLocation:remainingTime:friendSharingType:] */

void FUN_105ec2824(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105ec28bc(PTR_PTR_1126edbe8);
  func_0x000105ec28b4(auStack_20);
  return;
}



/* Entry: 105ec2860; end: 105ec2873; +[SCCParticipantSharingInfo valdiMarshallableObjectDescriptor] */

void FUN_105ec2860(undefined8 *param_1)

{
  *param_1 = &PTR_s_id_1108f2528;
  param_1[1] = &PTR_DAT_1108f2600;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105ec2874; end: 105ec28a3;  */

void FUN_105ec2874(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105ec28a4; end: 105ec28cb;  */

void FUN_105ec28a4(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105ec28cc; end: 105ec28ef; +[SCCLocationCardActionHandler valdiMarshallableObjectDescriptor] */

void FUN_105ec28cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f2670;
  param_1[1] = 0;
  param_1[2] = &PTR_s_oob_v_1108f2640;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105ec28f0; end: 105ec291b;  */

undefined8 FUN_105ec28f0(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1);
  return 0;
}



/* Entry: 105ec291c; end: 105ec2997;  */

void FUN_105ec291c(undefined8 param_1)

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
  pcStack_38 = FUN_105ec2ae8;
  puStack_30 = &UNK_110858448;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  func_0x000105ec2b2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105ec2998; end: 105ec29a3; +[SCCLocationRequestCancellationComponent componentPath] */

undefined ** FUN_105ec2998(void)

{
  return &PTR____CFConstantStringClassReference_110e2fff8;
}



/* Entry: 105ec29a4; end: 105ec29c7; -[SCCLocationRequestCancellationComponent initWithViewModel:componentContext:runtime:] */

void FUN_105ec29a4(void)

{
  FUN_105ec2b18(PTR_PTR_1126edbf0);
  return;
}



/* Entry: 105ec29c8; end: 105ec29ff; -[SCCLocationRequestCancellationComponent setViewModel:] */

void FUN_105ec29c8(void)

{
  func_0x000105ec2b34();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105ec2b44();
  func_0x000105ec2b2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105ec2a00; end: 105ec2a3f; -[SCCLocationRequestCancellationComponent viewModel] */

void FUN_105ec2a00(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105ec2b2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105ec2a40; end: 105ec2a4b; +[SCCMapFriendProfileComponent componentPath] */

undefined ** FUN_105ec2a40(void)

{
  return &PTR____CFConstantStringClassReference_110e30018;
}



/* Entry: 105ec2a4c; end: 105ec2a6f; -[SCCMapFriendProfileComponent initWithViewModel:componentContext:runtime:] */

void FUN_105ec2a4c(void)

{
  FUN_105ec2b18(PTR_PTR_1126edbf8);
  return;
}



/* Entry: 105ec2a70; end: 105ec2aa7; -[SCCMapFriendProfileComponent setViewModel:] */

void FUN_105ec2a70(void)

{
  func_0x000105ec2b34();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105ec2b44();
  func_0x000105ec2b2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105ec2aa8; end: 105ec2ae7; -[SCCMapFriendProfileComponent viewModel] */

void FUN_105ec2aa8(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105ec2b2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105ec2ae8; end: 105ec2b17;  */

void FUN_105ec2ae8(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105ec2b18; end: 105ec2b4f;  */

void FUN_105ec2b18(undefined8 param_1,undefined8 param_2)

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



/* Entry: 105ec2b50; end: 105ec2b57; -[SCCLocationRequestState__Enum init] */

void FUN_105ec2b50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 105ec2b58; end: 105ec2b5f; -[SCCLocationSharingState__Enum init] */

void FUN_105ec2b58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 105ec2b60; end: 105ec2bab; -[SCCFriendProfileLocationInfo initWithSharingState:isPrimaryDevice:isMuted:] */

void FUN_105ec2b60(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126edc00;
  uStack_20 = param_1;
  FUN_105ec2d58(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105ec2bac; end: 105ec2bc7; +[SCCFriendProfileLocationInfo valdiMarshallableObjectDescriptor] */

void FUN_105ec2bac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f2778;
  param_1[1] = &PTR_DAT_1108f2850;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105ec2bc8; end: 105ec2c17; -[SCCMapFriendProfileContext initWithEmojiUpdateObservable:showOnboarding:arrivalNotificationsActionHandler:friendProfileInfoObservable:locationCardActionHandler:] */

void FUN_105ec2bc8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126edc08;
  uStack_20 = param_1;
  FUN_105ec2d58(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105ec2c18; end: 105ec2c3b; +[SCCMapFriendProfileContext valdiMarshallableObjectDescriptor] */

void FUN_105ec2c18(undefined8 *param_1)

{
  *param_1 = &PTR_s_alertPresenter_1108f2898;
  param_1[1] = &PTR_s_SCComposerFoundationAlertPresent_1108f29e8;
  param_1[2] = &PTR_s_od_v_1108f2868;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105ec2c3c; end: 105ec2c5f;  */

undefined8 FUN_105ec2c3c(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2);
  return 0;
}



/* Entry: 105ec2c60; end: 105ec2cdf;  */

void FUN_105ec2c60(undefined8 param_1)

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
  pcStack_38 = FUN_105ec2d2c;
  puStack_30 = &UNK_110853170;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105ec2ce0; end: 105ec2d17; -[SCCMapFriendProfileViewModel initWithFriendId:] */

void FUN_105ec2ce0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126edc10;
  uStack_20 = param_1;
  FUN_105ec2d58(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105ec2d18; end: 105ec2d2b; +[SCCMapFriendProfileViewModel valdiMarshallableObjectDescriptor] */

void FUN_105ec2d18(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_friendId_1108f2a40;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105ec2d2c; end: 105ec2d57;  */

void FUN_105ec2d2c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105ec2d58; end: 105ec2d67;  */

void FUN_105ec2d58(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)(param_1,param_2,0);
  return;
}



/* Entry: 105ec2d68; end: 105ec2d73; +[SCCPlaceAlertsComponentPlaceAlertsEditorComponent componentPath] */

undefined ** FUN_105ec2d68(void)

{
  return &PTR____CFConstantStringClassReference_110e30038;
}



/* Entry: 105ec2d74; end: 105ec2d97; -[SCCPlaceAlertsComponentPlaceAlertsEditorComponent initWithViewModel:componentContext:runtime:] */

void FUN_105ec2d74(void)

{
  FUN_105ec2eb8(PTR_PTR_1126edc18);
  return;
}



/* Entry: 105ec2d98; end: 105ec2dcf; -[SCCPlaceAlertsComponentPlaceAlertsEditorComponent setViewModel:] */

void FUN_105ec2d98(void)

{
  func_0x000105ec2ed4();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105ec2ee4();
  func_0x000105ec2ecc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105ec2dd0; end: 105ec2e0f; -[SCCPlaceAlertsComponentPlaceAlertsEditorComponent viewModel] */

void FUN_105ec2dd0(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105ec2ecc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105ec2e10; end: 105ec2e1b; +[SCCPlaceAlertsComponentPlaceAlertsPageComponent componentPath] */

undefined ** FUN_105ec2e10(void)

{
  return &PTR____CFConstantStringClassReference_110e30058;
}



/* Entry: 105ec2e1c; end: 105ec2e3f; -[SCCPlaceAlertsComponentPlaceAlertsPageComponent initWithViewModel:componentContext:runtime:] */

void FUN_105ec2e1c(void)

{
  FUN_105ec2eb8(PTR_PTR_1126edc20);
  return;
}



/* Entry: 105ec2e40; end: 105ec2e77; -[SCCPlaceAlertsComponentPlaceAlertsPageComponent setViewModel:] */

void FUN_105ec2e40(void)

{
  func_0x000105ec2ed4();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105ec2ee4();
  func_0x000105ec2ecc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105ec2e78; end: 105ec2eb7; -[SCCPlaceAlertsComponentPlaceAlertsPageComponent viewModel] */

void FUN_105ec2e78(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105ec2ecc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105ec2eb8; end: 105ec2eef;  */

void FUN_105ec2eb8(undefined8 param_1,undefined8 param_2)

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



/* Entry: 105ec2ef0; end: 105ec2ef7; -[SCCPlaceAlertsComponentPlaceAlertEditType__Enum init] */

void FUN_105ec2ef0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 105ec2ef8; end: 105ec2eff; -[SCCPlaceAlertsComponentPlaceAlertPermissionType__Enum init] */

void FUN_105ec2ef8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 105ec2f00; end: 105ec2f5b; -[SCCPlaceAlertsComponentLocationSharingInfoProvider initWithIsSharingLocation:] */

undefined8 * FUN_105ec2f00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retainBlock();
  puStack_28 = PTR_PTR_1126edc28;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  func_0x000105ec3244(puVar1,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105ec2f5c; end: 105ec2f6b; +[SCCPlaceAlertsComponentLocationSharingInfoProvider valdiMarshallableObjectDescriptor] */

void FUN_105ec2f5c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108f2a70;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105ec2f6c; end: 105ec2fab; -[SCCPlaceAlertsComponentPlaceAlert initWithCreatorUserId:placeName:lat:lng:radiusMeters:userNotificationSettings:] */

void FUN_105ec2f6c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105ec3234(PTR_PTR_1126edc30);
  func_0x000105ec3244(auStack_20);
  return;
}



/* Entry: 105ec2fac; end: 105ec2fbf; +[SCCPlaceAlertsComponentPlaceAlert valdiMarshallableObjectDescriptor] */

void FUN_105ec2fac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f2aa0;
  param_1[1] = &PTR_DAT_1108f2b60;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105ec2fc0; end: 105ec2ff7; -[SCCPlaceAlertsComponentPlaceAlertEdit initWithAlert:editType:] */

void FUN_105ec2fc0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126edc38;
  uStack_20 = param_1;
  func_0x000105ec3244(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105ec2ff8; end: 105ec300b; +[SCCPlaceAlertsComponentPlaceAlertEdit valdiMarshallableObjectDescriptor] */

void FUN_105ec2ff8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f2b70;
  param_1[1] = &PTR_DAT_1108f2bb8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105ec300c; end: 105ec304b; -[SCCPlaceAlertsComponentPlaceAlertEditorContext initWithNavigator:placeAlertUpdateSubject:] */

void FUN_105ec300c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105ec3234(PTR_PTR_1126edc40);
  func_0x000105ec3244(auStack_20);
  return;
}



/* Entry: 105ec304c; end: 105ec305f; +[SCCPlaceAlertsComponentPlaceAlertEditorContext valdiMarshallableObjectDescriptor] */

void FUN_105ec304c(undefined8 *param_1)

{
  *param_1 = &PTR_s_onDismiss_1108f2bd0;
  param_1[1] = &PTR_s_SCComposerFoundationAlertPresent_1108f2cc0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105ec3060; end: 105ec309b; -[SCCPlaceAlertsComponentPlaceAlertEditorViewModel initWithIsViewOnly:currentUserId:recipientUserIds:defaultRadiusM:lowestRadiusM:highestRadiusM:] */

void FUN_105ec3060(void)

{
  func_0x000105ec3234(PTR_PTR_1126edc48);
  func_0x000105ec3224();
  return;
}



/* Entry: 105ec309c; end: 105ec30af; +[SCCPlaceAlertsComponentPlaceAlertEditorViewModel valdiMarshallableObjectDescriptor] */

void FUN_105ec309c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f2d10;
  param_1[1] = &PTR_DAT_1108f2e00;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105ec30b0; end: 105ec30d7; -[SCCPlaceAlertsComponentPlaceAlertMissingPermission initWithUserId:type:displayNameOrUsername:] */

void FUN_105ec30b0(void)

{
  func_0x000105ec3234(PTR_PTR_1126edc50);
  func_0x000105ec3224();
  return;
}



/* Entry: 105ec30d8; end: 105ec30eb; +[SCCPlaceAlertsComponentPlaceAlertMissingPermission valdiMarshallableObjectDescriptor] */

void FUN_105ec30d8(undefined8 *param_1)

{
  *param_1 = &PTR_s_userId_1108f2e10;
  param_1[1] = &PTR_DAT_1108f2e70;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105ec30ec; end: 105ec311f; -[SCCPlaceAlertsComponentPlaceAlertUserNotificationSetting initWithTargetUserId:isSharingLocation:shouldNotifyOnArrival:shouldNotifyOnDeparture:] */

void FUN_105ec30ec(void)

{
  func_0x000105ec3234(PTR_PTR_1126edc58);
  func_0x000105ec3224();
  return;
}



/* Entry: 105ec3120; end: 105ec3133; +[SCCPlaceAlertsComponentPlaceAlertUserNotificationSetting valdiMarshallableObjectDescriptor] */

void FUN_105ec3120(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f2e80;
  param_1[1] = &PTR_s_SCCBitmojiInfo_1108f2f40;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105ec3134; end: 105ec31c7; -[SCCPlaceAlertsComponentPlaceAlertsPageContext initWithNavigator:onSendMessageForPermission:] */

undefined8 *
FUN_105ec3134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1126edc60;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x000105ec3244(puVar1,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(param_3);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 105ec31c8; end: 105ec31db; +[SCCPlaceAlertsComponentPlaceAlertsPageContext valdiMarshallableObjectDescriptor] */

void FUN_105ec31c8(undefined8 *param_1)

{
  *param_1 = &PTR_s_userProvider_1108f2f50;
  param_1[1] = &PTR_s_SCComposerPeopleUserProviding_1108f30b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105ec31dc; end: 105ec3203; -[SCCPlaceAlertsComponentPlaceAlertsPageViewModel initWithIsViewOnly:currentUserId:] */

void FUN_105ec31dc(void)

{
  func_0x000105ec3234(PTR_PTR_1126edc68);
  func_0x000105ec3224();
  return;
}



/* Entry: 105ec3204; end: 105ec325f; +[SCCPlaceAlertsComponentPlaceAlertsPageViewModel valdiMarshallableObjectDescriptor] */

void FUN_105ec3204(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108f3108;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105ec3260; end: 105ec32ab; +[SCGeolocationLogEntry fromLocation:] */

void FUN_105ec3260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c58a0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c026b40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ec32ac; end: 105ec33b3; -[SCGeolocationLogEntry initWithLocation:] */

undefined1 * FUN_105ec32ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126edc70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    puVar3 = PTR_PTR_1126b6598;
    func_0x00010bfe4080(param_3);
    func_0x00010c098a40(puVar3);
    puVar3 = PTR_PTR_1126b6598;
    func_0x00010bf51c80(param_3);
    func_0x00010bf33ee0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0f3ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010c272ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ec33b4; end: 105ec3477; -[SCGeolocationLogEntry logString] */

void FUN_105ec33b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010bf8b160();
  func_0x00010bfc1520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e30078);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105ec3478; end: 105ec347f; -[SCGeolocationLogEntry geocell] */

undefined8 FUN_105ec3478(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105ec3480; end: 105ec3487; -[SCGeolocationLogEntry location] */

undefined8 FUN_105ec3480(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105ec3488; end: 105ec348f; -[SCGeolocationLogEntry duration] */

undefined8 FUN_105ec3488(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105ec3490; end: 105ec3497; -[SCGeolocationLogEntry setDuration:] */

void FUN_105ec3490(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 105ec3498; end: 105ec34c7; -[SCGeolocationLogEntry .cxx_destruct] */

void FUN_105ec3498(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ec34c8; end: 105ec37f7; -[SCGeolocationLogger initWithLocationProvider:lazyLocationPreferences:userBirthdayProvider:userRegistrationProvider:userTrackedLogger:applicationLifecycleEvents:] */

undefined8 *
FUN_105ec34c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_78 = PTR_PTR_1126edc78;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_88,puVar1);
    uVar4 = puVar1[1];
    func_0x00010c09f820();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105ec37f8;
    puStack_98 = &UNK_11085fbf8;
    _objc_copyWeak(auStack_90,auStack_88);
    uVar2 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar6);
    _objc_release(uVar4);
    uVar2 = param_8;
    func_0x00010bf75dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b8,auStack_88);
    uVar6 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[6];
    puVar1[6] = uVar6;
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar2);
    puVar5 = auStack_88;
    _objc_loadWeakRetained(puVar5);
    func_0x00010be2ba40();
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105ec37f8; end: 105ec38a3;  */

void FUN_105ec37f8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd800(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105ec38a4; end: 105ec38fb;  */

void FUN_105ec38a4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ba40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ec38fc; end: 105ec3b6f; -[SCGeolocationLogger _flushEvents] */

void FUN_105ec38fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_1108f3188);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c089820(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c58a8;
  _objc_opt_new(PTR_PTR_1126c58a8);
  uVar8 = uVar2;
  func_0x00010bf446e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2ce0(puVar4,param_2,uVar8);
  _objc_release(uVar8);
  uVar8 = uVar3;
  func_0x00010bfc1520(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195600(puVar4,param_2,uVar8);
  _objc_release(uVar8);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bfd7100();
  _objc_release(uVar5);
  if ((int)uVar8 == 0) {
    uVar8 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010bfcc660();
    _objc_release(uVar8);
    _objc_release(uVar6);
    uVar8 = 1;
    if ((int)uVar5 == 0) {
      uVar8 = 2;
    }
  }
  func_0x00010c1a3a80(puVar4,param_2,uVar8);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x00010befe800(uVar8,param_2,puVar7);
  func_0x00010c1664e0(puVar4,param_2,uVar5);
  _objc_release(puVar7);
  _objc_release(uVar8);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x00010c127a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e97c0(puVar4,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar6);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar8);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x48));
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105ec3b70; end: 105ec3b77;  */

void FUN_105ec3b70(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b1310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_logString_112609ed0);
  return;
}



/* Entry: 105ec3b78; end: 105ec3c1f; -[SCGeolocationLogger _handleLocationUpdated] */

void FUN_105ec3b78(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar2 = lVar1, func_0x000107f49238(), (int)lVar2 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105ec3c20;
    puStack_48 = &UNK_110841f80;
    _objc_retain(lVar1);
    lStack_40 = lVar1;
    lStack_38 = param_1;
    func_0x00010c0f7fc0(uVar3,param_2,&puStack_60);
    _objc_release(lStack_40);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105ec3c20; end: 105ec3d8f;  */

void FUN_105ec3c20(double param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = *(ulong *)(*(long *)(param_2 + 0x28) + 0x48);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c58a0;
  func_0x00010bfbac80(PTR_PTR_1126c58a0,param_3,*(undefined8 *)(param_2 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar6 = uVar1;
    func_0x00010c09ea00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    uVar7 = (ulong)param_1;
    _objc_release(uVar3);
    _objc_release(uVar6);
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c2709c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(uVar4);
    uVar6 = (long)param_1 - uVar7;
    if ((ulong)(long)param_1 < uVar7 || uVar6 == 0) goto LAB_105ec3d50;
    uVar3 = uVar1;
    func_0x00010bfc1520();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bfc1520(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c0720c0(uVar3,param_3,puVar5);
    _objc_release(puVar5);
    _objc_release(uVar3);
    if (((uVar7 & 1) != 0) && (uVar6 < 0x3d)) {
      func_0x00010c192d40(uVar1,param_3,uVar6);
      goto LAB_105ec3d50;
    }
  }
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_2 + 0x28) + 0x48),param_3,puVar2);
LAB_105ec3d50:
  uVar6 = *(ulong *)(*(long *)(param_2 + 0x28) + 0x48);
  func_0x00010bf529e0();
  if (0x3b < uVar6) {
    func_0x00010be181c0(*(undefined8 *)(param_2 + 0x28));
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ec3d90; end: 105ec3e47; -[SCGeolocationLogger .cxx_destruct] */

void FUN_105ec3d90(long param_1)

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



/* Entry: 105ec3e48; end: 105ec4013; -[SCGeolocationLoggerEntryPoint _createLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ec3e48(long param_1,undefined8 param_2)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  
  puVar1 = PTR_PTR_1126c58b0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112739610;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112739614;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c1068a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_112739618;
  lVar7 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bf1a840();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + lVar15;
  _objc_loadWeakRetained(lVar15);
  lVar9 = lVar15;
  func_0x00010c127bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11273961c;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112739620;
  _objc_loadWeakRetained(lVar12);
  lVar13 = lVar12;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c026e80(puVar1,param_2,lVar4,lVar6,lVar8,lVar9,lVar11,lVar13);
  uVar14 = *(undefined8 *)(param_1 + _DAT_112739624);
  *(undefined **)(param_1 + _DAT_112739624) = puVar1;
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar15);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105ec4014; end: 105ec408b; -[SCGeolocationLoggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ec4014(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112739610);
  _objc_destroyWeak(param_1 + _DAT_112739618);
  _objc_destroyWeak(param_1 + _DAT_11273961c);
  _objc_destroyWeak(param_1 + _DAT_112739614);
  _objc_destroyWeak(param_1 + _DAT_112739620);
  _objc_destroyWeak(param_1 + _DAT_112739628);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112739624,0);
  return;
}



/* Entry: 105ec408c; end: 105ec42cf; -[SCMapBitmojiPreloader initWithCurrentUserId:featureSettingsService:mapBitmojiAvatarGenerator:mapPeopleFriendsProvider:mapPersonLocationsProvider:sharingPreferencesProvider:networkConnectivityMonitor:] */

undefined8 *
FUN_105ec408c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126edc80;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar3 = puVar1[5];
    func_0x00010c09fa60();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar2 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105ec42d0; end: 105ec42fb;  */

void FUN_105ec42d0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ba80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ec42fc; end: 105ec4343; -[SCMapBitmojiPreloader _handleLocationsUpdate] */

void FUN_105ec42fc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0fa5c0(lVar1,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010be77ba0(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ec4344; end: 105ec4793; -[SCMapBitmojiPreloader _preloadStickerForCurrentUserLocation:] */

void FUN_105ec4344(long param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bc310;
  func_0x00010c277640();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != (undefined *)0x0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010c0b9660();
    if (iVar1 != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
      func_0x00010bf642a0();
      if (iVar1 != 0) {
        lVar3 = *(long *)(param_1 + 0x38);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar3;
        func_0x00010bf48f60();
        _objc_release(lVar3);
        if (lVar16 != 2) goto LAB_105ec4748;
      }
      puVar4 = param_3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c08fa60();
      _objc_release(puVar4);
      if (puVar5 != (undefined *)0x0) {
        lVar16 = *(long *)(param_1 + 0x20);
        puVar4 = param_3;
        func_0x00010c2923e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b96e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        if (lVar16 != 0) {
          puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_alloc();
          func_0x00010bffc4a0();
          uVar6 = *(undefined8 *)(param_1 + 0x30);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar6;
          func_0x00010c1067a0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar15;
          func_0x00010bfcc660();
          _objc_release(uVar15);
          _objc_release(uVar6);
          if ((int)uVar7 == 0) {
            puVar5 = param_3;
            func_0x00010c253880(param_3);
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar5;
            func_0x00010c0dab60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar4);
            _objc_release(puVar17);
            _objc_release(puVar5);
            puVar5 = param_3;
            func_0x00010c253880(param_3);
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar5;
            func_0x00010bf3e8a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar4);
            _objc_release(puVar17);
            _objc_release(puVar5);
            puVar5 = param_3;
            func_0x00010c253880(param_3);
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar5;
            func_0x00010bf3e8c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar4);
            _objc_release(puVar17);
          }
          else {
            puVar5 = PTR_PTR_1126c58b8;
            func_0x00010bfcc6e0(PTR_PTR_1126c58b8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar4);
          }
          _objc_release(puVar5);
          _objc_retain(puVar4);
          puVar5 = puVar4;
          func_0x00010bf52a60();
          lVar3 = lRam0000000000000000;
          while (puVar5 != (undefined *)0x0) {
            puVar17 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar3) {
                _objc_enumerationMutation(puVar4);
              }
              uVar18 = *(ulong *)((long)puVar17 * 8);
              puVar8 = param_3;
              func_0x00010c253880(param_3);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar8;
              func_0x00010bf3e8a0();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar18;
              func_0x00010c0720c0();
              if ((uVar10 & 1) == 0) {
                puVar11 = param_3;
                func_0x00010c253880(param_3);
                _objc_retainAutoreleasedReturnValue();
                puVar12 = puVar11;
                func_0x00010bf3e8c0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0720c0(uVar18);
                _objc_release(puVar12);
                _objc_release(puVar11);
              }
              _objc_release(puVar9);
              _objc_release(puVar8);
              uVar15 = *(undefined8 *)(param_1 + 0x18);
              lVar13 = lVar16;
              func_0x00010bf1acc0(lVar16);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = param_3;
              func_0x00010c253880(param_3);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar8;
              func_0x00010bf8b800();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfa5480(uVar15);
              _objc_release(puVar9);
              _objc_release(puVar8);
              _objc_release(lVar13);
              puVar17 = puVar17 + 1;
            } while (puVar5 != puVar17);
            puVar5 = puVar4;
            func_0x00010bf52a60();
          }
          _objc_release(puVar4);
          _objc_release(puVar4);
        }
        _objc_release(lVar16);
      }
    }
  }
LAB_105ec4748:
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x40,0);
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 105ec4794; end: 105ec480b; -[SCMapBitmojiPreloader .cxx_destruct] */

void FUN_105ec4794(long param_1)

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



/* Entry: 105ec480c; end: 105ec4a0f; -[SCMapFriendLocationsPreloader initWithFeatureSettingsService:mapPersonLocationsProvider:networkConnectivityMonitor:applicationLifecycleEvents:appLifecycleManager:] */

undefined8 *
FUN_105ec480c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126edc88;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    func_0x00010be77980(puVar1);
    _objc_initWeak(auStack_78,puVar1);
    uVar4 = puVar1[3];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0d7a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar5 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[4];
    puVar1[4] = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105ec4a10; end: 105ec4a6f;  */

void FUN_105ec4a10(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf5e480(param_2);
  _objc_release(param_2);
  func_0x00010be629c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ec4a70; end: 105ec4b0f; -[SCMapFriendLocationsPreloader _preloadIfNecessary] */

void FUN_105ec4a70(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e300d8);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c0b9660();
  if (iVar1 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010bf642a0();
    if (iVar1 != 0) {
      lVar3 = *(long *)(param_1 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf48f60();
      _objc_release(lVar3);
      if (lVar4 != 2) goto LAB_105ec4afc;
    }
    func_0x00010c128900(0x40e5180000000000,*(undefined8 *)(param_1 + 0x10),param_2,7);
  }
LAB_105ec4afc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105ec4b10; end: 105ec4bd7; -[SCMapFriendLocationsPreloader _networkConnectivityStatusDidChange:] */

void FUN_105ec4b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = 0x11;
  func_0x0001000819a8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105ec4bd8;
  puStack_50 = &UNK_110846540;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105ec4bd8; end: 105ec4c27;  */

void FUN_105ec4bd8(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(lVar2 + 8);
    func_0x00010bf642a0();
    if ((iVar1 != 0) && (*(long *)(param_1 + 0x28) == 2)) {
      func_0x00010be77980(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105ec4c28; end: 105ec4caf; -[SCMapFriendLocationsPreloader .cxx_destruct] */

void FUN_105ec4c28(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ec4cb0; end: 105ec516f; -[SCMapWarmupEntryPoint _doWarmup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ec4cb0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
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
  undefined8 uVar23;
  long lVar24;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lVar1 = param_1 + _DAT_112739660;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126bc310;
    func_0x00010c277640();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105ec5170;
    puStack_70 = &UNK_110842e18;
    lStack_68 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_88);
    uVar4 = param_1 + _DAT_112739668;
    _objc_loadWeakRetained();
    uVar5 = uVar4;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x000109021bf8();
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((uVar6 & 1) == 0) {
      puVar7 = PTR_PTR_1126c58c0;
      _objc_alloc();
      lVar8 = lVar2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1 + _DAT_11273966c;
      _objc_loadWeakRetained();
      lVar9 = lVar1;
      func_0x00010bfa2b80();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_1 + _DAT_112739670;
      _objc_loadWeakRetained();
      lVar12 = lVar11;
      func_0x00010bf1aca0();
      _objc_retainAutoreleasedReturnValue();
      lVar24 = lVar12;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_1 + _DAT_112739674;
      _objc_loadWeakRetained();
      lVar14 = lVar13;
      func_0x00010c0b9680();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar14;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = param_1 + _DAT_112739678;
      _objc_loadWeakRetained();
      lVar17 = lVar16;
      func_0x00010c0b97a0();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar17;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = param_1 + _DAT_11273967c;
      _objc_loadWeakRetained(lVar19);
      lVar20 = lVar19;
      func_0x00010c1068a0();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = param_1 + _DAT_112739680;
      _objc_loadWeakRetained();
      lVar22 = lVar21;
      func_0x00010c0d79a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0076e0();
      uVar23 = *(undefined8 *)(param_1 + _DAT_112739684);
      *(undefined **)(param_1 + _DAT_112739684) = puVar7;
      _objc_release(uVar23);
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
      _objc_release(lVar24);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar1);
      _objc_release(lVar8);
    }
    puVar7 = PTR_PTR_1126c58c8;
    _objc_alloc();
    lVar1 = param_1 + _DAT_11273966c;
    _objc_loadWeakRetained();
    lVar19 = lVar1;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar19;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + _DAT_112739678;
    _objc_loadWeakRetained();
    lVar8 = lVar11;
    func_0x00010c0b97a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + _DAT_112739680;
    _objc_loadWeakRetained(lVar13);
    lVar10 = lVar13;
    func_0x00010c0d79a0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_1 + _DAT_112739688;
    _objc_loadWeakRetained(lVar16);
    lVar12 = lVar16;
    func_0x00010bf07a00();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar24 = 0;
    }
    else {
      lVar24 = param_1 + _DAT_1127396a0;
      _objc_loadWeakRetained(lVar24);
    }
    lVar14 = lVar24;
    func_0x00010bf058c0(lVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011e60();
    uVar23 = *(undefined8 *)(param_1 + _DAT_11273968c);
    *(undefined **)(param_1 + _DAT_11273968c) = puVar7;
    _objc_release(uVar23);
    _objc_release(lVar14);
    _objc_release(lVar24);
    _objc_release(lVar12);
    _objc_release(lVar16);
    _objc_release(lVar10);
    _objc_release(lVar13);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar11);
    _objc_release(lVar21);
    _objc_release(lVar19);
    _objc_release(lVar1);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 105ec5170; end: 105ec51e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ec5170(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112739664;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0d5a80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c107fc0();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ec51e4; end: 105ec52e3; -[SCMapWarmupEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ec51e4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127396a4);
  _objc_destroyWeak(param_1 + _DAT_112739664);
  _objc_destroyWeak(param_1 + _DAT_112739668);
  _objc_destroyWeak(param_1 + _DAT_112739680);
  _objc_destroyWeak(param_1 + _DAT_1127396a0);
  _objc_destroyWeak(param_1 + _DAT_112739678);
  _objc_destroyWeak(param_1 + _DAT_112739660);
  _objc_destroyWeak(param_1 + _DAT_112739670);
  _objc_destroyWeak(param_1 + _DAT_112739674);
  _objc_destroyWeak(param_1 + _DAT_11273966c);
  _objc_destroyWeak(param_1 + _DAT_11273969c);
  _objc_destroyWeak(param_1 + _DAT_112739698);
  _objc_destroyWeak(param_1 + _DAT_11273967c);
  _objc_destroyWeak(param_1 + _DAT_112739694);
  _objc_destroyWeak(param_1 + _DAT_112739688);
  _objc_destroyWeak(param_1 + _DAT_112739690);
  _objc_storeStrong(param_1 + _DAT_11273968c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112739684,0);
  return;
}



/* Entry: 105ec52e4; end: 105ec54fb; -[SCMapAddressAnnotationController initWithGestureManager:mapViewport:mapView:useAppTriggerForAddressPins:] */

undefined8 *
FUN_105ec52e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,int param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126edc90;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    *(char *)(puVar1 + 6) = (char)param_6;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    if (param_6 == 0) {
      uVar2 = param_3;
      func_0x00010c269d40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befc5c0();
      _objc_release(uVar2);
    }
    else {
      _objc_initWeak(auStack_68,puVar1);
      uVar2 = param_5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf06540();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126c58d0);
      uVar5 = uVar4;
      func_0x00010c27c040();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_70,auStack_68);
      uVar6 = uVar5;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = puVar1[5];
      puVar1[5] = uVar6;
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105ec54fc; end: 105ec55f3;  */

void FUN_105ec54fc(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126c58d0;
  if (param_3 != 0) {
    _objc_retain(param_4);
    _objc_opt_class(puVar2);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    if (uVar1 != 0) {
      lVar4 = param_3 + 0x38;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c09ea00(param_4);
      uVar3 = param_4;
      func_0x00010befd6e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7ce40(param_1,param_2,lVar4);
      _objc_release(uVar3);
      _objc_release(lVar4);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}


