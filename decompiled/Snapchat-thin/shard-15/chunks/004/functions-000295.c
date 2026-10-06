/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba5aa10; end: 10ba5aa8f; -[SCAFilterFilterSwipe setMediaType:] */

void FUN_10ba5aa10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc90ccc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110db9478,0x14,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5aa90; end: 10ba5aaa7; -[SCAFilterFilterSwipe setSnapSessionId:] */

void FUN_10ba5aa90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e445d8,0x15,param_3,0);
  return;
}



/* Entry: 10ba5aaa8; end: 10ba5aabf; -[SCAFilterFilterSwipe setPostCaptureCarouselSessionId:] */

void FUN_10ba5aaa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb3e18,0x1f,param_3,0);
  return;
}



/* Entry: 10ba5aac0; end: 10ba5aae3; -[SCAFilterFilterSwipe getFieldNumberToFieldDict] */

void FUN_10ba5aac0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba5aae4; end: 10ba5ab1b; -[SCAFilterFilterSwipe addToProtoDictionary] */

void FUN_10ba5aae4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba5ab1c; end: 10ba5ab73; -[SCAFilterFilterSwipe toProtoWithAllowedFields:] */

void FUN_10ba5ab1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,4,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba5ab74; end: 10ba5ab7b; -[SCAFilterFilterSwipe getPayloadIdentifier] */

undefined8 FUN_10ba5ab74(void)

{
  return 0x390;
}



/* Entry: 10ba5ab7c; end: 10ba5ab87; -[SCAFriendmojiPickerClose getEventName] */

undefined ** FUN_10ba5ab7c(void)

{
  return &PTR____CFConstantStringClassReference_110e6cd78;
}



/* Entry: 10ba5ab88; end: 10ba5ab8f; -[SCAFriendmojiPickerClose getEventQoS] */

undefined8 FUN_10ba5ab88(void)

{
  return 1;
}



/* Entry: 10ba5ab90; end: 10ba5ab9b; -[SCAFriendmojiPickerClose getPerUserSamplingRateV2] */

undefined8 FUN_10ba5ab90(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba5ab9c; end: 10ba5abb3; -[SCAFriendmojiPickerClose setFriendmojiPickerStickerId:] */

void FUN_10ba5ab9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd23b8,2,param_3,0);
  return;
}



/* Entry: 10ba5abb4; end: 10ba5abcb; -[SCAFriendmojiPickerClose setMischiefId:] */

void FUN_10ba5abb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e1f9b8,3,param_3,0);
  return;
}



/* Entry: 10ba5abcc; end: 10ba5abe3; -[SCAFriendmojiPickerClose setSnapSessionId:] */

void FUN_10ba5abcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e445d8,4,param_3,0);
  return;
}



/* Entry: 10ba5abe4; end: 10ba5ac63; -[SCAFriendmojiPickerClose setSource:] */

void FUN_10ba5abe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba53df0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5ac64; end: 10ba5ace3; -[SCAFriendmojiPickerClose setStickerFriendmojiType:] */

void FUN_10ba5ac64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba53e10(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fd23d8,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5ace4; end: 10ba5ace7; -[SCAFriendmojiPickerClose getFieldNumberToFieldDict] */

void FUN_10ba5ace4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba5ace8; end: 10ba5acf3; -[SCAFriendmojiPickerClose toProtoWithAllowedFields:] */

void FUN_10ba5ace8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba5acf4; end: 10ba5acfb; -[SCAFriendmojiPickerClose getPayloadIdentifier] */

undefined8 FUN_10ba5acf4(void)

{
  return 0x3b9;
}



/* Entry: 10ba5acfc; end: 10ba5ad07; -[SCAGallerySaveStart getEventName] */

undefined ** FUN_10ba5acfc(void)

{
  return &PTR____CFConstantStringClassReference_110fd23f8;
}



/* Entry: 10ba5ad08; end: 10ba5ad0f; -[SCAGallerySaveStart getEventQoS] */

undefined8 FUN_10ba5ad08(void)

{
  return 1;
}



/* Entry: 10ba5ad10; end: 10ba5ad27; -[SCAGallerySaveStart setCaptureSessionId:] */

void FUN_10ba5ad10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ea05f8,2,param_3,0);
  return;
}



