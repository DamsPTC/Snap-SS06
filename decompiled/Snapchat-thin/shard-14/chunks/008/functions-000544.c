/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6644e8; end: 10b6644fb; +[SCCSnapEditorCaptionToolCaptionConfig valdiMarshallableObjectDescriptor] */

void FUN_10b6644e8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e5d3b68;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6644fc; end: 10b66451b; -[SCCSnapEditorCaptionToolCaptionDependencies init] */

void FUN_10b6644fc(void)

{
  FUN_10b6646a8(PTR_PTR_1127081c0);
  return;
}



/* Entry: 10b66451c; end: 10b66454f; +[SCCSnapEditorCaptionToolCaptionDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b66451c(undefined8 *param_1)

{
  *param_1 = &PTR_s_config_110d37780;
  param_1[1] = &PTR_DAT_110d378a0;
  param_1[2] = &PTR_DAT_110d37750;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664550; end: 10b6645cf;  */

void FUN_10b664550(undefined8 param_1)

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
  pcStack_38 = FUN_10b66467c;
  puStack_30 = &UNK_1108ecc00;
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



/* Entry: 10b6645d0; end: 10b66460b; -[SCCSnapEditorCaptionToolMagicCaptionDependencies initWithAdapter:] */

void FUN_10b6645d0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127081c8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b66460c; end: 10b664627; +[SCCSnapEditorCaptionToolMagicCaptionDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b66460c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d378f8;
  param_1[1] = &PTR_DAT_110d37928;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664628; end: 10b664667; -[SCCSnapEditorCaptionToolMagicCaptionEvent initWithIsLoading:] */

void FUN_10b664628(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127081d0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b664668; end: 10b66467b; +[SCCSnapEditorCaptionToolMagicCaptionEvent valdiMarshallableObjectDescriptor] */

void FUN_10b664668(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d37938;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66467c; end: 10b6646a7;  */

void FUN_10b66467c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b6646a8; end: 10b6646cb;  */

void FUN_10b6646a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 10b6646cc; end: 10b6647b7; -[SCCCustomojiPickerContext initWithInitialText:alertPresenter:loggingContext:onCustomojiSelected:onDismiss:] */

undefined8 *
FUN_10b6646cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_7;
  _objc_retainBlock();
  _objc_release(param_7);
  puStack_58 = PTR_PTR_1127081d8;
  puVar2 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_6);
  return puVar2;
}



/* Entry: 10b6647b8; end: 10b6647d7; +[SCCCustomojiPickerContext valdiMarshallableObjectDescriptor] */

void FUN_10b6647b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d379b0;
  param_1[1] = &PTR_s_SCComposerFoundationAlertPresent_110d37a40;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6647d8; end: 10b66480b; -[SCCCustomojiPickerLoggingContext init] */

void FUN_10b6647d8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127081e0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b66480c; end: 10b664823; +[SCCCustomojiPickerLoggingContext valdiMarshallableObjectDescriptor] */

void FUN_10b66480c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d37a60;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664824; end: 10b664847; -[SCCSnapEditorMusicToolMusicConfig init] */

void FUN_10b664824(void)

{
  func_0x00010b664960(PTR_PTR_1127081e8);
  return;
}



/* Entry: 10b664848; end: 10b664857; +[SCCSnapEditorMusicToolMusicConfig valdiMarshallableObjectDescriptor] */

void FUN_10b664848(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e5d3b80;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664858; end: 10b6648c3; -[SCCSnapEditorMusicToolMusicDependencies initWithAudioDataLoader:playerFactory:audioFactory:alertPresenter:loadedFiltersObservable:] */

void FUN_10b664858(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127081f0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b6648c4; end: 10b6648d7; +[SCCSnapEditorMusicToolMusicDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b6648c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d37ac0;
  param_1[1] = &PTR_DAT_110d37ce8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6648d8; end: 10b6648fb; -[SCCSnapEditorMusicToolMusicSendGuardDependencies init] */

void FUN_10b6648d8(void)

{
  func_0x00010b664960(PTR_PTR_1127081f8);
  return;
}



/* Entry: 10b6648fc; end: 10b66490b; +[SCCSnapEditorMusicToolMusicSendGuardDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b6648fc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d37da0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66490c; end: 10b66494b; -[SCContentBasedMusicRecommendation initWithTrack:requestId:lensId:modelFootprint:] */

void FUN_10b66490c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112708200;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b66494c; end: 10b66498f; +[SCContentBasedMusicRecommendation valdiMarshallableObjectDescriptor] */

void FUN_10b66494c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d37dd0;
  param_1[1] = &PTR_DAT_110d37e48;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664990; end: 10b6649b3; -[SCCSnapEditorFiltersEditorEventPayload init] */

void FUN_10b664990(void)

{
  func_0x00010b664b50(PTR_PTR_112708208);
  return;
}



/* Entry: 10b6649b4; end: 10b6649c3; +[SCCSnapEditorFiltersEditorEventPayload valdiMarshallableObjectDescriptor] */

void FUN_10b6649b4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d37e58;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6649c4; end: 10b6649ff; -[SCCSnapEditorFiltersFilterNativeInfo initWithCtItemInstance:] */

void FUN_10b6649c4(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b664b40(PTR_PTR_112708210);
  func_0x00010b664b74(auStack_20);
  return;
}



/* Entry: 10b664a00; end: 10b664a13; +[SCCSnapEditorFiltersFilterNativeInfo valdiMarshallableObjectDescriptor] */

void FUN_10b664a00(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d37e88;
  param_1[1] = &PTR_DAT_110d37f18;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664a14; end: 10b664a37; -[SCCSnapEditorFiltersFilterSelectionResetEvent init] */

void FUN_10b664a14(void)

{
  func_0x00010b664b50(PTR_PTR_112708218);
  return;
}



/* Entry: 10b664a38; end: 10b664a47; +[SCCSnapEditorFiltersFilterSelectionResetEvent valdiMarshallableObjectDescriptor] */

void FUN_10b664a38(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e5d3b98;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664a48; end: 10b664a7b; -[SCCSnapEditorFiltersFilterThumbnailData initWithFilterId:thumbnailUrl:title:] */

void FUN_10b664a48(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b664b40(PTR_PTR_112708220);
  func_0x00010b664b74(auStack_20);
  return;
}



/* Entry: 10b664a7c; end: 10b664a8b; +[SCCSnapEditorFiltersFilterThumbnailData valdiMarshallableObjectDescriptor] */

void FUN_10b664a7c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d37f28;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664a8c; end: 10b664adb; -[SCCSnapEditorFiltersFiltersDependencies initWithCarouselViewFactory:pagerViewFactory:filtersStateObservable:appliedFiltersObservable:] */

void FUN_10b664a8c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b664b40(PTR_PTR_112708228);
  func_0x00010b664b74(auStack_20);
  return;
}



/* Entry: 10b664adc; end: 10b664aef; +[SCCSnapEditorFiltersFiltersDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b664adc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d37f88;
  param_1[1] = &PTR_s_SCValdiViewFactory_110d38108;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664af0; end: 10b664b23; -[SCCSnapEditorFiltersFiltersState initWithIsCarouselExpanded:isScrolling:] */

void FUN_10b664af0(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b664b40(PTR_PTR_112708230);
  func_0x00010b664b74(auStack_20);
  return;
}



/* Entry: 10b664b24; end: 10b664b7b; +[SCCSnapEditorFiltersFiltersState valdiMarshallableObjectDescriptor] */

void FUN_10b664b24(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d38148;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664b7c; end: 10b664b83; -[SCCFilterItemCTAType__Enum init] */

void FUN_10b664b7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b664b84; end: 10b664b8b; -[SCCFilterItemChangeSource__Enum init] */

void FUN_10b664b84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b664b8c; end: 10b664b93; -[SCCFilterItemFilterType__Enum init] */

void FUN_10b664b8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,9);
  return;
}



/* Entry: 10b664b94; end: 10b664b9b; -[SCCFilterItemTriggerAction__Enum init] */

void FUN_10b664b94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b664b9c; end: 10b664bcb; -[SCCFilterItemBounds initWithLeft:top:right:bottom:] */

void FUN_10b664b9c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b664df4(PTR_PTR_112708238);
  func_0x00010b664e0c(auStack_20);
  return;
}



/* Entry: 10b664bcc; end: 10b664bdf; +[SCCFilterItemBounds valdiMarshallableObjectDescriptor] */

void FUN_10b664bcc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_left_110d381c0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664be0; end: 10b664c0f; -[SCCFilterItemCTAPayload initWithType:] */

void FUN_10b664be0(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b664df4(PTR_PTR_112708240);
  func_0x00010b664e0c(auStack_20);
  return;
}



/* Entry: 10b664c10; end: 10b664c23; +[SCCFilterItemCTAPayload valdiMarshallableObjectDescriptor] */

void FUN_10b664c10(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d38238;
  param_1[1] = &PTR_DAT_110d38298;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664c24; end: 10b664c5f; -[SCCFilterItemCarouselScrollData initWithIndex:filterId:offset:source:] */

void FUN_10b664c24(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b664df4(PTR_PTR_112708248);
  func_0x00010b664e0c(auStack_20);
  return;
}



/* Entry: 10b664c60; end: 10b664c73; +[SCCFilterItemCarouselScrollData valdiMarshallableObjectDescriptor] */

void FUN_10b664c60(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d382a8;
  param_1[1] = &PTR_DAT_110d38338;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664c74; end: 10b664ca3; -[SCCFilterItemFilterAttribution initWithIsSponsored:] */

void FUN_10b664c74(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b664df4(PTR_PTR_112708250);
  func_0x00010b664e0c(auStack_20);
  return;
}



/* Entry: 10b664ca4; end: 10b664cb7; +[SCCFilterItemFilterAttribution valdiMarshallableObjectDescriptor] */

void FUN_10b664ca4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_icon_110d38348;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664cb8; end: 10b664cf3; -[SCCFilterItemFilterMainItemData initWithFilterId:filterType:] */

void FUN_10b664cb8(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b664df4(PTR_PTR_112708258);
  func_0x00010b664e0c(auStack_20);
  return;
}



/* Entry: 10b664cf4; end: 10b664d07; +[SCCFilterItemFilterMainItemData valdiMarshallableObjectDescriptor] */

void FUN_10b664cf4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d383c0;
  param_1[1] = &PTR_DAT_110d38480;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664d08; end: 10b664d3b; -[SCCFilterItemFilterSelection initWithSelectedIndex:changeSource:] */

void FUN_10b664d08(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b664df4(PTR_PTR_112708260);
  func_0x00010b664e0c(auStack_20);
  return;
}



/* Entry: 10b664d3c; end: 10b664d4f; +[SCCFilterItemFilterSelection valdiMarshallableObjectDescriptor] */

void FUN_10b664d3c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d384a8;
  param_1[1] = &PTR_DAT_110d38520;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664d50; end: 10b664d83; -[SCCFilterItemGeoFilterData init] */

void FUN_10b664d50(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112708268;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b664d84; end: 10b664d97; +[SCCFilterItemGeoFilterData valdiMarshallableObjectDescriptor] */

void FUN_10b664d84(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d38538;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664d98; end: 10b664dcf; -[SCCFilterItemVenueItemData initWithVenueId:venueName:locality:] */

void FUN_10b664d98(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b664df4(PTR_PTR_112708270);
  func_0x00010b664e0c(auStack_20);
  return;
}



/* Entry: 10b664dd0; end: 10b664e1b; +[SCCFilterItemVenueItemData valdiMarshallableObjectDescriptor] */

void FUN_10b664dd0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d385b0;
  param_1[1] = &PTR_DAT_110d38640;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664e1c; end: 10b664e23; -[SCCSnapEditorStickerToolNativeStickerPickerEventType__Enum init] */

void FUN_10b664e1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10b664e24; end: 10b664e2b; -[SCCSnapEditorStickerToolStickerType__Enum init] */

void FUN_10b664e24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0x18);
  return;
}



/* Entry: 10b664e2c; end: 10b664e83; -[SCCSnapEditorStickerToolNativeStickerPickerDependencies initWithShowNativeStickerPicker:] */

undefined8 FUN_10b664e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = param_3;
  func_0x00010b6651d4();
  func_0x00010b6651c8();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10b664e84; end: 10b664ec3; +[SCCSnapEditorStickerToolNativeStickerPickerDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b664e84(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d38680;
  param_1[1] = &PTR_DAT_110d386b0;
  param_1[2] = &PTR_DAT_110d38650;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664ec4; end: 10b664f43;  */

void FUN_10b664ec4(undefined8 param_1)

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
  pcStack_38 = FUN_10b665168;
  puStack_30 = &UNK_110ca22d0;
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



/* Entry: 10b664f44; end: 10b664f7f; -[SCCSnapEditorStickerToolNativeStickerPickerEvent initWithType:] */

void FUN_10b664f44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112708280;
  uStack_20 = param_1;
  func_0x00010b6651d4();
  _objc_msgSendSuper2(&uStack_20,param_2,0);
  return;
}



/* Entry: 10b664f80; end: 10b664f93; +[SCCSnapEditorStickerToolNativeStickerPickerEvent valdiMarshallableObjectDescriptor] */

void FUN_10b664f80(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d386d8;
  param_1[1] = &PTR_DAT_110d38738;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664f94; end: 10b664fb3; -[SCCSnapEditorStickerToolNativeStickerPickerMetricsInfo init] */

void FUN_10b664f94(void)

{
  func_0x00010b6651ac(PTR_PTR_112708288);
  return;
}



/* Entry: 10b664fb4; end: 10b664fc7; +[SCCSnapEditorStickerToolNativeStickerPickerMetricsInfo valdiMarshallableObjectDescriptor] */

void FUN_10b664fb4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d38758;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664fc8; end: 10b664fe7; -[SCCSnapEditorStickerToolStickerConfig init] */

void FUN_10b664fc8(void)

{
  func_0x00010b6651ac(PTR_PTR_112708290);
  return;
}



/* Entry: 10b664fe8; end: 10b664ffb; +[SCCSnapEditorStickerToolStickerConfig valdiMarshallableObjectDescriptor] */

void FUN_10b664fe8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d387b8;
  param_1[1] = &PTR_DAT_110d387e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b664ffc; end: 10b66501b; -[SCCSnapEditorStickerToolStickerDependencies init] */

void FUN_10b664ffc(void)

{
  func_0x00010b6651ac(PTR_PTR_112708298);
  return;
}



/* Entry: 10b66501c; end: 10b66502f; +[SCCSnapEditorStickerToolStickerDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b66501c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d387f8;
  param_1[1] = &PTR_DAT_110d388d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b665030; end: 10b66506f; -[SCCSnapEditorStickerToolStickerPickerItemPickEventMetadata initWithIsFromRecents:isFromSearch:enterSearchCount:pretypeStickerTagSelectCount:prefixMatchStickerTagSelectCount:] */

void FUN_10b665030(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127082a0;
  uStack_20 = param_1;
  func_0x00010b6651d4();
  _objc_msgSendSuper2(&uStack_20,param_2,0);
  return;
}



/* Entry: 10b665070; end: 10b665083; +[SCCSnapEditorStickerToolStickerPickerItemPickEventMetadata valdiMarshallableObjectDescriptor] */

void FUN_10b665070(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d38920;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b665084; end: 10b66510f; -[SCVNativeStickerEditorContext initWithOnFinishedEditing:onDismiss:] */

undefined8
FUN_10b665084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  func_0x00010b6651d4();
  func_0x00010b6651c8();
  _objc_release(uVar1);
  _objc_release(param_3);
  return param_4;
}



/* Entry: 10b665110; end: 10b665123; +[SCVNativeStickerEditorContext valdiMarshallableObjectDescriptor] */

void FUN_10b665110(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d389b0;
  param_1[1] = &PTR_DAT_110d389f8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b665124; end: 10b665153; -[SCVNativeStickerEditorViewModel initWithNativeCTItemInstance:displaySize:] */

void FUN_10b665124(void)

{
  func_0x00010b6651d4();
  func_0x00010b6651c8();
  return;
}



/* Entry: 10b665154; end: 10b665167; +[SCVNativeStickerEditorViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b665154(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d38a08;
  param_1[1] = &PTR_DAT_110d38a50;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b665168; end: 10b66519b;  */

void FUN_10b665168(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b66519c; end: 10b6651e7;  */

void FUN_10b66519c(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6651e8; end: 10b665207; -[SCCSnapEditorStickersBitmojiPastingDataProvider initWithBitmojiPastingObservable:] */

void FUN_10b6651e8(void)

{
  func_0x00010b6656a0(PTR_PTR_1127082b8);
  return;
}



/* Entry: 10b665208; end: 10b66521b; +[SCCSnapEditorStickersBitmojiPastingDataProvider valdiMarshallableObjectDescriptor] */

void FUN_10b665208(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d38a68;
  param_1[1] = &PTR_s_SCBridgeObservable_110d38a98;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66521c; end: 10b66524f; -[SCCSnapEditorStickersLocationsDataProvider init] */

void FUN_10b66521c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127082c0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b665250; end: 10b665273; +[SCCSnapEditorStickersLocationsDataProvider valdiMarshallableObjectDescriptor] */

void FUN_10b665250(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d38ae0;
  param_1[1] = &PTR_DAT_110d38ba0;
  param_1[2] = &PTR_DAT_110d38ab0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b665274; end: 10b66529b;  */

undefined8 FUN_10b665274(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],param_2[2],*param_2,param_2[3]);
  return 0;
}



/* Entry: 10b66529c; end: 10b665317;  */

void FUN_10b66529c(undefined8 param_1)

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
  pcStack_38 = FUN_10b665660;
  puStack_30 = &UNK_110d38f00;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  func_0x00010b665744();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b665318; end: 10b665337; -[SCCSnapEditorStickersPollCreationResponse initWithPollId:] */

void FUN_10b665318(void)

{
  func_0x00010b6656a0(PTR_PTR_1127082c8);
  return;
}



/* Entry: 10b665338; end: 10b66534b; +[SCCSnapEditorStickersPollCreationResponse valdiMarshallableObjectDescriptor] */

void FUN_10b665338(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d38bd0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66534c; end: 10b66538b; -[SCCSnapEditorStickersPollStickerSendDependencies initWithCreatePoll:] */

void FUN_10b66534c(void)

{
  func_0x00010b6656dc();
  func_0x00010b6656d0();
  func_0x00010b6656bc();
  func_0x00010b6656e8();
  return;
}



/* Entry: 10b66538c; end: 10b66539f; +[SCCSnapEditorStickersPollStickerSendDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b66538c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d38c00;
  param_1[1] = &PTR_DAT_110d38c30;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6653a0; end: 10b6653bf; -[SCCSnapEditorStickersPollsDataProvider initWithEmojiSections:] */

void FUN_10b6653a0(void)

{
  func_0x00010b6656a0(PTR_PTR_1127082d8);
  return;
}



/* Entry: 10b6653c0; end: 10b6653d3; +[SCCSnapEditorStickersPollsDataProvider valdiMarshallableObjectDescriptor] */

void FUN_10b6653c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d38c40;
  param_1[1] = &PTR_DAT_110d38c70;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6653d4; end: 10b6653f3; -[SCCSnapEditorStickersShareYoursCreationResponse initWithShareYoursId:] */

void FUN_10b6653d4(void)

{
  func_0x00010b6656a0(PTR_PTR_1127082e0);
  return;
}



/* Entry: 10b6653f4; end: 10b665407; +[SCCSnapEditorStickersShareYoursCreationResponse valdiMarshallableObjectDescriptor] */

void FUN_10b6653f4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d38c80;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b665408; end: 10b665447; -[SCCSnapEditorStickersShareYoursStickerSendDependencies initWithCreateShareYoursPrompt:] */

void FUN_10b665408(void)

{
  func_0x00010b6656dc();
  func_0x00010b6656d0();
  func_0x00010b6656bc();
  func_0x00010b6656e8();
  return;
}



/* Entry: 10b665448; end: 10b66545b; +[SCCSnapEditorStickersShareYoursStickerSendDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b665448(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d38cb0;
  param_1[1] = &PTR_DAT_110d38ce0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66545c; end: 10b665497; -[SCCSnapEditorStickersStickerSendDependencies initWithPollDependencies:storyDependencies:shareYoursDependencies:] */

void FUN_10b66545c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127082f0;
  uStack_20 = param_1;
  func_0x00010b6656d0();
  _objc_msgSendSuper2(&uStack_20,param_2,0);
  return;
}



/* Entry: 10b665498; end: 10b6654ab; +[SCCSnapEditorStickersStickerSendDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b665498(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d38cf0;
  param_1[1] = &PTR_DAT_110d38d50;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6654ac; end: 10b6654d7; -[SCCSnapEditorStickersStickerTypeRenderingSize initWithWidth:height:] */

void FUN_10b6654ac(void)

{
  func_0x00010b6656d0();
  func_0x00010b6656bc();
  return;
}



/* Entry: 10b6654d8; end: 10b6654eb; +[SCCSnapEditorStickersStickerTypeRenderingSize valdiMarshallableObjectDescriptor] */

void FUN_10b6654d8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_width_110d38d70;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6654ec; end: 10b665547; -[SCCSnapEditorStickersStoriesDataProvider initWithStories:bitmojiInfo:] */

void FUN_10b6654ec(void)

{
  func_0x00010b665708();
  _objc_retainBlock();
  func_0x00010b66572c();
  func_0x00010b665744();
  func_0x00010b6656d0();
  func_0x00010b6656bc();
  func_0x00010b665738();
  _objc_release();
  return;
}



/* Entry: 10b665548; end: 10b66555b; +[SCCSnapEditorStickersStoriesDataProvider valdiMarshallableObjectDescriptor] */

void FUN_10b665548(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d38db8;
  param_1[1] = &PTR_DAT_110d38e00;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66555c; end: 10b665587; -[SCCSnapEditorStickersStoryInviteCreationResponse initWithStoryId:inviteId:] */

void FUN_10b66555c(void)

{
  func_0x00010b6656d0();
  func_0x00010b6656bc();
  return;
}



/* Entry: 10b665588; end: 10b66559b; +[SCCSnapEditorStickersStoryInviteCreationResponse valdiMarshallableObjectDescriptor] */

void FUN_10b665588(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_storyId_110d38e10;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66559c; end: 10b6655db; -[SCCSnapEditorStickersStoryStickerSendDependencies initWithCreateStoryInvite:] */

void FUN_10b66559c(void)

{
  func_0x00010b6656dc();
  func_0x00010b6656d0();
  func_0x00010b6656bc();
  func_0x00010b6656e8();
  return;
}


