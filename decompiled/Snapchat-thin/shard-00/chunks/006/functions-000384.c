/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100800ae0; end: 100800b03; -[SCRemoteApiInfo copyWithZone:] */

undefined8 FUN_100800ae0(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100800b04; end: 100800b3b; -[SCLensBuilder withLensExtensions:] */

long FUN_100800b04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c0) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100800b3c; end: 100800b73; -[SCLensBuilder withLensId:] */

long FUN_100800b3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100800b74; end: 100800bab; -[SCLensBuilder withCode:] */

long FUN_100800b74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100800bac; end: 100800d27; -[SCLensBuilder build] */

void FUN_100800bac(void)

{
  func_0x000107c610f4(PTR_PTR_1126ae6a8);
  func_0x000107c47300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100800d28; end: 100800d4f; +[SCLens initialize] */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_100800d28(void)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  if (lRam00000001137f8f18 == -1) {
    return;
  }
  ppuVar2 = &PTR___NSConcreteGlobalBlock_110d5a7c0;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_110d5a7c0);
  if ((bRam0000000113817d58 & 1) == 0) {
    iVar1 = 0x13817d58;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once");
      pcRam0000000113817d50 = pcVar3;
      func_0x000107c60e4c(0x113817d58);
    }
  }
  pcVar3 = pcRam0000000113817d50;
  FUN_10002a3a8(&PTR___NSConcreteGlobalBlock_110d5a7c0);
  func_0x000107c61180();
  (*pcVar3)(0x1137f8f18,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 100800d50; end: 100800dff;  */

/* WARNING: Possible PIC construction at 0x000100800d80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100800da0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100800dbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100800dd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100800dc0) */
/* WARNING: Removing unreachable block (ram,0x000100800da4) */
/* WARNING: Removing unreachable block (ram,0x000100800d84) */
/* WARNING: Removing unreachable block (ram,0x000100800ddc) */

void FUN_100800d50(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  uVar1 = puRam00000001137f8f30;
  puRam00000001137f8f30 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100800e00; end: 1008017cb; -[SCLens initWithLensId:name:code:hintId:hintTranslations:iconURL:bitmojiComicId:resourceContainer:expirationDate:type:section:categories:isFeatured:isSponsored:sponsoredSlug:sponsoredType:scheduleIntervals:isDemo:demoStartDate:absoluteCarouselPosition:unlockableTrackInfo:manifest:apiLevel:isStudioPreview:activationCameraPosition:encryptedGeoData:unlockCompanionBackReferenceId:cameraContexts:applicableContexts:hasContextCards:onDemandTemplateId:unlockablesAttachment:isRanked:priority:lensDescriptors:communityLensData:snappablesReplyType:snappablesTaglineKey:snappablesPlayButtonGradientHexCodeColors:isLeftCarousel:contextHint:isCommunity:checksum:namespaceId:lensCollectionId:carouselGroup:carouselGlobalScoreList:unlockableSnapInfo:connectedLensInfo:musicTrackMetadata:shoppingLensMetadata:remoteApiInfo:customizationInfo:adRenderDataBytes:prefetchContexts:targetingCampaignId:lensExtensions:isSnapchatPlusExclusive:lensPreview:primaryCategory:lensMiscData:lensPlusTierConfig:] */

undefined8 *
FUN_100800e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined1 param_20,
             undefined4 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined1 param_27,undefined4 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined1 param_34,undefined4 param_35,undefined8 param_36,
             undefined8 param_37,undefined1 param_38,undefined4 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined1 param_46,undefined4 param_47,undefined8 param_48,
             undefined1 param_49,undefined4 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
             undefined8 param_65,undefined1 param_66,undefined4 param_67,undefined8 param_68,
             undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_30);
  func_0x000107c61174(param_31);
  func_0x000107c61174(param_32);
  func_0x000107c61174(param_33);
  func_0x000107c61174(param_36);
  func_0x000107c61174(param_37);
  func_0x000107c61174(param_41);
  func_0x000107c61174(param_42);
  func_0x000107c61174(param_44);
  func_0x000107c61174(param_45);
  func_0x000107c61174(param_48);
  func_0x000107c61174(param_51);
  func_0x000107c61174(param_52);
  func_0x000107c61174(param_53);
  func_0x000107c61174(param_54);
  func_0x000107c61174(param_55);
  func_0x000107c61174(param_56);
  func_0x000107c61174(param_57);
  func_0x000107c61174(param_58);
  func_0x000107c61174(param_59);
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
  puStack_70 = PTR_PTR_11270adf0;
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
    uVar2 = param_11;
    func_0x000107c40794();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0xc] = param_12;
    puVar1[0xd] = param_13;
    uVar2 = param_14;
    func_0x000107c40794();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_15;
    *(undefined1 *)((long)puVar1 + 9) = param_15._1_1_;
    uVar2 = param_17;
    func_0x000107c40794();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x10] = param_18;
    uVar2 = param_19;
    func_0x000107c40794();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_20;
    uVar2 = param_22;
    func_0x000107c40794();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x13] = param_23;
    uVar2 = param_24;
    func_0x000107c40794();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_25;
    func_0x000107c40794();
    uVar3 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = param_27;
    puVar1[0x16] = param_26;
    puVar1[0x17] = param_29;
    uVar2 = param_30;
    func_0x000107c40794();
    uVar3 = puVar1[0x18];
    puVar1[0x18] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_31;
    func_0x000107c40794();
    uVar3 = puVar1[0x19];
    puVar1[0x19] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_32;
    func_0x000107c40794();
    uVar3 = puVar1[0x1a];
    puVar1[0x1a] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_33;
    func_0x000107c40794();
    uVar3 = puVar1[0x1b];
    puVar1[0x1b] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0xc) = param_34;
    uVar2 = param_36;
    func_0x000107c40794();
    uVar3 = puVar1[0x1c];
    puVar1[0x1c] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_37;
    func_0x000107c40794();
    uVar3 = puVar1[0x1d];
    puVar1[0x1d] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0xd) = param_38;
    puVar1[0x1e] = param_40;
    uVar2 = param_41;
    func_0x000107c40794();
    uVar3 = puVar1[0x1f];
    puVar1[0x1f] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_42;
    func_0x000107c40794();
    uVar3 = puVar1[0x20];
    puVar1[0x20] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x21] = param_43;
    uVar2 = param_44;
    func_0x000107c40794();
    uVar3 = puVar1[0x22];
    puVar1[0x22] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_45;
    func_0x000107c40794();
    uVar3 = puVar1[0x23];
    puVar1[0x23] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0xe) = param_46;
    uVar2 = param_48;
    func_0x000107c40794();
    uVar3 = puVar1[0x24];
    puVar1[0x24] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0xf) = param_49;
    uVar2 = param_51;
    func_0x000107c40794();
    uVar3 = puVar1[0x25];
    puVar1[0x25] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_52;
    func_0x000107c40794();
    uVar3 = puVar1[0x26];
    puVar1[0x26] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_53;
    func_0x000107c40794();
    uVar3 = puVar1[0x27];
    puVar1[0x27] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_54;
    func_0x000107c40794();
    uVar3 = puVar1[0x28];
    puVar1[0x28] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_55;
    func_0x000107c40794();
    uVar3 = puVar1[0x29];
    puVar1[0x29] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_56;
    func_0x000107c40794();
    uVar3 = puVar1[0x2a];
    puVar1[0x2a] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_57;
    func_0x000107c40794();
    uVar3 = puVar1[0x2b];
    puVar1[0x2b] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_58;
    func_0x000107c40794();
    uVar3 = puVar1[0x2c];
    puVar1[0x2c] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_59;
    func_0x000107c40794();
    uVar3 = puVar1[0x2d];
    puVar1[0x2d] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_60;
    func_0x000107c40794();
    uVar3 = puVar1[0x2e];
    puVar1[0x2e] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_61;
    func_0x000107c40794();
    uVar3 = puVar1[0x2f];
    puVar1[0x2f] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_62;
    func_0x000107c40794();
    uVar3 = puVar1[0x30];
    puVar1[0x30] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_63;
    func_0x000107c40794();
    uVar3 = puVar1[0x31];
    puVar1[0x31] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_64;
    func_0x000107c40794();
    uVar3 = puVar1[0x32];
    puVar1[0x32] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_65;
    func_0x000107c40794();
    uVar3 = puVar1[0x33];
    puVar1[0x33] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)(puVar1 + 2) = param_66;
    uVar2 = param_68;
    func_0x000107c40794();
    uVar3 = puVar1[0x34];
    puVar1[0x34] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_69;
    func_0x000107c40794();
    uVar3 = puVar1[0x35];
    puVar1[0x35] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_70;
    func_0x000107c40794();
    uVar3 = puVar1[0x36];
    puVar1[0x36] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_71;
    func_0x000107c40794();
    uVar3 = puVar1[0x37];
    puVar1[0x37] = uVar2;
    func_0x000107c61170(uVar3);
  }
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
  func_0x000107c61170(param_59);
  func_0x000107c61170(param_58);
  func_0x000107c61170(param_57);
  func_0x000107c61170(param_56);
  func_0x000107c61170(param_55);
  func_0x000107c61170(param_54);
  func_0x000107c61170(param_53);
  func_0x000107c61170(param_52);
  func_0x000107c61170(param_51);
  func_0x000107c61170(param_48);
  func_0x000107c61170(param_45);
  func_0x000107c61170(param_44);
  func_0x000107c61170(param_42);
  func_0x000107c61170(param_41);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_36);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_32);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_11);
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



