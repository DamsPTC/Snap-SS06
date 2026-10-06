/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bac17a4; end: 10bac17af; -[SCASaturnStatusTap getEventName] */

undefined ** FUN_10bac17a4(void)

{
  return &PTR____CFConstantStringClassReference_110fedc38;
}



/* Entry: 10bac17b0; end: 10bac17b7; -[SCASaturnStatusTap getEventQoS] */

undefined8 FUN_10bac17b0(void)

{
  return 1;
}



/* Entry: 10bac17b8; end: 10bac1837; -[SCASaturnStatusTap setPageType:] */

void FUN_10bac17b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc9107c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dcad78,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac1838; end: 10bac184f; -[SCASaturnStatusTap setTargetUserId:] */

void FUN_10bac1838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fedc58,3,param_3,0);
  return;
}



/* Entry: 10bac1850; end: 10bac18a3; -[SCASaturnStatusTap setCellViewPosition:] */

void FUN_10bac1850(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcc658,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac18a4; end: 10bac18a7; -[SCASaturnStatusTap getFieldNumberToFieldDict] */

void FUN_10bac18a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac18a8; end: 10bac18b3; -[SCASaturnStatusTap toProtoWithAllowedFields:] */

void FUN_10bac18a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bac18b4; end: 10bac191b; -[SCASaturnStatusTap getPayloadIdentifier] */

undefined8 FUN_10bac18b4(void)

{
  return 0x177d;
}



/* Entry: 10bac191c; end: 10bac1927; -[SCAGeofilterGeofilterSwipe getEventName] */

undefined ** FUN_10bac191c(void)

{
  return &PTR____CFConstantStringClassReference_110fedeb8;
}



/* Entry: 10bac1928; end: 10bac192f; -[SCAGeofilterGeofilterSwipe getEventQoS] */

undefined8 FUN_10bac1928(void)

{
  return 1;
}



/* Entry: 10bac1930; end: 10bac1947; -[SCAGeofilterGeofilterSwipe setAdsnapPlacementId:] */

void FUN_10bac1930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fab678,2,param_3,0);
  return;
}



/* Entry: 10bac1948; end: 10bac19c7; -[SCAGeofilterGeofilterSwipe setAttachmentType:] */

void FUN_10bac1948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc90ccc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110f27358,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac19c8; end: 10bac1a4f; -[SCAGeofilterGeofilterSwipe setCachedDate:] */

/* WARNING: Possible PIC construction at 0x00010bac1a18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bac1a1c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10bac19c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x00010c26f320(param_3);
    func_0x00010c0df720(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fdd5f8,4,puVar1,5);
  return;
}



/* Entry: 10bac1a50; end: 10bac1aa3; -[SCAGeofilterGeofilterSwipe setCachedTimeSec:] */

void FUN_10bac1a50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fdd618,5,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac1aa4; end: 10bac1af7; -[SCAGeofilterGeofilterSwipe setCamera:] */

void FUN_10bac1aa4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dad4b8,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac1af8; end: 10bac1b0f; -[SCAGeofilterGeofilterSwipe setCaptureSessionId:] */

void FUN_10bac1af8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ea05f8,7,param_3,0);
  return;
}



/* Entry: 10bac1b10; end: 10bac1b27; -[SCAGeofilterGeofilterSwipe setDynamicContextSourceList:] */

void FUN_10bac1b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fdd638,10,param_3,0);
  return;
}



/* Entry: 10bac1b28; end: 10bac1b3f; -[SCAGeofilterGeofilterSwipe setEncGeoData:] */

void FUN_10bac1b28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f23db8,0xc,param_3,0);
  return;
}



/* Entry: 10bac1b40; end: 10bac1b57; -[SCAGeofilterGeofilterSwipe setFilterGeofilterId:] */

void FUN_10bac1b40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ea1f18,0xe,param_3,0);
  return;
}



