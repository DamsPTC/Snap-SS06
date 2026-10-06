/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba85efc; end: 10ba85f03; -[SCALensExplorerFeedItemImp getPayloadIdentifier] */

undefined8 FUN_10ba85efc(void)

{
  return 0xb33;
}



/* Entry: 10ba85f04; end: 10ba85f0f; -[SCALensExplorerFeedItemLongImp getEventName] */

undefined ** FUN_10ba85f04(void)

{
  return &PTR____CFConstantStringClassReference_110e725f8;
}



/* Entry: 10ba85f10; end: 10ba85f17; -[SCALensExplorerFeedItemLongImp getEventQoS] */

undefined8 FUN_10ba85f10(void)

{
  return 1;
}



/* Entry: 10ba85f18; end: 10ba85f6b; -[SCALensExplorerFeedItemLongImp setImpTimeSec:] */

void FUN_10ba85f18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fde158,2,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba85f6c; end: 10ba85f8f; -[SCALensExplorerFeedItemLongImp getFieldNumberToFieldDict] */

void FUN_10ba85f6c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba85f90; end: 10ba85fc7; -[SCALensExplorerFeedItemLongImp addToProtoDictionary] */

void FUN_10ba85f90(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba85fc8; end: 10ba8601f; -[SCALensExplorerFeedItemLongImp toProtoWithAllowedFields:] */

void FUN_10ba85fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba86020; end: 10ba86027; -[SCALensExplorerFeedItemLongImp getPayloadIdentifier] */

undefined8 FUN_10ba86020(void)

{
  return 0xb35;
}



/* Entry: 10ba86028; end: 10ba86033; -[SCALensExplorerMrcImp getEventName] */

undefined ** FUN_10ba86028(void)

{
  return &PTR____CFConstantStringClassReference_110fde178;
}



/* Entry: 10ba86034; end: 10ba8603b; -[SCALensExplorerMrcImp getEventQoS] */

undefined8 FUN_10ba86034(void)

{
  return 1;
}



/* Entry: 10ba8603c; end: 10ba86047; -[SCALensExplorerMrcImp getPerUserSamplingRateV2] */

undefined8 FUN_10ba8603c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba86048; end: 10ba8609b; -[SCALensExplorerMrcImp setImpTimeSec:] */

void FUN_10ba86048(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fde158,3,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8609c; end: 10ba860bf; -[SCALensExplorerMrcImp getFieldNumberToFieldDict] */

void FUN_10ba8609c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba860c0; end: 10ba860f7; -[SCALensExplorerMrcImp addToProtoDictionary] */

void FUN_10ba860c0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba860f8; end: 10ba8614f; -[SCALensExplorerMrcImp toProtoWithAllowedFields:] */

void FUN_10ba860f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba86150; end: 10ba86157; -[SCALensExplorerMrcImp getPayloadIdentifier] */

undefined8 FUN_10ba86150(void)

{
  return 0xe6d;
}



/* Entry: 10ba86158; end: 10ba8616b; -[SCALensExplorerPageBaseEvent setLeSessionId:] */

void FUN_10ba86158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110e724f8,param_3,0);
  return;
}



/* Entry: 10ba8616c; end: 10ba861e7; -[SCALensExplorerPageBaseEvent setLensExplorerMode:] */

void FUN_10ba8616c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baff720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b860(param_1,param_2,&PTR____CFConstantStringClassReference_110e72538,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba861e8; end: 10ba861fb; -[SCALensExplorerPageBaseEvent setPageName:] */

void FUN_10ba861e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110eeb598,param_3,0);
  return;
}



/* Entry: 10ba861fc; end: 10ba86277; -[SCALensExplorerPageBaseEvent setPageType:] */

