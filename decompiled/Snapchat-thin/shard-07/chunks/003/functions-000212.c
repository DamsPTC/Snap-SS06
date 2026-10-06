/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053cc218; end: 1053cc2ab; -[SCBitmojiSelfieServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053cc218(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112722950,0);
  _objc_destroyWeak(param_1 + _DAT_11272296c);
  _objc_destroyWeak(param_1 + _DAT_112722968);
  _objc_destroyWeak(param_1 + _DAT_112722964);
  _objc_destroyWeak(param_1 + _DAT_112722960);
  _objc_destroyWeak(param_1 + _DAT_11272295c);
  _objc_destroyWeak(param_1 + _DAT_112722958);
  _objc_destroyWeak(param_1 + _DAT_112722954);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272294c,0);
  return;
}



/* Entry: 1053cc2ac; end: 1053cc31f; -[UNISCBitmojiSnapchatProfile initWithUnifiedGrpcService:] */

undefined1 * FUN_1053cc2ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7f98;
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



/* Entry: 1053cc320; end: 1053cc403; -[UNISCBitmojiSnapchatProfile update3dProfileWithRequest:callOptionsBuilder:handler:] */

void FUN_1053cc320(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b8450;
  _objc_opt_class(PTR_PTR_1126b8450);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd7298,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1053cc404; end: 1053cc4e7; -[UNISCBitmojiSnapchatProfile update2dSelfieWithRequest:callOptionsBuilder:handler:] */

void FUN_1053cc404(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b8458;
  _objc_opt_class(PTR_PTR_1126b8458);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd72b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1053cc4e8; end: 1053cc4f3; -[UNISCBitmojiSnapchatProfile .cxx_destruct] */

void FUN_1053cc4e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053cc4f4; end: 1053cc58f; +[SCBitmojiUpdate3dProfileRequest descriptor] */

undefined * FUN_1053cc4f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb888 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a31820,
                        &PTR____CFConstantStringClassReference_110dd72d8,
                        &PTR_s_snapchat_bitmoji_profile_v1_1130d3aa0,&PTR_s_sceneId_1130d3b18,5,0x30
                        ,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10dd9b4a0);
    puRam00000001136bb888 = puVar1;
  }
  return puRam00000001136bb888;
}



/* Entry: 1053cc590; end: 1053cc5f7; +[SCBitmojiUpdate3dProfileResponse descriptor] */

void FUN_1053cc590(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb890 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a31870,
                        &PTR____CFConstantStringClassReference_110dd72f8,
                        &PTR_s_snapchat_bitmoji_profile_v1_1130d3aa0,0,0,4,0x1c);
    puRam00000001136bb890 = puVar1;
  }
  return;
}



/* Entry: 1053cc5f8; end: 1053cc65f; +[SCBitmojiUpdate2dSelfieRequest descriptor] */

void FUN_1053cc5f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb898 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a318c0,
                        &PTR____CFConstantStringClassReference_110dd7318,
                        &PTR_s_snapchat_bitmoji_profile_v1_1130d3aa0,&PTR_s_selfieId_1130d3ab8,1,8,
                        0x1c);
    puRam00000001136bb898 = puVar1;
  }
  return;
}



/* Entry: 1053cc660; end: 1053cc6c7; +[SCBitmojiUpdate2dSelfieResponse descriptor] */

void FUN_1053cc660(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb8a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a31910,
                        &PTR____CFConstantStringClassReference_110dd7338,
                        &PTR_s_snapchat_bitmoji_profile_v1_1130d3aa0,0,0,4,0x1c);
    puRam00000001136bb8a0 = puVar1;
  }
  return;
}



/* Entry: 1053cc6c8; end: 1053cc743; +[SCBitmojiRemoveBitmojiBackgroundURLRequest descriptor] */