/* Entry: 10bac1b58; end: 10bac1bd7; -[SCAGeofilterGeofilterSwipe setFilterSource:] */

void FUN_10bac1b58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf9be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fd24b8,0x13,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac1bd8; end: 10bac1bef; -[SCAGeofilterGeofilterSwipe setFilterVenueId:] */

void FUN_10bac1bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fcb118,0x14,param_3,0);
  return;
}



/* Entry: 10bac1bf0; end: 10bac1c6f; -[SCAGeofilterGeofilterSwipe setGeofilterGeofilterType:] */

void FUN_10bac1bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bafe2cc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110feded8,0x15,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac1c70; end: 10bac1cc3; -[SCAGeofilterGeofilterSwipe setIsCached:] */

void FUN_10bac1c70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e1cb78,0x16,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac1cc4; end: 10bac1d17; -[SCAGeofilterGeofilterSwipe setIsGeofilterFromPrecache:] */

void FUN_10bac1cc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fedef8,0x17,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac1d18; end: 10bac1d97; -[SCAGeofilterGeofilterSwipe setMediaType:] */

void FUN_10bac1d18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc90ccc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110db9478,0x19,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac1d98; end: 10bac1e17; -[SCAGeofilterGeofilterSwipe setPrecacheStatus:] */

void FUN_10bac1d98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb08254(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb27f8,0x1a,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac1e18; end: 10bac1e2f; -[SCAGeofilterGeofilterSwipe setSnapSessionId:] */

void FUN_10bac1e18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e445d8,0x1b,param_3,0);
  return;
}



/* Entry: 10bac1e30; end: 10bac1e83; -[SCAGeofilterGeofilterSwipe setUpdateAttemptCount:] */

void FUN_10bac1e30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fedf18,0x22,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac1e84; end: 10bac1e9b; -[SCAGeofilterGeofilterSwipe setVenueFilterArray:] */

void FUN_10bac1e84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fedf38,0x23,param_3,0);
  return;
}



/* Entry: 10bac1e9c; end: 10bac1eef; -[SCAGeofilterGeofilterSwipe setVenueTapIndex:] */

void FUN_10bac1e9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fdd658,0x24,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac1ef0; end: 10bac1f07; -[SCAGeofilterGeofilterSwipe setWidgetValueList:] */

void FUN_10bac1ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb2e58,0x26,param_3,0);
  return;
}



/* Entry: 10bac1f08; end: 10bac1f5b; -[SCAGeofilterGeofilterSwipe setWithAttachmentOpen:] */

void FUN_10bac1f08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd7538,0x27,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac1f5c; end: 10bac1faf; -[SCAGeofilterGeofilterSwipe setWithGeofilterTransition:] */

void FUN_10bac1f5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fdd678,0x28,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac1fb0; end: 10bac2003; -[SCAGeofilterGeofilterSwipe setWithGeolocation:] */

void FUN_10bac1fb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbbc58,0x29,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac2004; end: 10bac2083; -[SCAGeofilterGeofilterSwipe setProductMediaType:] */

