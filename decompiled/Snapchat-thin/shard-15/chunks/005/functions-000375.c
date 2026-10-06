/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bac07ec; end: 10bac0843; -[SCAUnifiedProfileCharmDetailView toProtoWithAllowedFields:] */

void FUN_10bac07ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bac0844; end: 10bac084b; -[SCAUnifiedProfileCharmDetailView getPayloadIdentifier] */

undefined8 FUN_10bac0844(void)

{
  return 0x987;
}



/* Entry: 10bac084c; end: 10bac0857; -[SCAUnifiedProfileCharmHide getEventName] */

undefined ** FUN_10bac084c(void)

{
  return &PTR____CFConstantStringClassReference_110fed8b8;
}



/* Entry: 10bac0858; end: 10bac085f; -[SCAUnifiedProfileCharmHide getEventQoS] */

undefined8 FUN_10bac0858(void)

{
  return 1;
}



/* Entry: 10bac0860; end: 10bac08df; -[SCAUnifiedProfileCharmHide setAction:] */

void FUN_10bac0860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010babcff0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac08e0; end: 10bac0903; -[SCAUnifiedProfileCharmHide getFieldNumberToFieldDict] */

void FUN_10bac08e0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac0904; end: 10bac093b; -[SCAUnifiedProfileCharmHide addToProtoDictionary] */

void FUN_10bac0904(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bac093c; end: 10bac0993; -[SCAUnifiedProfileCharmHide toProtoWithAllowedFields:] */

void FUN_10bac093c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bac0994; end: 10bac099b; -[SCAUnifiedProfileCharmHide getPayloadIdentifier] */

undefined8 FUN_10bac0994(void)

{
  return 0x988;
}



/* Entry: 10bac099c; end: 10bac09a7; -[SCAUnifiedProfileChatMediaGalleryOpenLatency getEventName] */

undefined ** FUN_10bac099c(void)

{
  return &PTR____CFConstantStringClassReference_110fed8d8;
}



/* Entry: 10bac09a8; end: 10bac09af; -[SCAUnifiedProfileChatMediaGalleryOpenLatency getEventQoS] */

undefined8 FUN_10bac09a8(void)

{
  return 2;
}



/* Entry: 10bac09b0; end: 10bac09bb; -[SCAUnifiedProfileChatMediaGalleryOpenLatency getPerUserSamplingRate] */

undefined8 FUN_10bac09b0(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bac09bc; end: 10bac0a03; -[SCAUnifiedProfileChatMediaGalleryOpenLatency setAtfThumbnailNotShownTiming:] */

void FUN_10bac09bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed8f8,2,param_3,0xb
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bac0a04; end: 10bac0a4b; -[SCAUnifiedProfileChatMediaGalleryOpenLatency setAtfThumbnailShownTiming:] */

void FUN_10bac0a04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed918,3,param_3,0xb
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bac0a4c; end: 10bac0a9f; -[SCAUnifiedProfileChatMediaGalleryOpenLatency setGallerySizeReceived:] */

void FUN_10bac0a4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed938,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac0aa0; end: 10bac0af3; -[SCAUnifiedProfileChatMediaGalleryOpenLatency setOpenLatencySec:] */

void FUN_10bac0aa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed958,7,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac0af4; end: 10bac0b3b; -[SCAUnifiedProfileChatMediaGalleryOpenLatency setThumbnailNotShownTiming:] */

void FUN_10bac0af4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed978,10,param_3,
                      0xb);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bac0b3c; end: 10bac0b83; -[SCAUnifiedProfileChatMediaGalleryOpenLatency setThumbnailShownTiming:] */

void FUN_10bac0b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed998,0xb,param_3,
                      0xb);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bac0b84; end: 10bac0ba7; -[SCAUnifiedProfileChatMediaGalleryOpenLatency getFieldNumberToFieldDict] */