undefined * FUN_1053cc6c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb8a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a31960,
                        &PTR____CFConstantStringClassReference_110dd7358,
                        &PTR_s_snapchat_bitmoji_profile_v1_1130d3aa0,&PTR_s_userId_1130d3ad8,2,0x18,
                        0x1c);
    func_0x00010c2289e0();
    puRam00000001136bb8a8 = puVar1;
  }
  return puRam00000001136bb8a8;
}



/* Entry: 1053cc744; end: 1053cc7ab; +[SCBitmojiRemoveBitmojiBackgroundURLResponse descriptor] */

void FUN_1053cc744(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb8b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a319b0,
                        &PTR____CFConstantStringClassReference_110dd7378,
                        &PTR_s_snapchat_bitmoji_profile_v1_1130d3aa0,0,0,4,0x1c);
    puRam00000001136bb8b0 = puVar1;
  }
  return;
}



/* Entry: 1053cc7ac; end: 1053cc813; +[SCBitmojiSelfieList descriptor] */

void FUN_1053cc7ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb8b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a31a50,
                        &PTR____CFConstantStringClassReference_110dd7398,
                        &PTR_s_snapchat_bitmoji_api_1130d3bb8,&PTR_s_version_1130d3bd0,2,0x10,0x1c);
    puRam00000001136bb8b8 = puVar1;
  }
  return;
}



/* Entry: 1053cc814; end: 1053cc87b; +[SCBitmoji3DSelfieMapping descriptor] */

void FUN_1053cc814(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb8c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a31aa0,
                        &PTR____CFConstantStringClassReference_110dd73b8,
                        &PTR_s_snapchat_bitmoji_api_1130d3bb8,&PTR_s_version_1130d3c10,2,0x10,0x1c);
    puRam00000001136bb8c0 = puVar1;
  }
  return;
}



/* Entry: 1053cc87c; end: 1053cc8f7; +[SCSelfie descriptor] */

undefined * FUN_1053cc87c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb8c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a31af0,
                        &PTR____CFConstantStringClassReference_110dd73d8,
                        &PTR_s_snapchat_bitmoji_api_1130d3bb8,&PTR_s_selfie2DId_1130d3c50,2,0xc,0x1c
                       );
    func_0x00010c2289e0();
    puRam00000001136bb8c8 = puVar1;
  }
  return puRam00000001136bb8c8;
}



/* Entry: 1053cc8f8; end: 1053cc903; -[SCComposerNetworkingBridgeGRPCServiceFactoryImpl createServiceWithServiceName:endpoint:requestPathPrefix:] */

void FUN_1053cc8f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf58c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_createServiceWithServiceName_end_1125b3cb8);
  return;
}



/* Entry: 1053cc904; end: 1053cca6f; -[SCComposerNetworkingBridgeGRPCServiceFactoryImpl createServiceWithServiceName:endpoint:requestPathPrefix:userAgentPrefix:requiresAttestation:] */