void FUN_10bac2004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb09134(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110f0d3b8,0x2b,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac2084; end: 10bac20a7; -[SCAGeofilterGeofilterSwipe getFieldNumberToFieldDict] */

void FUN_10bac2084(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac20a8; end: 10bac20df; -[SCAGeofilterGeofilterSwipe addToProtoDictionary] */

void FUN_10bac20a8(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bac20e0; end: 10bac2137; -[SCAGeofilterGeofilterSwipe toProtoWithAllowedFields:] */

void FUN_10bac20e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,6,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bac2138; end: 10bac213f; -[SCAGeofilterGeofilterSwipe getPayloadIdentifier] */

undefined8 FUN_10bac2138(void)

{
  return 0x442;
}



/* Entry: 10bac2140; end: 10bac214b; -[SCAGeofilterOndemandAbandonmentSurveyResponse getEventName] */

undefined ** FUN_10bac2140(void)

{
  return &PTR____CFConstantStringClassReference_110fedf58;
}



/* Entry: 10bac214c; end: 10bac2153; -[SCAGeofilterOndemandAbandonmentSurveyResponse getEventQoS] */

undefined8 FUN_10bac214c(void)

{
  return 1;
}



/* Entry: 10bac2154; end: 10bac215f; -[SCAGeofilterOndemandAbandonmentSurveyResponse getPerUserSamplingRateV2] */

undefined8 FUN_10bac2154(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bac2160; end: 10bac2177; -[SCAGeofilterOndemandAbandonmentSurveyResponse setSurveyResponse:] */

void FUN_10bac2160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fedf78,9,param_3,0);
  return;
}



/* Entry: 10bac2178; end: 10bac219b; -[SCAGeofilterOndemandAbandonmentSurveyResponse getFieldNumberToFieldDict] */

void FUN_10bac2178(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac219c; end: 10bac21d3; -[SCAGeofilterOndemandAbandonmentSurveyResponse addToProtoDictionary] */

void FUN_10bac219c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bac21d4; end: 10bac222b; -[SCAGeofilterOndemandAbandonmentSurveyResponse toProtoWithAllowedFields:] */

void FUN_10bac21d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bac222c; end: 10bac2233; -[SCAGeofilterOndemandAbandonmentSurveyResponse getPayloadIdentifier] */

undefined8 FUN_10bac222c(void)

{
  return 0x44c;
}



/* Entry: 10bac2234; end: 10bac223f; -[SCAGeofilterOndemandAutoReview getEventName] */

undefined ** FUN_10bac2234(void)

{
  return &PTR____CFConstantStringClassReference_110fedfb8;
}



/* Entry: 10bac2240; end: 10bac2247; -[SCAGeofilterOndemandAutoReview getEventQoS] */

undefined8 FUN_10bac2240(void)

{
  return 1;
}



/* Entry: 10bac2248; end: 10bac2253; -[SCAGeofilterOndemandAutoReview getPerUserSamplingRateV2] */

undefined8 FUN_10bac2248(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bac2254; end: 10bac226b; -[SCAGeofilterOndemandAutoReview setAutoApprovalStatus:] */

void FUN_10bac2254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fedfd8,3,param_3,0);
  return;
}



/* Entry: 10bac226c; end: 10bac2283; -[SCAGeofilterOndemandAutoReview setAutoRejectionCode:] */

void FUN_10bac226c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fedff8,4,param_3,0);
  return;
}



/* Entry: 10bac2284; end: 10bac229b; -[SCAGeofilterOndemandAutoReview setAutoUndecidedCode:] */

void FUN_10bac2284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee018,5,param_3,0);
  return;
}



/* Entry: 10bac229c; end: 10bac22b3; -[SCAGeofilterOndemandAutoReview setPreRenderingAssetStructureId:] */

void FUN_10bac229c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee038,9,param_3,0);
  return;
}



/* Entry: 10bac22b4; end: 10bac2307; -[SCAGeofilterOndemandAutoReview setUserCanMakePayments:] */

void FUN_10bac22b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fee058,0xd,puVar1,1)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac2308; end: 10bac232b; -[SCAGeofilterOndemandAutoReview getFieldNumberToFieldDict] */

