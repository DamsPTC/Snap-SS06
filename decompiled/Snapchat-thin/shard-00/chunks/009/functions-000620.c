/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100be275c; end: 100be2787;  */

void FUN_100be275c(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3b03c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100be2788; end: 100be27ff; -[SCLensMetadataResourceContainer initWithLensResources:] */

undefined1 * FUN_100be2788(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701928;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100be2800; end: 100be2987;  */

void FUN_100be2800(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1 == (int *)0x0) {
    puVar6 = (undefined *)0x0;
    goto LAB_100be28f0;
  }
  puVar6 = PTR_PTR_1126de7d0;
  func_0x000107c610f4(PTR_PTR_1126de7d0);
  lVar3 = (long)*param_1;
  uVar2 = *(ushort *)((long)param_1 - lVar3);
  if (uVar2 < 5) {
    puVar5 = (undefined *)0x0;
LAB_100be28b8:
    uVar8 = 0;
LAB_100be28bc:
    uVar9 = 0;
LAB_100be28c0:
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_1 - lVar3))[2];
    if (uVar4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar3 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar3);
    }
    if (uVar2 < 7) goto LAB_100be28b8;
    uVar4 = (ulong)*(ushort *)((long)param_1 + (6 - lVar3));
    if (uVar4 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)((long)param_1 + uVar4);
    }
    if (uVar2 < 9) goto LAB_100be28bc;
    uVar4 = (ulong)*(ushort *)((long)param_1 + (8 - lVar3));
    if (uVar4 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)((long)param_1 + uVar4);
    }
    if ((uVar2 < 0xb) || (uVar4 = (ulong)*(ushort *)((long)param_1 + (10 - lVar3)), uVar4 == 0))
    goto LAB_100be28c0;
    puVar1 = (uint *)((long)param_1 + uVar4);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar1 + (ulong)*puVar1 + 4);
    func_0x000107c61180();
  }
  func_0x000107c49170(puVar6,param_2,puVar5,uVar8,uVar9,puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
LAB_100be28f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100be2988; end: 100be29e7; -[SCDiscoverFeedBadgeProvider _checkAllowNotificationToBadgeDiscoverTab] */

void FUN_100be2988(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x50);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3dc04();
  func_0x000107c61170(uVar1);
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdddf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkNotificationInventoryAndSh_112555170)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdd2770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__badgeStateUnchanged_112552378);
  return;
}



/* Entry: 100be29e8; end: 100be29ff; -[SCStoriesConfigProviderImplementation allowNotificationToBadgeDiscoverTab] */

void FUN_100be29e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e17098,0,0);
  return;
}



/* Entry: 100be2a00; end: 100be2ac3; -[SCDiscoverFeedBadgeProvider _checkNotificationInventoryAndShowBadge] */

void FUN_100be2a00(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
  func_0x000107c40f90(PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,param_1);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c4401c(puVar1);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 100be2ac4; end: 100be2b83; -[SCLensMetadataLensPreview initWithUrlPattern:sequenceSize:sequenceFrameIntervalMs:thumbnailUrl:] */

undefined1 *
FUN_100be2ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_112701930;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100be2b84; end: 100be2bcf; -[SCLensMetadataLensMiscData initWithViewCount:friendPlayCount:] */

void FUN_100be2b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701938;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 100be2bd0; end: 100be2ce3;  */

void FUN_100be2bd0(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  ushort *puVar6;
  undefined *puVar7;
  
  if (param_1 == (int *)0x0) {
    puVar7 = (undefined *)0x0;
    goto LAB_100be2cbc;
  }
  puVar7 = PTR_PTR_1126de7e0;
  func_0x000107c610f4(PTR_PTR_1126de7e0);
  puVar6 = (ushort *)((long)param_1 - (long)*param_1);
  uVar2 = *puVar6;
  if (uVar2 < 5) {
    bVar4 = false;
    bVar3 = false;
LAB_100be2c88:
    lVar5 = 0;
  }
  else {
    if ((ulong)puVar6[2] == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = *(char *)((long)param_1 + (ulong)puVar6[2]) != '\0';
    }
    if (uVar2 < 7) {
      bVar4 = false;
      goto LAB_100be2c88;
    }
    if ((ulong)puVar6[3] == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = *(char *)((long)param_1 + (ulong)puVar6[3]) != '\0';
    }
    if ((uVar2 < 9) || ((ulong)puVar6[4] == 0)) goto LAB_100be2c88;
    puVar1 = (uint *)((long)param_1 + (ulong)puVar6[4]);
    lVar5 = (long)puVar1 + (ulong)*puVar1;
  }
  func_0x000107c2ba7c(lVar5);
  func_0x000107c61180();
  func_0x000107c49090(puVar7,param_2,bVar3,bVar4,lVar5);
  func_0x000107c61170(lVar5);
LAB_100be2cbc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 100be2ce4; end: 100be367f; -[SCLensMetadataDataModel initWithLensId:name:code:hintId:hintTranslations:iconURL:bitmojiComicId:resource:expirationTimestamp:lensType:section:categories:isFeatured:isSponsored:sponsoredSlug:scheduleIntervals:isDemo:demoStartTimestamp:absoluteCarouselPosition:unlockableTrackInfo:manifest:isThirdParty:isStudioPreview:activationCameraPosition:encryptedGeoData:unlockCompanionBackReferenceId:cameraContexts:applicableContexts:hasContextCards:onDemandTemplateId:isRanked:priority:lensDescriptors:communityLensData:snappablesReplyType:snappablesTaglineKey:snappablesPlayButtonGradientColors:isLeftCarousel:contextHint:checksum:isCommunity:unlockablesAttachments:apiLevel:lensCollectionId:carouselGroup:unlockableSnapInfo:connectedLensInfo:musicTrackMetadata:shoppingLensMetadata:sponsoredType:remoteApiInfo:adRenderDataBytes:carouselGlobalScoreList:lensExtensionData:prefetchContexts:customizationInfo:isSnapchatPlusExclusive:resourceContainer:targetingCampaignId:lensPreview:primaryCategory:lensMiscData:lensPlusTierConfig:] */

undefined8 *
FUN_100be2ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18,undefined1 param_19,undefined4 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined4 param_25,undefined4 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined1 param_31,undefined4 param_32,
             undefined8 param_33,undefined1 param_34,undefined4 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined1 param_39,undefined4 param_40,
             undefined8 param_41,undefined8 param_42,undefined1 param_43,undefined4 param_44,
             undefined8 param_45,undefined8 param_46,undefined1 param_47,undefined4 param_48,
             undefined8 param_49,undefined1 param_50,undefined4 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined1 param_58,undefined4 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
             undefined8 param_65,undefined1 param_66,undefined4 param_67,undefined8 param_68,
             undefined8 param_69,undefined8 param_70,undefined8 param_71,undefined8 param_72,
             undefined8 param_73)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_27);
  func_0x000107c61174(param_28);
  func_0x000107c61174(param_29);
  func_0x000107c61174(param_30);
  func_0x000107c61174(param_33);
  func_0x000107c61174(param_37);
  func_0x000107c61174(param_38);
  func_0x000107c61174(param_41);
  func_0x000107c61174(param_42);
  func_0x000107c61174(param_45);
  func_0x000107c61174(param_46);
  func_0x000107c61174(param_49);
  func_0x000107c61174(param_52);
  func_0x000107c61174(param_53);
  func_0x000107c61174(param_54);
  func_0x000107c61174(param_55);
  func_0x000107c61174(param_56);
  func_0x000107c61174(param_57);
  func_0x000107c61174(param_60);
  func_0x000107c61174(param_61);
  func_0x000107c61174(param_62);
  func_0x000107c61174(param_63);
  func_0x000107c61174(param_64);
  func_0x000107c61174(param_65);
  func_0x000107c61174(param_68);
  func_0x000107c61174(param_69);
  func_0x000107c61174(param_70);
  func_0x000107c61174(param_71);
  func_0x000107c61174(param_72);
  func_0x000107c61174(param_73);
  puStack_70 = PTR_PTR_112701858;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_9;
    func_0x000107c40794();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_10;
    func_0x000107c40794();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0xb] = param_11;
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_12;
    *(undefined1 *)((long)puVar1 + 9) = param_12._1_1_;
    uVar2 = param_14;
    func_0x000107c40794();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = (undefined1)param_15;
    *(undefined1 *)((long)puVar1 + 0xb) = param_15._1_1_;
    uVar2 = param_17;
    func_0x000107c40794();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_18;
    func_0x000107c40794();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0xc) = param_19;
    puVar1[0xf] = param_21;
    puVar1[0x10] = param_22;
    uVar2 = param_23;
    func_0x000107c40794();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_24;
    func_0x000107c40794();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0xd) = (undefined1)param_25;
    *(undefined1 *)((long)puVar1 + 0xe) = param_25._1_1_;
    *(undefined1 *)((long)puVar1 + 0xf) = param_25._2_1_;
    uVar2 = param_27;
    func_0x000107c40794();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_28;
    func_0x000107c40794();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_29;
    func_0x000107c40794();
    uVar3 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_30;
    func_0x000107c40794();
    uVar3 = puVar1[0x16];
    puVar1[0x16] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)(puVar1 + 2) = param_31;
    uVar2 = param_33;
    func_0x000107c40794();
    uVar3 = puVar1[0x17];
    puVar1[0x17] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x11) = param_34;
    puVar1[0x18] = param_36;
    uVar2 = param_37;
    func_0x000107c40794();
    uVar3 = puVar1[0x19];
    puVar1[0x19] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_38;
    func_0x000107c40794();
    uVar3 = puVar1[0x1a];
    puVar1[0x1a] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x12) = param_39;
    uVar2 = param_41;
    func_0x000107c40794();
    uVar3 = puVar1[0x1b];
    puVar1[0x1b] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_42;
    func_0x000107c40794();
    uVar3 = puVar1[0x1c];
    puVar1[0x1c] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x13) = param_43;
    uVar2 = param_45;
    func_0x000107c40794();
    uVar3 = puVar1[0x1d];
    puVar1[0x1d] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_46;
    func_0x000107c40794();
    uVar3 = puVar1[0x1e];
    puVar1[0x1e] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x14) = param_47;
    uVar2 = param_49;
    func_0x000107c40794();
    uVar3 = puVar1[0x1f];
    puVar1[0x1f] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x15) = param_50;
    uVar2 = param_52;
    func_0x000107c40794();
    uVar3 = puVar1[0x20];
    puVar1[0x20] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_53;
    func_0x000107c40794();
    uVar3 = puVar1[0x21];
    puVar1[0x21] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_54;
    func_0x000107c40794();
    uVar3 = puVar1[0x22];
    puVar1[0x22] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_55;
    func_0x000107c40794();
    uVar3 = puVar1[0x23];
    puVar1[0x23] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_56;
    func_0x000107c40794();
    uVar3 = puVar1[0x24];
    puVar1[0x24] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_57;
    func_0x000107c40794();
    uVar3 = puVar1[0x25];
    puVar1[0x25] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x16) = param_58;
    uVar2 = param_60;
    func_0x000107c40794();
    uVar3 = puVar1[0x26];
    puVar1[0x26] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_61;
    func_0x000107c40794();
    uVar3 = puVar1[0x27];
    puVar1[0x27] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_62;
    func_0x000107c40794();
    uVar3 = puVar1[0x28];
    puVar1[0x28] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_63;
    func_0x000107c40794();
    uVar3 = puVar1[0x29];
    puVar1[0x29] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_64;
    func_0x000107c40794();
    uVar3 = puVar1[0x2a];
    puVar1[0x2a] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_65;
    func_0x000107c40794();
    uVar3 = puVar1[0x2b];
    puVar1[0x2b] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x17) = param_66;
    uVar2 = param_68;
    func_0x000107c40794();
    uVar3 = puVar1[0x2c];
    puVar1[0x2c] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_69;
    func_0x000107c40794();
    uVar3 = puVar1[0x2d];
    puVar1[0x2d] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_70;
    func_0x000107c40794();
    uVar3 = puVar1[0x2e];
    puVar1[0x2e] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_71;
    func_0x000107c40794();
    uVar3 = puVar1[0x2f];
    puVar1[0x2f] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_72;
    func_0x000107c40794();
    uVar3 = puVar1[0x30];
    puVar1[0x30] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_73;
    func_0x000107c40794();
    uVar3 = puVar1[0x31];
    puVar1[0x31] = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_73);
  func_0x000107c61170(param_72);
  func_0x000107c61170(param_71);
  func_0x000107c61170(param_70);
  func_0x000107c61170(param_69);
  func_0x000107c61170(param_68);
  func_0x000107c61170(param_65);
  func_0x000107c61170(param_64);
  func_0x000107c61170(param_63);
  func_0x000107c61170(param_62);
  func_0x000107c61170(param_61);
  func_0x000107c61170(param_60);
  func_0x000107c61170(param_57);
  func_0x000107c61170(param_56);
  func_0x000107c61170(param_55);
  func_0x000107c61170(param_54);
  func_0x000107c61170(param_53);
  func_0x000107c61170(param_52);
  func_0x000107c61170(param_49);
  func_0x000107c61170(param_46);
  func_0x000107c61170(param_45);
  func_0x000107c61170(param_42);
  func_0x000107c61170(param_41);
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100be3680; end: 100be36a3; -[SCLensMetadataLensResource copyWithZone:] */