void FUN_10ba861fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baff8bc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b860(param_1,param_2,&PTR____CFConstantStringClassReference_110dcad78,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba86278; end: 10ba86283; -[SCALensExplorerPageOpen getEventName] */

undefined ** FUN_10ba86278(void)

{
  return &PTR____CFConstantStringClassReference_110e72578;
}



/* Entry: 10ba86284; end: 10ba8628b; -[SCALensExplorerPageOpen getEventQoS] */

undefined8 FUN_10ba86284(void)

{
  return 1;
}



/* Entry: 10ba8628c; end: 10ba8630b; -[SCALensExplorerPageOpen setCameraMode:] */

void FUN_10ba8628c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baee46c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e724d8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8630c; end: 10ba8632f; -[SCALensExplorerPageOpen getFieldNumberToFieldDict] */

void FUN_10ba8630c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba86330; end: 10ba86367; -[SCALensExplorerPageOpen addToProtoDictionary] */

void FUN_10ba86330(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba86368; end: 10ba863bf; -[SCALensExplorerPageOpen toProtoWithAllowedFields:] */

void FUN_10ba86368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba863c0; end: 10ba863c7; -[SCALensExplorerPageOpen getPayloadIdentifier] */

undefined8 FUN_10ba863c0(void)

{
  return 0xb37;
}



/* Entry: 10ba863c8; end: 10ba863d3; -[SCALensExplorerPageReadyEvent getEventName] */

undefined ** FUN_10ba863c8(void)

{
  return &PTR____CFConstantStringClassReference_110fde198;
}



/* Entry: 10ba863d4; end: 10ba863db; -[SCALensExplorerPageReadyEvent getEventQoS] */

undefined8 FUN_10ba863d4(void)

{
  return 1;
}



/* Entry: 10ba863dc; end: 10ba863f3; -[SCALensExplorerPageReadyEvent setLoadedPageName:] */

void FUN_10ba863dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fde1b8,2,param_3,0);
  return;
}



/* Entry: 10ba863f4; end: 10ba86447; -[SCALensExplorerPageReadyEvent setPageLoadingLatency:] */

void FUN_10ba863f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fde1d8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba86448; end: 10ba864c7; -[SCALensExplorerPageReadyEvent setPageViewType:] */