void FUN_10bac2308(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac232c; end: 10bac2363; -[SCAGeofilterOndemandAutoReview addToProtoDictionary] */

void FUN_10bac232c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bac2364; end: 10bac23bb; -[SCAGeofilterOndemandAutoReview toProtoWithAllowedFields:] */

void FUN_10bac2364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bac23bc; end: 10bac23c3; -[SCAGeofilterOndemandAutoReview getPayloadIdentifier] */

undefined8 FUN_10bac23bc(void)

{
  return 0x44d;
}



/* Entry: 10bac23c4; end: 10bac23cf; -[SCAGeofilterOndemandCameraNotification getEventName] */

undefined ** FUN_10bac23c4(void)

{
  return &PTR____CFConstantStringClassReference_110fee078;
}



/* Entry: 10bac23d0; end: 10bac23d7; -[SCAGeofilterOndemandCameraNotification getEventQoS] */

undefined8 FUN_10bac23d0(void)

{
  return 1;
}



/* Entry: 10bac23d8; end: 10bac23e3; -[SCAGeofilterOndemandCameraNotification getPerUserSamplingRateV2] */

undefined8 FUN_10bac23d8(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bac23e4; end: 10bac23fb; -[SCAGeofilterOndemandCameraNotification setLineItemId:] */

void FUN_10bac23e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa9758,3,param_3,0);
  return;
}



/* Entry: 10bac23fc; end: 10bac241f; -[SCAGeofilterOndemandCameraNotification getFieldNumberToFieldDict] */

void FUN_10bac23fc(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac2420; end: 10bac2457; -[SCAGeofilterOndemandCameraNotification addToProtoDictionary] */

void FUN_10bac2420(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bac2458; end: 10bac24af; -[SCAGeofilterOndemandCameraNotification toProtoWithAllowedFields:] */

void FUN_10bac2458(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bac24b0; end: 10bac24b7; -[SCAGeofilterOndemandCameraNotification getPayloadIdentifier] */

undefined8 FUN_10bac24b0(void)

{
  return 0x44e;
}



/* Entry: 10bac24b8; end: 10bac24c3; -[SCAGeofilterOndemandDeeplink getEventName] */

undefined ** FUN_10bac24b8(void)

{
  return &PTR____CFConstantStringClassReference_110fee098;
}



/* Entry: 10bac24c4; end: 10bac24cb; -[SCAGeofilterOndemandDeeplink getEventQoS] */

undefined8 FUN_10bac24c4(void)

{
  return 1;
}



/* Entry: 10bac24cc; end: 10bac24d7; -[SCAGeofilterOndemandDeeplink getPerUserSamplingRateV2] */

undefined8 FUN_10bac24cc(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bac24d8; end: 10bac24ef; -[SCAGeofilterOndemandDeeplink setScCampaign:] */

void FUN_10bac24d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee0b8,8,param_3,0);
  return;
}



/* Entry: 10bac24f0; end: 10bac2507; -[SCAGeofilterOndemandDeeplink setScContent:] */

void FUN_10bac24f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee0d8,9,param_3,0);
  return;
}



/* Entry: 10bac2508; end: 10bac251f; -[SCAGeofilterOndemandDeeplink setScMedium:] */

void FUN_10bac2508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee0f8,10,param_3,0);
  return;
}



/* Entry: 10bac2520; end: 10bac2537; -[SCAGeofilterOndemandDeeplink setScSource:] */

void FUN_10bac2520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee118,0xb,param_3,0);
  return;
}



/* Entry: 10bac2538; end: 10bac255b; -[SCAGeofilterOndemandDeeplink getFieldNumberToFieldDict] */

void FUN_10bac2538(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac255c; end: 10bac2593; -[SCAGeofilterOndemandDeeplink addToProtoDictionary] */

void FUN_10bac255c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bac2594; end: 10bac25eb; -[SCAGeofilterOndemandDeeplink toProtoWithAllowedFields:] */

void FUN_10bac2594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bac25ec; end: 10bac25f3; -[SCAGeofilterOndemandDeeplink getPayloadIdentifier] */

undefined8 FUN_10bac25ec(void)

{
  return 0x44f;
}



/* Entry: 10bac25f4; end: 10bac25ff; -[SCAGeofilterOndemandDisplayedError getEventName] */

undefined ** FUN_10bac25f4(void)

{
  return &PTR____CFConstantStringClassReference_110fee138;
}



/* Entry: 10bac2600; end: 10bac2607; -[SCAGeofilterOndemandDisplayedError getEventQoS] */

undefined8 FUN_10bac2600(void)

{
  return 1;
}



/* Entry: 10bac2608; end: 10bac261f; -[SCAGeofilterOndemandDisplayedError setAction:] */

void FUN_10bac2608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110daf5b8,2,param_3,0);
  return;
}



