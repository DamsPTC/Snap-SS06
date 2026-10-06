/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bbad544; end: 10bbad597; -[SCADirectSnapSend setScanResponseTimestampMs:] */

void FUN_10bbad544(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce3f8,0xdd,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbad598; end: 10bbad5af; -[SCADirectSnapSend setScanResultId:] */

void FUN_10bbad598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbbf78,0xde,param_3,0);
  return;
}



/* Entry: 10bbad5b0; end: 10bbad5c7; -[SCADirectSnapSend setSnapcodeSessionId:] */

void FUN_10bbad5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fce418,0xdf,param_3,0);
  return;
}



/* Entry: 10bbad5c8; end: 10bbad5df; -[SCADirectSnapSend setRecordingSpeed:] */

void FUN_10bbad5c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e43818,0xe0,param_3,0);
  return;
}



/* Entry: 10bbad5e0; end: 10bbad5f7; -[SCADirectSnapSend setSponsoredLensAdId:] */

void FUN_10bbad5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbbc98,0xe4,param_3,0);
  return;
}



/* Entry: 10bbad5f8; end: 10bbad677; -[SCADirectSnapSend setSponsoredType:] */

void FUN_10bbad5f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb13614(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fae338,0xe5,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbad678; end: 10bbad68f; -[SCADirectSnapSend setLensSessionId:] */

void FUN_10bbad678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fae358,0xe6,param_3,0);
  return;
}



/* Entry: 10bbad690; end: 10bbad6d7; -[SCADirectSnapSend setMultiCamModeParams:] */

void FUN_10bbad690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce438,0xe8,param_3,
                      6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbad6d8; end: 10bbad71f; -[SCADirectSnapSend setGreenScreenModeParams:] */

void FUN_10bbad6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce458,0xe9,param_3,
                      6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbad720; end: 10bbad773; -[SCADirectSnapSend setBrightnessValue:] */

void FUN_10bbad720(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dc9a98,0xea,puVar1,2
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbad774; end: 10bbad78b; -[SCADirectSnapSend setScanHistorySessionId:] */

void FUN_10bbad774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fce478,0xeb,param_3,0);
  return;
}



/* Entry: 10bbad78c; end: 10bbad7a3; -[SCADirectSnapSend setDetailedCameraModes:] */

void FUN_10bbad78c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fba5b8,0xed,param_3,0);
  return;
}



/* Entry: 10bbad7a4; end: 10bbad7f7; -[SCADirectSnapSend setIsMultiFrameCapture:] */

void FUN_10bbad7a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce498,0xef,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbad7f8; end: 10bbad83f; -[SCADirectSnapSend setAudioMixingOptions:] */

void FUN_10bbad7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce4b8,0xf0,param_3,
                      6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbad840; end: 10bbad893; -[SCADirectSnapSend setIsStreakRestoreReply:] */