undefined8 FUN_100be3680(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100be36a4; end: 100be36c7; -[SCLensMetadataUnlockableTrackInfo copyWithZone:] */

undefined8 FUN_100be36a4(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100be36c8; end: 100be36eb; -[SCLensMetadataCommunityLensData copyWithZone:] */

undefined8 FUN_100be36c8(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100be36ec; end: 100be370f; -[SCLensMetadataUnlockablesCarouselGroup copyWithZone:] */

undefined8 FUN_100be36ec(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100be3710; end: 100be3733; -[SCLensMetadataResourceContainer copyWithZone:] */

undefined8 FUN_100be3710(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100be3734; end: 100be3757; -[SCLensMetadataLensPreview copyWithZone:] */

undefined8 FUN_100be3734(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100be3758; end: 100be377b; -[SCLensMetadataLensMiscData copyWithZone:] */

undefined8 FUN_100be3758(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100be377c; end: 100be37e3; +[SCLensMetadataCTLItem dataModelWithDataModel:] */

void FUN_100be377c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126de7f8;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100be37e4; end: 100be3827; -[SCLensMetadataCTLItem internalInit] */

void FUN_100be37e4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_112701980;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100be3828; end: 100be389f; -[SCLensMetadataMetadataItem initWithItem:] */

undefined1 * FUN_100be3828(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701978;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100be38a0; end: 100be38c3; -[SCLensMetadataCTLItem copyWithZone:] */

undefined8 FUN_100be38a0(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100be38c4; end: 100be3a1f;  */

void FUN_100be38c4(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  if (param_1 == (int *)0x0) {
    puVar6 = (undefined *)0x0;
    goto LAB_100be39a8;
  }
  puVar6 = PTR_PTR_1126de778;
  func_0x000107c610f4(PTR_PTR_1126de778);
  lVar3 = (long)*param_1;
  uVar2 = *(ushort *)((long)param_1 - lVar3);
  if (uVar2 < 5) {
    puVar5 = (undefined *)0x0;
LAB_100be3978:
    uVar8 = 0;
LAB_100be397c:
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_1 - lVar3))[2];
    if (uVar4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar3 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar3);
    }
    if (uVar2 < 7) goto LAB_100be3978;
    uVar4 = (ulong)*(ushort *)((long)param_1 + (6 - lVar3));
    if (uVar4 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)((long)param_1 + uVar4);
    }
    if ((uVar2 < 9) || (uVar4 = (ulong)*(ushort *)((long)param_1 + (8 - lVar3)), uVar4 == 0))
    goto LAB_100be397c;
    puVar1 = (uint *)((long)param_1 + uVar4);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar1 + (ulong)*puVar1 + 4);
    func_0x000107c61180();
  }
  func_0x000107c494c0(puVar6,param_2,puVar5,uVar8,puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
LAB_100be39a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100be3a20; end: 100be3b17;  */

void FUN_100be3a20(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  if (param_1 == (int *)0x0) {
    puVar6 = (undefined *)0x0;
    goto LAB_100be3af0;
  }
  puVar6 = PTR_PTR_1126de780;
  func_0x000107c610f4(PTR_PTR_1126de780);
  lVar4 = (long)*param_1;
  uVar3 = *(ushort *)((long)param_1 - lVar4);
  if (uVar3 < 5) {
    puVar7 = (undefined *)0x0;
LAB_100be3ad4:
    uVar2 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_1 - lVar4))[2];
    if (uVar5 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar4 = (long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - lVar4);
    }
    if ((uVar3 < 7) || (uVar5 = (ulong)*(ushort *)((long)param_1 + (6 - lVar4)), uVar5 == 0))
    goto LAB_100be3ad4;
    uVar2 = *(undefined8 *)((long)param_1 + uVar5);
  }
  func_0x000107c495c0(puVar6,param_2,puVar7,uVar2);
  func_0x000107c61170(puVar7);
LAB_100be3af0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100be3b18; end: 100be3b9f; -[SCLensMetadataUnlockablesWebViewAttachment initWithWebViewUrl:shouldAutoFill:] */

undefined1 *
FUN_100be3b18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1127018d8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100be3ba0; end: 100be3dc7;  */

void FUN_100be3ba0(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  if (param_1 == (int *)0x0) {
    puVar6 = (undefined *)0x0;
    goto LAB_100be3cd4;
  }
  puVar6 = PTR_PTR_1126de788;
  func_0x000107c610f4(PTR_PTR_1126de788);
  lVar3 = (long)*param_1;
  uVar2 = *(ushort *)((long)param_1 - lVar3);
  if (uVar2 < 5) {
    puVar5 = (undefined *)0x0;
LAB_100be3c8c:
    puVar7 = (undefined *)0x0;
LAB_100be3c90:
    puVar9 = (undefined *)0x0;
LAB_100be3c94:
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_1 - lVar3))[2];
    if (uVar4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar3 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar3);
    }
    lVar3 = -lVar3;
    if (uVar2 < 7) goto LAB_100be3c8c;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar3 + 6);
    if (uVar4 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar3 = -(long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar2 < 9) goto LAB_100be3c90;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar3 + 8);
    if (uVar4 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar3 = -(long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar2 < 0xb) || (uVar4 = (ulong)*(ushort *)((long)param_1 + lVar3 + 10), uVar4 == 0))
    goto LAB_100be3c94;
    puVar1 = (uint *)((long)param_1 + uVar4);
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar1 + (ulong)*puVar1 + 4);
    func_0x000107c61180();
  }
  func_0x000107c456e0(puVar6,param_2,puVar5,puVar7,puVar9,puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
LAB_100be3cd4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100be3dc8; end: 100be42b7;  */

void FUN_100be3dc8(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  long lVar3;
  ushort uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  
  if (param_1 == (int *)0x0) {
    puVar15 = (undefined *)0x0;
    goto LAB_100be3f8c;
  }
  puVar15 = PTR_PTR_1126de770;
  func_0x000107c610f4();
  lVar3 = (long)*param_1;
  uVar4 = *(ushort *)((long)param_1 - lVar3);
  if (uVar4 < 5) {
    puVar6 = (undefined *)0x0;
LAB_100be3ef8:
    puVar7 = (undefined *)0x0;
LAB_100be3efc:
    puVar8 = (undefined *)0x0;
LAB_100be3f00:
    puVar10 = (undefined *)0x0;
LAB_100be3f08:
    puVar12 = (undefined *)0x0;
LAB_100be3f0c:
    puVar14 = (undefined *)0x0;
LAB_100be3f10:
    puVar9 = (undefined *)0x0;
LAB_100be3f14:
    puVar11 = (undefined *)0x0;
LAB_100be3f18:
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_1 - lVar3))[2];
    if (uVar5 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar3 = (long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - lVar3);
    }
    lVar3 = -lVar3;
    if (uVar4 < 7) goto LAB_100be3ef8;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar3 + 6);
    if (uVar5 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)((long)param_1 + uVar5);
    }
    if (uVar4 < 9) goto LAB_100be3ef8;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar3 + 8);
    if (uVar5 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar3 = -(long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar4 < 0xb) goto LAB_100be3efc;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar3 + 10);
    if (uVar5 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4,uVar2);
      func_0x000107c61180();
      lVar3 = -(long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar4 < 0xd) goto LAB_100be3f00;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar3 + 0xc);
    if (uVar5 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4,uVar2);
      func_0x000107c61180();
      lVar3 = -(long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar4 < 0xf) || (uVar4 < 0x11)) goto LAB_100be3f08;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar3 + 0x10);
    if (uVar5 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4,uVar2);
      func_0x000107c61180();
      lVar3 = -(long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar4 < 0x13) goto LAB_100be3f0c;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar3 + 0x12);
    if (uVar5 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4,uVar2);
      func_0x000107c61180();
      lVar3 = -(long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar4 < 0x15) goto LAB_100be3f10;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar3 + 0x14);
    if (uVar5 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4,uVar2);
      func_0x000107c61180();
      lVar3 = -(long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar4 < 0x17) goto LAB_100be3f14;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar3 + 0x16);
    if (uVar5 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4,uVar2);
      func_0x000107c61180();
      lVar3 = -(long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar4 < 0x19) || (uVar5 = (ulong)*(ushort *)((long)param_1 + lVar3 + 0x18), uVar5 == 0))
    goto LAB_100be3f18;
    puVar1 = (uint *)((long)param_1 + uVar5);
    puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar1 + (ulong)*puVar1 + 4,uVar2);
    func_0x000107c61180();
  }
  func_0x000107c49138();
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
LAB_100be3f8c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 100be42b8; end: 100be444f; -[SCLensMetadataUnlockablesAttachment initWithAttachmentType:longFormVideoAttachment:webViewAttachment:ctaText:appInstallAttachment:deepLink:localizedCtaText:] */

