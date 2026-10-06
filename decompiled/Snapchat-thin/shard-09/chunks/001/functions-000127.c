/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a54180; end: 106a54247; -[SCCQuestion initWithCoder:] */

undefined1 * FUN_106a54180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f4728;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1e6560(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17c440(puVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a54248; end: 106a542eb; -[SCCQuestion encodeWithCoder:] */

void FUN_106a54248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010c11dc20(param_1);
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110e686b8);
  _objc_release(puVar1);
  func_0x00010bf38fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110e686d8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a542ec; end: 106a543e7; -[SCCSurveyData initWithCoder:] */

undefined1 * FUN_106a542ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f4730;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b3120(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c220e20(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6680(puVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a543e8; end: 106a545af; -[SCCSurveyData encodeWithCoder:] */

void FUN_106a543e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c079460(param_1);
  func_0x00010c0df6e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar2,&PTR____CFConstantStringClassReference_110e686f8);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c298be0(param_1);
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar2,&PTR____CFConstantStringClassReference_110dd8fd8);
  _objc_release(puVar2);
  func_0x00010c11dde0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110e68718);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a545b0; end: 106a5472b; -[SCCameraInclusionPanelSurveyDeeplinkProcessor initWithComposerServicesLazy:taskManagementServicesLazy:userUnifiedGRPCServicesLazy:valdiBlizzardLoggingServicesLazy:jobSchedulerServicesLazy:contentDeliveryServicesLazy:grapheneServicesLazy:] */

undefined1 *
FUN_106a545b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f4738;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a5472c; end: 106a5473f; -[SCCameraInclusionPanelSurveyDeeplinkProcessor identifier] */

void FUN_106a5472c(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 106a54740; end: 106a54747; -[SCCameraInclusionPanelSurveyDeeplinkProcessor priority] */

undefined8 FUN_106a54740(void)

{
  return 1000;
}



/* Entry: 106a54748; end: 106a5475b; -[SCCameraInclusionPanelSurveyDeeplinkProcessor canProvideProcessorForFeature:] */

void FUN_106a54748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110f83db8);
  return;
}



/* Entry: 106a5475c; end: 106a547a7; -[SCCameraInclusionPanelSurveyDeeplinkProcessor isValidDeepLink:] */

