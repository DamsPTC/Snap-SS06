/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ccc9b4; end: 106ccca4b;  */

void FUN_106ccc9b4(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccca4c; end: 106ccca53; -[SCCMapChromeLayerType__Enum init] */

void FUN_106ccca4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 106ccca54; end: 106ccca5b; -[SCCMapWeatherCondition__Enum init] */

void FUN_106ccca54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0xe);
  return;
}



/* Entry: 106ccca5c; end: 106cccb2f; -[SCCMapChromeComponentType__Enum init] */

undefined * FUN_106ccca5c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = PTR_PTR_113184af0;
  puStack_58 = PTR_PTR_113184af8;
  puStack_50 = PTR_PTR_113184b00;
  puStack_48 = PTR_PTR_113184b08;
  puStack_40 = PTR_PTR_113184b10;
  puStack_38 = PTR_PTR_113184b18;
  puStack_30 = PTR_PTR_113184b20;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000106cccd54();
  func_0x000106cccd40();
  return puVar1;
}



/* Entry: 106cccb30; end: 106cccb5f; -[SCCMapChromeLayer initWithLayerType:layerSessionId:] */

void FUN_106cccb30(void)

{
  func_0x000106cccd54();
  func_0x000106cccd40();
  return;
}



/* Entry: 106cccb60; end: 106cccb73; +[SCCMapChromeLayer valdiMarshallableObjectDescriptor] */

void FUN_106cccb60(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110972060;
  param_1[1] = &PTR_DAT_1109720a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106cccb74; end: 106cccb9f; -[SCCMapChromeLoggingMetrics initWithMapSessionId:] */

void FUN_106cccb74(void)

{
  func_0x000106cccd54();
  func_0x000106cccd40();
  return;
}



/* Entry: 106cccba0; end: 106cccbb3; +[SCCMapChromeLoggingMetrics valdiMarshallableObjectDescriptor] */

void FUN_106cccba0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_mapSessionId_1109720b8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106cccbb4; end: 106cccbeb; -[SCCMapChromeMyBitmojiData initWithUserId:] */

void FUN_106cccbb4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f65c0;
  uStack_20 = param_1;
  func_0x000106cccd54();
  func_0x000106cccd4c(&uStack_20);
  return;
}



/* Entry: 106cccbec; end: 106cccbff; +[SCCMapChromeMyBitmojiData valdiMarshallableObjectDescriptor] */

