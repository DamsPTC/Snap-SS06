/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1044b6778; end: 1044b67e7;  */

void FUN_1044b6778(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + *param_3))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + *param_3);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044b67e8; end: 1044b67f3; -[SCStoriesSnapPlaybackMetadata streamId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b67e8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307f638))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307f638);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b67f4; end: 1044b684b;  */

void FUN_1044b67f4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b684c; end: 1044b6867; -[SCStoriesSnapPlaybackMetadata timedAdPlacements] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b684c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11307f640);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1044b8f08(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1044b6868; end: 1044b6883; -[SCStoriesSnapPlaybackMetadata mediaOrigin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b6868(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11307f648);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1044b8f08(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1044b6884; end: 1044b68e3;  */

void FUN_1044b6884(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1044b8f08(0,param_4,param_5);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1044b68e4; end: 1044b68f3; -[SCStoriesSnapPlaybackMetadata storyTypeVariant] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044b68e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307f650);
}



/* Entry: 1044b68f4; end: 1044b6903; -[SCStoriesSnapPlaybackMetadata inFeedSurvey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b68f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307f658));
  return;
}



/* Entry: 1044b6904; end: 1044b6913; -[SCStoriesSnapPlaybackMetadata spotlightEngagementMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b6904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307f660));
  return;
}



/* Entry: 1044b6914; end: 1044b6923; -[SCStoriesSnapPlaybackMetadata spotlightStoryCardDisplayMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b6914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307f668));
  return;
}



/* Entry: 1044b6924; end: 1044b6933; -[SCStoriesSnapPlaybackMetadata fromSnapchatCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044b6924(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307f670);
}



/* Entry: 1044b6934; end: 1044b694f; -[SCStoriesSnapPlaybackMetadata suggestedSearchQueryCandidates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b6934(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11307f678);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1044b8f08(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1044b6950; end: 1044b695f; -[SCStoriesSnapPlaybackMetadata suggestedSearchType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044b6950(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307f680);
}



/* Entry: 1044b6960; end: 1044b696f; -[SCStoriesSnapPlaybackMetadata poiEventEndTimeMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044b6960(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307f688);
}



/* Entry: 1044b6970; end: 1044b697f; -[SCStoriesSnapPlaybackMetadata storyShareProbability] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b6970(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307f690));
  return;
}



/* Entry: 1044b6980; end: 1044b698f; -[SCStoriesSnapPlaybackMetadata fanPassSnapPlaceholderCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044b6980(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307f698);
}



/* Entry: 1044b6990; end: 1044b699f; -[SCStoriesSnapPlaybackMetadata isSharingDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044b6990(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307f6a0);
}



/* Entry: 1044b69a0; end: 1044b732b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b69a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined1 param_18,undefined4 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined4 param_25,undefined4 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined4 param_39,undefined4 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined1 param_54,undefined4 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined1 param_61)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f518);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f520);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307f528) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11307f530) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11307f538) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11307f540) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11307f548) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11307f550) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11307f558) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11307f560) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11307f568) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_11307f570) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_11307f578) = param_15;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f580);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  *(undefined1 *)(unaff_x20 + _DAT_11307f588) = param_18;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f590);
  *puVar1 = param_20;
  puVar1[1] = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_11307f598) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_11307f5a0) = param_23;
  *(undefined8 *)(unaff_x20 + _DAT_11307f5a8) = param_24;
  *(undefined1 *)(unaff_x20 + _DAT_11307f5b0) = (undefined1)param_25;
  *(undefined1 *)(unaff_x20 + _DAT_11307f5b8) = param_25._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_11307f5c0) = param_27;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f5c8);
  *puVar1 = param_28;
  puVar1[1] = param_29;
  *(undefined8 *)(unaff_x20 + _DAT_11307f5d0) = param_30;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f5d8);
  *puVar1 = param_31;
  puVar1[1] = param_32;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f5e0);
  *puVar1 = param_33;
  puVar1[1] = param_34;
  *(undefined8 *)(unaff_x20 + _DAT_11307f5e8) = param_35;
  *(undefined8 *)(unaff_x20 + _DAT_11307f5f0) = param_36;
  *(undefined8 *)(unaff_x20 + _DAT_11307f5f8) = param_37;
  *(undefined8 *)(unaff_x20 + _DAT_11307f600) = param_38;
  *(undefined1 *)(unaff_x20 + _DAT_11307f608) = (undefined1)param_39;
  *(undefined1 *)(unaff_x20 + _DAT_11307f610) = param_39._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_11307f618) = param_39._2_1_;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f620);
  *puVar1 = param_41;
  puVar1[1] = param_42;
  *(undefined8 *)(unaff_x20 + _DAT_11307f628) = param_43;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f630);
  *puVar1 = param_44;
  puVar1[1] = param_45;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f638);
  *puVar1 = param_46;
  puVar1[1] = param_47;
  *(undefined8 *)(unaff_x20 + _DAT_11307f640) = param_48;
  *(undefined8 *)(unaff_x20 + _DAT_11307f648) = param_49;
  *(undefined8 *)(unaff_x20 + _DAT_11307f650) = param_50;
  *(undefined8 *)(unaff_x20 + _DAT_11307f658) = param_51;
  *(undefined8 *)(unaff_x20 + _DAT_11307f660) = param_52;
  *(undefined8 *)(unaff_x20 + _DAT_11307f668) = param_53;
  *(undefined1 *)(unaff_x20 + _DAT_11307f670) = param_54;
  *(undefined8 *)(unaff_x20 + _DAT_11307f678) = param_56;
  *(undefined8 *)(unaff_x20 + _DAT_11307f680) = param_57;
  *(undefined8 *)(unaff_x20 + _DAT_11307f688) = param_58;
  *(undefined8 *)(unaff_x20 + _DAT_11307f690) = param_59;
  *(undefined8 *)(unaff_x20 + _DAT_11307f698) = param_60;
  *(undefined1 *)(unaff_x20 + _DAT_11307f6a0) = param_61;
  _objc_msgSendSuper2(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b732c; end: 1044b7a3b; -[SCStoriesSnapPlaybackMetadata initWithServerId:clientId:attributes:creator:mediaInfo:thumbnailInfo:additionalIds:viewStatus:timeInfo:captureInfo:renderInfo:brandFriendliness:garmBrandSafety:contextHintData:hasLensMetadataOnServer:unlockablesData:audioStitchInfo:loggingInfo:source:rotationLocked:shouldDisableContext:storyManagementInfo:snapViewSignature:spotlightLoggingInfo:spotlightDescription:adOrganicSignals:sponsor:adsTracking:discoverSnapMetadata:cameo:isSpotlightRepliesEnabledOnSnap:isScanOnPublicContentEnabled:isFragmented:spectaclesMetadata:multiSnapInfo:contentModerationStatus:streamId:timedAdPlacements:mediaOrigin:storyTypeVariant:inFeedSurvey:spotlightEngagementMetadata:spotlightStoryCardDisplayMetadata:fromSnapchatCamera:suggestedSearchQueryCandidates:suggestedSearchType:poiEventEndTimeMs:storyShareProbability:fanPassSnapPlaceholderCount:isSharingDisabled:] */

void FUN_1044b732c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,long param_16,
                  undefined1 param_17,undefined4 param_18,long param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined4 param_23,undefined4 param_24,
                  undefined8 param_25,long param_26,undefined8 param_27,long param_28,long param_29,
                  undefined8 param_30,undefined8 param_31,undefined8 param_32,undefined8 param_33,
                  undefined4 param_34,undefined4 param_35,long param_36,undefined8 param_37,
                  long param_38,long param_39,long param_40,long param_41,undefined4 param_42,
                  undefined4 param_43,undefined8 param_44,undefined8 param_45,undefined8 param_46,
                  undefined4 param_47,undefined4 param_48,long param_49)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 in_stack_00000130;
  undefined8 uStack_190;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_f8;
  
  if (param_3 == 0) {
    uStack_110 = 0;
    lStack_108 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_110 = param_2;
    lStack_108 = param_3;
  }
  if (param_4 == 0) {
    lStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_120 = param_2;
    lStack_118 = param_4;
  }
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  if (param_16 == 0) {
    _objc_retain(param_19);
    _objc_retain(param_20);
    _objc_retain(param_21);
    _objc_retain(param_22);
    _objc_retain(param_25);
    _objc_retain(param_26);
    _objc_retain(param_27);
    _objc_retain(param_28);
    _objc_retain(param_29);
    _objc_retain(param_30);
    _objc_retain(param_31);
    _objc_retain(param_32);
    _objc_retain(param_33);
    _objc_retain(param_36);
    _objc_retain(param_37);
    _objc_retain(param_38);
    _objc_retain(param_39);
    _objc_retain(param_40);
    _objc_retain(param_41);
    _objc_retain(param_44);
    _objc_retain(param_45);
    _objc_retain(param_46);
    _objc_retain(param_49);
    _objc_retain(in_stack_00000130);
    lStack_f8 = 0;
    uStack_190 = 0xf000000000000000;
  }
  else {
    lVar1 = param_16;
    _objc_retain(param_16);
    _objc_retain(param_19);
    _objc_retain(param_20);
    _objc_retain(param_21);
    _objc_retain(param_22);
    _objc_retain(param_25);
    _objc_retain(param_26);
    _objc_retain(param_27);
    _objc_retain(param_28);
    _objc_retain(param_29);
    _objc_retain(param_30);
    _objc_retain(param_31);
    _objc_retain(param_32);
    _objc_retain(param_33);
    _objc_retain(param_36);
    _objc_retain(param_37);
    _objc_retain(param_38);
    _objc_retain(param_39);
    _objc_retain(param_40);
    _objc_retain(param_41);
    _objc_retain(param_44);
    _objc_retain(param_45);
    _objc_retain(param_46);
    _objc_retain(param_49);
    _objc_retain(in_stack_00000130);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar1);
    lStack_f8 = param_16;
    uStack_190 = param_2;
  }
  if (param_19 != 0) {
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(param_19);
  }
  if (param_26 != 0) {
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(param_26);
  }
  if (param_28 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(param_28);
  }
  if (param_29 != 0) {
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(param_29);
  }
  if (param_36 != 0) {
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(param_36);
  }
  if (param_38 != 0) {
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(param_38);
  }
  if (param_39 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(param_39);
  }
  if (param_40 != 0) {
    uVar2 = 0;
    FUN_1044b8f08(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_40,uVar2);
    _objc_release(param_40);
  }
  if (param_41 != 0) {
    uVar2 = 0;
    FUN_1044b8f08(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_41,uVar2);
    _objc_release(param_41);
  }
  if (param_49 != 0) {
    uVar2 = 0;
    FUN_1044b8f08(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_49,uVar2);
    _objc_release(param_49);
  }
  func_0x0001044b6e6c(lStack_108,uStack_110,lStack_118,uStack_120,param_5,param_6,param_7,param_8,
                      param_9,param_10,param_11,param_12,param_13,param_14,param_15,lStack_f8,
                      uStack_190,param_17);
  return;
}