void FUN_10bbad840(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce4d8,0xf3,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbad894; end: 10bbad8e7; -[SCADirectSnapSend setExpiredStreakCount:] */

void FUN_10bbad894(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce4f8,0xf4,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbad8e8; end: 10bbad967; -[SCADirectSnapSend setLensType:] */

void FUN_10bbad8e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb00884(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110df8398,0xf5,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbad968; end: 10bbad9bb; -[SCADirectSnapSend setWithCtlensEffect:] */

void FUN_10bbad968(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce518,0xf6,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbad9bc; end: 10bbada0f; -[SCADirectSnapSend setWithMagicEraser:] */

void FUN_10bbad9bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce538,0xf7,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbada10; end: 10bbada63; -[SCADirectSnapSend setRingFlashAutoEnable:] */

void FUN_10bbada10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbb478,0xf9,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbada64; end: 10bbadab7; -[SCADirectSnapSend setRingFlashTooltipShown:] */

void FUN_10bbada64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbb498,0xfa,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbadab8; end: 10bbadaff; -[SCADirectSnapSend setRemixCameraModeParams:] */

void FUN_10bbadab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce558,0xfb,param_3,
                      6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbadb00; end: 10bbadb53; -[SCADirectSnapSend setRecoveredSnap:] */

void FUN_10bbadb00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce578,0xfc,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbadb54; end: 10bbadc3b; -[SCADirectSnapSend setMediaSources:] */

void FUN_10bbadb54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10bbadc3c;
  puStack_40 = &UNK_1108709c0;
  puStack_38 = puVar2;
  _objc_retain();
  func_0x00010bf97e80(param_3,param_2,&puStack_58);
  uVar1 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fba638,0x100,puVar2,
                      10,uVar1);
  _objc_release(uVar1);
  _objc_release(puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10bbadc3c; end: 10bbadc8f;  */

void FUN_10bbadc3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10bb1396c(param_2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbadc90; end: 10bbadcd7; -[SCADirectSnapSend setLensTools:] */

void FUN_10bbadc90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce598,0x101,param_3
                      ,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbadcd8; end: 10bbadd2b; -[SCADirectSnapSend setRemixAllowed:] */

void FUN_10bbadcd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce5b8,0x106,puVar1,
                      1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbadd2c; end: 10bbadd43; -[SCADirectSnapSend setRealTimeScanObjectsSessionId:] */

void FUN_10bbadd2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fce5d8,0x107,param_3,0);
  return;
}



/* Entry: 10bbadd44; end: 10bbadd97; -[SCADirectSnapSend setTextToSpeechCount:] */

void FUN_10bbadd44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce5f8,0x108,puVar1,
                      4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbadd98; end: 10bbaddaf; -[SCADirectSnapSend setLensTabSessionId:] */

void FUN_10bbadd98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fce618,0x109,param_3,0);
  return;
}



/* Entry: 10bbaddb0; end: 10bbade03; -[SCADirectSnapSend setIncludeCaptionOnPresent:] */

void FUN_10bbaddb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce638,0x10a,puVar1,
                      1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbade04; end: 10bbade4b; -[SCADirectSnapSend setMagicCaptionData:] */

void FUN_10bbade04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce658,0x10b,param_3
                      ,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbade4c; end: 10bbadecb; -[SCADirectSnapSend setBackCameraDeviceType:] */

void FUN_10bbade4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31160(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fce678,0x10d,puVar1,
                      3,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbadecc; end: 10bbadf1f; -[SCADirectSnapSend setCameraLensPosition:] */

void FUN_10bbadecc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce698,0x10f,puVar1,
                      2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbadf20; end: 10bbadf9f; -[SCADirectSnapSend setContentLossReason:] */

void FUN_10bbadf20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf2bd0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fba2d8,0x112,puVar1,
                      3,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbadfa0; end: 10bbadfe7; -[SCADirectSnapSend setEelMessageMetadata:] */

void FUN_10bbadfa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcce78,0x113,param_3
                      ,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbadfe8; end: 10bbae02f; -[SCADirectSnapSend setLensCommonDataList:] */

void FUN_10bbadfe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcd0b8,0x115,param_3
                      ,0xd);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbae030; end: 10bbae047; -[SCADirectSnapSend setCommunityId:] */

void FUN_10bbae030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f9ee98,0x116,param_3,0);
  return;
}



/* Entry: 10bbae048; end: 10bbae09b; -[SCADirectSnapSend setIsCommunity:] */

void FUN_10bbae048(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcca38,0x117,puVar1,
                      1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbae09c; end: 10bbae0e3; -[SCADirectSnapSend setZoomFactorsPillParams:] */

void FUN_10bbae09c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce6b8,0x11d,param_3
                      ,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbae0e4; end: 10bbae0fb; -[SCADirectSnapSend setGallerySendId:] */

void FUN_10bbae0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fce6d8,0x11e,param_3,0);
  return;
}



/* Entry: 10bbae0fc; end: 10bbae14f; -[SCADirectSnapSend setIsBatchSend:] */

void FUN_10bbae0fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce6f8,0x11f,puVar1,
                      1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbae150; end: 10bbae1cf; -[SCADirectSnapSend setMemoriesSendSource:] */