undefined1 *
FUN_100be42b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_58 = PTR_PTR_1127018c8;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_9;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100be4450; end: 100be4473; -[SCLensMetadataUnlockablesWebViewAttachment copyWithZone:] */

undefined8 FUN_100be4450(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100be4474; end: 100be44ef; +[SDMMediaMetadata_MediaDimensions descriptor] */

undefined * FUN_100be4474(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fd818 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cf6e20,
                        &PTR____CFConstantStringClassReference_110f288f8,&PTR_DAT_1133ff530,
                        &PTR_s_width_1133ff608,2,0xc,0x1c);
    func_0x000107c5a88c();
    puRam00000001137fd818 = puVar1;
  }
  return puRam00000001137fd818;
}



/* Entry: 100be44f0; end: 100be4513; -[SCLensMetadataUnlockablesAttachment copyWithZone:] */

undefined8 FUN_100be44f0(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100be4514; end: 100be46a7;  */

void FUN_100be4514(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_100083b20(&puStack_80);
  puVar5 = puStack_80;
  puVar2 = puStack_80;
  func_0x000107c3ef74();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  FUN_100083b20(&puStack_80);
  puVar3 = puStack_80;
  func_0x000107c4cb6c();
  func_0x000107c61180();
  func_0x000107c61170(puStack_80);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar5 = &UNK_110452498;
  func_0x000107c613fc(&UNK_110452498,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar7;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  *(undefined **)(puVar5 + 0x20) = puVar2;
  *(undefined **)(puVar5 + 0x28) = puVar3;
  puStack_60 = &UNK_101bc2ad0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101bc2b6c;
  puStack_68 = &UNK_1104524b0;
  puStack_58 = puVar5;
  func_0x000107c60bc4(&puStack_80);
  puVar5 = puStack_58;
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(puVar2);
  func_0x000107c61174(puVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  uVar7 = 0;
  FUN_1002cb974(0);
  func_0x000107c610f8();
  FUN_100be46f8(puVar4,uVar7);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 100be46a8; end: 100be46e3;  */

void FUN_100be46a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100be46e4; end: 100be46f7;  */

void FUN_100be46e4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100be46f8; end: 100be4743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100be46f8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fda3e8) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100be4744; end: 100be477f;  */

void FUN_100be4744(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100be4780; end: 100be483f; -[SCMemoriesComposerThumbnailDownloaderEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100be47e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100be481c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100be47e8) */
/* WARNING: Removing unreachable block (ram,0x000100be4820) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100be4780(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2268;
  func_0x000107c610f4(PTR_PTR_1126b2268);
  param_1 = param_1 + _DAT_112716a50;
  func_0x000107c61148(param_1);
  func_0x000107c4ccb4();
  func_0x000107c61180();
  func_0x000107c4776c(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100be4840; end: 100be484f; -[_TtC32MemoriesSnapThumbnailServicesAPI31SCMemoriesSnapThumbnailServices memoriesSnapThumbnailProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100be4840(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fda3e8));
  return;
}



/* Entry: 100be4850; end: 100be48bb; -[SCMemoriesComposerThumbnailDownloader initWithMemoriesThumbnailProvider:] */

undefined1 * FUN_100be4850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e4ee8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100be48bc; end: 100be4947; +[SDMPlaybackCharacteristics descriptor] */

undefined * FUN_100be48bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8c98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0ce0,
                        &PTR____CFConstantStringClassReference_110f75f78,&PTR_DAT_1133c7478,
                        &PTR_DAT_1133c74b0,8,0x38,0x1c);
    func_0x000107c5a8b4();
    puRam00000001137f8c98 = puVar1;
  }
  return puRam00000001137f8c98;
}



/* Entry: 100be4948; end: 100be49af; +[SDMTiming descriptor] */

void FUN_100be4948(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8e10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1a50,
                        &PTR____CFConstantStringClassReference_110f76458,&PTR_DAT_1133c8398,
                        &PTR_DAT_1133c83b0,7,0x30,0x1c);
    puRam00000001137f8e10 = puVar1;
  }
  return;
}



/* Entry: 100be49b0; end: 100be4c63; -[SCNMessagingMessage medias] */

void FUN_100be49b0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  lVar1 = param_1;
  func_0x000107c61134(param_1,&UNK_10f45a104);
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = param_1;
    func_0x000107c4051c();
    func_0x000107c61180();
    lVar3 = param_1;
    func_0x000107c4cda8();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c4fe40();
    func_0x000107c61180();
    lVar5 = param_1;
    func_0x000107c4cda8();
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c4b814();
    func_0x000107c61180();
    lVar7 = param_1;
    func_0x000107c4cda8();
    func_0x000107c61180();
    lVar8 = lVar7;
    func_0x000107c5c938();
    func_0x000107c61180();
    lVar9 = param_1;
    func_0x000107c4ce20();
    func_0x000107c61180();
    lVar10 = lVar9;
    func_0x000107c4e8c4();
    func_0x000107c61180();
    lVar11 = param_1;
    func_0x000107c41800();
    func_0x000107c61180();
    lVar12 = lVar11;
    func_0x000107c40674();
    func_0x000107c61180();
    lVar13 = lVar12;
    func_0x000107c5cb4c();
    func_0x000107c61180();
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar14 = param_1;
    func_0x000107c41800();
    func_0x000107c61180();
    func_0x000107c4cdc4();
    func_0x000107c4d968();
    func_0x000107c61180();
    puVar16 = puVar15;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    lVar17 = param_1;
    func_0x000107c4cde8(param_1);
    func_0x000107c61180();
    lVar18 = param_1;
    func_0x000107c4cde0(param_1);
    func_0x000107c61180();
    lVar19 = param_1;
    func_0x000107c4ce20(param_1);
    func_0x000107c61180();
    lVar20 = lVar19;
    func_0x000107c516d4();
    func_0x000107c61180();
    lVar21 = lVar20;
    func_0x000107c40808();
    lVar1 = lVar2;
    FUN_100be4d64(lVar2,lVar4,lVar6,lVar8,lVar10,lVar17,lVar18,lVar21 != 0);
    func_0x000107c61180();
    func_0x000107c61170(lVar20);
    func_0x000107c61170(lVar19);
    func_0x000107c61170(lVar18);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61188(param_1,&UNK_10f45a104,lVar1,0x301);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100be4c64; end: 100be4c6b; -[SCNMessagingMessageContent remoteMediaReferences] */

undefined8 FUN_100be4c64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100be4c6c; end: 100be4c73; -[SCNMessagingMessageContent localMediaReferences] */

undefined8 FUN_100be4c6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100be4c74; end: 100be4c7b; -[SCNMessagingMessageContent thumbnailIndexLists] */

undefined8 FUN_100be4c74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100be4c7c; end: 100be4c83; -[SCNMessagingMessage metadata] */

undefined8 FUN_100be4c7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100be4c84; end: 100be4c8b; -[SCNMessagingMessageMetadata playableSnapState] */

undefined8 FUN_100be4c84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 100be4c8c; end: 100be4c93; -[SCNMessagingMessageDescriptor conversationId] */

undefined8 FUN_100be4c8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100be4c94; end: 100be4ceb; -[SCNMessagingMessage messageTimestamp] */