/* Entry: 1044b7a3c; end: 1044b8a07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1044b7a3c(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar14;
  long extraout_x8_02;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long alStack_4e0 [4];
  undefined *puStack_4c0;
  undefined8 uStack_4b8;
  undefined8 *puStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  undefined1 auStack_3c0 [112];
  undefined8 uStack_340;
  long lStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char cStack_80;
  
  _swift_getObjectType();
  lVar6 = 0;
  FUN_1044a7e5c();
  lStack_480 = *(long *)(lVar6 + -8);
  lStack_478 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_480 + 0x40));
  lVar13 = (long)alStack_4e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_4a0 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12;
  lVar6 = 0x11307eaf0;
  lStack_4a8 = lVar13;
  func_0x0001000285a8(0x11307eaf0,&UNK_10dd09c60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar13 - extraout_x8_00;
  lVar6 = 0;
  lStack_488 = lVar13;
  FUN_1044a8f6c();
  lStack_490 = *(long *)(lVar6 + -8);
  lStack_468 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_490 + 0x40));
  puVar14 = (undefined8 *)(lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar6 = 0x11307eae8;
  puStack_4b0 = puVar14;
  func_0x0001000285a8(0x11307eae8,&UNK_10dd0a560);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_498 = (long)puVar14 - extraout_x8_02;
  uVar15 = param_1[1];
  uVar7 = *param_1;
  uVar19 = param_1[3];
  uVar18 = param_1[2];
  puVar14 = (undefined8 *)(unaff_x20 + _DAT_11307f518);
  puVar14[1] = param_1[1];
  *puVar14 = uVar7;
  uVar7 = param_1[3];
  puVar14 = (undefined8 *)(unaff_x20 + _DAT_11307f520);
  puVar14[1] = uVar19;
  *puVar14 = uVar18;
  uStack_98 = param_1[0xd];
  uStack_a0 = param_1[0xc];
  uStack_88 = param_1[0xf];
  uStack_90 = param_1[0xe];
  cStack_80 = *(char *)(param_1 + 0x10);
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  uStack_b8 = param_1[9];
  uStack_c0 = param_1[8];
  uStack_a8 = param_1[0xb];
  uStack_b0 = param_1[10];
  if (cStack_80 == -1) {
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar15);
    puVar14 = (undefined8 *)0x0;
  }
  else {
    uStack_108 = param_1[0xd];
    uStack_110 = param_1[0xc];
    uStack_f8 = param_1[0xf];
    uStack_100 = param_1[0xe];
    uStack_f0 = *(undefined1 *)(param_1 + 0x10);
    uStack_148 = param_1[5];
    uStack_150 = param_1[4];
    uStack_138 = param_1[7];
    uStack_140 = param_1[6];
    uStack_128 = param_1[9];
    uStack_130 = param_1[8];
    uStack_118 = param_1[0xb];
    uStack_120 = param_1[10];
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar15);
    func_0x0001044b8ea0(&uStack_e0,&uStack_1c0,0x11307ead8,&UNK_10dd09c50);
    puVar14 = &uStack_150;
    FUN_1044bbee8();
  }
  *(undefined8 **)(unaff_x20 + _DAT_11307f528) = puVar14;
  lStack_2c8 = param_1[0x12];
  uStack_2d0 = param_1[0x11];
  uStack_298 = param_1[0x18];
  uStack_2a0 = param_1[0x17];
  uStack_288 = param_1[0x1a];
  uStack_290 = param_1[0x19];
  uStack_278 = param_1[0x1c];
  uStack_280 = param_1[0x1b];
  uStack_268 = param_1[0x1e];
  uStack_270 = param_1[0x1d];
  uStack_2b8 = param_1[0x14];
  uStack_2c0 = param_1[0x13];
  uStack_2a8 = param_1[0x16];
  uStack_2b0 = param_1[0x15];
  if (lStack_2c8 == 1) {
    puVar14 = (undefined8 *)0x0;
  }
  else {
    uStack_188 = param_1[0x18];
    uStack_190 = param_1[0x17];
    uStack_178 = param_1[0x1a];
    uStack_180 = param_1[0x19];
    uStack_168 = param_1[0x1c];
    uStack_170 = param_1[0x1b];
    uStack_158 = param_1[0x1e];
    uStack_160 = param_1[0x1d];
    uStack_1b8 = param_1[0x12];
    uStack_1c0 = param_1[0x11];
    uStack_1a8 = param_1[0x14];
    uStack_1b0 = param_1[0x13];
    uStack_198 = param_1[0x16];
    uStack_1a0 = param_1[0x15];
    FUN_1044b48c4(0);
    _objc_allocWithZone();
    func_0x0001044b8ea0(&uStack_2d0,&uStack_260,0x11307eae0,&UNK_10dd0a570);
    puVar14 = &uStack_1c0;
    FUN_1044b4634();
    func_0x0001044b8e58(&uStack_2d0);
  }
  *(undefined8 **)(unaff_x20 + _DAT_11307f530) = puVar14;
  uVar7 = param_1[0x1f];
  uVar15 = param_1[0x20];
  *(undefined8 *)(unaff_x20 + _DAT_11307f538) = uVar7;
  *(undefined8 *)(unaff_x20 + _DAT_11307f540) = uVar15;
  lVar6 = param_1[0x22];
  if (lVar6 == 1) {
    _objc_retain(uVar15);
    _objc_retain(uVar7);
    plVar8 = (long *)0x0;
  }
  else {
    puStack_4c0 = (undefined *)param_1[0x29];
    uStack_4b8 = param_1[0x2a];
    alStack_4e0[2] = param_1[0x27];
    alStack_4e0[3] = param_1[0x28];
    alStack_4e0[0] = param_1[0x25];
    lVar13 = param_1[0x26];
    uVar18 = param_1[0x23];
    uVar19 = param_1[0x24];
    uVar17 = param_1[0x21];
    lVar10 = 0;
    FUN_1044b4e48();
    alStack_4e0[1] = lVar10;
    _objc_allocWithZone();
    uVar16 = uStack_4b8;
    lVar9 = alStack_4e0[3];
    puVar14 = (undefined8 *)(lVar10 + _DAT_11307f420);
    *puVar14 = uVar17;
    puVar14[1] = lVar6;
    puVar14 = (undefined8 *)(lVar10 + _DAT_11307f428);
    *puVar14 = uVar18;
    puVar14[1] = uVar19;
    plVar8 = (long *)(lVar10 + _DAT_11307f430);
    *plVar8 = alStack_4e0[0];
    plVar8[1] = lVar13;
    puVar14 = (undefined8 *)(lVar10 + _DAT_11307f438);
    *puVar14 = alStack_4e0[2];
    puVar14[1] = alStack_4e0[3];
    puVar14 = (undefined8 *)(lVar10 + _DAT_11307f440);
    *puVar14 = puStack_4c0;
    puVar14[1] = uStack_4b8;
    lStack_458 = alStack_4e0[1];
    puStack_4c0 = PTR_s_init_1125d9248;
    lStack_460 = lVar10;
    _objc_retain(uVar7);
    _objc_retain(uVar15);
    _swift_bridgeObjectRetain(lVar6);
    _swift_bridgeObjectRetain(uVar19);
    _swift_bridgeObjectRetain(lVar13);
    _swift_bridgeObjectRetain(lVar9);
    _swift_bridgeObjectRetain(uVar16);
    plVar8 = &lStack_460;
    _objc_msgSendSuper2(plVar8,puStack_4c0);
  }
  *(long **)(unaff_x20 + _DAT_11307f548) = plVar8;
  bVar3 = *(byte *)(param_1 + 0x2b);
  if (bVar3 == 2) {
    plVar8 = (long *)0x0;
  }
  else {
    uVar7 = param_1[0x2c];
    lVar13 = 0;
    func_0x0001044bad1c();
    lVar6 = lVar13;
    _objc_allocWithZone();
    *(byte *)(lVar6 + _DAT_11307f870) = bVar3 & 1;
    *(undefined8 *)(lVar6 + _DAT_11307f878) = uVar7;
    plVar8 = &lStack_450;
    lStack_450 = lVar6;
    lStack_448 = lVar13;
    _objc_msgSendSuper2(plVar8,PTR_s_init_1125d9248);
  }
  lVar6 = lStack_498;
  *(long **)(unaff_x20 + _DAT_11307f550) = plVar8;
  lVar9 = 0;
  FUN_1044a2b58();
  func_0x0001044b8ea0((long)param_1 + (long)*(int *)(lVar9 + 0x30),lVar6,0x11307eae8,&UNK_10dd0a560)
  ;
  lVar13 = lVar6;
  (**(code **)(lStack_490 + 0x30))(lVar6,1,lStack_468);
  puVar14 = puStack_4b0;
  plVar8 = (long *)0x0;
  if ((int)lVar13 != 1) {
    func_0x0001044b8dd8(lVar6,puStack_4b0,FUN_1044a8f6c);
    lVar10 = 0;
    FUN_1044baad8();
    lVar13 = lVar10;
    _objc_allocWithZone();
    lVar6 = lStack_468;
    *(undefined8 *)(lVar13 + _DAT_11307f828) = *puVar14;
    *(undefined1 *)(lVar13 + _DAT_11307f830) = *(undefined1 *)(puVar14 + 1);
    func_0x0001044b8ea0((long)puVar14 + (long)*(int *)(lStack_468 + 0x18),lVar13 + _DAT_113813b18,
                        0x112d373d8,&UNK_10d9014c0);
    func_0x0001044b8ea0((long)puVar14 + (long)*(int *)(lVar6 + 0x1c),lVar13 + _DAT_113813b20,
                        0x112d373d8,&UNK_10d9014c0);
    plVar8 = &lStack_440;
    lStack_440 = lVar13;
    lStack_438 = lVar10;
    _objc_msgSendSuper2(plVar8,PTR_s_init_1125d9248);
    func_0x0001044b8e1c(puVar14,FUN_1044a8f6c);
  }
  *(long **)(unaff_x20 + _DAT_11307f558) = plVar8;
  puVar14 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x34));
  lVar6 = puVar14[2];
  if (lVar6 == 1) {
    plVar8 = (long *)0x0;
  }
  else {
    uVar7 = *puVar14;
    uVar15 = puVar14[1];
    lVar10 = 0;
    FUN_1044b4094();
    lVar13 = lVar10;
    _objc_allocWithZone();
    *(undefined8 *)(lVar13 + _DAT_11307f378) = uVar7;
    puVar14 = (undefined8 *)(lVar13 + _DAT_11307f380);
    *puVar14 = uVar15;
    puVar14[1] = lVar6;
    puVar5 = PTR_s_init_1125d9248;
    lStack_430 = lVar13;
    lStack_428 = lVar10;
    _swift_bridgeObjectRetain(lVar6);
    plVar8 = &lStack_430;
    _objc_msgSendSuper2(plVar8,puVar5);
  }
  lVar13 = lStack_488;
  *(long **)(unaff_x20 + _DAT_11307f560) = plVar8;
  func_0x0001044b8ea0((long)param_1 + (long)*(int *)(lVar9 + 0x38),lStack_488,0x11307eaf0,
                      &UNK_10dd09c60);
  lVar10 = lVar13;
  (**(code **)(lStack_480 + 0x30))(lVar13,1,lStack_478);
  lVar6 = lStack_4a8;
  if ((int)lVar10 == 1) {
    lVar13 = 0;
  }
  else {
    func_0x0001044b8dd8(lVar13,lStack_4a8,FUN_1044a7e5c);
    lVar13 = lStack_4a0;
    func_0x0001044b8d94(lVar6,lStack_4a0);
    FUN_1044b96a4(0);
    _objc_allocWithZone();
    FUN_1044b914c();
    func_0x0001044b8e1c(lVar6,FUN_1044a7e5c);
  }
  *(long *)(unaff_x20 + _DAT_11307f568) = lVar13;
  *(undefined8 *)(unaff_x20 + _DAT_11307f570) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x3c));
  *(undefined8 *)(unaff_x20 + _DAT_11307f578) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x40));
  puVar14 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x44));
  uVar7 = *puVar14;
  uVar18 = puVar14[1];
  puVar14 = (undefined8 *)(unaff_x20 + _DAT_11307f580);
  *puVar14 = uVar7;
  puVar14[1] = uVar18;
  *(undefined1 *)(unaff_x20 + _DAT_11307f588) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x48));
  puVar14 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x4c));
  uVar15 = *puVar14;
  uVar19 = puVar14[1];
  puVar14 = (undefined8 *)(unaff_x20 + _DAT_11307f590);
  *puVar14 = uVar15;
  puVar14[1] = uVar19;
  puVar14 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x50));
  lVar6 = puVar14[1];
  if (lVar6 == 1) {
    func_0x000100de78a0(uVar7,uVar18);
    func_0x000100de78a0(uVar15,uVar19);
    puVar14 = (undefined8 *)0x0;
  }
  else {
    uVar16 = puVar14[4];
    uStack_1e8 = *puVar14;
    uStack_1d0 = puVar14[3];
    uStack_1d8 = puVar14[2];
    lVar13 = 0;
    lStack_1e0 = lVar6;
    uStack_1c8 = uVar16;
    FUN_1044b3b4c();
    _objc_allocWithZone();
    lStack_468 = lVar13;
    func_0x000100de78a0(uVar7,uVar18);
    func_0x000100de78a0(uVar15,uVar19);
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRetain(lVar6);
    puVar14 = &uStack_1e8;
    FUN_1044b34e4();
  }
  *(undefined8 **)(unaff_x20 + _DAT_11307f598) = puVar14;
  puVar14 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x54));
  lVar6 = puVar14[1];
  if (lVar6 == 1) {
    plVar8 = (long *)0x0;
  }
  else {
    uVar7 = *puVar14;
    lVar10 = 0;
    FUN_1044b551c();
    lVar13 = lVar10;
    _objc_allocWithZone();
    puVar14 = (undefined8 *)(lVar13 + _DAT_11307f4a8);
    *puVar14 = uVar7;
    puVar14[1] = lVar6;
    puVar5 = PTR_s_init_1125d9248;
    lStack_420 = lVar13;
    lStack_418 = lVar10;
    _swift_bridgeObjectRetain(lVar6);
    plVar8 = &lStack_420;
    _objc_msgSendSuper2(plVar8,puVar5);
  }
  *(long **)(unaff_x20 + _DAT_11307f5a0) = plVar8;
  puVar14 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x58));
  lVar6 = puVar14[2];
  if (lVar6 == 1) {
    plVar8 = (long *)0x0;
  }
  else {
    uVar7 = *puVar14;
    uVar15 = puVar14[1];
    lVar10 = 0;
    FUN_1044b98d4();
    lVar13 = lVar10;
    _objc_allocWithZone();
    *(undefined8 *)(lVar13 + _DAT_11307f710) = uVar7;
    puVar14 = (undefined8 *)(lVar13 + _DAT_11307f718);
    *puVar14 = uVar15;
    puVar14[1] = lVar6;
    puVar5 = PTR_s_init_1125d9248;
    lStack_410 = lVar13;
    lStack_408 = lVar10;
    _swift_bridgeObjectRetain(lVar6);
    plVar8 = &lStack_410;
    _objc_msgSendSuper2(plVar8,puVar5);
  }
  *(long **)(unaff_x20 + _DAT_11307f5a8) = plVar8;
  *(undefined1 *)(unaff_x20 + _DAT_11307f5b0) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x5c));
  *(undefined1 *)(unaff_x20 + _DAT_11307f5b8) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x60));
  puVar1 = (undefined4 *)((long)param_1 + (long)*(int *)(lVar9 + 100));
  lVar6 = *(long *)(puVar1 + 2);
  if (lVar6 == 1) {
    plVar8 = (long *)0x0;
  }
  else {
    uVar7 = *(undefined8 *)(puVar1 + 4);
    uVar15 = *(undefined8 *)(puVar1 + 6);
    uVar2 = *puVar1;
    lVar10 = 0;
    FUN_1044ba4d8();
    lVar13 = lVar10;
    _objc_allocWithZone();
    *(byte *)(lVar13 + _DAT_11307f7d0) = (byte)uVar2 & 1;
    *(byte *)(lVar13 + _DAT_11307f7d8) = (byte)((uint)uVar2 >> 8) & 1;
    *(byte *)(lVar13 + _DAT_11307f7e0) = (byte)((uint)uVar2 >> 0x10) & 1;
    *(long *)(lVar13 + _DAT_11307f7e8) = lVar6;
    *(undefined8 *)(lVar13 + _DAT_11307f7f0) = uVar7;
    *(undefined8 *)(lVar13 + _DAT_11307f7f8) = uVar15;
    puVar5 = PTR_s_init_1125d9248;
    lStack_400 = lVar13;
    lStack_3f8 = lVar10;
    _swift_bridgeObjectRetain(lVar6);
    _objc_retain(uVar7);
    plVar8 = &lStack_400;
    _objc_msgSendSuper2(plVar8,puVar5);
  }
  *(long **)(unaff_x20 + _DAT_11307f5c0) = plVar8;
  puVar14 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x68));
  uVar7 = *puVar14;
  uVar15 = puVar14[1];
  puVar14 = (undefined8 *)(unaff_x20 + _DAT_11307f5c8);
  *puVar14 = uVar7;
  puVar14[1] = uVar15;
  plVar8 = (long *)((long)param_1 + (long)*(int *)(lVar9 + 0x6c));
  lVar6 = plVar8[1];
  if (lVar6 == 1) {
    func_0x000100de78a0(uVar7,uVar15);
    plVar8 = (long *)0x0;
  }
  else {
    lStack_478 = plVar8[4];
    lStack_468 = plVar8[5];
    lStack_480 = plVar8[2];
    lVar13 = plVar8[3];
    lStack_490 = *plVar8;
    lVar11 = 0;
    lStack_488 = lVar13;
    FUN_1044b9c50();
    lVar10 = lVar11;
    _objc_allocWithZone();
    plVar8 = (long *)(lVar10 + _DAT_11307f748);
    *plVar8 = lStack_490;
    plVar8[1] = lVar6;
    plVar8 = (long *)(lVar10 + _DAT_11307f750);
    *plVar8 = lStack_480;
    plVar8[1] = lVar13;
    plVar8 = (long *)(lVar10 + _DAT_11307f758);
    *plVar8 = lStack_478;
    plVar8[1] = lStack_468;
    func_0x000100de78a0(uVar7,uVar15);
    puVar5 = PTR_s_init_1125d9248;
    lStack_3f0 = lVar10;
    lStack_3e8 = lVar11;
    _swift_bridgeObjectRetain(lVar6);
    _swift_bridgeObjectRetain(lStack_488);
    _swift_bridgeObjectRetain(lStack_468);
    plVar8 = &lStack_3f0;
    _objc_msgSendSuper2(plVar8,puVar5);
  }
  *(long **)(unaff_x20 + _DAT_11307f5d0) = plVar8;
  puVar14 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x70));
  lVar6 = puVar14[1];
  uVar7 = *puVar14;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_11307f5d8);
  puVar4[1] = puVar14[1];
  *puVar4 = uVar7;
  puVar14 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x74));
  uVar7 = *puVar14;
  uVar15 = puVar14[1];
  puVar14 = (undefined8 *)(unaff_x20 + _DAT_11307f5e0);
  *puVar14 = uVar7;
  puVar14[1] = uVar15;
  plVar8 = (long *)((long)param_1 + (long)*(int *)(lVar9 + 0x78));
  lVar13 = plVar8[1];
  if (lVar13 == 1) {
    _swift_bridgeObjectRetain();
    func_0x000100de78a0(uVar7,uVar15);
    plVar8 = (long *)0x0;
  }
  else {
    lStack_468 = CONCAT44(lStack_468._4_4_,(int)plVar8[4]);
    lStack_480 = plVar8[2];
    lVar10 = plVar8[3];
    lStack_488 = *plVar8;
    lVar11 = 0;
    lStack_478 = lVar6;
    FUN_1044b5850();
    lVar6 = lVar11;
    _objc_allocWithZone();
    plVar8 = (long *)(lVar6 + _DAT_11307f4d8);
    *plVar8 = lStack_488;
    plVar8[1] = lVar13;
    plVar8 = (long *)(lVar6 + _DAT_11307f4e0);
    *plVar8 = lStack_480;
    plVar8[1] = lVar10;
    *(undefined4 *)(lVar6 + _DAT_11307f4e8) = (undefined4)lStack_468;
    _swift_bridgeObjectRetain(lStack_478);
    func_0x000100de78a0(uVar7,uVar15);
    puVar5 = PTR_s_init_1125d9248;
    lStack_3e0 = lVar6;
    lStack_3d8 = lVar11;
    _swift_bridgeObjectRetain(lVar13);
    _swift_bridgeObjectRetain(lVar10);
    plVar8 = &lStack_3e0;
    _objc_msgSendSuper2(plVar8,puVar5);
  }
  *(long **)(unaff_x20 + _DAT_11307f5e8) = plVar8;
  uVar7 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x7c));
  *(undefined8 *)(unaff_x20 + _DAT_11307f5f0) = uVar7;
  puVar14 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x80));
  if (*(char *)(puVar14 + 1) == '\x01') {
    _objc_retain(uVar7);
    plVar8 = (long *)0x0;
  }
  else {
    uVar15 = *puVar14;
    lVar13 = 0;
    func_0x0001044c08f0();
    lVar6 = lVar13;
    _objc_allocWithZone();
    *(undefined8 *)(lVar6 + _DAT_11307fb00) = uVar15;
    puVar5 = PTR_s_init_1125d9248;
    lStack_3d0 = lVar6;
    lStack_3c8 = lVar13;
    _objc_retain(uVar7);
    plVar8 = &lStack_3d0;
    _objc_msgSendSuper2(plVar8,puVar5);
  }
  *(long **)(unaff_x20 + _DAT_11307f5f8) = plVar8;
  lStack_468 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x84));
  *(long *)(unaff_x20 + _DAT_11307f600) = lStack_468;
  *(undefined1 *)(unaff_x20 + _DAT_11307f608) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x88));
  *(undefined1 *)(unaff_x20 + _DAT_11307f610) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x8c));
  *(undefined1 *)(unaff_x20 + _DAT_11307f618) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x90));
  puVar14 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x94));
  uVar7 = *puVar14;
  uVar18 = puVar14[1];
  puVar14 = (undefined8 *)(unaff_x20 + _DAT_11307f620);
  *puVar14 = uVar7;
  puVar14[1] = uVar18;
  uVar16 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x98));
  *(undefined8 *)(unaff_x20 + _DAT_11307f628) = uVar16;
  puVar14 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x9c));
  uVar15 = *puVar14;
  uVar19 = puVar14[1];
  puVar14 = (undefined8 *)(unaff_x20 + _DAT_11307f630);
  *puVar14 = uVar15;
  puVar14[1] = uVar19;
  puVar14 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0xa0));
  uVar17 = *puVar14;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_11307f638);
  puVar4[1] = puVar14[1];
  *puVar4 = uVar17;
  lStack_478 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0xa4));
  *(long *)(unaff_x20 + _DAT_11307f640) = lStack_478;
  uVar17 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0xa8));
  *(undefined8 *)(unaff_x20 + _DAT_11307f648) = uVar17;
  *(undefined8 *)(unaff_x20 + _DAT_11307f650) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0xac));
  lStack_480 = puVar14[1];
  puVar14 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0xb0));
  lStack_338 = puVar14[1];
  uStack_340 = *puVar14;
  uStack_328 = puVar14[3];
  uStack_330 = puVar14[2];
  uStack_318 = puVar14[5];
  uStack_320 = puVar14[4];
  uStack_308 = puVar14[7];
  uStack_310 = puVar14[6];
  uStack_2e8 = puVar14[0xb];
  uStack_2f0 = puVar14[10];
  uStack_2d8 = puVar14[0xd];
  uStack_2e0 = puVar14[0xc];
  uStack_2f8 = puVar14[9];
  uStack_300 = puVar14[8];
  if (lStack_338 == 0) {
    _objc_retain(lStack_468);
    func_0x000100de78a0(uVar7,uVar18);
    _objc_retain(uVar16);
    func_0x000100de78a0(uVar15,uVar19);
    _swift_bridgeObjectRetain(uVar17);
    _swift_bridgeObjectRetain(lStack_480);
    _swift_bridgeObjectRetain(lStack_478);
    puVar14 = (undefined8 *)0x0;
  }
  else {
    uStack_218 = puVar14[9];
    uStack_220 = puVar14[8];
    uStack_208 = puVar14[0xb];
    uStack_210 = puVar14[10];
    uStack_1f8 = puVar14[0xd];
    uStack_200 = puVar14[0xc];
    uStack_258 = puVar14[1];
    uStack_260 = *puVar14;
    uStack_248 = puVar14[3];
    uStack_250 = puVar14[2];
    uStack_238 = puVar14[5];
    uStack_240 = puVar14[4];
    uStack_228 = puVar14[7];
    uStack_230 = puVar14[6];
    lVar6 = 0;
    FUN_1044ce924();
    _objc_allocWithZone();
    lStack_488 = lVar6;
    _objc_retain(lStack_468);
    func_0x000100de78a0(uVar7,uVar18);
    _objc_retain(uVar16);
    func_0x000100de78a0(uVar15,uVar19);
    _swift_bridgeObjectRetain(uVar17);
    _swift_bridgeObjectRetain(lStack_480);
    _swift_bridgeObjectRetain(lStack_478);
    func_0x0001044b8ea0(&uStack_340,auStack_3c0,0x11307eaf8,&UNK_10dd09c70);
    puVar14 = &uStack_260;
    FUN_1044cc94c();
  }
  *(undefined8 **)(unaff_x20 + _DAT_11307f658) = puVar14;
  *(undefined8 *)(unaff_x20 + _DAT_11307f660) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0xb4));
  uVar7 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0xb8));
  *(undefined8 *)(unaff_x20 + _DAT_11307f668) = uVar7;
  *(undefined1 *)(unaff_x20 + _DAT_11307f670) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0xbc));
  uVar15 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0xc0));
  *(undefined8 *)(unaff_x20 + _DAT_11307f678) = uVar15;
  *(undefined8 *)(unaff_x20 + _DAT_11307f680) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0xc4));
  *(undefined8 *)(unaff_x20 + _DAT_11307f688) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 200));
  uVar18 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0xcc));
  *(undefined8 *)(unaff_x20 + _DAT_11307f690) = uVar18;
  *(undefined8 *)(unaff_x20 + _DAT_11307f698) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0xd0));
  *(undefined1 *)(unaff_x20 + _DAT_11307f6a0) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0xd4));
  puVar5 = PTR_s_init_1125d9248;
  _objc_retain();
  _objc_retain(uVar7);
  _swift_bridgeObjectRetain(uVar15);
  _objc_retain(uVar18);
  puVar12 = &stack0xfffffffffffffcb0;
  _objc_msgSendSuper2(puVar12,puVar5);
  func_0x0001044b8e1c(param_1,FUN_1044a2b58);
  return puVar12;
}



/* Entry: 1044b8a08; end: 1044b8a0b; -[SCStoriesSnapPlaybackMetadata copyWithZone:] */

