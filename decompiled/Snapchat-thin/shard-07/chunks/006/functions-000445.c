/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105830a18; end: 105830a93; -[SCUcoSnapEditorAnnouncerImpl init] */

undefined1 * FUN_105830a18(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ea8b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105830a94; end: 105830abb; -[SCUcoSnapEditorAnnouncerImpl exportStateObservable] */

void FUN_105830a94(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105830abc; end: 105830ae3; -[SCUcoSnapEditorAnnouncerImpl loggingParamsBuilderObservable] */

void FUN_105830abc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105830ae4; end: 105830b6f; -[SCUcoSnapEditorAnnouncerImpl snapEditor:willExportSnapDocInEditor:exportType:] */

void FUN_105830ae4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126bef58;
  func_0x00010c240e80(PTR_PTR_1126bef58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae558;
  puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105830b70; end: 105830bb3; -[SCUcoSnapEditorAnnouncerImpl snapEditor:didInitiateExportWithType:] */

void FUN_105830b70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126bef58;
  func_0x00010c2408a0(PTR_PTR_1126bef58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105830bb4; end: 105830bf7; -[SCUcoSnapEditorAnnouncerImpl snapEditor:didExportWithType:] */

void FUN_105830bb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126bef58;
  func_0x00010c240880(PTR_PTR_1126bef58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105830bf8; end: 105830c03; -[SCUcoSnapEditorAnnouncerImpl snapEditor:updateLoggingWithBuilder:] */

void FUN_105830bf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_next__112614028,param_4);
  return;
}



/* Entry: 105830c04; end: 105830cb7; -[SCUcoSnapEditorAnnouncerImpl snapEditor:didTriggerLifecycle:] */

void FUN_105830c04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bef58;
  if (param_4 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c240e40(PTR_PTR_1126bef58);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_4 == 8) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c240e20(PTR_PTR_1126bef58);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_4 != 4) goto LAB_105830ca4;
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c240e00(PTR_PTR_1126bef58);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
LAB_105830ca4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105830cb8; end: 105830ce7; -[SCUcoSnapEditorAnnouncerImpl .cxx_destruct] */

void FUN_105830cb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105830ce8; end: 105830d43; -[SCUcoSnapEditorAnnouncerServiceProvider provide] */

void FUN_105830ce8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108b6d30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bef68;
  _objc_alloc(PTR_PTR_1126bef68);
  func_0x00010c047a00();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105830d44; end: 105830d5f;  */

void FUN_105830d44(void)

{
  _objc_opt_new(PTR_PTR_1126bef60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105830d60; end: 105830d6f; -[SCUcoSnapEditorAnnouncerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105830d60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272a828);
  return;
}



/* Entry: 105830d70; end: 105830de3; -[UNISCMapsDeviceManagementMapDevice initWithUnifiedGrpcService:] */

undefined1 * FUN_105830d70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea8c0;
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



/* Entry: 105830de4; end: 105830ec7; -[UNISCMapsDeviceManagementMapDevice setPrimaryWithRequest:callOptionsBuilder:handler:] */

void FUN_105830de4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bef70;
  _objc_opt_class(PTR_PTR_1126bef70);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e06118,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105830ec8; end: 105830fab; -[UNISCMapsDeviceManagementMapDevice isPrimaryWithRequest:callOptionsBuilder:handler:] */

void FUN_105830ec8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bef78;
  _objc_opt_class(PTR_PTR_1126bef78);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e06138,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105830fac; end: 105830fb7; -[UNISCMapsDeviceManagementMapDevice .cxx_destruct] */

void FUN_105830fac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105830fb8; end: 10583101f; +[SCMapsDeviceManagementSetPrimaryRequest descriptor] */

void FUN_105830fb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0b88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a70f70,
                        &PTR____CFConstantStringClassReference_110e06158,
                        &PTR_s_snapchat_maps_device_113104a80,0,0,4,0x1c);
    puRam00000001136c0b88 = puVar1;
  }
  return;
}



/* Entry: 105831020; end: 105831087; +[SCMapsDeviceManagementSetPrimaryResponse descriptor] */

void FUN_105831020(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0b90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a70fc0,
                        &PTR____CFConstantStringClassReference_110e06178,
                        &PTR_s_snapchat_maps_device_113104a80,0,0,4,0x1c);
    puRam00000001136c0b90 = puVar1;
  }
  return;
}



/* Entry: 105831088; end: 1058310ef; +[SCMapsDeviceManagementIsPrimaryRequest descriptor] */

void FUN_105831088(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0b98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a71010,
                        &PTR____CFConstantStringClassReference_110e06198,
                        &PTR_s_snapchat_maps_device_113104a80,0,0,4,0x1c);
    puRam00000001136c0b98 = puVar1;
  }
  return;
}



/* Entry: 1058310f0; end: 105831157; +[SCMapsDeviceManagementIsPrimaryResponse descriptor] */

void FUN_1058310f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0ba0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a71060,
                        &PTR____CFConstantStringClassReference_110e061b8,
                        &PTR_s_snapchat_maps_device_113104a80,&PTR_DAT_113104a98,1,4,0x1c);
    puRam00000001136c0ba0 = puVar1;
  }
  return;
}



/* Entry: 105831158; end: 1058311cf; -[SCMapLazyCOFWrapper initWithCOFRead:] */

undefined1 * FUN_105831158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea8c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058311d0; end: 10583128f; -[SCMapLazyCOFWrapper initWithCOF:defaultBoolValue:configProvider:] */