/* Entry: 1008017cc; end: 1008019ff; -[SCLensBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001008017e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008017fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100801814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010080182c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100801844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010080185c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100801874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010080188c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008018a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008018bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008018d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008018ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100801904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010080191c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100801934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010080194c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100801964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010080197c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100801994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008019ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008019c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008019dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008019c8) */
/* WARNING: Removing unreachable block (ram,0x0001008019b0) */
/* WARNING: Removing unreachable block (ram,0x000100801998) */
/* WARNING: Removing unreachable block (ram,0x000100801980) */
/* WARNING: Removing unreachable block (ram,0x000100801968) */
/* WARNING: Removing unreachable block (ram,0x000100801950) */
/* WARNING: Removing unreachable block (ram,0x000100801938) */
/* WARNING: Removing unreachable block (ram,0x000100801920) */
/* WARNING: Removing unreachable block (ram,0x000100801908) */
/* WARNING: Removing unreachable block (ram,0x0001008018f0) */
/* WARNING: Removing unreachable block (ram,0x0001008018d8) */
/* WARNING: Removing unreachable block (ram,0x0001008018c0) */
/* WARNING: Removing unreachable block (ram,0x0001008018a8) */
/* WARNING: Removing unreachable block (ram,0x000100801890) */
/* WARNING: Removing unreachable block (ram,0x000100801878) */
/* WARNING: Removing unreachable block (ram,0x000100801860) */
/* WARNING: Removing unreachable block (ram,0x000100801848) */
/* WARNING: Removing unreachable block (ram,0x000100801830) */
/* WARNING: Removing unreachable block (ram,0x000100801818) */
/* WARNING: Removing unreachable block (ram,0x000100801800) */
/* WARNING: Removing unreachable block (ram,0x0001008017e8) */
/* WARNING: Removing unreachable block (ram,0x0001008019e0) */

void FUN_1008017cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x1e8,0);
  return;
}



/* Entry: 100801a00; end: 100801b2b;  */

/* WARNING: Possible PIC construction at 0x000100801a64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100801ab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100801b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100801b20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100801ab8) */
/* WARNING: Removing unreachable block (ram,0x000100801a68) */
/* WARNING: Removing unreachable block (ram,0x000100801a74) */
/* WARNING: Removing unreachable block (ram,0x000100801ad8) */
/* WARNING: Removing unreachable block (ram,0x000100801a7c) */
/* WARNING: Removing unreachable block (ram,0x000100801af0) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x000100801ab4) */
/* WARNING: Removing unreachable block (ram,0x000100801b08) */
/* WARNING: Removing unreachable block (ram,0x000100801b24) */
/* WARNING: Removing unreachable block (ram,0x000100801b0c) */

void FUN_100801a00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c44fb4();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c3fcb0();
    func_0x000107c61180();
    if (param_1 == 0) {
      return;
    }
    func_0x000107c5faec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100801b2c; end: 100801b33; -[SCLens iconURL] */