void FUN_10ba86448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7ef10(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fde1f8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba864c8; end: 10ba86547; -[SCALensExplorerPageReadyEvent setLensExplorerMode:] */

void FUN_10ba864c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baff720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e72538,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba86548; end: 10ba8654b; -[SCALensExplorerPageReadyEvent getFieldNumberToFieldDict] */

void FUN_10ba86548(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8654c; end: 10ba86557; -[SCALensExplorerPageReadyEvent toProtoWithAllowedFields:] */

void FUN_10ba8654c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba86558; end: 10ba8655f; -[SCALensExplorerPageReadyEvent getPayloadIdentifier] */

undefined8 FUN_10ba86558(void)

{
  return 0x4c4;
}



/* Entry: 10ba86560; end: 10ba8656b; -[SCALensExplorerPageView getEventName] */

undefined ** FUN_10ba86560(void)

{
  return &PTR____CFConstantStringClassReference_110e72598;
}



/* Entry: 10ba8656c; end: 10ba86573; -[SCALensExplorerPageView getEventQoS] */

undefined8 FUN_10ba8656c(void)

{
  return 1;
}



/* Entry: 10ba86574; end: 10ba865c7; -[SCALensExplorerPageView setTimeViewedSec:] */

void FUN_10ba86574(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e724b8,5,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba865c8; end: 10ba865eb; -[SCALensExplorerPageView getFieldNumberToFieldDict] */

void FUN_10ba865c8(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba865ec; end: 10ba86623; -[SCALensExplorerPageView addToProtoDictionary] */

void FUN_10ba865ec(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba86624; end: 10ba8667b; -[SCALensExplorerPageView toProtoWithAllowedFields:] */

void FUN_10ba86624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba8667c; end: 10ba86683; -[SCALensExplorerPageView getPayloadIdentifier] */

undefined8 FUN_10ba8667c(void)

{
  return 0xb39;
}



/* Entry: 10ba86684; end: 10ba8668f; -[SCALensExplorerSessionEvent getEventName] */

undefined ** FUN_10ba86684(void)

{
  return &PTR____CFConstantStringClassReference_110fde218;
}



/* Entry: 10ba86690; end: 10ba86697; -[SCALensExplorerSessionEvent getEventQoS] */

undefined8 FUN_10ba86690(void)

{
  return 1;
}



/* Entry: 10ba86698; end: 10ba86717; -[SCALensExplorerSessionEvent setEntryPoint:] */

void FUN_10ba86698(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7ede4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110db16f8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba86718; end: 10ba86797; -[SCALensExplorerSessionEvent setExitType:] */

void FUN_10ba86718(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7ede4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110f42e18,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba86798; end: 10ba867eb; -[SCALensExplorerSessionEvent setRefreshActionsCount:] */

void FUN_10ba86798(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fde238,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba867ec; end: 10ba8683f; -[SCALensExplorerSessionEvent setSessionTime:] */

void FUN_10ba867ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fde258,5,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba86840; end: 10ba868bf; -[SCALensExplorerSessionEvent setSource:] */

void FUN_10ba86840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7ee04(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba868c0; end: 10ba8693f; -[SCALensExplorerSessionEvent setCameraMode:] */

void FUN_10ba868c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baee46c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e724d8,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba86940; end: 10ba869bf; -[SCALensExplorerSessionEvent setLensExplorerMode:] */

void FUN_10ba86940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baff720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e72538,8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba869c0; end: 10ba869d7; -[SCALensExplorerSessionEvent setEntryPointSpecific:] */

void FUN_10ba869c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fde278,9,param_3,0);
  return;
}



/* Entry: 10ba869d8; end: 10ba869ef; -[SCALensExplorerSessionEvent setLeSessionId:] */

void FUN_10ba869d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e724f8,10,param_3,0);
  return;
}



/* Entry: 10ba869f0; end: 10ba869f3; -[SCALensExplorerSessionEvent getFieldNumberToFieldDict] */

void FUN_10ba869f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba869f4; end: 10ba869ff; -[SCALensExplorerSessionEvent toProtoWithAllowedFields:] */

void FUN_10ba869f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10ba86a00; end: 10ba86a07; -[SCALensExplorerSessionEvent getPayloadIdentifier] */

undefined8 FUN_10ba86a00(void)

{
  return 0x4c5;
}



/* Entry: 10ba86a08; end: 10ba86a13; -[SCALensFFCTAAction getEventName] */

undefined ** FUN_10ba86a08(void)

{
  return &PTR____CFConstantStringClassReference_110fde298;
}



/* Entry: 10ba86a14; end: 10ba86a1b; -[SCALensFFCTAAction getEventQoS] */

undefined8 FUN_10ba86a14(void)

{
  return 1;
}



/* Entry: 10ba86a1c; end: 10ba86a9b; -[SCALensFFCTAAction setEventTriggerType:] */

void FUN_10ba86a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baff37c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fcb678,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba86a9c; end: 10ba86ab3; -[SCALensFFCTAAction setLensId:] */

void FUN_10ba86a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110db19f8,3,param_3,0);
  return;
}



/* Entry: 10ba86ab4; end: 10ba86b07; -[SCALensFFCTAAction setPositionOnFF:] */

void FUN_10ba86ab4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcb5d8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba86b08; end: 10ba86b4f; -[SCALensFFCTAAction setGameInfo:] */

void FUN_10ba86b08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcb698,5,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba86b50; end: 10ba86c0f; -[SCALensFFCTAAction prepareDictionary:] */

void FUN_10ba86b50(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar2 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_11270c850;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10ba86c10; end: 10ba86c13; -[SCALensFFCTAAction getFieldNumberToFieldDict] */

void FUN_10ba86c10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba86c14; end: 10ba86c1f; -[SCALensFFCTAAction toProtoWithAllowedFields:] */

void FUN_10ba86c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba86c20; end: 10ba86c27; -[SCALensFFCTAAction getPayloadIdentifier] */

undefined8 FUN_10ba86c20(void)

{
  return 0xecf;
}



/* Entry: 10ba86c28; end: 10ba86c33; -[SCALensFavoriteButtonAction getEventName] */

undefined ** FUN_10ba86c28(void)

{
  return &PTR____CFConstantStringClassReference_110fde2b8;
}



/* Entry: 10ba86c34; end: 10ba86c3b; -[SCALensFavoriteButtonAction getEventQoS] */

undefined8 FUN_10ba86c34(void)

{
  return 1;
}



/* Entry: 10ba86c3c; end: 10ba86c53; -[SCALensFavoriteButtonAction setFilterLensId:] */

void FUN_10ba86c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110eb5d58,2,param_3,0);
  return;
}



/* Entry: 10ba86c54; end: 10ba86cd3; -[SCALensFavoriteButtonAction setInteractionValue:] */

void FUN_10ba86c54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7ee24(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fdda78,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba86cd4; end: 10ba86d53; -[SCALensFavoriteButtonAction setSource:] */

void FUN_10ba86cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7ee48(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba86d54; end: 10ba86d6b; -[SCALensFavoriteButtonAction setRankingRequestId:] */

void FUN_10ba86d54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110eb5d78,5,param_3,0);
  return;
}



/* Entry: 10ba86d6c; end: 10ba86d83; -[SCALensFavoriteButtonAction setRankingRequestInfo:] */

void FUN_10ba86d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fde138,6,param_3,0);
  return;
}



/* Entry: 10ba86d84; end: 10ba86d9b; -[SCALensFavoriteButtonAction setAdId:] */

