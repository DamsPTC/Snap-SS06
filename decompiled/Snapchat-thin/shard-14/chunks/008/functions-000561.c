/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b677c50; end: 10b677c63; +[SCVenueEditorViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b677c50(undefined8 *param_1)

{
  *param_1 = &PTR_s_placeId_110d51ea0;
  param_1[1] = &PTR_DAT_110d51f18;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b677c64; end: 10b677c83; -[SCVenuePhotoData init] */

void FUN_10b677c64(void)

{
  FUN_10b677cc4(PTR_PTR_112709778);
  return;
}



/* Entry: 10b677c84; end: 10b677c93; +[SCVenuePhotoData valdiMarshallableObjectDescriptor] */

void FUN_10b677c84(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d51f28;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b677c94; end: 10b677cc3;  */

void FUN_10b677c94(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b677cc4; end: 10b677d27;  */

void FUN_10b677cc4(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10b677d28; end: 10b677d2f; -[SCCArrivalNotificationStatus__Enum init] */

void FUN_10b677d28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,6);
  return;
}



/* Entry: 10b677d30; end: 10b677d37; -[SCCFriendPlaceAlertStatus__Enum init] */

void FUN_10b677d30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b677d38; end: 10b677d3f; -[SCCMapFriendBadgeType__Enum init] */

void FUN_10b677d38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,10);
  return;
}



/* Entry: 10b677d40; end: 10b677e07; -[SCCFriendPlaceAlertType__Enum init] */

undefined ** FUN_10b677d40(undefined **param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_58 = PTR_PTR_1133bb488;
  puStack_50 = PTR_PTR_1133bb490;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f6ca58;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f6ca78;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f6ca98;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110e06678;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_10b677e08;
  puStack_78 = PTR_PTR_112709780;
  ppuVar2 = &puStack_80;
  puStack_80 = puVar1;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(ppuVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  return ppuVar2;
}



/* Entry: 10b677e08; end: 10b677e53; -[SCCArrivalNotification initWithType:status:] */

void FUN_10b677e08(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709780;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b677e54; end: 10b677e67; +[SCCArrivalNotification valdiMarshallableObjectDescriptor] */

void FUN_10b677e54(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d51fb8;
  param_1[1] = &PTR_DAT_110d520f0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b677e68; end: 10b677e8b; -[SCCMapFriendBadgeInfo initWithBadgeType:] */

void FUN_10b677e68(void)

{
  func_0x00010b677edc(PTR_PTR_112709788);
  return;
}



/* Entry: 10b677e8c; end: 10b677e9f; +[SCCMapFriendBadgeInfo valdiMarshallableObjectDescriptor] */

void FUN_10b677e8c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d52110;
  param_1[1] = &PTR_DAT_110d52170;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b677ea0; end: 10b677ec3; -[SCCRecipient initWithUserId:] */

void FUN_10b677ea0(void)

{
  func_0x00010b677edc(PTR_PTR_112709790);
  return;
}



/* Entry: 10b677ec4; end: 10b677f0b; +[SCCRecipient valdiMarshallableObjectDescriptor] */

void FUN_10b677ec4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_userId_110d52188;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b677f0c; end: 10b677f13; -[SCDpaPageState__Enum init] */

void FUN_10b677f0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b677f14; end: 10b677f3f; -[SCComposerDpaEntryPointContext initWithDependencies:] */

void FUN_10b677f14(void)

{
  func_0x00010b678358(PTR_PTR_112709798);
  func_0x00010b67832c();
  return;
}



/* Entry: 10b677f40; end: 10b677f53; +[SCComposerDpaEntryPointContext valdiMarshallableObjectDescriptor] */

void FUN_10b677f40(undefined8 *param_1)

{
  *param_1 = &PTR_s_dependencies_110d521e8;
  param_1[1] = &PTR_DAT_110d52278;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b677f54; end: 10b677f8b; -[SCComposerDpaEntryPointDependencies initWithAdFormatEventLogger:] */

void FUN_10b677f54(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b678358(PTR_PTR_1127097a0);
  _objc_msgSendSuper2(auStack_20,param_2,0);
  return;
}



/* Entry: 10b677f8c; end: 10b677f9f; +[SCComposerDpaEntryPointDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b677f8c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d522a8;
  param_1[1] = &PTR_s_SCBridgeObservable_110d52320;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b677fa0; end: 10b67806b; -[SCComposerDpaEntryPointNativeFunctions initWithReportTrackInfo:onFocusedItemChanged:logIssueToNative:] */

undefined8 *
FUN_10b677fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  _objc_retainBlock();
  func_0x00010b678384();
  puStack_48 = PTR_PTR_1127097a8;
  puVar2 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 10b67806c; end: 10b678093; +[SCComposerDpaEntryPointNativeFunctions valdiMarshallableObjectDescriptor] */

void FUN_10b67806c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d52398;
  param_1[1] = &PTR_DAT_110d52440;
  param_1[2] = &PTR_s_od_v_110d52350;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b678094; end: 10b6780b7;  */

undefined8 FUN_10b678094(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2);
  return 0;
}



/* Entry: 10b6780b8; end: 10b678117;  */

void FUN_10b6780b8(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x00010b678368(FUN_10b6782c4);
  _objc_retainBlock(&puStack_48);
  func_0x00010b678378();
  func_0x00010b678384();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b678118; end: 10b67813b;  */

undefined8 FUN_10b678118(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],param_2[2],*param_2);
  return 0;
}



/* Entry: 10b67813c; end: 10b67819b;  */

void FUN_10b67813c(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x00010b678368(0x10b6782f0);
  _objc_retainBlock(&puStack_48);
  func_0x00010b678378();
  func_0x00010b678384();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b67819c; end: 10b6781cf; -[SCComposerDpaEntryPointViewModel initWithComposerTopSnapData:] */

void FUN_10b67819c(void)

{
  func_0x00010b678358(PTR_PTR_1127097b0);
  func_0x00010b67832c();
  return;
}



/* Entry: 10b6781d0; end: 10b6781e3; +[SCComposerDpaEntryPointViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b6781d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d52458;
  param_1[1] = &PTR_DAT_110d52548;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6781e4; end: 10b678203; -[SCComposerDpaGridBottomSheetContext init] */

void FUN_10b6781e4(void)

{
  func_0x00010b678344(PTR_PTR_1127097b8);
  return;
}



/* Entry: 10b678204; end: 10b678217; +[SCComposerDpaGridBottomSheetContext valdiMarshallableObjectDescriptor] */

void FUN_10b678204(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d52560;
  param_1[1] = &PTR_DAT_110d525c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b678218; end: 10b678247; -[SCComposerDpaGridBottomSheetViewModel initWithItemModels:] */

void FUN_10b678218(void)

{
  func_0x00010b678358(PTR_PTR_1127097c0);
  func_0x00010b67832c();
  return;
}



/* Entry: 10b678248; end: 10b67825b; +[SCComposerDpaGridBottomSheetViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b678248(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d525e0;
  param_1[1] = &PTR_DAT_110d526a0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b67825c; end: 10b67827b; -[SCComposerDpaSponsoredSnapDependencies init] */

void FUN_10b67825c(void)

{
  func_0x00010b678344(PTR_PTR_1127097c8);
  return;
}



/* Entry: 10b67827c; end: 10b67828f; +[SCComposerDpaSponsoredSnapDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b67827c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d526c0;
  param_1[1] = &PTR_DAT_110d52708;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b678290; end: 10b6782af; -[SCComposerDpaSponsoredSnapViewModel init] */

void FUN_10b678290(void)

{
  func_0x00010b678344(PTR_PTR_1127097d0);
  return;
}



/* Entry: 10b6782b0; end: 10b6782c3; +[SCComposerDpaSponsoredSnapViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b6782b0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d52720;
  param_1[1] = &PTR_DAT_110d52780;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6782c4; end: 10b67831b;  */

void FUN_10b6782c4(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b67831c; end: 10b67839f;  */

void FUN_10b67831c(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6783a0; end: 10b6783a7; -[SCCaptionCarouselEntityType__Enum init] */

void FUN_10b6783a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b6783a8; end: 10b6783af; -[SCCaptionCarouselProfileBadgeType__Enum init] */

void FUN_10b6783a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b6783b0; end: 10b6783b7; -[SCCaptionEditorEventType__Enum init] */

void FUN_10b6783b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b6783b8; end: 10b6783d7; -[SCAppliedEntity initWithEntityModel:textRange:] */

void FUN_10b6783b8(void)

{
  func_0x00010b678564(PTR_PTR_1127097d8);
  return;
}



/* Entry: 10b6783d8; end: 10b6783eb; +[SCAppliedEntity valdiMarshallableObjectDescriptor] */

void FUN_10b6783d8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d52790;
  param_1[1] = &PTR_DAT_110d527d8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6783ec; end: 10b678423; -[SCCaptionCarouselAvatar initWithUserId:templateId:] */

void FUN_10b6783ec(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127097e0;
  uStack_20 = param_1;
  func_0x00010b678588();
  func_0x00010b678580(&uStack_20);
  return;
}



/* Entry: 10b678424; end: 10b678433; +[SCCaptionCarouselAvatar valdiMarshallableObjectDescriptor] */

void FUN_10b678424(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_userId_110d527f0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b678434; end: 10b67847b; -[SCCaptionCarouselEntityModel initWithEntityType:entityId:title:] */

void FUN_10b678434(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127097e8;
  uStack_20 = param_1;
  func_0x00010b678588();
  func_0x00010b678580(&uStack_20);
  return;
}



/* Entry: 10b67847c; end: 10b67848f; +[SCCaptionCarouselEntityModel valdiMarshallableObjectDescriptor] */

void FUN_10b67847c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d52868;
  param_1[1] = &PTR_DAT_110d52940;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b678490; end: 10b6784af; -[SCCaptionCarouselTextRange initWithStart:end:] */

void FUN_10b678490(void)

{
  func_0x00010b678564(PTR_PTR_1127097f0);
  return;
}



/* Entry: 10b6784b0; end: 10b6784bf; +[SCCaptionCarouselTextRange valdiMarshallableObjectDescriptor] */

void FUN_10b6784b0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_start_110d52960;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6784c0; end: 10b6784ef; -[SCCaptionEditorEvent initWithEventType:] */

void FUN_10b6784c0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127097f8;
  uStack_20 = param_1;
  func_0x00010b678588();
  func_0x00010b678580(&uStack_20);
  return;
}



/* Entry: 10b6784f0; end: 10b678503; +[SCCaptionEditorEvent valdiMarshallableObjectDescriptor] */

void FUN_10b6784f0(undefined8 *param_1)

{
  *param_1 = &PTR_s_eventType_110d529a8;
  param_1[1] = &PTR_DAT_110d529d8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b678504; end: 10b67853f; -[SCCaptionEditorState initWithText:selection:style:color:appliedEntities:] */

void FUN_10b678504(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709800;
  uStack_20 = param_1;
  func_0x00010b678588();
  func_0x00010b678580(&uStack_20);
  return;
}



/* Entry: 10b678540; end: 10b6785a7; +[SCCaptionEditorState valdiMarshallableObjectDescriptor] */

void FUN_10b678540(undefined8 *param_1)

{
  *param_1 = &PTR_s_text_110d529e8;
  param_1[1] = &PTR_DAT_110d52a90;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6785a8; end: 10b6785af; -[SCItemInstanceViewFeatureLocation__Enum init] */

void FUN_10b6785a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b6785b0; end: 10b6785b7; -[SCItemInstanceViewImageSize__Enum init] */

void FUN_10b6785b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b6785b8; end: 10b6785ef; -[SCCCreativeToolsItemAiFontGenerationResult initWithReopenEditor:] */

void FUN_10b6785b8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709808;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b6785f0; end: 10b678603; +[SCCCreativeToolsItemAiFontGenerationResult valdiMarshallableObjectDescriptor] */

void FUN_10b6785f0(undefined8 *param_1)

{
  *param_1 = &PTR_s_item_110d52ab8;
  param_1[1] = &PTR_DAT_110d52b00;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b678604; end: 10b678623; -[SCCCreativeToolsItemNativeCTItem initWithBytes:] */

void FUN_10b678604(void)

{
  func_0x00010b6786bc(PTR_PTR_112709810);
  return;
}



/* Entry: 10b678624; end: 10b678633; +[SCCCreativeToolsItemNativeCTItem valdiMarshallableObjectDescriptor] */

void FUN_10b678624(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_bytes_110d52b10;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b678634; end: 10b678653; -[SCCCreativeToolsItemNativeCTItemInstance initWithBytes:] */

void FUN_10b678634(void)

{
  func_0x00010b6786bc(PTR_PTR_112709818);
  return;
}



/* Entry: 10b678654; end: 10b678663; +[SCCCreativeToolsItemNativeCTItemInstance valdiMarshallableObjectDescriptor] */

void FUN_10b678654(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_bytes_110d52b40;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b678664; end: 10b6786a7; -[SCCTItemInstanceViewModel initWithItemInstance:imageSize:featureLocation:] */

void FUN_10b678664(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709820;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b6786a8; end: 10b6786fb; +[SCCTItemInstanceViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b6786a8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d52b70;
  param_1[1] = &PTR_DAT_110d52c18;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6786fc; end: 10b678703; -[SCCCommerceCommonRouteTagType__Enum init] */

void FUN_10b6786fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10b678704; end: 10b678737; -[SCCCommerceCommonICommerceTweaks initWithShoppingProfileRouteTag:showcaseRouteTag:] */

void FUN_10b678704(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b678824(PTR_PTR_112709828);
  _objc_msgSendSuper2(auStack_20,param_2,0);
  return;
}



/* Entry: 10b678738; end: 10b67874b; +[SCCCommerceCommonICommerceTweaks valdiMarshallableObjectDescriptor] */

void FUN_10b678738(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d52c38;
  param_1[1] = &PTR_DAT_110d52cb0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b67874c; end: 10b67877f; -[SCCCommerceCommonINativeNavigation init] */

void FUN_10b67874c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709830;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b678780; end: 10b678793; +[SCCCommerceCommonINativeNavigation valdiMarshallableObjectDescriptor] */

void FUN_10b678780(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d52cc0;
  param_1[1] = &PTR_DAT_110d52d20;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b678794; end: 10b6787bb; -[SCCCommerceCommonNativeNavigationFavoritedParameters initWithProductId:wasFavorited:] */

void FUN_10b678794(void)

{
  func_0x00010b678824(PTR_PTR_112709838);
  func_0x00010b678804();
  return;
}



/* Entry: 10b6787bc; end: 10b6787cb; +[SCCCommerceCommonNativeNavigationFavoritedParameters valdiMarshallableObjectDescriptor] */

void FUN_10b6787bc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_productId_110d52d38;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6787cc; end: 10b6787f3; -[SCCCommerceCommonNativeNavigationPDPParameters initWithProductId:] */

void FUN_10b6787cc(void)

{
  func_0x00010b678824(PTR_PTR_112709840);
  func_0x00010b678804();
  return;
}



/* Entry: 10b6787f4; end: 10b678847; +[SCCCommerceCommonNativeNavigationPDPParameters valdiMarshallableObjectDescriptor] */

void FUN_10b6787f4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_productId_110d52d98;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b678848; end: 10b67884f; -[SCCSnapDocSaveServiceSaveLocation__Enum init] */

void FUN_10b678848(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b678850; end: 10b678857; -[SCCSnapDocSaveServiceShareMediaType__Enum init] */

void FUN_10b678850(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b678858; end: 10b67889f; -[SCCSnapDocSaveServiceMemoryData initWithSnapDoc:] */

void FUN_10b678858(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709848;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b6788a0; end: 10b6788bf; +[SCCSnapDocSaveServiceMemoryData valdiMarshallableObjectDescriptor] */

void FUN_10b6788a0(undefined8 *param_1)

{
  *param_1 = &PTR_s_snapDoc_110d52df8;
  param_1[1] = &PTR_DAT_110d52e88;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6788c0; end: 10b6788fb; -[SCCSnapDocSaveServiceNativeMemory initWithSnapId:] */

void FUN_10b6788c0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709850;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b6788fc; end: 10b678913; +[SCCSnapDocSaveServiceNativeMemory valdiMarshallableObjectDescriptor] */

void FUN_10b6788fc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_snapId_110d52ea0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b678914; end: 10b67891b; -[SCCSnapEditorApiActionBarMode__Enum init] */

void FUN_10b678914(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b67891c; end: 10b678923; -[SCCSnapEditorApiEditMode__Enum init] */

void FUN_10b67891c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b678924; end: 10b67892b; -[SCCSnapEditorApiLaunchMode__Enum init] */

void FUN_10b678924(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b67892c; end: 10b678933; -[SCCSnapEditorApiPlaybackState__Enum init] */

void FUN_10b67892c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b678934; end: 10b678957; -[SCCSnapEditorApiNativeMediaReference initWithBytes:] */

void FUN_10b678934(void)

{
  func_0x00010b6789f4(PTR_PTR_112709858);
  return;
}



/* Entry: 10b678958; end: 10b67896b; +[SCCSnapEditorApiNativeMediaReference valdiMarshallableObjectDescriptor] */

void FUN_10b678958(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_bytes_110d52ed0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b67896c; end: 10b67898f; -[SCCSnapEditorApiNativeTransforms initWithBytes:] */

void FUN_10b67896c(void)

{
  func_0x00010b6789f4(PTR_PTR_112709860);
  return;
}



/* Entry: 10b678990; end: 10b6789a3; +[SCCSnapEditorApiNativeTransforms valdiMarshallableObjectDescriptor] */

void FUN_10b678990(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_bytes_110d52f00;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6789a4; end: 10b6789d7; -[SCCSnapEditorConfig init] */

void FUN_10b6789a4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709868;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b6789d8; end: 10b678a17; +[SCCSnapEditorConfig valdiMarshallableObjectDescriptor] */

void FUN_10b6789d8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d52f30;
  param_1[1] = &PTR_DAT_110d52fd8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b678a18; end: 10b678adf; -[SCCConsoleLogPlatformLogTag__Enum init] */

undefined8 FUN_10b678a18(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  FUN_10b678b3c();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0();
  _objc_release(uVar1);
  func_0x00010b678bdc(uVar2);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lRam00000001137f77f8 != -1) {
    func_0x000107c27d9c(0x1137f77f8,&PTR___NSConcreteGlobalBlock_110d52fe8);
  }
  uVar1 = uRam00000001137f7800;
  _objc_retain(uRam00000001137f7800);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return uVar1;
}



/* Entry: 10b678ae0; end: 10b678b3b;  */

undefined * FUN_10b678ae0(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10b678b3c();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puRam00000001137f7800;
  puRam00000001137f7800 = (undefined *)param_1;
  _objc_release(puVar1);
  func_0x00010b678bdc(uVar2);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  return PTR__OBJC_CLASS___NSArray_1126ae530;
}



/* Entry: 10b678b3c; end: 10b678bef;  */

undefined * FUN_10b678b3c(void)

{
  return PTR__OBJC_CLASS___NSArray_1126ae530;
}



/* Entry: 10b678bf0; end: 10b678bf7; -[SCCPreviewToolbarButtonStyle__Enum init] */

void FUN_10b678bf0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b678bf8; end: 10b678bff; -[SCCPreviewToolbarDualCameraState__Enum init] */

void FUN_10b678bf8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,6);
  return;
}



/* Entry: 10b678c00; end: 10b678c03; -[SCCPreviewToolbarFilterStackingState__Enum init] */

void FUN_10b678c00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b678c04; end: 10b678c07; -[SCCPreviewToolbarPlaybackSpeedState__Enum init] */

void FUN_10b678c04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b678c08; end: 10b678c0f; -[SCCPreviewToolbarSpeedModeState__Enum init] */

void FUN_10b678c08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b678c10; end: 10b678c13; -[SCCPreviewToolbarToggleLensState__Enum init] */

void FUN_10b678c10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b678c14; end: 10b678c1b; -[SCCPreviewToolbarVerticalToolbarItemType__Enum init] */

void FUN_10b678c14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0x2b);
  return;
}



/* Entry: 10b678c1c; end: 10b678c23; -[SCCPreviewToolbarVideoTimerState__Enum init] */

void FUN_10b678c1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b678c24; end: 10b678c2b; -[ToolbarItemType__Enum init] */

void FUN_10b678c24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0x16);
  return;
}