undefined8 FUN_100801b2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 100801b34; end: 100801b3b; -[SCLens code] */

undefined8 FUN_100801b34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100801b3c; end: 100801c5f; -[SCLens contentIconKey] */

void FUN_100801b3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126b5928;
  func_0x000107c610f4(PTR_PTR_1126b5928);
  lVar2 = param_1;
  func_0x000107c4b1dc(param_1);
  func_0x000107c61180();
  lVar3 = param_1;
  func_0x000107c44fb4(param_1);
  func_0x000107c61180();
  lVar4 = param_1;
  func_0x000107c3fcb0(param_1);
  func_0x000107c61180();
  lVar5 = param_1;
  func_0x000107c4a144(param_1);
  lVar6 = param_1;
  func_0x000107c4a6ec(param_1);
  lVar7 = param_1;
  func_0x000107c49974(param_1);
  func_0x000107c5d0f0();
  func_0x000107c49c88();
  func_0x000107c4a654();
  func_0x000107c472e8(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,param_1 == 1);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100801c60; end: 100801c67; -[SCLens lensId] */

undefined8 FUN_100801c60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100801c68; end: 100801cb3; -[SCLens isOriginalLens] */

undefined * FUN_100801c68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae6a8;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  func_0x000107c4a148(puVar1,param_2,param_1);
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 100801cb4; end: 100801cc3; +[SCLens isOriginalLensId:] */

void FUN_100801cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110e3d018);
  return;
}



/* Entry: 100801cc4; end: 100801d0f; -[SCLens isVideoChatOriginalLens] */

undefined * FUN_100801cc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae6a8;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  func_0x000107c4a6f0(puVar1,param_2,param_1);
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 100801d10; end: 100801d1f; +[SCLens isVideoChatOriginalLensId:] */

void FUN_100801d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110f77918);
  return;
}



/* Entry: 100801d20; end: 100801d67; -[SCLens is3DBitmojiVideoChatLens] */

undefined8 FUN_100801d20(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c4d420();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c49d0c();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100801d68; end: 100801d6f; -[SCLens namespaceId] */

undefined8 FUN_100801d68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 100801d70; end: 100801d77; -[SCLens type] */

undefined8 FUN_100801d70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 100801d78; end: 100801ddb; -[SCLens isDummyLens] */

undefined * FUN_100801d78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae6a8;
  uVar1 = param_1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  func_0x000107c5d0f0(param_1);
  func_0x000107c49c8c(puVar2,param_2,uVar1,param_1);
  func_0x000107c61170(uVar1);
  return puVar2;
}



/* Entry: 100801ddc; end: 100801e87; +[SCLens isDummyLensId:type:] */

ulong FUN_100801ddc(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  func_0x000107c3baec(param_1,param_2,param_4);
  if (((((uVar1 & 1) == 0) &&
       (uVar1 = param_1, func_0x000107c49a30(param_1,param_2,param_3), (uVar1 & 1) == 0)) &&
      (uVar1 = param_1, func_0x000107c49d80(param_1,param_2,param_3), (uVar1 & 1) == 0)) &&
     ((uVar1 = param_3,
      func_0x000107c49d0c(param_3,param_2,&PTR____CFConstantStringClassReference_110f777b8),
      (uVar1 & 1) == 0 &&
      (uVar1 = param_1, func_0x000107c49c84(param_1,param_2,param_3), (uVar1 & 1) == 0)))) {
    func_0x000107c49fe8(param_1,param_2,param_3);
  }
  else {
    param_1 = 1;
  }
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 100801e88; end: 100801e97; +[SCLens _isDummyLensType:] */

bool FUN_100801e88(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 0xb || param_3 == 0x10;
}



/* Entry: 100801e98; end: 100801f03; +[SCLens isAnyOriginalLensId:] */

ulong FUN_100801e98(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  func_0x000107c4a148(param_1,param_2,param_3);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = param_1, func_0x000107c4a6f0(param_1,param_2,param_3), (uVar1 & 1) == 0)) {
    func_0x000107c4a23c(param_1,param_2,param_3);
  }
  else {
    param_1 = 1;
  }
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 100801f04; end: 100801f47; -[SCLens isUnavailable] */

undefined8 FUN_100801f04(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c3fcb0();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c49d0c();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100801f48; end: 100802067; -[SCLensContentIconKey initWithLensId:lensIconURL:lensCode:isOriginalLens:isVideoChatOriginalLens:is3DBitmojiVideoChatLens:isBundledLens:isDummyLens:isUnavailableLens:] */

undefined1 *
FUN_100801f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_68 = PTR_PTR_11270a930;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
    *(undefined1 *)((long)puVar1 + 0xb) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0xc) = param_9._1_1_;
    *(undefined1 *)((long)puVar1 + 0xd) = param_9._2_1_;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100802068; end: 10080213b; -[SCLensIconInMemoryCache lensIconImageForKey:] */

void FUN_100802068(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  lVar1 = param_1;
  func_0x000107c3cd5c(param_1,param_2,param_3);
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c3b9b8(param_1,param_2,lVar1);
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = param_1;
    func_0x000107c3bc9c(param_1,param_2,param_3);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c3b9b8(param_1,param_2,lVar3);
    func_0x000107c61180();
  }
  else {
    func_0x000107c61174(lVar2);
    lVar3 = lVar1;
    param_1 = lVar2;
  }
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10080213c; end: 100802213; -[SCLensIconInMemoryCache _urlKeyFromLensIconKey:] */

void FUN_10080213c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_3);
  puVar2 = param_3;
  func_0x000107c4b1d4();
  func_0x000107c61180();
  puVar1 = puVar2;
  func_0x000107c4adac();
  func_0x000107c61170(puVar2);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = param_3;
    func_0x000107c49974();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar1 == 0) {
      puVar2 = param_3;
      func_0x000107c4b1d4(param_3);
      func_0x000107c61180();
    }
    else {
      puVar1 = param_3;
      func_0x000107c4b1d4();
      func_0x000107c61180();
      func_0x000107c51804(puVar2,param_2,&PTR____CFConstantStringClassReference_110f771f8);
      func_0x000107c61180();
      func_0x000107c61170(puVar1);
    }
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100802214; end: 10080221b; -[SCLensContentIconKey lensIconURL] */