void FUN_1053cc904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126ae728;
  _objc_retain(param_3);
  func_0x00010bf24820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1ebf80(puVar1,param_2,param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_6 != 0) {
    func_0x00010c21dec0(puVar1,param_2,param_6);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (param_7 != 0) {
    lVar2 = param_7;
    func_0x00010bf1f3c0(param_7);
    func_0x00010c17ca40(puVar1,param_2,lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  func_0x00010c0b7020(param_1,param_2,param_3,puVar1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1053cca70; end: 1053ccaeb;  */

void FUN_1053cca70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf56360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1053ccaec; end: 1053ccaf7; -[SCComposerNetworkingBridgeGRPCServiceFactoryImpl pushToValdiMarshaller:] */

void FUN_1053ccaec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b899f18(param_3,param_1);
  func_0x00010b899f08();
  func_0x00010b899f00();
  func_0x00010b899e8c();
  func_0x00010b899ecc();
  return;
}



/* Entry: 1053ccaf8; end: 1053ccb03; -[SCComposerNetworkingBridgeGRPCServiceFactoryImpl .cxx_destruct] */

void FUN_1053ccaf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053ccb04; end: 1053ccb0b; -[SCScopedValdiRuntimeProviderImpl getScopedJSRuntime:] */

void FUN_1053ccb04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc9d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_getScopedJSRuntime_callbackPerfo_1125d00e8,param_3,0);
  return;
}



/* Entry: 1053ccb0c; end: 1053ccd27; -[SCScopedValdiRuntimeProviderImpl getScopedJSRuntime:callbackPerformer:] */

void FUN_1053ccb0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf8cfa0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1053ccbcc;
  puStack_48 = &UNK_1108835f0;
  uStack_40 = uVar1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010bfc9d40(param_1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1053ccd28; end: 1053ccd43;  */

void FUN_1053ccd28(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001053ccd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 1053ccd44; end: 1053ccd4b; -[SCScopedValdiRuntimeProviderImpl getScopedValdiRuntime:] */

void FUN_1053ccd44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc9d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_getScopedValdiRuntime_callbackPe_1125d0100,param_3,0);
  return;
}



/* Entry: 1053ccd4c; end: 1053cce87; -[SCScopedValdiRuntimeProviderImpl getScopedValdiRuntime:callbackPerformer:] */

void FUN_1053ccd4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf8cfa0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfbc3e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1053cce28;
  puStack_40 = &UNK_110843510;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c297280(uVar2,param_2,&puStack_58,lVar1,1);
  _objc_release(uVar2);
  func_0x00010c136580(param_1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(lVar1);
  return;
}



/* Entry: 1053cce88; end: 1053ccf57; -[SCScopedValdiRuntimeProviderImpl getScopedJSRuntimeUsingSynchronousRuntimeProvider:] */

void FUN_1053cce88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1053ccf0c;
  puStack_30 = &UNK_110883620;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c1365c0(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1053ccf58; end: 1053ccf87; -[SCScopedValdiRuntimeProviderImpl effectiveCallbackPerformer:] */

void FUN_1053ccf58(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(char *)(param_1 + 0x20) == '\0') {
    param_3 = 0;
  }
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1053ccf88; end: 1053cd02f; -[SCScopedValdiRuntimeProviderImpl requestScopedRuntimeOnce] */

void FUN_1053ccf88(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1053cd030;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1053cd030; end: 1053cd087;  */

void FUN_1053cd030(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x21) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x21) = 1;
    if (*(char *)(param_1 + 0x20) == '\x01') {
      func_0x00010c136560();
    }
    else {
      func_0x00010c1365a0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053cd088; end: 1053cd133; -[SCScopedValdiRuntimeProviderImpl requestScopedRuntimeAsynchronously] */

void FUN_1053cd088(long param_1)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  lVar1 = *(long *)(param_1 + 0x10);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1053cd134;
  puStack_38 = &UNK_110883650;
  _objc_copyWeak(auStack_30,auStack_28);
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1053cd134; end: 1053cd183;  */

void FUN_1053cd134(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053cd184; end: 1053cd253; -[SCScopedValdiRuntimeProviderImpl requestScopedRuntimeSynchronouslyWithCompletion:] */

void FUN_1053cd184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1053cd254;
  puStack_40 = &UNK_110848708;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1053cd254; end: 1053cd2bf;  */

void FUN_1053cd254(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar3 = *(long *)(param_1 + 0x20), lVar3 != 0)) {
    lVar2 = lVar1;
    func_0x00010c13ad00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,lVar2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1053cd2c0; end: 1053cd2fb; -[SCScopedValdiRuntimeProviderImpl requestScopedRuntimeSynchronously] */

void FUN_1053cd2c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c13ad00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053cd2fc; end: 1053cd323; -[SCScopedValdiRuntimeProviderImpl resolveScopedRuntimeSynchronously] */

void FUN_1053cd2fc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053cd324; end: 1053cd35f; -[SCScopedValdiRuntimeProviderImpl .cxx_destruct] */

void FUN_1053cd324(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053cd360; end: 1053cd403; -[SCComposerPlatformNonFatalErrorReporter initWithCrashLogger:runtime:] */

undefined1 *
FUN_1053cd360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7fb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053cd404; end: 1053cd537; -[SCComposerPlatformNonFatalErrorReporter reportErrorWithErrorCode:message:stacktrace:metadata:] */

void FUN_1053cd404(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126b3e90;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f40e0(puVar2,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_6 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b8460;
    func_0x00010c0f40e0(PTR_PTR_1126b8460,param_2,param_6,0);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126b3e98;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfc2380(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf45300(puVar4,param_2,param_5,uVar3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c133420(uVar1,param_2,puVar2,puVar5,param_4,puVar4);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1053cd538; end: 1053cd543; -[SCComposerPlatformNonFatalErrorReporter pushToValdiMarshaller:] */

undefined8 FUN_1053cd538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df2e0;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 1053cd544; end: 1053cd573; -[SCComposerPlatformNonFatalErrorReporter .cxx_destruct] */

void FUN_1053cd544(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053cd574; end: 1053cd577; -[SCComposerPlatformAssertFail assertFailWithMessage:] */

void FUN_1053cd574(void)

{
  return;
}



/* Entry: 1053cd578; end: 1053cd583; -[SCComposerPlatformAssertFail pushToValdiMarshaller:] */

undefined8 FUN_1053cd578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df2c8;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 1053cd584; end: 1053cd5f7; -[SCComposerRuntimeProvider initWithRuntimeManager:] */

undefined1 * FUN_1053cd584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7fb8;
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



/* Entry: 1053cd5f8; end: 1053cd5ff; -[SCComposerRuntimeProvider runtime] */

void FUN_1053cd5f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c119950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_provideMainRuntime_112624070);
  return;
}



/* Entry: 1053cd600; end: 1053cd64f; -[SCComposerRuntimeProvider getJSRuntimeWithBlock:] */

void FUN_1053cd600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c142e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc69a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053cd650; end: 1053cd657; -[SCComposerRuntimeProvider getWorkerOnExecutor:block:] */

void FUN_1053cd650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcc470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_getWorkerOnExecutor_block__1125d0ac0);
  return;
}



/* Entry: 1053cd658; end: 1053cd65f; -[SCComposerRuntimeProvider registerMainRuntimeCreatedCallback:] */

void FUN_1053cd658(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1269f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_registerMainRuntimeCreatedCallba_112627498);
  return;
}



/* Entry: 1053cd660; end: 1053cd667; -[SCComposerRuntimeProvider registerModuleFactoriesProvider:] */

void FUN_1053cd660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c126ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_registerModuleFactoriesProvider__1126274d0);
  return;
}



/* Entry: 1053cd668; end: 1053cd673; -[SCComposerRuntimeProvider .cxx_destruct] */

void FUN_1053cd668(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053cd674; end: 1053cd6e3; -[SCCreativeToolsForcedReplyValue init] */

undefined1 * FUN_1053cd674(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7fc0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126af9b8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    func_0x00010c173040(*(undefined8 *)((long)puVar1 + 8));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1053cd6e4; end: 1053cd70b; -[SCCreativeToolsForcedReplyValue value] */

void FUN_1053cd6e4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053cd70c; end: 1053cd70f; -[SCCreativeToolsForcedReplyValue expose] */

void FUN_1053cd70c(void)

{
  return;
}



/* Entry: 1053cd710; end: 1053cd71b; -[SCCreativeToolsForcedReplyValue .cxx_destruct] */

void FUN_1053cd710(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053cd71c; end: 1053cd79b;  */

void FUN_1053cd71c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5b200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1053cd79c; end: 1053cd7b3; -[SCCreativeToolsABProvider leaveRemixSettingUnsetEnabled] */

void FUN_1053cd79c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7418,0,0);
  return;
}



/* Entry: 1053cd7b4; end: 1053cd7bb; -[SCCreativeToolsABProvider isUnifiedPreviewVideoUIDefaultVideoEnabled] */

undefined8 FUN_1053cd7b4(void)

{
  return 1;
}



/* Entry: 1053cd7bc; end: 1053cd7c3; -[SCCreativeToolsABProvider isUnifiedPreviewVideoUIMultiSnapVideoEnabled] */

undefined8 FUN_1053cd7bc(void)

{
  return 1;
}



/* Entry: 1053cd7c4; end: 1053cd7db; -[SCCreativeToolsABProvider shouldBakeInEditsByDefault_MultiSnapOverlay] */

void FUN_1053cd7c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7438,0,0);
  return;
}



/* Entry: 1053cd7dc; end: 1053cd7f3; -[SCCreativeToolsABProvider shouldBakeInEdits_MultiSnapOverlay_Test] */

void FUN_1053cd7dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7458,0,0);
  return;
}



