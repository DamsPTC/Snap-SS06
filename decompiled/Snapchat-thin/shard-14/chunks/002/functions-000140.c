/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b02b760; end: 10b02b767; -[SCMapPlaceCategoryIcon placeId] */

undefined8 FUN_10b02b760(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b02b768; end: 10b02b76f; -[SCMapPlaceCategoryIcon categoryIconUrl] */

undefined8 FUN_10b02b768(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b02b770; end: 10b02b777; -[SCMapPlaceCategoryIcon kindName] */

undefined8 FUN_10b02b770(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b02b778; end: 10b02b77f; -[SCMapPlaceCategoryIcon isDefaultCategoryIcon] */

undefined1 FUN_10b02b778(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b02b780; end: 10b02b787; -[SCMapPlaceCategoryIcon categoryId] */

undefined8 FUN_10b02b780(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b02b788; end: 10b02b7cf; -[SCMapPlaceCategoryIcon .cxx_destruct] */

void FUN_10b02b788(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b02b7d0; end: 10b02b7d7; -[SCCVenueProfileV3ExternalActionType__Enum init] */

void FUN_10b02b7d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,7);
  return;
}



/* Entry: 10b02b7d8; end: 10b02b7df; -[SCVenueActionSheetType__Enum init] */

void FUN_10b02b7d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10b02b7e0; end: 10b02b7e7; -[SCVenueNavigationMode__Enum init] */

void FUN_10b02b7e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b02b7e8; end: 10b02b7ef; -[SCVenueProfileExternalMetricType__Enum init] */

void FUN_10b02b7e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10b02b7f0; end: 10b02b7f7; -[SCVenueProfileFloatingButtonAction__Enum init] */

void FUN_10b02b7f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,1);
  return;
}



/* Entry: 10b02b7f8; end: 10b02b7ff; -[SCVenueProfileSection__Enum init] */

void FUN_10b02b7f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,7);
  return;
}



/* Entry: 10b02b800; end: 10b02b8a7; -[SCCPlaceLoyaltyRank__Enum init] */

undefined * FUN_10b02b800(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_40 = PTR_PTR_113356b38;
  puStack_38 = PTR_PTR_113356b40;
  puStack_30 = PTR_PTR_113356b48;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b02c14c(PTR_PTR_112704970);
  func_0x00010b02c128();
  return puVar1;
}



/* Entry: 10b02b8a8; end: 10b02b8d3; -[SCCBusinessProfileData initWithBusinessId:accountId:name:username:profileImageUrl:] */

void FUN_10b02b8a8(void)

{
  func_0x00010b02c14c(PTR_PTR_112704970);
  func_0x00010b02c128();
  return;
}



/* Entry: 10b02b8d4; end: 10b02b8e3; +[SCCBusinessProfileData valdiMarshallableObjectDescriptor] */

void FUN_10b02b8d4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110caea88;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02b8e4; end: 10b02b90b; -[SCCDirectionsButtonData initWithMode:formattedAddress:name:lat:lng:] */

void FUN_10b02b8e4(void)

{
  func_0x00010b02c14c(PTR_PTR_112704978);
  func_0x00010b02c138();
  return;
}



/* Entry: 10b02b90c; end: 10b02b91f; +[SCCDirectionsButtonData valdiMarshallableObjectDescriptor] */

void FUN_10b02b90c(undefined8 *param_1)