undefined8 FUN_100802214(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10080221c; end: 1008022a7; -[SCLensIconInMemoryCache _imageForkey:] */

void FUN_10080221c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4adac();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c611ec(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x000107c4d9e8(uVar2,param_2,param_3);
    func_0x000107c61180();
    func_0x000107c611f0(param_1 + 0x10);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1008022a8; end: 1008022af; -[SCLensIconInMemoryCache _lensIdKeyFromLensIconKey:] */

void FUN_1008022a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 1008022b0; end: 1008022b7; -[SCLensContentIconKey lensId] */

undefined8 FUN_1008022b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1008022b8; end: 100802487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1008022b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long unaff_x20;
  long lVar8;
  undefined *puVar9;
  
  func_0x000107c5fb78();
  uVar3 = 0x5f736e656c;
  uVar6 = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113035cb0);
  func_0x000107c61174(uVar2);
  func_0x000107c5fadc(0x5f736e656c);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  puVar9 = puVar4;
  func_0x000107c450d0();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (puVar9 == (undefined *)0x0) {
    lVar8 = *(long *)(unaff_x20 + _DAT_113035ca0);
    if (*(long *)(lVar8 + 0x10) != 0) {
      lVar5 = 0;
      FUN_1007ff45c();
      if ((uVar6 & 1) != 0) {
        puVar7 = (undefined8 *)(*(long *)(lVar8 + 0x38) + lVar5 * 0x18);
        uVar3 = *puVar7;
        uVar1 = puVar7[1];
        func_0x000107c61434();
        func_0x000107c5fb78(0x2f656c646e75622e,0xe800000000000000);
        func_0x000107c5fb78(0x746e65746e6f63,0xe700000000000000);
        func_0x000107c5fb78(0x2f,0xe100000000000000);
        func_0x000107c5fb78(0x5f736e656c,0xe500000000000000);
        func_0x000107c6142c(0xe500000000000000);
        func_0x000107c61174(uVar2);
        func_0x000107c5fadc(uVar3,uVar1);
        func_0x000107c6142c(uVar1);
        func_0x000107c450d0(puVar4);
        func_0x000107c61180();
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar3);
        return puVar4;
      }
    }
    func_0x000107c6142c(0xe500000000000000);
    puVar9 = (undefined *)0x0;
  }
  else {
    func_0x000107c6142c(0xe500000000000000);
  }
  return puVar9;
}



/* Entry: 100802488; end: 100802563; -[SCLensIconInMemoryCache setLensIconImage:forKey:] */

/* WARNING: Possible PIC construction at 0x000100802524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100802534: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100802528) */
/* WARNING: Removing unreachable block (ram,0x000100802538) */

void FUN_100802488(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lVar1 = param_1;
  func_0x000107c3bc9c(param_1,param_2,param_4);
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c3cd5c(param_1,param_2,param_4);
  func_0x000107c61180();
  func_0x000107c611ec(param_1 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c56bd8(*(undefined8 *)(param_1 + 8),param_2,param_3,lVar1);
  }
  if (lVar2 != 0) {
    func_0x000107c56bd8(*(undefined8 *)(param_1 + 8),param_2,param_3,lVar2);
  }
  func_0x000107c611f0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100802564; end: 10080259f; -[SCLensContentIconKey .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010080257c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100802580) */

void FUN_100802564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1008025a0; end: 100802697;  */

void FUN_1008025a0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x000107c5062c();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c40fd8();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    if (uVar2 != 0) {
      uVar1 = uVar2;
      func_0x000107c3ac3c();
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      if (uVar1 != 0) {
        func_0x000107c61170(uVar1);
        return;
      }
    }
  }
  uVar1 = param_1;
  func_0x000107c3fcb0();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
    func_0x000107c6142c(param_2);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (((uVar1 != 0) && (uVar1 = param_1, func_0x000107c49c88(), (uVar1 & 1) == 0)) &&
       (uVar1 = param_1, func_0x000107c4a654(), (uVar1 & 1) == 0)) {
      func_0x000107c49bb0(param_1);
    }
  }
  return;
}



/* Entry: 100802698; end: 1008028b7;  */

/* WARNING: Possible PIC construction at 0x0001008026f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100802798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100802810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100802838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100802850: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010080283c) */
/* WARNING: Removing unreachable block (ram,0x000100802814) */
/* WARNING: Removing unreachable block (ram,0x000100802870) */
/* WARNING: Removing unreachable block (ram,0x000100802820) */
/* WARNING: Removing unreachable block (ram,0x00010080279c) */
/* WARNING: Removing unreachable block (ram,0x0001008027a8) */
/* WARNING: Removing unreachable block (ram,0x0001008027c4) */
/* WARNING: Removing unreachable block (ram,0x0001008027e8) */
/* WARNING: Removing unreachable block (ram,0x0001008027d4) */
/* WARNING: Removing unreachable block (ram,0x0001008027ec) */
/* WARNING: Removing unreachable block (ram,0x0001008026f8) */
/* WARNING: Removing unreachable block (ram,0x000100802854) */
/* WARNING: Removing unreachable block (ram,0x000100802878) */