void FUN_1044b8a08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044b8a0c; end: 1044b8a97; -[SCStoriesSnapPlaybackMetadata description] */

void FUN_1044b8a0c(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_1044a2b58();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1044b58a0(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001044b8e1c(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      FUN_1044a2b58);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044b8a98; end: 1044b8b13; -[SCStoriesSnapPlaybackMetadata init] */

void FUN_1044b8a98(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPlaybackServices/SCStoriesSnapPlaybackMetadataWrapper.swift",0x44,2,0x11c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044b8ae0);
  (*pcVar1)();
}



/* Entry: 1044b8b14; end: 1044b8ee7; -[SCStoriesSnapPlaybackMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b8b14(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f518 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f520 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f528));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f530));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f538));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f540));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f548));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f550));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f558));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f560));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f568));
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_11307f580),
                      ((undefined8 *)(param_1 + _DAT_11307f580))[1]);
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_11307f590),
                      ((undefined8 *)(param_1 + _DAT_11307f590))[1]);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f598));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f5a0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f5a8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f5c0));
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_11307f5c8),
                      ((undefined8 *)(param_1 + _DAT_11307f5c8))[1]);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f5d0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f5d8 + 8));
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_11307f5e0),
                      ((undefined8 *)(param_1 + _DAT_11307f5e0))[1]);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f5e8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f5f0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f5f8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f600));
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_11307f620),
                      ((undefined8 *)(param_1 + _DAT_11307f620))[1]);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f628));
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_11307f630),
                      ((undefined8 *)(param_1 + _DAT_11307f630))[1]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f638 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f640));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f648));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f658));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f660));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f668));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f678));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307f690));
  return;
}



/* Entry: 1044b8ee8; end: 1044b8f07;  */

void FUN_1044b8ee8(void)

{
  _objc_opt_self(&PTR_PTR_1129c0548);
  return;
}



/* Entry: 1044b8f08; end: 1044b8f77;  */

void FUN_1044b8f08(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 1044b8f78; end: 1044b8f83; -[SCStoriesSnapPlaybackRenderInfo attachmentUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b8f78(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307f6d0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307f6d0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b8f84; end: 1044b8f93; -[SCStoriesSnapPlaybackRenderInfo framing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b8f84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307f6d8));
  return;
}



/* Entry: 1044b8f94; end: 1044b8f9f; -[SCStoriesSnapPlaybackRenderInfo captionText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b8f94(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307f6e0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307f6e0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b8fa0; end: 1044b8ff7;  */

void FUN_1044b8fa0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b8ff8; end: 1044b9083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b8ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f6d0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307f6d8) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f6e0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b9084; end: 1044b914b; -[SCStoriesSnapPlaybackRenderInfo initWithAttachmentUrl:framing:captionText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b9084(long param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar4 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11307f6d0);
  *plVar1 = param_3;
  plVar1[1] = lVar2;
  *(undefined8 *)(param_1 + _DAT_11307f6d8) = param_4;
  plVar1 = (long *)(param_1 + _DAT_11307f6e0);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar4;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar3);
  return;
}



/* Entry: 1044b914c; end: 1044b936b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1044b914c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long alStack_90 [4];
  
  _swift_getObjectType();
  lVar4 = 0;
  FUN_1044a2458();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar9 = (long)alStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x11307eb00;
  func_0x0001000285a8(0x11307eb00,&UNK_10dd09e20);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar9 - extraout_x8_00;
  uVar11 = param_1[1];
  uVar13 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f6d0);
  puVar1[1] = param_1[1];
  *puVar1 = uVar13;
  lVar6 = 0;
  FUN_1044a7e5c();
  FUN_1044b936c((long)param_1 + (long)*(int *)(lVar6 + 0x14),lVar12,0x11307eb00,&UNK_10dd09e20);
  lVar5 = lVar12;
  (**(code **)(lVar8 + 0x30))(lVar12,1,lVar4);
  if ((int)lVar5 == 1) {
    _swift_bridgeObjectRetain(uVar11);
    plVar10 = (long *)0x0;
  }
  else {
    func_0x0001044b93b4(lVar12,lVar9);
    lVar8 = 0;
    FUN_1044b528c();
    lVar5 = lVar8;
    _objc_allocWithZone();
    FUN_1044b936c(lVar9,lVar5 + _DAT_113813b08,0x112d373d8,&UNK_10d9014c0);
    *(undefined8 *)(lVar5 + _DAT_113813b10) = *(undefined8 *)(lVar9 + *(int *)(lVar4 + 0x14));
    puVar3 = PTR_s_init_1125d9248;
    alStack_90[2] = lVar5;
    alStack_90[3] = lVar8;
    _swift_bridgeObjectRetain(uVar11);
    plVar10 = alStack_90 + 2;
    _objc_msgSendSuper2(plVar10,puVar3);
    func_0x0001044b93f8(lVar9,FUN_1044a2458);
  }
  *(long **)(unaff_x20 + _DAT_11307f6d8) = plVar10;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x18));
  uVar11 = puVar1[1];
  uVar13 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11307f6e0);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar13;
  puVar3 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uVar11);
  puVar7 = &stack0xffffffffffffff90;
  _objc_msgSendSuper2(puVar7,puVar3);
  func_0x0001044b93f8(param_1,FUN_1044a7e5c);
  return puVar7;
}



/* Entry: 1044b936c; end: 1044b9433;  */

undefined8 FUN_1044b936c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1044b9434; end: 1044b9437; -[SCStoriesSnapPlaybackRenderInfo copyWithZone:] */

void FUN_1044b9434(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044b9438; end: 1044b947f; -[SCStoriesSnapPlaybackRenderInfo description] */

void FUN_1044b9438(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_1044b9480();
  _objc_release(param_1);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044b9480; end: 1044b95d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1044b9480(void)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  code *pcVar6;
  undefined8 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar4 = 0;
  FUN_1044a7e5c();
  lVar5 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar9 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar9);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f6d0);
  uVar8 = puVar1[1];
  uVar10 = *puVar1;
  *(undefined8 *)(&stack0xffffffffffffffc8 + lVar9) = puVar1[1];
  *puVar7 = uVar10;
  puVar2 = (undefined1 *)((long)puVar7 + (long)*(int *)(lVar5 + 0x14));
  lVar9 = *(long *)(unaff_x20 + _DAT_11307f6d8);
  if (lVar9 == 0) {
    lVar5 = 0;
    FUN_1044a2458();
    pcVar6 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  }
  else {
    FUN_1044b936c(lVar9 + _DAT_113813b08,puVar2,0x112d373d8,&UNK_10d9014c0);
    uVar10 = *(undefined8 *)(lVar9 + _DAT_113813b10);
    lVar5 = 0;
    FUN_1044a2458();
    *(undefined8 *)(puVar2 + *(int *)(lVar5 + 0x14)) = uVar10;
    pcVar6 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  }
  (*pcVar6)(puVar2,lVar9 == 0,1,lVar5);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f6e0);
  uVar10 = puVar1[1];
  uVar11 = *puVar1;
  puVar3 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar4 + 0x18));
  puVar3[1] = puVar1[1];
  *puVar3 = uVar11;
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar8);
  func_0x0001044b93f8(puVar7,FUN_1044a7e5c);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 1044b95d8; end: 1044b9653; -[SCStoriesSnapPlaybackRenderInfo init] */

