/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a2b3e4; end: 107a2b45b;  */

void FUN_107a2b3e4(undefined8 param_1)

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
  pcStack_38 = FUN_107a2b5c4;
  puStack_30 = &UNK_110842508;
  uStack_28 = param_1;
  func_0x000107a2b678();
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  func_0x000107a2b670();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107a2b45c; end: 107a2b497; -[SCImpalaSnapInsightsSnapInsightsViewModel initWithProfileId:snaps:snapIndex:tier:isHostUser:storyRepliesAbEnabled:quotingAbEnabled:disableThumbnailTapAction:isUser16or17:showSnapPromote:isUserOver18:showFavoriteCounts:contentType:] */

void FUN_107a2b45c(void)

{
  undefined8 in_stack_00000020;
  
  func_0x000107a2b694(in_stack_00000020);
  func_0x000107a2b604();
  return;
}



/* Entry: 107a2b498; end: 107a2b4e3; -[SCImpalaSnapInsightsSnapInsightsViewModel initWithProfileId:snaps:snapIndex:tier:isHostUser:storyRepliesAbEnabled:quotingAbEnabled:disableThumbnailTapAction:isUser16or17:showSnapPromote:isUserOver18:showFavoriteCounts:] */

void FUN_107a2b498(undefined8 param_1)