void FUN_100802698(ulong param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_1008025a0();
  if ((uVar1 & 1) != 0) {
    func_0x000107c3fcb0();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c61434(param_3);
      func_0x000107c5fb78(0x656c646e75622e,0xe700000000000000);
      func_0x000107c5fadc(param_2,param_3);
      func_0x000107c6142c(param_3);
      func_0x000107c5fadc(0x746e65746e6f63,0xe700000000000000);
      func_0x000107c5c168(param_2);
      func_0x000107c61180();
    }
    else {
      func_0x000107c5faec();
      param_2 = param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1008028b8; end: 1008028bf; -[SCLens resourceContainer] */

undefined8 FUN_1008028b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1008028c0; end: 100802903; -[SCLensResourceContainer currentResource] */

void FUN_1008028c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c50640();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c43638();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100802904; end: 10080290b; -[SCLensResourceContainer resources] */

undefined8 FUN_100802904(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10080290c; end: 100802913; -[SCLensResource URLString] */

undefined8 FUN_10080290c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100802914; end: 1008029a7;  */

/* WARNING: Possible PIC construction at 0x000100802964: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100802968) */

void FUN_100802914(long param_1,long param_2,undefined8 param_3)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c6142c(param_3);
    func_0x000107c4ff88(uVar1);
  }
  else {
    uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c6142c(param_3);
    func_0x000107c56bcc(uVar1);
    param_2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1008029a8; end: 100802a07; -[SCLensDataProviderConfigurationBuilder withOriginalLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1008029a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130346b0);
  *(undefined8 *)(param_1 + _DAT_1130346b0) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6117c(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100802a08; end: 100802a4b; -[SCLensDataProviderConfigurationBuilder build] */

void FUN_100802a08(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100802a4c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100802a4c; end: 100802bb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100802a4c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_70;
  long lStack_68;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130346b8);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar9 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130346c0);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar10 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar10 = *puVar1;
  }
  bVar4 = *(byte *)(unaff_x20 + _DAT_1130346c8);
  if (bVar4 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_1130346c8) = 0;
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_1130346a0);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130346a8);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_1130346a8))[1];
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_1130346b0);
  FUN_100802bb8();
  lVar6 = param_1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_113034668) = uVar8;
  puVar1 = (undefined8 *)(lVar6 + _DAT_113034670);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined8 *)(lVar6 + _DAT_113034678) = uVar7;
  *(undefined8 *)(lVar6 + _DAT_113034680) = uVar9;
  *(undefined8 *)(lVar6 + _DAT_113034688) = uVar10;
  *(byte *)(lVar6 + _DAT_113034690) = bVar4 & 1;
  puVar5 = PTR_s_init_1125d9248;
  lStack_70 = lVar6;
  lStack_68 = param_1;
  func_0x000107c61174(uVar8);
  func_0x000107c61434(uVar3);
  func_0x000107c61174(uVar7);
  func_0x000107c61154(&lStack_70,puVar5);
  return;
}



/* Entry: 100802bb8; end: 100802bd7;  */

void FUN_100802bb8(void)

{
  func_0x000107c61168(&PTR_PTR_112969920);
  return;
}



/* Entry: 100802bd8; end: 100802cef; -[SCLensDataProviderRegistry _createMainCameraDataProviderWithConfiguration:] */

void FUN_100802bd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c61174(param_3);
  func_0x000107c4b6c8(uVar6);
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c3bec0(param_1,param_2,param_3,uVar6,*(undefined8 *)(param_1 + 0x60),
                      *(undefined8 *)(param_1 + 0x60),0);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar6);
  uVar7 = *(ulong *)(param_1 + 0x60);
  uVar3 = uVar7;
  func_0x000107c61174();
  FUN_1008044dc();
  iVar1 = (int)uVar3;
  if (((uVar3 & 1) != 0) || (func_0x000100803604(), iVar1 != 0)) {
    func_0x000107c61174(0);
    func_0x000107c61170(0);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c5c734(uVar4);
  func_0x000107c61180();
  uVar6 = uVar4;
  func_0x000107c4b4f0();
  func_0x000107c61180();
  uVar5 = uVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 100802cf0; end: 100802cf7; -[SCLensScheduleMetadataStoreServices liveCameraScheduleMetadataStoreCreator] */

undefined8 FUN_100802cf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100802cf8; end: 100802ed3; -[SCLensDataProviderRegistry _mainDataProviderWithConfiguration:scheduleMetadataStoreCreator:predefinedMetadataStore:predefinedMockedMetadataStore:dependecyProviderDelegate:] */

void FUN_100802cf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000107c61174(param_5);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  uVar6 = param_3;
  func_0x000107c4b300(param_3);
  lVar1 = param_1;
  func_0x000107c3bec8(param_1,param_2,uVar5,uVar6);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_100bcb238;
  puStack_78 = &UNK_110ae0578;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = param_5;
  lStack_68 = param_1;
  func_0x000107c61174(param_5);
  func_0x000107c3e4fc(puVar2,param_2,&puStack_90);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126b1b88;
  func_0x000107c610f4();
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  puVar4 = puVar3;
  FUN_100078e94();
  func_0x000107c61180();
  func_0x000107c46014(puVar3,param_2,param_3,lVar1,param_4,uVar6,puVar2,param_6,puVar4,
                      *(undefined8 *)(param_1 + 0x80),param_7);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c5c734(uVar5);
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c409c8();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(param_5);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 100802ed4; end: 100802ee3; -[SCLensDataProviderConfiguration lensPlacement] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100802ed4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113034688);
}



/* Entry: 100802ee4; end: 100802fb7; -[SCLensDataProviderRegistry _mainSortStrategyWithBundledLensProvider:placement:] */

void FUN_100802ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126b1b70;
  func_0x000107c610f4();
  func_0x000107c472a0();
  puVar2 = PTR_PTR_1126ae720;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_100803fc4;
  puStack_48 = &UNK_110966950;
  puStack_40 = puVar1;
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar1);
  func_0x000107c3e4fc(puVar2,param_2,&puStack_60);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(puStack_40);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100802fb8; end: 10080302b; -[SCMainSortStrategyFeatureStateProviderImpl initWithLensExplorerStudySettings:] */

undefined1 * FUN_100802fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112705ab0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10080302c; end: 1008031f7; -[SCLensDataProviderV2AllStoresMockableDependencyProvider initWithConfiguration:sortStrategy:scheduleMetadataStoreCreator:unlockableDataStoreServices:predefinedMetadataStore:predefinedMockedMetadataStore:announcerPerformer:lensPerformerProvider:delegate:] */

undefined8 *
FUN_10080302c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_68 = PTR_PTR_112700dd0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x000107c61158(puVar1);
    func_0x000107c3bf30();
    func_0x000107c61180();
    puVar3 = puVar1;
    func_0x000107c61158(puVar1);
    func_0x000107c4d038();
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126ddcf8;
    func_0x000107c610f4();
    func_0x000107c46008();
    uVar5 = puVar1[1];
    puVar1[1] = puVar4;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_10);
    uVar5 = puVar1[2];
    puVar1[2] = param_10;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1008031f8; end: 100803343; +[SCLensDataProviderV2AllStoresMockableDependencyProvider _metadataStoreWithLiveCameraScheduleMetadataStoreCreator:unlockableDataStoreServices:predefinedMetadataStore:announcerPerformer:lensPerformerProvider:] */