void FUN_1044b95d8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPlaybackServices/SCStoriesSnapPlaybackRenderInfoWrapper.swift",0x46,2,0x2b,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044b9620);
  (*pcVar1)();
}



/* Entry: 1044b9654; end: 1044b96a3; -[SCStoriesSnapPlaybackRenderInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b9654(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f6d0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f6d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307f6e0 + 8))
  ;
  return;
}



/* Entry: 1044b96a4; end: 1044b96c3;  */

void FUN_1044b96a4(void)

{
  _objc_opt_self(&PTR_PTR_1129c0798);
  return;
}



/* Entry: 1044b96c4; end: 1044b96d3; -[SCStoriesSnapPlaybackSource source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044b96c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307f710);
}



/* Entry: 1044b96d4; end: 1044b972f; -[SCStoriesSnapPlaybackSource displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b96d4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307f718))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307f718);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b9730; end: 1044b9733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b9730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307f710) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f718);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b9734; end: 1044b979f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b9734(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307f710) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f718);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b97a0; end: 1044b9823; -[SCStoriesSnapPlaybackSource initWithSource:displayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b97a0(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_11307f710) = param_3;
  plVar1 = (long *)(param_1 + _DAT_11307f718);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b9824; end: 1044b9827; -[SCStoriesSnapPlaybackSource copyWithZone:] */