void FUN_100be4c94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c4ce20();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c40c30();
  func_0x000107c41348(puVar2,param_2,uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100be4cec; end: 100be4d0f; -[SCNMessagingMessageMetadata createdAt] */

undefined8 FUN_100be4cec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 100be4d10; end: 100be4d53; -[SCNMessagingMessage messageSender] */

void FUN_100be4d10(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c51f08();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5cb4c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100be4d54; end: 100be4d5b; -[SCNMessagingMessage senderId] */

undefined8 FUN_100be4d54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100be4d5c; end: 100be4d63; -[SCNMessagingMessageMetadata savedBy] */

undefined8 FUN_100be4d5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100be4d64; end: 100be58bb;  */

undefined *
FUN_100be4d64(undefined *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,ulong param_8)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puVar3 = param_1;
  FUN_100be58bc();
  uVar4 = param_3;
  func_0x000107c43518();
  func_0x000107c61180();
  puVar5 = param_1;
  func_0x000107c404a8();
  puVar14 = (undefined *)0x0;
  iVar2 = (int)puVar5;
  puVar5 = param_1;
  if (iVar2 < 7) {
    if (iVar2 < 5) {
      if (iVar2 == 3) {
        func_0x000107c42ca4(param_1);
        func_0x000107c61180();
        puVar14 = puVar5;
        func_0x000107d5f7fc();
        func_0x000107c61180();
        goto LAB_100be5838;
      }
      if (iVar2 == 4) {
        puVar14 = param_1;
        func_0x000107c5bd58();
        func_0x000107c61180();
        lVar6 = param_2;
        func_0x000107c43638(param_2);
        func_0x000107c61180();
        uVar11 = uVar4;
        func_0x000107c43638(uVar4);
        func_0x000107c61180();
        puVar5 = puVar14;
        func_0x000107d5fb98(puVar14,lVar6,uVar11,puVar3,param_6,param_7);
        func_0x000107c61180();
        func_0x000107c61170(uVar11);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(puVar14);
        puVar14 = PTR____NSArray0__struct_11034ab48;
        if (puVar5 != (undefined *)0x0) {
          puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
          func_0x000107c61180();
        }
        func_0x000107c61170(puVar5);
      }
    }
    else {
      if (iVar2 == 5) {
        func_0x000107c5a934(param_1);
        func_0x000107c61180();
        puVar14 = puVar5;
        func_0x000107d5fd4c();
        func_0x000107c61180();
        goto LAB_100be5838;
      }
      if (iVar2 == 6) {
        puVar14 = param_1;
        func_0x000107c4d784();
        func_0x000107c61180();
        puVar5 = puVar14;
        func_0x000107c4d788();
        func_0x000107c61170(puVar14);
        if ((int)puVar5 == 1) {
          puVar5 = param_1;
          func_0x000107c4d784();
          func_0x000107c61180();
          lVar6 = param_2;
          func_0x000107c43638();
          func_0x000107c61180();
          uVar11 = uVar4;
          func_0x000107c43638(uVar4);
          func_0x000107c61180();
          puVar10 = puVar5;
          func_0x000107d5fa60(puVar5,lVar6,uVar11,puVar3,param_6,param_7);
          func_0x000107c61180();
          puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
          func_0x000107c61180();
          func_0x000107c61170(puVar10);
          func_0x000107c61170(uVar11);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(puVar5);
        }
        else {
          puVar14 = (undefined *)0x0;
        }
      }
    }
  }
  else {
    if (0x12 < iVar2) {
      if (iVar2 == 0x13) {
        func_0x000107c5caa8();
        func_0x000107c61180();
        puVar3 = puVar5;
        func_0x000107c5b524();
        func_0x000107c61180();
      }
      else {
        if (iVar2 != 0x14) goto LAB_100be583c;
        func_0x000107c4c3c4();
        func_0x000107c61180();
        puVar3 = puVar5;
        func_0x000107c5c910();
        func_0x000107c61180();
      }
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
      func_0x000107c61180();
      puVar14 = puVar10;
      func_0x000107d5f58c();
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar3);
      goto LAB_100be5838;
    }
    if (iVar2 != 7) {
      if (iVar2 == 0xb) {
        func_0x000107c49820();
        puVar5 = PTR_PTR_1126d7a78;
        puVar14 = param_1;
        func_0x000107c5b524(param_1);
        func_0x000107c61180();
        lVar6 = param_2;
        func_0x000107c43638(param_2);
        func_0x000107c61180();
        uVar11 = uVar4;
        func_0x000107c43638(uVar4);
        func_0x000107c61180();
        lVar7 = param_4;
        func_0x000107c43638(param_4);
        func_0x000107c61180();
        puVar10 = puVar14;
        FUN_100be5bbc(puVar14,lVar6,uVar11,lVar7,puVar3,param_6,param_7,param_8,0);
        func_0x000107c61180();
        func_0x000107c3f8a8();
        func_0x000107c61180();
        func_0x000107c61170(puVar10);
        func_0x000107c61170(lVar7);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(puVar14);
        func_0x000107c5e69c(puVar5);
        func_0x000107c611b0();
        puVar3 = puVar5;
        func_0x000107c3ecc8();
        func_0x000107c61180();
        puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar5);
      }
      goto LAB_100be583c;
    }
    func_0x000107c5b3c0();
    func_0x000107c61180();
    func_0x000107c61174();
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c61174(param_7);
    puVar14 = PTR____NSArray0__struct_11034ab48;
    if (puVar5 != (undefined *)0x0) {
      func_0x000107c61174(param_4);
      lVar6 = param_2;
      func_0x000107c4d2d4();
      lVar7 = param_4;
      func_0x000107c4d2d4();
      func_0x000107c61170(param_4);
      lVar8 = lVar6;
      func_0x000107c40808();
      if (lVar8 != 0) {
        func_0x000107c4ff84(lVar6);
      }
      lVar8 = lVar7;
      func_0x000107c40808();
      if (lVar8 != 0) {
        func_0x000107c4ff84(lVar7);
      }
      puVar10 = puVar5;
      func_0x000107c501d4();
      puVar14 = PTR____NSArray0__struct_11034ab48;
      iVar2 = (int)puVar10;
      puVar10 = puVar5;
      if (iVar2 < 0xe) {
        if (iVar2 == 0xc) {
          func_0x000107c501e0(puVar5);
          func_0x000107c61180();
          puVar14 = puVar10;
          func_0x000107d5f7fc();
          func_0x000107c61180();
          goto LAB_100be5788;
        }
        if (iVar2 == 0xd) {
          func_0x000107c5020c();
          func_0x000107c61180();
          lVar8 = lVar6;
          func_0x000107c43638(lVar6);
          func_0x000107c61180();
          uVar11 = param_3;
          func_0x000107c43638(param_3);
          func_0x000107c61180();
          puVar12 = puVar10;
          func_0x000107d5fb98(puVar10,lVar8,uVar11,puVar3,param_6,param_7);
          func_0x000107c61180();
          func_0x000107c61170(uVar11);
          func_0x000107c61170(lVar8);
          func_0x000107c61170(puVar10);
          if (puVar12 != (undefined *)0x0) {
            puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
            func_0x000107c61180();
          }
          func_0x000107c61170(puVar12);
        }
      }
      else {
        if (iVar2 == 0xe) {
          func_0x000107c50204(puVar5);
          func_0x000107c61180();
          puVar14 = puVar10;
          func_0x000107d5fd4c();
          func_0x000107c61180();
        }
        else {
          if (iVar2 != 0xf) {
            if (iVar2 == 0x11) {
              func_0x000107c49820();
              puVar10 = PTR_PTR_1126d7a78;
              puVar14 = puVar5;
              func_0x000107c50208(puVar5);
              func_0x000107c61180();
              lVar8 = lVar6;
              func_0x000107c43638(lVar6);
              func_0x000107c61180();
              uVar11 = param_3;
              func_0x000107c43638(param_3);
              func_0x000107c61180();
              lVar9 = lVar7;
              func_0x000107c43638(lVar7);
              func_0x000107c61180();
              puVar12 = puVar14;
              FUN_100be5bbc(puVar14,lVar8,uVar11,lVar9,puVar3,param_6,param_7,param_8 & 0xffffffff,0
                           );
              func_0x000107c61180();
              func_0x000107c3f8a8();
              func_0x000107c61180();
              func_0x000107c61170(puVar12);
              func_0x000107c61170(lVar9);
              func_0x000107c61170(uVar11);
              func_0x000107c61170(lVar8);
              func_0x000107c61170(puVar14);
              func_0x000107c5e69c(puVar10);
              func_0x000107c611b0();
              puVar3 = puVar10;
              func_0x000107c3ecc8();
              func_0x000107c61180();
              puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
              func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
              func_0x000107c61180();
              func_0x000107c61170(puVar3);
              func_0x000107c61170(puVar10);
            }
            goto LAB_100be57f8;
          }
          puVar14 = puVar5;
          func_0x000107c501f0();
          func_0x000107c61180();
          lVar8 = lVar6;
          func_0x000107c43638(lVar6);
          func_0x000107c61180();
          uVar11 = param_3;
          func_0x000107c43638(param_3);
          func_0x000107c61180();
          puVar10 = puVar14;
          func_0x000107d5fa60(puVar14,lVar8,uVar11,puVar3,param_6,param_7);
          func_0x000107c61180();
          func_0x000107c61170(uVar11);
          func_0x000107c61170(lVar8);
          func_0x000107c61170(puVar14);
          puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
          func_0x000107c61180();
        }
LAB_100be5788:
        func_0x000107c61170(puVar10);
      }
LAB_100be57f8:
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar6);
    }
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_3);
    func_0x000107c61170(puVar5);
LAB_100be5838:
    func_0x000107c61170(puVar5);
  }
LAB_100be583c:
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
    return puVar14;
  }
  func_0x000107c60e78();
  func_0x000107c61174();
  puVar3 = param_1;
  func_0x000107c404a8();
  puVar14 = (undefined *)0x1;
  puVar5 = param_1;
  switch((ulong)puVar3 & 0xffffffff) {
  case 0:
  case 9:
  case 0xd:
  case 0x10:
  case 0x11:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x19:
  case 0x1a:
    goto code_r0x000100be5904;
  case 3:
    puVar14 = param_1;
    func_0x000107c42ca4();
    func_0x000107c61180();
    puVar5 = puVar14;
    func_0x000107c5b528();
    func_0x000107c61170(puVar14);
code_r0x000100be5998:
    puVar14 = (undefined *)0xa;
    if (puVar5 < (undefined *)0x2) {
      puVar14 = (undefined *)0xb;
    }
    break;
  case 4:
    func_0x000107c5bd58();
    func_0x000107c61180();
    puVar14 = puVar5;
    func_0x000107c5bdb0();
    uVar1 = (int)puVar14 - 1;
    if (uVar1 < 3) {
      puVar14 = *(undefined **)(&UNK_10dee6728 + (ulong)uVar1 * 8);
    }
    else {
      puVar14 = (undefined *)0x0;
    }
    goto code_r0x000100be59d0;
  case 5:
    func_0x000107c5a934(param_1);
    func_0x000107c61180();
    puVar14 = puVar5;
    func_0x000107d60768();
    goto code_r0x000100be59d0;
  case 6:
    func_0x000107c4d784();
    func_0x000107c61180();
    puVar3 = puVar5;
    func_0x000107c4d788();
    puVar14 = (undefined *)0x0;
    if (((ulong)puVar3 & 0xfffffffd) != 0) {
      puVar14 = (undefined *)0x8;
    }
    goto code_r0x000100be59d0;
  case 7:
    puVar14 = param_1;
    func_0x000107c5b3c0();
    func_0x000107c61180();
    puVar3 = puVar14;
    func_0x000107c501d4();
    func_0x000107c61170(puVar14);
    iVar2 = (int)puVar3;
    if (iVar2 < 0xe) {
      if (iVar2 == 0xb) {
        puVar14 = (undefined *)0x1;
        break;
      }
      if (iVar2 == 0xc) {
        puVar14 = param_1;
        func_0x000107c5b3c0();
        func_0x000107c61180();
        puVar3 = puVar14;
        func_0x000107c501e0();
        func_0x000107c61180();
        puVar5 = puVar3;
        func_0x000107c5b528();
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar14);
        goto code_r0x000100be5998;
      }
      if (iVar2 == 0xd) {
        func_0x000107c5b3c0();
        func_0x000107c61180();
        puVar3 = puVar5;
        func_0x000107c5020c();
        func_0x000107c61180();
        puVar14 = puVar3;
        func_0x000107c5bdb0();
        uVar1 = (int)puVar14 - 1;
        if (uVar1 < 3) {
          puVar14 = *(undefined **)(&UNK_10dee6728 + (ulong)uVar1 * 8);
        }
        else {
          puVar14 = (undefined *)0x0;
        }
        goto code_r0x000100be5bb0;
      }
    }
    else {
      if (iVar2 < 0x11) {
        if (iVar2 == 0xe) {
          func_0x000107c5b3c0(param_1);
          func_0x000107c61180();
          puVar3 = puVar5;
          func_0x000107c50204();
          func_0x000107c61180();
          puVar14 = puVar3;
          func_0x000107d60768();
        }
        else {
          if (iVar2 != 0xf) goto code_r0x000100be5904;
          func_0x000107c5b3c0();
          func_0x000107c61180();
          puVar3 = puVar5;
          func_0x000107c501f0();
          func_0x000107c61180();
          puVar10 = puVar3;
          func_0x000107c4d788();
          puVar14 = (undefined *)0x0;
          if (((ulong)puVar10 & 0xfffffffd) != 0) {
            puVar14 = (undefined *)0x8;
          }
        }
code_r0x000100be5bb0:
        func_0x000107c61170(puVar3);
        goto code_r0x000100be59d0;
      }
      if (iVar2 == 0x11) goto code_r0x000100be5b10;
      if (iVar2 == 0x17) {
        puVar14 = (undefined *)0x2b;
        break;
      }
    }
    goto code_r0x000100be5904;
  case 8:
    func_0x000107c5bd28(param_1);
    func_0x000107c61180();
    puVar14 = puVar5;
    func_0x000107d60a88();
code_r0x000100be59d0:
    func_0x000107c61170(puVar5);
    break;
  case 0xb:
code_r0x000100be5b10:
    puVar14 = (undefined *)0x10;
    break;
  case 0xc:
    puVar14 = (undefined *)0x19;
    break;
  case 0xe:
    puVar14 = (undefined *)0x1c;
    break;
  case 0xf:
    puVar14 = (undefined *)0x1d;
    break;
  case 0x12:
    puVar14 = (undefined *)0x27;
    break;
  case 0x13:
    puVar14 = (undefined *)0x26;
    break;
  case 0x14:
    puVar14 = (undefined *)0x28;
    break;
  case 0x18:
    puVar14 = (undefined *)0x2c;
  }
LAB_100be5b14:
  func_0x000107c61170(param_1);
  return puVar14;
code_r0x000100be5904:
  puVar14 = (undefined *)0x0;
  goto LAB_100be5b14;
}



/* Entry: 100be58bc; end: 100be5bbb;  */

ulong FUN_100be58bc(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  
  func_0x000107c61174();
  uVar2 = param_1;
  func_0x000107c404a8();
  uVar6 = 1;
  uVar3 = param_1;
  switch(uVar2 & 0xffffffff) {
  case 0:
  case 9:
  case 0xd:
  case 0x10:
  case 0x11:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x19:
  case 0x1a:
    goto code_r0x000100be5904;
  case 3:
    uVar6 = param_1;
    func_0x000107c42ca4();
    func_0x000107c61180();
    uVar3 = uVar6;
    func_0x000107c5b528();
    func_0x000107c61170(uVar6);
code_r0x000100be5998:
    uVar6 = 10;
    if (uVar3 < 2) {
      uVar6 = 0xb;
    }
    break;
  case 4:
    func_0x000107c5bd58();
    func_0x000107c61180();
    uVar6 = uVar3;
    func_0x000107c5bdb0();
    uVar1 = (int)uVar6 - 1;
    if (uVar1 < 3) {
      uVar6 = *(ulong *)(&UNK_10dee6728 + (ulong)uVar1 * 8);
    }
    else {
      uVar6 = 0;
    }
    goto code_r0x000100be59d0;
  case 5:
    func_0x000107c5a934(param_1);
    func_0x000107c61180();
    uVar6 = uVar3;
    func_0x000107d60768();
    goto code_r0x000100be59d0;
  case 6:
    func_0x000107c4d784();
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x000107c4d788();
    uVar6 = 0;
    if ((uVar2 & 0xfffffffd) != 0) {
      uVar6 = 8;
    }
    goto code_r0x000100be59d0;
  case 7:
    uVar6 = param_1;
    func_0x000107c5b3c0();
    func_0x000107c61180();
    uVar2 = uVar6;
    func_0x000107c501d4();
    func_0x000107c61170(uVar6);
    iVar5 = (int)uVar2;
    if (iVar5 < 0xe) {
      if (iVar5 == 0xb) {
        uVar6 = 1;
        break;
      }
      if (iVar5 == 0xc) {
        uVar6 = param_1;
        func_0x000107c5b3c0();
        func_0x000107c61180();
        uVar2 = uVar6;
        func_0x000107c501e0();
        func_0x000107c61180();
        uVar3 = uVar2;
        func_0x000107c5b528();
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar6);
        goto code_r0x000100be5998;
      }
      if (iVar5 == 0xd) {
        func_0x000107c5b3c0();
        func_0x000107c61180();
        uVar2 = uVar3;
        func_0x000107c5020c();
        func_0x000107c61180();
        uVar6 = uVar2;
        func_0x000107c5bdb0();
        uVar1 = (int)uVar6 - 1;
        if (uVar1 < 3) {
          uVar6 = *(ulong *)(&UNK_10dee6728 + (ulong)uVar1 * 8);
        }
        else {
          uVar6 = 0;
        }
        goto code_r0x000100be5bb0;
      }
    }
    else {
      if (iVar5 < 0x11) {
        if (iVar5 == 0xe) {
          func_0x000107c5b3c0(param_1);
          func_0x000107c61180();
          uVar2 = uVar3;
          func_0x000107c50204();
          func_0x000107c61180();
          uVar6 = uVar2;
          func_0x000107d60768();
        }
        else {
          if (iVar5 != 0xf) goto code_r0x000100be5904;
          func_0x000107c5b3c0();
          func_0x000107c61180();
          uVar2 = uVar3;
          func_0x000107c501f0();
          func_0x000107c61180();
          uVar4 = uVar2;
          func_0x000107c4d788();
          uVar6 = 0;
          if ((uVar4 & 0xfffffffd) != 0) {
            uVar6 = 8;
          }
        }
code_r0x000100be5bb0:
        func_0x000107c61170(uVar2);
        goto code_r0x000100be59d0;
      }
      if (iVar5 == 0x11) goto code_r0x000100be5b10;
      if (iVar5 == 0x17) {
        uVar6 = 0x2b;
        break;
      }
    }
    goto code_r0x000100be5904;
  case 8:
    func_0x000107c5bd28(param_1);
    func_0x000107c61180();
    uVar6 = uVar3;
    func_0x000107d60a88();
code_r0x000100be59d0:
    func_0x000107c61170(uVar3);
    break;
  case 0xb:
code_r0x000100be5b10:
    uVar6 = 0x10;
    break;
  case 0xc:
    uVar6 = 0x19;
    break;
  case 0xe:
    uVar6 = 0x1c;
    break;
  case 0xf:
    uVar6 = 0x1d;
    break;
  case 0x12:
    uVar6 = 0x27;
    break;
  case 0x13:
    uVar6 = 0x26;
    break;
  case 0x14:
    uVar6 = 0x28;
    break;
  case 0x18:
    uVar6 = 0x2c;
  }
LAB_100be5b14:
  func_0x000107c61170(param_1);
  return uVar6;
code_r0x000100be5904:
  uVar6 = 0;
  goto LAB_100be5b14;
}



/* Entry: 100be5bbc; end: 100be6ec3;  */