/* Entry: 10ba5ad28; end: 10ba5ad2b; -[SCAGallerySaveStart getFieldNumberToFieldDict] */

void FUN_10ba5ad28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba5ad2c; end: 10ba5ad37; -[SCAGallerySaveStart toProtoWithAllowedFields:] */

void FUN_10ba5ad2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba5ad38; end: 10ba5ad3f; -[SCAGallerySaveStart getPayloadIdentifier] */

undefined8 FUN_10ba5ad38(void)

{
  return 0x3f5;
}



/* Entry: 10ba5ad40; end: 10ba5ad4b; -[SCAGeofilterCameraMusicDetect getEventName] */

undefined ** FUN_10ba5ad40(void)

{
  return &PTR____CFConstantStringClassReference_110fd2418;
}



/* Entry: 10ba5ad4c; end: 10ba5ad53; -[SCAGeofilterCameraMusicDetect getEventQoS] */

undefined8 FUN_10ba5ad4c(void)

{
  return 1;
}



/* Entry: 10ba5ad54; end: 10ba5ad5f; -[SCAGeofilterCameraMusicDetect getPerUserSamplingRateV2] */

undefined8 FUN_10ba5ad54(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba5ad60; end: 10ba5ad77; -[SCAGeofilterCameraMusicDetect setArtistName:] */

void FUN_10ba5ad60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd1db8,2,param_3,0);
  return;
}



/* Entry: 10ba5ad78; end: 10ba5adf7; -[SCAGeofilterCameraMusicDetect setCameraOrientation:] */

void FUN_10ba5ad78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb0a564(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fd1dd8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5adf8; end: 10ba5ae0f; -[SCAGeofilterCameraMusicDetect setFilterGeolensId:] */

void FUN_10ba5adf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ea1ef8,4,param_3,0);
  return;
}



/* Entry: 10ba5ae10; end: 10ba5ae63; -[SCAGeofilterCameraMusicDetect setLatency:] */

void FUN_10ba5ae10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110db8578,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5ae64; end: 10ba5ae7b; -[SCAGeofilterCameraMusicDetect setSongTitle:] */

void FUN_10ba5ae64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd1e18,6,param_3,0);
  return;
}



/* Entry: 10ba5ae7c; end: 10ba5aefb; -[SCAGeofilterCameraMusicDetect setSource:] */

void FUN_10ba5ae7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31264(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5aefc; end: 10ba5aeff; -[SCAGeofilterCameraMusicDetect getFieldNumberToFieldDict] */

void FUN_10ba5aefc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba5af00; end: 10ba5af0b; -[SCAGeofilterCameraMusicDetect toProtoWithAllowedFields:] */

void FUN_10ba5af00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba5af0c; end: 10ba5af13; -[SCAGeofilterCameraMusicDetect getPayloadIdentifier] */

undefined8 FUN_10ba5af0c(void)

{
  return 0x436;
}



/* Entry: 10ba5af14; end: 10ba5af1f; -[SCAGeofilterCarouselSession getEventName] */

undefined ** FUN_10ba5af14(void)

{
  return &PTR____CFConstantStringClassReference_110fd2438;
}



/* Entry: 10ba5af20; end: 10ba5af27; -[SCAGeofilterCarouselSession getEventQoS] */

undefined8 FUN_10ba5af20(void)

{
  return 1;
}



/* Entry: 10ba5af28; end: 10ba5af33; -[SCAGeofilterCarouselSession getPerUserSamplingRate] */

undefined8 FUN_10ba5af28(void)

{
  return 0x3f847ae147ae147b;
}



/* Entry: 10ba5af34; end: 10ba5af3f; -[SCAGeofilterCarouselSession getPerUserSamplingRateV2] */

undefined8 FUN_10ba5af34(void)

{
  return 0x3f847ae147ae147b;
}



/* Entry: 10ba5af40; end: 10ba5af57; -[SCAGeofilterCarouselSession setLoadedGeofilterIds:] */

void FUN_10ba5af40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd2458,2,param_3,0);
  return;
}