void FUN_1044b9824(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044b9828; end: 1044b9843; -[SCStoriesSnapPlaybackSource description] */

void FUN_1044b9828(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044b9844; end: 1044b98bf; -[SCStoriesSnapPlaybackSource init] */

void FUN_1044b9844(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPlaybackServices/SCStoriesSnapPlaybackSourceWrapper.swift",0x42,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044b988c);
  (*pcVar1)();
}



/* Entry: 1044b98c0; end: 1044b98d3; -[SCStoriesSnapPlaybackSource .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b98c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307f718 + 8))
  ;
  return;
}



/* Entry: 1044b98d4; end: 1044b98f3;  */

void FUN_1044b98d4(void)

{
  _objc_opt_self(&PTR_PTR_1129c0870);
  return;
}



/* Entry: 1044b98f4; end: 1044b98f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b98f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307f710) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f718);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b98f8; end: 1044b9963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b98f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f748);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f750);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  uVar2 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f758);
  puVar1[1] = param_1[5];
  *puVar1 = uVar2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b9964; end: 1044b996f; -[SCStoriesSnapSpotlightLoggingInfo engagementCounts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b9964(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307f748))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307f748);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b9970; end: 1044b997b; -[SCStoriesSnapSpotlightLoggingInfo mediaPlaybackSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b9970(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307f750))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307f750);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b997c; end: 1044b9987; -[SCStoriesSnapSpotlightLoggingInfo shareId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b997c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307f758))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307f758);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b9988; end: 1044b99df;  */

void FUN_1044b9988(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b99e0; end: 1044b9a7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b99e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f748);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f750);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f758);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b9a7c; end: 1044b9b5f; -[SCStoriesSnapSpotlightLoggingInfo initWithEngagementCounts:mediaPlaybackSessionId:shareId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b9a7c(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar3 = param_2;
  }
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11307f748);
  *plVar1 = param_3;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_1 + _DAT_11307f750);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_11307f758);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  lStack_60 = param_1;
  lStack_58 = lVar4;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b9b60; end: 1044b9b63; -[SCStoriesSnapSpotlightLoggingInfo copyWithZone:] */