/* Entry: 1053cd7f4; end: 1053cd80b; -[SCCreativeToolsABProvider shouldRenderInContext_MultiSnapOverlay_Test] */

void FUN_1053cd7f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7478,0,0);
  return;
}



/* Entry: 1053cd80c; end: 1053cd823; -[SCCreativeToolsABProvider isPersistLastCaptionStyleUsedEnabled] */

void FUN_1053cd80c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd74d8,0,0);
  return;
}



/* Entry: 1053cd824; end: 1053cd83b; -[SCCreativeToolsABProvider isChatSearchResultsRenderAsCTItemsEnabled] */

void FUN_1053cd824(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd74f8,0,0);
  return;
}



/* Entry: 1053cd83c; end: 1053cd84f; -[SCCreativeToolsABProvider lapsedCaptionUsageConfigManualExposureValue] */

void FUN_1053cd83c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b84b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_manualExposureValueForConfigKeyS_11260bb40,
             &PTR____CFConstantStringClassReference_110dd7518,0);
  return;
}



/* Entry: 1053cd850; end: 1053cd863; -[SCCreativeToolsABProvider isCaptionHelpTooltipAlwaysEnabled] */

void FUN_1053cd850(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b84b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_manualExposureValueForConfigKeyS_11260bb40,
             &PTR____CFConstantStringClassReference_110dd7538,0);
  return;
}