undefined8 FUN_106a5475c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d2a0(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106a547a8; end: 106a547ab; -[SCCameraInclusionPanelSurveyDeeplinkProcessor makeDeepLinkProcessor] */

void FUN_106a547a8(void)

{
  return;
}



/* Entry: 106a547ac; end: 106a5488f; -[SCCameraInclusionPanelSurveyDeeplinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_106a547ac(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2475e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1c20(param_1,param_2,param_3,uVar1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  if ((param_1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e68778,
                        &PTR____CFConstantStringClassReference_110daafd8,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  func_0x00010bf94720(param_5,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106a54890; end: 106a54957; -[SCCameraInclusionPanelSurveyDeeplinkProcessor handleOpenURL:sourceApplication:additionalInfo:] */

undefined8 FUN_106a54890(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106a54958;
  puStack_48 = &UNK_110845ce0;
  uStack_38 = (undefined1)uVar2;
  uStack_40 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  return 1;
}



/* Entry: 106a54958; end: 106a54b6f;  */

void FUN_106a54958(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar2 = PTR_PTR_1126cfee8;
  _objc_alloc(PTR_PTR_1126cfee8);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x51;
  if (*(char *)(param_1 + 0x28) != '\0') {
    uVar1 = 1;
  }
  func_0x00010c0009a0(puVar2,param_2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar10 = 0;
  func_0x0001008cd514();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c1417c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  lVar10 = lVar11;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  while (lVar10 != 0) {
    lVar12 = lVar11;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    lVar10 = lVar12;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar11 = lVar12;
  }
  func_0x00010c10eda0(lVar11,param_2,puVar2,1,0);
  _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106a54b70; end: 106a54b77; -[SCCameraInclusionPanelSurveyDeeplinkProcessor shouldForceNavigation] */

undefined8 FUN_106a54b70(void)

{
  return 0;
}



/* Entry: 106a54b78; end: 106a54b7b; -[SCCameraInclusionPanelSurveyDeeplinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_106a54b78(void)

{
  return;
}



/* Entry: 106a54b7c; end: 106a54be7; -[SCCameraInclusionPanelSurveyDeeplinkProcessor .cxx_destruct] */

void FUN_106a54b7c(long param_1)

{
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



/* Entry: 106a54be8; end: 106a54d87; -[SCCameraInclusionPanelSurveyNetworkManager initWithTaskManagementServices:userUnifiedGRPCServices:grapheneServices:] */

undefined1 *
FUN_106a54be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f4740;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0f98e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126cfef0;
    _objc_alloc();
    uVar2 = param_4;
    func_0x00010bfcfa00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0351e0();
    uVar6 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar4;
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bfebd40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar5;
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a54d88; end: 106a54e77; -[SCCameraInclusionPanelSurveyNetworkManager fetchSurveyDataWithRequest:completion:] */

void FUN_106a54d88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010bfcaf60(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a54e78; end: 106a54f2b;  */

void FUN_106a54e78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be692a0(lVar1);
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,param_2,param_3);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a54f2c; end: 106a550cb; -[SCCameraInclusionPanelSurveyNetworkManager processJobWithJobConfig:input:context:onComplete:] */

undefined8
FUN_106a54f2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_opt_class(PTR_PTR_1126cfef8);
  lStack_58 = 0;
  func_0x00010c27f240(puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_58;
  _objc_retain(lStack_58);
  if (lVar1 == 0) {
    _objc_initWeak(auStack_60,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_68,auStack_60);
    _objc_retain(param_6);
    func_0x00010c28a9e0(uVar3);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_60);
  }
  else if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6,2,lVar1);
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 106a550cc; end: 106a55183;  */

void FUN_106a550cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6b600(lVar1);
    _objc_release(lVar2);
    lVar2 = *(long *)(param_1 + 0x20);
    if (param_3 == 0) {
      if (lVar2 == 0) goto LAB_106a55164;
      pcVar5 = *(code **)(lVar2 + 0x10);
      uVar3 = 0;
      lVar4 = 0;
    }
    else {
      if (lVar2 == 0) goto LAB_106a55164;
      pcVar5 = *(code **)(lVar2 + 0x10);
      uVar3 = 2;
      lVar4 = param_3;
    }
    (*pcVar5)(lVar2,uVar3,lVar4);
  }
LAB_106a55164:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a55184; end: 106a5528f; -[SCCameraInclusionPanelSurveyNetworkManager _onFetchServer:error:] */

void FUN_106a55184(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126cff00;
  _objc_retain(param_4);
  func_0x00010c263f40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_4 != (undefined **)0x0) {
    ppuVar1 = param_4;
  }
  puVar2 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110daeeb8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar5);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 0x10),param_2,puVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106a55290; end: 106a5539b; -[SCCameraInclusionPanelSurveyNetworkManager _onSendServer:error:] */

void FUN_106a55290(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126cff00;
  _objc_retain(param_4);
  func_0x00010c263fc0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_4 != (undefined **)0x0) {
    ppuVar1 = param_4;
  }
  puVar2 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110daeeb8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar5);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 0x10),param_2,puVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106a5539c; end: 106a553cb; -[SCCameraInclusionPanelSurveyNetworkManager .cxx_destruct] */

void FUN_106a5539c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a553cc; end: 106a554c3;  */

undefined1 * FUN_106a553cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined *puVar9;
  undefined ***pppuVar10;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ae748;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dbeff8;
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010c106cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  pppuVar10 = &ppuStack_48;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x00010bef9140(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_a0;
  _objc_retain(puVar9);
  _objc_retain(pppuVar10);
  puStack_98 = PTR_PTR_1126f4748;
  puStack_a0 = puVar2;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined **)0x0) {
    _objc_retain(puVar9);
    uVar6 = *(undefined8 *)((long)ppuVar5 + 8);
    *(undefined **)((long)ppuVar5 + 8) = puVar9;
    _objc_release(uVar6);
    puVar1 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1eeba0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c17ca40(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    pppuVar7 = pppuVar10;
    func_0x00010c269d40(pppuVar10);
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = pppuVar7;
    func_0x00010bf56360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar7);
    puVar2 = PTR_PTR_1126cff08;
    _objc_alloc();
    func_0x00010c058f80();
    uVar6 = *(undefined8 *)((long)ppuVar5 + 0x10);
    *(undefined **)((long)ppuVar5 + 0x10) = puVar2;
    _objc_release(uVar6);
    _objc_release(pppuVar8);
    _objc_release(puVar1);
  }
  _objc_release(pppuVar10);
  _objc_release(puVar9);
  return (undefined1 *)ppuVar5;
}