void FUN_1008031f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x100803bfc;
  puStack_88 = &UNK_110ae0808;
  uStack_80 = param_5;
  uStack_78 = param_4;
  uStack_70 = param_6;
  uStack_68 = param_7;
  uStack_60 = param_3;
  uStack_58 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c3e4fc(puVar1,param_2,&puStack_a0);
  func_0x000107c61180();
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100803344; end: 100803463; +[SCLensDataProviderV2AllStoresMockableDependencyProvider mockedMetadataStoreWithUnlockableDataStoreServices:predefinedMetadataStore:announcerPerformer:lensPerformerProvider:] */

void FUN_100803344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puVar1 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_1091dfff4;
  puStack_70 = &UNK_110ae0838;
  uStack_68 = param_4;
  uStack_60 = param_3;
  uStack_58 = param_5;
  uStack_50 = param_6;
  uStack_48 = param_1;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c3e4fc(puVar1,param_2,&puStack_88);
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100803464; end: 100803557; -[SCLensDataProviderV2MockableDependencyProvider initWithConfiguration:metadataStore:mockedMetadataStore:sortStrategy:delegate:] */

undefined1 *
FUN_100803464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_112700dd8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x20),param_7);
    func_0x000107c3b150(puVar1);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100803558; end: 100803693; -[SCLensDataProviderV2MockableDependencyProvider _configureWithMetadataStore:mockedMetadataStore:sortStrategy:] */

/* WARNING: Possible PIC construction at 0x0001008035a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008035b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008035c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008035dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008035ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008035e0) */
/* WARNING: Removing unreachable block (ram,0x0001008035cc) */
/* WARNING: Removing unreachable block (ram,0x0001008035b8) */
/* WARNING: Removing unreachable block (ram,0x0001008035f0) */

void FUN_100803558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000100803604();
  if (param_5 == 0) {
    func_0x000107c61174(0);
  }
  else {
    func_0x000107c61174(0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(0);
  return;
}



/* Entry: 100803694; end: 1008036e3;  */

void FUN_100803694(void)

{
  func_0x000107c610f4(PTR_PTR_1126dd9b8);
  func_0x000107c47250();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008036e4; end: 1008039a3; -[SCLensDataProviderFactory initWithLensDataFetcher:lensDataPrefetcher:adaptiveLensFetcherFactory:lensRemovalManager:lensThumbnailLogger:circumstanceEngine:lensDataConfigProvider:lensUserProvider:lensCarouselStudySettings:networkConnectivityMonitor:networkBandwidthEstimator:lensContentCacheProvider:] */

undefined8 *
FUN_1008036e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  puStack_68 = PTR_PTR_112700dc8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[10];
    puVar1[10] = param_14;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
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



/* Entry: 1008039a4; end: 100803a1b;  */

/* WARNING: Possible PIC construction at 0x0001008039b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008039c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008039d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008039e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008039f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100803a08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008039fc) */
/* WARNING: Removing unreachable block (ram,0x0001008039ec) */
/* WARNING: Removing unreachable block (ram,0x0001008039dc) */
/* WARNING: Removing unreachable block (ram,0x0001008039cc) */
/* WARNING: Removing unreachable block (ram,0x0001008039bc) */
/* WARNING: Removing unreachable block (ram,0x000100803a0c) */

void FUN_1008039a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x78));
  return;
}



/* Entry: 100803a1c; end: 100803aeb; -[SCLensDataProviderFactory createDataProviderWithDependencyProvider:bundledLensProvider:] */

void FUN_100803a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c4b03c(param_3);
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x000107c4ce40(param_3);
  func_0x000107c61180();
  uVar3 = param_3;
  func_0x000107c5b5b0(param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c409c4(param_1,param_2,uVar1,uVar2,uVar3,param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100803aec; end: 100803af3; -[SCLensDataProviderV2AllStoresMockableDependencyProvider lensDataProviderConfiguration] */

void FUN_100803aec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c092530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_lensDataProviderConfiguration_112602358);
  return;
}



/* Entry: 100803af4; end: 100803b5f; -[SCLensDataProviderV2MockableDependencyProvider lensDataProviderConfiguration] */

void FUN_100803af4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  func_0x000107c61148();
  func_0x000107c61170();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x000107c61174(lVar1);
  }
  else {
    param_1 = param_1 + 0x20;
    func_0x000107c61148(param_1);
    lVar1 = param_1;
    func_0x000107c4edc8();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100803b60; end: 100803b67; -[SCLensDataProviderV2AllStoresMockableDependencyProvider metadataStore] */

void FUN_100803b60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cc790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_metadataStore_112610bf8)
  ;
  return;
}



/* Entry: 100803b68; end: 100803cdb; -[SCLensDataProviderV2MockableDependencyProvider metadataStore] */

void FUN_100803b68(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x20;
  func_0x000107c61148();
  func_0x000107c61170();
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x000107c5c734(lVar2);
    func_0x000107c61180();
  }
  else {
    param_1 = param_1 + 0x20;
    func_0x000107c61148(param_1);
    lVar1 = param_1;
    func_0x000107c4ee08();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100803cdc; end: 100803d7f; +[SCLensDataProviderV2AllStoresMockableDependencyProvider _lazyPredefinedStoreWithStore:] */

void FUN_100803cdc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ddd08;
    func_0x000107c610f4(PTR_PTR_1126ddd08);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_100bcb230;
    puStack_30 = &UNK_110855710;
    func_0x000107c61174(param_3);
    lStack_28 = param_3;
    func_0x000107c46ea4(puVar1,param_2,&puStack_48);
    func_0x000107c61170(lStack_28);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100803d80; end: 100803d8f; +[SCLensDataProviderV2AllStoresMockableDependencyProvider addMetadataStore:toArray:] */

void FUN_100803d80(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_4,PTR_s_addObject__11259c1f0);
    return;
  }
  return;
}



/* Entry: 100803d90; end: 100803e8f; +[SCLensDataProviderV2AllStoresMockableDependencyProvider _scheduledLensMetadataStoreWithContext:liveCameraScheduleMetadataStoreCreator:announcerPerformer:lensPerformerProvider:] */

