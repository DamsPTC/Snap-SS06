/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7a19c8; end: 10b7a19db; +[SCCPublicProfile valdiMarshallableObjectDescriptor] */

void FUN_10b7a19c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5ecb8;
  param_1[1] = &PTR_DAT_110d5ed48;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a19dc; end: 10b7a1a0f; -[SCCPublicProfileIdentifiers initWithProfileId:hostAccountUserId:] */

void FUN_10b7a19dc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270abb0;
  uStack_20 = param_1;
  func_0x00010b7a1c24();
  func_0x00010b7a1c1c(&uStack_20);
  return;
}



/* Entry: 10b7a1a10; end: 10b7a1a27; +[SCCPublicProfileIdentifiers valdiMarshallableObjectDescriptor] */

void FUN_10b7a1a10(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_profileId_110d5ed68;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a1a28; end: 10b7a1b13; -[SCCPublicProfileManager initWithListManagedPublicProfiles:hasPendingInvites:getPublicProfile:getProfileContent:] */

undefined8 *
FUN_10b7a1a28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
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
  puStack_48 = PTR_PTR_11270abb8;
  uStack_50 = param_1;
  func_0x00010b7a1c24();
  puVar4 = &uStack_50;
  func_0x00010b7a1c1c(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b7a1b14; end: 10b7a1b57; +[SCCPublicProfileManager valdiMarshallableObjectDescriptor] */

void FUN_10b7a1b14(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5ee10;
  param_1[1] = &PTR_s_SCBridgeObservable_110d5ee88;
  param_1[2] = &PTR_DAT_110d5ede0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a1b58; end: 10b7a1bd7;  */

void FUN_10b7a1b58(undefined8 param_1)

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
  pcStack_38 = FUN_10b7a1bd8;
  puStack_30 = &UNK_110d5eeb8;
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



/* Entry: 10b7a1bd8; end: 10b7a1c0b;  */

void FUN_10b7a1bd8(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b7a1c0c; end: 10b7a1c3f;  */

void FUN_10b7a1c0c(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a1c40; end: 10b7a1c9b; -[SCCObservablePersistenceStore initWithFetchString:] */

undefined8 FUN_10b7a1c40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = param_3;
  func_0x00010b7a1d08();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10b7a1c9c; end: 10b7a1cbb; +[SCCObservablePersistenceStore valdiMarshallableObjectDescriptor] */

void FUN_10b7a1c9c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5eee8;
  param_1[1] = &PTR_s_SCBridgeObservable_110d5ef18;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a1cbc; end: 10b7a1cef; -[SCCPersistenceRxStoreConfig initWithName:] */

void FUN_10b7a1cbc(undefined8 param_1)

{
  func_0x00010b7a1d08(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b7a1cf0; end: 10b7a1d13; +[SCCPersistenceRxStoreConfig valdiMarshallableObjectDescriptor] */

void FUN_10b7a1cf0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d5ef28;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a1d14; end: 10b7a1d1b; -[SCCFeedPageSection__Enum init] */

void FUN_10b7a1d14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b7a1d1c; end: 10b7a1d1f; -[SCCModerationContentType__Enum init] */

void FUN_10b7a1d1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b7a1d20; end: 10b7a1d23; -[SCCModerationSnapSource__Enum init] */

void FUN_10b7a1d20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b7a1d24; end: 10b7a1d2b; -[SCCModerationSnapType__Enum init] */

void FUN_10b7a1d24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b7a1d2c; end: 10b7a1d33; -[SCCStoryPlayerEntryType__Enum init] */

void FUN_10b7a1d2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b7a1d34; end: 10b7a1d3b; -[SCCStoryPlayerPageType__Enum init] */

void FUN_10b7a1d34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,6);
  return;
}



/* Entry: 10b7a1d3c; end: 10b7a1d3f; -[SCCStoryPlayerViewLocation__Enum init] */

void FUN_10b7a1d3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b7a1d40; end: 10b7a1dfb; -[SCCStoryPlayerStoryP2PSourceType__Enum init] */

void FUN_10b7a1d40(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined **ppuStack_30;
  
  func_0x00010b7a27a0();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f81638;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110f81658;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f6aa18;
  puStack_60 = PTR_PTR_1133e0b78;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e738b8;
  puStack_50 = PTR_PTR_1133e0b80;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e66018;
  puStack_40 = PTR_PTR_1133e0b88;
  puStack_38 = PTR_PTR_1133e0b90;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110f816b8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_78,10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b7a2778();
  func_0x00010b7a27b8();
  func_0x00010b7a2788();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b7a27a0();
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110e20978;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110dcadf8;
  puStack_c0 = PTR_PTR_1133e0b98;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110e2c118;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110db8b78;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b7a2778();
  func_0x00010b7a27b8();
  func_0x00010b7a2788();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b7a2738(PTR_PTR_11270abd0);
  func_0x00010b7a2700();
  return;
}



/* Entry: 10b7a1dfc; end: 10b7a1e87; -[SCCStoryPlayerStorySnapParentType__Enum init] */

void FUN_10b7a1dfc(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  
  func_0x00010b7a27a0();
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e20978;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dcadf8;
  puStack_40 = PTR_PTR_1133e0b98;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110e2c118;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110db8b78;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b7a2778();
  func_0x00010b7a27b8();
  func_0x00010b7a2788();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b7a2738(PTR_PTR_11270abd0);
  func_0x00010b7a2700();
  return;
}



/* Entry: 10b7a1e88; end: 10b7a1eaf; -[SCCEncodedContentModerationStatusBySnapId initWithSnapId:encodedContentModerationStatus:] */

void FUN_10b7a1e88(void)

{
  func_0x00010b7a2738(PTR_PTR_11270abd0);
  func_0x00010b7a2700();
  return;
}



/* Entry: 10b7a1eb0; end: 10b7a1ec3; +[SCCEncodedContentModerationStatusBySnapId valdiMarshallableObjectDescriptor] */

void FUN_10b7a1eb0(undefined8 *param_1)

{
  *param_1 = &PTR_s_snapId_110d5ef70;
  param_1[1] = &PTR_DAT_110d5efd0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a1ec4; end: 10b7a1ee3; -[SCCNativeStoryCardFetcherRequest initWithCompositeStoryId:pageType:] */

void FUN_10b7a1ec4(void)

{
  func_0x00010b7a26cc(PTR_PTR_11270abd8);
  return;
}



/* Entry: 10b7a1ee4; end: 10b7a1ef7; +[SCCNativeStoryCardFetcherRequest valdiMarshallableObjectDescriptor] */

void FUN_10b7a1ee4(undefined8 *param_1)

{
  *param_1 = &PTR_s_compositeStoryId_110d5efe0;
  param_1[1] = &PTR_DAT_110d5f028;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a1ef8; end: 10b7a1f1f; -[SCCSpotlightOnlyHighlightItem initWithCompositeStoryId:encodedMixerStory:] */

void FUN_10b7a1ef8(void)

{
  func_0x00010b7a2738(PTR_PTR_11270abe0);
  func_0x00010b7a26a8();
  return;
}



/* Entry: 10b7a1f20; end: 10b7a1f2f; +[SCCSpotlightOnlyHighlightItem valdiMarshallableObjectDescriptor] */

void FUN_10b7a1f20(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_compositeStoryId_110d5f038;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a1f30; end: 10b7a1f57; -[SCCStoryPlayerBitmojiWeatherStory initWithEncodedWeatherJson:] */

void FUN_10b7a1f30(void)

{
  func_0x00010b7a2710(PTR_PTR_11270abe8);
  func_0x00010b7a26f4();
  return;
}



/* Entry: 10b7a1f58; end: 10b7a1f67; +[SCCStoryPlayerBitmojiWeatherStory valdiMarshallableObjectDescriptor] */

void FUN_10b7a1f58(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d5f0b0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a1f68; end: 10b7a1f8f; -[SCCStoryPlayerBusinessInfo initWithEncodedBusinessProfile:] */

void FUN_10b7a1f68(void)

{
  func_0x00010b7a2738(PTR_PTR_11270abf0);
  func_0x00010b7a2700();
  return;
}



/* Entry: 10b7a1f90; end: 10b7a1f9f; +[SCCStoryPlayerBusinessInfo valdiMarshallableObjectDescriptor] */

void FUN_10b7a1f90(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d5f0e0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a1fa0; end: 10b7a1fc7; -[SCCStoryPlayerDependencies initWithOperaEventProviders:] */

void FUN_10b7a1fa0(void)

{
  func_0x00010b7a2710(PTR_PTR_11270abf8);
  func_0x00010b7a26f4();
  return;
}



/* Entry: 10b7a1fc8; end: 10b7a1fe7; -[SCCStoryPlayerDependencies init] */

void FUN_10b7a1fc8(void)

{
  func_0x00010b7a26b8(PTR_PTR_11270abf8);
  return;
}



/* Entry: 10b7a1fe8; end: 10b7a1ffb; +[SCCStoryPlayerDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b7a1fe8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5f140;
  param_1[1] = &PTR_DAT_110d5f170;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a1ffc; end: 10b7a203b; -[SCCStoryPlayerFeedCardInfo initWithFeedCardCompositeId:title:] */

void FUN_10b7a1ffc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b7a2738(PTR_PTR_11270ac00);
  _objc_msgSendSuper2(auStack_20,param_2,0);
  return;
}



/* Entry: 10b7a203c; end: 10b7a204b; +[SCCStoryPlayerFeedCardInfo valdiMarshallableObjectDescriptor] */

void FUN_10b7a203c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d5f180;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a204c; end: 10b7a2073; -[SCCStoryPlayerFeedCardItem initWithFeedCardInfo:encodedSnapDocs:] */

void FUN_10b7a204c(void)

{
  func_0x00010b7a2738(PTR_PTR_11270ac08);
  func_0x00010b7a26a8();
  return;
}



/* Entry: 10b7a2074; end: 10b7a2087; +[SCCStoryPlayerFeedCardItem valdiMarshallableObjectDescriptor] */

void FUN_10b7a2074(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5f240;
  param_1[1] = &PTR_DAT_110d5f2b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a2088; end: 10b7a20af; -[SCCStoryPlayerHappeningNowStory initWithCategoryName:isBreaking:isOptInNotificationStory:] */

void FUN_10b7a2088(void)

{
  func_0x00010b7a2738(PTR_PTR_11270ac10);
  func_0x00010b7a2700();
  return;
}



/* Entry: 10b7a20b0; end: 10b7a20bf; +[SCCStoryPlayerHappeningNowStory valdiMarshallableObjectDescriptor] */

void FUN_10b7a20b0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_categoryName_110d5f2c8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a20c0; end: 10b7a20f7; -[SCCStoryPlayerItem initWithBaseView:storyManifestItem:publisherItem:storyDocItem:nativeItem:spotlightOnlyHighlightItem:feedCardItem:] */

void FUN_10b7a20c0(void)

{
  undefined8 in_stack_00000000;
  
  func_0x00010b7a2750(in_stack_00000000);
  func_0x00010b7a2700();
  return;
}



/* Entry: 10b7a20f8; end: 10b7a210b; +[SCCStoryPlayerItem valdiMarshallableObjectDescriptor] */

void FUN_10b7a20f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5f328;
  param_1[1] = &PTR_DAT_110d5f3e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a210c; end: 10b7a2137; -[SCCStoryPlayerItems initWithItems:startingIndex:] */

void FUN_10b7a210c(void)

{
  func_0x00010b7a2710(PTR_PTR_11270ac20);
  func_0x00010b7a26f4();
  return;
}



/* Entry: 10b7a2138; end: 10b7a214b; +[SCCStoryPlayerItems valdiMarshallableObjectDescriptor] */

void FUN_10b7a2138(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5f428;
  param_1[1] = &PTR_DAT_110d5f470;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a214c; end: 10b7a216b; -[SCCStoryPlayerManagedMassSnapOptions init] */

void FUN_10b7a214c(void)

{
  func_0x00010b7a26b8(PTR_PTR_11270ac28);
  return;
}



/* Entry: 10b7a216c; end: 10b7a217b; +[SCCStoryPlayerManagedMassSnapOptions valdiMarshallableObjectDescriptor] */

void FUN_10b7a216c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d5f480;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a217c; end: 10b7a219b; -[SCCStoryPlayerManagedPlaybackOptions init] */

void FUN_10b7a217c(void)

{
  func_0x00010b7a26b8(PTR_PTR_11270ac30);
  return;
}



/* Entry: 10b7a219c; end: 10b7a21af; +[SCCStoryPlayerManagedPlaybackOptions valdiMarshallableObjectDescriptor] */

void FUN_10b7a219c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5f540;
  param_1[1] = &PTR_DAT_110d5f618;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a21b0; end: 10b7a21cf; -[SCCStoryPlayerManifestItem initWithEncodedStoryManifest:businessInfo:] */

void FUN_10b7a21b0(void)

{
  func_0x00010b7a26cc(PTR_PTR_11270ac38);
  return;
}



/* Entry: 10b7a21d0; end: 10b7a21e3; +[SCCStoryPlayerManifestItem valdiMarshallableObjectDescriptor] */

void FUN_10b7a21d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5f628;
  param_1[1] = &PTR_DAT_110d5f670;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a21e4; end: 10b7a2203; -[SCCStoryPlayerModerationData init] */

void FUN_10b7a21e4(void)

{
  func_0x00010b7a26b8(PTR_PTR_11270ac40);
  return;
}



/* Entry: 10b7a2204; end: 10b7a2217; +[SCCStoryPlayerModerationData valdiMarshallableObjectDescriptor] */

void FUN_10b7a2204(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5f680;
  param_1[1] = &PTR_DAT_110d5f710;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a2218; end: 10b7a224b; -[SCCStoryPlayerPlaybackOptions initWithStartWithUnviewed:useCircleTransition:contentViewSource:showMetricsFooterBar:allowSaveEntireStory:asyncPlayback:allowProfilePresentation:isSpotlightPlayback:storyAnalyticOptions:p2pOptions:moderationData:useManagedPlayback:managementContext:useContentPlaybackScopePlayback:allowSwipeRightToDismiss:commentsTrayOptions:] */

void FUN_10b7a2218(void)

{
  undefined8 in_stack_00000040;
  
  func_0x00010b7a2720(in_stack_00000040);
  func_0x00010b7a2680();
  return;
}



/* Entry: 10b7a224c; end: 10b7a2287; -[SCCStoryPlayerPlaybackOptions initWithStartWithUnviewed:useCircleTransition:contentViewSource:showMetricsFooterBar:allowSaveEntireStory:asyncPlayback:allowProfilePresentation:isSpotlightPlayback:storyAnalyticOptions:p2pOptions:moderationData:useManagedPlayback:managementContext:useContentPlaybackScopePlayback:allowSwipeRightToDismiss:] */

void FUN_10b7a224c(void)

{
  undefined8 in_stack_00000040;
  
  func_0x00010b7a2750(in_stack_00000040);
  func_0x00010b7a2680();
  return;
}



/* Entry: 10b7a2288; end: 10b7a22bf; -[SCCStoryPlayerPlaybackOptions initWithStartWithUnviewed:useCircleTransition:contentViewSource:showMetricsFooterBar:allowSaveEntireStory:asyncPlayback:allowProfilePresentation:isSpotlightPlayback:storyAnalyticOptions:p2pOptions:moderationData:useManagedPlayback:managementContext:useContentPlaybackScopePlayback:] */

void FUN_10b7a2288(void)

{
  undefined8 in_stack_00000030;
  
  func_0x00010b7a2720(in_stack_00000030);
  func_0x00010b7a2680();
  return;
}



/* Entry: 10b7a22c0; end: 10b7a22ff; -[SCCStoryPlayerPlaybackOptions initWithStartWithUnviewed:useCircleTransition:contentViewSource:showMetricsFooterBar:allowSaveEntireStory:asyncPlayback:allowProfilePresentation:isSpotlightPlayback:storyAnalyticOptions:p2pOptions:moderationData:useManagedPlayback:managementContext:] */

void FUN_10b7a22c0(void)

{
  undefined8 in_stack_00000030;
  
  func_0x00010b7a2750(in_stack_00000030);
  func_0x00010b7a2680();
  return;
}



/* Entry: 10b7a2300; end: 10b7a2333; -[SCCStoryPlayerPlaybackOptions initWithStartWithUnviewed:useCircleTransition:contentViewSource:showMetricsFooterBar:allowSaveEntireStory:asyncPlayback:allowProfilePresentation:isSpotlightPlayback:storyAnalyticOptions:p2pOptions:moderationData:useManagedPlayback:] */

void FUN_10b7a2300(void)

{
  undefined8 in_stack_00000020;
  
  func_0x00010b7a2720(in_stack_00000020);
  func_0x00010b7a2680();
  return;
}



/* Entry: 10b7a2334; end: 10b7a2377; -[SCCStoryPlayerPlaybackOptions initWithStartWithUnviewed:useCircleTransition:contentViewSource:showMetricsFooterBar:allowSaveEntireStory:asyncPlayback:allowProfilePresentation:isSpotlightPlayback:storyAnalyticOptions:p2pOptions:moderationData:] */

void FUN_10b7a2334(void)

{
  undefined8 in_stack_00000020;
  
  func_0x00010b7a2750(in_stack_00000020);
  func_0x00010b7a2680();
  return;
}



/* Entry: 10b7a2378; end: 10b7a23af; -[SCCStoryPlayerPlaybackOptions initWithStartWithUnviewed:useCircleTransition:contentViewSource:showMetricsFooterBar:allowSaveEntireStory:asyncPlayback:allowProfilePresentation:isSpotlightPlayback:storyAnalyticOptions:p2pOptions:] */

void FUN_10b7a2378(void)

{
  undefined8 in_stack_00000010;
  
  func_0x00010b7a2720(in_stack_00000010);
  func_0x00010b7a2680();
  return;
}



/* Entry: 10b7a23b0; end: 10b7a23c3; +[SCCStoryPlayerPlaybackOptions valdiMarshallableObjectDescriptor] */

void FUN_10b7a23b0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5f730;
  param_1[1] = &PTR_DAT_110d5f8c8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a23c4; end: 10b7a23ff; -[SCCStoryPlayerPublisherInfo initWithBusinessProfileId:publisherId:hostUserId:publisherName:publisherFormalName:publisherDescription:primaryColor:logoUrl:deeplinkUrl:unskippableAdsEnabled:isBreakingNewsEnabled:originalPublisherName:originalPublisherId:originalPublisherIconUrl:isCommentsDisabled:] */

void FUN_10b7a23c4(void)

{
  undefined8 in_stack_00000040;
  
  func_0x00010b7a2750(in_stack_00000040);
  func_0x00010b7a2680();
  return;
}



/* Entry: 10b7a2400; end: 10b7a244f; -[SCCStoryPlayerPublisherInfo initWithBusinessProfileId:publisherId:hostUserId:publisherName:publisherFormalName:publisherDescription:primaryColor:logoUrl:deeplinkUrl:unskippableAdsEnabled:originalPublisherName:originalPublisherId:originalPublisherIconUrl:isCommentsDisabled:] */

void FUN_10b7a2400(undefined8 param_1)

{
  func_0x00010b7a2680(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b7a2450; end: 10b7a245f; +[SCCStoryPlayerPublisherInfo valdiMarshallableObjectDescriptor] */

void FUN_10b7a2450(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_businessProfileId_110d5f8f8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a2460; end: 10b7a2487; -[SCCStoryPlayerPublisherItem initWithEncodedStoryDoc:encodedWatchedState:publisherInfo:supplementalPublisherData:] */

void FUN_10b7a2460(void)

{
  func_0x00010b7a2738(PTR_PTR_11270ac58);
  func_0x00010b7a26a8();
  return;
}



/* Entry: 10b7a2488; end: 10b7a249b; +[SCCStoryPlayerPublisherItem valdiMarshallableObjectDescriptor] */

void FUN_10b7a2488(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5fa78;
  param_1[1] = &PTR_DAT_110d5faf0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a249c; end: 10b7a24bb; -[SCCStoryPlayerStoryAnalyticsOptions init] */

void FUN_10b7a249c(void)

{
  func_0x00010b7a26b8(PTR_PTR_11270ac60);
  return;
}



/* Entry: 10b7a24bc; end: 10b7a24cf; +[SCCStoryPlayerStoryAnalyticsOptions valdiMarshallableObjectDescriptor] */

void FUN_10b7a24bc(undefined8 *param_1)

{
  *param_1 = &PTR_s_storyType_110d5fb08;
  param_1[1] = &PTR_DAT_110d5fd18;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a24d0; end: 10b7a24f7; -[SCCStoryPlayerStoryDocItem initWithEncodedStoryDoc:] */

void FUN_10b7a24d0(void)

{
  func_0x00010b7a2710(PTR_PTR_11270ac68);
  func_0x00010b7a26f4();
  return;
}



/* Entry: 10b7a24f8; end: 10b7a2507; +[SCCStoryPlayerStoryDocItem valdiMarshallableObjectDescriptor] */

void FUN_10b7a24f8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d5fd48;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a2508; end: 10b7a2527; -[SCCStoryPlayerStoryP2POptions init] */

void FUN_10b7a2508(void)

{
  func_0x00010b7a26b8(PTR_PTR_11270ac70);
  return;
}



/* Entry: 10b7a2528; end: 10b7a253b; +[SCCStoryPlayerStoryP2POptions valdiMarshallableObjectDescriptor] */

void FUN_10b7a2528(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5fd90;
  param_1[1] = &PTR_DAT_110d5fe68;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a253c; end: 10b7a2563; -[SCCStoryPlayerStorySnapViewState initWithSnapId:viewed:] */

void FUN_10b7a253c(void)

{
  func_0x00010b7a2738(PTR_PTR_11270ac78);
  func_0x00010b7a2700();
  return;
}



/* Entry: 10b7a2564; end: 10b7a2573; +[SCCStoryPlayerStorySnapViewState valdiMarshallableObjectDescriptor] */

void FUN_10b7a2564(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_snapId_110d5fe80;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a2574; end: 10b7a2593; -[SCCStoryPlayerStoryViewState initWithStoryId:viewed:] */

void FUN_10b7a2574(void)

{
  func_0x00010b7a26cc(PTR_PTR_11270ac80);
  return;
}



/* Entry: 10b7a2594; end: 10b7a25a3; +[SCCStoryPlayerStoryViewState valdiMarshallableObjectDescriptor] */

void FUN_10b7a2594(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_storyId_110d5fee0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a25a4; end: 10b7a25c3; -[SCCStoryPlayerSupplementalPublisherData init] */

void FUN_10b7a25a4(void)

{
  func_0x00010b7a26b8(PTR_PTR_11270ac88);
  return;
}



/* Entry: 10b7a25c4; end: 10b7a25d7; +[SCCStoryPlayerSupplementalPublisherData valdiMarshallableObjectDescriptor] */

void FUN_10b7a25c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5ff28;
  param_1[1] = &PTR_DAT_110d5ff70;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a25d8; end: 10b7a2603; -[SCPlaybackSnapIdIndex initWithSnapId:index:] */

void FUN_10b7a25d8(void)

{
  func_0x00010b7a2710(PTR_PTR_11270ac90);
  func_0x00010b7a26f4();
  return;
}



/* Entry: 10b7a2604; end: 10b7a2613; +[SCPlaybackSnapIdIndex valdiMarshallableObjectDescriptor] */

void FUN_10b7a2604(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_snapId_110d5ff88;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a2614; end: 10b7a263f; -[SCPromotedStoryIdSnapCountPair initWithStoryId:numOfSnaps:] */

void FUN_10b7a2614(void)

{
  func_0x00010b7a2710(PTR_PTR_11270ac98);
  func_0x00010b7a26f4();
  return;
}



/* Entry: 10b7a2640; end: 10b7a264f; +[SCPromotedStoryIdSnapCountPair valdiMarshallableObjectDescriptor] */

void FUN_10b7a2640(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_storyId_110d5ffd0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a2650; end: 10b7a266f; -[SCStoryIdSnapIdPair initWithSnapId:storyId:] */

void FUN_10b7a2650(void)

{
  func_0x00010b7a26cc(PTR_PTR_11270aca0);
  return;
}



/* Entry: 10b7a2670; end: 10b7a27cb; +[SCStoryIdSnapIdPair valdiMarshallableObjectDescriptor] */

void FUN_10b7a2670(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_snapId_110d60018;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a27cc; end: 10b7a27d3; -[SCCActivityCenterApiContentCommentInteractionType__Enum init] */

void FUN_10b7a27cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b7a27d4; end: 10b7a27db; -[SCCActivityCenterApiContentCommentsDefaultTab__Enum init] */

void FUN_10b7a27d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b7a27dc; end: 10b7a281b; -[SCCActivityCenterApiContentCommentInteractionInfo initWithCommentId:interactionType:] */

void FUN_10b7a27dc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270aca8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b7a281c; end: 10b7a282f; +[SCCActivityCenterApiContentCommentInteractionInfo valdiMarshallableObjectDescriptor] */

void FUN_10b7a281c(undefined8 *param_1)

{
  *param_1 = &PTR_s_commentId_110d60060;
  param_1[1] = &PTR_DAT_110d600c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a2830; end: 10b7a286f; -[SCCActivityCenterApiContentCommentsTrayOptions initWithShowWithDefaultTab:] */

void FUN_10b7a2830(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270acb0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b7a2870; end: 10b7a2893; +[SCCActivityCenterApiContentCommentsTrayOptions valdiMarshallableObjectDescriptor] */

void FUN_10b7a2870(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d600d0;
  param_1[1] = &PTR_DAT_110d60148;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a2894; end: 10b7a295b; -[SCCOperaEventType__Enum init] */

undefined * FUN_10b7a2894(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_58 = PTR_PTR_1133e0ba0;
  puStack_50 = PTR_PTR_1133e0ba8;
  puStack_48 = PTR_PTR_1133e0bb0;
  puStack_40 = PTR_PTR_1133e0bb8;
  puStack_38 = PTR_PTR_1133e0bc0;
  puStack_30 = PTR_PTR_1133e0bc8;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b7a2bdc();
  return puVar1;
}



/* Entry: 10b7a295c; end: 10b7a298b; -[SCCOperaCloseViewEvent initWithBaseInfo:fullyViewed:] */

void FUN_10b7a295c(undefined8 param_1)

{
  func_0x00010b7a2bdc(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b7a298c; end: 10b7a299f; +[SCCOperaCloseViewEvent valdiMarshallableObjectDescriptor] */

void FUN_10b7a298c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d60160;
  param_1[1] = &PTR_DAT_110d601a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a29a0; end: 10b7a29bf; -[SCCOperaCloseViewerEvent initWithBaseInfo:] */

void FUN_10b7a29a0(void)

{
  func_0x00010b7a2bb0(PTR_PTR_11270acc0);
  return;
}



/* Entry: 10b7a29c0; end: 10b7a29d3; +[SCCOperaCloseViewerEvent valdiMarshallableObjectDescriptor] */

void FUN_10b7a29c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d601b8;
  param_1[1] = &PTR_DAT_110d601e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a29d4; end: 10b7a29f3; -[SCCOperaEnterBackgroundEvent initWithBaseInfo:] */

void FUN_10b7a29d4(void)

{
  func_0x00010b7a2bb0(PTR_PTR_11270acc8);
  return;
}



/* Entry: 10b7a29f4; end: 10b7a2a07; +[SCCOperaEnterBackgroundEvent valdiMarshallableObjectDescriptor] */

void FUN_10b7a29f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d601f8;
  param_1[1] = &PTR_DAT_110d60228;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a2a08; end: 10b7a2a4b; -[SCCOperaEventBaseInfo initWithTimestampMs:eventName:] */

void FUN_10b7a2a08(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270acd0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b7a2a4c; end: 10b7a2a5f; +[SCCOperaEventBaseInfo valdiMarshallableObjectDescriptor] */

void FUN_10b7a2a4c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d60238;
  param_1[1] = &PTR_DAT_110d60298;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b7a2a60; end: 10b7a2a8f; -[SCCOperaEventProviders initWithViewerLifecycleEventBridgeSubject:playbackEventBridgeSubject:] */

void FUN_10b7a2a60(undefined8 param_1)

{
  func_0x00010b7a2bdc(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b7a2a90; end: 10b7a2aa3; +[SCCOperaEventProviders valdiMarshallableObjectDescriptor] */

void FUN_10b7a2a90(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d602a8;
  param_1[1] = &PTR_DAT_110d602f0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