/* Entry: 1053cd864; end: 1053cd87b; -[SCCreativeToolsABProvider isPreselectCaptionToolMerlinChatEnabled] */

void FUN_1053cd864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7558,0,0);
  return;
}



/* Entry: 1053cd87c; end: 1053cd883; -[SCCreativeToolsABProvider previewDiscardAlertConfig] */

void FUN_1053cd87c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_target_112678178);
  return;
}



/* Entry: 1053cd884; end: 1053cd89b; -[SCCreativeToolsABProvider isStickerCutoutSavableExpansionEnabled] */

void FUN_1053cd884(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd75b8,0,0);
  return;
}



/* Entry: 1053cd89c; end: 1053cd8b3; -[SCCreativeToolsABProvider isExpandChatStickerPickerEnabled] */

void FUN_1053cd89c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd75d8,0,0);
  return;
}



/* Entry: 1053cd8b4; end: 1053cd99f; -[SCCreativeToolsABProvider isCustomojiFullSearchEnabled] */

bool FUN_1053cd8b4(long param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lStack_38;
  
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c1195e0(lVar3,param_2,&PTR____CFConstantStringClassReference_110dd75f8,0,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    bVar2 = false;
  }
  else {
    puVar4 = PTR_PTR_1126b8468;
    _objc_alloc(PTR_PTR_1126b8468);
    lVar5 = lVar3;
    func_0x00010c296d80(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lStack_38 = 0;
    func_0x00010c008360(puVar4,param_2,lVar5,&lStack_38);
    lVar1 = lStack_38;
    _objc_release(lVar5);
    if (lVar1 == 0) {
      puVar6 = puVar4;
      func_0x00010bf33060(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf529e0();
      _objc_release(puVar6);
      bVar2 = puVar7 != (undefined *)0x0;
    }
    else {
      bVar2 = false;
    }
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
  return bVar2;
}



/* Entry: 1053cd9a0; end: 1053cd9f7; -[SCCreativeToolsABProvider isPreviewCustomojiPickerEnabled] */

bool FUN_1053cd9a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c25d780(lVar1,param_2,&PTR____CFConstantStringClassReference_110dd7618,
                      &PTR____CFConstantStringClassReference_110daafd8,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  return lVar2 != 0;
}



/* Entry: 1053cd9f8; end: 1053cda0f; -[SCCreativeToolsABProvider isPreviewCustomojiBadgeEnabled] */

void FUN_1053cd9f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7638,0,0);
  return;
}



/* Entry: 1053cda10; end: 1053cda27; -[SCCreativeToolsABProvider chatAutosuggestDebounceMultipler] */

void FUN_1053cda10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb2cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 8),PTR_s_floatValueForConfigKeySync_defau_1125ca4d8,
             &PTR____CFConstantStringClassReference_110dd7658,0);
  return;
}