void FUN_100be5bbc(ulong param_1,long param_2,long param_3,long param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,int param_8,char param_9)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puVar2 = PTR_PTR_1126d7a78;
  func_0x000107c610fc(PTR_PTR_1126d7a78);
  func_0x000107c5e6c8();
  func_0x000107c611b0();
  func_0x000107c5e6d0(puVar2);
  func_0x000107c611b0();
  func_0x000107c5e6cc(puVar2);
  func_0x000107c611b0();
  lVar25 = param_2;
  func_0x000107c4ca0c();
  func_0x000107c61180();
  lVar3 = lVar25;
  func_0x000107c40808();
  func_0x000107c61170(lVar25);
  uVar4 = param_1;
  func_0x000107c44a2c();
  if ((int)uVar4 == 0) goto LAB_100be6490;
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar2);
  func_0x000107c61174(param_6);
  uVar4 = param_1;
  func_0x000107c4e8d8();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c4e8ec();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  uVar4 = uVar5;
  func_0x000107c420f4();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)uVar4 == 0) {
    uVar4 = param_1;
    func_0x000107c42400();
    func_0x000107c61180();
    uVar24 = param_1;
    func_0x000107c4e8d8();
    func_0x000107c61180();
    uVar6 = param_5;
    func_0x000107c307f0();
    func_0x000107c61180();
    func_0x000107c51804(puVar7);
    func_0x000107c61180();
    func_0x000107c50228(uRam00000001138473b0);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar4);
  }
  else if ((int)uVar4 == 6) {
    func_0x000107c5e5d8(puVar2);
    func_0x000107c611b0();
  }
  func_0x000107c61170(uVar5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  uVar4 = param_1;
  func_0x000107c4e8d8();
  func_0x000107c61180();
  uVar5 = param_1;
  func_0x000107c44b30();
  iVar1 = (int)uVar5;
  uVar24 = param_1;
  if ((param_3 == 0) && (lVar3 == 0)) {
    if (iVar1 == 0) {
      uVar24 = 0;
    }
    else {
      func_0x000107c5b6dc();
      func_0x000107c61180();
    }
    uVar5 = param_1;
    func_0x000107c448c0(param_1);
    func_0x000107c61174(uVar4);
    func_0x000107c61174(uVar24);
    func_0x000107c61174(puVar2);
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uVar6 = uVar4;
    func_0x000107c4e928();
    func_0x000107c61180();
    uVar18 = uVar6;
    func_0x000107c4080c();
    if (uVar18 != 0) {
      lVar25 = *plStack_130;
      do {
        uVar27 = 0;
        do {
          if (*plStack_130 != lVar25) {
            func_0x000107c61128(uVar6);
          }
          uVar22 = *(undefined8 *)(lStack_138 + uVar27 * 8);
          uVar15 = uVar22;
          func_0x000107c4abb4();
          if ((int)uVar15 == 1) {
            func_0x000107c4c930(uVar22);
            func_0x000107c61180();
            uVar15 = uVar22;
            func_0x000107c5d0f0();
            uVar8 = uVar4;
            func_0x000107c4e8ec(uVar4);
            func_0x000107c61180();
            uVar9 = uVar8;
            func_0x000107c44b24();
            FUN_100be7374(uVar15,uVar24,uVar9,uVar5,puVar2);
            func_0x000107c61170(uVar8);
            func_0x000107c61170(uVar22);
          }
          uVar27 = uVar27 + 1;
        } while (uVar18 != uVar27);
        uVar18 = uVar6;
        func_0x000107c4080c();
      } while (uVar18 != 0);
    }
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar4);
    if (iVar1 != 0) {
LAB_100be647c:
      func_0x000107c61170(uVar24);
    }
  }
  else {
    if (iVar1 == 0) {
      uVar24 = 0;
    }
    else {
      func_0x000107c5b6dc(param_1);
      func_0x000107c61180();
    }
    func_0x000107c448c0();
    func_0x000107c61174(uVar4);
    func_0x000107c61174(uVar24);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c61174(puVar2);
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uVar6 = uVar4;
    func_0x000107c4e928();
    func_0x000107c61180();
    uVar18 = uVar6;
    func_0x000107c4080c();
    if (uVar18 != 0) {
      lVar25 = *plStack_130;
      do {
        uVar27 = 0;
        do {
          if (*plStack_130 != lVar25) {
            func_0x000107c61128(uVar6);
          }
          puVar20 = *(undefined **)(lStack_138 + uVar27 * 8);
          puVar7 = puVar20;
          func_0x000107c4abb4();
          if ((int)puVar7 == 1) {
            func_0x000107c4c930();
            func_0x000107c61180();
            uVar8 = uVar4;
            func_0x000107c4e8ec();
            func_0x000107c61180();
            func_0x000107c44b24();
            uVar9 = uVar4;
            func_0x000107c4e8ec();
            func_0x000107c61180();
            func_0x000107c4238c();
            func_0x000107c61174(puVar2);
            func_0x000107c61174(param_3);
            func_0x000107c61174(param_2);
            func_0x000107c61174(uVar24);
            func_0x000107c61174(puVar20);
            puVar7 = puVar20;
            func_0x000107c4c99c(puVar20);
            func_0x000107c61180();
            func_0x000107c61174();
            func_0x000107c61174(param_2);
            func_0x000107c61174(param_3);
            func_0x000107c61174(puVar2);
            if (param_3 == 0) {
              func_0x000107c4c9b4(puVar7);
              FUN_100be6fac();
            }
            else {
              lVar10 = param_3;
              func_0x000107d6b108();
              func_0x000107c61180();
              if (lVar10 != 0) {
                func_0x000107c5e698(puVar2);
                func_0x000107c611b0();
              }
              func_0x000107c61170(lVar10);
            }
            lVar10 = param_2;
            func_0x000107c4ca0c();
            func_0x000107c61180();
            lVar17 = lVar10;
            func_0x000107c40808();
            func_0x000107c61170(lVar10);
            if (lVar17 != 0) {
              func_0x000107c4c9b4(puVar7);
              FUN_100be7240();
            }
            func_0x000107c61170(puVar2);
            func_0x000107c61170(param_3);
            func_0x000107c61170(param_2);
            func_0x000107c61170(puVar7);
            func_0x000107c61170(param_3);
            func_0x000107c61170(param_2);
            func_0x000107c61170(puVar7);
            func_0x000107c5d0f0(puVar20);
            FUN_100be7374();
            func_0x000107c61170(uVar24);
            func_0x000107c4e080(puVar20);
            func_0x000107c61174(puVar20);
            func_0x000107c61174(puVar2);
            puVar7 = puVar20;
            func_0x000107c44850();
            if ((int)puVar7 == 0) {
              puVar7 = puVar20;
              func_0x000107c427c8();
              func_0x000107c61180();
              puVar11 = puVar7;
              func_0x000107c4a8c4();
              func_0x000107c61180();
              puVar12 = puVar11;
              func_0x000107c61178();
              func_0x000107c3eea8();
              func_0x000107c61170(puVar11);
              func_0x000107c61170(puVar7);
              puVar7 = (undefined *)0x0;
              if (puVar12 != (undefined *)0x0) {
                puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
                func_0x000107c61180();
              }
            }
            else {
              puVar11 = puVar20;
              func_0x000107c427cc(puVar20);
              func_0x000107c61180();
              puVar12 = puVar11;
              func_0x000107c4a8c4();
              func_0x000107c61180();
              puVar7 = puVar12;
              func_0x000107c3e680();
              func_0x000107c61180();
              func_0x000107c61170(puVar12);
              func_0x000107c61170(puVar11);
            }
            func_0x000107c5e61c(puVar2);
            func_0x000107c611b0();
            func_0x000107c61170(puVar7);
            func_0x000107c61174(puVar20);
            puVar7 = puVar20;
            func_0x000107c44850();
            if ((int)puVar7 == 0) {
              puVar7 = puVar20;
              func_0x000107c427c8();
              func_0x000107c61180();
              func_0x000107c61170(puVar20);
              puVar11 = puVar7;
              func_0x000107c4a804();
              func_0x000107c61180();
              puVar12 = puVar11;
              func_0x000107c61178();
              func_0x000107c3eea8();
              func_0x000107c61170(puVar11);
              func_0x000107c61170(puVar7);
              puVar7 = (undefined *)0x0;
              if (puVar12 != (undefined *)0x0) {
                puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
                func_0x000107c61180();
              }
            }
            else {
              puVar11 = puVar20;
              func_0x000107c427cc(puVar20);
              func_0x000107c61180();
              func_0x000107c61170(puVar20);
              puVar12 = puVar11;
              func_0x000107c4a804(puVar11);
              func_0x000107c61180();
              puVar7 = puVar12;
              func_0x000107c3e680();
              func_0x000107c61180();
              func_0x000107c61170(puVar12);
              func_0x000107c61170(puVar11);
            }
            func_0x000107c5e618(puVar2);
            func_0x000107c611b0();
            func_0x000107c61170(puVar7);
            func_0x000107c61170(puVar2);
            func_0x000107c61170(puVar20);
            puVar11 = puVar20;
            func_0x000107c41e40(puVar20);
            func_0x000107c61180();
            func_0x000107c61174(puVar2);
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c61174(puVar11);
            func_0x000107c44d98(puVar11);
            func_0x000107c4d970(puVar7);
            func_0x000107c61180();
            func_0x000107c5e598(puVar2);
            func_0x000107c611b0();
            func_0x000107c61170(puVar7);
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c5e304(puVar11);
            func_0x000107c61170(puVar11);
            func_0x000107c4d970(puVar7);
            func_0x000107c61180();
            func_0x000107c5e898(puVar2);
            func_0x000107c611b0();
            func_0x000107c61170(puVar7);
            func_0x000107c61170(puVar2);
            func_0x000107c61170(puVar11);
            puVar7 = puVar20;
            func_0x000107c4c978();
            func_0x000107c61170(puVar20);
            func_0x000107c61174(puVar2);
            if ((int)puVar7 != 0) {
              func_0x000107c4cec4((double)((ulong)puVar7 & 0xffffffff),PTR_PTR_1126afec0);
            }
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c4d954(PTR__OBJC_CLASS___NSNumber_1126ae570);
            func_0x000107c61180();
            func_0x000107c5e520(puVar2);
            func_0x000107c611b0();
            func_0x000107c61170(puVar7);
            func_0x000107c61170(puVar2);
            func_0x000107c61170(puVar2);
            func_0x000107c61170(uVar9);
            func_0x000107c61170(uVar8);
            func_0x000107c61170(puVar20);
          }
          uVar27 = uVar27 + 1;
        } while (uVar18 != uVar27);
        uVar18 = uVar6;
        func_0x000107c4080c();
      } while (uVar18 != 0);
    }
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar4);
    if ((uVar5 & 1) != 0) goto LAB_100be647c;
  }
  func_0x000107c61170(uVar4);
LAB_100be6490:
  if ((param_5 < 0x11) && ((1L << (param_5 & 0x3f) & 0x10c04U) != 0)) {
    puVar7 = puVar2;
    func_0x000107c3ecc8(puVar2);
    func_0x000107c61180();
    puVar20 = puVar7;
    func_0x000107c4c99c();
    func_0x000107c61180();
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c61174(puVar20);
    if (((param_3 == 0) &&
        (((param_5 != 0x10 || (param_8 != 0)) &&
         (uVar4 = param_1, func_0x000107c44a2c(), (int)uVar4 != 0)))) &&
       (uVar4 = param_1, func_0x000107c448c0(), (uVar4 & 1) == 0)) {
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      uVar4 = param_1;
      func_0x000107c4e8d8();
      func_0x000107c61180();
      uVar5 = uVar4;
      func_0x000107c4e928();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      uVar4 = uVar5;
      func_0x000107c4080c();
      if (uVar4 != 0) {
        lVar25 = *plStack_130;
        do {
          uVar24 = 0;
          do {
            if (*plStack_130 != lVar25) {
              func_0x000107c61128(uVar5);
            }
            uVar18 = *(ulong *)(lStack_138 + uVar24 * 8);
            uVar6 = uVar18;
            func_0x000107c4abb4();
            if ((int)uVar6 == 1) {
              func_0x000107c4c930();
              func_0x000107c61180();
              uVar6 = uVar18;
              func_0x000107c44c20();
              puVar11 = PTR_PTR_1126ba150;
              if ((int)uVar6 == 0) {
                uVar6 = uVar18;
                func_0x000107c448e4();
                if ((uVar6 & 1) == 0) {
                  uVar6 = uVar18;
                  func_0x000107c5d0f0();
                  iVar1 = (int)uVar6;
                  if (1 < iVar1 - 2U) {
                    if (iVar1 == 0) {
                      uVar6 = uVar18;
                      func_0x000107c4c99c();
                      func_0x000107c61180();
                      uVar27 = uVar6;
                      func_0x000107c4c9b4();
                      func_0x000107d62b2c();
                      func_0x000107c61180();
                      func_0x000107c61170(uVar6);
                      uVar6 = uVar27;
                      func_0x000107c4ca5c();
                      if ((uVar6 != 3) && (uVar6 = uVar27, func_0x000107c4ca5c(), uVar6 != 9)) {
                        uVar6 = uVar27;
                        func_0x000107c5dd8c();
                        func_0x000107c61180();
                        func_0x000107c61170();
                        if (uVar6 == 0) {
                          uVar6 = uVar27;
                          func_0x000107c4ca5c();
                          if (uVar6 != 2) {
                            func_0x000107c4ca5c(uVar27);
                          }
                          func_0x000107c61170(uVar27);
                          goto LAB_100be6da0;
                        }
                      }
                      func_0x000107c61170(uVar27);
                      goto LAB_100be6ea4;
                    }
                    if (iVar1 == 1) goto LAB_100be6ea4;
                  }
                }
              }
              else {
                uVar6 = uVar18;
                func_0x000107c5dd50();
                func_0x000107c61180();
                func_0x000107c3fccc();
                func_0x000107c61170(uVar6);
                func_0x000107c42254();
                if (((ulong)puVar11 & 1) != 0) {
LAB_100be6ea4:
                  func_0x000107c61170(uVar18);
                  goto LAB_100be6eb4;
                }
              }
LAB_100be6da0:
              func_0x000107c61170(uVar18);
            }
            uVar24 = uVar24 + 1;
          } while (uVar4 != uVar24);
          uVar4 = uVar5;
          func_0x000107c4080c();
        } while (uVar4 != 0);
      }
LAB_100be6eb4:
      func_0x000107c61170(uVar5);
    }
    func_0x000107c61170(puVar20);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    func_0x000107c5e79c(puVar2);
    func_0x000107c611b0();
    func_0x000107c61170(puVar20);
    func_0x000107c61170(puVar7);
  }
  uVar4 = param_1;
  FUN_100be7cfc();
  func_0x000107c61180();
  if (uVar4 != 0) {
    func_0x000107c5e7d4(puVar2);
    func_0x000107c611b0();
  }
  uVar5 = param_1;
  func_0x000107c44b30();
  if ((int)uVar5 != 0) {
    uVar5 = param_1;
    func_0x000107c5b6dc(param_1);
    func_0x000107c61180();
    func_0x000107c50900();
    func_0x000107c5e76c(puVar2);
    func_0x000107c611b0();
    func_0x000107c61170(uVar5);
  }
  if (param_9 != '\0') {
    func_0x000107c61174(param_2);
    func_0x000107c61174(puVar2);
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lVar25 = param_2;
    func_0x000107c4ca0c();
    func_0x000107c61180();
    lVar10 = lVar25;
    func_0x000107c4080c();
    if (lVar10 == 0) {
      lVar23 = 0;
      lVar17 = 0;
    }
    else {
      lVar23 = 0;
      lVar17 = 0;
      lVar21 = *plStack_130;
      do {
        lVar26 = 0;
        do {
          if (*plStack_130 != lVar21) {
            func_0x000107c61128(lVar25);
          }
          lVar19 = *(long *)(lStack_138 + lVar26 * 8);
          lVar13 = lVar19;
          func_0x000107c4ce4c();
          func_0x000107c61180();
          lVar14 = lVar13;
          func_0x000107c49820();
          func_0x000107c61170(lVar13);
          if (lVar14 == 2) {
            func_0x000107d614dc(lVar19);
            func_0x000107c61180();
            lVar13 = lVar23;
LAB_100be66cc:
            func_0x000107c61170(lVar13);
            lVar23 = lVar19;
          }
          else if (lVar14 == 1) {
            func_0x000107d614dc();
            func_0x000107c61180();
            lVar13 = lVar17;
            lVar17 = lVar19;
            lVar19 = lVar23;
            goto LAB_100be66cc;
          }
          lVar26 = lVar26 + 1;
        } while (lVar10 != lVar26);
        lVar10 = lVar25;
        func_0x000107c4080c();
      } while (lVar10 != 0);
    }
    func_0x000107c61170(lVar25);
    func_0x000107c5e704(puVar2);
    func_0x000107c611b0();
    func_0x000107c5e70c(puVar2);
    func_0x000107c611b0();
    lVar25 = lVar17;
    func_0x000107c4adac();
    if (lVar25 != 0) {
      func_0x000107c5e5bc(puVar2);
      func_0x000107c611b0();
    }
    func_0x000107c61170(lVar23);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(param_2);
  }
  if (lVar3 != 0) {
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_2);
    func_0x000107c61174(puVar2);
    if (param_4 != 0) {
      lVar25 = param_4;
      func_0x000107c45368();
      func_0x000107c61180();
      lVar3 = lVar25;
      func_0x000107c40808();
      func_0x000107c61170(lVar25);
      if (lVar3 != 0) {
        lVar25 = param_4;
        func_0x000107c45368(param_4);
        func_0x000107c61180();
        lVar3 = lVar25;
        func_0x000107c43638();
        func_0x000107c61180();
        func_0x000107c5d388();
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar25);
        lVar25 = param_2;
        func_0x000107c4ca0c(param_2);
        func_0x000107c61180();
        lVar3 = lVar25;
        func_0x000107c4d9a4();
        func_0x000107c61180();
        func_0x000107c61170(lVar25);
        func_0x000107d62c90(lVar3,puVar2);
        func_0x000107c61170(lVar3);
      }
    }
    func_0x000107c61170(puVar2);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_4);
  }
  uVar5 = param_1;
  func_0x000107c3e324();
  func_0x000107c61180();
  func_0x000107c61174(puVar2);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uVar24 = uVar5;
  func_0x000107c3e328();
  func_0x000107c61180();
  puVar16 = &uStack_140;
  uVar6 = uVar24;
  func_0x000107c4080c();
  if (uVar6 != 0) {
    lVar25 = *plStack_130;
    do {
      uVar18 = 0;
      do {
        if (*plStack_130 != lVar25) {
          func_0x000107c61128(uVar24);
        }
        puVar20 = *(undefined **)(lStack_138 + uVar18 * 8);
        puVar7 = puVar20;
        func_0x000107c3e2f4();
        if ((int)puVar7 == 3) {
          func_0x000107c5e20c(puVar20);
          func_0x000107c61180();
          puVar7 = PTR_PTR_1126d7a80;
          func_0x000107c61174();
          func_0x000107c610f4();
          puVar11 = PTR_PTR_1126d7a88;
          func_0x000107c610f4(PTR_PTR_1126d7a88);
          puVar12 = puVar20;
          func_0x000107c3abfc(puVar20);
          func_0x000107c61180();
          func_0x000107c61170(puVar20);
          func_0x000107c495a0(puVar11);
          func_0x000107c45808();
          func_0x000107c61170(puVar11);
          func_0x000107c61170(puVar12);
          puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_f8 = puVar7;
          func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
          func_0x000107c61180();
          func_0x000107c5e7c0(puVar2);
          func_0x000107c611b0();
          func_0x000107c61170(puVar11);
LAB_100be6a10:
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar20);
        }
        else if ((int)puVar7 == 1) {
          func_0x000107c40534(puVar20);
          func_0x000107c61180();
          puVar7 = puVar20;
          func_0x000107c5dcc0();
          func_0x000107c61180();
          func_0x000107c5e878(puVar2);
          func_0x000107c611b0();
          goto LAB_100be6a10;
        }
        uVar18 = uVar18 + 1;
      } while (uVar6 != uVar18);
      puVar16 = &uStack_140;
      uVar6 = uVar24;
      func_0x000107c4080c();
    } while (uVar6 != 0);
  }
  func_0x000107c61170(uVar24);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  puVar7 = puVar2;
  func_0x000107c3ecc8(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  func_0x000107c60e78();
  *(undefined8 **)(param_1 + 0x38) = puVar16;
  return;
}