void FUN_100803d90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puVar1 = PTR_PTR_1126ddd08;
  func_0x000107c610f4(PTR_PTR_1126ddd08);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_100bcd8ac;
  puStack_68 = &UNK_110ae0868;
  func_0x000107c61174(param_4);
  uStack_60 = param_4;
  func_0x000107c61174(param_5);
  uStack_58 = param_5;
  uStack_48 = param_3;
  func_0x000107c61174(param_6);
  uStack_50 = param_6;
  func_0x000107c46ea4(puVar1,param_2,&puStack_80);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100803e90; end: 100803f1f; -[SCCompositeLensMetadataStore initWithMetaDataStores:] */

undefined1 * FUN_100803e90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701588;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ddc80;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100803f20; end: 100803f27; -[SCLensDataProviderV2AllStoresMockableDependencyProvider sortStrategy] */

void FUN_100803f20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c246b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_sortStrategy_11266f500);
  return;
}



/* Entry: 100803f28; end: 100803fc3; -[SCLensDataProviderV2MockableDependencyProvider sortStrategy] */

void FUN_100803f28(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_1 + 0x20;
  func_0x000107c61148();
  func_0x000107c61170();
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x000107c5c734(lVar3);
    func_0x000107c61180();
  }
  else {
    lVar1 = param_1 + 0x20;
    func_0x000107c61148(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x000107c4ee20(lVar1,param_2,uVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100803fc4; end: 100803ff3;  */

void FUN_100803fc4(void)

{
  func_0x000107c610f4(PTR_PTR_1126b1b78);
  func_0x000107c468a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100803ff4; end: 1008040b3; -[SCMainCameraLensCarouselSortStrategy initWithFeatureStateProvider:bundledLensProvider:] */

undefined1 *
FUN_100803ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112705aa8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126dfad8;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008040b4; end: 1008043a7; -[SCLensDataProviderFactory createDataProviderWithConfiguration:metadataStore:sortStrategy:bundledLensProvider:] */

void FUN_1008040b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174();
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar12);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174();
  puVar4 = PTR_PTR_1126ddd28;
  func_0x000107c610f4();
  func_0x000107c45db0();
  puVar5 = PTR_PTR_1126ddd30;
  func_0x000107c610f4();
  func_0x000107c4587c();
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61174(uVar11);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c61174(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c61174(uVar9);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c61174();
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61174(uVar10);
  puVar7 = PTR_PTR_1126ae720;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_100b78134;
  puStack_d8 = &UNK_110ae07d8;
  uStack_d0 = uVar10;
  uStack_c8 = uVar1;
  uStack_c0 = uVar2;
  uStack_b8 = param_4;
  uStack_b0 = param_5;
  uStack_a8 = uVar3;
  uStack_a0 = uVar12;
  puStack_98 = puVar5;
  uStack_90 = param_3;
  uStack_88 = uVar11;
  uStack_80 = uVar8;
  uStack_78 = uVar9;
  uStack_70 = uVar6;
  func_0x000107c61174();
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar5);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar10);
  func_0x000107c3e4fc(puVar7,param_2,&puStack_f0);
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(uStack_88);
  func_0x000107c61170(uStack_90);
  func_0x000107c61170(puStack_98);
  func_0x000107c61170(uStack_a0);
  func_0x000107c61170(uStack_a8);
  func_0x000107c61170(uStack_b0);
  func_0x000107c61170(uStack_b8);
  func_0x000107c61170(uStack_c0);
  func_0x000107c61170(uStack_c8);
  func_0x000107c61170(uStack_d0);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1008043a8; end: 1008043f3; -[SCLensAuthPrefetchFiltersFactory initWithCircumstanceEngine:] */

long FUN_1008043a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  if (param_1 != 0) {
    func_0x000107c61174(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 1008043f4; end: 100804467; -[SCLensBackendPrefetchFiltersFactory initWithAuthPrefetchFilterFactory:] */

undefined1 * FUN_1008043f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127058e8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100804468; end: 100804497; -[SCLensDataProviderV2AllStoresMockableDependencyProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100804480: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100804484) */

void FUN_100804468(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 100804498; end: 1008044db; -[SCLensDataProviderV2MockableDependencyProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001008044b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008044bc) */

void FUN_100804498(long param_1)

{
  func_0x000107c61120(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1008044dc; end: 1008044ff;  */

undefined8 FUN_1008044dc(void)

{
  func_0x000107c61174(0);
  func_0x000107c61170(0);
  return 0;
}



/* Entry: 100804500; end: 100804557;  */

void FUN_100804500(void)

{
  func_0x000107c610f4(PTR_PTR_1126dda30);
  func_0x000107c47420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100804558; end: 10080484f; -[SCLensUnlockableDataProviderFactory initWithLensUnlocker:lensDataFetcherFactory:adaptiveLensFetcherFactory:lensRemovalManager:circumstanceEngine:lensDataConfigProvider:lensUserProvider:lensCarouselStudySettings:bundledLensProvider:networkConnectivityMonitor:networkBandwidthEstimator:centralizedLensStoreProvider:lensContentCacheProvider:] */

undefined8 *
FUN_100804558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  puStack_68 = PTR_PTR_112700e10;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
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



/* Entry: 100804850; end: 1008048cf;  */

/* WARNING: Possible PIC construction at 0x000100804864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100804874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100804884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100804894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008048a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008048b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008048a8) */
/* WARNING: Removing unreachable block (ram,0x000100804898) */
/* WARNING: Removing unreachable block (ram,0x000100804888) */
/* WARNING: Removing unreachable block (ram,0x000100804878) */
/* WARNING: Removing unreachable block (ram,0x000100804868) */
/* WARNING: Removing unreachable block (ram,0x0001008048b8) */

void FUN_100804850(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x80));
  return;
}



/* Entry: 1008048d0; end: 1008048db; -[SCLensUnlockableDataProviderFactory lensUnlockableDataProviderWithDataProvider:lensMetadataStore:delegate:] */

void FUN_1008048d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c097a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_lensUnlockableDataProviderWithDa_1126038a8,param_3,param_4,0,param_5);
  return;
}



/* Entry: 1008048dc; end: 100804907; -[SCLensUnlockableDataProviderFactory lensUnlockableDataProviderWithDataProvider:lensMetadataStore:prefetchCapacity:delegate:] */

void FUN_1008048dc(void)

{
  func_0x000107c4b4f8();
  return;
}



/* Entry: 100804908; end: 100804ac3; -[SCLensUnlockableDataProviderFactory lensUnlockableDataProviderWithDataProvider:lensMetadataStore:prefetchCapacity:delegate:isReply:lensCentralizedStoreNamespace:featureAttribution:] */

void FUN_100804908(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  if (param_8 == 0) {
    param_1 = PTR_PTR_1126dda30;
    func_0x000107c3b384();
    func_0x000107c61180();
  }
  else {
    func_0x000107c3b380();
    func_0x000107c61180();
  }
  func_0x000107c61144(auStack_58,param_6);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100804ac4; end: 100804bc3; +[SCLensUnlockableDataProviderFactory _createStrategyWithMetadataStore:lensUnlocker:prefetchCapacity:isReply:studySettings:] */

void FUN_100804ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_7);
  puVar1 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_100bce824;
  puStack_70 = &UNK_110ae0ad8;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_7;
  uStack_50 = param_5;
  uStack_48 = param_6;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c3e4fc(puVar1,param_2,&puStack_88);
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100804bc4; end: 100804c1b;  */

void FUN_100804bc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ddd80;
  func_0x000107c610f4(PTR_PTR_1126ddd80);
  func_0x000107c47270();
  param_1 = param_1 + 0x30;
  func_0x000107c61148(param_1);
  func_0x000107c53fcc(puVar1,param_2,param_1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100804c1c; end: 100804ceb; -[SCLensUnlockableDataProvider initWithLensDataProvider:strategy:] */

undefined8
FUN_100804c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f55c07a);
  func_0x000107c61180();
  func_0x000107c470d0(puVar1,param_2,puVar2,0x19,0,0xe);
  func_0x000107c61170(puVar2);
  func_0x000107c47274(param_1,param_2,param_3,param_4,puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 100804cec; end: 100804d9f; -[SCLensUnlockableDataProvider initWithLensDataProvider:strategy:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100804cec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127832d0);
  *(undefined8 *)(param_1 + _DAT_1127832d0) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127832d4);
  *(undefined8 *)(param_1 + _DAT_1127832d4) = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127832d8);
  *(undefined8 *)(param_1 + _DAT_1127832d8) = param_5;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 100804da0; end: 100804db3; -[SCLensUnlockableDataProvider setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100804da0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127832dc,param_3);
  return;
}



/* Entry: 100804db4; end: 100804dfb; -[SCLensDataProviderRegistry updateLensDataProvider:] */

void FUN_100804db4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c3b088(param_1);
  func_0x000107c55ce4(param_1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010be651d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyUpdateListeners_112576e10);
  return;
}



/* Entry: 100804dfc; end: 100804e0b; -[SCLensDataProviderRegistry _clearLensDataProviderState] */

void FUN_100804dfc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100804e0c; end: 100804f7f; -[SCLensDataProviderRegistry setLensDataProvider:] */

void FUN_100804e0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c61180();
  func_0x000107c5e338(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c61174(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  func_0x000107c61170(uVar2);
  func_0x000107c61144(auStack_48,param_3);
  puVar1 = PTR_PTR_1126ddd08;
  func_0x000107c610f4();
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c46ea4();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  func_0x000107c61170(uVar2);
  func_0x000107c3d740(*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c61180();
  func_0x000107c41a88(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100804f80; end: 10080522b; -[SCLensUIUpdateListenerAnnouncer addListener:] */

undefined8 FUN_100804f80(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c60d88(param_1 + 8);
  plVar3 = (long *)0x30;
  func_0x000107c60e20();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_DAT_110d5c250;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    func_0x000107c61144(auStack_90,param_3);
    FUN_10080522c(plVar10,auStack_90);
    func_0x000107c61120(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_10080536c(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_100805134:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x000107c60d68(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        func_0x000107c61148();
        func_0x000107c61170();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_100805154;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      func_0x000107c61148();
      func_0x000107c61170();
      if (lVar5 != 0) {
        FUN_10080522c(plVar10,lVar7);
      }
    }
    func_0x000107c61144(auStack_78,param_3);
    FUN_10080522c(plVar10,auStack_78);
    func_0x000107c61120(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_10080536c(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_100805134;
    }
  }
  uVar9 = 1;
LAB_100805154:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      func_0x000107c60d68(plVar3);
    }
  }
  func_0x000107c60d8c(param_1 + 8);
  func_0x000107c61170(param_3);
  return uVar9;
}



/* Entry: 10080522c; end: 10080536b;  */

void FUN_10080522c(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    func_0x000107c6111c(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      func_0x000107c309d0();
LAB_100805368:
      func_0x000104bd35f4();
      plVar5 = param_1;
      func_0x000107c60c40();
      func_0x000107c60dc4();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_100805368;
      lVar4 = uVar7 << 3;
      func_0x000107c60e20();
    }
    lVar9 = lVar4 + lVar9;
    func_0x000107c6111c(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        func_0x000107c6114c(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        func_0x000107c61120(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      func_0x000107c60e14(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 10080536c; end: 1008053b3;  */

void FUN_10080536c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x000107c60c40();
  func_0x000107c60dc4();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 1008053b4; end: 1008053c3; -[SCLensDataProviderRegistry _notifyUpdateListeners] */

void FUN_1008053b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0925b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_lensDataProviderRegistry_didUpda_112602378,
             param_1,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1008053c4; end: 1008054d7; -[SCLensDataProviderRegistryUpdateListenerAnnouncer lensDataProviderRegistry:didUpdateLensDataProvider:cameraViewType:] */

/* WARNING: Possible PIC construction at 0x00010080543c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100805484: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100805440) */
/* WARNING: Removing unreachable block (ram,0x000100805488) */

void FUN_1008053c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_50;
  long *plStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  FUN_1008054d8(&plStack_50,param_1 + 0x48);
  if ((plStack_50 == (long *)0x0) || (lVar4 = *plStack_50, lVar4 == plStack_50[1])) {
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        func_0x000107c60d68(plStack_48);
      }
    }
  }
  else {
    func_0x000107c61148(lVar4);
    func_0x000107c4b048();
    param_4 = lVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1008054d8; end: 100805537;  */

void FUN_1008054d8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  func_0x000107c60c40(param_2);
  func_0x000107c60dc4();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}