undefined8
FUN_1058311d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105831290;
  puStack_50 = &UNK_1108b6d50;
  uStack_48 = param_5;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010bffa360(param_1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_5);
  return param_1;
}



/* Entry: 105831290; end: 1058312bf;  */

void FUN_105831290(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),
                      0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithBool__1126157d0,uVar1);
  return;
}



/* Entry: 1058312c0; end: 105831387; -[SCMapLazyCOFWrapper initWithCOF:defaultFloatValue:configProvider:] */

undefined8
FUN_1058312c0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105831388;
  puStack_60 = &UNK_1108b6d80;
  uStack_58 = param_5;
  uStack_50 = param_4;
  uStack_48 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bffa360(param_2,param_3,&puStack_78);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_5);
  return param_2;
}



/* Entry: 105831388; end: 1058313b3;  */

void FUN_105831388(long param_1,undefined8 param_2)

{
  func_0x00010bfb2cc0(*(undefined4 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),param_2,
                      *(undefined8 *)(param_1 + 0x28),0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithFloat__1126157e8);
  return;
}



/* Entry: 1058313b4; end: 10583140b; -[SCMapLazyCOFWrapper storedValue] */

void FUN_1058313b4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    (**(code **)(lVar2 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar2;
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10583140c; end: 10583143b; -[SCMapLazyCOFWrapper .cxx_destruct] */

void FUN_10583140c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10583143c; end: 105831537; -[SCBasemapPersonalizationImpl initWithBasemapPersonalizationConfig:enable3DSatelliteToggle:zoomFor3DSatelliteToggle:minZoomForTiltAndRotate:] */

undefined1 *
FUN_10583143c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ea8d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105831538; end: 10583157f; -[SCBasemapPersonalizationImpl customDarkStyleName] */

void FUN_105831538(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf61420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105831580; end: 1058315c7; -[SCBasemapPersonalizationImpl customLightStyleName] */

void FUN_105831580(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf618c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1058315c8; end: 10583160f; -[SCBasemapPersonalizationImpl maxZoom] */

double FUN_1058315c8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c32c0();
  _objc_release(uVar1);
  return (double)(uVar2 & 0xffffffff);
}



/* Entry: 105831610; end: 10583168f; -[SCBasemapPersonalizationImpl minZoomForTiltAndRotate] */

double FUN_105831610(float param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c257f40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar1);
  if (param_1 == 0.0) {
    uVar2 = *(ulong *)(param_2 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0cdec0();
    dVar4 = (double)(uVar3 & 0xffffffff);
    _objc_release(uVar2);
  }
  else {
    dVar4 = (double)param_1;
  }
  return dVar4;
}



/* Entry: 105831690; end: 105831707; -[SCBasemapPersonalizationImpl enable3DOrSatelliteToggle] */

undefined8 FUN_105831690(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c257f40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf8efc0();
    _objc_release(uVar3);
  }
  else {
    uVar4 = 1;
  }
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 105831708; end: 105831787; -[SCBasemapPersonalizationImpl zoomFor3DOrSatelliteToggle] */

double FUN_105831708(float param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c257f40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar1);
  if (param_1 == 0.0) {
    uVar2 = *(ulong *)(param_2 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2bf180();
    dVar4 = (double)(uVar3 & 0xffffffff);
    _objc_release(uVar2);
  }
  else {
    dVar4 = (double)param_1;
  }
  return dVar4;
}



/* Entry: 105831788; end: 1058318c3; -[SCBasemapPersonalizationImpl .cxx_destruct] */

void FUN_105831788(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058318c4; end: 1058319b3; -[SCBasemapPersonalizationServiceProvider _createPersonalization] */

void FUN_1058318c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126bef90;
  _objc_alloc(PTR_PTR_1126bef90);
  uVar2 = param_1;
  func_0x00010be49bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010beeb5e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e06218,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010beeb600(0,param_1,param_2,&PTR____CFConstantStringClassReference_110e06238);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeb600(0,param_1,param_2,&PTR____CFConstantStringClassReference_110e06258);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7320(puVar1,param_2,uVar2,uVar3,uVar4,param_1);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058319b4; end: 105831a6b; -[SCBasemapPersonalizationServiceProvider _lazyPersonalizationConfig] */

void FUN_1058319b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105831a6c; end: 105831aab;  */

void FUN_105831a6c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be13040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105831aac; end: 105831c5b; -[SCBasemapPersonalizationServiceProvider _fetchPersonalizationConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105831aac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lStack_58;
  
  puVar2 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e06278);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined *)(param_1 + _DAT_11272a848);
  _objc_loadWeakRetained();
  puVar4 = puVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0b84a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = puVar5;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf04a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar4);
  puVar3 = PTR_PTR_1126bef80;
  if (puVar6 == (undefined *)0x0) {
    func_0x0001058317d0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = puVar5;
    func_0x00010c296d80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf04a80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    lStack_58 = 0;
    func_0x00010c0f40e0(puVar3,param_2,puVar7,&lStack_58);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lStack_58;
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    if ((lVar1 == 0) && (puVar3 != (undefined *)0x0)) {
      _objc_retain(puVar3);
      puVar4 = puVar3;
    }
    else {
      func_0x0001058317d0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105831c5c; end: 105831d03; -[SCBasemapPersonalizationServiceProvider _wrap:boolDefault:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105831c5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bef98;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  param_1 = param_1 + _DAT_11272a848;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa2e0(puVar1,param_2,param_3,param_4,lVar2);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105831d04; end: 105831dab; -[SCBasemapPersonalizationServiceProvider _wrap:floatDefault:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105831d04(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bef98;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  param_2 = param_2 + _DAT_11272a848;
  _objc_loadWeakRetained(param_2);
  lVar2 = param_2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa300(param_1,puVar1,param_3,param_4,lVar2);
  _objc_release(param_4);
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105831dac; end: 105831de3; -[SCBasemapPersonalizationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105831dac(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a848);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272a84c);
  return;
}



/* Entry: 105831de4; end: 105831e7b; -[SCCheckInFetchConstraint initWithCenterCoordinate:radius:expirationDate:] */

undefined1 *
FUN_105831de4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ea8d8;
  uStack_50 = param_4;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 105831e7c; end: 105831ef3; +[SCCheckInFetchConstraint defaultForCenterCoordinate:] */

void FUN_105831e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_alloc();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x4072c00000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd500(param_1,param_2,0x402e000000000000,param_3,param_4,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105831ef4; end: 105831f17; -[SCCheckInFetchConstraint copyWithZone:] */

undefined8 FUN_105831ef4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105831f18; end: 105831ffb; -[SCCheckInFetchConstraint hash] */

ulong FUN_105831f18(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf34640();
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfde980();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf34640(param_1);
  func_0x00010c0df720(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfde980();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c11ef60(param_1);
  func_0x00010c0df720(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfde980();
  func_0x00010bf9c720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return (ulong)puVar4 ^ (ulong)puVar2 ^ (ulong)puVar6 ^ uVar7;
}



/* Entry: 105831ffc; end: 10583213f; -[SCCheckInFetchConstraint isEqual:] */

ulong FUN_105831ffc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar4 = 1;
  }
  else {
    puVar2 = PTR_PTR_1126befa0;
    _objc_opt_class(PTR_PTR_1126befa0);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    if (uVar1 == 0) {
      uVar4 = 0;
    }
    else {
      func_0x00010bf34640(param_1);
      func_0x00010bf34640(param_3);
      func_0x00010bf34640(param_1);
      func_0x00010bf34640(param_3);
      func_0x00010c11ef60(param_1);
      func_0x00010c11ef60(param_3);
      func_0x00010bf9c720();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010bf9c720();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_1);
      _objc_retain(uVar3);
      if (param_1 == uVar3) {
        uVar4 = 1;
      }
      else if (uVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = param_1;
        func_0x00010c071ae0(param_1);
      }
      _objc_release(uVar3);
      _objc_release(param_1);
      _objc_release(uVar3);
      _objc_release(param_1);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 105832140; end: 105832147; -[SCCheckInFetchConstraint centerCoordinate] */

undefined1  [16] FUN_105832140(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 105832148; end: 10583214f; -[SCCheckInFetchConstraint radius] */

undefined8 FUN_105832148(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105832150; end: 105832157; -[SCCheckInFetchConstraint expirationDate] */

undefined8 FUN_105832150(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105832158; end: 105832163; -[SCCheckInFetchConstraint .cxx_destruct] */

void FUN_105832158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105832164; end: 10583223b; -[SCCheckInFetchConstraint allowFetchForCoordinate:] */

bool FUN_105832164(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  undefined *unaff_x20;
  long unaff_x21;
  double dVar3;
  
  lVar2 = param_2;
  func_0x00010bf9c720();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
LAB_1058321e0:
    func_0x00010bf34640(param_2);
    func_0x000108d312a8();
    dVar3 = param_1;
    func_0x00010c11ef60(param_2);
    bVar1 = dVar3 <= param_1;
    if (lVar2 == 0) goto LAB_10583221c;
  }
  else {
    unaff_x20 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = param_2;
    func_0x00010bf9c720(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(unaff_x20,param_3,unaff_x21);
    if (param_1 < 0.0) goto LAB_1058321e0;
    bVar1 = true;
  }
  _objc_release(unaff_x21);
  _objc_release(unaff_x20);
LAB_10583221c:
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 10583223c; end: 10583251b; -[SCCheckInNearbyOptionFetcher initWithLocationProvider:sharingPreferencesProvider:checkinRequestService:placesRequestService:deviceLocationPermissionsManager:circumstanceEngine:] */

undefined8 *
FUN_10583223c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126ea8e0;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[3];
    puVar2[3] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar2[4];
    puVar2[4] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[1];
    puVar2[1] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[2];
    puVar2[2] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[0xe];
    puVar2[0xe] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[5];
    puVar2[5] = param_7;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___MKDistanceFormatter_1126b1f88;
    _objc_alloc_init();
    uVar3 = puVar2[0xc];
    puVar2[0xc] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar3 = puVar2[6];
    puVar2[6] = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar3 = puVar2[7];
    puVar2[7] = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar5);
    *(undefined4 *)(puVar2 + 0xd) = 0;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x15];
    puVar2[0x15] = puVar4;
    _objc_release(uVar3);
    *(undefined1 *)(puVar2 + 8) = 0;
    iVar1 = (int)puVar2[0xe];
    func_0x0001090220a0();
    if (iVar1 == 0) {
      func_0x00010bec04c0(puVar2);
    }
    else {
      uVar6 = puVar2[3];
      func_0x00010c09ea00();
      _objc_retainAutoreleasedReturnValue();
      if ((uVar6 == 0) || (uVar7 = uVar6, func_0x000107f492b0(0x4072c00000000000), (uVar7 & 1) == 0)
         ) {
        uVar8 = puVar2[5];
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar8;
        func_0x00010c0883a0();
        _objc_release(uVar8);
        if ((int)uVar3 != 0) {
          func_0x00010bec04c0(puVar2);
        }
      }
      _objc_release(uVar6);
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 10583251c; end: 10583251f; -[SCCheckInNearbyOptionFetcher _startLocationUpdates] */

void FUN_10583251c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be91410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestLocation_112581ea0);
  return;
}



/* Entry: 105832520; end: 1058325b7; -[SCCheckInNearbyOptionFetcher fetchCheckInOptionsWithContext:location:completionQueue:completion:] */

void FUN_105832520(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  _objc_retain(param_5);
  puVar1 = PTR___dispatch_main_q_11034be20;
  if (param_5 == (undefined *)0x0) {
    _objc_retain(PTR___dispatch_main_q_11034be20);
    param_5 = puVar1;
  }
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010be12ee0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x38),param_6,
                      param_5);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1058325b8; end: 10583262f; -[SCCheckInNearbyOptionFetcher fetchCheckInOptionsWithContext:completionQueue:completion:] */

void FUN_1058325b8(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  puVar1 = PTR___dispatch_main_q_11034be20;
  if (param_4 == (undefined *)0x0) {
    _objc_retain(PTR___dispatch_main_q_11034be20);
    param_4 = puVar1;
  }
  _objc_retain(param_5);
  func_0x00010be12f00(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x38),param_5,param_4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105832630; end: 10583299b; -[SCCheckInNearbyOptionFetcher fetchActionmojiOptionsWithContext:completionQueue:completion:] */

void FUN_105832630(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_7 == (undefined *)0x0) goto LAB_105832948;
  lVar1 = *(long *)(param_3 + 0x18);
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10583299c;
    puStack_78 = &UNK_11084aaa8;
    _objc_retain(param_7);
    puStack_70 = puVar7;
    puStack_68 = param_7;
    _objc_retain(puVar7);
    func_0x00010007380c(param_6,&puStack_90);
    _objc_release(puStack_70);
    _objc_release(puStack_68);
  }
  else {
    lVar2 = param_3;
    func_0x00010bf26e60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010beef3c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(puVar7);
      _objc_release(lVar3);
      _objc_release(puVar7);
      _objc_release(lVar2);
      if (param_1 <= 1200.0) {
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0xc2000000;
        pcStack_b0 = FUN_1058329b4;
        puStack_a8 = &UNK_11084aaa8;
        _objc_retain(param_7);
        lStack_a0 = param_3;
        puStack_98 = param_7;
        func_0x00010007380c(param_6,&puStack_c0);
        puVar7 = puStack_98;
        goto LAB_105832938;
      }
    }
    puVar7 = PTR_PTR_1126befa8;
    _objc_alloc_init(PTR_PTR_1126befa8);
    func_0x00010bf51c80(lVar1);
    func_0x00010c1b9120(puVar7);
    func_0x00010bf51c80(lVar1);
    func_0x00010c1be5e0(param_2,puVar7);
    func_0x00010bfe4080(lVar1);
    func_0x00010c1e6ea0(puVar7);
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c1067a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcc660();
    func_0x00010c1a3a20(puVar7);
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126befb0;
    func_0x00010c08f400(PTR_PTR_1126befb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e75a0(puVar7);
    _objc_release(puVar5);
    _objc_initWeak(auStack_c8,param_3);
    uVar4 = *(undefined8 *)(param_3 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0x19;
    func_0x0001000819a8(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_d0,auStack_c8);
    _objc_retain(param_7);
    func_0x00010bfa5a00(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_c8);
  }
LAB_105832938:
  _objc_release(puVar7);
  _objc_release(lVar1);
LAB_105832948:
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 10583299c; end: 1058329b3;  */

void FUN_10583299c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001058329b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 1058329b4; end: 1058329f7;  */

void FUN_1058329b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf26e60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,0,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1058329f8; end: 105832cfb;  */

void FUN_1058329f8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 == 0) && (lVar2 = param_3, func_0x00010bf387e0(), lVar2 != 0)) {
      lVar2 = param_3;
      func_0x00010bf387c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf38840();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0b8620();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      func_0x00010c175200(lVar1);
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162080(lVar1);
      _objc_release(puVar6);
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,lVar5);
      _objc_release(lVar5);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
                (*(long *)(param_1 + 0x20),param_2,PTR____NSArray0__struct_11034ab48);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105832cfc; end: 105832e2f; -[SCCheckInNearbyOptionFetcher _fetchOptionsWithContext:performer:resultHandler:resultHandlerQueue:] */

void FUN_105832cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  uStack_50 = param_3;
  func_0x00010c0f7fc0(param_4);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105832e30; end: 105832fe3;  */

void FUN_105832e30(long param_1)

{
  ulong uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  uVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105832fe4;
    puStack_58 = &UNK_1108b6e80;
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = uVar6;
    _objc_retain(uVar7);
    uStack_50 = uVar7;
    _objc_retainBlock();
    uVar3 = *(ulong *)(uVar1 + 0x18);
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000107f492b0(0x4072c00000000000);
    if ((uVar4 & 1) == 0) {
      func_0x00010beea500(uVar1);
    }
    else {
      _os_unfair_lock_lock(uVar1 + 0x68);
      uVar4 = uVar1;
      func_0x00010beb3b20();
      if ((uVar4 & 1) == 0) {
        uVar4 = uVar1;
        func_0x00010bf38040(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        func_0x00010c261fc0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)((long)ppuVar2 + 0x10))(ppuVar2,0,uVar4,uVar5);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _os_unfair_lock_unlock(uVar1 + 0x68);
      }
      else {
        _os_unfair_lock_unlock(uVar1 + 0x68);
        func_0x00010bdc7ce0(uVar1);
        func_0x00010be05500(uVar1);
      }
    }
    _objc_release(uVar3);
    _objc_release(ppuVar2);
    _objc_release(uStack_50);
    _objc_release(uStack_48);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 105832fe4; end: 1058330e7;  */

void FUN_105832fe4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1058330e8;
    puStack_68 = &UNK_1108465d0;
    _objc_retain(lVar1);
    lStack_48 = lVar1;
    _objc_retain(param_2);
    uStack_60 = param_2;
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_retain(param_4);
    uStack_50 = param_4;
    func_0x00010007380c(uVar2,&puStack_80);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(lStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1058330e8; end: 1058330fb;  */

void FUN_1058330e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001058330f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1058330fc; end: 105833257; -[SCCheckInNearbyOptionFetcher _fetchOptionsWithContext:location:performer:resultHandler:resultHandlerQueue:] */

void FUN_1058330fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uStack_50 = param_3;
  func_0x00010c0f7fc0(param_5);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105833258; end: 10583342b;  */

void FUN_105833258(long param_1)

{
  ulong uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  uVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10583342c;
    puStack_58 = &UNK_1108b6e80;
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = uVar7;
    _objc_retain(uVar8);
    uStack_50 = uVar8;
    _objc_retainBlock();
    uVar3 = uVar1;
    func_0x00010be988e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 == 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e062f8;
      FUN_105833544(&PTR____CFConstantStringClassReference_110e062f8);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)((long)ppuVar2 + 0x10))(ppuVar2,ppuVar5,PTR____NSArray0__struct_11034ab48,0);
      _objc_release(ppuVar5);
    }
    else {
      _os_unfair_lock_lock(uVar1 + 0x68);
      uVar4 = uVar1;
      func_0x00010beb3b20();
      if ((uVar4 & 1) == 0) {
        uVar4 = uVar1;
        func_0x00010bf38040(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar1;
        func_0x00010c261fc0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)((long)ppuVar2 + 0x10))(ppuVar2,0,uVar4,uVar6);
        _objc_release(uVar6);
        _objc_release(uVar4);
        _os_unfair_lock_unlock(uVar1 + 0x68);
      }
      else {
        _os_unfair_lock_unlock(uVar1 + 0x68);
        func_0x00010bdc7ce0(uVar1);
        func_0x00010be05500(uVar1);
      }
    }
    _objc_release(uVar3);
    _objc_release(ppuVar2);
    _objc_release(uStack_50);
    _objc_release(uStack_48);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 10583342c; end: 10583352f;  */

void FUN_10583342c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105833530;
    puStack_68 = &UNK_1108465d0;
    _objc_retain(lVar1);
    lStack_48 = lVar1;
    _objc_retain(param_2);
    uStack_60 = param_2;
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_retain(param_4);
    uStack_50 = param_4;
    func_0x00010007380c(uVar2,&puStack_80);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(lStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105833530; end: 105833543;  */

void FUN_105833530(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105833540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105833544; end: 1058335b7;  */

void FUN_105833544(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,param_1,
                      *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e06378,200,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058335b8; end: 10583369b; -[SCCheckInNearbyOptionFetcher _waitForLocationThenRunWrappedResultHandler:performer:context:] */

void FUN_1058335b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0883a0();
  if ((uVar3 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x70);
    func_0x0001090220a0();
    _objc_release(uVar2);
    if (iVar1 != 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e06318;
      FUN_105833544(&PTR____CFConstantStringClassReference_110e06318);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc7ce0(param_1,param_2,param_3,param_5);
      func_0x00010be98060(param_1,param_2,ppuVar4,PTR____NSArray0__struct_11034ab48,0);
      _objc_release(ppuVar4);
      goto LAB_105833684;
    }
  }
  else {
    _objc_release(uVar2);
  }
  func_0x00010bdc7ce0(param_1,param_2,param_3,param_5);
  func_0x00010be91400(param_1);
LAB_105833684:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10583369c; end: 105833807; -[SCCheckInNearbyOptionFetcher _addPendingWrappedResultHandler:context:] */

void FUN_10583369c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar5 = *(undefined **)(param_1 + 0xa8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(puVar5,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar4 = param_3;
  _objc_retainBlock(param_3);
  puVar2 = puVar5;
  func_0x00010c174bc0(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (puVar2 == (undefined *)0x0) {
    uVar3 = param_3;
    _objc_retainBlock(param_3);
    func_0x00010c2268e0(puVar1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  else {
    _objc_retain(puVar2);
    puVar1 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c0d3c80(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar4,param_2,puVar1,puVar2);
  _objc_release(puVar2);
  func_0x00010c2273e0(param_1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105833808; end: 105833a3b; -[SCCheckInNearbyOptionFetcher _runPendingWrappedResultHandlersWithError:options:suggestedOption:] */

void FUN_105833808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010c2bd740(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2273e0(param_1,param_2,puVar3);
  _objc_release(puVar3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x10583393c;
  puStack_60 = &UNK_1108b6eb0;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf97ce0(uVar2,param_2,&puStack_78);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105833a3c; end: 105833b0b; -[SCCheckInNearbyOptionFetcher _doFetchForLocation:context:performer:] */

void FUN_105833a3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = param_5 == *(long *)(param_1 + 0x30);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105833b0c;
  puStack_70 = &UNK_1108b0960;
  lStack_68 = param_1;
  uStack_60 = param_3;
  lStack_58 = param_5;
  uStack_50 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar1,param_2,&puStack_88);
  _objc_release(lStack_58);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105833b0c; end: 105833b33;  */

void FUN_105833b0c(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x40) & 1) != 0) {
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x40) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be05730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__doPlacesFetchForLocation_contex_11255ef68,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105833b34; end: 105833cb7; -[SCCheckInNearbyOptionFetcher _handleFailedFetchError:location:context:performer:] */

void FUN_105833b34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  double dVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c06fc80();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(long *)(param_1 + 0x48) + 1;
    *(ulong *)(param_1 + 0x48) = uVar1;
    if (uVar1 < 4) {
      dVar2 = (double)uVar1 + -1.0;
      _exp2(dVar2);
      uVar3 = NEON_fminnm(dVar2,0x404e000000000000);
      _objc_initWeak(auStack_58,param_1);
      _objc_copyWeak(auStack_68,auStack_58);
      uStack_60 = param_5;
      _objc_retain(param_6);
      _objc_retain(param_4);
      func_0x00010c0f7fe0(uVar3,param_6);
      _objc_release(param_4);
      _objc_release(param_6);
      _objc_destroyWeak(auStack_68);
      _objc_destroyWeak(auStack_58);
    }
    else {
      func_0x00010be98060(param_1);
    }
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105833cb8; end: 105833d2b;  */

void FUN_105833cb8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(lVar1 + 0x18);
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000107f49238();
    uVar4 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + 0x28);
    }
    func_0x00010be05500(lVar1,param_2,uVar4,*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105833d2c; end: 105833f3f; -[SCCheckInNearbyOptionFetcher _doPlacesFetchForLocation:context:performer:] */

void FUN_105833d2c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126befb8;
  _objc_alloc_init(PTR_PTR_1126befb8);
  func_0x00010bf51c80(param_5);
  func_0x00010c1b9120(puVar1);
  func_0x00010bf51c80(param_5);
  func_0x00010c1be5e0(param_2,puVar1);
  func_0x00010bfe4080(param_5);
  func_0x00010c1a3ee0(puVar1);
  puVar2 = PTR_PTR_1126befb0;
  func_0x00010c11fce0(PTR_PTR_1126befb0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17c120(puVar1);
  _objc_release(puVar2);
  func_0x00010c1dcdc0(puVar1);
  func_0x00010c1cbba0(puVar1);
  func_0x00010c1cbb80(puVar1);
  _objc_initWeak(auStack_58,param_3);
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + 0x38);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_7);
  _objc_retain(param_5);
  uStack_60 = param_6;
  func_0x00010bfc7ee0(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  return;
}



/* Entry: 105833f40; end: 105833ff7;  */

void FUN_105833f40(long param_1,undefined **param_2,long param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x40) = 0;
    if ((param_2 == (undefined **)0x0) && (param_3 != 0)) {
      func_0x00010be31720(param_1);
      param_2 = (undefined **)0x0;
    }
    else {
      if (param_2 == (undefined **)0x0) {
        param_2 = &PTR____CFConstantStringClassReference_110e06338;
        FUN_105833544(&PTR____CFConstantStringClassReference_110e06338);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010be29360(param_1);
    }
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105833ff8; end: 10583437b; -[SCCheckInNearbyOptionFetcher _handleSuccessfulPlacesFetchResponse:forLocation:context:] */

void FUN_105833ff8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_initWeak(auStack_138,param_1);
  lVar12 = param_3;
  func_0x00010c0d6fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = 0xc2000000;
  puVar10 = auStack_138;
  _objc_copyWeak(auStack_140);
  _objc_retain(param_4);
  lVar1 = lVar12;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  _os_unfair_lock_lock(param_1 + 0x68);
  lVar12 = lVar1;
  func_0x00010c246ca0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17c060(param_1);
  _objc_release(lVar12);
  lVar12 = param_3;
  func_0x00010c262000();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(lVar1);
  if (lVar12 == 0) {
    uVar13 = 0;
  }
  else {
    uVar15 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(lVar1);
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar14 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != lVar14) {
            _objc_enumerationMutation(lVar1);
          }
          uVar13 = *(ulong *)(lStack_128 + lVar11 * 8);
          uVar3 = uVar13;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0720c0();
          _objc_release(uVar3);
          if ((uVar4 & 1) != 0) {
            _objc_retain(uVar13);
            goto LAB_1058341f0;
          }
          lVar11 = lVar11 + 1;
        } while (lVar2 != lVar11);
        lVar2 = lVar1;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    uVar13 = 0;
LAB_1058341f0:
    _objc_release(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(lVar12);
  func_0x00010c20fa20(param_1);
  _objc_release(uVar13);
  _objc_release(lVar12);
  puVar5 = PTR_PTR_1126befa0;
  func_0x00010bf51c80(param_4);
  func_0x00010bf696c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b360(param_1);
  _objc_release(puVar5);
  lVar12 = param_1;
  func_0x00010bf38040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c261fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be98060(param_1);
  _objc_release(lVar2);
  _objc_release(lVar12);
  _os_unfair_lock_unlock(param_1 + 0x68);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x68);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  _objc_retain(puVar10);
  puVar5 = PTR_PTR_1126bab10;
  puVar6 = puVar10;
  func_0x00010c260dc0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar10;
  func_0x00010befd580(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298180(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar8 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
  _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
  puVar6 = puVar10;
  func_0x00010c09ea00(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  puVar7 = puVar10;
  uVar16 = uVar15;
  func_0x00010c09ea00(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09abe0();
  func_0x00010c021a60(uVar15,uVar16,puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = puVar10;
  func_0x00010c0fd6a0();
  lVar12 = 0;
  if ((int)puVar6 == 1) {
    param_3 = param_3 + 0x28;
    _objc_loadWeakRetained(param_3);
    lVar12 = param_3;
    func_0x00010be1f320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  puVar9 = PTR_PTR_1126bab18;
  _objc_alloc(PTR_PTR_1126bab18);
  puVar6 = puVar10;
  func_0x00010c0fd0e0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar10;
  func_0x00010c0d4f60(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11f520(puVar10);
  func_0x00010c07c580(puVar10);
  func_0x00010bf3cb60();
  func_0x00010c01bb80(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar12);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10583437c; end: 10583459b;  */

void FUN_10583437c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126bab10;
  uVar1 = param_3;
  func_0x00010c260dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010befd580(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298180(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
  _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
  uVar1 = param_3;
  func_0x00010c09ea00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  uVar2 = param_3;
  uVar7 = param_1;
  func_0x00010c09ea00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09abe0();
  func_0x00010c021a60(param_1,uVar7,puVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0fd6a0();
  lVar6 = 0;
  if ((int)uVar1 == 1) {
    param_2 = param_2 + 0x28;
    _objc_loadWeakRetained(param_2);
    lVar6 = param_2;
    func_0x00010be1f320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  puVar5 = PTR_PTR_1126bab18;
  _objc_alloc(PTR_PTR_1126bab18);
  uVar1 = param_3;
  func_0x00010c0fd0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11f520(param_3);
  func_0x00010c07c580(param_3);
  func_0x00010bf3cb60();
  func_0x00010c01bb80(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(lVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10583459c; end: 1058346b3; -[SCCheckInNearbyOptionFetcher _sanitizedLocation:] */

void FUN_10583459c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_5);
  if (param_5 != (undefined *)0x0) {
    puVar6 = param_5;
    func_0x000107f49238();
    if ((int)puVar6 != 0) {
      _objc_retain(param_5);
      puVar6 = param_5;
      goto LAB_105834690;
    }
    puVar6 = param_5;
    func_0x00010bf51c80();
    iVar4 = (int)puVar6;
    dVar8 = ABS(param_1);
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (1.1920928955078125e-07 < ABS(param_2)) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar8)) {
        bVar1 = dVar8 < 1.1920928955078125e-07;
        bVar2 = dVar8 == 1.1920928955078125e-07;
        bVar3 = false;
      }
    }
    if ((!bVar2 && bVar1 == bVar3) && (_CLLocationCoordinate2DIsValid(), iVar4 != 0)) {
      puVar6 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
      _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
      func_0x00010bf51c80(param_5);
      dVar8 = param_1;
      func_0x00010bf01f00(param_5);
      dVar7 = dVar8;
      func_0x00010c298e00(param_5);
      puVar5 = param_5;
      func_0x00010c2709c0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c005ac0(param_1,param_2,dVar8,0,dVar7,puVar6,param_4,puVar5);
      _objc_release(puVar5);
      goto LAB_105834690;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_105834690:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1058346b4; end: 10583474b; -[SCCheckInNearbyOptionFetcher _shouldFetchPlacesNearLocation:] */

long FUN_1058346b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_assert_owner(param_1 + 0x68);
  lVar1 = param_1;
  func_0x00010bfa5cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    func_0x00010bfa5cc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51c80(param_3);
    lVar1 = param_1;
    func_0x00010bf010c0(param_1);
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 10583474c; end: 10583484b; -[SCCheckInNearbyOptionFetcher _getFormattedDistanceStringToLocation:fromLocation:] */

void FUN_10583474c(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar5 = param_5;
  func_0x00010bf51c80();
  iVar4 = (int)uVar5;
  dVar7 = ABS(param_1);
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (1.1920928955078125e-07 < ABS(param_2)) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(dVar7)) {
      bVar1 = dVar7 < 1.1920928955078125e-07;
      bVar2 = dVar7 == 1.1920928955078125e-07;
      bVar3 = false;
    }
  }
  if ((!bVar2 && bVar1 == bVar3) && (_CLLocationCoordinate2DIsValid(), iVar4 != 0)) {
    uVar5 = param_6;
    func_0x00010bf51c80();
    iVar4 = (int)uVar5;
    dVar7 = ABS(param_1);
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (1.1920928955078125e-07 < ABS(param_2)) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar7)) {
        bVar1 = dVar7 < 1.1920928955078125e-07;
        bVar2 = dVar7 == 1.1920928955078125e-07;
        bVar3 = false;
      }
    }
    if ((!bVar2 && bVar1 == bVar3) && (_CLLocationCoordinate2DIsValid(), iVar4 != 0)) {
      func_0x00010bf51c80(param_5);
      dVar7 = param_1;
      dVar6 = param_2;
      func_0x00010bf51c80(param_6);
      func_0x000108d312a8(param_1,param_2,dVar7,dVar6);
      uVar5 = *(undefined8 *)(param_3 + 0x60);
      func_0x00010c25d440(uVar5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105834824;
    }
  }
  uVar5 = 0;
LAB_105834824:
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10583484c; end: 1058348a3; -[SCCheckInNearbyOptionFetcher _requestLocation] */

void FUN_10583484c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1058348a4;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_38);
  return;
}



/* Entry: 1058348a4; end: 1058349f7;  */

void FUN_1058348a4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x6c) & 1) == 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x6c) = 1;
    _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    puVar1 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_opt_class(uVar2);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar1);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c135ca0(0x4034000000000000,uVar4);
    _objc_release(uVar3);
    _objc_release(puVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 1058349f8; end: 105834a8f;  */

void FUN_1058349f8(long param_1,long param_2)

{
  undefined **ppuVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x6c) = 0;
    if (param_2 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e06358;
      FUN_105833544(&PTR____CFConstantStringClassReference_110e06358);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be0bdc0(param_1);
      _objc_release(ppuVar1);
    }
    else {
      func_0x00010be0bdc0(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105834a90; end: 105834cab; -[SCCheckInNearbyOptionFetcher _executeResultHandlers:error:] */

void FUN_105834a90(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x68);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar1 = param_1;
  func_0x00010c2bd740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        if (param_4 != 0) {
          func_0x00010be98060(param_1,param_2,param_4,PTR____NSArray0__struct_11034ab48,0);
          goto LAB_105834c28;
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        lVar3 = param_1;
        func_0x00010beb3b20(param_1,param_2,param_3);
        if ((int)lVar3 == 0) {
          lVar3 = param_1;
          func_0x00010bf38040(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = param_1;
          func_0x00010c261fc0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be98060(param_1,param_2,0,lVar3,lVar4);
          _objc_release(lVar4);
          _objc_release(lVar3);
        }
        else {
          func_0x00010c2827c0(uVar6);
          func_0x00010be05500(param_1,param_2,param_3,uVar6,*(undefined8 *)(param_1 + 0x38));
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
LAB_105834c28:
  _objc_release(lVar2);
  _os_unfair_lock_unlock(param_1 + 0x68);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _os_unfair_lock_unlock(param_1 + 0x68);
    lVar1 = param_3;
    __Unwind_Resume();
    pcStack_138 = FUN_105834cac;
    uVar6 = *(undefined8 *)(lVar1 + 0x18);
    lStack_160 = lVar2;
    lStack_158 = param_4;
    lStack_150 = param_3;
    lStack_148 = param_1;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar1 + 0x30);
    puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_188 = 0xc2000000;
    pcStack_180 = FUN_105834d40;
    puStack_178 = &UNK_110841f80;
    uStack_170 = uVar6;
    lStack_168 = lVar1;
    _objc_retain();
    func_0x00010c0f7fc0(uVar5,param_2,&puStack_190);
    _objc_release(uStack_170);
    _objc_release(uVar6);
    return;
  }
  return;
}



/* Entry: 105834cac; end: 105834d3f; -[SCCheckInNearbyOptionFetcher locationProviderDidUpdateLocations] */

void FUN_105834cac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105834d40;
  puStack_48 = &UNK_110841f80;
  uStack_40 = uVar1;
  lStack_38 = param_1;
  _objc_retain();
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(uVar1);
  return;
}



/* Entry: 105834d40; end: 105834dd7;  */

void FUN_105834d40(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x000107f492b0(0x4072c00000000000);
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    _objc_sync_enter(uVar3);
    func_0x00010c281a60(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x88));
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x88);
    *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x88) = 0;
    _objc_release(uVar2);
    _objc_sync_exit(uVar3);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be0bdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s__executeResultHandlers_error__112560910,
               *(undefined8 *)(param_1 + 0x20),0);
    return;
  }
  return;
}



/* Entry: 105834dd8; end: 105834de3; -[SCCheckInNearbyOptionFetcher cachedActionmojiStatuses] */

void FUN_105834dd8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x78,1);
  return;
}



/* Entry: 105834de4; end: 105834deb; -[SCCheckInNearbyOptionFetcher setCachedActionmojiStatuses:] */

void FUN_105834de4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105834dec; end: 105834df7; -[SCCheckInNearbyOptionFetcher actionmojiFetchDate] */

void FUN_105834dec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x80,1);
  return;
}



/* Entry: 105834df8; end: 105834dff; -[SCCheckInNearbyOptionFetcher setActionmojiFetchDate:] */

void FUN_105834df8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105834e00; end: 105834e0b; -[SCCheckInNearbyOptionFetcher locationObserverToken] */

void FUN_105834e00(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x88,1);
  return;
}



/* Entry: 105834e0c; end: 105834e13; -[SCCheckInNearbyOptionFetcher setLocationObserverToken:] */

void FUN_105834e0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105834e14; end: 105834e1f; -[SCCheckInNearbyOptionFetcher checkInOptions] */

void FUN_105834e14(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x90,1);
  return;
}



/* Entry: 105834e20; end: 105834e27; -[SCCheckInNearbyOptionFetcher setCheckInOptions:] */

void FUN_105834e20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 105834e28; end: 105834e33; -[SCCheckInNearbyOptionFetcher suggestedOption] */

void FUN_105834e28(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x98,1);
  return;
}



/* Entry: 105834e34; end: 105834e3b; -[SCCheckInNearbyOptionFetcher setSuggestedOption:] */

void FUN_105834e34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 105834e3c; end: 105834e47; -[SCCheckInNearbyOptionFetcher fetchConstraint] */

void FUN_105834e3c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xa0,1);
  return;
}


