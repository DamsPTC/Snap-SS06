/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8993d8; end: 10b89940b; -[SCCCoreuiPickerActionSheet initWithViewModel:componentContext:runtime:] */

void FUN_10b8993d8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270bb58;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10b89940c; end: 10b899457; -[SCCCoreuiPickerActionSheet setViewModel:] */

void FUN_10b89940c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  FUN_10b8994c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b899458; end: 10b899497; -[SCCCoreuiPickerActionSheet viewModel] */

void FUN_10b899458(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b8994c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b899498; end: 10b8994c7;  */

void FUN_10b899498(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b8994c8; end: 10b8994db;  */

void FUN_10b8994c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b8994dc; end: 10b8994f7; +[SCCSIGButtonExperimentBridge valdiMarshallableObjectDescriptor] */

void FUN_10b8994dc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_isYellowBrandFillEnabled_110d69b58;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b8994f8; end: 10b899533; +[SCValdiDrawingFont valdiMarshallableObjectDescriptor] */

void FUN_10b8994f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d69bb8;
  param_1[1] = &PTR_DAT_110d69c00;
  param_1[2] = &PTR_DAT_110d69b88;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b899534; end: 10b8995b3;  */

void FUN_10b899534(undefined8 param_1)

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
  pcStack_38 = FUN_10b899658;
  puStack_30 = &UNK_110ca0808;
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



/* Entry: 10b8995b4; end: 10b8995f7;  */

undefined8 FUN_10b8995b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1a68;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  FUN_10b89968c();
  func_0x00010b8996a8();
  return param_1;
}



/* Entry: 10b8995f8; end: 10b899613; +[SCValdiDrawingModule valdiMarshallableObjectDescriptor] */

void FUN_10b8995f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d69c18;
  param_1[1] = &PTR_DAT_110d69c78;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b899614; end: 10b899657;  */

undefined8 FUN_10b899614(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1a70;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  FUN_10b89968c();
  func_0x00010b8996a8();
  return param_1;
}



/* Entry: 10b899658; end: 10b89968b;  */

void FUN_10b899658(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b89968c; end: 10b8996bf;  */

undefined8 FUN_10b89968c(undefined8 param_1)

{
  undefined8 unaff_x19;
  
  _objc_retain();
  func_0x000107c30e68();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbe00();
  func_0x00010b967914();
  _objc_release(unaff_x19);
  return param_1;
}



/* Entry: 10b8996c0; end: 10b8996cb; +[SCCNetworkingRegisterNetworkingServices modulePath] */

undefined ** FUN_10b8996c0(void)

{
  return &PTR____CFConstantStringClassReference_110f9d878;
}



/* Entry: 10b8996cc; end: 10b8996d3; +[SCCNetworkingRegisterNetworkingServices asyncStrictMode] */

undefined8 FUN_10b8996cc(void)

{
  return 0;
}



/* Entry: 10b8996d4; end: 10b89974f; -[SCCNetworkingRegisterNetworkingServices registerNetworkingServicesWithGrpcServiceFactory:httpClient:] */

undefined8
FUN_10b8996d4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010b899f2c();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_2 + 0x10))();
  func_0x00010b899ee8();
  _objc_release(param_4);
  func_0x00010b899f24();
  return param_1;
}



/* Entry: 10b899750; end: 10b8998b7; +[SCCNetworkingRegisterNetworkingServices invokeWithJSRuntimeProvider:grpcServiceFactory:httpClient:completionHandler:] */

void FUN_10b899750(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  func_0x00010b899f2c();
  _objc_retain(param_6);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10b899848;
  puStack_58 = &UNK_1108465d0;
  lStack_50 = param_3;
  uStack_48 = param_4;
  uStack_40 = param_5;
  uStack_38 = param_6;
  _objc_retain(param_6);
  func_0x00010b899f2c();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(lStack_50);
  func_0x00010b899f24();
  _objc_release(param_5);
  func_0x00010b899ee8();
  _objc_release(param_3);
  return;
}



/* Entry: 10b8998b8; end: 10b8998db; +[SCCNetworkingRegisterNetworkingServices valdiMarshallableObjectDescriptor] */

void FUN_10b8998b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d69ca0;
  param_1[1] = &PTR_s_SCComposerNetworkingGrpcServiceF_110d69cd0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10b8998dc; end: 10b8998ef; +[SCCNetworkStatusProvider valdiMarshallableObjectDescriptor] */