/* Entry: 1053cda28; end: 1053cda3f; -[SCCreativeToolsABProvider isMusicUserDataServiceEnabled] */

void FUN_1053cda28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7598,1,0);
  return;
}



/* Entry: 1053cda40; end: 1053cda57; -[SCCreativeToolsABProvider isGifStickerDeprecationEnabled] */

void FUN_1053cda40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7678,0,0);
  return;
}



/* Entry: 1053cda58; end: 1053cda6f; -[SCCreativeToolsABProvider isBitmojiAsCTItemEnabled] */

void FUN_1053cda58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7698,0,0);
  return;
}



/* Entry: 1053cda70; end: 1053cda87; -[SCCreativeToolsABProvider isSnapchatStickerAsCTItemEnabled] */

void FUN_1053cda70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd76b8,0,0);
  return;
}



/* Entry: 1053cda88; end: 1053cda9f; -[SCCreativeToolsABProvider isEmojiAsCTItemEnabled] */

void FUN_1053cda88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd76d8,0,0);
  return;
}



/* Entry: 1053cdaa0; end: 1053cdab7; -[SCCreativeToolsABProvider isStickerSuggestionsInCaptionToolEnabled] */

void FUN_1053cdaa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7918,0,0);
  return;
}



/* Entry: 1053cdab8; end: 1053cdacf; -[SCCreativeToolsABProvider isStickerCTItemStackingEnabled] */

void FUN_1053cdab8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7938,0,0);
  return;
}



/* Entry: 1053cdad0; end: 1053cdae7; -[SCCreativeToolsABProvider isChatLocationTrayButtonEnabled] */

void FUN_1053cdad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd79b8,0,0);
  return;
}



/* Entry: 1053cdae8; end: 1053cdaff; -[SCCreativeToolsABProvider isAttachmentToolEntryDisabled] */

void FUN_1053cdae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd79d8,0,0);
  return;
}



/* Entry: 1053cdb00; end: 1053cdb17; -[SCCreativeToolsABProvider isImportedStickerExternalContentEnabled] */

void FUN_1053cdb00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd79f8,0,0);
  return;
}



/* Entry: 1053cdb18; end: 1053cdb2f; -[SCCreativeToolsABProvider isEditableFanPassStickerEnabled] */

void FUN_1053cdb18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7858,0,0);
  return;
}



/* Entry: 1053cdb30; end: 1053cdb47; -[SCCreativeToolsABProvider isPlanStickerEnabled] */

void FUN_1053cdb30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7878,0,0);
  return;
}



/* Entry: 1053cdb48; end: 1053cdb5f; -[SCCreativeToolsABProvider isPlanStickerDirectInviteEnabled] */

void FUN_1053cdb48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7898,0,0);
  return;
}



/* Entry: 1053cdb60; end: 1053cdb77; -[SCCreativeToolsABProvider isChatPlanDrawerButtonEnabled] */

void FUN_1053cdb60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd78b8,0,0);
  return;
}



/* Entry: 1053cdb78; end: 1053cdb8f; -[SCCreativeToolsABProvider isShareYoursStickerEnabled] */

void FUN_1053cdb78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd78d8,0,0);
  return;
}