/* Entry: 10bac2620; end: 10bac2637; -[SCAGeofilterOndemandDisplayedError setErrorReason:] */

void FUN_10bac2620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f24978,4,param_3,0);
  return;
}



/* Entry: 10bac2638; end: 10bac265b; -[SCAGeofilterOndemandDisplayedError getFieldNumberToFieldDict] */

void FUN_10bac2638(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac265c; end: 10bac2693; -[SCAGeofilterOndemandDisplayedError addToProtoDictionary] */

void FUN_10bac265c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bac2694; end: 10bac26eb; -[SCAGeofilterOndemandDisplayedError toProtoWithAllowedFields:] */

void FUN_10bac2694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bac26ec; end: 10bac26f3; -[SCAGeofilterOndemandDisplayedError getPayloadIdentifier] */

undefined8 FUN_10bac26ec(void)

{
  return 0x450;
}



/* Entry: 10bac26f4; end: 10bac2707; -[SCAGeofilterOndemandEventBase setAdAccountId:] */

void FUN_10bac26f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110fc1db8,param_3,0);
  return;
}



/* Entry: 10bac2708; end: 10bac271b; -[SCAGeofilterOndemandEventBase setOdgSessionId:] */

void FUN_10bac2708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110fedf98,param_3,0);
  return;
}



/* Entry: 10bac271c; end: 10bac2797; -[SCAGeofilterOndemandEventBase setPageName:] */

void FUN_10bac271c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bac18dc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b860(param_1,param_2,&PTR____CFConstantStringClassReference_110eeb598,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac2798; end: 10bac27e7; -[SCAGeofilterOndemandEventBase setPageSequenceId:] */

void FUN_10bac2798(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fb1a58,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac27e8; end: 10bac2863; -[SCAGeofilterOndemandEventBase setProductType:] */

void FUN_10bac27e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bac18fc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b860(param_1,param_2,&PTR____CFConstantStringClassReference_110dd1fb8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac2864; end: 10bac2877; -[SCAGeofilterOndemandEventBase setReferrer:] */

void FUN_10bac2864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110dcbe78,param_3,0);
  return;
}



/* Entry: 10bac2878; end: 10bac288b; -[SCAGeofilterOndemandEventBase setSource:] */

void FUN_10bac2878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110dae8d8,param_3,0);
  return;
}



/* Entry: 10bac288c; end: 10bac2897; -[SCAGeofilterOndemandMobilePayment getEventName] */

undefined ** FUN_10bac288c(void)

{
  return &PTR____CFConstantStringClassReference_110fee158;
}



/* Entry: 10bac2898; end: 10bac289f; -[SCAGeofilterOndemandMobilePayment getEventQoS] */

undefined8 FUN_10bac2898(void)

{
  return 1;
}



/* Entry: 10bac28a0; end: 10bac28ab; -[SCAGeofilterOndemandMobilePayment getPerUserSamplingRateV2] */

undefined8 FUN_10bac28a0(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bac28ac; end: 10bac28c3; -[SCAGeofilterOndemandMobilePayment setErrorReason:] */

void FUN_10bac28ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f24978,3,param_3,0);
  return;
}



/* Entry: 10bac28c4; end: 10bac2917; -[SCAGeofilterOndemandMobilePayment setIsPurchased:] */

void FUN_10bac28c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fee178,4,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac2918; end: 10bac292f; -[SCAGeofilterOndemandMobilePayment setLineItemId:] */

void FUN_10bac2918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa9758,5,param_3,0);
  return;
}



/* Entry: 10bac2930; end: 10bac2983; -[SCAGeofilterOndemandMobilePayment setOfferAmountValue:] */

void FUN_10bac2930(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fee198,7,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