/* Entry: 106a554c4; end: 106a55633; -[SCCameraInclusionPanelSurveyServiceClient initWithPerformer:unifiedGRPCClientFactory:] */

undefined1 *
FUN_106a554c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f4748;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1eeba0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c17ca40(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf56360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126cff08;
    _objc_alloc();
    func_0x00010c058f80();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar5;
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a55634; end: 106a556a7; -[SCCameraInclusionPanelSurveyServiceClient getSurveyDataWithRequest:completion:] */

void FUN_106a55634(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_106a553cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcaf40(uVar2,param_2,param_3,uVar1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a556a8; end: 106a5571b; -[SCCameraInclusionPanelSurveyServiceClient updateSurveyDataWithRequest:completion:] */

void FUN_106a556a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_106a553cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a9c0(uVar2,param_2,param_3,uVar1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a5571c; end: 106a5574b; -[SCCameraInclusionPanelSurveyServiceClient .cxx_destruct] */

void FUN_106a5571c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a5574c; end: 106a55a2f; -[SCCameraInclusionPanelSurveySettingsRowProvider initWithConfigurationServices:taskManagementServices:userUnifiedGRPCServices:composerServices:valdiBlizzardLoggingServices:jobSchedulerServices:contentDeliveryServices:grapheneServices:circumstanceEngineServices:] */

undefined8 *
FUN_106a5574c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f4750;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = puVar1[1];
    puVar1[1] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aeae0;
    func_0x00010c2a4c00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aeaf0;
    _objc_alloc(PTR_PTR_1126aeaf0);
    puVar4 = puVar3;
    FUN_106a57ecc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053ba0(puVar3);
    _objc_release(puVar4);
    uVar2 = puVar1[0xb];
    puVar4 = PTR_PTR_1126ae750;
    func_0x00010c0ec800(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106a55a30; end: 106a55acf; -[SCCameraInclusionPanelSurveySettingsRowProvider handleWithContext:] */

void FUN_106a55a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cfee8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0009a0();
  uVar2 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c11c520(uVar2,param_2,puVar1,1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a55ad0; end: 106a55ad7; -[SCCameraInclusionPanelSurveySettingsRowProvider sectionRow] */

undefined8 FUN_106a55ad0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106a55ad8; end: 106a55adf; -[SCCameraInclusionPanelSurveySettingsRowProvider rowViewModel] */

undefined8 FUN_106a55ad8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106a55ae0; end: 106a55b7b; -[SCCameraInclusionPanelSurveySettingsRowProvider .cxx_destruct] */

void FUN_106a55ae0(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 106a55b7c; end: 106a55d57; -[SCCameraInclusionPanelSurveySettingsViewController initWithComposerServices:taskManagementServices:userUnifiedGRPCServices:valdiBlizzardLoggingServices:jobSchedulerServices:contentDeliveryServices:grapheneServices:sourceType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106a55b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f4758;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127566d8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127566dc;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127566e0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127566e4;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127566e8;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127566ec;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127566f0;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127566f4) = param_10;
    func_0x00010c219b20(puVar1);
    func_0x00010c1c8b80(puVar1);
    func_0x00010be39360(puVar1);
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



/* Entry: 106a55d58; end: 106a55d9f; -[SCCameraInclusionPanelSurveySettingsViewController viewDidLoad] */

void FUN_106a55d58(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f4758;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010beb0d80(param_1);
  return;
}



/* Entry: 106a55da0; end: 106a55e4f; -[SCCameraInclusionPanelSurveySettingsViewController _init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a55da0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cff10;
  _objc_alloc(PTR_PTR_1126cff10);
  func_0x00010c050e80();
  puVar2 = PTR_PTR_1126cff18;
  _objc_alloc();
  func_0x00010c04fa40();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127566f8);
  *(undefined **)(param_1 + _DAT_1127566f8) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127566fc);
  *(undefined **)(param_1 + _DAT_1127566fc) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a55e50; end: 106a560bb; -[SCCameraInclusionPanelSurveySettingsViewController _setupUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a55e50(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126cff20;
  _objc_alloc_init(PTR_PTR_1126cff20);
  func_0x00010c189680();
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c1d2060(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127566e4);
  func_0x00010bf1cf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171a20(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127566fc);
  func_0x00010c272120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e0c0(puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127566f4);
  func_0x000100c6f294(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206c40(puVar1);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126cff28;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127566d8);
  func_0x00010c295440(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  lVar8 = (long)_DAT_112756700;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar4;
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar5);
  lVar6 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar6);
  lVar6 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar8));
  _objc_release(lVar6);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  return;
}



/* Entry: 106a560bc; end: 106a5612f;  */

void FUN_106a560bc(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106a56130;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_release(param_1);
  return;
}



/* Entry: 106a56130; end: 106a56137;  */

void FUN_106a56130(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0c210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__exitSurvey_112560a20);
  return;
}



/* Entry: 106a56138; end: 106a56167; -[SCCameraInclusionPanelSurveySettingsViewController _exitSurvey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a56138(long param_1)

{
  func_0x00010bf76f40(*(undefined8 *)(param_1 + _DAT_1127566f8));
                    /* WARNING: Could not recover jumptable at 0x00010be03550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissSelf_11255e6f0);
  return;
}



/* Entry: 106a56168; end: 106a561d7; -[SCCameraInclusionPanelSurveySettingsViewController _dismissSelf] */

void FUN_106a56168(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a00();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 106a561d8; end: 106a561df; -[SCCameraInclusionPanelSurveySettingsViewController shouldPopToRootViewController] */

undefined8 FUN_106a561d8(void)

{
  return 0;
}



/* Entry: 106a561e0; end: 106a561e7; -[SCCameraInclusionPanelSurveySettingsViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_106a561e0(void)

{
  return 1;
}



/* Entry: 106a561e8; end: 106a561eb; -[SCCameraInclusionPanelSurveySettingsViewController animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_106a561e8(void)

{
  return;
}



/* Entry: 106a561ec; end: 106a561ef; -[SCCameraInclusionPanelSurveySettingsViewController animationControllerForDismissedController:] */

void FUN_106a561ec(void)

{
  return;
}



/* Entry: 106a561f0; end: 106a561fb; -[SCCameraInclusionPanelSurveySettingsViewController transitionDuration:] */

undefined8 FUN_106a561f0(void)

{
  return 0x3fc99999a0000000;
}



/* Entry: 106a561fc; end: 106a564d7; -[SCCameraInclusionPanelSurveySettingsViewController animateTransition:] */

void FUN_106a561fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_7);
  lVar3 = param_7;
  func_0x00010c29c220(param_7,param_6,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_7;
  func_0x00010c29c220(param_7,param_6,
                      *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar7);
  lVar7 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar7);
  lVar7 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == param_5) {
    func_0x00010befbb60();
    _objc_release(lVar7);
    uVar8 = param_3;
    func_0x00010c19f0e0(param_3,0,param_3,param_4,lVar5);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010c27a940(param_5,param_6,param_7);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106a564d8;
    puStack_90 = &UNK_110858dc0;
    _objc_retain(lVar5);
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x106a564ec;
    puStack_b8 = &UNK_110841f20;
    lStack_b0 = param_7;
    lStack_88 = lVar5;
    uStack_80 = param_3;
    uStack_78 = param_4;
    _objc_retain(param_7);
    func_0x00010bf03420(uVar8,puVar2,param_6,&puStack_a8,&puStack_d0);
    _objc_release(lStack_b0);
    lVar7 = lStack_88;
  }
  else {
    func_0x00010c066fe0();
    _objc_release(lVar7);
    uVar8 = 0;
    func_0x00010c19f0e0(0,0,param_3,param_4,lVar6);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010c27a940(param_5,param_6,param_7);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x106a564f8;
    puStack_f0 = &UNK_110858dc0;
    _objc_retain(lVar6);
    puStack_130 = puVar1;
    uStack_128 = 0xc2000000;
    uStack_120 = 0x106a5650c;
    puStack_118 = &UNK_110841f20;
    lStack_110 = param_7;
    lStack_e8 = lVar6;
    uStack_e0 = param_3;
    uStack_d8 = param_4;
    _objc_retain(param_7);
    func_0x00010bf03420(uVar8,puVar2,param_6,&puStack_108,&puStack_130);
    _objc_release(lStack_110);
    lVar7 = lStack_e8;
  }
  _objc_release(lVar7);
  _objc_release(param_7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  return;
}



/* Entry: 106a564d8; end: 106a56517;  */

void FUN_106a564d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 106a56518; end: 106a565d7; -[SCCameraInclusionPanelSurveySettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a56518(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127566f0,0);
  _objc_storeStrong(param_1 + _DAT_1127566ec,0);
  _objc_storeStrong(param_1 + _DAT_1127566e8,0);
  _objc_storeStrong(param_1 + _DAT_1127566e4,0);
  _objc_storeStrong(param_1 + _DAT_1127566fc,0);
  _objc_storeStrong(param_1 + _DAT_1127566f8,0);
  _objc_storeStrong(param_1 + _DAT_112756700,0);
  _objc_storeStrong(param_1 + _DAT_1127566e0,0);
  _objc_storeStrong(param_1 + _DAT_1127566dc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127566d8,0);
  return;
}



/* Entry: 106a565d8; end: 106a56717; -[SCCameraInclusionPanelSurveySettingsViewModel initWithSurveyNetworkManager:contentDeliveryServices:jobSchedulerServices:grapheneServices:] */

undefined1 *
FUN_106a565d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f4760;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfebd40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a56718; end: 106a567d3; -[SCCameraInclusionPanelSurveySettingsViewModel didFinishSurvey] */

void FUN_106a56718(long param_1)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 8) != 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010beebbe0(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 106a567d4; end: 106a5680b;  */

void FUN_106a567d4(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bee1860(param_1,param_2,*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a5680c; end: 106a568df; -[SCCameraInclusionPanelSurveySettingsViewModel loadSurveyDataWithCallback:] */

void FUN_106a5680c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010be86760(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106a568e0; end: 106a56a0b;  */

void FUN_106a568e0(long param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_3 == 0) || (param_2 == 0)) {
      _objc_copyWeak(auStack_38,param_1 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar2);
      func_0x00010be14de0(lVar1);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_38);
    }
    else {
      _objc_retain(param_2);
      uVar2 = *(undefined8 *)(lVar1 + 8);
      *(long *)(lVar1 + 8) = param_2;
      _objc_release(uVar2);
      func_0x00010be68920(lVar1);
      lVar3 = *(long *)(param_1 + 0x20);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x10))
                  (lVar3,*(undefined8 *)(lVar1 + 8),PTR____kCFBooleanFalse_11034ab60);
      }
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106a56a0c; end: 106a56b2f;  */

void FUN_106a56a0c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      lVar3 = lVar1;
      func_0x00010bdc5b20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(lVar1 + 8);
      *(long *)(lVar1 + 8) = lVar3;
      _objc_release(uVar4);
      func_0x00010be68920(lVar1);
    }
    else {
      lVar3 = param_3;
      func_0x00010c09e4e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be68920(lVar1);
      _objc_release(lVar3);
    }
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(lVar1 + 8);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,uVar4,puVar2);
      _objc_release(puVar2);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a56b30; end: 106a56c37; -[SCCameraInclusionPanelSurveySettingsViewModel setLatestSurveyDataWithSurveyData:] */

void FUN_106a56b30(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c079460();
  if ((uVar1 & 1) == 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010beebbe0(param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(ulong *)(param_1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106a56c38; end: 106a56c73;  */

void FUN_106a56c38(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bee1860(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a56c74; end: 106a56c7f; -[SCCameraInclusionPanelSurveySettingsViewModel pushToValdiMarshaller:] */

undefined8 FUN_106a56c74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cff58;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  FUN_106a58318();
  return param_3;
}



/* Entry: 106a56c80; end: 106a56ef3; -[SCCameraInclusionPanelSurveySettingsViewModel _readSurveyDataFromCacheWithCompletion:] */

void FUN_106a56c80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf4c240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  puVar4 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x106a56da4;
  puStack_58 = &UNK_1108a0970;
  lStack_50 = param_1;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c13e480(uVar2,param_2,puVar3,puVar4,&puStack_70);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106a56ef4; end: 106a570db; -[SCCameraInclusionPanelSurveySettingsViewModel _writeSurveyData:toCacheWithCompletion:] */

void FUN_106a56ef4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b08b8;
  _objc_alloc();
  func_0x00010c0295e0();
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(puVar1);
  func_0x00010c12b940(uVar3);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  if (*(long *)(param_3 + 0x20) == 0) {
    lVar6 = *(long *)(param_3 + 0x30);
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106a57268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x10))(lVar6,0);
      return;
    }
  }
  else {
    lVar6 = param_3 + 0x38;
    _objc_loadWeakRetained();
    if (lVar6 != 0) {
      uVar2 = *(undefined8 *)(lVar6 + 0x10);
      func_0x00010bf4c240(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
      func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar6;
      func_0x00010be0c540(lVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_3 + 0x30);
      _objc_retain(uVar7);
      func_0x00010c14a860(uVar3);
      _objc_release(lVar5);
      _objc_release(puVar4);
      _objc_release(puVar1);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar7);
    }
    _objc_release(lVar6);
  }
  return;
}



/* Entry: 106a570dc; end: 106a5726b;  */

void FUN_106a570dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106a57268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x10))(lVar6,0);
      return;
    }
  }
  else {
    lVar6 = param_1 + 0x38;
    _objc_loadWeakRetained();
    if (lVar6 != 0) {
      uVar1 = *(undefined8 *)(lVar6 + 0x10);
      func_0x00010bf4c240(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
      func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar6;
      func_0x00010be0c540(lVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar7);
      func_0x00010c14a860(uVar2);
      _objc_release(lVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar7);
    }
    _objc_release(lVar6);
  }
  return;
}



