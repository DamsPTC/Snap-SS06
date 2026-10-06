/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6635ac; end: 10b6635cb; -[SCCSnapDocRendererSnapDocRendererOptions init] */

void FUN_10b6635ac(void)

{
  func_0x00010b663690(PTR_PTR_112708080);
  return;
}



/* Entry: 10b6635cc; end: 10b6635df; +[SCCSnapDocRendererSnapDocRendererOptions valdiMarshallableObjectDescriptor] */

void FUN_10b6635cc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d36520;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6635e0; end: 10b663667;  */

void FUN_10b6635e0(void)

{
  func_0x00010b6636cc();
  return;
}



/* Entry: 10b663668; end: 10b6636e3;  */

void FUN_10b663668(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10b6636e4; end: 10b6636eb; -[SCCSnapEditorExportSnapDocParseResult__Enum init] */

void FUN_10b6636e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b6636ec; end: 10b6636f3; -[SCCSnapEditorExportSnapEditorVersion__Enum init] */

void FUN_10b6636ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,1);
  return;
}



/* Entry: 10b6636f4; end: 10b663727; -[SCCSnapPlaybackPluginSnapPlaybackPluginDependencies init] */

void FUN_10b6636f4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112708088;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b663728; end: 10b663747; +[SCCSnapPlaybackPluginSnapPlaybackPluginDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b663728(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d365c8;
  param_1[1] = &PTR_s_SCCFoundationProvider_110d36718;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b663748; end: 10b66374f; -[SCCSnapEditorAiModeToolProcessingState__Enum init] */

void FUN_10b663748(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b663750; end: 10b66376f; -[SCCSnapEditorAiModeToolAIModeCustomization init] */

void FUN_10b663750(void)

{
  func_0x00010b663acc(PTR_PTR_112708090);
  return;
}



/* Entry: 10b663770; end: 10b663787; +[SCCSnapEditorAiModeToolAIModeCustomization valdiMarshallableObjectDescriptor] */

void FUN_10b663770(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d36790;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b663788; end: 10b6638ab; -[SCCSnapEditorAiModeToolAiModeAdapter initWithActivateAiMode:editingComplete:reportAiMode:resetAiMode:startAiModeGeneration:] */

undefined8 *
FUN_10b663788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_112708098;
  puVar5 = &uStack_60;
  uStack_60 = param_1;
  func_0x00010b663ae0(puVar5,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b6638ac; end: 10b6638d3; +[SCCSnapEditorAiModeToolAiModeAdapter valdiMarshallableObjectDescriptor] */

void FUN_10b6638ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d36820;
  param_1[1] = &PTR_DAT_110d368c8;
  param_1[2] = &PTR_s_oobo_v_110d367f0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6638d4; end: 10b663903;  */

undefined8 FUN_10b6638d4(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1,param_2[3]);
  return 0;
}



/* Entry: 10b663904; end: 10b663983;  */

void FUN_10b663904(undefined8 param_1)

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
  pcStack_38 = FUN_10b663a88;
  puStack_30 = &UNK_110845480;
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



/* Entry: 10b663984; end: 10b6639bb; -[SCCSnapEditorAiModeToolAiModeMetadata initWithMedia:] */

void FUN_10b663984(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127080a0;
  uStack_20 = param_1;
  func_0x00010b663ae0(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b6639bc; end: 10b6639cf; +[SCCSnapEditorAiModeToolAiModeMetadata valdiMarshallableObjectDescriptor] */

void FUN_10b6639bc(undefined8 *param_1)

{
  *param_1 = &PTR_s_media_110d368f0;
  param_1[1] = &PTR_DAT_110d36938;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6639d0; end: 10b663a0b; -[SCCSnapEditorAiModeToolAiModeProcessingData initWithState:prompt:imageBoltUrl:] */

void FUN_10b6639d0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127080a8;
  uStack_20 = param_1;
  func_0x00010b663ae0(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b663a0c; end: 10b663a1f; +[SCCSnapEditorAiModeToolAiModeProcessingData valdiMarshallableObjectDescriptor] */

void FUN_10b663a0c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d36948;
  param_1[1] = &PTR_DAT_110d369a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b663a20; end: 10b663a3f; -[SCCSnapEditorAiModeToolAiModeToolConfig init] */

void FUN_10b663a20(void)

{
  func_0x00010b663acc(PTR_PTR_1127080b0);
  return;
}



/* Entry: 10b663a40; end: 10b663a53; +[SCCSnapEditorAiModeToolAiModeToolConfig valdiMarshallableObjectDescriptor] */

void FUN_10b663a40(undefined8 *param_1)

{
  *param_1 = &PTR_s_lensId_110d369b8;
  param_1[1] = &PTR_s_SCBridgeObservable_110d36a48;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b663a54; end: 10b663a73; -[SCCSnapEditorAiModeToolAiModeToolDependencies init] */

void FUN_10b663a54(void)

{
  func_0x00010b663acc(PTR_PTR_1127080b8);
  return;
}



/* Entry: 10b663a74; end: 10b663a87; +[SCCSnapEditorAiModeToolAiModeToolDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b663a74(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d36a68;
  param_1[1] = &PTR_s_SCValdiViewFactory_110d36ab0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b663a88; end: 10b663abb;  */

void FUN_10b663a88(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b663abc; end: 10b663aef;  */

void FUN_10b663abc(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b663af0; end: 10b663af7; -[SCCSnapEditorAutoCaptionToolAudioFormat__Enum init] */

void FUN_10b663af0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b663af8; end: 10b663aff; -[SCCSnapEditorAutoCaptionToolAudioFormatEncoding__Enum init] */

void FUN_10b663af8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b663b00; end: 10b663b07; -[SCCSnapEditorAutoCaptionToolSampleRate__Enum init] */

void FUN_10b663b00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b663b08; end: 10b663b0f; -[SCCSnapEditorAutoCaptionToolTranscriptionStatus__Enum init] */

void FUN_10b663b08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b663b10; end: 10b663b3b; -[SCCSnapEditorAutoCaptionToolAudioConfig initWithSampleRate:audioFormat:encoding:] */

void FUN_10b663b10(void)

{
  func_0x00010b663d48();
  func_0x00010b663d00();
  return;
}



/* Entry: 10b663b3c; end: 10b663b4f; +[SCCSnapEditorAutoCaptionToolAudioConfig valdiMarshallableObjectDescriptor] */

void FUN_10b663b3c(undefined8 *param_1)

{
  *param_1 = &PTR_s_sampleRate_110d36ac8;
  param_1[1] = &PTR_DAT_110d36b28;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b663b50; end: 10b663b73; -[SCCSnapEditorAutoCaptionToolAutoCaptionAudioData init] */

void FUN_10b663b50(void)

{
  func_0x00010b663d34(PTR_PTR_1127080c8);
  return;
}



/* Entry: 10b663b74; end: 10b663b87; +[SCCSnapEditorAutoCaptionToolAutoCaptionAudioData valdiMarshallableObjectDescriptor] */

void FUN_10b663b74(undefined8 *param_1)

{
  *param_1 = &PTR_s_bytes_110d36b48;
  param_1[1] = &PTR_DAT_110d36b90;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b663b88; end: 10b663bab; -[SCCSnapEditorAutoCaptionToolAutoCaptionConfig init] */

void FUN_10b663b88(void)

{
  func_0x00010b663d34(PTR_PTR_1127080d0);
  return;
}



/* Entry: 10b663bac; end: 10b663bbf; +[SCCSnapEditorAutoCaptionToolAutoCaptionConfig valdiMarshallableObjectDescriptor] */

void FUN_10b663bac(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e5d3b08;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b663bc0; end: 10b663beb; -[SCCSnapEditorAutoCaptionToolAutoCaptionDependencies initWithDataProvider:notificationPresenter:] */

void FUN_10b663bc0(void)

{
  func_0x00010b663d48();
  func_0x00010b663d00();
  return;
}



/* Entry: 10b663bec; end: 10b663bff; +[SCCSnapEditorAutoCaptionToolAutoCaptionDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b663bec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d36ba0;
  param_1[1] = &PTR_DAT_110d36c00;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b663c00; end: 10b663c1f; -[SCCSnapEditorAutoCaptionToolAutoCaptionTranscription initWithStatus:] */

void FUN_10b663c00(void)

{
  func_0x00010b663d18(PTR_PTR_1127080e0);
  return;
}



/* Entry: 10b663c20; end: 10b663c33; +[SCCSnapEditorAutoCaptionToolAutoCaptionTranscription valdiMarshallableObjectDescriptor] */

void FUN_10b663c20(undefined8 *param_1)

{
  *param_1 = &PTR_s_status_110d36c20;
  param_1[1] = &PTR_DAT_110d36c68;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b663c34; end: 10b663c5f; -[SCCSnapEditorAutoCaptionToolLattice initWithToken:startMs:endMs:] */

void FUN_10b663c34(void)

{
  func_0x00010b663d48();
  func_0x00010b663d00();
  return;
}



/* Entry: 10b663c60; end: 10b663c73; +[SCCSnapEditorAutoCaptionToolLattice valdiMarshallableObjectDescriptor] */

void FUN_10b663c60(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_token_110d36c80;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b663c74; end: 10b663ca7; -[SCCSnapEditorAutoCaptionToolNativeTranscribeStreamResponse initWithBytes:] */

void FUN_10b663c74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127080f0;
  uStack_20 = param_1;
  func_0x00010b663d48();
  _objc_msgSendSuper2(&uStack_20,param_2,0);
  return;
}



/* Entry: 10b663ca8; end: 10b663cbb; +[SCCSnapEditorAutoCaptionToolNativeTranscribeStreamResponse valdiMarshallableObjectDescriptor] */

void FUN_10b663ca8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_bytes_110d36ce0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b663cbc; end: 10b663cdb; -[SCCSnapEditorAutoCaptionToolTranscriptionData initWithDetectedText:] */

void FUN_10b663cbc(void)

{
  func_0x00010b663d18(PTR_PTR_1127080f8);
  return;
}



/* Entry: 10b663cdc; end: 10b663d63; +[SCCSnapEditorAutoCaptionToolTranscriptionData valdiMarshallableObjectDescriptor] */

void FUN_10b663cdc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d36d10;
  param_1[1] = &PTR_DAT_110d36d58;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b663d64; end: 10b663d87; -[SCCSnapEditorCropToolCropToolConfig init] */

void FUN_10b663d64(void)

{
  func_0x00010b663de4(PTR_PTR_112708100);
  return;
}



/* Entry: 10b663d88; end: 10b663d9f; +[SCCSnapEditorCropToolCropToolConfig valdiMarshallableObjectDescriptor] */

void FUN_10b663d88(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e5d3b20;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b663da0; end: 10b663dc3; -[SCCSnapEditorCropToolCropToolDependencies init] */

void FUN_10b663da0(void)

{
  func_0x00010b663de4(PTR_PTR_112708108);
  return;
}



/* Entry: 10b663dc4; end: 10b663df7; +[SCCSnapEditorCropToolCropToolDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b663dc4(undefined8 *param_1)

{
  *param_1 = &PTR_s_config_110d36d68;
  param_1[1] = &PTR_DAT_110d36d98;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b663df8; end: 10b663e1b; -[SCCSnapEditorDrawingToolDrawingConfig init] */

void FUN_10b663df8(void)

{
  func_0x00010b663e78(PTR_PTR_112708110);
  return;
}



/* Entry: 10b663e1c; end: 10b663e33; +[SCCSnapEditorDrawingToolDrawingConfig valdiMarshallableObjectDescriptor] */

void FUN_10b663e1c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e5d3b38;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b663e34; end: 10b663e57; -[SCCSnapEditorDrawingToolDrawingDependencies init] */

void FUN_10b663e34(void)

{
  func_0x00010b663e78(PTR_PTR_112708118);
  return;
}



/* Entry: 10b663e58; end: 10b663e8b; +[SCCSnapEditorDrawingToolDrawingDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b663e58(undefined8 *param_1)

{
  *param_1 = &PTR_s_config_110d36da8;
  param_1[1] = &PTR_DAT_110d36df0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b663e8c; end: 10b663e93; -[SCCSnapDocSendServiceSendDestinationKind__Enum init] */

void FUN_10b663e8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,8);
  return;
}



/* Entry: 10b663e94; end: 10b663e9b; -[SCCSnapDocSendServiceSendError__Enum init] */

void FUN_10b663e94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b663e9c; end: 10b663ea3; -[SCCSnapDocSendServiceSendResultType__Enum init] */

void FUN_10b663e9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10b663ea4; end: 10b663eab; -[SCCSnapDocSendServiceSendToType__Enum init] */

void FUN_10b663ea4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,6);
  return;
}



/* Entry: 10b663eac; end: 10b663edf; -[SCCSnapDocSendServiceCreatePostABConfig init] */

void FUN_10b663eac(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112708120;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b663ee0; end: 10b663ef3; +[SCCSnapDocSendServiceCreatePostABConfig valdiMarshallableObjectDescriptor] */

void FUN_10b663ee0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d36e08;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b663ef4; end: 10b663f2f; -[SCCSnapDocSendServiceSendDestination initWithKind:destinationId:displayName:] */

void FUN_10b663ef4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112708128;
  uStack_20 = param_1;
  func_0x00010b66400c(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b663f30; end: 10b663f4b; +[SCCSnapDocSendServiceSendDestination valdiMarshallableObjectDescriptor] */

void FUN_10b663f30(undefined8 *param_1)

{
  *param_1 = &PTR_s_kind_110d36ee0;
  param_1[1] = &PTR_DAT_110d36f40;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b663f4c; end: 10b663f9b; -[SCCSnapDocSendServiceSendResult initWithType:] */

void FUN_10b663f4c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112708130;
  uStack_20 = param_1;
  func_0x00010b66400c(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b663f9c; end: 10b663fb7; +[SCCSnapDocSendServiceSendResult valdiMarshallableObjectDescriptor] */

void FUN_10b663f9c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d36f50;
  param_1[1] = &PTR_DAT_110d37058;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b663fb8; end: 10b663fef; -[SCCSnapDocSendServiceSnapDocPrepareContext initWithOneToOneRecipientUserIds:] */

void FUN_10b663fb8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112708138;
  uStack_20 = param_1;
  func_0x00010b66400c(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b663ff0; end: 10b664013; +[SCCSnapDocSendServiceSnapDocPrepareContext valdiMarshallableObjectDescriptor] */

void FUN_10b663ff0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d37080;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664014; end: 10b66401b; -[SCCMemberRolesProfileCategory__Enum init] */

void FUN_10b664014(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10b66401c; end: 10b664023; -[SCCMemberRolesProfileTier__Enum init] */

void FUN_10b66401c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b664024; end: 10b66406f; -[SCCMemberRolesMemberProfileInfo initWithDisplayName:username:isHostProfile:snapProBadgeType:canSaveHighlight:canPostToSpotlight:] */

void FUN_10b664024(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112708140;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b664070; end: 10b66408f; +[SCCMemberRolesMemberProfileInfo valdiMarshallableObjectDescriptor] */

void FUN_10b664070(undefined8 *param_1)

{
  *param_1 = &PTR_s_image_110d370b0;
  param_1[1] = &PTR_DAT_110d371b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664090; end: 10b664097; -[SCCSendflowApiStoryType__Enum init] */

void FUN_10b664090(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,7);
  return;
}



/* Entry: 10b664098; end: 10b6640bf; -[SCCSendflowApiDestinations initWithConversations:stories:phoneNumbers:massSnapRecipients:] */

void FUN_10b664098(void)

{
  func_0x00010b6642c8(PTR_PTR_112708148);
  func_0x00010b6642b8();
  return;
}



/* Entry: 10b6640c0; end: 10b6640d3; +[SCCSendflowApiDestinations valdiMarshallableObjectDescriptor] */

void FUN_10b6640c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d371d8;
  param_1[1] = &PTR_DAT_110d37250;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6640d4; end: 10b6640ff; -[SCCSendflowApiEncryptionInfo initWithKey:iv:] */

void FUN_10b6640d4(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b6642f0(PTR_PTR_112708150);
  func_0x00010b6642e0(auStack_20);
  return;
}



/* Entry: 10b664100; end: 10b664113; +[SCCSendflowApiEncryptionInfo valdiMarshallableObjectDescriptor] */

void FUN_10b664100(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_key_110d37260;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664114; end: 10b664157; -[SCCSendflowApiSendConfig initWithDestinations:localMediaReferences:] */

void FUN_10b664114(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b6642c8(PTR_PTR_112708158);
  func_0x00010b6642e0(auStack_20);
  return;
}



/* Entry: 10b664158; end: 10b66416b; +[SCCSendflowApiSendConfig valdiMarshallableObjectDescriptor] */

void FUN_10b664158(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d372a8;
  param_1[1] = &PTR_DAT_110d37410;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66416c; end: 10b664197; -[SCCSendflowApiSendRequest initWithSnapDocs:config:] */

void FUN_10b66416c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b6642f0(PTR_PTR_112708160);
  func_0x00010b6642e0(auStack_20);
  return;
}



/* Entry: 10b664198; end: 10b6641ab; +[SCCSendflowApiSendRequest valdiMarshallableObjectDescriptor] */

void FUN_10b664198(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d37428;
  param_1[1] = &PTR_DAT_110d37470;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6641ac; end: 10b6641d7; -[SCCSendflowApiSendResult initWithSnap:] */

void FUN_10b6641ac(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b6642f0(PTR_PTR_112708168);
  func_0x00010b6642e0(auStack_20);
  return;
}



/* Entry: 10b6641d8; end: 10b6641eb; +[SCCSendflowApiSendResult valdiMarshallableObjectDescriptor] */

void FUN_10b6641d8(undefined8 *param_1)

{
  *param_1 = &PTR_s_snap_110d37488;
  param_1[1] = &PTR_DAT_110d374b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6641ec; end: 10b66421b; -[SCCSendflowApiSpotlightTile initWithSnapDocBytes:clientId:] */

void FUN_10b6641ec(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b6642c8(PTR_PTR_112708170);
  func_0x00010b6642e0(auStack_20);
  return;
}



/* Entry: 10b66421c; end: 10b66422f; +[SCCSendflowApiSpotlightTile valdiMarshallableObjectDescriptor] */

void FUN_10b66421c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d374c8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664230; end: 10b664257; -[SCCSendflowApiStoryId initWithStoryId:storyData:type:] */

void FUN_10b664230(void)

{
  func_0x00010b6642c8(PTR_PTR_112708178);
  func_0x00010b6642b8();
  return;
}



/* Entry: 10b664258; end: 10b66426b; +[SCCSendflowApiStoryId valdiMarshallableObjectDescriptor] */

void FUN_10b664258(undefined8 *param_1)

{
  *param_1 = &PTR_s_storyId_110d37528;
  param_1[1] = &PTR_DAT_110d375a0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66426c; end: 10b664293; -[SCCSendflowApiUploadResult initWithDataUploaded:isDataUploadedZipped:] */

void FUN_10b66426c(void)

{
  func_0x00010b6642c8(PTR_PTR_112708180);
  func_0x00010b6642b8();
  return;
}



/* Entry: 10b664294; end: 10b664307; +[SCCSendflowApiUploadResult valdiMarshallableObjectDescriptor] */

void FUN_10b664294(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d375b8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664308; end: 10b664327; -[SCCSnapEditorLensToolLensDependencies init] */

void FUN_10b664308(void)

{
  func_0x00010b66444c(PTR_PTR_112708188);
  return;
}



/* Entry: 10b664328; end: 10b664347; +[SCCSnapEditorLensToolLensDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b664328(undefined8 *param_1)

{
  *param_1 = &PTR_s_config_110d37630;
  param_1[1] = &PTR_DAT_110d37678;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664348; end: 10b6643ab; -[SCCSnapEditorLensToolLensExplorerAdapter initWithLaunchLensExplorerForResult:] */

undefined8 * FUN_10b664348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retainBlock();
  puStack_28 = PTR_PTR_112708190;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b6643ac; end: 10b6643bb; +[SCCSnapEditorLensToolLensExplorerAdapter valdiMarshallableObjectDescriptor] */

void FUN_10b6643ac(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d37690;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6643bc; end: 10b6643db; -[SCCSnapEditorLensToolLensExplorerConfig init] */

void FUN_10b6643bc(void)

{
  func_0x00010b66444c(PTR_PTR_112708198);
  return;
}



/* Entry: 10b6643dc; end: 10b6643eb; +[SCCSnapEditorLensToolLensExplorerConfig valdiMarshallableObjectDescriptor] */

void FUN_10b6643dc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e5d3b50;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6643ec; end: 10b66440b; -[SCCSnapEditorLensToolLensSaveGuardDependencies init] */

void FUN_10b6643ec(void)

{
  func_0x00010b66444c(PTR_PTR_1127081a0);
  return;
}



/* Entry: 10b66440c; end: 10b66441b; +[SCCSnapEditorLensToolLensSaveGuardDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b66440c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d376c0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66441c; end: 10b66443b; -[SCCSnapEditorLensToolLensSendGuardDependencies init] */

void FUN_10b66441c(void)

{
  func_0x00010b66444c(PTR_PTR_1127081a8);
  return;
}



/* Entry: 10b66443c; end: 10b664473; +[SCCSnapEditorLensToolLensSendGuardDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b66443c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d376f0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664474; end: 10b6644a7; -[SCCSnapEditorMediaMediaPluginConfig init] */

void FUN_10b664474(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127081b0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b6644a8; end: 10b6644bf; +[SCCSnapEditorMediaMediaPluginConfig valdiMarshallableObjectDescriptor] */

void FUN_10b6644a8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d37720;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6644c0; end: 10b6644c7; -[SCCSnapEditorCaptionToolMagicCaptionStopActionType__Enum init] */

void FUN_10b6644c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b6644c8; end: 10b6644e7; -[SCCSnapEditorCaptionToolCaptionConfig init] */

void FUN_10b6644c8(void)

{
  FUN_10b6646a8(PTR_PTR_1127081b8);
  return;
}