void FUN_10bbae150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb02530(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fccf18,0x120,puVar1,
                      3,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbae1d0; end: 10bbae24f; -[SCADirectSnapSend setSnapSendSource:] */

void FUN_10bbae1d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb10de8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fce718,0x121,puVar1,
                      3,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbae250; end: 10bbae2a3; -[SCADirectSnapSend setIsAspectRatioButtonActivated:] */

void FUN_10bbae250(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbb758,0x122,puVar1,
                      1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbae2a4; end: 10bbae323; -[SCADirectSnapSend setInChatSource:] */

void FUN_10bbae2a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bafeee8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fce738,0x124,puVar1,
                      3,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbae324; end: 10bbae3a3; -[SCADirectSnapSend setReplyCta:] */

void FUN_10bbae324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb09b0c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fce758,0x125,puVar1,
                      3,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbae3a4; end: 10bbae3f7; -[SCADirectSnapSend setFeedCellPosition:] */

void FUN_10bbae3a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fccf38,0x126,puVar1,
                      4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbae3f8; end: 10bbae43f; -[SCADirectSnapSend setMotionData:] */

void FUN_10bbae3f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce778,0x128,param_3
                      ,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbae440; end: 10bbae493; -[SCADirectSnapSend setIsContinuousCapture:] */

void FUN_10bbae440(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb37f8,0x131,puVar1,
                      1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbae494; end: 10bbae4ab; -[SCADirectSnapSend setFreemiumGroupId:] */

void FUN_10bbae494(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fce798,0x132,param_3,0);
  return;
}



/* Entry: 10bbae4ac; end: 10bbae4c3; -[SCADirectSnapSend setSendToSessionId:] */

void FUN_10bbae4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fce7b8,0x133,param_3,0);
  return;
}



/* Entry: 10bbae4c4; end: 10bbae517; -[SCADirectSnapSend setIsLensPostCaptureLocked:] */

void FUN_10bbae4c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbbcf8,0x134,puVar1,
                      1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbae518; end: 10bbae52f; -[SCADirectSnapSend setLensPostCaptureLockReason:] */

void FUN_10bbae518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbbd18,0x135,param_3,0);
  return;
}



/* Entry: 10bbae530; end: 10bbae583; -[SCADirectSnapSend setHasSaturnStatusVisible:] */

void FUN_10bbae530(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcd078,0x136,puVar1,
                      1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbae584; end: 10bbae603; -[SCADirectSnapSend setTemplateSource:] */

void FUN_10bbae584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bafc3ec(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fce7d8,0x137,puVar1,
                      3,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbae604; end: 10bbae64b; -[SCADirectSnapSend setSponsoredSnapChatMetadata:] */

void FUN_10bbae604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcd058,0x13a,param_3
                      ,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbae64c; end: 10bbae69f; -[SCADirectSnapSend setIsFanPass:] */

void FUN_10bbae64c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce7f8,0x13b,puVar1,
                      1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbae6a0; end: 10bbae6f3; -[SCADirectSnapSend setIsSnapBack:] */

void FUN_10bbae6a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb38d8,0x142,puVar1,
                      1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbae6f4; end: 10bbae70b; -[SCADirectSnapSend setCreativeToolsEditSessionId:] */

void FUN_10bbae6f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fce818,0x143,param_3,0);
  return;
}



/* Entry: 10bbae70c; end: 10bbaed33; -[SCADirectSnapSend prepareDictionary:] */