void FUN_1044b9b60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044b9b64; end: 1044b9b7f; -[SCStoriesSnapSpotlightLoggingInfo description] */

void FUN_1044b9b64(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044b9b80; end: 1044b9bfb; -[SCStoriesSnapSpotlightLoggingInfo init] */

void FUN_1044b9b80(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPlaybackServices/SCStoriesSnapSpotlightLoggingInfoWrapper.swift",0x48,2,0x2d,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044b9bc8);
  (*pcVar1)();
}



/* Entry: 1044b9bfc; end: 1044b9c4f; -[SCStoriesSnapSpotlightLoggingInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b9bfc(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f748 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f750 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307f758 + 8))
  ;
  return;
}



/* Entry: 1044b9c50; end: 1044b9c6f;  */

void FUN_1044b9c50(void)

{
  _objc_opt_self(&PTR_PTR_1129c0940);
  return;
}



/* Entry: 1044b9c70; end: 1044b9d33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b9c70(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_allocWithZone();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f788);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f790);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  *(undefined8 *)(unaff_x20 + _DAT_11307f798) = param_1[4];
  uStack_58 = param_1[6];
  uStack_60 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f7a0);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  func_0x000101223174(&uStack_40,auStack_70);
  func_0x000101223174(&uStack_50,auStack_70);
  func_0x000101223174(&uStack_60,auStack_70);
  func_0x00010449ff20(param_1);
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b9d34; end: 1044b9d3f; -[SCStoriesPlaybackTopicStoryLoggingInfo itemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b9d34(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307f788))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307f788);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b9d40; end: 1044b9d4b; -[SCStoriesPlaybackTopicStoryLoggingInfo sectionName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b9d40(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307f790))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307f790);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b9d4c; end: 1044b9d5b; -[SCStoriesPlaybackTopicStoryLoggingInfo sectionType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044b9d4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307f798);
}



/* Entry: 1044b9d5c; end: 1044b9d67; -[SCStoriesPlaybackTopicStoryLoggingInfo creatorId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b9d5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307f7a0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307f7a0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b9d68; end: 1044b9dbf;  */

void FUN_1044b9d68(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b9dc0; end: 1044b9f17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b9dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f788);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f790);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307f798) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f7a0);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b9f18; end: 1044ba00b; -[SCStoriesPlaybackTopicStoryLoggingInfo initWithItemId:sectionName:sectionType:creatorId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b9f18(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar3 = param_2;
  }
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_6 == 0) {
    param_6 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11307f788);
  *plVar1 = param_3;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_1 + _DAT_11307f790);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  *(undefined8 *)(param_1 + _DAT_11307f798) = param_5;
  plVar1 = (long *)(param_1 + _DAT_11307f7a0);
  *plVar1 = param_6;
  plVar1[1] = param_2;
  lStack_60 = param_1;
  lStack_58 = lVar4;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044ba00c; end: 1044ba00f; -[SCStoriesPlaybackTopicStoryLoggingInfo copyWithZone:] */