/* Entry: 10ba5af58; end: 10ba5af6f; -[SCAGeofilterCarouselSession setResponseGeofilterIds:] */

void FUN_10ba5af58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd2478,3,param_3,0);
  return;
}



/* Entry: 10ba5af70; end: 10ba5af87; -[SCAGeofilterCarouselSession setSnapSessionId:] */

void FUN_10ba5af70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e445d8,4,param_3,0);
  return;
}



/* Entry: 10ba5af88; end: 10ba5af8b; -[SCAGeofilterCarouselSession getFieldNumberToFieldDict] */

void FUN_10ba5af88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba5af8c; end: 10ba5af97; -[SCAGeofilterCarouselSession toProtoWithAllowedFields:] */

void FUN_10ba5af8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba5af98; end: 10ba5af9f; -[SCAGeofilterCarouselSession getPayloadIdentifier] */

undefined8 FUN_10ba5af98(void)

{
  return 0x438;
}



/* Entry: 10ba5afa0; end: 10ba5afab; -[SCAGeofilterDirectSnapSave getEventName] */

undefined ** FUN_10ba5afa0(void)

{
  return &PTR____CFConstantStringClassReference_110fd2498;
}



/* Entry: 10ba5afac; end: 10ba5afb3; -[SCAGeofilterDirectSnapSave getEventQoS] */

undefined8 FUN_10ba5afac(void)

{
  return 1;
}



/* Entry: 10ba5afb4; end: 10ba5afcb; -[SCAGeofilterDirectSnapSave setAdsnapPlacementId:] */

void FUN_10ba5afb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fab678,2,param_3,0);
  return;
}



/* Entry: 10ba5afcc; end: 10ba5b01f; -[SCAGeofilterDirectSnapSave setDeviceScore:] */

void FUN_10ba5afcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110f42b98,0x1d,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5b020; end: 10ba5b037; -[SCAGeofilterDirectSnapSave setEncGeoData:] */

void FUN_10ba5b020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f23db8,0x20,param_3,0);
  return;
}



/* Entry: 10ba5b038; end: 10ba5b04f; -[SCAGeofilterDirectSnapSave setFilterGeofilterId:] */

void FUN_10ba5b038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ea1f18,0x28,param_3,0);
  return;
}



/* Entry: 10ba5b050; end: 10ba5b067; -[SCAGeofilterDirectSnapSave setFilterGeolensId:] */

void FUN_10ba5b050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ea1ef8,0x29,param_3,0);
  return;
}



/* Entry: 10ba5b068; end: 10ba5b0bb; -[SCAGeofilterDirectSnapSave setFilterIndexCount:] */

void FUN_10ba5b068(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd22d8,0x2a,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5b0bc; end: 10ba5b10f; -[SCAGeofilterDirectSnapSave setFilterIndexPos:] */

void FUN_10ba5b0bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd22f8,0x2b,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5b110; end: 10ba5b18f; -[SCAGeofilterDirectSnapSave setFilterSource:] */

void FUN_10ba5b110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf9be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fd24b8,0x2f,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5b190; end: 10ba5b1a7; -[SCAGeofilterDirectSnapSave setLensOptionId:] */

void FUN_10ba5b190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f55758,0x3e,param_3,0);
  return;
}



/* Entry: 10ba5b1a8; end: 10ba5b227; -[SCAGeofilterDirectSnapSave setLensSource:] */

void FUN_10ba5b1a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb000e4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110f557f8,0x3f,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5b228; end: 10ba5b23f; -[SCAGeofilterDirectSnapSave setSnapSessionId:] */

void FUN_10ba5b228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e445d8,0x51,param_3,0);
  return;
}



/* Entry: 10ba5b240; end: 10ba5b293; -[SCAGeofilterDirectSnapSave setStickerGeoBitmojiCount:] */