{
  func_0x000107a2b604(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 107a2b4e4; end: 107a2b51f; -[SCImpalaSnapInsightsSnapInsightsViewModel initWithProfileId:snaps:snapIndex:tier:isHostUser:storyRepliesAbEnabled:quotingAbEnabled:disableThumbnailTapAction:isUser16or17:showSnapPromote:showFavoriteCounts:] */

void FUN_107a2b4e4(void)

{
  undefined8 in_stack_00000010;
  
  func_0x000107a2b694(in_stack_00000010);
  func_0x000107a2b604();
  return;
}



/* Entry: 107a2b520; end: 107a2b533; +[SCImpalaSnapInsightsSnapInsightsViewModel valdiMarshallableObjectDescriptor] */

void FUN_107a2b520(undefined8 *param_1)

{
  *param_1 = &PTR_s_profileId_1109f5fd0;
  param_1[1] = &PTR_DAT_1109f6120;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107a2b534; end: 107a2b567; -[SCUnifiedSnapManagementFooterContext initWithSnapActionHandler:actionHandler:] */

void FUN_107a2b534(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f9648;
  uStack_20 = param_1;
  func_0x000107a2b664();
  func_0x000107a2b62c(&uStack_20);
  return;
}



/* Entry: 107a2b568; end: 107a2b57b; +[SCUnifiedSnapManagementFooterContext valdiMarshallableObjectDescriptor] */

void FUN_107a2b568(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109f6138;
  param_1[1] = &PTR_DAT_1109f6180;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107a2b57c; end: 107a2b5af; -[SCUnifiedSnapManagementFooterViewModel initWithContentType:snap:] */

void FUN_107a2b57c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f9650;
  uStack_20 = param_1;
  func_0x000107a2b664();
  func_0x000107a2b62c(&uStack_20);
  return;
}



/* Entry: 107a2b5b0; end: 107a2b5c3; +[SCUnifiedSnapManagementFooterViewModel valdiMarshallableObjectDescriptor] */

void FUN_107a2b5b0(undefined8 *param_1)

{
  *param_1 = &PTR_s_contentType_1109f6198;
  param_1[1] = &PTR_DAT_1109f61e0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107a2b5c4; end: 107a2b5f3;  */

void FUN_107a2b5c4(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 107a2b5f4; end: 107a2b6eb;  */

void FUN_107a2b5f4(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107a2b6ec; end: 107a2b6ef; -[SCCCashOutResponseCode__Enum init] */

void FUN_107a2b6ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 107a2b6f0; end: 107a2b6f7; -[SCCPayoutsEarningType__Enum init] */

void FUN_107a2b6f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,9);
  return;
}



/* Entry: 107a2b6f8; end: 107a2b6ff; -[SCCPayoutsOnboardingState__Enum init] */

void FUN_107a2b6f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,9);
  return;
}



/* Entry: 107a2b700; end: 107a2b703; -[SCCPayoutsOnboardingStateReason__Enum init] */

void FUN_107a2b700(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 107a2b704; end: 107a2b707; -[SCCPayoutsPayoutState__Enum init] */

void FUN_107a2b704(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 107a2b708; end: 107a2b70f; -[SCCPayoutsPayoutType__Enum init] */

void FUN_107a2b708(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 107a2b710; end: 107a2b7b7; -[SCCPayoutsIds__Enum init] */

void FUN_107a2b710(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 auStack_e0 [16];
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  
  func_0x000107a2bc74();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110eaa258;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110eaa278;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110eaa298;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110eaa2b8;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110eaa2d8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110eaa2f8;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110eaa318;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110eaa338;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_68,8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a2bc5c();
  func_0x000107a2bc50();
  func_0x000107a2bc8c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_107a2b7b8;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x000107a2bc74();
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110db00f8;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110eaa358;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110eaa378;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110eaa398;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a2bc5c();
  func_0x000107a2bc50();
  func_0x000107a2bc8c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_107a2b838;
  ppuStack_d0 = &puStack_80;
  func_0x000107a2bc38(PTR_PTR_1126f9658);
  func_0x000107a2bc48(auStack_e0);
  return;
}



/* Entry: 107a2b7b8; end: 107a2b837; -[SCPayoutsPageEntryType__Enum init] */

void FUN_107a2b7b8(void)

{
  undefined1 in_ZR;
  undefined1 auStack_70 [16];
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  
  func_0x000107a2bc74();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110db00f8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110eaa358;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110eaa378;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110eaa398;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a2bc5c();
  func_0x000107a2bc50();
  func_0x000107a2bc8c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_107a2b838;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x000107a2bc38(PTR_PTR_1126f9658);
  func_0x000107a2bc48(auStack_70);
  return;
}



/* Entry: 107a2b838; end: 107a2b86b; -[SCCCrystalsActivity initWithEarnings:nextPayoutDate:nextCashoutDate:] */

void FUN_107a2b838(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000107a2bc38(PTR_PTR_1126f9658);
  func_0x000107a2bc48(auStack_20);
  return;
}



/* Entry: 107a2b86c; end: 107a2b87f; +[SCCCrystalsActivity valdiMarshallableObjectDescriptor] */

void FUN_107a2b86c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109f61f8;
  param_1[1] = &PTR_DAT_1109f6258;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107a2b880; end: 107a2b8c3; -[SCCCrystalsInfo initWithCurrentCrystals:currentEarnings:onboardingState:onboardingEmail:accessCode:canCashout:passesSecurityCheck:reasonCode:] */

void FUN_107a2b880(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000107a2bc38(PTR_PTR_1126f9660);
  func_0x000107a2bc48(auStack_20);
  return;
}



/* Entry: 107a2b8c4; end: 107a2b8d7; +[SCCCrystalsInfo valdiMarshallableObjectDescriptor] */

void FUN_107a2b8c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109f6268;
  param_1[1] = &PTR_DAT_1109f6388;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107a2b8d8; end: 107a2b913; -[SCCPayout initWithValue:earnedTimestamp:] */

void FUN_107a2b8d8(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000107a2bc38(PTR_PTR_1126f9668);
  func_0x000107a2bc48(auStack_20);
  return;
}



/* Entry: 107a2b914; end: 107a2b927; +[SCCPayout valdiMarshallableObjectDescriptor] */

void FUN_107a2b914(undefined8 *param_1)

{
  *param_1 = &PTR_s_value_1109f63a0;
  param_1[1] = &PTR_DAT_1109f6460;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107a2b928; end: 107a2b95f; -[SCCPayoutsEarningSource initWithValue:valueCents:type:] */

void FUN_107a2b928(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000107a2bc38(PTR_PTR_1126f9670);
  func_0x000107a2bc48(auStack_20);
  return;
}



/* Entry: 107a2b960; end: 107a2b973; +[SCCPayoutsEarningSource valdiMarshallableObjectDescriptor] */

void FUN_107a2b960(undefined8 *param_1)

{
  *param_1 = &PTR_s_value_1109f6480;
  param_1[1] = &PTR_DAT_1109f6510;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107a2b974; end: 107a2b993; -[SCCrystalsInvalidatedDialogContext init] */

void FUN_107a2b974(void)

{
  func_0x000107a2bc1c(PTR_PTR_1126f9678);
  return;
}



/* Entry: 107a2b994; end: 107a2b9a7; +[SCCrystalsInvalidatedDialogContext valdiMarshallableObjectDescriptor] */

void FUN_107a2b994(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109f6520;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107a2b9a8; end: 107a2b9c7; -[SCCrystalsInvalidatedDialogViewModel init] */

void FUN_107a2b9a8(void)

{
  func_0x000107a2bc1c(PTR_PTR_1126f9680);
  return;
}



/* Entry: 107a2b9c8; end: 107a2b9db; +[SCCrystalsInvalidatedDialogViewModel valdiMarshallableObjectDescriptor] */

void FUN_107a2b9c8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10dee0c18;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107a2b9dc; end: 107a2ba9b; -[SCGiftSendingContext initWithOnDismiss:loadGift:onSendGift:] */

undefined8
FUN_107a2b9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  _objc_retainBlock();
  _objc_release(param_5);
  puStack_48 = PTR_PTR_1126f9688;
  uStack_50 = param_1;
  func_0x000107a2bc48(&uStack_50,PTR_s_initWithFieldValues__1125e24b8);
  func_0x000107a2bc50();
  _objc_release(uVar1);
  _objc_release(param_3);
  return param_5;
}



/* Entry: 107a2ba9c; end: 107a2baaf; +[SCGiftSendingContext valdiMarshallableObjectDescriptor] */

void FUN_107a2ba9c(undefined8 *param_1)

{
  *param_1 = &PTR_s_onDismiss_1109f6568;
  param_1[1] = &PTR_s_SCValdiViewFactory_1109f65e0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107a2bab0; end: 107a2bae7; -[SCGiftSendingViewModel initWithGiftId:orderId:] */

void FUN_107a2bab0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f9690;
  uStack_20 = param_1;
  func_0x000107a2bc48(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 107a2bae8; end: 107a2bafb; +[SCGiftSendingViewModel valdiMarshallableObjectDescriptor] */

void FUN_107a2bae8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109f65f0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107a2bafc; end: 107a2bb33; -[SCOnboardingChecklistContext initWithPayoutsContext:] */

void FUN_107a2bafc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f9698;
  uStack_20 = param_1;
  func_0x000107a2bc48(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 107a2bb34; end: 107a2bb47; +[SCOnboardingChecklistContext valdiMarshallableObjectDescriptor] */

void FUN_107a2bb34(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109f6638;
  param_1[1] = &PTR_DAT_1109f6668;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107a2bb48; end: 107a2bb67; -[SCOnboardingChecklistViewModel init] */

void FUN_107a2bb48(void)

{
  func_0x000107a2bc1c(PTR_PTR_1126f96a0);
  return;
}



/* Entry: 107a2bb68; end: 107a2bb7b; +[SCOnboardingChecklistViewModel valdiMarshallableObjectDescriptor] */

void FUN_107a2bb68(undefined8 *param_1)

{
  *param_1 = &PTR_s_bitmojiAvatarId_1109f6678;
  param_1[1] = &PTR_DAT_1109f6720;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107a2bb7c; end: 107a2bbc3; -[SCPayoutsContext initWithNavigator:] */

void FUN_107a2bb7c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000107a2bc38(PTR_PTR_1126f96a8);
  func_0x000107a2bc48(auStack_20);
  return;
}



/* Entry: 107a2bbc4; end: 107a2bbd7; +[SCPayoutsContext valdiMarshallableObjectDescriptor] */

void FUN_107a2bbc4(undefined8 *param_1)

{
  *param_1 = &PTR_s_onDismiss_1109f6730;
  param_1[1] = &PTR_s_SCValdiINavigator_1109f68e0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107a2bbd8; end: 107a2bbf7; -[SCPayoutsViewModel init] */

void FUN_107a2bbd8(void)

{
  func_0x000107a2bc1c(PTR_PTR_1126f96b0);
  return;
}



/* Entry: 107a2bbf8; end: 107a2bcab; +[SCPayoutsViewModel valdiMarshallableObjectDescriptor] */

void FUN_107a2bbf8(undefined8 *param_1)

{
  *param_1 = &PTR_s_bitmojiAvatarId_1109f6958;
  param_1[1] = &PTR_DAT_1109f6a60;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107a2bcac; end: 107a2bd4f; -[SCOperaChromeAvatarViewProvider initWithImageDownloader:storiesCachedSummaryInfoProvider:] */

undefined1 *
FUN_107a2bcac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f96b8;
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



/* Entry: 107a2bd50; end: 107a2bd5f; -[SCOperaChromeAvatarViewProvider viewForProperties:completion:] */

void FUN_107a2bd50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee9250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__view_forProperties_completion__112597e38,0,param_3,param_4);
  return;
}



/* Entry: 107a2bd60; end: 107a2c047; -[SCOperaChromeAvatarViewProvider _view:forProperties:completion:] */

void FUN_107a2bd60(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) {
    (**(code **)(param_5 + 0x10))(param_5,0);
  }
  else {
    uVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    if (uVar2 == 0) {
      uStack_a0 = 0x1c;
    }
    else {
      uStack_a0 = uVar2;
      func_0x00010c067fc0();
    }
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_107a2c048;
    puStack_80 = &UNK_1109f6a70;
    _objc_retain(param_3);
    uStack_78 = param_3;
    lStack_70 = param_1;
    _objc_retain(param_5);
    ppuVar6 = &puStack_98;
    lStack_68 = param_5;
    _objc_retainBlock();
    uVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 == 0) {
      (**(code **)(param_5 + 0x10))(param_5,0);
    }
    else {
      uVar3 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010bf1f3c0();
      _objc_release(uVar5);
      uVar5 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010bf1f3c0();
      _objc_release(uVar5);
      uVar5 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar5;
      func_0x00010bf1f3c0();
      _objc_release(uVar5);
      uVar5 = uVar3;
      if ((int)uVar7 == 0) {
        func_0x0001085a30b8(uVar3,0,uVar1,uStack_a0,1,0,uVar9);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        FUN_107a2c218(uVar3,1,uVar1,uStack_a0,0,1,*(undefined8 *)(param_1 + 0x10),uVar8);
        _objc_retainAutoreleasedReturnValue();
      }
      (*(code *)ppuVar6[2])(ppuVar6,uVar5);
      _objc_release(uVar5);
      _objc_release(uVar3);
    }
    _objc_release(ppuVar6);
    _objc_release(lStack_68);
    _objc_release(uStack_78);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a2c048; end: 107a2c103;  */

void FUN_107a2c048(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b1a08;
  puVar3 = *(undefined **)(param_1 + 0x20);
  _objc_retain(puVar3);
  _objc_opt_class(puVar1);
  puVar2 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar1);
  puVar1 = puVar3;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  if (puVar1 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126b1a08;
    _objc_opt_new(PTR_PTR_1126b1a08);
    func_0x00010c1aa200();
  }
  func_0x00010c2226c0(puVar3);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a2c104; end: 107a2c1bf; -[SCOperaChromeAvatarViewProvider updateView:withUpdatedProperties:completion:] */

void FUN_107a2c104(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126b1a08;
    _objc_opt_class(PTR_PTR_1126b1a08);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      _objc_retain(param_3);
      func_0x00010c1097a0(param_3);
      func_0x00010bee9240(param_1);
      _objc_release(param_3);
      goto LAB_107a2c19c;
    }
  }
  func_0x00010c29cf00(param_1);
LAB_107a2c19c:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a2c1c0; end: 107a2c1e7; -[SCOperaChromeAvatarViewProvider imageDownloader] */

void FUN_107a2c1c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a2c1e8; end: 107a2c217; -[SCOperaChromeAvatarViewProvider .cxx_destruct] */

void FUN_107a2c1e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a2c218; end: 107a2c57f;  */

void FUN_107a2c218(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,ulong param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_7);
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x0001085a30b8(param_1,param_5,param_3,param_4,param_6,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010bf1ac80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(uVar2);
  lVar4 = param_7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  lVar5 = lVar4;
  func_0x00010c258d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar4);
  lVar4 = lVar5;
  func_0x00010bfddf20();
  puVar9 = (undefined *)0x0;
  if ((int)lVar4 != 0) {
    lVar4 = lVar5;
    func_0x00010c259580();
    if (((uint)lVar4 >> 2 & 1) == 0) {
      puVar9 = (undefined *)0x0;
      puVar10 = (undefined *)0x0;
      if ((param_8 & 1) != 0) goto LAB_107a2c364;
LAB_107a2c3a0:
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
    }
    else {
      if ((param_8 & 1) == 0) {
        puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107a2c3a0;
      }
      puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
LAB_107a2c364:
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar9 = PTR_PTR_1126bd8e0;
    _objc_retain(puVar10);
    _objc_retain(puVar6);
    _objc_alloc(puVar9);
    func_0x00010bff9340(0x4000000000000000,0x3ff8000000000000);
    _objc_release(puVar10);
    _objc_release(puVar6);
    _objc_release(puVar6);
    _objc_release(puVar10);
  }
  lVar4 = lVar5;
  func_0x00010c0ddc60();
  if (lVar4 != 0) {
    lVar4 = lVar5;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((param_2 != 0) && (lVar4 != 0)) {
      lVar4 = lVar5;
      func_0x00010c26d760(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      func_0x000107d23490();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      puVar6 = PTR_PTR_1126b4860;
      func_0x00010c258dc0(PTR_PTR_1126b4860);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b45f8;
      func_0x00010bfe9200(PTR_PTR_1126b45f8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126b4608;
      _objc_alloc(PTR_PTR_1126b4608);
      func_0x00010bff7b20();
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(lVar7);
      goto LAB_107a2c52c;
    }
  }
  puVar10 = PTR_PTR_1126b4608;
  _objc_alloc(PTR_PTR_1126b4608);
  func_0x00010bff7b20();
LAB_107a2c52c:
  _objc_release(puVar9);
  _objc_release(lVar5);
  _objc_release(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 107a2c580; end: 107a2c5eb; -[SCOperaStoriesViewStatsLayerActionHandler initWithActionDelegate:] */

undefined1 * FUN_107a2c580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f96c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a2c5ec; end: 107a2c6d3; -[SCOperaStoriesViewStatsLayerActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_107a2c5ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar1 = param_4;
    func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110ebacf8);
    if ((int)uVar1 == 0) {
      uVar1 = param_4;
      func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110ebad58);
      if ((int)uVar1 == 0) {
        uVar1 = param_4;
        func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110ebad18);
        if ((int)uVar1 == 0) {
          uVar1 = 0;
          goto LAB_107a2c6b0;
        }
        param_1 = param_1 + 8;
        _objc_loadWeakRetained(param_1);
        func_0x00010bf82fa0();
      }
      else {
        param_1 = param_1 + 8;
        _objc_loadWeakRetained(param_1);
        func_0x00010c15c9e0();
      }
    }
    else {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      func_0x00010c14adc0();
    }
  }
  else {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf6c820();
  }
  _objc_release(param_1);
  uVar1 = 1;
LAB_107a2c6b0:
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 107a2c6d4; end: 107a2c6db; -[SCOperaStoriesViewStatsLayerActionHandler .cxx_destruct] */

void FUN_107a2c6d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107a2c6dc; end: 107a2c723; -[SCOperaStoriesViewStatsLayerActionMenuDataProvider initWithIsSpotlightSnap:] */

void FUN_107a2c6dc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f96c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 107a2c724; end: 107a2c95b; -[SCOperaStoriesViewStatsLayerActionMenuDataProvider updateViewModelWithCompletionBlock:] */

void FUN_107a2c724(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010bf09f00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar3 = puVar2;
    func_0x000108f5884c();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000107d4bde8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar4 = puVar3;
    func_0x000108f58864();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x000107d4bc38();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    if (*(char *)(param_1 + 8) == '\x01') {
      puVar4 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      func_0x00010c01b460();
      puVar5 = puVar4;
      func_0x000108f58264();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x000107d4ba6c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    puVar4 = PTR_PTR_1126b1210;
    _objc_alloc(PTR_PTR_1126b1210);
    puVar5 = puVar1;
    func_0x00010bf51e00(puVar1);
    ppuVar7 = &PTR____CFConstantStringClassReference_110ebad18;
    func_0x000107d4bf04(&PTR____CFConstantStringClassReference_110ebad18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c019f60(puVar4);
    _objc_release(ppuVar7);
    _objc_release(puVar5);
    (**(code **)(param_3 + 0x10))(param_3,puVar4);
    _objc_release(param_3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107a2c95c; end: 107a2c973; -[SCOperaStoriesViewStatsLayerActionMenuDataProvider delegate] */

void FUN_107a2c95c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a2c974; end: 107a2c97f; -[SCOperaStoriesViewStatsLayerActionMenuDataProvider setDelegate:] */

void FUN_107a2c974(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 107a2c980; end: 107a2c987; -[SCOperaStoriesViewStatsLayerActionMenuDataProvider .cxx_destruct] */

void FUN_107a2c980(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 107a2c988; end: 107a2c9d7; -[SCOperaStoriesViewStatsLayerActionBarView initWithFrame:] */

undefined1 * FUN_107a2c988(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f96d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107a2c9d8; end: 107a2cba7; -[SCOperaStoriesViewStatsLayerActionBarView _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2c9d8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar3 = (long)_DAT_112768394;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar4 = (long)_DAT_112768398;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  func_0x000108f58834();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  lVar4 = (long)_DAT_11276839c;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsUpdateConstraints_1126509f8);
  return;
}



/* Entry: 107a2cba8; end: 107a2cf1b; -[SCOperaStoriesViewStatsLayerActionBarView updateConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2cba8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = (long)_DAT_1127683a0;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar18));
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar21 = (long)_DAT_112768398;
  uVar2 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_112768394;
  uVar3 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar2;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar21);
  uStack_a0 = uVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493c0(0xc018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar21);
  uStack_98 = uVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493c0(0x4035000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar21);
  uStack_90 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf493c0(0xc035000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar20);
  uStack_88 = uVar12;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar20);
  uStack_80 = uVar14;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(lVar20);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(lVar21);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar19);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar17 = puVar1;
  func_0x00010bf51e00();
  uVar19 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar17;
  _objc_release(uVar19);
  puStack_a8 = PTR_PTR_1126f96d0;
  lStack_b0 = param_1;
  _objc_msgSendSuper2(&lStack_b0,PTR_s_updateConstraints_11267ec30);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar1 + _DAT_1127683a4;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bf7d120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a2cf1c; end: 107a2cf4f; -[SCOperaStoriesViewStatsLayerActionBarView _didTapPillViewButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2cf1c(long param_1)

{
  param_1 = param_1 + _DAT_1127683a4;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a2cf50; end: 107a2cf57; -[SCOperaStoriesViewStatsLayerActionBarView isFixedDuringPageTransitions] */

undefined8 FUN_107a2cf50(void)

{
  return 0;
}



/* Entry: 107a2cf58; end: 107a2cf5b; -[SCOperaStoriesViewStatsLayerActionBarView updateWithConfiguration:] */

void FUN_107a2cf58(void)

{
  return;
}



/* Entry: 107a2cf5c; end: 107a2cf7b; -[SCOperaStoriesViewStatsLayerActionBarView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2cf5c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127683a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a2cf7c; end: 107a2cf8f; -[SCOperaStoriesViewStatsLayerActionBarView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2cf7c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127683a4,param_3);
  return;
}



/* Entry: 107a2cf90; end: 107a2cffb; -[SCOperaStoriesViewStatsLayerActionBarView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2cf90(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127683a4);
  _objc_storeStrong(param_1 + _DAT_1127683a0,0);
  _objc_storeStrong(param_1 + _DAT_11276839c,0);
  _objc_storeStrong(param_1 + _DAT_112768398,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112768394,0);
  return;
}



/* Entry: 107a2cffc; end: 107a2d047; +[SCOperaSpotlightSnapStatusLayer layerWithPage:] */

void FUN_107a2cffc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5f98;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a2d048; end: 107a2d0db; -[SCOperaSpotlightSnapStatusLayer initWithPage:] */

undefined1 * FUN_107a2d048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_28 = PTR_PTR_1126f96d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a2d0dc; end: 107a2d0e3; -[SCOperaSpotlightSnapStatusLayer type] */

undefined8 FUN_107a2d0dc(void)

{
  return 0x19;
}



/* Entry: 107a2d0e4; end: 107a2d0ef; -[SCOperaSpotlightSnapStatusLayer layerViewControllerClass] */

void FUN_107a2d0e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d5fa0);
  return;
}



/* Entry: 107a2d0f0; end: 107a2d14f; -[SCOperaSpotlightSnapStatusLayer isEqual:] */

bool FUN_107a2d0f0(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  _objc_opt_class(param_3);
  puVar2 = PTR_PTR_1126d5f98;
  _objc_opt_class(PTR_PTR_1126d5f98);
  _objc_release(param_3);
  return param_1 == param_3 && puVar1 == puVar2;
}



/* Entry: 107a2d150; end: 107a2d157; -[SCOperaSpotlightSnapStatusLayer snapStatusLabelText] */

undefined8 FUN_107a2d150(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107a2d158; end: 107a2d163; -[SCOperaSpotlightSnapStatusLayer .cxx_destruct] */

void FUN_107a2d158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a2d164; end: 107a2d3db; -[SCOperaSpotlightSnapStatusLayerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107a2d164(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = PTR_PTR_1126f96e0;
  puVar1 = &uStack_a8;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b1198;
    _objc_alloc();
    uVar19 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
    lVar18 = (long)_DAT_1127683ac;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar18);
    *(undefined **)((long)puVar1 + lVar18) = puVar2;
    _objc_release(uVar16);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar18));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fd3333333333333);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_98 = puVar4;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar6;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010bfcd9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60();
    _objc_release(uVar16);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar18));
    puVar2 = PTR_PTR_1126d5fa8;
    _objc_alloc();
    func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
    lVar18 = (long)_DAT_1127683b0;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar18);
    *(undefined **)((long)puVar1 + lVar18) = puVar2;
    _objc_release(uVar16);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar18));
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar18));
    func_0x00010befbb60(puVar1);
    func_0x00010bead6c0(puVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = (long)_DAT_1127683ac;
  puVar8 = *(undefined8 **)(puVar2 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar2 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(puVar2 + lVar17);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar2 + lVar17);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar11;
  func_0x00010bf49420(0x4054000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_1127683b0;
  uVar12 = *(undefined8 *)(puVar2 + lVar17);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c2793a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar12;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(puVar2 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c274200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar13;
  func_0x00010bf493c0(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar14);
  _objc_release(uVar22);
  _objc_release(puVar2);
  _objc_release(uVar13);
  _objc_release(uVar21);
  _objc_release(puVar7);
  _objc_release(uVar12);
  _objc_release(uVar20);
  _objc_release(uVar11);
  _objc_release(uVar19);
  _objc_release(puVar6);
  _objc_release(uVar10);
  _objc_release(uVar16);
  _objc_release(puVar5);
  _objc_release(uVar9);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return puVar8;
  }
  ___stack_chk_fail();
  uVar16 = *(undefined8 *)((long)puVar8 + (long)_DAT_1127683b0);
  func_0x00010c2434a0(puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a180(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar15);
  return puVar15;
}



/* Entry: 107a2d3dc; end: 107a2d6bb; -[SCOperaSpotlightSnapStatusLayerView _setupLayoutConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2d3dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = (long)_DAT_1127683ac;
  lVar2 = *(long *)(param_1 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  lStack_98 = lVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar18);
  uStack_90 = uVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar18);
  uStack_88 = uVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf49420(0x4054000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_1127683b0;
  uVar12 = *(undefined8 *)(param_1 + lVar20);
  uStack_80 = uVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf493c0(0xc024000000000000,uVar12,param_2,lVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar20);
  uStack_78 = uVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf493c0(0x4034000000000000,uVar14,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_98,6);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010beef8c0(puVar1,param_2,puVar16);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(param_1);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar18);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar19);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar19 = *(undefined8 *)(lVar2 + _DAT_1127683b0);
  func_0x00010c2434a0(puVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a180(uVar19,param_2,puVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar17);
  return;
}



/* Entry: 107a2d6bc; end: 107a2d703; -[SCOperaSpotlightSnapStatusLayerView setupViewForLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2d6bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127683b0);
  func_0x00010c2434a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a180(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a2d704; end: 107a2d737; -[SCOperaSpotlightSnapStatusLayerView _didTapSnapStatusLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2d704(long param_1)

{
  param_1 = param_1 + _DAT_1127683b4;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a2d738; end: 107a2d7bb; -[SCOperaSpotlightSnapStatusLayerView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2d738(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127683b0;
  uVar1 = *(undefined8 *)(param_3 + lVar2);
  _objc_retain(param_5);
  func_0x00010bf51200(param_1,param_2,uVar1,param_4,param_3);
  uVar1 = *(undefined8 *)(param_3 + lVar2);
  func_0x00010bfe3a40(uVar1,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a2d7bc; end: 107a2d7db; -[SCOperaSpotlightSnapStatusLayerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2d7bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127683b4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a2d7dc; end: 107a2d7ef; -[SCOperaSpotlightSnapStatusLayerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2d7dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127683b4,param_3);
  return;
}



/* Entry: 107a2d7f0; end: 107a2d83b; -[SCOperaSpotlightSnapStatusLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2d7f0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127683b4);
  _objc_storeStrong(param_1 + _DAT_1127683ac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127683b0,0);
  return;
}



/* Entry: 107a2d83c; end: 107a2d8a3; -[SCOperaSpotlightSnapStatusLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2d83c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d5fb0;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_1127683b8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107a2d8a4; end: 107a2d8e7; -[SCOperaSpotlightSnapStatusLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2d8a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127683b8);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2298c0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a2d8e8; end: 107a2d8f7; -[SCOperaSpotlightSnapStatusLayerViewController didTapSnapStatusLabel] */

void FUN_107a2d8e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf04430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_announceEvent__11259eab0,&PTR____CFConstantStringClassReference_110ebad98
            );
  return;
}



/* Entry: 107a2d8f8; end: 107a2d90b; -[SCOperaSpotlightSnapStatusLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2d8f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127683b8,0);
  return;
}



/* Entry: 107a2d90c; end: 107a2d9d7; -[SCOperaSpotlightSnapStatusPillView initWithFrame:] */

undefined1 * FUN_107a2d90c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f96e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4034000000000000);
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf414e0(0x3fd28f5c28f5c28f);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c229700(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107a2d9d8; end: 107a2db67; -[SCOperaSpotlightSnapStatusPillView setupSubviews] */

/* WARNING: Possible PIC construction at 0x000107a2da80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107a2da84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2d9d8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar3 = (long)_DAT_1127683bc;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107a2db68; end: 107a2dfa3; -[SCOperaSpotlightSnapStatusPillView updateConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2db68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = (long)_DAT_1127683c4;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar16));
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar18 = (long)_DAT_1127683bc;
  uVar2 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar2;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar18);
  uStack_98 = uVar17;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar18);
  uStack_90 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar17);
  _objc_release(lVar19);
  _objc_release(uVar2);
  lVar19 = (long)_DAT_1127683c0;
  uVar6 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar6;
  func_0x00010bf493c0(0x4000000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar19);
  uStack_c0 = uVar17;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar19);
  uStack_b8 = uVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar12;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar19);
  uStack_b0 = uVar8;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf348e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  uStack_a8 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar15;
  func_0x00010bf493c0(0xc000000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a0 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar3);
  _objc_release(lVar19);
  _objc_release(uVar15);
  _objc_release(uVar2);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar8);
  _objc_release(uVar12);
  _objc_release(uVar5);
  _objc_release(uVar11);
  _objc_release(uVar17);
  _objc_release(uVar10);
  _objc_release(uVar6);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar9 = puVar1;
  func_0x00010bf51e00();
  uVar17 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar9;
  _objc_release(uVar17);
  puStack_c8 = PTR_PTR_1126f96e8;
  lStack_d0 = param_1;
  _objc_msgSendSuper2(&lStack_d0,PTR_s_updateConstraints_11267ec30);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c212f20(*(undefined8 *)(puVar1 + _DAT_1127683bc));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_setNeedsUpdateConstraints_1126509f8);
  return;
}



/* Entry: 107a2dfa4; end: 107a2dfd3; -[SCOperaSpotlightSnapStatusPillView updateSnapStatusLabelText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2dfa4(long param_1)

{
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127683bc));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsUpdateConstraints_1126509f8);
  return;
}



/* Entry: 107a2dfd4; end: 107a2e023; -[SCOperaSpotlightSnapStatusPillView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2dfd4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127683c0,0);
  _objc_storeStrong(param_1 + _DAT_1127683c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127683bc,0);
  return;
}



/* Entry: 107a2e024; end: 107a2e06f; +[SCOperaStoriesViewStatsLayer layerWithPage:] */

void FUN_107a2e024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5e40;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a2e070; end: 107a2e1ff; -[SCOperaStoriesViewStatsLayer initWithPage:] */

undefined1 * FUN_107a2e070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f96f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2827c0();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2827c0();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2827c0();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2827c0();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 8) = (char)uVar3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 9) = (char)uVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a2e200; end: 107a2e207; -[SCOperaStoriesViewStatsLayer type] */

undefined8 FUN_107a2e200(void)

{
  return 0x19;
}



/* Entry: 107a2e208; end: 107a2e213; -[SCOperaStoriesViewStatsLayer layerViewControllerClass] */

void FUN_107a2e208(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d5fb8);
  return;
}



/* Entry: 107a2e214; end: 107a2e273; -[SCOperaStoriesViewStatsLayer isEqual:] */

bool FUN_107a2e214(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  _objc_opt_class(param_3);
  puVar2 = PTR_PTR_1126d5e40;
  _objc_opt_class(PTR_PTR_1126d5e40);
  _objc_release(param_3);
  return param_1 == param_3 && puVar1 == puVar2;
}



/* Entry: 107a2e274; end: 107a2e27b; -[SCOperaStoriesViewStatsLayer viewedCountFriend] */

undefined8 FUN_107a2e274(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a2e27c; end: 107a2e283; -[SCOperaStoriesViewStatsLayer viewedCountOther] */

undefined8 FUN_107a2e27c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107a2e284; end: 107a2e28b; -[SCOperaStoriesViewStatsLayer boostCount] */

undefined8 FUN_107a2e284(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