void FUN_106cccbec(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_bitmojiAvatarId_1109720e8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106cccc00; end: 106cccc37; -[SCCMapChromeVisibilityEvent initWithAttribution:] */

void FUN_106cccc00(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f65c8;
  uStack_20 = param_1;
  func_0x000106cccd54();
  func_0x000106cccd4c(&uStack_20);
  return;
}



/* Entry: 106cccc38; end: 106cccc4b; +[SCCMapChromeVisibilityEvent valdiMarshallableObjectDescriptor] */

void FUN_106cccc38(undefined8 *param_1)

{
  *param_1 = &PTR_s_attribution_110972148;
  param_1[1] = &PTR_DAT_1109721a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106cccc4c; end: 106cccc77; -[SCCMapUserLocationState initWithIsInGhostMode:isSharingLocation:] */

void FUN_106cccc4c(void)

{
  func_0x000106cccd54();
  func_0x000106cccd40();
  return;
}



/* Entry: 106cccc78; end: 106cccc8b; +[SCCMapUserLocationState valdiMarshallableObjectDescriptor] */

void FUN_106cccc78(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109721b8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106cccc8c; end: 106cccccb; -[SCCMapViewportLocalityMetadata initWithLocalizedLocality:] */

void FUN_106cccc8c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f65d8;
  uStack_20 = param_1;
  func_0x000106cccd54();
  func_0x000106cccd4c(&uStack_20);
  return;
}



/* Entry: 106cccccc; end: 106ccccdf; +[SCCMapViewportLocalityMetadata valdiMarshallableObjectDescriptor] */

void FUN_106cccccc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110972200;
  param_1[1] = &PTR_DAT_110972290;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106cccce0; end: 106cccd13; -[SCCMapViewportWeatherMetadata init] */

void FUN_106cccce0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f65e0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 106cccd14; end: 106cccd67; +[SCCMapViewportWeatherMetadata valdiMarshallableObjectDescriptor] */

void FUN_106cccd14(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109722a0;
  param_1[1] = &PTR_DAT_1109722e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106cccd68; end: 106cccd83; +[SCCCommonLocationSearchActionHandler valdiMarshallableObjectDescriptor] */

void FUN_106cccd68(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109722f8;
  param_1[1] = &PTR_DAT_110972340;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106cccd84; end: 106cccd9f; +[SCCCommonLocationSearchFriendsActionHandler valdiMarshallableObjectDescriptor] */

void FUN_106cccd84(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110972380;
  param_1[1] = 0;
  param_1[2] = &PTR_DAT_110972350;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106cccda0; end: 106cccdcb;  */

undefined8 FUN_106cccda0(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[3],*param_2,param_2[1],param_2[2]);
  return 0;
}



/* Entry: 106cccdcc; end: 106ccce2b;  */

void FUN_106cccdcc(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x000106ccd02c(FUN_106cccfb0);
  _objc_retainBlock(&puStack_48);
  func_0x000106ccd03c();
  func_0x000106ccd024();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ccce2c; end: 106ccce4f; +[SCCCommonLocationSearchPlacesActionHandler valdiMarshallableObjectDescriptor] */

void FUN_106ccce2c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109723e0;
  param_1[1] = &PTR_DAT_110972458;
  param_1[2] = &PTR_DAT_1109723b0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106ccce50; end: 106ccce83;  */

undefined8 FUN_106ccce50(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[4],*param_2,param_2[1],param_2[2],*(uint *)(param_2 + 3) & 1);
  return 0;
}



/* Entry: 106ccce84; end: 106cccee3;  */

void FUN_106ccce84(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x000106ccd02c(0x106cccfe0);
  _objc_retainBlock(&puStack_48);
  func_0x000106ccd03c();
  func_0x000106ccd024();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cccee4; end: 106ccceef; +[SCCCommonLocationSearchTray componentPath] */

undefined ** FUN_106cccee4(void)

{
  return &PTR____CFConstantStringClassReference_110e832b8;
}



/* Entry: 106cccef0; end: 106cccf23; -[SCCCommonLocationSearchTray initWithViewModel:componentContext:runtime:] */

void FUN_106cccef0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f65e8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 106cccf24; end: 106cccf6f; -[SCCCommonLocationSearchTray setViewModel:] */

void FUN_106cccf24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  func_0x000106ccd024();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cccf70; end: 106cccfaf; -[SCCCommonLocationSearchTray viewModel] */

void FUN_106cccf70(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ccd024();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106cccfb0; end: 106ccd017;  */

void FUN_106cccfb0(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106ccd018; end: 106ccd053;  */

void FUN_106ccd018(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 106ccd054; end: 106ccd077; +[SCPlacesVisualTrayActionHandler valdiMarshallableObjectDescriptor] */

void FUN_106ccd054(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109724d0;
  param_1[1] = &PTR_DAT_1109725a8;
  param_1[2] = &PTR_DAT_1109724a0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106ccd078; end: 106ccd0a3;  */

undefined8 FUN_106ccd078(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[3],*param_2,param_2[1],param_2[2]);
  return 0;
}



/* Entry: 106ccd0a4; end: 106ccd11f;  */

void FUN_106ccd0a4(undefined8 param_1)

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
  pcStack_38 = FUN_106ccd280;
  puStack_30 = &UNK_1108ee330;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  func_0x000106ccd2bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106ccd120; end: 106ccd13b; +[SCPlacesVisualTrayMetrics valdiMarshallableObjectDescriptor] */

void FUN_106ccd120(undefined8 *param_1)

{
  *param_1 = &PTR_s_blizzardLogger_1109725c8;
  param_1[1] = &PTR_s_SCCBlizzardLogging_110972640;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106ccd13c; end: 106ccd197;  */

undefined8 FUN_106ccd13c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d20e8;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  func_0x000106ccd2bc();
  return param_1;
}



/* Entry: 106ccd198; end: 106ccd1b3; +[SCPlacesVisualTrayStateCallbacks valdiMarshallableObjectDescriptor] */

void FUN_106ccd198(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110972670;
  param_1[1] = &PTR_s_SCBridgeObservable_1109726d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106ccd1b4; end: 106ccd1bf; +[SCPlacesVisualTrayResultsComponent componentPath] */

undefined ** FUN_106ccd1b4(void)

{
  return &PTR____CFConstantStringClassReference_110e832d8;
}



/* Entry: 106ccd1c0; end: 106ccd1f3; -[SCPlacesVisualTrayResultsComponent initWithViewModel:componentContext:runtime:] */

void FUN_106ccd1c0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f65f0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 106ccd1f4; end: 106ccd23f; -[SCPlacesVisualTrayResultsComponent setViewModel:] */

void FUN_106ccd1f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  func_0x000106ccd2bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ccd240; end: 106ccd27f; -[SCPlacesVisualTrayResultsComponent viewModel] */

void FUN_106ccd240(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ccd2bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106ccd280; end: 106ccd2af;  */

void FUN_106ccd280(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106ccd2b0; end: 106ccd2c3;  */

void FUN_106ccd2b0(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 106ccd2c4; end: 106ccd2cb; -[SCCommonSearchItemType__Enum init] */

void FUN_106ccd2c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,8);
  return;
}



/* Entry: 106ccd2cc; end: 106ccd2eb; -[SCCCommonLocationRecentlyViewedConfig init] */

void FUN_106ccd2cc(void)

{
  func_0x000106ccd808(PTR_PTR_1126f65f8);
  return;
}



/* Entry: 106ccd2ec; end: 106ccd2ff; +[SCCCommonLocationRecentlyViewedConfig valdiMarshallableObjectDescriptor] */

void FUN_106ccd2ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109726e8;
  param_1[1] = &PTR_s_SCBridgeObservable_110972730;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccd300; end: 106ccd39b; -[SCCCommonLocationSearchContext initWithActionHandler:getFormattedDistanceFromUser:] */

undefined8 * FUN_106ccd300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1126f6600;
  uStack_40 = param_1;
  func_0x000106ccd7fc();
  puVar1 = &uStack_40;
  func_0x000106ccd7f4(puVar1);
  _objc_release(param_3);
  func_0x000106ccd81c();
  return puVar1;
}



/* Entry: 106ccd39c; end: 106ccd3cf; +[SCCCommonLocationSearchContext valdiMarshallableObjectDescriptor] */

void FUN_106ccd39c(undefined8 *param_1)

{
  *param_1 = &PTR_s_actionHandler_110972778;
  param_1[1] = &PTR_DAT_110972928;
  param_1[2] = &PTR_DAT_110972748;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccd3d0; end: 106ccd44b;  */

void FUN_106ccd3d0(undefined8 param_1)

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
  pcStack_38 = FUN_106ccd794;
  puStack_30 = &UNK_110901610;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  func_0x000106ccd81c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106ccd44c; end: 106ccd473; -[SCCCommonLocationSearchFriendBadgeInfo initWithBadgeType:] */

void FUN_106ccd44c(void)

{
  func_0x000106ccd7e4(PTR_PTR_1126f6608);
  func_0x000106ccd7cc();
  return;
}



/* Entry: 106ccd474; end: 106ccd487; +[SCCCommonLocationSearchFriendBadgeInfo valdiMarshallableObjectDescriptor] */

void FUN_106ccd474(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110972980;
  param_1[1] = &PTR_DAT_1109729e0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccd488; end: 106ccd5ab; -[SCCCommonLocationSearchFriendConfig initWithLocationStore:friendStore:storySummaryInfoStore:storyPlayer:nativeUserStoryFetcher:getFriendBadgeInfo:getFriendLocationContextObservable:actionHandler:] */

undefined8 *
FUN_106ccd488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_9;
  _objc_retainBlock();
  _objc_release(param_9);
  puStack_68 = PTR_PTR_1126f6610;
  uStack_70 = param_1;
  func_0x000106ccd7fc();
  puVar2 = &uStack_70;
  func_0x000106ccd7f4(puVar2);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x000106ccd81c();
  _objc_release(uVar1);
  _objc_release(param_8);
  return puVar2;
}



/* Entry: 106ccd5ac; end: 106ccd5bf; +[SCCCommonLocationSearchFriendConfig valdiMarshallableObjectDescriptor] */

void FUN_106ccd5ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109729f8;
  param_1[1] = &PTR_DAT_110972ad0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccd5c0; end: 106ccd5f3; -[SCCCommonLocationSearchFriendLocationContext initWithFriendId:locationContext:] */

void FUN_106ccd5c0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f6618;
  uStack_20 = param_1;
  func_0x000106ccd7fc();
  func_0x000106ccd7f4(&uStack_20);
  return;
}



/* Entry: 106ccd5f4; end: 106ccd607; +[SCCCommonLocationSearchFriendLocationContext valdiMarshallableObjectDescriptor] */

void FUN_106ccd5f4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_friendId_110972b20;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccd608; end: 106ccd62f; -[SCCCommonLocationSearchPivotConfig initWithFootstepsPivotVisibilityObservable:actionHandler:] */

void FUN_106ccd608(void)

{
  func_0x000106ccd7e4(PTR_PTR_1126f6620);
  func_0x000106ccd7cc();
  return;
}



/* Entry: 106ccd630; end: 106ccd643; +[SCCCommonLocationSearchPivotConfig valdiMarshallableObjectDescriptor] */

void FUN_106ccd630(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110972b68;
  param_1[1] = &PTR_s_SCBridgeObservable_110972bc8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccd644; end: 106ccd677; -[SCCCommonLocationSearchTrayViewModel initWithSearchType:] */

void FUN_106ccd644(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f6628;
  uStack_20 = param_1;
  func_0x000106ccd7fc();
  func_0x000106ccd7f4(&uStack_20);
  return;
}



/* Entry: 106ccd678; end: 106ccd68b; +[SCCCommonLocationSearchTrayViewModel valdiMarshallableObjectDescriptor] */

void FUN_106ccd678(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_searchQuery_110972be0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccd68c; end: 106ccd6ab; -[SCCCommonLocationSuggestedPlacesConfig init] */

void FUN_106ccd68c(void)

{
  func_0x000106ccd808(PTR_PTR_1126f6630);
  return;
}



/* Entry: 106ccd6ac; end: 106ccd6bf; +[SCCCommonLocationSuggestedPlacesConfig valdiMarshallableObjectDescriptor] */

void FUN_106ccd6ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110972c28;
  param_1[1] = &PTR_s_SCBridgeObservable_110972c70;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccd6c0; end: 106ccd6f7; -[SCCPlaceSelectionUpdate initWithName:emoji:alertType:] */

void FUN_106ccd6c0(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000106ccd7e4(PTR_PTR_1126f6638);
  func_0x000106ccd7f4(auStack_20);
  return;
}



/* Entry: 106ccd6f8; end: 106ccd70b; +[SCCPlaceSelectionUpdate valdiMarshallableObjectDescriptor] */

void FUN_106ccd6f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110972c88;
  param_1[1] = &PTR_DAT_110972d18;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccd70c; end: 106ccd73b; -[SCCRecentlyViewedSearchItem initWithKey:] */

void FUN_106ccd70c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000106ccd7e4(PTR_PTR_1126f6640);
  func_0x000106ccd7f4(auStack_20);
  return;
}



/* Entry: 106ccd73c; end: 106ccd74f; +[SCCRecentlyViewedSearchItem valdiMarshallableObjectDescriptor] */

void FUN_106ccd73c(undefined8 *param_1)

{
  *param_1 = &PTR_s_key_110972d28;
  param_1[1] = &PTR_DAT_110972da0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccd750; end: 106ccd77f; -[SCCSuggestedPlaceSearchItem initWithKey:placeDiscovery:] */

void FUN_106ccd750(void)

{
  func_0x000106ccd7e4(PTR_PTR_1126f6648);
  func_0x000106ccd7cc();
  return;
}



/* Entry: 106ccd780; end: 106ccd793; +[SCCSuggestedPlaceSearchItem valdiMarshallableObjectDescriptor] */

void FUN_106ccd780(undefined8 *param_1)

{
  *param_1 = &PTR_s_key_110972db8;
  param_1[1] = &PTR_DAT_110972e48;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccd794; end: 106ccd7bb;  */

void FUN_106ccd794(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106ccd7bc; end: 106ccd833;  */

void FUN_106ccd7bc(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccd834; end: 106ccd83b; -[SCPlacesVisualTrayEventType__Enum init] */

void FUN_106ccd834(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,6);
  return;
}



/* Entry: 106ccd83c; end: 106ccd843; -[SCVisualTrayLoadState__Enum init] */

void FUN_106ccd83c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 106ccd844; end: 106ccd84b; -[SCVisualTrayScrollState__Enum init] */

void FUN_106ccd844(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,6);
  return;
}



/* Entry: 106ccd84c; end: 106ccd983; -[SCPlacesVisualTrayEventDataKeys__Enum init] */

undefined ** FUN_106ccd84c(undefined **param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110daf5b8;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110e832f8;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110e83318;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e83338;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e83358;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e83378;
  puStack_80 = PTR_PTR_113184b28;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e04638;
  puStack_70 = PTR_PTR_113184b30;
  puStack_68 = PTR_PTR_113184b38;
  puStack_60 = PTR_PTR_113184b40;
  puStack_58 = PTR_PTR_113184b48;
  puStack_50 = PTR_PTR_113184b50;
  puStack_48 = PTR_PTR_113184b58;
  puStack_40 = PTR_PTR_113184b60;
  puStack_38 = PTR_PTR_113184b68;
  puStack_30 = PTR_PTR_113184b70;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_b0,0x11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_106ccd984;
  puStack_c8 = PTR_PTR_1126f6650;
  puStack_d0 = puVar1;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x000106ccdd00();
  ppuVar2 = &puStack_d0;
  func_0x000106ccdcf0(ppuVar2);
  return ppuVar2;
}



/* Entry: 106ccd984; end: 106ccd9b7; -[SCPlacesVisualTrayEvent initWithEventType:] */

void FUN_106ccd984(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f6650;
  uStack_20 = param_1;
  func_0x000106ccdd00();
  func_0x000106ccdcf0(&uStack_20);
  return;
}



/* Entry: 106ccd9b8; end: 106ccd9cb; +[SCPlacesVisualTrayEvent valdiMarshallableObjectDescriptor] */

void FUN_106ccd9b8(undefined8 *param_1)

{
  *param_1 = &PTR_s_eventType_110972e60;
  param_1[1] = &PTR_DAT_110972ea8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccd9cc; end: 106ccdae3; -[SCPlacesVisualTrayResultsContext initWithComposerVenueFavoritesStore:actionHandler:storyHandler:visualTrayStateCallbacks:visualTrayMetrics:getCurrentMapState:getFormattedDistanceToLocation:] */

undefined8 *
FUN_106ccd9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_9;
  _objc_retainBlock();
  _objc_release(param_9);
  puStack_68 = PTR_PTR_1126f6658;
  uStack_70 = param_1;
  func_0x000106ccdd00();
  puVar2 = &uStack_70;
  func_0x000106ccdcf0(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_8);
  return puVar2;
}



/* Entry: 106ccdae4; end: 106ccdb17; +[SCPlacesVisualTrayResultsContext valdiMarshallableObjectDescriptor] */

void FUN_106ccdae4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110972ee8;
  param_1[1] = &PTR_DAT_110972fc0;
  param_1[2] = &PTR_DAT_110972eb8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccdb18; end: 106ccdb97;  */

void FUN_106ccdb18(undefined8 param_1)

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
  pcStack_38 = FUN_106ccdc9c;
  puStack_30 = &UNK_110901610;
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



/* Entry: 106ccdb98; end: 106ccdbcf; -[SCPlacesVisualTrayResultsModel initWithPivot:] */

void FUN_106ccdb98(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f6660;
  uStack_20 = param_1;
  func_0x000106ccdd00();
  func_0x000106ccdcf0(&uStack_20);
  return;
}



/* Entry: 106ccdbd0; end: 106ccdbe3; +[SCPlacesVisualTrayResultsModel valdiMarshallableObjectDescriptor] */

void FUN_106ccdbd0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110973000;
  param_1[1] = &PTR_DAT_110973060;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccdbe4; end: 106ccdc1f; -[SCPlacesVisualTraySessionIds initWithMapSessionId:traySessionId:viewportSessionId:visualTrayViewportSessionId:visualTrayNetworkViewportSessionId:] */

void FUN_106ccdbe4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f6668;
  uStack_20 = param_1;
  func_0x000106ccdd00();
  func_0x000106ccdcf0(&uStack_20);
  return;
}



/* Entry: 106ccdc20; end: 106ccdc33; +[SCPlacesVisualTraySessionIds valdiMarshallableObjectDescriptor] */

void FUN_106ccdc20(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_mapSessionId_110973080;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccdc34; end: 106ccdc53; -[SCVisualTrayConfigs init] */

void FUN_106ccdc34(void)

{
  func_0x000106ccdcdc(PTR_PTR_1126f6670);
  return;
}



/* Entry: 106ccdc54; end: 106ccdc67; +[SCVisualTrayConfigs valdiMarshallableObjectDescriptor] */

void FUN_106ccdc54(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110973110;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccdc68; end: 106ccdc87; -[SCVisualTrayMapState init] */

void FUN_106ccdc68(void)

{
  func_0x000106ccdcdc(PTR_PTR_1126f6678);
  return;
}



/* Entry: 106ccdc88; end: 106ccdc9b; +[SCVisualTrayMapState valdiMarshallableObjectDescriptor] */

void FUN_106ccdc88(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110973158;
  param_1[1] = &PTR_DAT_1109731b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccdc9c; end: 106ccdcc3;  */

void FUN_106ccdc9c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106ccdcc4; end: 106ccdd0b;  */

void FUN_106ccdcc4(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccdd0c; end: 106ccdd6b; -[SCCMapReactionChatCardContext initWithOnTap:] */

undefined8 * FUN_106ccdd0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retainBlock();
  puStack_28 = PTR_PTR_1126f6680;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  func_0x000106cce018(puVar1,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106ccdd6c; end: 106ccdd7f; +[SCCMapReactionChatCardContext valdiMarshallableObjectDescriptor] */

void FUN_106ccdd6c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109731d0;
  param_1[1] = &PTR_DAT_110973248;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccdd80; end: 106ccddb3; -[SCCMapReactionChatCardViewModel initWithEmoji:thumbnailUrl:] */

void FUN_106ccdd80(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000106cce020(PTR_PTR_1126f6688);
  func_0x000106cce018(auStack_20);
  return;
}



/* Entry: 106ccddb4; end: 106ccddc7; +[SCCMapReactionChatCardViewModel valdiMarshallableObjectDescriptor] */

void FUN_106ccddb4(undefined8 *param_1)

{
  *param_1 = &PTR_s_emoji_110973268;
  param_1[1] = &PTR_s_SCBridgeObservable_1109732f8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccddc8; end: 106ccddf3; -[SCCMapReactionEmoji initWithEmoji:] */

void FUN_106ccddc8(void)

{
  func_0x000106cce020(PTR_PTR_1126f6690);
  func_0x000106cce000();
  return;
}



/* Entry: 106ccddf4; end: 106ccde07; +[SCCMapReactionEmoji valdiMarshallableObjectDescriptor] */

void FUN_106ccddf4(undefined8 *param_1)

{
  *param_1 = &PTR_s_emoji_110973318;
  param_1[1] = &PTR_DAT_110973378;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccde08; end: 106ccde3f; -[SCCMapReactionEmojiCollection initWithEmojis:] */

void FUN_106ccde08(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f6698;
  uStack_20 = param_1;
  func_0x000106cce018(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 106ccde40; end: 106ccde53; +[SCCMapReactionEmojiCollection valdiMarshallableObjectDescriptor] */

void FUN_106ccde40(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110973388;
  param_1[1] = &PTR_DAT_1109733d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccde54; end: 106ccdeeb; -[SCCMapReactionEmojiPickerContext initWithActionSheetPresenter:availableEmojiCollections:onEmojiSelected:] */

undefined8 *
FUN_106ccde54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1126f66a0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x000106cce018(puVar1,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 106ccdeec; end: 106ccdeff; +[SCCMapReactionEmojiPickerContext valdiMarshallableObjectDescriptor] */

void FUN_106ccdeec(undefined8 *param_1)

{
  *param_1 = &PTR_s_actionSheetPresenter_1109733e0;
  param_1[1] = &PTR_s_SCComposerFoundationActionSheetP_110973440;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccdf00; end: 106ccdf23; -[SCCMapReactionEmojiPickerViewModel init] */

void FUN_106ccdf00(void)

{
  func_0x000106cce030(PTR_PTR_1126f66a8);
  return;
}



/* Entry: 106ccdf24; end: 106ccdf37; +[SCCMapReactionEmojiPickerViewModel valdiMarshallableObjectDescriptor] */

void FUN_106ccdf24(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10ddeddf8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