void FUN_10bbae70c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(lVar1);
    lVar3 = lVar1;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar5 = *plStack_120;
      do {
        lVar6 = 0;
        do {
          if (*plStack_120 != lVar5) {
            _objc_enumerationMutation(lVar1);
          }
          uVar4 = *(undefined8 *)(lStack_128 + lVar6 * 8);
          func_0x00010bf0a640(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(uVar4);
          lVar6 = lVar6 + 1;
        } while (lVar3 != lVar6);
        lVar3 = lVar1;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar1);
    func_0x00010c1d0640(param_3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar3 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar3 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar3 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar3 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar3 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar3 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar3 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar3 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar3 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar3 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar3 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar3 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  puStack_138 = PTR_PTR_11270d218;
  uStack_140 = param_1;
  _objc_msgSendSuper2(&uStack_140,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbaed34; end: 10bbaed57; -[SCADirectSnapSend getFieldNumberToFieldDict] */

void FUN_10bbaed34(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbaed58; end: 10bbaed8f; -[SCADirectSnapSend addToProtoDictionary] */

void FUN_10bbaed58(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bbaed90; end: 10bbaede7; -[SCADirectSnapSend toProtoWithAllowedFields:] */

void FUN_10bbaed90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,0x29,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bbaede8; end: 10bbaedef; -[SCADirectSnapSend getPayloadIdentifier] */

undefined8 FUN_10bbaede8(void)

{
  return 0x2e1;
}



/* Entry: 10bbaedf0; end: 10bbb4d1b; -[SCADirectSnapSendBase fromDictionary:] */

/* WARNING: Possible PIC construction at 0x00010bbb4d68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bbb4d6c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10bbaedf0(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uStack_278;
  undefined *puStack_270;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_270 = PTR_PTR_11270d220;
  uStack_278 = param_1;
  _objc_msgSendSuper2(&uStack_278,PTR_s_fromDictionary__1125cc478,param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010bf655e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161fc0(param_1);
    _objc_release(puVar6);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c167960(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c167e60(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c167f20(param_1);
    _objc_release(lVar1);
  }
  puVar6 = PTR_PTR_1126c06b8;
  _objc_alloc(PTR_PTR_1126c06b8);
  func_0x00010c00c560();
  func_0x00010c16a460(param_1);
  _objc_release(puVar6);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c16c4e0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c16cc40(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c16cd40(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c173fa0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c173fc0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c173fe0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c174020(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c174040(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c174060(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c174080(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c176040(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10baee48c();
    func_0x00010c1769e0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c178460(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c178480(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1784a0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1785c0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c178660(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c178680(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1786a0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c178740(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar4);
        }
        uVar2 = param_1;
        func_0x00010be45600();
        if ((uVar2 & 1) == 0) {
          func_0x00010befa120(puVar6);
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    func_0x00010c178760(param_1);
    _objc_release(puVar6);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c178920(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c178ae0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c178b80(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c178bc0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10baef60c();
    func_0x00010c17b2a0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c17b2c0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c17cda0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c17d120(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c182f20(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c182f60(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c182fa0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c182fc0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c183000(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c1833c0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c184440(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c184460(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c1844c0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar4);
        }
        uVar2 = param_1;
        func_0x00010be45600();
        if ((uVar2 & 1) == 0) {
          func_0x00010befa120(puVar6);
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    func_0x00010c1861a0(param_1);
    _objc_release(puVar6);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bb03000();
    func_0x00010c18b9e0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c191960(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c191a80(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c196e40(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c196e60(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c196e80(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c196ea0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c196ec0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c199a40(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c199b20(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c199cc0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10baf9a34();
    func_0x00010c19c1c0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10baf9b44();
    func_0x00010c19c2c0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c19c460(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10baf9d64();
    func_0x00010c19c760(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c19c7a0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c19c7c0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c19daa0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c19fd00(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1a16c0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bafa2c4();
    func_0x00010c1a1aa0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c1a1b60(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1a1b80(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1a49c0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1a4bc0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1a5460(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1a5b00(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c1aeb20(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1aeb80(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1aeba0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b34a0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c1b7380(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c1b73e0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c1baba0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c1bb200(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  puVar6 = PTR_PTR_1126c4718;
  _objc_alloc(PTR_PTR_1126c4718);
  func_0x00010c00c560();
  func_0x00010c1bb300(param_1);
  _objc_release(puVar6);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1bbe80(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1bbea0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c1bbee0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1c1140(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c1c1160(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1c1640(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1c17a0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1c17c0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1c1800(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1c1820(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1c1840(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1c1860(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1c18a0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c1c2f20(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bc90cec();
    func_0x00010c1c5440(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c1c8600(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1c9740(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1c9820(param_1);
    _objc_release(lVar1);
  }
  puVar6 = PTR_PTR_1126d4560;
  _objc_alloc(PTR_PTR_1126d4560);
  func_0x00010c00c560();
  func_0x00010c1c9840(param_1);
  _objc_release(puVar6);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c1c9ee0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c1c9fe0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c1ca220(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c1ca440(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bc9109c();
    func_0x00010c1ca4e0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10baf6c74();
    func_0x00010c1cb6c0(param_1);
    _objc_release(lVar1);
  }
  puVar6 = PTR_PTR_1126c4740;
  _objc_alloc(PTR_PTR_1126c4740);
  func_0x00010c00c560();
  func_0x00010c1de4e0(param_1);
  _objc_release(puVar6);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c1df060(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1e0780(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1e1760(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar4);
        }
        uVar2 = param_1;
        func_0x00010be45600();
        if ((uVar2 & 1) == 0) {
          puVar5 = PTR_PTR_1126e2bf8;
          _objc_alloc(PTR_PTR_1126e2bf8);
          func_0x00010c00c560();
          func_0x00010befa120(puVar6);
          _objc_release(puVar5);
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    func_0x00010c1e1ce0(param_1);
    _objc_release(puVar6);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bb09154();
    func_0x00010c1e3cc0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1e5e60(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1e5e80(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c1e5ea0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1e5ec0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1e5ee0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c1e7520(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1e88a0(param_1);
    _objc_release(lVar1);
  }
  puVar6 = PTR_PTR_1126da7d8;
  _objc_alloc(PTR_PTR_1126da7d8);
  func_0x00010c00c560();
  func_0x00010c1e8a20(param_1);
  _objc_release(puVar6);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c1ea120(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1eaee0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c1eb7e0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bb09e24();
    func_0x00010c1ee5a0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1fab60(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bb10720();
    func_0x00010c203740(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010bf655e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203d60(param_1);
    _objc_release(puVar6);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c204260(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bb1089c();
    func_0x00010c2044c0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c2044e0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c205840(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c205880(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c2060e0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c206b60(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c206c00(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bb10e88();
    func_0x00010c206c40(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c206f80(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c2075c0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20a840(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20a860(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20a8a0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c20a8c0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20a940(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar4);
        }
        uVar2 = param_1;
        func_0x00010be45600();
        if ((uVar2 & 1) == 0) {
          func_0x00010befa120(puVar6);
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    func_0x00010c20a960(param_1);
    _objc_release(puVar6);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20aaa0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c20aac0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c20aae0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20ab80(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c20aba0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20abc0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20ac00(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20ac20(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20ac40(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20ac60(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20ac80(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20acc0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c20ace0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20adc0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20ae60(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20aea0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c20aec0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20af60(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20af80(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20afa0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c20afc0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20b040(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c20b060(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20b1a0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c20b1c0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20b1e0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20b260(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c20b280(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c20b340(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c20b440(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20b5a0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20b8c0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20b900(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c20b920(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20ba40(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20ba80(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20bb20(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c20bb40(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20bb60(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c20d2c0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20d640(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c20f3a0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c210580(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c212740(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c2159a0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c215a20(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c218b20(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10baf8a64();
    func_0x00010c21a480(param_1);
    _objc_release(lVar1);
  }
  puVar6 = PTR_PTR_1126c4720;
  _objc_alloc(PTR_PTR_1126c4720);
  func_0x00010c00c560();
  func_0x00010c21f5a0(param_1);
  _objc_release(puVar6);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c2208c0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bb1a534();
    func_0x00010c221b20(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c222d20(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c223e80(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c224100(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c2256a0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c225be0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c225c80(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c225ce0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c225fe0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c226000(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c226060(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c226080(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c226380(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c226660(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c226760(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c2267c0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c2269a0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c226b40(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c226ba0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c226c40(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  lVar3 = lVar1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf1f3c0();
    func_0x00010c226da0(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x00010c26f320(lVar3);
    func_0x00010c0df720(puVar6);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110eb5bb8,puVar6,5);
  return;
}



/* Entry: 10bbb4d1c; end: 10bbb4d9b; -[SCADirectSnapSendBase setActionTs:] */

/* WARNING: Possible PIC construction at 0x00010bbb4d68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bbb4d6c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10bbb4d1c(undefined8 param_1,undefined8 param_2,long param_3)

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
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110eb5bb8,puVar1,5);
  return;
}



/* Entry: 10bbb4d9c; end: 10bbb4dff; -[SCADirectSnapSendBase getActionTs] */

undefined8 FUN_10bbb4d9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10bbb4e00; end: 10bbb4e4f; -[SCADirectSnapSendBase setAltitudeMeter:] */

void FUN_10bbb4e00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fb3918,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb4e50; end: 10bbb4e9f; -[SCADirectSnapSendBase setAnimatedFilterCount:] */

void FUN_10bbb4e50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fb1c98,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb4ea0; end: 10bbb4eef; -[SCADirectSnapSendBase setAnimatedStickerCount:] */

void FUN_10bbb4ea0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fb1cb8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb4ef0; end: 10bbb4f33; -[SCADirectSnapSendBase setArroyoMixedModeConversationData:] */

void FUN_10bbb4ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fb3938,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbb4f34; end: 10bbb4f47; -[SCADirectSnapSendBase setAudioToolName:] */

void FUN_10bbb4f34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110fb1cd8,param_3,0);
  return;
}



/* Entry: 10bbb4f48; end: 10bbb4f97; -[SCADirectSnapSendBase setAutoCaptionEnabled:] */

void FUN_10bbb4f48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fb3358,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb4f98; end: 10bbb4fe7; -[SCADirectSnapSendBase setAutoCropEnabled:] */

void FUN_10bbb4f98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fb3538,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb4fe8; end: 10bbb5037; -[SCADirectSnapSendBase setBrushCancelCount:] */

void FUN_10bbb4fe8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fb1d78,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb5038; end: 10bbb5087; -[SCADirectSnapSendBase setBrushFinalTintCount:] */

void FUN_10bbb5038(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fb1d98,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb5088; end: 10bbb50d7; -[SCADirectSnapSendBase setBrushHasTint:] */

void FUN_10bbb5088(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fb1db8,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb50d8; end: 10bbb5127; -[SCADirectSnapSendBase setBrushResizeCount:] */

void FUN_10bbb50d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fb1dd8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb5128; end: 10bbb5177; -[SCADirectSnapSendBase setBrushSessionCount:] */

void FUN_10bbb5128(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fb1df8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb5178; end: 10bbb518b; -[SCADirectSnapSendBase setBrushStroke:] */

void FUN_10bbb5178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110fb1e18,param_3,0);
  return;
}



/* Entry: 10bbb518c; end: 10bbb51db; -[SCADirectSnapSendBase setBrushTotalTintCount:] */

void FUN_10bbb518c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fb1e38,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb51dc; end: 10bbb522b; -[SCADirectSnapSendBase setCamera:] */

void FUN_10bbb51dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110dad4b8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb522c; end: 10bbb52a7; -[SCADirectSnapSendBase setCameraMode:] */

void FUN_10bbb522c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baee46c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b860(param_1,param_2,&PTR____CFConstantStringClassReference_110e724d8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb52a8; end: 10bbb52f7; -[SCADirectSnapSendBase setCaption:] */

void FUN_10bbb52a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110e2a618,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb52f8; end: 10bbb5347; -[SCADirectSnapSendBase setCaptionAddCount:] */

void FUN_10bbb52f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fb1e58,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb5348; end: 10bbb5397; -[SCADirectSnapSendBase setCaptionAnimatedCount:] */

void FUN_10bbb5348(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fb38b8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb5398; end: 10bbb53e7; -[SCADirectSnapSendBase setCaptionDeletionCount:] */

void FUN_10bbb5398(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fb1e78,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb53e8; end: 10bbb5437; -[SCADirectSnapSendBase setCaptionHasStyling:] */

void FUN_10bbb53e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fb1e98,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb5438; end: 10bbb5487; -[SCADirectSnapSendBase setCaptionIsBackgroundStyle:] */

void FUN_10bbb5438(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fb3338,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb5488; end: 10bbb54d7; -[SCADirectSnapSendBase setCaptionMenuOpen:] */

void FUN_10bbb5488(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fb3398,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb54d8; end: 10bbb5527; -[SCADirectSnapSendBase setCaptionPinUseCount:] */

void FUN_10bbb54d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fb3818,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb5528; end: 10bbb556b; -[SCADirectSnapSendBase setCaptionPlaceList:] */

void FUN_10bbb5528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fb3cd8,param_3,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbb556c; end: 10bbb557f; -[SCADirectSnapSendBase setCaptionStyleList:] */

void FUN_10bbb556c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110fb1ef8,param_3,0);
  return;
}



/* Entry: 10bbb5580; end: 10bbb55cf; -[SCADirectSnapSendBase setCaptionTimeBasedUseCount:] */

void FUN_10bbb5580(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fb3258,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb55d0; end: 10bbb561f; -[SCADirectSnapSendBase setCaptionTracking:] */

void FUN_10bbb55d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fb1f38,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb5620; end: 10bbb566f; -[SCADirectSnapSendBase setCaptionUseCount:] */

void FUN_10bbb5620(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fb1f58,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb5670; end: 10bbb56eb; -[SCADirectSnapSendBase setChatEraseMode:] */

void FUN_10bbb5670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baef5ec(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b860(param_1,param_2,&PTR____CFConstantStringClassReference_110fb3d58,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbb56ec; end: 10bbb56ff; -[SCADirectSnapSendBase setChatEraseModes:] */

void FUN_10bbb56ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110fb3d98,param_3,0);
  return;
}



/* Entry: 10bbb5700; end: 10bbb5713; -[SCADirectSnapSendBase setClientMessageId:] */

void FUN_10bbb5700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110fb3958,param_3,0);
  return;
}