void FUN_10bac0b84(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac0ba8; end: 10bac0bdf; -[SCAUnifiedProfileChatMediaGalleryOpenLatency addToProtoDictionary] */

void FUN_10bac0ba8(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bac0be0; end: 10bac0c37; -[SCAUnifiedProfileChatMediaGalleryOpenLatency toProtoWithAllowedFields:] */

void FUN_10bac0be0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bac0c38; end: 10bac0c3f; -[SCAUnifiedProfileChatMediaGalleryOpenLatency getPayloadIdentifier] */

undefined8 FUN_10bac0c38(void)

{
  return 0x989;
}



/* Entry: 10bac0c40; end: 10bac0c4b; -[SCAUnifiedProfileChatMediaSession getEventName] */

undefined ** FUN_10bac0c40(void)

{
  return &PTR____CFConstantStringClassReference_110fed9b8;
}



/* Entry: 10bac0c4c; end: 10bac0c53; -[SCAUnifiedProfileChatMediaSession getEventQoS] */

undefined8 FUN_10bac0c4c(void)

{
  return 1;
}



/* Entry: 10bac0c54; end: 10bac0cd3; -[SCAUnifiedProfileChatMediaSession setChatMediaOpenSource:] */

void FUN_10bac0c54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010babd010(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fed9d8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac0cd4; end: 10bac0d27; -[SCAUnifiedProfileChatMediaSession setLoadingScreenCount:] */

void FUN_10bac0cd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed9f8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac0d28; end: 10bac0d7b; -[SCAUnifiedProfileChatMediaSession setMediaViewCount:] */

void FUN_10bac0d28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110feda18,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac0d7c; end: 10bac0dcf; -[SCAUnifiedProfileChatMediaSession setMediaViewCountUnique:] */

void FUN_10bac0d7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110feda38,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac0dd0; end: 10bac0e23; -[SCAUnifiedProfileChatMediaSession setTimeViewedSec:] */

void FUN_10bac0dd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e724b8,10,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac0e24; end: 10bac0e47; -[SCAUnifiedProfileChatMediaSession getFieldNumberToFieldDict] */

void FUN_10bac0e24(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac0e48; end: 10bac0e7f; -[SCAUnifiedProfileChatMediaSession addToProtoDictionary] */

void FUN_10bac0e48(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bac0e80; end: 10bac0ed7; -[SCAUnifiedProfileChatMediaSession toProtoWithAllowedFields:] */

void FUN_10bac0e80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bac0ed8; end: 10bac0edf; -[SCAUnifiedProfileChatMediaSession getPayloadIdentifier] */

undefined8 FUN_10bac0ed8(void)

{
  return 0x98a;
}



/* Entry: 10bac0ee0; end: 10bac0eeb; -[SCAUnifiedProfileChatMediaView getEventName] */

undefined ** FUN_10bac0ee0(void)

{
  return &PTR____CFConstantStringClassReference_110feda58;
}



/* Entry: 10bac0eec; end: 10bac0ef3; -[SCAUnifiedProfileChatMediaView getEventQoS] */

undefined8 FUN_10bac0eec(void)

{
  return 1;
}



/* Entry: 10bac0ef4; end: 10bac0efb; -[SCAUnifiedProfileChatMediaView getPerUserSamplingRateV2] */

undefined8 FUN_10bac0ef4(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 10bac0efc; end: 10bac0f7b; -[SCAUnifiedProfileChatMediaView setChatMediaOpenSource:] */

void FUN_10bac0efc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010babd010(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fed9d8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac0f7c; end: 10bac0fcf; -[SCAUnifiedProfileChatMediaView setLoadingTimeSec:] */

void FUN_10bac0f7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110feda78,4,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac0fd0; end: 10bac104f; -[SCAUnifiedProfileChatMediaView setMediaType:] */

void FUN_10bac0fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc90ccc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110db9478,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac1050; end: 10bac10cf; -[SCAUnifiedProfileChatMediaView setMessageType:] */

void FUN_10bac1050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb02690(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dbbb58,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac10d0; end: 10bac1123; -[SCAUnifiedProfileChatMediaView setTimeViewedSec:] */

void FUN_10bac10d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e724b8,10,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac1124; end: 10bac1147; -[SCAUnifiedProfileChatMediaView getFieldNumberToFieldDict] */

void FUN_10bac1124(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac1148; end: 10bac117f; -[SCAUnifiedProfileChatMediaView addToProtoDictionary] */

void FUN_10bac1148(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bac1180; end: 10bac11d7; -[SCAUnifiedProfileChatMediaView toProtoWithAllowedFields:] */

void FUN_10bac1180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bac11d8; end: 10bac11ff; -[SCAUnifiedProfileChatMediaView getPayloadIdentifier] */

undefined8 FUN_10bac11d8(void)

{
  return 0x98b;
}



/* Entry: 10bac1200; end: 10bac120b; -[SCAAppealDialogAction getEventName] */

undefined ** FUN_10bac1200(void)

{
  return &PTR____CFConstantStringClassReference_110fedad8;
}



/* Entry: 10bac120c; end: 10bac1213; -[SCAAppealDialogAction getEventQoS] */

undefined8 FUN_10bac120c(void)

{
  return 2;
}



/* Entry: 10bac1214; end: 10bac121f; -[SCAAppealDialogAction getPerUserSamplingRate] */

undefined8 FUN_10bac1214(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bac1220; end: 10bac122b; -[SCAAppealDialogAction getPerUserSamplingRateV2] */

undefined8 FUN_10bac1220(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bac122c; end: 10bac12ab; -[SCAAppealDialogAction setAppealDialogType:] */

void FUN_10bac122c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bac11e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fedaf8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac12ac; end: 10bac12c3; -[SCAAppealDialogAction setAppealSessionId:] */

void FUN_10bac12ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa2218,3,param_3,0);
  return;
}



/* Entry: 10bac12c4; end: 10bac12c7; -[SCAAppealDialogAction getFieldNumberToFieldDict] */

void FUN_10bac12c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac12c8; end: 10bac12d3; -[SCAAppealDialogAction toProtoWithAllowedFields:] */

void FUN_10bac12c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bac12d4; end: 10bac12db; -[SCAAppealDialogAction getPayloadIdentifier] */

undefined8 FUN_10bac12d4(void)

{
  return 0x1085;
}



/* Entry: 10bac12dc; end: 10bac12e7; -[SCAAppealDialogDismiss getEventName] */

undefined ** FUN_10bac12dc(void)

{
  return &PTR____CFConstantStringClassReference_110fedb18;
}



/* Entry: 10bac12e8; end: 10bac12ef; -[SCAAppealDialogDismiss getEventQoS] */

undefined8 FUN_10bac12e8(void)

{
  return 2;
}



/* Entry: 10bac12f0; end: 10bac12fb; -[SCAAppealDialogDismiss getPerUserSamplingRate] */

undefined8 FUN_10bac12f0(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bac12fc; end: 10bac1307; -[SCAAppealDialogDismiss getPerUserSamplingRateV2] */

undefined8 FUN_10bac12fc(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bac1308; end: 10bac1387; -[SCAAppealDialogDismiss setAppealDialogType:] */

void FUN_10bac1308(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bac11e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fedaf8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac1388; end: 10bac139f; -[SCAAppealDialogDismiss setAppealSessionId:] */

void FUN_10bac1388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa2218,3,param_3,0);
  return;
}



/* Entry: 10bac13a0; end: 10bac13a3; -[SCAAppealDialogDismiss getFieldNumberToFieldDict] */

void FUN_10bac13a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac13a4; end: 10bac13af; -[SCAAppealDialogDismiss toProtoWithAllowedFields:] */

void FUN_10bac13a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bac13b0; end: 10bac13b7; -[SCAAppealDialogDismiss getPayloadIdentifier] */

undefined8 FUN_10bac13b0(void)

{
  return 0x1086;
}



/* Entry: 10bac13b8; end: 10bac13c3; -[SCAAppealDialogView getEventName] */

undefined ** FUN_10bac13b8(void)

{
  return &PTR____CFConstantStringClassReference_110fedb38;
}



/* Entry: 10bac13c4; end: 10bac13cb; -[SCAAppealDialogView getEventQoS] */

undefined8 FUN_10bac13c4(void)

{
  return 2;
}



/* Entry: 10bac13cc; end: 10bac13d7; -[SCAAppealDialogView getPerUserSamplingRate] */

undefined8 FUN_10bac13cc(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bac13d8; end: 10bac13e3; -[SCAAppealDialogView getPerUserSamplingRateV2] */

undefined8 FUN_10bac13d8(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bac13e4; end: 10bac1463; -[SCAAppealDialogView setAppealDialogType:] */

void FUN_10bac13e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bac11e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fedaf8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac1464; end: 10bac147b; -[SCAAppealDialogView setAppealSessionId:] */

void FUN_10bac1464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa2218,3,param_3,0);
  return;
}



/* Entry: 10bac147c; end: 10bac147f; -[SCAAppealDialogView getFieldNumberToFieldDict] */

void FUN_10bac147c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac1480; end: 10bac148b; -[SCAAppealDialogView toProtoWithAllowedFields:] */

void FUN_10bac1480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bac148c; end: 10bac1493; -[SCAAppealDialogView getPayloadIdentifier] */

undefined8 FUN_10bac148c(void)

{
  return 0x1088;
}



/* Entry: 10bac1494; end: 10bac149f; -[SCAAppealWebPageDismiss getEventName] */

undefined ** FUN_10bac1494(void)

{
  return &PTR____CFConstantStringClassReference_110fedb58;
}



/* Entry: 10bac14a0; end: 10bac14a7; -[SCAAppealWebPageDismiss getEventQoS] */

undefined8 FUN_10bac14a0(void)

{
  return 2;
}



/* Entry: 10bac14a8; end: 10bac14b3; -[SCAAppealWebPageDismiss getPerUserSamplingRate] */

undefined8 FUN_10bac14a8(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bac14b4; end: 10bac14bf; -[SCAAppealWebPageDismiss getPerUserSamplingRateV2] */

undefined8 FUN_10bac14b4(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bac14c0; end: 10bac153f; -[SCAAppealWebPageDismiss setAppealDialogType:] */

void FUN_10bac14c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bac11e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fedaf8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac1540; end: 10bac1557; -[SCAAppealWebPageDismiss setAppealSessionId:] */

void FUN_10bac1540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa2218,3,param_3,0);
  return;
}



/* Entry: 10bac1558; end: 10bac156f; -[SCAAppealWebPageDismiss setWebPageUrl:] */

void FUN_10bac1558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fedb78,4,param_3,0);
  return;
}



/* Entry: 10bac1570; end: 10bac1573; -[SCAAppealWebPageDismiss getFieldNumberToFieldDict] */

void FUN_10bac1570(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac1574; end: 10bac157f; -[SCAAppealWebPageDismiss toProtoWithAllowedFields:] */

void FUN_10bac1574(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bac1580; end: 10bac1587; -[SCAAppealWebPageDismiss getPayloadIdentifier] */

undefined8 FUN_10bac1580(void)

{
  return 0x1089;
}



/* Entry: 10bac1588; end: 10bac1593; -[SCAAppealWebPageView getEventName] */

undefined ** FUN_10bac1588(void)

{
  return &PTR____CFConstantStringClassReference_110fedb98;
}



/* Entry: 10bac1594; end: 10bac159b; -[SCAAppealWebPageView getEventQoS] */

undefined8 FUN_10bac1594(void)

{
  return 2;
}



/* Entry: 10bac159c; end: 10bac15a7; -[SCAAppealWebPageView getPerUserSamplingRate] */

undefined8 FUN_10bac159c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bac15a8; end: 10bac15b3; -[SCAAppealWebPageView getPerUserSamplingRateV2] */

undefined8 FUN_10bac15a8(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bac15b4; end: 10bac1633; -[SCAAppealWebPageView setAppealDialogType:] */

void FUN_10bac15b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bac11e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fedaf8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac1634; end: 10bac164b; -[SCAAppealWebPageView setAppealSessionId:] */

void FUN_10bac1634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa2218,3,param_3,0);
  return;
}



/* Entry: 10bac164c; end: 10bac1663; -[SCAAppealWebPageView setWebPageUrl:] */

void FUN_10bac164c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fedb78,4,param_3,0);
  return;
}



/* Entry: 10bac1664; end: 10bac1667; -[SCAAppealWebPageView getFieldNumberToFieldDict] */

void FUN_10bac1664(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac1668; end: 10bac1673; -[SCAAppealWebPageView toProtoWithAllowedFields:] */

void FUN_10bac1668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bac1674; end: 10bac167b; -[SCAAppealWebPageView getPayloadIdentifier] */

undefined8 FUN_10bac1674(void)

{
  return 0x108a;
}



/* Entry: 10bac167c; end: 10bac1687; -[SCASaturnStatusFeedImpression getEventName] */

undefined ** FUN_10bac167c(void)

{
  return &PTR____CFConstantStringClassReference_110fedbb8;
}



/* Entry: 10bac1688; end: 10bac168f; -[SCASaturnStatusFeedImpression getEventQoS] */

undefined8 FUN_10bac1688(void)

{
  return 1;
}



/* Entry: 10bac1690; end: 10bac16e3; -[SCASaturnStatusFeedImpression setEligibleCount:] */

void FUN_10bac1690(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fedbd8,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac16e4; end: 10bac1737; -[SCASaturnStatusFeedImpression setVisibleCellCount:] */

void FUN_10bac16e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fedbf8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac1738; end: 10bac178b; -[SCASaturnStatusFeedImpression setVisibleCount:] */

void FUN_10bac1738(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fedc18,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac178c; end: 10bac178f; -[SCASaturnStatusFeedImpression getFieldNumberToFieldDict] */

void FUN_10bac178c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac1790; end: 10bac179b; -[SCASaturnStatusFeedImpression toProtoWithAllowedFields:] */

void FUN_10bac1790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bac179c; end: 10bac17a3; -[SCASaturnStatusFeedImpression getPayloadIdentifier] */

undefined8 FUN_10bac179c(void)

{
  return 0x1800;
}