/* Entry: 100be6ec4; end: 100be6ecb; -[SCChatMediaContentBuilder withMessageBodyType:] */

void FUN_100be6ec4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 100be6ecc; end: 100be6f03; -[SCChatMediaContentBuilder withMessageTimestamp:] */

long FUN_100be6ecc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100be6f04; end: 100be6f3b; -[SCChatMediaContentBuilder withMessageSender:] */

long FUN_100be6f04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100be6f3c; end: 100be6f43; -[SCNMessagingMediaReferenceList mediaReferences] */

undefined8 FUN_100be6f3c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100be6f44; end: 100be6fab; +[SDMMediaId descriptor] */

void FUN_100be6f44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fd900 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cf7640,
                        &PTR____CFConstantStringClassReference_110f20e98,&PTR_DAT_1134000f0,
                        &PTR_DAT_113400108,1,0x10,0x1c);
    puRam00000001137fd900 = puVar1;
  }
  return;
}



/* Entry: 100be6fac; end: 100be7057;  */

/* WARNING: Possible PIC construction at 0x000100be7030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100be7040: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100be7044) */

void FUN_100be6fac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  FUN_100be7058(param_1,param_2);
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c40488();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c61170(0);
    }
    else {
      func_0x000107c4ca04(param_1);
      func_0x000107c61180();
      func_0x000107c5e698(param_3);
      func_0x000107c611b0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100be7058; end: 100be71ef;  */

long FUN_100be7058(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  lVar6 = param_2;
  func_0x000107c4ca0c();
  func_0x000107c61180();
  lVar2 = lVar6;
  func_0x000107c40808();
  func_0x000107c61170(lVar6);
  if (lVar2 == 0) {
    lVar6 = 0;
  }
  else {
    lVar3 = param_2;
    func_0x000107c4ca0c();
    func_0x000107c61180();
    lVar2 = lVar3;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(lVar3);
        }
        lVar6 = *(long *)(lVar7 * 8);
        lVar4 = lVar6;
        func_0x000107c4c9b4();
        if (lVar4 == param_1) {
          func_0x000107c61174(lVar6);
          func_0x000107c61170(lVar3);
          if (lVar6 == 0) goto LAB_100be7178;
          goto LAB_100be71ac;
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar3;
      func_0x000107c4080c();
    }
    func_0x000107c61170(lVar3);
LAB_100be7178:
    lVar2 = param_2;
    func_0x000107c4ca0c(param_2);
    func_0x000107c61180();
    lVar6 = lVar2;
    func_0x000107c43638();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
  }
LAB_100be71ac:
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
    return lVar6;
  }
  func_0x000107c60e78();
  return *(long *)(param_2 + 0x10);
}



/* Entry: 100be71f0; end: 100be71f7; -[SCNMessagingMediaReference mediaListId] */

undefined8 FUN_100be71f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100be71f8; end: 100be71ff; -[SCNMessagingMediaReference contentObject] */

undefined8 FUN_100be71f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100be7200; end: 100be7207; -[SCNMessagingMediaReference mediaReferenceKey] */