void FUN_10b8998dc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d69ce8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b8998f0; end: 10b899913; +[SCComposerNetworkingBoltUploading valdiMarshallableObjectDescriptor] */

void FUN_10b8998f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d69d78;
  param_1[1] = &PTR_DAT_110d69dd8;
  param_1[2] = &PTR_DAT_110d69d18;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b899914; end: 10b899937;  */

undefined8 FUN_10b899914(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],param_2[2],*param_2);
  return 0;
}



/* Entry: 10b899938; end: 10b899987;  */

void FUN_10b899938(void)

{
  func_0x00010b899ef0();
  func_0x00010b899ed8();
  func_0x00010b899e7c(FUN_10b899d68);
  func_0x00010b899ef8();
  func_0x00010b899e9c();
  func_0x00010b899ee8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b899988; end: 10b8999b7;  */

undefined8 FUN_10b899988(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],param_2[2],*(undefined4 *)(param_2 + 3),param_2[4],param_2[5]);
  return 0;
}



/* Entry: 10b8999b8; end: 10b899a07;  */

void FUN_10b8999b8(void)

{
  func_0x00010b899ef0();
  func_0x00010b899ed8();
  func_0x00010b899e7c(0x10b899d8c);
  func_0x00010b899ef8();
  func_0x00010b899e9c();
  func_0x00010b899ee8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b899a08; end: 10b899a37;  */

undefined8 FUN_10b899a08(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[3],*param_2,param_2[1],param_2[2],param_2[4],param_2[5]);
  return 0;
}



/* Entry: 10b899a38; end: 10b899a87;  */

void FUN_10b899a38(void)