{
  *param_1 = &PTR_s_mode_110caeb30;
  param_1[1] = &PTR_DAT_110caebc0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02b920; end: 10b02b94f; -[SCCMapVenueProfileMetricsData initWithAnnotations:hasMediaPin:mapZoomLevel:mapSessionId:mapViewportSessionId:] */

void FUN_10b02b920(void)

{
  func_0x00010b02c14c(PTR_PTR_112704980);
  func_0x00010b02c128();
  return;
}



/* Entry: 10b02b950; end: 10b02b95f; +[SCCMapVenueProfileMetricsData valdiMarshallableObjectDescriptor] */

void FUN_10b02b950(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_annotations_110caebd0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02b960; end: 10b02b98b; -[SCCPlaceLoyaltyData initWithCategoryAsset:trophyAsset:bitmojiPoseId:title:subtitle:rank:] */

void FUN_10b02b960(void)

{
  func_0x00010b02c14c(PTR_PTR_112704988);
  func_0x00010b02c138();
  return;
}



/* Entry: 10b02b98c; end: 10b02b99f; +[SCCPlaceLoyaltyData valdiMarshallableObjectDescriptor] */

void FUN_10b02b98c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110caec90;
  param_1[1] = &PTR_DAT_110caed50;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02b9a0; end: 10b02b9d7; -[SCCPlaceLoyaltySticker initWithPlaceId:placeName:trophyAsset:poseId:subtitle:title:rankColor:] */

void FUN_10b02b9a0(undefined8 param_1)

{
  func_0x00010b02c138(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b02b9d8; end: 10b02b9e7; +[SCCPlaceLoyaltySticker valdiMarshallableObjectDescriptor] */

void FUN_10b02b9d8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_placeId_110caed60;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02b9e8; end: 10b02ba0f; -[SCCPlaceProfileComponentSection initWithComponentType:sectionTitle:places:] */

void FUN_10b02b9e8(void)

{
  func_0x00010b02c14c(PTR_PTR_112704998);
  func_0x00010b02c128();
  return;
}



/* Entry: 10b02ba10; end: 10b02ba23; +[SCCPlaceProfileComponentSection valdiMarshallableObjectDescriptor] */

void FUN_10b02ba10(undefined8 *param_1)

{
  *param_1 = &PTR_s_componentType_110caee20;
  param_1[1] = &PTR_DAT_110caee98;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02ba24; end: 10b02ba5b; -[SCCPlaceProfileData initWithPlaceId:] */

void FUN_10b02ba24(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b02c14c(PTR_PTR_1127049a0);
  func_0x00010b02c1f4();
  func_0x00010b02c168(auStack_20);
  return;
}



/* Entry: 10b02ba5c; end: 10b02ba6f; +[SCCPlaceProfileData valdiMarshallableObjectDescriptor] */

void FUN_10b02ba5c(undefined8 *param_1)

{
  *param_1 = &PTR_s_placeId_110caeeb0;
  param_1[1] = &PTR_DAT_110caef70;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02ba70; end: 10b02baaf; -[SCCVenueLoadedData initWithPlaceId:name:lat:lng:categoryIconUrl:isFavorited:isPromoted:placeType:] */

void FUN_10b02ba70(void)

{
  func_0x00010b02c14c(PTR_PTR_1127049a8);
  func_0x00010b02c128();
  return;
}



/* Entry: 10b02bab0; end: 10b02bac3; +[SCCVenueLoadedData valdiMarshallableObjectDescriptor] */

void FUN_10b02bab0(undefined8 *param_1)

{
  *param_1 = &PTR_s_placeId_110caefa0;
  param_1[1] = &PTR_DAT_110caf0f0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02bac4; end: 10b02baf3; -[SCCVenueProfileV3Configs initWithShowStoryCarousel:showSeeOnSnapMapSection:] */

void FUN_10b02bac4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127049b0;
  uStack_20 = param_1;
  func_0x00010b02c170();
  func_0x00010b02c168(&uStack_20);
  return;
}



/* Entry: 10b02baf4; end: 10b02bb03; +[SCCVenueProfileV3Configs valdiMarshallableObjectDescriptor] */

void FUN_10b02baf4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110caf110;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02bb04; end: 10b02bb4b; -[SCCVenueProfileV3Context initWithConfigs:dataProvider:venueFavoritesStore:deckHierarchy:storyHandler:subscriptionStore:trayHeightObservable:actionHandler:externalActionsObservable:] */

void FUN_10b02bb04(undefined8 param_1)

{
  func_0x00010b02c128(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b02bb4c; end: 10b02bb5f; +[SCCVenueProfileV3Context valdiMarshallableObjectDescriptor] */

void FUN_10b02bb4c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110caf158;
  param_1[1] = &PTR_DAT_110caf260;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02bb60; end: 10b02bb8b; -[SCCVenueProfileV3ExternalAction initWithPlaceId:actionType:] */

void FUN_10b02bb60(void)

{
  func_0x00010b02c14c(PTR_PTR_1127049c0);
  func_0x00010b02c128();
  return;
}



/* Entry: 10b02bb8c; end: 10b02bb9f; +[SCCVenueProfileV3ExternalAction valdiMarshallableObjectDescriptor] */

void FUN_10b02bb8c(undefined8 *param_1)

{
  *param_1 = &PTR_s_placeId_110caf2b8;
  param_1[1] = &PTR_DAT_110caf348;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02bba0; end: 10b02bbd7; -[SCCVenueProfileV3MetricsData initWithUiTapTimeMs:openSource:] */

void FUN_10b02bba0(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b02c14c(PTR_PTR_1127049c8);
  func_0x00010b02c168(auStack_20);
  return;
}



/* Entry: 10b02bbd8; end: 10b02bbeb; +[SCCVenueProfileV3MetricsData valdiMarshallableObjectDescriptor] */

void FUN_10b02bbd8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110caf358;
  param_1[1] = &PTR_DAT_110caf400;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02bbec; end: 10b02bc1f; -[SCCVenueProfileV3SessionInfo initWithPlaceSessionId:uiTapTimeMs:] */

void FUN_10b02bbec(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b02c14c(PTR_PTR_1127049d0);
  func_0x00010b02c168(auStack_20);
  return;
}



/* Entry: 10b02bc20; end: 10b02bc2f; +[SCCVenueProfileV3SessionInfo valdiMarshallableObjectDescriptor] */

void FUN_10b02bc20(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110caf410;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02bc30; end: 10b02bc57; -[SCCVenueProfileV3ViewModel initWithPlaceId:isPromoted:metricsData:] */

void FUN_10b02bc30(void)

{
  func_0x00010b02c14c(PTR_PTR_1127049d8);
  func_0x00010b02c138();
  return;
}



/* Entry: 10b02bc58; end: 10b02bc6b; +[SCCVenueProfileV3ViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b02bc58(undefined8 *param_1)

{
  *param_1 = &PTR_s_placeId_110caf470;
  param_1[1] = &PTR_DAT_110caf500;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02bc6c; end: 10b02bc9b; -[SCPlaceLinkFloatingButtonViewModel initWithButtonData:] */

void FUN_10b02bc6c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127049e0;
  uStack_20 = param_1;
  func_0x00010b02c170();
  func_0x00010b02c168(&uStack_20);
  return;
}



/* Entry: 10b02bc9c; end: 10b02bcaf; +[SCPlaceLinkFloatingButtonViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b02bc9c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110caf520;
  param_1[1] = &PTR_DAT_110caf568;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02bcb0; end: 10b02bce3; -[SCPlaceProfileSessionIds initWithMapSessionId:placeSessionId:mapViewportSessionId:] */

void FUN_10b02bcb0(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b02c14c(PTR_PTR_1127049e8);
  func_0x00010b02c168(auStack_20);
  return;
}



/* Entry: 10b02bce4; end: 10b02bcf3; +[SCPlaceProfileSessionIds valdiMarshallableObjectDescriptor] */

void FUN_10b02bce4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_mapSessionId_110caf578;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02bcf4; end: 10b02bd23; -[SCVenueETAData initWithMode:] */

void FUN_10b02bcf4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127049f0;
  uStack_20 = param_1;
  func_0x00010b02c170();
  func_0x00010b02c168(&uStack_20);
  return;
}



/* Entry: 10b02bd24; end: 10b02bd37; +[SCVenueETAData valdiMarshallableObjectDescriptor] */

void FUN_10b02bd24(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110caf608;
  param_1[1] = &PTR_DAT_110caf650;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02bd38; end: 10b02bd67; -[SCVenueLayersConfig initWithShowTicketmasterLayer:] */

void FUN_10b02bd38(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127049f8;
  uStack_20 = param_1;
  func_0x00010b02c170();
  func_0x00010b02c168(&uStack_20);
  return;
}



/* Entry: 10b02bd68; end: 10b02bd77; +[SCVenueLayersConfig valdiMarshallableObjectDescriptor] */

void FUN_10b02bd68(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110caf660;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02bd78; end: 10b02bdd7; -[SCVenueProfileContextV2 initWithNetworkingClient:venueProfileConfig:sessionIdsHolderObservable:] */

void FUN_10b02bd78(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112704a00;
  uStack_30 = param_1;
  func_0x00010b02c170();
  func_0x00010b02c168(&uStack_30);
  return;
}



/* Entry: 10b02bdd8; end: 10b02bdeb; +[SCVenueProfileContextV2 valdiMarshallableObjectDescriptor] */

void FUN_10b02bdd8(undefined8 *param_1)

{
  *param_1 = &PTR_s_networkingClient_110caf6a8;
  param_1[1] = &PTR_s_SCComposerNetworkingClientProtoc_110caf990;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02bdec; end: 10b02be1b; -[SCVenueProfileMetricsArguments initWithMetricType:providerIdentifier:] */

void FUN_10b02bdec(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704a08;
  uStack_20 = param_1;
  func_0x00010b02c170();
  func_0x00010b02c168(&uStack_20);
  return;
}



/* Entry: 10b02be1c; end: 10b02be2f; +[SCVenueProfileMetricsArguments valdiMarshallableObjectDescriptor] */

void FUN_10b02be1c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cafa58;
  param_1[1] = &PTR_DAT_110cafaa0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02be30; end: 10b02be63; -[SCVenueProfileMetricsData initWithMapZoomLevel:openSource:uiTapTimeMs:traceCookie:annotations:placesSourceType:layerSource:dropsPinId:hasMediaPin:sourceSessionId:externalLink:] */

void FUN_10b02be30(void)

{
  undefined8 in_stack_00000020;
  
  func_0x00010b02c184(in_stack_00000020);
  func_0x00010b02c128();
  return;
}



/* Entry: 10b02be64; end: 10b02be9b; -[SCVenueProfileMetricsData initWithMapZoomLevel:openSource:uiTapTimeMs:traceCookie:annotations:placesSourceType:layerSource:dropsPinId:hasMediaPin:sourceSessionId:] */

void FUN_10b02be64(void)

{
  undefined8 in_stack_00000010;
  
  func_0x00010b02c1d4(in_stack_00000010);
  func_0x00010b02c128();
  return;
}



/* Entry: 10b02be9c; end: 10b02bed3; -[SCVenueProfileMetricsData initWithMapZoomLevel:openSource:uiTapTimeMs:traceCookie:annotations:placesSourceType:layerSource:dropsPinId:hasMediaPin:] */

void FUN_10b02be9c(void)

{
  undefined8 in_stack_00000010;
  
  func_0x00010b02c184(in_stack_00000010);
  func_0x00010b02c128();
  return;
}



/* Entry: 10b02bed4; end: 10b02bf07; -[SCVenueProfileMetricsData initWithMapZoomLevel:openSource:uiTapTimeMs:traceCookie:annotations:placesSourceType:layerSource:dropsPinId:] */

void FUN_10b02bed4(void)

{
  undefined8 in_stack_00000000;
  
  func_0x00010b02c1d4(in_stack_00000000);
  func_0x00010b02c128();
  return;
}



/* Entry: 10b02bf08; end: 10b02bf33; -[SCVenueProfileMetricsData initWithMapZoomLevel:openSource:uiTapTimeMs:traceCookie:annotations:placesSourceType:layerSource:] */

void FUN_10b02bf08(void)

{
  undefined8 in_stack_00000000;
  
  func_0x00010b02c184(in_stack_00000000);
  func_0x00010b02c1a4();
  func_0x00010b02c138();
  return;
}



/* Entry: 10b02bf34; end: 10b02bf63; -[SCVenueProfileMetricsData initWithMapZoomLevel:openSource:uiTapTimeMs:traceCookie:annotations:placesSourceType:] */

void FUN_10b02bf34(void)

{
  func_0x00010b02c14c(PTR_PTR_112704a10);
  func_0x00010b02c1c4();
  func_0x00010b02c128();
  return;
}



/* Entry: 10b02bf64; end: 10b02bf93; -[SCVenueProfileMetricsData initWithMapZoomLevel:openSource:uiTapTimeMs:traceCookie:annotations:] */

void FUN_10b02bf64(void)

{
  func_0x00010b02c14c(PTR_PTR_112704a10);
  func_0x00010b02c1a4();
  func_0x00010b02c138();
  return;
}



/* Entry: 10b02bf94; end: 10b02bfc3; -[SCVenueProfileMetricsData initWithMapZoomLevel:openSource:uiTapTimeMs:traceCookie:] */

void FUN_10b02bf94(void)

{
  func_0x00010b02c14c(PTR_PTR_112704a10);
  func_0x00010b02c1c4();
  func_0x00010b02c128();
  return;
}



/* Entry: 10b02bfc4; end: 10b02bfef; -[SCVenueProfileMetricsData initWithMapZoomLevel:openSource:uiTapTimeMs:] */

void FUN_10b02bfc4(void)

{
  func_0x00010b02c14c(PTR_PTR_112704a10);
  func_0x00010b02c1a4();
  func_0x00010b02c1f4();
  func_0x00010b02c138();
  return;
}



/* Entry: 10b02bff0; end: 10b02c01b; -[SCVenueProfileMetricsData initWithMapZoomLevel:openSource:] */

void FUN_10b02bff0(void)

{
  func_0x00010b02c14c(PTR_PTR_112704a10);
  func_0x00010b02c1c4();
  func_0x00010b02c128();
  return;
}



/* Entry: 10b02c01c; end: 10b02c053; -[SCVenueProfileMetricsData initWithMapZoomLevel:] */

void FUN_10b02c01c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b02c14c(PTR_PTR_112704a10);
  func_0x00010b02c1a4();
  func_0x00010b02c1f4();
  func_0x00010b02c168(auStack_20);
  return;
}



/* Entry: 10b02c054; end: 10b02c063; +[SCVenueProfileMetricsData valdiMarshallableObjectDescriptor] */

void FUN_10b02c054(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cafab0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02c064; end: 10b02c0af; -[SCVenueProfileV2Config initWithSectionsToShow:showStoryCarousel:] */

void FUN_10b02c064(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b02c14c(PTR_PTR_112704a18);
  func_0x00010b02c1f4();
  func_0x00010b02c168(auStack_20);
  return;
}



/* Entry: 10b02c0b0; end: 10b02c0c3; +[SCVenueProfileV2Config valdiMarshallableObjectDescriptor] */

void FUN_10b02c0b0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cafbd0;
  param_1[1] = &PTR_DAT_110cafd50;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02c0c4; end: 10b02c103; -[SCVenueProfileViewModelV2 initWithPlaceId:onlyShowHeader:storyCarouselData:] */

void FUN_10b02c0c4(void)

{
  func_0x00010b02c14c(PTR_PTR_112704a20);
  func_0x00010b02c128();
  return;
}



/* Entry: 10b02c104; end: 10b02c1ff; +[SCVenueProfileViewModelV2 valdiMarshallableObjectDescriptor] */

void FUN_10b02c104(undefined8 *param_1)

{
  *param_1 = &PTR_s_placeId_110cafd60;
  param_1[1] = &PTR_DAT_110cafee0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02c200; end: 10b02c237; -[SCCAdMapsPromotedPlaceBannerComponent initWithViewModel:context:] */

void FUN_10b02c200(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704a28;
  uStack_20 = param_1;
  func_0x00010b02c400(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b02c238; end: 10b02c24b; +[SCCAdMapsPromotedPlaceBannerComponent valdiMarshallableObjectDescriptor] */

void FUN_10b02c238(undefined8 *param_1)

{
  *param_1 = &PTR_s_viewModel_110caff40;
  param_1[1] = &PTR_DAT_110caff88;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02c24c; end: 10b02c33f; -[SCCAdMapsPromotedPlaceBannerContext initWithHandleTapBrandLogo:handleTapBannerCell:handleTapAttachmentIcon:handleLongPressBanner:] */

undefined8 *
FUN_10b02c24c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar2 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  uVar3 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  puStack_48 = PTR_PTR_112704a30;
  puVar4 = &uStack_50;
  uStack_50 = param_1;
  func_0x00010b02c400(puVar4,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b02c340; end: 10b02c353; +[SCCAdMapsPromotedPlaceBannerContext valdiMarshallableObjectDescriptor] */

void FUN_10b02c340(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110caffa0;
  param_1[1] = &PTR_DAT_110cb0030;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02c354; end: 10b02c387; -[SCCAdMapsPromotedPlaceBannerOptional init] */

void FUN_10b02c354(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704a38;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b02c388; end: 10b02c39b; +[SCCAdMapsPromotedPlaceBannerOptional valdiMarshallableObjectDescriptor] */

void FUN_10b02c388(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb0048;
  param_1[1] = &PTR_DAT_110cb0078;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02c39c; end: 10b02c3d7; -[SCCAdMapsPromotedPlaceBannerViewModel initWithBannerImage:bannerTitle:venueName:venueId:] */

void FUN_10b02c39c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704a40;
  uStack_20 = param_1;
  func_0x00010b02c400(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b02c3d8; end: 10b02c407; +[SCCAdMapsPromotedPlaceBannerViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b02c3d8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cb0088;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02c408; end: 10b02c49b; -[SCCDemoTrayContext initWithLaunchRoute:close:] */

undefined8 *
FUN_10b02c408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  puStack_38 = PTR_PTR_112704a48;
  puVar2 = &uStack_40;
  uStack_40 = param_1;
  func_0x00010b02c558(puVar2,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 10b02c49c; end: 10b02c4ab; +[SCCDemoTrayContext valdiMarshallableObjectDescriptor] */

void FUN_10b02c49c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cb0100;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02c4ac; end: 10b02c4e3; -[SCCDemoTrayViewModel initWithRoute:routeParam:] */

void FUN_10b02c4ac(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704a50;
  uStack_20 = param_1;
  func_0x00010b02c558(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b02c4e4; end: 10b02c4f3; +[SCCDemoTrayViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b02c4e4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cb0148;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02c4f4; end: 10b02c53b; -[SCCTicketmasterEventInfo initWithId2:title:venueName:icon:webUrl:epochTimeSec:] */

void FUN_10b02c4f4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704a58;
  uStack_20 = param_1;
  func_0x00010b02c558(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b02c53c; end: 10b02c55f; +[SCCTicketmasterEventInfo valdiMarshallableObjectDescriptor] */

void FUN_10b02c53c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_id_110cb0190;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02c560; end: 10b02c567; -[SCCMapAnnotationAncillaryPosition__Enum init] */

void FUN_10b02c560(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,6);
  return;
}



/* Entry: 10b02c568; end: 10b02c56f; -[SCCMapAnnotationAncillaryVisibility__Enum init] */

void FUN_10b02c568(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b02c570; end: 10b02c577; -[SCCMapAnnotationShape__Enum init] */

void FUN_10b02c570(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b02c578; end: 10b02c57f; -[SCCMapBitmojiFilter__Enum init] */

void FUN_10b02c578(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b02c580; end: 10b02c587; -[SCCMapLayerInternalOptions__Enum init] */

void FUN_10b02c580(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b02c588; end: 10b02c58f; -[SCCMapLayerTrayPosition__Enum init] */

void FUN_10b02c588(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b02c590; end: 10b02c5cf; -[SCCMapAnnotation initWithIdentifier:lat:lng:styleIdentifier:] */

void FUN_10b02c590(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b02c8e8(PTR_PTR_112704a60);
  func_0x00010b02c900(auStack_20);
  return;
}



/* Entry: 10b02c5d0; end: 10b02c5e3; +[SCCMapAnnotation valdiMarshallableObjectDescriptor] */

void FUN_10b02c5d0(undefined8 *param_1)

{
  *param_1 = &PTR_s_identifier_110cb0268;
  param_1[1] = &PTR_DAT_110cb0340;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02c5e4; end: 10b02c613; -[SCCMapAnnotationAncillary initWithStyleIdentifier:] */

void FUN_10b02c5e4(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b02c8e8(PTR_PTR_112704a68);
  func_0x00010b02c900(auStack_20);
  return;
}



/* Entry: 10b02c614; end: 10b02c627; +[SCCMapAnnotationAncillary valdiMarshallableObjectDescriptor] */

void FUN_10b02c614(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cb0350;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02c628; end: 10b02c663; -[SCCMapAnnotationAncillaryStyle initWithIdentifier:position:visibility:] */

void FUN_10b02c628(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b02c8e8(PTR_PTR_112704a70);
  func_0x00010b02c900(auStack_20);
  return;
}



/* Entry: 10b02c664; end: 10b02c677; +[SCCMapAnnotationAncillaryStyle valdiMarshallableObjectDescriptor] */

void FUN_10b02c664(undefined8 *param_1)

{
  *param_1 = &PTR_s_identifier_110cb03c8;
  param_1[1] = &PTR_DAT_110cb0488;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02c678; end: 10b02c6a7; -[SCCMapAnnotationStyle initWithIdentifier:shape:width:height:] */

void FUN_10b02c678(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b02c8e8(PTR_PTR_112704a78);
  func_0x00010b02c900(auStack_20);
  return;
}



/* Entry: 10b02c6a8; end: 10b02c6bb; +[SCCMapAnnotationStyle valdiMarshallableObjectDescriptor] */

void FUN_10b02c6a8(undefined8 *param_1)

{
  *param_1 = &PTR_s_identifier_110cb04a0;
  param_1[1] = &PTR_DAT_110cb0518;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02c6bc; end: 10b02c6ef; -[SCCMapLayerApi initWithLifecycleEvents:] */

void FUN_10b02c6bc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704a80;
  uStack_20 = param_1;
  func_0x00010b02c900(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b02c6f0; end: 10b02c703; +[SCCMapLayerApi valdiMarshallableObjectDescriptor] */

void FUN_10b02c6f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb0528;
  param_1[1] = &PTR_DAT_110cb0558;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02c704; end: 10b02c723; -[SCCMapLayerHeaderSubtitleConfiguration initWithShowsSpinner:text:] */

void FUN_10b02c704(void)

{
  func_0x00010b02c8cc(PTR_PTR_112704a88);
  return;
}