undefined8 FUN_100be7200(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100be7208; end: 100be723f; -[SCChatMediaContentBuilder withMediaId:] */

long FUN_100be7208(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100be7240; end: 100be72ab;  */

/* WARNING: Possible PIC construction at 0x000100be7294: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100be7298) */

void FUN_100be7240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_100be72ac(param_1,param_2);
  func_0x000107c61180();
  func_0x000107c5e4d8(param_3);
  func_0x000107c611b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100be72ac; end: 100be732f;  */

void FUN_100be72ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_100be7058();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000100be72f0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100be7330; end: 100be7367; -[SCChatMediaContentBuilder withContentObject:] */

long FUN_100be7330(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100be7368; end: 100be7373;  */

bool FUN_100be7368(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 100be7374; end: 100be760f;  */

/* WARNING: Possible PIC construction at 0x000100be74d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100be7518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100be74d4) */
/* WARNING: Removing unreachable block (ram,0x000100be751c) */

void FUN_100be7374(int param_1,long param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_5);
  if (param_4 == 0) {
    if (param_1 < 2) {
      if (param_1 != -0x4524111) {
        if (param_1 == 0) {
          func_0x000107c61174(param_2);
          func_0x000107c61174(param_5);
          if ((param_2 != 0) && (lVar2 = param_2, func_0x000107c5dd14(), (int)lVar2 != 0)) {
            func_0x000107c5dd14();
            iVar1 = (int)param_2;
            if (iVar1 < 2) {
joined_r0x000100be755c:
              if ((iVar1 == -0x4524111) || (iVar1 == 0)) {
                func_0x000107c50228(uRam00000001138473b0);
                goto code_r0x000107c61170;
              }
              if (iVar1 != 1) goto code_r0x000107c61170;
            }
            else {
              if (iVar1 < 4) goto joined_r0x000100be74a0;
joined_r0x000100be7598:
              if ((iVar1 != 4) && (iVar1 != 5)) goto code_r0x000107c61170;
            }
          }
        }
        else {
          if (param_1 != 1) goto code_r0x000107c61170;
          func_0x000107c61174(param_2);
          func_0x000107c61174(param_5);
          if ((param_2 != 0) && (lVar2 = param_2, func_0x000107c5dd14(), (int)lVar2 != 0)) {
            func_0x000107c5dd14();
            iVar1 = (int)param_2;
            if (iVar1 < 2) goto joined_r0x000100be755c;
            if (3 < iVar1) goto joined_r0x000100be7598;
joined_r0x000100be74a0:
            if ((iVar1 != 2) && (iVar1 != 3)) goto code_r0x000107c61170;
          }
        }
        func_0x000107c5e6ac(param_5);
        func_0x000107c611b0();
        goto code_r0x000107c61170;
      }
    }
    else if (((param_1 != 2) && (param_1 != 3)) && (param_1 != 4)) goto code_r0x000107c61170;
  }
  func_0x000107c5e6ac(param_5);
  func_0x000107c611b0();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 100be7610; end: 100be7623; -[SCChatMediaContentBuilder withMediaType:] */

void FUN_100be7610(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 100be7624; end: 100be769f; +[SDMMediaMetadata_MediaEncryptionInfo descriptor] */

undefined * FUN_100be7624(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fd820 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cf6e70,
                        &PTR____CFConstantStringClassReference_110e662b8,&PTR_DAT_1133ff530,
                        &PTR_s_key_1133ff648,2,0x18,0x1c);
    func_0x000107c5a88c();
    puRam00000001137fd820 = puVar1;
  }
  return puRam00000001137fd820;
}



/* Entry: 100be76a0; end: 100be76d7; -[SCChatMediaContentBuilder withKey:] */

long FUN_100be76a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100be76d8; end: 100be770f; -[SCChatMediaContentBuilder withIv:] */

long FUN_100be76d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100be7710; end: 100be7747; -[SCChatMediaContentBuilder withHeight:] */

long FUN_100be7710(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100be7748; end: 100be777f; -[SCChatMediaContentBuilder withWidth:] */

long FUN_100be7748(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100be7780; end: 100be778f; +[SCTimeUtils millisToSeconds:] */

double FUN_100be7780(double param_1)

{
  return param_1 / 1000.0;
}



/* Entry: 100be7790; end: 100be77c7; -[SCChatMediaContentBuilder withDuration:] */

long FUN_100be7790(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100be77c8; end: 100be7867; -[SCChatMediaContentBuilder build] */

void FUN_100be77c8(void)

{
  func_0x000107c610f4(PTR_PTR_1126b4628);
  func_0x000107c47668();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100be7868; end: 100be7c1f; -[SCChatMediaContent initWithMediaId:key:iv:rotationLocked:mediaType:mediaLoadState:messageBodyType:shouldBlockDownload:messageTimestamp:messageSender:width:height:isZipped:duration:isInfiniteDuration:snapAttachments:venueId:snapMetadata:contentObject:thumbnailContentObject:optimizedContentObject:overlayContentObject:isEligibleForStreaming:] */

undefined8 *
FUN_100be7868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
             undefined4 param_17,undefined8 param_18,undefined1 param_19,undefined4 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined1 param_28)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  func_0x000107c61174(param_27);
  puStack_70 = PTR_PTR_112706d10;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_6;
    puVar1[5] = param_7;
    puVar1[6] = param_8;
    puVar1[7] = param_9;
    *(undefined1 *)((long)puVar1 + 9) = param_10;
    uVar2 = param_12;
    func_0x000107c40794();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_13;
    func_0x000107c40794();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_14;
    func_0x000107c40794();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_15;
    func_0x000107c40794();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_16;
    uVar2 = param_18;
    func_0x000107c40794();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = param_19;
    uVar2 = param_21;
    func_0x000107c40794();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_22;
    func_0x000107c40794();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_23;
    func_0x000107c40794();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_24;
    func_0x000107c40794();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_25;
    func_0x000107c40794();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_26;
    func_0x000107c40794();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_27;
    func_0x000107c40794();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0xc) = param_28;
  }
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100be7c20; end: 100be7c27; -[SCChatMediaContent mediaId] */

undefined8 FUN_100be7c20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100be7c28; end: 100be7c2f; -[SCChatMediaContentBuilder withShouldBlockDownload:] */

void FUN_100be7c28(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 100be7c30; end: 100be7cfb; -[SCChatMediaContent .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100be7c48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100be7c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100be7c78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100be7c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100be7ca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100be7cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100be7cd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100be7cc4) */
/* WARNING: Removing unreachable block (ram,0x000100be7cac) */
/* WARNING: Removing unreachable block (ram,0x000100be7c94) */
/* WARNING: Removing unreachable block (ram,0x000100be7c7c) */
/* WARNING: Removing unreachable block (ram,0x000100be7c64) */
/* WARNING: Removing unreachable block (ram,0x000100be7c4c) */
/* WARNING: Removing unreachable block (ram,0x000100be7cdc) */

void FUN_100be7c30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x98,0);
  return;
}



/* Entry: 100be7cfc; end: 100be8337;  */

void FUN_100be7cfc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  puVar1 = PTR_PTR_1126d7a98;
  func_0x000107c61160();
  lVar2 = param_1;
  func_0x000107c4adb4();
  func_0x000107c61180();
  lVar3 = param_1;
  func_0x000107c5d2e8();
  func_0x000107c61180();
  func_0x000107c61174(puVar1);
  func_0x000107c61174(lVar2);
  func_0x000107c61174(lVar3);
  lVar9 = lVar2;
  func_0x000107c44fd8();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar9 != 0) {
    lVar9 = lVar2;
    func_0x000107c44fd8(lVar2);
    func_0x000107c4d968(puVar4,param_2,lVar9);
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c5e650(puVar1,param_2,puVar5);
    func_0x000107c611b0();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
  }
  lVar9 = lVar3;
  func_0x000107c5d300();
  func_0x000107c61180();
  lVar11 = lVar9;
  func_0x000107c4b584();
  func_0x000107c61170(lVar9);
  if (lVar11 == 0) {
    lVar9 = 0;
  }
  else {
    lVar11 = lVar3;
    func_0x000107c5d300(lVar3);
    func_0x000107c61180();
    lVar12 = lVar11;
    func_0x000107c4b580();
    func_0x000107c61180();
    lVar9 = lVar12;
    func_0x000107c3feb8();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar11);
  }
  func_0x000107c5e444(puVar1,param_2,lVar9);
  func_0x000107c611b0();
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  lVar2 = param_1;
  func_0x000107c3e324();
  func_0x000107c61180();
  func_0x000107c61174(puVar1);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar3 = lVar2;
  func_0x000107c3e328();
  func_0x000107c61180();
  lVar9 = lVar3;
  func_0x000107c4080c();
  if (lVar9 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          func_0x000107c61128(lVar3);
        }
        lVar10 = *(long *)(lStack_128 + lVar12 * 8);
        lVar6 = lVar10;
        func_0x000107c3e2f4();
        if ((int)lVar6 == 1) {
          func_0x000107c40534();
          func_0x000107c61180();
          func_0x000107c61174(puVar1);
          lVar6 = lVar10;
          func_0x000107c4058c();
          func_0x000107c61180();
          lVar7 = lVar6;
          func_0x000100be9790();
          func_0x000107c61180();
          func_0x000107c61170(lVar6);
          lVar6 = lVar7;
          func_0x000107c4adac();
          if (lVar6 != 0) {
            func_0x000107c5e4e0(puVar1,param_2,lVar7);
            func_0x000107c611b0();
          }
          func_0x000107c61170(lVar7);
          func_0x000107c61170(puVar1);
          func_0x000107c61170(lVar10);
        }
        lVar12 = lVar12 + 1;
      } while (lVar9 != lVar12);
      lVar9 = lVar3;
      func_0x000107c4080c(lVar3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar9 != 0);
  }
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar2);
  lVar2 = param_1;
  func_0x000107c5d2e8();
  func_0x000107c61180();
  func_0x000107c61174(puVar1);
  func_0x000107c61174(lVar2);
  lVar3 = lVar2;
  func_0x000107c427a0();
  func_0x000107c61180();
  lVar9 = lVar3;
  func_0x000107c3e684();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar9;
  func_0x000107c4adac();
  if (lVar3 != 0) {
    func_0x000107c5e528(puVar1,param_2,lVar9);
    func_0x000107c611b0();
  }
  lVar3 = lVar2;
  func_0x000107c5d300();
  func_0x000107c61180();
  lVar11 = lVar3;
  func_0x000100be9790();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar11;
  func_0x000107c4adac();
  if (lVar3 != 0) {
    func_0x000107c5e858(puVar1,param_2,lVar11);
    func_0x000107c611b0();
  }
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar2);
  lVar2 = param_1;
  func_0x000107c4491c();
  if ((int)lVar2 != 0) {
    lVar2 = param_1;
    func_0x000107c4ad64();
    func_0x000107c61180();
    func_0x000107c61174(puVar1);
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107d618c4(lVar2);
      func_0x000107c61180();
      func_0x000107c5e6e4(puVar1,param_2,lVar3);
      func_0x000107c611b0();
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170(puVar1);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61174(puVar1);
  lVar2 = param_1;
  func_0x000107c4e8d8();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4e928();
  func_0x000107c61180();
  lVar9 = lVar3;
  func_0x000107c43638();
  func_0x000107c61180();
  lVar11 = lVar9;
  func_0x000107c4c930();
  func_0x000107c61180();
  lVar12 = lVar11;
  func_0x000107c4e088();
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  if ((int)lVar12 == 0x22) {
    puVar4 = PTR_PTR_1126b2378;
    func_0x000107c610fc(PTR_PTR_1126b2378);
    puVar5 = PTR_PTR_1126b5c10;
    func_0x000107c61160(PTR_PTR_1126b5c10);
    func_0x000107c5a16c(puVar4,param_2,puVar5);
    func_0x000107c61170(puVar5);
    puVar5 = PTR_PTR_1126d4b68;
    func_0x000107c61160(PTR_PTR_1126d4b68);
    puVar8 = puVar4;
    func_0x000107c5d20c(puVar4);
    func_0x000107c61180();
    func_0x000107c568e4();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar5);
    puVar5 = puVar4;
    func_0x000107c5d20c(puVar4);
    func_0x000107c61180();
    puVar8 = puVar5;
    func_0x000107c4d34c();
    func_0x000107c61180();
    func_0x000107c5a0f8();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar5);
    puVar5 = puVar4;
    func_0x000107c41214(puVar4);
    func_0x000107c61180();
    puVar8 = puVar5;
    func_0x000107c3e684();
    func_0x000107c61180();
    func_0x000107c5e4e0(puVar1,param_2,puVar8);
    func_0x000107c611b0();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(puVar1);
  puVar4 = puVar1;
  func_0x000107c3ecc8(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  func_0x000107c60e78();
  if (puRam00000001137f83e0 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cabbf0,
                        &PTR____CFConstantStringClassReference_110dcb5d8,&PTR_DAT_1133c1d50,
                        &PTR_s_id_p_1133c1d68,6,0x38,0x1c);
    puRam00000001137f83e0 = puVar4;
  }
  return;
}



/* Entry: 100be8338; end: 100be839f; +[SDMLens descriptor] */

void FUN_100be8338(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f83e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cabbf0,
                        &PTR____CFConstantStringClassReference_110dcb5d8,&PTR_DAT_1133c1d50,
                        &PTR_s_id_p_1133c1d68,6,0x38,0x1c);
    puRam00000001137f83e0 = puVar1;
  }
  return;
}



/* Entry: 100be83a0; end: 100be8407; +[SDMUnlockables descriptor] */

void FUN_100be83a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8e18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1af0,
                        &PTR____CFConstantStringClassReference_110ec9ff8,&PTR_DAT_1133c8490,
                        &PTR_DAT_1133c84a8,2,0x18,0x1c);
    puRam00000001137f8e18 = puVar1;
  }
  return;
}



/* Entry: 100be8408; end: 100be840f;  */

void FUN_100be8408(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000100be846c(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100be8410; end: 100be846b;  */

void FUN_100be8410(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000100be846c(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}