void FUN_10ba86d84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dfbb78,7,param_3,0);
  return;
}



/* Entry: 10ba86d9c; end: 10ba86db3; -[SCALensFavoriteButtonAction setAdServeItemId:] */

void FUN_10ba86d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110faa6f8,8,param_3,0);
  return;
}



/* Entry: 10ba86db4; end: 10ba86db7; -[SCALensFavoriteButtonAction getFieldNumberToFieldDict] */

void FUN_10ba86db4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba86db8; end: 10ba86dc3; -[SCALensFavoriteButtonAction toProtoWithAllowedFields:] */

void FUN_10ba86db8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba86dc4; end: 10ba86dcb; -[SCALensFavoriteButtonAction getPayloadIdentifier] */

undefined8 FUN_10ba86dc4(void)

{
  return 0x4c8;
}



/* Entry: 10ba86dcc; end: 10ba86dd7; -[SCALensHandledException getEventName] */

undefined ** FUN_10ba86dcc(void)

{
  return &PTR____CFConstantStringClassReference_110fde2d8;
}



/* Entry: 10ba86dd8; end: 10ba86ddf; -[SCALensHandledException getEventQoS] */

undefined8 FUN_10ba86dd8(void)

{
  return 1;
}



/* Entry: 10ba86de0; end: 10ba86e5f; -[SCALensHandledException setDeviceClass:] */

void FUN_10ba86de0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baff43c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dedcf8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba86e60; end: 10ba86e77; -[SCALensHandledException setExceptionType:] */

void FUN_10ba86e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fde2f8,3,param_3,0);
  return;
}



/* Entry: 10ba86e78; end: 10ba86e8f; -[SCALensHandledException setFilterLensId:] */

void FUN_10ba86e78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110eb5d58,4,param_3,0);
  return;
}



/* Entry: 10ba86e90; end: 10ba86ea7; -[SCALensHandledException setReason:] */

void FUN_10ba86e90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110daf558,5,param_3,0);
  return;
}



/* Entry: 10ba86ea8; end: 10ba86ebf; -[SCALensHandledException setCaptureSessionId:] */

void FUN_10ba86ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ea05f8,6,param_3,0);
  return;
}



/* Entry: 10ba86ec0; end: 10ba86f07; -[SCALensHandledException setFilterLensIds:] */

void FUN_10ba86ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fde318,7,param_3,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba86f08; end: 10ba86f87; -[SCALensHandledException setRenderingContext:] */

void FUN_10ba86f08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7efdc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fde338,9,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba86f88; end: 10ba86fcf; -[SCALensHandledException setUpcomingLensIds:] */

void FUN_10ba86f88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fde358,10,param_3,7)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba86fd0; end: 10ba8704f; -[SCALensHandledException setProductType:] */

void FUN_10ba86fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7ee8c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dd1fb8,0xb,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba87050; end: 10ba87067; -[SCALensHandledException setSwipeId:] */

void FUN_10ba87050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f2be38,0xc,param_3,0);
  return;
}



/* Entry: 10ba87068; end: 10ba8707f; -[SCALensHandledException setBacktrace:] */

void FUN_10ba87068(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dedb98,0xd,param_3,0);
  return;
}



/* Entry: 10ba87080; end: 10ba87097; -[SCALensHandledException setLensApplySessionId:] */

void FUN_10ba87080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fddc38,0xe,param_3,0);
  return;
}



/* Entry: 10ba87098; end: 10ba8709b; -[SCALensHandledException getFieldNumberToFieldDict] */

void FUN_10ba87098(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8709c; end: 10ba870a7; -[SCALensHandledException toProtoWithAllowedFields:] */

void FUN_10ba8709c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10ba870a8; end: 10ba870af; -[SCALensHandledException getPayloadIdentifier] */

undefined8 FUN_10ba870a8(void)

{
  return 0x4cb;
}



/* Entry: 10ba870b0; end: 10ba870bb; -[SCALensIconImpression getEventName] */

undefined ** FUN_10ba870b0(void)

{
  return &PTR____CFConstantStringClassReference_110fde378;
}



/* Entry: 10ba870bc; end: 10ba870c3; -[SCALensIconImpression getEventQoS] */

undefined8 FUN_10ba870bc(void)

{
  return 1;
}



/* Entry: 10ba870c4; end: 10ba87117; -[SCALensIconImpression setCamera:] */

void FUN_10ba870c4(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10ba87118; end: 10ba87197; -[SCALensIconImpression setExitMethod:] */

void FUN_10ba87118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7edc4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fde398,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


