/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b89ddf8; end: 10b89de97; -[SCCCoreuiPickerActionSheetViewModel initWithTitle:labels:onChange:] */

undefined8 *
FUN_10b89ddf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_11270be50;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 10b89de98; end: 10b89deb7; +[SCCCoreuiPickerActionSheetViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b89de98(undefined8 *param_1)

{
  *param_1 = &PTR_s_title_110d6ef30;
  param_1[1] = 0;
  param_1[2] = &PTR_s_od_v_110d6ef00;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89deb8; end: 10b89dedb;  */

undefined8 FUN_10b89deb8(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2);
  return 0;
}



/* Entry: 10b89dedc; end: 10b89df5b;  */

void FUN_10b89dedc(undefined8 param_1)

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
  pcStack_38 = FUN_10b89dfb4;
  puStack_30 = &UNK_110853170;
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



/* Entry: 10b89df5c; end: 10b89df9b; -[SCCCustomColor initWithRed:green:blue:alpha:] */

void FUN_10b89df5c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270be58;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b89df9c; end: 10b89dfb3; +[SCCCustomColor valdiMarshallableObjectDescriptor] */

void FUN_10b89df9c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d6efc0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89dfb4; end: 10b89dfdf;  */

void FUN_10b89dfb4(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b89dfe0; end: 10b89e053; -[SCValdiDrawingFontStyle__Enum init] */

void FUN_10b89dfe0(void)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  func_0x00010b89e210();
  ppuStack_38 = &PTR____CFConstantStringClassReference_110dc0018;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110dc0258;
  uStack_28 = extraout_x8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b89e1d4();
  func_0x00010b89e1f0();
  func_0x00010b89e1fc(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_10b89e054;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010b89e210();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110dceb38;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110dc0018;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dc02d8;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110f9da18;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dc0178;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110dc06d8;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_68 = extraout_x8_00;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b89e1d4();
  func_0x00010b89e1f0();
  func_0x00010b89e1fc(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_10b89e0f0;
  puStack_b8 = PTR_PTR_11270be60;
  puStack_c0 = puVar1;
  ppuStack_b0 = &puStack_50;
  _objc_msgSendSuper2(&puStack_c0,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b89e054; end: 10b89e0ef; -[SCValdiDrawingFontWeight__Enum init] */

void FUN_10b89e054(void)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 extraout_x8;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  func_0x00010b89e210();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dceb38;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110dc0018;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dc02d8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f9da18;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110dc0178;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110dc06d8;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_28 = extraout_x8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b89e1d4();
  func_0x00010b89e1f0();
  func_0x00010b89e1fc(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_10b89e0f0;
  puStack_78 = PTR_PTR_11270be60;
  puStack_80 = puVar1;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_80,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b89e0f0; end: 10b89e12f; -[SCDrawingRect initWithX:y:width:height:] */

void FUN_10b89e0f0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270be60;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b89e130; end: 10b89e13f; +[SCDrawingRect valdiMarshallableObjectDescriptor] */

void FUN_10b89e130(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d6f038;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89e140; end: 10b89e173; -[SCValdiDrawingFontSpecs initWithFont:] */

void FUN_10b89e140(undefined8 param_1)

{
  func_0x00010b89e1e4(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b89e174; end: 10b89e183; +[SCValdiDrawingFontSpecs valdiMarshallableObjectDescriptor] */

void FUN_10b89e174(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_font_110d6f0b0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89e184; end: 10b89e1b7; -[SCValdiDrawingSize initWithWidth:height:] */

void FUN_10b89e184(undefined8 param_1)

{
  func_0x00010b89e1e4(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b89e1b8; end: 10b89e223; +[SCValdiDrawingSize valdiMarshallableObjectDescriptor] */

void FUN_10b89e1b8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_width_110d6f0f8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89e224; end: 10b89e24f; -[SCComposerNetworkingBoltContentReference initWithContentUrl:contentObject:] */

void FUN_10b89e224(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b89e478(PTR_PTR_11270be78);
  func_0x00010b89e460(auStack_20);
  return;
}



/* Entry: 10b89e250; end: 10b89e25f; +[SCComposerNetworkingBoltContentReference valdiMarshallableObjectDescriptor] */

void FUN_10b89e250(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d6f140;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89e260; end: 10b89e28f; -[SCComposerNetworkingGrpcCallOptions initWithRpcTimeoutMs:additionalHeaders:clientSwitchboardConfigKey:requireAuth:] */

void FUN_10b89e260(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b89e468(PTR_PTR_11270be80);
  func_0x00010b89e460(auStack_20);
  return;
}



/* Entry: 10b89e290; end: 10b89e29f; +[SCComposerNetworkingGrpcCallOptions valdiMarshallableObjectDescriptor] */

void FUN_10b89e290(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_rpcTimeoutMs_110d6f188;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89e2a0; end: 10b89e2cb; -[SCComposerNetworkingMultipartBody initWithEntries:] */

void FUN_10b89e2a0(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b89e478(PTR_PTR_11270be88);
  func_0x00010b89e460(auStack_20);
  return;
}



/* Entry: 10b89e2cc; end: 10b89e2df; +[SCComposerNetworkingMultipartBody valdiMarshallableObjectDescriptor] */

void FUN_10b89e2cc(undefined8 *param_1)

{
  *param_1 = &PTR_s_entries_110d6f200;
  param_1[1] = &PTR_DAT_110d6f230;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89e2e0; end: 10b89e30b; -[SCComposerNetworkingMultipartBodyEntry initWithName:content:] */

void FUN_10b89e2e0(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b89e478(PTR_PTR_11270be90);
  func_0x00010b89e460(auStack_20);
  return;
}



/* Entry: 10b89e30c; end: 10b89e31b; +[SCComposerNetworkingMultipartBodyEntry valdiMarshallableObjectDescriptor] */

void FUN_10b89e30c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d6f240;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89e31c; end: 10b89e363; -[SCComposerNetworkingRequest initWithFsnPath:url:headers:body:method:responseBodyAsString:includeErrorResponseBody:authenticated:snapTokenScope:] */

void FUN_10b89e31c(undefined8 param_1)

{
  func_0x00010b89e43c(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b89e364; end: 10b89e377; +[SCComposerNetworkingRequest valdiMarshallableObjectDescriptor] */

void FUN_10b89e364(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6f288;
  param_1[1] = &PTR_DAT_110d6f378;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89e378; end: 10b89e39b; -[SCComposerNetworkingRequestBody initWithBytes:urlEncoded:multipart:] */

void FUN_10b89e378(void)

{
  func_0x00010b89e468(PTR_PTR_11270bea0);
  func_0x00010b89e43c();
  return;
}



/* Entry: 10b89e39c; end: 10b89e3af; +[SCComposerNetworkingRequestBody valdiMarshallableObjectDescriptor] */

void FUN_10b89e39c(undefined8 *param_1)

{
  *param_1 = &PTR_s_bytes_110d6f388;
  param_1[1] = &PTR_DAT_110d6f3e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89e3b0; end: 10b89e3d7; -[SCComposerNetworkingResponse initWithHeaders:bodyBytes:bodyString:status:] */

void FUN_10b89e3b0(void)

{
  func_0x00010b89e468(PTR_PTR_11270bea8);
  func_0x00010b89e43c();
  return;
}



/* Entry: 10b89e3d8; end: 10b89e3e7; +[SCComposerNetworkingResponse valdiMarshallableObjectDescriptor] */

void FUN_10b89e3d8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_headers_110d6f3f8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89e3e8; end: 10b89e41f; -[SCComposerNetworkingResponseError initWithHeaders:error:bodyBytes:bodyString:status:] */

void FUN_10b89e3e8(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b89e468(PTR_PTR_11270beb0);
  func_0x00010b89e460(auStack_20);
  return;
}



/* Entry: 10b89e420; end: 10b89e497; +[SCComposerNetworkingResponseError valdiMarshallableObjectDescriptor] */

void FUN_10b89e420(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_headers_110d6f470;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89e498; end: 10b89e49f; -[SCCMediaNativeContentTypeKey__Enum init] */

void FUN_10b89e498(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0x29);
  return;
}



/* Entry: 10b89e4a0; end: 10b89e4a7; -[SCCMediaTranscodeError__Enum init] */

void FUN_10b89e4a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,1);
  return;
}



/* Entry: 10b89e4a8; end: 10b89e4af; -[SCComposerMediaDecryptionMethod__Enum init] */

void FUN_10b89e4a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b89e4b0; end: 10b89e4b7; -[SCComposerMediaEncryptionType__Enum init] */

void FUN_10b89e4b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b89e4b8; end: 10b89e4bf; -[SCComposerMediaLibraryItemSubType__Enum init] */

void FUN_10b89e4b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,9);
  return;
}



/* Entry: 10b89e4c0; end: 10b89e4c7; -[SCComposerMediaLibraryItemType__Enum init] */

void FUN_10b89e4c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b89e4c8; end: 10b89e4ef; -[SCCMediaEncryptedImageInfo initWithContentObject:] */

void FUN_10b89e4c8(void)

{
  func_0x00010b89e974(PTR_PTR_11270beb8);
  func_0x00010b89e95c();
  return;
}



/* Entry: 10b89e4f0; end: 10b89e503; +[SCCMediaEncryptedImageInfo valdiMarshallableObjectDescriptor] */

void FUN_10b89e4f0(undefined8 *param_1)

{
  *param_1 = &PTR_s_contentObject_110d6f500;
  param_1[1] = &PTR_DAT_110d6f560;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89e504; end: 10b89e537; -[SCCMediaTranscodeConfig init] */

void FUN_10b89e504(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270bec0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b89e538; end: 10b89e54b; +[SCCMediaTranscodeConfig valdiMarshallableObjectDescriptor] */

void FUN_10b89e538(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e5f4a58;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89e54c; end: 10b89e577; -[SCCMediaTranscodeRequest initWithSnap:config:] */

void FUN_10b89e54c(void)

{
  func_0x00010b89e984();
  func_0x00010b89e950();
  return;
}



/* Entry: 10b89e578; end: 10b89e58b; +[SCCMediaTranscodeRequest valdiMarshallableObjectDescriptor] */

void FUN_10b89e578(undefined8 *param_1)

{
  *param_1 = &PTR_s_snap_110d6f578;
  param_1[1] = &PTR_DAT_110d6f5c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89e58c; end: 10b89e5b7; -[SCCMediaTranscodeResult initWithSnap:] */

void FUN_10b89e58c(void)

{
  func_0x00010b89e984();
  func_0x00010b89e950();
  return;
}



/* Entry: 10b89e5b8; end: 10b89e5cb; +[SCCMediaTranscodeResult valdiMarshallableObjectDescriptor] */

void FUN_10b89e5b8(undefined8 *param_1)

{
  *param_1 = &PTR_s_snap_110d6f5d8;
  param_1[1] = &PTR_DAT_110d6f620;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89e5cc; end: 10b89e633; -[SCComposerMediaAudioRecordingFrequencySampleOptions initWithSampleCount:callback:] */

undefined8 FUN_10b89e5cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = param_3;
  func_0x00010b89e984();
  func_0x00010b89e950();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10b89e634; end: 10b89e647; +[SCComposerMediaAudioRecordingFrequencySampleOptions valdiMarshallableObjectDescriptor] */

void FUN_10b89e634(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d6f638;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89e648; end: 10b89e6bf; -[SCComposerMediaAudioRecordingOptions initWithSampleUpdateCallback:frequencySampleOptions:] */

undefined8
FUN_10b89e648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_3;
  func_0x00010b89e984();
  func_0x00010b89e950();
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10b89e6c0; end: 10b89e6e3; +[SCComposerMediaAudioRecordingOptions valdiMarshallableObjectDescriptor] */

void FUN_10b89e6c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6f6b0;
  param_1[1] = &PTR_DAT_110d6f6f8;
  param_1[2] = &PTR_s_od_v_110d6f680;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89e6e4; end: 10b89e707;  */

undefined8 FUN_10b89e6e4(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2);
  return 0;
}



/* Entry: 10b89e708; end: 10b89e787;  */

void FUN_10b89e708(undefined8 param_1)

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
  pcStack_38 = FUN_10b89e914;
  puStack_30 = &UNK_110853170;
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



/* Entry: 10b89e788; end: 10b89e7af; -[SCComposerMediaEncryptionInfo initWithKey:iv:type:] */

void FUN_10b89e788(void)

{
  func_0x00010b89e974(PTR_PTR_11270bee8);
  func_0x00010b89e95c();
  return;
}



/* Entry: 10b89e7b0; end: 10b89e7c3; +[SCComposerMediaEncryptionInfo valdiMarshallableObjectDescriptor] */

void FUN_10b89e7b0(undefined8 *param_1)

{
  *param_1 = &PTR_s_key_110d6f708;
  param_1[1] = &PTR_DAT_110d6f768;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89e7c4; end: 10b89e7eb; -[SCComposerMediaItemRequestOptions initWithOffset:limit:mediaSubtype:] */

void FUN_10b89e7c4(void)

{
  func_0x00010b89e974(PTR_PTR_11270bef0);
  func_0x00010b89e95c();
  return;
}



/* Entry: 10b89e7ec; end: 10b89e813; -[SCComposerMediaItemRequestOptions initWithOffset:limit:] */

void FUN_10b89e7ec(void)

{
  func_0x00010b89e974(PTR_PTR_11270bef0);
  func_0x00010b89e95c();
  return;
}



/* Entry: 10b89e814; end: 10b89e827; +[SCComposerMediaItemRequestOptions valdiMarshallableObjectDescriptor] */

void FUN_10b89e814(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6f778;
  param_1[1] = &PTR_DAT_110d6f7d8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89e828; end: 10b89e87f; -[SCComposerMediaLibraryItem initWithItemId:width:height:durationMs:timestampMs:] */

void FUN_10b89e828(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b89e974(PTR_PTR_11270bef8);
  _objc_msgSendSuper2(auStack_20,param_2,0);
  return;
}



/* Entry: 10b89e880; end: 10b89e893; +[SCComposerMediaLibraryItem valdiMarshallableObjectDescriptor] */

void FUN_10b89e880(undefined8 *param_1)

{
  *param_1 = &PTR_s_itemId_110d6f7e8;
  param_1[1] = &PTR_DAT_110d6f980;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89e894; end: 10b89e8bf; -[SCComposerMediaLibraryItemId initWithItemId:type:] */

void FUN_10b89e894(void)

{
  func_0x00010b89e984();
  func_0x00010b89e950();
  return;
}



/* Entry: 10b89e8c0; end: 10b89e8d3; +[SCComposerMediaLibraryItemId valdiMarshallableObjectDescriptor] */

void FUN_10b89e8c0(undefined8 *param_1)

{
  *param_1 = &PTR_s_itemId_110d6f9a0;
  param_1[1] = &PTR_DAT_110d6f9e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89e8d4; end: 10b89e8ff; -[SCComposerMediaLocation initWithLatitude:longitude:] */

void FUN_10b89e8d4(void)

{
  func_0x00010b89e984();
  func_0x00010b89e950();
  return;
}



/* Entry: 10b89e900; end: 10b89e913; +[SCComposerMediaLocation valdiMarshallableObjectDescriptor] */

void FUN_10b89e900(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_latitude_110d6f9f8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89e914; end: 10b89e93f;  */

void FUN_10b89e914(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b89e940; end: 10b89e99f;  */

void FUN_10b89e940(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89e9a0; end: 10b89e9d3; -[SCComposerCOFStoringOptions init] */

void FUN_10b89e9a0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270bf10;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b89e9d4; end: 10b89e9eb; +[SCComposerCOFStoringOptions valdiMarshallableObjectDescriptor] */

void FUN_10b89e9d4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d6fa40;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89e9ec; end: 10b89e9f3; -[SCCDuplexSendStatus__Enum init] */

void FUN_10b89e9ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b89e9f4; end: 10b89ea57; -[SCCDuplexMessageHandler initWithOnReceive:] */

undefined8 * FUN_10b89e9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retainBlock();
  puStack_28 = PTR_PTR_11270bf18;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b89ea58; end: 10b89ea6f; +[SCCDuplexMessageHandler valdiMarshallableObjectDescriptor] */

void FUN_10b89ea58(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d6fa70;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89ea70; end: 10b89ea77; -[SCCExistingJobPolicy__Enum init] */

void FUN_10b89ea70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b89ea78; end: 10b89ea7f; -[SCCJobConstraint__Enum init] */

void FUN_10b89ea78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,10);
  return;
}



/* Entry: 10b89ea80; end: 10b89eaa3; -[SCCRetryPolicy initWithNumberOfRetries:] */

void FUN_10b89ea80(void)

{
  func_0x000107c39f0c(PTR_PTR_11270bf38);
  return;
}



/* Entry: 10b89eaa4; end: 10b89eab3; +[SCCRetryPolicy valdiMarshallableObjectDescriptor] */

void FUN_10b89eaa4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d6fc40;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89eab4; end: 10b89eb7b; -[SCCJobProcessorApiPlatformJobProcessorId__Enum init] */

undefined8 FUN_10b89eab4(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  FUN_10b89ebd8();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0();
  _objc_release(uVar1);
  func_0x00010b89ec28(uVar2);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lRam00000001137fccb8 != -1) {
    func_0x000107c27d9c(0x1137fccb8,&PTR___NSConcreteGlobalBlock_110d6fc70);
  }
  uVar1 = uRam00000001137fccc0;
  _objc_retain(uRam00000001137fccc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return uVar1;
}



/* Entry: 10b89eb7c; end: 10b89ebd7;  */

undefined * FUN_10b89eb7c(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10b89ebd8();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puRam00000001137fccc0;
  puRam00000001137fccc0 = (undefined *)param_1;
  _objc_release(puVar1);
  func_0x00010b89ec28(uVar2);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  return PTR__OBJC_CLASS___NSArray_1126ae530;
}



/* Entry: 10b89ebd8; end: 10b89ec3b;  */

undefined * FUN_10b89ebd8(void)

{
  return PTR__OBJC_CLASS___NSArray_1126ae530;
}



/* Entry: 10b89ec3c; end: 10b89ef67; -[SCCSojuFeature__Enum init] */

undefined * FUN_10b89ec3c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined *puStack_230;
  undefined **ppuStack_228;
  undefined *puStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined *puStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_248 = &PTR____CFConstantStringClassReference_110df8718;
  ppuStack_240 = &PTR____CFConstantStringClassReference_110f9daf8;
  ppuStack_238 = &PTR____CFConstantStringClassReference_110dd6e38;
  puStack_230 = PTR_PTR_1133fad20;
  ppuStack_228 = &PTR____CFConstantStringClassReference_110df62b8;
  puStack_220 = PTR_PTR_1133fad28;
  ppuStack_218 = &PTR____CFConstantStringClassReference_110dbee78;
  ppuStack_210 = &PTR____CFConstantStringClassReference_110f9db18;
  ppuStack_208 = &PTR____CFConstantStringClassReference_110f9db38;
  puStack_200 = PTR_PTR_1133fad30;
  ppuStack_1f8 = &PTR____CFConstantStringClassReference_110e2ac58;
  ppuStack_1f0 = &PTR____CFConstantStringClassReference_110e3ddf8;
  ppuStack_1e8 = &PTR____CFConstantStringClassReference_110dd50f8;
  puStack_1e0 = PTR_PTR_1133fad38;
  ppuStack_1d8 = &PTR____CFConstantStringClassReference_110dbaad8;
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_110e33d18;
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_110e60f18;
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110ead758;
  puStack_1b8 = PTR_PTR_1133fad40;
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110db9e78;
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110eb4a58;
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110f9db58;
  ppuStack_198 = &PTR____CFConstantStringClassReference_110f16f18;
  ppuStack_190 = &PTR____CFConstantStringClassReference_110f9db78;
  ppuStack_188 = &PTR____CFConstantStringClassReference_110dec738;
  puStack_180 = PTR_PTR_1133fad48;
  ppuStack_178 = &PTR____CFConstantStringClassReference_110f9db98;
  ppuStack_170 = &PTR____CFConstantStringClassReference_110daf6b8;
  ppuStack_168 = &PTR____CFConstantStringClassReference_110f9dbb8;
  ppuStack_160 = &PTR____CFConstantStringClassReference_110f9dbd8;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110dbb6f8;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110f9dbf8;
  ppuStack_148 = &PTR____CFConstantStringClassReference_110f9dc18;
  ppuStack_140 = &PTR____CFConstantStringClassReference_110f9dc38;
  ppuStack_138 = &PTR____CFConstantStringClassReference_110e10b58;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110f9dc58;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110f9dc78;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110f9dc98;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110f9dcb8;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110e112f8;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110db4518;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110f16f38;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110edcb18;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110f13918;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110f9dcd8;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110f9dcf8;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110ee16d8;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110f6c0b8;
  puStack_c8 = PTR_PTR_1133fad50;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110dba418;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110f16f58;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110f16f98;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110f16f78;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110f9dd18;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f16db8;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110f9dd38;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f9dd58;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110f16fd8;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f120d8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110f16fb8;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e20e18;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110f16e98;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f9dd78;
  puStack_50 = PTR_PTR_1133fad58;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110db9e38;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f16e58;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_248,0x42);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10b89f368(PTR_PTR_11270bf40);
  return puVar1;
}



/* Entry: 10b89ef68; end: 10b89ef87; -[SCCMDPNativeCommand initWithBytes:] */

void FUN_10b89ef68(void)

{
  FUN_10b89f368(PTR_PTR_11270bf40);
  return;
}



/* Entry: 10b89ef88; end: 10b89ef97; +[SCCMDPNativeCommand valdiMarshallableObjectDescriptor] */

void FUN_10b89ef88(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_bytes_110d6fc90;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89ef98; end: 10b89efc3; -[SCCMDPNativeMedia initWithMediaReference:mediaMetadata:] */

void FUN_10b89ef98(void)

{
  func_0x00010b89f3b8();
  func_0x00010b89f390();
  return;
}



/* Entry: 10b89efc4; end: 10b89efd3; +[SCCMDPNativeMedia valdiMarshallableObjectDescriptor] */

void FUN_10b89efc4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d6fcc0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89efd4; end: 10b89f013; -[SCCMDPNativeRequestContext initWithMediaContextType:fetchPriority:importance:pageInfo:] */

void FUN_10b89efd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270bf50;
  uStack_20 = param_1;
  func_0x00010b89f3b8();
  _objc_msgSendSuper2(&uStack_20,param_2,0);
  return;
}



/* Entry: 10b89f014; end: 10b89f023; +[SCCMDPNativeRequestContext valdiMarshallableObjectDescriptor] */

void FUN_10b89f014(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d6fd08;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89f024; end: 10b89f043; -[SCCMDPNativeSnapDoc initWithBytes:] */

void FUN_10b89f024(void)

{
  FUN_10b89f368(PTR_PTR_11270bf58);
  return;
}



/* Entry: 10b89f044; end: 10b89f053; +[SCCMDPNativeSnapDoc valdiMarshallableObjectDescriptor] */

void FUN_10b89f044(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_bytes_110d6fd80;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89f054; end: 10b89f083; -[SCCMDPNativeSnapDocKey initWithMediaContextType:] */

void FUN_10b89f054(void)

{
  func_0x00010b89f3b8();
  func_0x00010b89f390();
  return;
}



/* Entry: 10b89f084; end: 10b89f093; +[SCCMDPNativeSnapDocKey valdiMarshallableObjectDescriptor] */

void FUN_10b89f084(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d6fdb0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89f094; end: 10b89f0b3; -[SCCMDPNativeValidateSnapDocRequest initWithBytes:] */

void FUN_10b89f094(void)

{
  FUN_10b89f368(PTR_PTR_11270bf68);
  return;
}



/* Entry: 10b89f0b4; end: 10b89f0c3; +[SCCMDPNativeValidateSnapDocRequest valdiMarshallableObjectDescriptor] */

void FUN_10b89f0b4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_bytes_110d6fdf8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89f0c4; end: 10b89f0e7; -[SCCMDPSDOMMediaId init] */

void FUN_10b89f0c4(void)

{
  func_0x00010b89f39c(PTR_PTR_11270bf70);
  return;
}



/* Entry: 10b89f0e8; end: 10b89f0f7; +[SCCMDPSDOMMediaId valdiMarshallableObjectDescriptor] */

void FUN_10b89f0e8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d6fe28;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89f0f8; end: 10b89f21b; -[SCCMDPSDOMService initWithUpdateSnapDoc:updateSnapDocInCommandBatch:isValidSnapDoc:validateSnapDoc:getSnapDocTextualView:] */

undefined8 *
FUN_10b89f0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar2 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  uVar3 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  uVar4 = param_7;
  _objc_retainBlock();
  _objc_release(param_7);
  puStack_58 = PTR_PTR_11270bf78;
  uStack_60 = param_1;
  func_0x00010b89f3b8();
  puVar5 = &uStack_60;
  _objc_msgSendSuper2(puVar5,param_2,0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b89f21c; end: 10b89f243; +[SCCMDPSDOMService valdiMarshallableObjectDescriptor] */

void FUN_10b89f21c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6feb8;
  param_1[1] = &PTR_DAT_110d6ff48;
  param_1[2] = &PTR_DAT_110d6fe88;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89f244; end: 10b89f26f;  */

undefined8 FUN_10b89f244(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[2],*param_2,param_2[1],param_2[3],param_2[4]);
  return 0;
}



/* Entry: 10b89f270; end: 10b89f2ef;  */

void FUN_10b89f270(undefined8 param_1)

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
  pcStack_38 = FUN_10b89f334;
  puStack_30 = &UNK_110989320;
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



/* Entry: 10b89f2f0; end: 10b89f313; -[SCCMDPSDOMServiceDependencies init] */

void FUN_10b89f2f0(void)

{
  func_0x00010b89f39c(PTR_PTR_11270bf80);
  return;
}



/* Entry: 10b89f314; end: 10b89f333; +[SCCMDPSDOMServiceDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b89f314(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6ff68;
  param_1[1] = &PTR_DAT_110d6ffb0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89f334; end: 10b89f367;  */

void FUN_10b89f334(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b89f368; end: 10b89f3c3;  */

void FUN_10b89f368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000000 = param_4;
  uStack0000000000000010 = param_2;
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)
            (&stack0x00000010,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b89f3c4; end: 10b89f3cb; -[SCComposerPageType__Enum init] */

void FUN_10b89f3c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,7);
  return;
}