void FUN_10ba5b240(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd24d8,0x67,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5b294; end: 10ba5b2e7; -[SCAGeofilterDirectSnapSave setStickerGeoBitmojiFromRecentsCount:] */

void FUN_10ba5b294(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd24f8,0x68,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5b2e8; end: 10ba5b2ff; -[SCAGeofilterDirectSnapSave setStickerGeoBitmojiList:] */

void FUN_10ba5b2e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd2518,0x69,param_3,0);
  return;
}



/* Entry: 10ba5b300; end: 10ba5b37f; -[SCAGeofilterDirectSnapSave setCheckinSourceType:] */

void FUN_10ba5b300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba53cfc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2538,0x8f,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5b380; end: 10ba5b3d3; -[SCAGeofilterDirectSnapSave setDistanceFromSnapMeters:] */

void FUN_10ba5b380(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2558,0x90,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5b3d4; end: 10ba5b3eb; -[SCAGeofilterDirectSnapSave setVenueId:] */

void FUN_10ba5b3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ed8a38,0x91,param_3,0);
  return;
}



/* Entry: 10ba5b3ec; end: 10ba5b403; -[SCAGeofilterDirectSnapSave setSponsoredLensAdId:] */

void FUN_10ba5b3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbbc98,0xa2,param_3,0);
  return;
}



/* Entry: 10ba5b404; end: 10ba5b483; -[SCAGeofilterDirectSnapSave setSponsoredType:] */

void FUN_10ba5b404(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb13614(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fae338,0xa3,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5b484; end: 10ba5b49b; -[SCAGeofilterDirectSnapSave setLensSessionId:] */

void FUN_10ba5b484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fae358,0xa4,param_3,0);
  return;
}



/* Entry: 10ba5b49c; end: 10ba5b4b3; -[SCAGeofilterDirectSnapSave setPostCaptureCarouselSessionId:] */

void FUN_10ba5b49c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb3e18,0xab,param_3,0);
  return;
}



/* Entry: 10ba5b4b4; end: 10ba5b4cb; -[SCAGeofilterDirectSnapSave setFilterVenueId:] */

void FUN_10ba5b4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fcb118,0xb2,param_3,0);
  return;
}



/* Entry: 10ba5b4cc; end: 10ba5b4ef; -[SCAGeofilterDirectSnapSave getFieldNumberToFieldDict] */

void FUN_10ba5b4cc(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba5b4f0; end: 10ba5b527; -[SCAGeofilterDirectSnapSave addToProtoDictionary] */

void FUN_10ba5b4f0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba5b528; end: 10ba5b57f; -[SCAGeofilterDirectSnapSave toProtoWithAllowedFields:] */

void FUN_10ba5b528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,0x18,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba5b580; end: 10ba5b587; -[SCAGeofilterDirectSnapSave getPayloadIdentifier] */

undefined8 FUN_10ba5b580(void)

{
  return 0x43b;
}



/* Entry: 10ba5b588; end: 10ba5b593; -[SCAGeofilterStickerPickerPick getEventName] */

undefined ** FUN_10ba5b588(void)

{
  return &PTR____CFConstantStringClassReference_110fd25d8;
}



/* Entry: 10ba5b594; end: 10ba5b59b; -[SCAGeofilterStickerPickerPick getEventQoS] */

undefined8 FUN_10ba5b594(void)

{
  return 1;
}



/* Entry: 10ba5b59c; end: 10ba5b5bf; -[SCAGeofilterStickerPickerPick getFieldNumberToFieldDict] */

void FUN_10ba5b59c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba5b5c0; end: 10ba5b5f7; -[SCAGeofilterStickerPickerPick addToProtoDictionary] */

void FUN_10ba5b5c0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba5b5f8; end: 10ba5b64f; -[SCAGeofilterStickerPickerPick toProtoWithAllowedFields:] */

void FUN_10ba5b5f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba5b650; end: 10ba5b657; -[SCAGeofilterStickerPickerPick getPayloadIdentifier] */

undefined8 FUN_10ba5b650(void)

{
  return 0x458;
}



/* Entry: 10ba5b658; end: 10ba5b663; -[SCAGeofilterVisualContextClassify getEventName] */

undefined ** FUN_10ba5b658(void)

{
  return &PTR____CFConstantStringClassReference_110fd26b8;
}



/* Entry: 10ba5b664; end: 10ba5b66b; -[SCAGeofilterVisualContextClassify getEventQoS] */

undefined8 FUN_10ba5b664(void)

{
  return 1;
}



/* Entry: 10ba5b66c; end: 10ba5b683; -[SCAGeofilterVisualContextClassify setClassificationResults:] */

void FUN_10ba5b66c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd26d8,2,param_3,0);
  return;
}