/* Entry: 1053cdb90; end: 1053cdba3; -[SCCreativeToolsABProvider shareYoursStickerReplyEnabledManualExposureValue] */

void FUN_1053cdb90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b84b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_manualExposureValueForConfigKeyS_11260bb40,
             &PTR____CFConstantStringClassReference_110dd78f8,0);
  return;
}



/* Entry: 1053cdba4; end: 1053cdbbb; -[SCCreativeToolsABProvider isSnapMeStickerEnabled] */

void FUN_1053cdba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7958,0,0);
  return;
}



/* Entry: 1053cdbbc; end: 1053cdbd3; -[SCCreativeToolsABProvider isSnapMeStickerReplyEnabled] */

void FUN_1053cdbbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7978,0,0);
  return;
}



/* Entry: 1053cdbd4; end: 1053cdbeb; -[SCCreativeToolsABProvider isStoryStickerDeprecated] */

void FUN_1053cdbd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7998,0,0);
  return;
}



/* Entry: 1053cdbec; end: 1053cdc03; -[SCCreativeToolsABProvider isMagicCaptionEnabled] */

void FUN_1053cdbec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7498,0,0);
  return;
}



/* Entry: 1053cdc04; end: 1053cdc0b; -[SCCreativeToolsABProvider magicCaptionConfig] */

void FUN_1053cdc04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 1053cdc0c; end: 1053cdc67; -[SCCreativeToolsABProvider isPreviewPerfectSelfieEnabled] */

void FUN_1053cdc0c(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf4e8;
  func_0x00010c067fc0();
  if ((ppuVar1 != (undefined **)0x1) && (ppuVar1 != (undefined **)0x2)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110dd76f8,0,0);
    return;
  }
  return;
}



/* Entry: 1053cdc68; end: 1053cdcc3; -[SCCreativeToolsABProvider isPreviewPerfectSelfieSnapEditorEnabled] */

void FUN_1053cdc68(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf4e8;
  func_0x00010c067fc0();
  if ((ppuVar1 != (undefined **)0x1) && (ppuVar1 != (undefined **)0x2)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110dd7718,0,0);
    return;
  }
  return;
}



/* Entry: 1053cdcc4; end: 1053cdcdb; -[SCCreativeToolsABProvider isPreviewPerfectSelfieFreemiumEnabled] */

void FUN_1053cdcc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd77f8,0,0);
  return;
}



/* Entry: 1053cdcdc; end: 1053cdd57; -[SCCreativeToolsABProvider previewPerfectSelfieLensId] */

void FUN_1053cdcdc(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  ppuVar1 = ppuVar3;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar2 = *(undefined ***)(param_1 + 8);
    func_0x00010c25d780(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110dd7738,
                        &PTR____CFConstantStringClassReference_110dd7758,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar2;
    func_0x00010c08fa60();
    ppuVar3 = &PTR____CFConstantStringClassReference_110dd7758;
    if (ppuVar1 != (undefined **)0x0) {
      ppuVar3 = ppuVar2;
    }
    _objc_retain(ppuVar3);
    _objc_release(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1053cdd58; end: 1053cdd6f; -[SCCreativeToolsABProvider isPreviewPerfectSelfieProIconEnabled] */

void FUN_1053cdd58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7778,0,0);
  return;
}



/* Entry: 1053cdd70; end: 1053cdd87; -[SCCreativeToolsABProvider isPreviewPerfectSelfieCachingEnabled] */

void FUN_1053cdd70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd7798,0,0);
  return;
}



/* Entry: 1053cdd88; end: 1053cdd9f; -[SCCreativeToolsABProvider isPreviewPerfectSelfieMagicEraserHidden] */

void FUN_1053cdd88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd77b8,0,0);
  return;
}



/* Entry: 1053cdda0; end: 1053cddb7; -[SCCreativeToolsABProvider isPreviewPerfectSelfieBottomPositionEnabled] */

void FUN_1053cdda0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd77d8,0,0);
  return;
}