void FUN_1044ba00c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044ba010; end: 1044ba02b; -[SCStoriesPlaybackTopicStoryLoggingInfo description] */

void FUN_1044ba010(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ba02c; end: 1044ba0a7; -[SCStoriesPlaybackTopicStoryLoggingInfo init] */

void FUN_1044ba02c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPlaybackServices/SCStoriesPlaybackTopicStoryLoggingInfoWrapper.swift",0x4d,2,
             0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044ba074);
  (*pcVar1)();
}



/* Entry: 1044ba0a8; end: 1044ba0fb; -[SCStoriesPlaybackTopicStoryLoggingInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ba0a8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f788 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f790 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307f7a0 + 8))
  ;
  return;
}



/* Entry: 1044ba0fc; end: 1044ba11b;  */

void FUN_1044ba0fc(void)

{
  _objc_opt_self(&PTR_PTR_1129c0a18);
  return;
}



/* Entry: 1044ba11c; end: 1044ba1cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ba11c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(byte *)(unaff_x20 + _DAT_11307f7d0) = (byte)param_1 & 1;
  *(byte *)(unaff_x20 + _DAT_11307f7d8) = (byte)((uint)param_1 >> 8) & 1;
  *(byte *)(unaff_x20 + _DAT_11307f7e0) = (byte)((uint)param_1 >> 0x10) & 1;
  *(undefined8 *)(unaff_x20 + _DAT_11307f7e8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307f7f0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11307f7f8) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044ba1cc; end: 1044ba1db; -[SCStoriesSnapPlaybackStoryManagementInfo shouldShowViewersList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044ba1cc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307f7d0);
}



/* Entry: 1044ba1dc; end: 1044ba1eb; -[SCStoriesSnapPlaybackStoryManagementInfo isSaveable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044ba1dc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307f7d8);
}



/* Entry: 1044ba1ec; end: 1044ba1fb; -[SCStoriesSnapPlaybackStoryManagementInfo isDeletable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044ba1ec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307f7e0);
}



/* Entry: 1044ba1fc; end: 1044ba24f; -[SCStoriesSnapPlaybackStoryManagementInfo segmentViewerInfoSnapIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ba1fc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11307f7e8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1044ba250; end: 1044ba25f; -[SCStoriesSnapPlaybackStoryManagementInfo snapInsights] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ba250(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307f7f0));
  return;
}



/* Entry: 1044ba260; end: 1044ba26f; -[SCStoriesSnapPlaybackStoryManagementInfo deleteAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044ba260(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307f7f8);
}



/* Entry: 1044ba270; end: 1044ba323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ba270(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11307f7d0) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11307f7d8) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11307f7e0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11307f7e8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307f7f0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11307f7f8) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044ba324; end: 1044ba403; -[SCStoriesSnapPlaybackStoryManagementInfo initWithShouldShowViewersList:isSaveable:isDeletable:segmentViewerInfoSnapIds:snapInsights:deleteAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ba324(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_6 == 0) {
    param_6 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_6,PTR___sSSN_11034da80);
  }
  *(undefined1 *)(param_1 + _DAT_11307f7d0) = param_3;
  *(undefined1 *)(param_1 + _DAT_11307f7d8) = param_4;
  *(undefined1 *)(param_1 + _DAT_11307f7e0) = param_5;
  *(long *)(param_1 + _DAT_11307f7e8) = param_6;
  *(undefined8 *)(param_1 + _DAT_11307f7f0) = param_7;
  *(undefined8 *)(param_1 + _DAT_11307f7f8) = param_8;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_retain(param_7);
  _objc_msgSendSuper2(&lStack_60,puVar1);
  return;
}



/* Entry: 1044ba404; end: 1044ba407; -[SCStoriesSnapPlaybackStoryManagementInfo copyWithZone:] */