{
  func_0x00010b899ef0();
  func_0x00010b899ed8();
  func_0x00010b899e7c(0x10b899dc4);
  func_0x00010b899ef8();
  func_0x00010b899e9c();
  func_0x00010b899ee8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b899a88; end: 10b899abf;  */

void FUN_10b899a88(void)

{
  func_0x00010b899f18();
  func_0x00010b899f08();
  func_0x00010b899f00();
  func_0x00010b899e8c();
  func_0x00010b899ecc();
  return;
}



/* Entry: 10b899ac0; end: 10b899adb; +[SCComposerNetworkingClientProtocol valdiMarshallableObjectDescriptor] */

void FUN_10b899ac0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d69e00;
  param_1[1] = &PTR_DAT_110d69e48;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b899adc; end: 10b899b13;  */

void FUN_10b899adc(void)

{
  func_0x00010b899f18();
  func_0x00010b899f08();
  func_0x00010b899f00();
  func_0x00010b899e8c();
  func_0x00010b899ecc();
  return;
}



/* Entry: 10b899b14; end: 10b899b27; +[SCComposerNetworkingGrpcCallHandle valdiMarshallableObjectDescriptor] */

void FUN_10b899b14(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_cancel_110d69e70;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b899b28; end: 10b899b5f;  */

void FUN_10b899b28(void)

{
  func_0x00010b899f18();
  func_0x00010b899f08();
  func_0x00010b899f00();
  func_0x00010b899e8c();
  func_0x00010b899ecc();
  return;
}



/* Entry: 10b899b60; end: 10b899b9f; +[SCComposerNetworkingGrpcServiceFactory valdiMarshallableObjectDescriptor] */

void FUN_10b899b60(undefined8 *param_1)

{
  *param_1 = &PTR_s_createService_110d69ed0;
  param_1[1] = &PTR_DAT_110d69f00;
  param_1[2] = &PTR_DAT_110d69ea0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b899ba0; end: 10b899bef;  */

void FUN_10b899ba0(void)

{
  func_0x00010b899ef0();
  func_0x00010b899ed8();
  func_0x00010b899e7c(0x10b899df0);
  func_0x00010b899ef8();
  func_0x00010b899e9c();
  func_0x00010b899ee8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b899bf0; end: 10b899c27;  */

void FUN_10b899bf0(void)

{
  func_0x00010b899f18();
  func_0x00010b899f08();
  func_0x00010b899f00();
  func_0x00010b899e8c();
  func_0x00010b899ecc();
  return;
}



/* Entry: 10b899c28; end: 10b899c63; +[SCComposerNetworkingGrpcServiceProtocol valdiMarshallableObjectDescriptor] */

void FUN_10b899c28(undefined8 *param_1)

{
  *param_1 = &PTR_s_unaryCall_110d69f70;
  param_1[1] = &PTR_DAT_110d69fb8;
  param_1[2] = &PTR_DAT_110d69f10;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b899c64; end: 10b899cb3;  */

void FUN_10b899c64(void)

{
  func_0x00010b899ef0();
  func_0x00010b899ed8();
  func_0x00010b899e7c(0x10b899e1c);
  func_0x00010b899ef8();
  func_0x00010b899e9c();
  func_0x00010b899ee8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b899cb4; end: 10b899cdf;  */

undefined8 FUN_10b899cb4(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1,param_2[2],param_2[3]);
  return 0;
}



/* Entry: 10b899ce0; end: 10b899d2f;  */

void FUN_10b899ce0(void)

{
  func_0x00010b899ef0();
  func_0x00010b899ed8();
  func_0x00010b899e7c(0x10b899e48);
  func_0x00010b899ef8();
  func_0x00010b899e9c();
  func_0x00010b899ee8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b899d30; end: 10b899d67;  */

void FUN_10b899d30(void)

{
  func_0x00010b899f18();
  func_0x00010b899f08();
  func_0x00010b899f00();
  func_0x00010b899e8c();
  func_0x00010b899ecc();
  return;
}



/* Entry: 10b899d68; end: 10b899e7b;  */

void FUN_10b899d68(void)

{
  func_0x00010b899f34();
  func_0x00010b899f10();
  return;
}



/* Entry: 10b899e7c; end: 10b899f3f;  */

void FUN_10b899e7c(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10b899f40; end: 10b899f53; +[SCCMediaITranscoder valdiMarshallableObjectDescriptor] */

void FUN_10b899f40(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d69fd8;
  param_1[1] = &PTR_DAT_110d6a008;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b899f54; end: 10b899f8b;  */

void FUN_10b899f54(void)

{
  func_0x00010b89a740();
  func_0x00010b89a738();
  func_0x00010b89a730();
  func_0x00010b89a69c();
  func_0x00010b89a6d0();
  return;
}



/* Entry: 10b899f8c; end: 10b899f9f; +[SCComposerMediaAudioFactoryProtocol valdiMarshallableObjectDescriptor] */

void FUN_10b899f8c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6a020;
  param_1[1] = &PTR_DAT_110d6a050;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b899fa0; end: 10b899fd7;  */

void FUN_10b899fa0(void)

{
  func_0x00010b89a740();
  func_0x00010b89a738();
  func_0x00010b89a730();
  func_0x00010b89a69c();
  func_0x00010b89a6d0();
  return;
}



/* Entry: 10b899fd8; end: 10b899ffb; +[SCComposerMediaAudioProtocol valdiMarshallableObjectDescriptor] */

void FUN_10b899fd8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6a0b0;
  param_1[1] = &PTR_DAT_110d6a158;
  param_1[2] = &PTR_DAT_110d6a068;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b899ffc; end: 10b89a023;  */

undefined8 FUN_10b899ffc(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x00010b89a768();
  (*extraout_x8)(*(undefined8 *)(param_2 + 0x10));
  return 0;
}



/* Entry: 10b89a024; end: 10b89a073;  */

void FUN_10b89a024(void)

{
  func_0x00010b89a74c();
  func_0x00010b89a70c();
  func_0x00010b89a6c0(FUN_10b89a5a4);
  func_0x00010b89a754();
  func_0x00010b89a6f4();
  func_0x00010b89a71c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b89a074; end: 10b89a09b;  */

undefined8 FUN_10b89a074(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x00010b89a768();
  (*extraout_x8)(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  return 0;
}



/* Entry: 10b89a09c; end: 10b89a0eb;  */

void FUN_10b89a09c(void)

{
  func_0x00010b89a74c();
  func_0x00010b89a70c();
  func_0x00010b89a6c0(0x10b89a5cc);
  func_0x00010b89a754();
  func_0x00010b89a6f4();
  func_0x00010b89a71c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b89a0ec; end: 10b89a123;  */

void FUN_10b89a0ec(void)

{
  func_0x00010b89a740();
  func_0x00010b89a738();
  func_0x00010b89a730();
  func_0x00010b89a69c();
  func_0x00010b89a6d0();
  return;
}



/* Entry: 10b89a124; end: 10b89a137; +[SCComposerMediaAudioRecorderProtocol valdiMarshallableObjectDescriptor] */

void FUN_10b89a124(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6a170;
  param_1[1] = &PTR_DAT_110d6a1b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89a138; end: 10b89a16f;  */

void FUN_10b89a138(void)

{
  func_0x00010b89a740();
  func_0x00010b89a738();
  func_0x00010b89a730();
  func_0x00010b89a69c();
  func_0x00010b89a6d0();
  return;
}



/* Entry: 10b89a170; end: 10b89a183; +[SCComposerMediaAuthorizationHandling valdiMarshallableObjectDescriptor] */

void FUN_10b89a170(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d6a1e8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89a184; end: 10b89a1bb;  */

void FUN_10b89a184(void)

{
  func_0x00010b89a740();
  func_0x00010b89a738();
  func_0x00010b89a730();
  func_0x00010b89a69c();
  func_0x00010b89a6d0();
  return;
}



/* Entry: 10b89a1bc; end: 10b89a1cf; +[SCComposerMediaImageFactoryProtocol valdiMarshallableObjectDescriptor] */

void FUN_10b89a1bc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6a230;
  param_1[1] = &PTR_DAT_110d6a260;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89a1d0; end: 10b89a207;  */

void FUN_10b89a1d0(void)

{
  func_0x00010b89a740();
  func_0x00010b89a738();
  func_0x00010b89a730();
  func_0x00010b89a69c();
  func_0x00010b89a6d0();
  return;
}



/* Entry: 10b89a208; end: 10b89a22b; +[SCComposerMediaImageProtocol valdiMarshallableObjectDescriptor] */

void FUN_10b89a208(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6a2d0;
  param_1[1] = &PTR_DAT_110d6a3a8;
  param_1[2] = &PTR_DAT_110d6a270;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89a22c; end: 10b89a257;  */

undefined8 FUN_10b89a22c(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x00010b89a768();
  (*extraout_x8)(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                 *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  return 0;
}



/* Entry: 10b89a258; end: 10b89a2a7;  */

void FUN_10b89a258(void)

{
  func_0x00010b89a74c();
  func_0x00010b89a70c();
  func_0x00010b89a6c0(0x10b89a5f4);
  func_0x00010b89a754();
  func_0x00010b89a6f4();
  func_0x00010b89a71c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b89a2a8; end: 10b89a2df;  */

void FUN_10b89a2a8(void)

{
  func_0x00010b89a740();
  func_0x00010b89a738();
  func_0x00010b89a730();
  func_0x00010b89a69c();
  func_0x00010b89a6d0();
  return;
}



/* Entry: 10b89a2e0; end: 10b89a303; +[SCComposerMediaLibrary valdiMarshallableObjectDescriptor] */

void FUN_10b89a2e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6a3e8;
  param_1[1] = &PTR_DAT_110d6a4a8;
  param_1[2] = &PTR_DAT_110d6a3b8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89a304; end: 10b89a32f;  */

undefined8 FUN_10b89a304(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x00010b89a768();
  (*extraout_x8)(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  return 0;
}



/* Entry: 10b89a330; end: 10b89a37f;  */

void FUN_10b89a330(void)

{
  func_0x00010b89a74c();
  func_0x00010b89a70c();
  func_0x00010b89a6c0(0x10b89a620);
  func_0x00010b89a754();
  func_0x00010b89a6f4();
  func_0x00010b89a71c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b89a380; end: 10b89a3b7;  */

void FUN_10b89a380(void)

{
  func_0x00010b89a740();
  func_0x00010b89a738();
  func_0x00010b89a730();
  func_0x00010b89a69c();
  func_0x00010b89a6d0();
  return;
}



/* Entry: 10b89a3b8; end: 10b89a3cb; +[SCComposerMediaPlayerFactoryProtocol valdiMarshallableObjectDescriptor] */

void FUN_10b89a3b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6a4e0;
  param_1[1] = &PTR_DAT_110d6a528;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89a3cc; end: 10b89a403;  */

void FUN_10b89a3cc(void)

{
  func_0x00010b89a740();
  func_0x00010b89a738();
  func_0x00010b89a730();
  func_0x00010b89a69c();
  func_0x00010b89a6d0();
  return;
}



/* Entry: 10b89a404; end: 10b89a427; +[SCComposerMediaPlayerProtocol valdiMarshallableObjectDescriptor] */

void FUN_10b89a404(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6a598;
  param_1[1] = &PTR_DAT_110d6a640;
  param_1[2] = &PTR_DAT_110d6a550;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89a428; end: 10b89a44b;  */

undefined8 FUN_10b89a428(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x00010b89a768();
  (*extraout_x8)(*(undefined8 *)(param_2 + 0x10));
  return 0;
}



/* Entry: 10b89a44c; end: 10b89a49b;  */

void FUN_10b89a44c(void)

{
  func_0x00010b89a74c();
  func_0x00010b89a70c();
  func_0x00010b89a6c0(0x10b89a650);
  func_0x00010b89a754();
  func_0x00010b89a6f4();
  func_0x00010b89a71c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b89a49c; end: 10b89a4bf;  */

undefined8 FUN_10b89a49c(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2);
  return 0;
}



/* Entry: 10b89a4c0; end: 10b89a50f;  */

void FUN_10b89a4c0(void)

{
  func_0x00010b89a74c();
  func_0x00010b89a70c();
  func_0x00010b89a6c0(0x10b89a674);
  func_0x00010b89a754();
  func_0x00010b89a6f4();
  func_0x00010b89a71c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b89a510; end: 10b89a547;  */

void FUN_10b89a510(void)

{
  func_0x00010b89a740();
  func_0x00010b89a738();
  func_0x00010b89a730();
  func_0x00010b89a69c();
  func_0x00010b89a6d0();
  return;
}



/* Entry: 10b89a548; end: 10b89a56b; +[SCComposerMediaVideoProtocol valdiMarshallableObjectDescriptor] */

void FUN_10b89a548(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6a680;
  param_1[1] = &PTR_DAT_110d6a740;
  param_1[2] = &PTR_DAT_110d6a650;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89a56c; end: 10b89a5a3;  */

void FUN_10b89a56c(void)

{
  func_0x00010b89a740();
  func_0x00010b89a738();
  func_0x00010b89a730();
  func_0x00010b89a69c();
  func_0x00010b89a6d0();
  return;
}



/* Entry: 10b89a5a4; end: 10b89a69b;  */

void FUN_10b89a5a4(void)

{
  func_0x00010b89a75c();
  func_0x00010b89a724();
  return;
}



/* Entry: 10b89a69c; end: 10b89a773;  */

undefined8 FUN_10b89a69c(undefined8 param_1)

{
  undefined8 unaff_x19;
  
  _objc_retain();
  func_0x000107c30e68();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbe00();
  func_0x00010b967914();
  _objc_release(unaff_x19);
  return param_1;
}



/* Entry: 10b89a774; end: 10b89a7b3; +[SCComposerCOFRxStoring valdiMarshallableObjectDescriptor] */

void FUN_10b89a774(undefined8 *param_1)

{
  *param_1 = &PTR_s_getInt_110d6a810;
  param_1[1] = &PTR_DAT_110d6a8b8;
  param_1[2] = &PTR_DAT_110d6a7b0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89a7b4; end: 10b89a803;  */

void FUN_10b89a7b4(void)

{
  func_0x00010b89afa4();
  func_0x00010b89af48();
  func_0x00010b89af00(FUN_10b89ad84);
  func_0x00010b89afac();
  func_0x00010b89af24();
  func_0x00010b89af9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b89a804; end: 10b89a823;  */

void FUN_10b89a804(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010b89a820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_2,param_2[1],param_2[2],*(uint *)(param_2 + 3) & 1,param_2[4]);
  return;
}



/* Entry: 10b89a824; end: 10b89a873;  */

void FUN_10b89a824(void)

{
  func_0x00010b89afa4();
  func_0x00010b89af48();
  func_0x00010b89af00(0x10b89ad9c);
  func_0x00010b89afac();
  func_0x00010b89af24();
  func_0x00010b89af9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b89a874; end: 10b89a88b;  */

void FUN_10b89a874(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010b89a888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_2,param_2[1],param_2[2],param_2[3],param_2[4]);
  return;
}



/* Entry: 10b89a88c; end: 10b89a8db;  */

void FUN_10b89a88c(void)

{
  func_0x00010b89afa4();
  func_0x00010b89af48();
  func_0x00010b89af00(0x10b89adb4);
  func_0x00010b89afac();
  func_0x00010b89af24();
  func_0x00010b89af9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b89a8dc; end: 10b89a8f7; +[SCComposerCOFStoring valdiMarshallableObjectDescriptor] */

void FUN_10b89a8dc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6a948;
  param_1[1] = 0;
  param_1[2] = &PTR_s_od_v_110d6a8d0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89a8f8; end: 10b89a91b;  */

undefined8 FUN_10b89a8f8(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2);
  return 0;
}



/* Entry: 10b89a91c; end: 10b89a96b;  */

void FUN_10b89a91c(void)

{
  func_0x00010b89afa4();
  func_0x00010b89af48();
  func_0x00010b89af00(0x10b89add8);
  func_0x00010b89afac();
  func_0x00010b89af24();
  func_0x00010b89af9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b89a96c; end: 10b89a993;  */

undefined8 FUN_10b89a96c(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x00010b89afb4();
  (*extraout_x8)(*(undefined8 *)(param_2 + 0x18));
  return 0;
}



/* Entry: 10b89a994; end: 10b89a9e3;  */

void FUN_10b89a994(void)

{
  func_0x00010b89afa4();
  func_0x00010b89af48();
  func_0x00010b89af00(0x10b89ae04);
  func_0x00010b89afac();
  func_0x00010b89af24();
  func_0x00010b89af9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b89a9e4; end: 10b89aa0b;  */

undefined8 FUN_10b89a9e4(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 10b89aa0c; end: 10b89aa5b;  */

void FUN_10b89aa0c(void)

{
  func_0x00010b89afa4();
  func_0x00010b89af48();
  func_0x00010b89af00(0x10b89ae20);
  func_0x00010b89afac();
  func_0x00010b89af24();
  func_0x00010b89af9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b89aa5c; end: 10b89aa7b;  */

undefined8 FUN_10b89aa5c(void)

{
  code *extraout_x8;
  
  func_0x00010b89afb4();
  func_0x00010b89afcc();
  (*extraout_x8)();
  return 0;
}



/* Entry: 10b89aa7c; end: 10b89aacb;  */

void FUN_10b89aa7c(void)

{
  func_0x00010b89afa4();
  func_0x00010b89af48();
  func_0x00010b89af00(0x10b89ae50);
  func_0x00010b89afac();
  func_0x00010b89af24();
  func_0x00010b89af9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b89aacc; end: 10b89aaef; +[SCComposerCOFSynchronousStoring valdiMarshallableObjectDescriptor] */

void FUN_10b89aacc(undefined8 *param_1)

{
  *param_1 = &PTR_s_getInt_110d6aa50;
  param_1[1] = &PTR_DAT_110d6aaf8;
  param_1[2] = &PTR_DAT_110d6a9f0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89aaf0; end: 10b89ab17;  */

undefined8 FUN_10b89aaf0(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  undefined8 uVar1;
  
  func_0x00010b89afb4();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  (*extraout_x8)(uVar1);
  return uVar1;
}



/* Entry: 10b89ab18; end: 10b89ab67;  */

void FUN_10b89ab18(void)

{
  func_0x00010b89afa4();
  func_0x00010b89af48();
  func_0x00010b89af00(0x10b89ae6c);
  func_0x00010b89afac();
  func_0x00010b89af24();
  func_0x00010b89af9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b89ab68; end: 10b89ab87;  */

ulong FUN_10b89ab68(ulong param_1)

{
  code *extraout_x8;
  
  func_0x00010b89afb4();
  func_0x00010b89afcc();
  (*extraout_x8)();
  return param_1 & 0xffffffff;
}



/* Entry: 10b89ab88; end: 10b89abd7;  */

void FUN_10b89ab88(void)

{
  func_0x00010b89afa4();
  func_0x00010b89af48();
  func_0x00010b89af00(0x10b89ae8c);
  func_0x00010b89afac();
  func_0x00010b89af24();
  func_0x00010b89af9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b89abd8; end: 10b89abe3; +[SCComposerManualExposureBool valdiMarshallableObjectDescriptor] */

void FUN_10b89abd8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_value_110d6ab08;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89abe4; end: 10b89ac1f; +[SCComposerManualExposureCOFStoring valdiMarshallableObjectDescriptor] */

void FUN_10b89abe4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6ab98;
  param_1[1] = &PTR_DAT_110d6ac58;
  param_1[2] = &PTR_DAT_110d6ab50;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89ac20; end: 10b89ac6f;  */

void FUN_10b89ac20(void)

{
  func_0x00010b89afa4();
  func_0x00010b89af48();
  func_0x00010b89af00(0x10b89aeac);
  func_0x00010b89afac();
  func_0x00010b89af24();
  func_0x00010b89af9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