/* Entry: 10ba5b684; end: 10ba5b6d7; -[SCAGeofilterVisualContextClassify setClassificationTimeSec:] */

void FUN_10ba5b684(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd26f8,3,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5b6d8; end: 10ba5b6ef; -[SCAGeofilterVisualContextClassify setModelId:] */

void FUN_10ba5b6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd2718,4,param_3,0);
  return;
}



/* Entry: 10ba5b6f0; end: 10ba5b707; -[SCAGeofilterVisualContextClassify setSnapSessionId:] */

void FUN_10ba5b6f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e445d8,5,param_3,0);
  return;
}



/* Entry: 10ba5b708; end: 10ba5b70b; -[SCAGeofilterVisualContextClassify getFieldNumberToFieldDict] */

void FUN_10ba5b708(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba5b70c; end: 10ba5b717; -[SCAGeofilterVisualContextClassify toProtoWithAllowedFields:] */

void FUN_10ba5b70c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba5b718; end: 10ba5b71f; -[SCAGeofilterVisualContextClassify getPayloadIdentifier] */

undefined8 FUN_10ba5b718(void)

{
  return 0x45d;
}



/* Entry: 10ba5b720; end: 10ba5b72b; -[SCAGeolensDirectSnapCreate getEventName] */

undefined ** FUN_10ba5b720(void)

{
  return &PTR____CFConstantStringClassReference_110fd2738;
}



/* Entry: 10ba5b72c; end: 10ba5b733; -[SCAGeolensDirectSnapCreate getEventQoS] */

undefined8 FUN_10ba5b72c(void)

{
  return 1;
}



/* Entry: 10ba5b734; end: 10ba5b787; -[SCAGeolensDirectSnapCreate setCamera:] */

void FUN_10ba5b734(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dad4b8,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5b788; end: 10ba5b7db; -[SCAGeolensDirectSnapCreate setCaption:] */

void FUN_10ba5b788(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e2a618,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5b7dc; end: 10ba5b82f; -[SCAGeolensDirectSnapCreate setDrawing:] */

void FUN_10ba5b7dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e29718,4,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5b830; end: 10ba5b883; -[SCAGeolensDirectSnapCreate setFaceBackCameraCount:] */

void FUN_10ba5b830(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110f55778,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5b884; end: 10ba5b8d7; -[SCAGeolensDirectSnapCreate setFaceFrontCameraCount:] */

void FUN_10ba5b884(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110f55798,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5b8d8; end: 10ba5b8ef; -[SCAGeolensDirectSnapCreate setFilter:] */

void FUN_10ba5b8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e27f18,7,param_3,0);
  return;
}



/* Entry: 10ba5b8f0; end: 10ba5b907; -[SCAGeolensDirectSnapCreate setFilterGeofence:] */

void FUN_10ba5b8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110faf798,8,param_3,0);
  return;
}



/* Entry: 10ba5b908; end: 10ba5b91f; -[SCAGeolensDirectSnapCreate setFilterGeolensId:] */

void FUN_10ba5b908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ea1ef8,9,param_3,0);
  return;
}



/* Entry: 10ba5b920; end: 10ba5b99f; -[SCAGeolensDirectSnapCreate setFilterInfo:] */

void FUN_10ba5b920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf9a14(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e27f38,10,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