void FUN_1044ba404(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044ba408; end: 1044ba423; -[SCStoriesSnapPlaybackStoryManagementInfo description] */

void FUN_1044ba408(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ba424; end: 1044ba49f; -[SCStoriesSnapPlaybackStoryManagementInfo init] */

void FUN_1044ba424(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPlaybackServices/SCStoriesSnapPlaybackStoryManagementInfoWrapper.swift",0x4f,
             2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044ba46c);
  (*pcVar1)();
}



/* Entry: 1044ba4a0; end: 1044ba4d7; -[SCStoriesSnapPlaybackStoryManagementInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ba4a0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f7e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307f7f0));
  return;
}



/* Entry: 1044ba4d8; end: 1044ba4f7;  */

void FUN_1044ba4d8(void)

{
  _objc_opt_self(&PTR_PTR_1129c0af8);
  return;
}



/* Entry: 1044ba4f8; end: 1044ba5af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1044ba4f8(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307f828) = *param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11307f830) = *(undefined1 *)(param_1 + 1);
  lVar1 = 0;
  FUN_1044a8f6c();
  func_0x0001009f0578((long)param_1 + (long)*(int *)(lVar1 + 0x18),unaff_x20 + _DAT_113813b18);
  func_0x0001009f0578((long)param_1 + (long)*(int *)(lVar1 + 0x1c),unaff_x20 + _DAT_113813b20);
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  FUN_1044ba918(param_1);
  return puVar2;
}



/* Entry: 1044ba5b0; end: 1044ba5bf; -[SCStoriesSnapPlaybackTimeInfo duration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044ba5b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307f828);
}



/* Entry: 1044ba5c0; end: 1044ba5cf; -[SCStoriesSnapPlaybackTimeInfo isDurationInfinite] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044ba5c0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307f830);
}



/* Entry: 1044ba5d0; end: 1044ba5db; -[SCStoriesSnapPlaybackTimeInfo expirationDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ba5d0(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x0001009f0578(param_1 + _DAT_113813b18,puVar4);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1044ba5dc; end: 1044ba5e7; -[SCStoriesSnapPlaybackTimeInfo postingDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ba5dc(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x0001009f0578(param_1 + _DAT_113813b20,puVar4);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1044ba5e8; end: 1044ba6af;  */

void FUN_1044ba5e8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x0001009f0578(param_1 + *param_3,puVar4);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1044ba6b0; end: 1044ba76f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1044ba6b0(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar1 = auStack_60;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307f828) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11307f830) = param_2;
  func_0x0001009f0578(param_3,unaff_x20 + _DAT_113813b18);
  func_0x0001009f0578(param_4,unaff_x20 + _DAT_113813b20);
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  func_0x0001000d1dcc(param_4);
  func_0x0001000d1dcc(param_3);
  return puVar1;
}



/* Entry: 1044ba770; end: 1044ba917; -[SCStoriesSnapPlaybackTimeInfo initWithDuration:isDurationInfinite:expirationDate:postingDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1044ba770(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4,
                    long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  long lStack_70;
  long lStack_68;
  
  lVar1 = param_2;
  _swift_getObjectType();
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar2 - extraout_x12;
  if (param_5 == 0) {
    lVar3 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar5,param_5);
    lVar3 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar5,param_5 == 0,1);
  if (param_6 != 0) {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar2,param_6);
  }
  lVar3 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar2,param_6 == 0,1,lVar3);
  *(undefined8 *)(param_2 + _DAT_11307f828) = param_1;
  *(undefined1 *)(param_2 + _DAT_11307f830) = param_4;
  func_0x0001009f0578(lVar5,param_2 + _DAT_113813b18);
  func_0x0001009f0578(lVar2,param_2 + _DAT_113813b20);
  plVar4 = &lStack_70;
  lStack_70 = param_2;
  lStack_68 = lVar1;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  func_0x0001000d1dcc(lVar2);
  func_0x0001000d1dcc(lVar5);
  return plVar4;
}



/* Entry: 1044ba918; end: 1044ba953;  */

undefined8 FUN_1044ba918(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1044a8f6c();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1044ba954; end: 1044ba957; -[SCStoriesSnapPlaybackTimeInfo copyWithZone:] */

void FUN_1044ba954(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}