/* Entry: 106a5726c; end: 106a572b3;  */

void FUN_106a5726c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010be6cac0(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106a572a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 106a572b4; end: 106a57313; -[SCCameraInclusionPanelSurveySettingsViewModel _fetchSurveyDataWithCompletion:] */

void FUN_106a572b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cff38;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010bfaaba0(*(undefined8 *)(param_1 + 0x20),param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a57314; end: 106a5740f; -[SCCameraInclusionPanelSurveySettingsViewModel _updateSurveyData:] */

void FUN_106a57314(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(param_3);
    func_0x00010c085740(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bdf2720(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bf09780(puVar2,param_2,param_1,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000106a544cc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f200(uVar1,param_2,puVar2,puVar3,0,0);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_1);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 106a57410; end: 106a575b3; -[SCCameraInclusionPanelSurveySettingsViewModel _createRequestFromSurveyData:] */

void FUN_106a57410(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  double dVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126cfef8;
    func_0x00010c0cb140(PTR_PTR_1126cfef8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c079460();
    if ((uVar1 & 1) == 0) {
      func_0x00010c1ec380(puVar5,param_2,1);
    }
    else {
      iVar6 = 1;
      func_0x00010c1ec360(puVar5,param_2,1);
      puVar2 = PTR_PTR_1126cff40;
      func_0x00010c0cb140(PTR_PTR_1126cff40);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010c11dde0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      dVar7 = 1.60807493534087e-314;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_106a575b4;
      puStack_68 = &UNK_110958348;
      uStack_60 = param_1;
      _objc_retain(puVar3);
      puStack_58 = puVar3;
      func_0x00010bf97e80(uVar1,param_2,&puStack_80);
      _objc_release(uVar1);
      puVar4 = puVar3;
      func_0x00010bf51e00(puVar3);
      func_0x00010c1ed1a0(puVar2,param_2,puVar4);
      _objc_release(puVar4);
      func_0x00010c298be0(param_3);
      if (0.0 < dVar7) {
        func_0x00010c298be0(param_3);
        iVar6 = (int)dVar7;
      }
      func_0x00010c220e20(puVar2,param_2,iVar6);
      func_0x00010c189980(puVar5,param_2,puVar2);
      _objc_release(puStack_58);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106a575b4; end: 106a5767f;  */

void FUN_106a575b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cff48;
  _objc_retain(param_2);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11dc20(param_2);
  func_0x00010c1e6560(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010bf38fc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be83680(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17c460(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a57680; end: 106a578c7; -[SCCameraInclusionPanelSurveySettingsViewModel _adaptDataFromGetSurveyDataResponse:] */

void FUN_106a57680(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  if (param_3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    func_0x00010c079460(param_3);
    lVar1 = param_3;
    func_0x00010bf64c80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c298be0();
    _objc_release(lVar1);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    lVar1 = param_3;
    func_0x00010bf64c80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c13be20();
    func_0x00010bf0a0e0(puVar4,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf64c80(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar3 = lVar1;
    func_0x00010c13be00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x106a577fc;
    puStack_68 = &UNK_110958378;
    uStack_60 = param_1;
    puStack_58 = puVar4;
    _objc_retain(puVar4);
    func_0x00010bf97e80(lVar3,param_2,&puStack_80);
    _objc_release(lVar3);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126cff30;
    _objc_alloc(PTR_PTR_1126cff30);
    func_0x00010c01f340((double)(int)lVar2);
    _objc_release(puStack_58);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106a578c8; end: 106a579c3; -[SCCameraInclusionPanelSurveySettingsViewModel _numberArrayFromProtoIntArray:] */

void FUN_106a578c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x106a5797c;
    puStack_30 = &UNK_110842ff8;
    _objc_retain();
    puStack_28 = puVar2;
    func_0x00010bf980c0(param_3,param_2,&puStack_48);
    _objc_release(param_3);
    _objc_release(puStack_28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106a579c4; end: 106a57a97; -[SCCameraInclusionPanelSurveySettingsViewModel _protoIntArrayFromNumberArray:] */

void FUN_106a579c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126b7828;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x106a57a6c;
    puStack_30 = &UNK_1109583a8;
    _objc_retain();
    puStack_28 = puVar1;
    func_0x00010bf97e80(param_3,param_2,&puStack_48);
    _objc_release(param_3);
    _objc_release(puStack_28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a57a98; end: 106a57b57; -[SCCameraInclusionPanelSurveySettingsViewModel _expirationDateFromDate:] */

void FUN_106a57a98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_retain(param_3);
  func_0x00010bf5e300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf44640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bf65700(puVar2);
  func_0x00010c189d40(puVar2,param_2,puVar1 + 1);
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf650e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106a57b58; end: 106a57c63; -[SCCameraInclusionPanelSurveySettingsViewModel _onReadCache:error:] */

void FUN_106a57b58(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126cff00;
  _objc_retain(param_4);
  func_0x00010c263fa0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_4 != (undefined **)0x0) {
    ppuVar1 = param_4;
  }
  puVar2 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110daeeb8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar5);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 0x28),param_2,puVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106a57c64; end: 106a57d23; -[SCCameraInclusionPanelSurveySettingsViewModel _onWriteCache:] */

void FUN_106a57c64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126cff00;
  func_0x00010c264040(PTR_PTR_1126cff00);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 0x28),param_2,puVar4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106a57d24; end: 106a57e77; -[SCCameraInclusionPanelSurveySettingsViewModel _onDataInit:source:error:] */

void FUN_106a57d24(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined **param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126cff00;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c263f20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_4 != (undefined **)0x0) {
    ppuVar1 = param_4;
  }
  puVar2 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110dae8d8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar5);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_5 != (undefined **)0x0) {
    ppuVar1 = param_5;
  }
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daeeb8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar2);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 0x28),param_2,puVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106a57e78; end: 106a57ecb; -[SCCameraInclusionPanelSurveySettingsViewModel .cxx_destruct] */

void FUN_106a57e78(long param_1)

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



/* Entry: 106a57ecc; end: 106a57ee3;  */

void FUN_106a57ecc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e687f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e687f8,
                      &PTR____CFConstantStringClassReference_110e68818,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106a57ee4; end: 106a57f0f; +[SCGrapheneInclusionPanelSurveyMetric surveyReadCache] */

void FUN_106a57ee4(void)

{
  _objc_alloc(PTR_PTR_1126cff00);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a57f10; end: 106a57f3b; +[SCGrapheneInclusionPanelSurveyMetric surveyWriteCache] */

void FUN_106a57f10(void)

{
  _objc_alloc(PTR_PTR_1126cff00);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a57f3c; end: 106a57f67; +[SCGrapheneInclusionPanelSurveyMetric surveyFetchServer] */

void FUN_106a57f3c(void)

{
  _objc_alloc(PTR_PTR_1126cff00);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a57f68; end: 106a57f93; +[SCGrapheneInclusionPanelSurveyMetric surveySendServer] */

void FUN_106a57f68(void)

{
  _objc_alloc(PTR_PTR_1126cff00);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a57f94; end: 106a57fbf; +[SCGrapheneInclusionPanelSurveyMetric surveyDataInit] */

void FUN_106a57f94(void)

{
  _objc_alloc(PTR_PTR_1126cff00);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a57fc0; end: 106a5805f; -[SCGrapheneInclusionPanelSurveyMetric description] */

void FUN_106a57fc0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e68838;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e68838,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f4768;
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



/* Entry: 106a58060; end: 106a581cb; -[SCGrapheneRegistry inclusionPanelSurveyGraphene] */

void FUN_106a58060(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106a580e8;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c4860 != -1) {
    func_0x00010002a2fc(0x1136c4860,&puStack_48);
  }
  uVar1 = uRam00000001136c4858;
  _objc_retain(uRam00000001136c4858);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a581cc; end: 106a581ef; +[SCCInclusionPanelSurveyDataProvider valdiMarshallableObjectDescriptor] */

void FUN_106a581cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109583d8;
  param_1[1] = &PTR_DAT_110958420;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106a581f0; end: 106a5824b;  */

undefined8 FUN_106a581f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cff58;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  FUN_106a58318();
  return param_1;
}



/* Entry: 106a5824c; end: 106a58257; +[SCCInclusionPanelSurvey componentPath] */

undefined ** FUN_106a5824c(void)

{
  return &PTR____CFConstantStringClassReference_110e688f8;
}



/* Entry: 106a58258; end: 106a5828b; -[SCCInclusionPanelSurvey initWithViewModel:componentContext:runtime:] */

void FUN_106a58258(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f4770;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 106a5828c; end: 106a582d7; -[SCCInclusionPanelSurvey setViewModel:] */

void FUN_106a5828c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  FUN_106a58318();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a582d8; end: 106a58317; -[SCCInclusionPanelSurvey viewModel] */

void FUN_106a582d8(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  FUN_106a58318();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106a58318; end: 106a5831f;  */

void FUN_106a58318(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106a58320; end: 106a58353; -[SCCInclusionPanelSurveyContext init] */

void FUN_106a58320(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f4778;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 106a58354; end: 106a58367; +[SCCInclusionPanelSurveyContext valdiMarshallableObjectDescriptor] */

void FUN_106a58354(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110958430;
  param_1[1] = &PTR_DAT_1109584f0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a58368; end: 106a583a7; -[SCCQuestion initWithQuestionId:choice:] */

void FUN_106a58368(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f4780;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 106a583a8; end: 106a583bf; +[SCCQuestion valdiMarshallableObjectDescriptor] */

void FUN_106a583a8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110958518;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a583c0; end: 106a58403; -[SCCSurveyData initWithIsOptedIn:version:questions:] */

void FUN_106a583c0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f4788;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 106a58404; end: 106a58427; +[SCCSurveyData valdiMarshallableObjectDescriptor] */

void FUN_106a58404(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110958560;
  param_1[1] = &PTR_DAT_1109585c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a58428; end: 106a5849b; -[UNISurveyService initWithUnifiedGrpcService:] */

undefined1 * FUN_106a58428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4790;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a5849c; end: 106a5857f; -[UNISurveyService getSurveyDataWithRequest:callOptionsBuilder:handler:] */

void FUN_106a5849c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126cff60;
  _objc_opt_class(PTR_PTR_1126cff60);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e68918,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a58580; end: 106a58663; -[UNISurveyService updateSurveyDataWithRequest:callOptionsBuilder:handler:] */

void FUN_106a58580(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126cff68;
  _objc_opt_class(PTR_PTR_1126cff68);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e68938,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a58664; end: 106a5866f; -[UNISurveyService .cxx_destruct] */

void FUN_106a58664(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


