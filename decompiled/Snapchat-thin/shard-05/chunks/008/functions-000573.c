/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10429686c; end: 10429687b; -[SCAdSnapCommonTrackInfo deltaBetweenReceiveAndRenderInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10429686c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306adf8);
}



/* Entry: 10429687c; end: 10429688b; -[SCAdSnapCommonTrackInfo topSnapTimeViewedInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10429687c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ae00);
}



/* Entry: 10429688c; end: 10429689b; -[SCAdSnapCommonTrackInfo topSnapMediaDurationInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10429688c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ae08);
}



/* Entry: 10429689c; end: 1042968ab; -[SCAdSnapCommonTrackInfo topsnapViewTimeInMillisV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10429689c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ae10);
}



/* Entry: 1042968ac; end: 1042968bb; -[SCAdSnapCommonTrackInfo returnToAppTimeMsInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042968ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ae18);
}



/* Entry: 1042968bc; end: 1042968cb; -[SCAdSnapCommonTrackInfo topSnapUncappedMaxUnobstructedViewTimeInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042968bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ae20);
}



/* Entry: 1042968cc; end: 1042968db; -[SCAdSnapCommonTrackInfo topSnapUncappedTotalUnobstructedAudibleViewTimeInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042968cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ae28);
}



/* Entry: 1042968dc; end: 1042968ef; -[SCAdSnapCommonTrackInfo maxMediaVolumeForMediaPlayback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042968dc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306ae30);
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



/* Entry: 1042968f0; end: 1042968ff; -[SCAdSnapCommonTrackInfo swipeCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042968f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ae38);
}



/* Entry: 104296900; end: 10429690f; -[SCAdSnapCommonTrackInfo longformMaxViewedDurationInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104296900(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ae40);
}



/* Entry: 104296910; end: 10429691b; -[SCAdSnapCommonTrackInfo exitEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296910(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ae48))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ae48);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10429691c; end: 104296973;  */

void FUN_10429691c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104296974; end: 104296983; -[SCAdSnapCommonTrackInfo shouldReportThirdPartyMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104296974(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ae50);
}



/* Entry: 104296984; end: 104296993; -[SCAdSnapCommonTrackInfo thirdPartyTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ae58));
  return;
}



/* Entry: 104296994; end: 1042969a3; -[SCAdSnapCommonTrackInfo wasBoosted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104296994(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ae60);
}



/* Entry: 1042969a4; end: 1042969b3; -[SCAdSnapCommonTrackInfo composerDpaMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042969a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ae68));
  return;
}



/* Entry: 1042969b4; end: 1042969c3; -[SCAdSnapCommonTrackInfo adSkippableType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042969b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ae70);
}



/* Entry: 1042969c4; end: 1042969d3; -[SCAdSnapCommonTrackInfo adLifecycleTimestamps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042969c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ae78));
  return;
}



/* Entry: 1042969d4; end: 1042969e3; -[SCAdSnapCommonTrackInfo detailedGestureParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042969d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ae80));
  return;
}



/* Entry: 1042969e4; end: 1042969f3; -[SCAdSnapCommonTrackInfo exitEventSwipeInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042969e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ae88));
  return;
}



/* Entry: 1042969f4; end: 104296a07; -[SCAdSnapCommonTrackInfo stickerMetadataArray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042969f4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306ae90);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1042a8530(0);
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



/* Entry: 104296a08; end: 104296a17; -[SCAdSnapCommonTrackInfo adSurveyResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104296a08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ae98);
}



/* Entry: 104296a18; end: 104296a27; -[SCAdSnapCommonTrackInfo adShareOpen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104296a18(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306aea0);
}



/* Entry: 104296a28; end: 104296a37; -[SCAdSnapCommonTrackInfo adShareSend] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104296a28(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306aea8);
}



/* Entry: 104296a38; end: 104296a47; -[SCAdSnapCommonTrackInfo swipeUpAttemptCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104296a38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306aeb0);
}



/* Entry: 104296a48; end: 104296a57; -[SCAdSnapCommonTrackInfo allSwipeAttemptsCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104296a48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306aeb8);
}



/* Entry: 104296a58; end: 104296a67; -[SCAdSnapCommonTrackInfo adSubscribed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104296a58(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306aec0);
}



/* Entry: 104296a68; end: 104296a7b; -[SCAdSnapCommonTrackInfo adSubscribeButtonTappedTimestampMsArray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296a68(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306aec8);
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



/* Entry: 104296a7c; end: 104296a8b; -[SCAdSnapCommonTrackInfo initialAdSubscribed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104296a7c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306aed0);
}



/* Entry: 104296a8c; end: 104296a9b; -[SCAdSnapCommonTrackInfo contextMenuOpen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104296a8c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306aed8);
}



/* Entry: 104296a9c; end: 104296aab; -[SCAdSnapCommonTrackInfo arShoppingExperienceTrack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296a9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306aee0));
  return;
}



/* Entry: 104296aac; end: 104296abb; -[SCAdSnapCommonTrackInfo adFavorited] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104296aac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306aee8);
}



/* Entry: 104296abc; end: 104296acf; -[SCAdSnapCommonTrackInfo adFavoriteButtonTappedTimestampMsArray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296abc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306aef0);
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



/* Entry: 104296ad0; end: 104296adf; -[SCAdSnapCommonTrackInfo adFavoriteTapSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104296ad0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306aef8);
}



/* Entry: 104296ae0; end: 104296af3; -[SCAdSnapCommonTrackInfo clickInteractionsArray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296ae0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306af00);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    (*(code *)&SUB_1047e0610)(0);
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



/* Entry: 104296af4; end: 104296b4b;  */

void FUN_104296af4(long param_1,undefined8 param_2,long *param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    (*param_4)(0);
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



/* Entry: 104296b4c; end: 104296b5f; -[SCAdSnapCommonTrackInfo tapToPauseInteractionsArray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296b4c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306af08);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    (*(code *)&SUB_10482f460)(0);
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



/* Entry: 104296b60; end: 104296b73; -[SCAdSnapCommonTrackInfo tooltipImpressionsArray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296b60(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306af10);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    (*(code *)&SUB_104830004)(0);
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



/* Entry: 104296b74; end: 104296b83; -[SCAdSnapCommonTrackInfo preferredWidthDp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296b74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306af18));
  return;
}



/* Entry: 104296b84; end: 104296b93; -[SCAdSnapCommonTrackInfo preferredHeightDp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296b84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306af20));
  return;
}



/* Entry: 104296b94; end: 104296ba3; -[SCAdSnapCommonTrackInfo preferredImageSizeDp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296b94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306af28));
  return;
}



/* Entry: 104296ba4; end: 104296bb7; -[SCAdSnapCommonTrackInfo topSnapInteractionInfos] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296ba4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306af30);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1042ac494(0);
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



/* Entry: 104296bb8; end: 104296bcb; -[SCAdSnapCommonTrackInfo topSnapImpressionInfos] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296bb8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306af38);
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



/* Entry: 104296bcc; end: 104296c1b;  */

void FUN_104296bcc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
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



/* Entry: 104296c1c; end: 104296c2b; -[SCAdSnapCommonTrackInfo stickerInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296c1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306af40));
  return;
}



/* Entry: 104296c2c; end: 104296c3b; -[SCAdSnapCommonTrackInfo endCardInteractionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296c2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306af48));
  return;
}



/* Entry: 104296c3c; end: 104296c4b; -[SCAdSnapCommonTrackInfo playableImpressionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296c3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306af50));
  return;
}



/* Entry: 104296c4c; end: 104296c5b; -[SCAdSnapCommonTrackInfo canShowMultiSegmentExperience] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104296c4c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306af58);
}



/* Entry: 104296c5c; end: 104296c77; -[SCAdSnapCommonTrackInfo valdiAdTrackEventWrappers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296c5c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306af60);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_10429feb4(0,0x112ff6760,&PTR_PTR_1126ad980);
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



/* Entry: 104296c78; end: 104296cd7;  */

void FUN_104296c78(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_10429feb4(0,param_4,param_5);
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



/* Entry: 104296cd8; end: 104296ce7; -[SCAdSnapCommonTrackInfo captionCtaImpression] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296cd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306af68));
  return;
}



/* Entry: 104296ce8; end: 104296cf7; -[SCAdSnapCommonTrackInfo promoCodeImpression] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296ce8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306af70));
  return;
}



/* Entry: 104296cf8; end: 104296d07; -[SCAdSnapCommonTrackInfo wakeUpUiTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296cf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306af78));
  return;
}



/* Entry: 104296d08; end: 104296d17; -[SCAdSnapCommonTrackInfo pollStickerTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296d08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306af80));
  return;
}



/* Entry: 104296d18; end: 104296d27; -[SCAdSnapCommonTrackInfo liveReviewTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296d18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306af88));
  return;
}



/* Entry: 104296d28; end: 104296d37; -[SCAdSnapCommonTrackInfo initialAdFavorited] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296d28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306af90));
  return;
}



/* Entry: 104296d38; end: 104296d47; -[SCAdSnapCommonTrackInfo initialAdReposted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296d38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306af98));
  return;
}



/* Entry: 104296d48; end: 104296d57; -[SCAdSnapCommonTrackInfo adReposted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296d48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306afa0));
  return;
}



/* Entry: 104296d58; end: 104296d73; -[SCAdSnapCommonTrackInfo adRepostButtonTappedTimestampMsArray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296d58(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306afa8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_10429feb4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
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



/* Entry: 104296d74; end: 10429776f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296d74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
                  undefined4 param_17,undefined8 param_18,undefined1 param_19,undefined4 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined4 param_28,
                  undefined4 param_29,undefined8 param_30,undefined8 param_31,undefined1 param_32,
                  undefined4 param_33,undefined8 param_34,undefined4 param_35,undefined4 param_36,
                  undefined8 param_37,undefined1 param_38,undefined4 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined1 param_53,undefined4 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ade8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11306adf0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11306adf8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306ae00) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11306ae08) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11306ae10) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306ae18) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306ae20) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306ae28) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306ae30) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11306ae38) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_11306ae40) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ae48);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  *(undefined1 *)(unaff_x20 + _DAT_11306ae50) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_11306ae58) = param_18;
  *(undefined1 *)(unaff_x20 + _DAT_11306ae60) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_11306ae68) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_11306ae70) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_11306ae78) = param_23;
  *(undefined8 *)(unaff_x20 + _DAT_11306ae80) = param_24;
  *(undefined8 *)(unaff_x20 + _DAT_11306ae88) = param_25;
  *(undefined8 *)(unaff_x20 + _DAT_11306ae90) = param_26;
  *(undefined8 *)(unaff_x20 + _DAT_11306ae98) = param_27;
  *(undefined1 *)(unaff_x20 + _DAT_11306aea0) = (undefined1)param_28;
  *(undefined1 *)(unaff_x20 + _DAT_11306aea8) = param_28._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_11306aeb0) = param_30;
  *(undefined8 *)(unaff_x20 + _DAT_11306aeb8) = param_31;
  *(undefined1 *)(unaff_x20 + _DAT_11306aec0) = param_32;
  *(undefined8 *)(unaff_x20 + _DAT_11306aec8) = param_34;
  *(undefined1 *)(unaff_x20 + _DAT_11306aed0) = (undefined1)param_35;
  *(undefined1 *)(unaff_x20 + _DAT_11306aed8) = param_35._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_11306aee0) = param_37;
  *(undefined1 *)(unaff_x20 + _DAT_11306aee8) = param_38;
  *(undefined8 *)(unaff_x20 + _DAT_11306aef0) = param_40;
  *(undefined8 *)(unaff_x20 + _DAT_11306aef8) = param_41;
  *(undefined8 *)(unaff_x20 + _DAT_11306af00) = param_42;
  *(undefined8 *)(unaff_x20 + _DAT_11306af08) = param_43;
  *(undefined8 *)(unaff_x20 + _DAT_11306af10) = param_44;
  *(undefined8 *)(unaff_x20 + _DAT_11306af18) = param_45;
  *(undefined8 *)(unaff_x20 + _DAT_11306af20) = param_46;
  *(undefined8 *)(unaff_x20 + _DAT_11306af28) = param_47;
  *(undefined8 *)(unaff_x20 + _DAT_11306af30) = param_48;
  *(undefined8 *)(unaff_x20 + _DAT_11306af38) = param_49;
  *(undefined8 *)(unaff_x20 + _DAT_11306af40) = param_50;
  *(undefined8 *)(unaff_x20 + _DAT_11306af48) = param_51;
  *(undefined8 *)(unaff_x20 + _DAT_11306af50) = param_52;
  *(undefined1 *)(unaff_x20 + _DAT_11306af58) = param_53;
  *(undefined8 *)(unaff_x20 + _DAT_11306af60) = param_55;
  *(undefined8 *)(unaff_x20 + _DAT_11306af68) = param_56;
  *(undefined8 *)(unaff_x20 + _DAT_11306af70) = param_57;
  *(undefined8 *)(unaff_x20 + _DAT_11306af78) = param_58;
  *(undefined8 *)(unaff_x20 + _DAT_11306af80) = param_59;
  *(undefined8 *)(unaff_x20 + _DAT_11306af88) = param_60;
  *(undefined8 *)(unaff_x20 + _DAT_11306af90) = param_61;
  *(undefined8 *)(unaff_x20 + _DAT_11306af98) = param_62;
  *(undefined8 *)(unaff_x20 + _DAT_11306afa0) = param_63;
  *(undefined8 *)(unaff_x20 + _DAT_11306afa8) = param_64;
  _objc_msgSendSuper2(auStack_a8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104297770; end: 104297dcf; -[SCAdSnapCommonTrackInfo initWithCreativeId:snapIndex:deltaBetweenReceiveAndRenderInMillis:topSnapTimeViewedInMillis:topSnapMediaDurationInMillis:topsnapViewTimeInMillisV2:returnToAppTimeMsInMillis:topSnapUncappedMaxUnobstructedViewTimeInMillis:topSnapUncappedTotalUnobstructedAudibleViewTimeInMillis:maxMediaVolumeForMediaPlayback:swipeCount:longformMaxViewedDurationInMillis:exitEvent:shouldReportThirdPartyMetrics:thirdPartyTrackInfo:wasBoosted:composerDpaMetadata:adSkippableType:adLifecycleTimestamps:detailedGestureParameters:exitEventSwipeInfo:stickerMetadataArray:adSurveyResponse:adShareOpen:adShareSend:swipeUpAttemptCount:allSwipeAttemptsCount:adSubscribed:adSubscribeButtonTappedTimestampMsArray:initialAdSubscribed:contextMenuOpen:arShoppingExperienceTrack:adFavorited:adFavoriteButtonTappedTimestampMsArray:adFavoriteTapSource:clickInteractionsArray:tapToPauseInteractionsArray:tooltipImpressionsArray:preferredWidthDp:preferredHeightDp:preferredImageSizeDp:topSnapInteractionInfos:topSnapImpressionInfos:stickerInfo:endCardInteractionInfo:playableImpressionInfo:canShowMultiSegmentExperience:valdiAdTrackEventWrappers:captionCtaImpression:promoCodeImpression:wakeUpUiTrackInfo:pollStickerTrackInfo:liveReviewTrackInfo:initialAdFavorited:initialAdReposted:adReposted:adRepostButtonTappedTimestampMsArray:] */

void FUN_104297770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined *param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  long param_13,undefined8 param_14,long param_15,undefined1 param_16)

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
  undefined8 uVar11;
  long in_stack_00000048;
  long in_stack_00000078;
  long in_stack_00000098;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_00000108;
  long in_stack_00000150;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined *puStack_110;
  long lStack_108;
  
  if (param_9 == 0) {
    puStack_110 = (undefined *)0x0;
    lStack_108 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_110 = param_8;
    lStack_108 = param_9;
  }
  if (param_13 == 0) {
    lStack_118 = 0;
    puStack_128 = param_8;
  }
  else {
    puStack_128 = PTR___sSdN_11034dd90;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    lStack_118 = param_13;
  }
  if (param_15 == 0) {
    lStack_120 = 0;
    puStack_128 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_120 = param_15;
  }
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  lVar1 = in_stack_00000048;
  _objc_retain();
  lVar2 = in_stack_00000078;
  _objc_retain();
  _objc_retain();
  lVar3 = in_stack_00000098;
  _objc_retain();
  lVar4 = in_stack_000000a8;
  _objc_retain();
  lVar5 = in_stack_000000b0;
  _objc_retain();
  lVar6 = in_stack_000000b8;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  lVar7 = in_stack_000000d8;
  _objc_retain();
  lVar8 = in_stack_000000e0;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  lVar9 = in_stack_00000108;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  lVar10 = in_stack_00000150;
  _objc_retain();
  if (lVar1 != 0) {
    uVar11 = 0;
    FUN_1042a8530(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (in_stack_00000048,uVar11);
    _objc_release(lVar1);
  }
  if (lVar2 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (in_stack_00000078,PTR___sSdN_11034dd90);
    _objc_release(lVar2);
  }
  if (lVar3 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (in_stack_00000098,PTR___sSdN_11034dd90);
    _objc_release(lVar3);
  }
  if (lVar4 != 0) {
    uVar11 = 0;
    func_0x0001047e0610(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (in_stack_000000a8,uVar11);
    _objc_release(lVar4);
  }
  if (lVar5 != 0) {
    uVar11 = 0;
    func_0x00010482f460(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (in_stack_000000b0,uVar11);
    _objc_release(lVar5);
  }
  if (lVar6 != 0) {
    uVar11 = 0;
    func_0x000104830004(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (in_stack_000000b8,uVar11);
    _objc_release(lVar6);
  }
  if (lVar7 != 0) {
    uVar11 = 0;
    FUN_1042ac494(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (in_stack_000000d8,uVar11);
    _objc_release(lVar7);
  }
  if (lVar8 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (in_stack_000000e0,PTR___s10Foundation4DataVN_110350ae0);
    _objc_release(lVar8);
  }
  if (lVar9 != 0) {
    uVar11 = 0;
    FUN_10429feb4(0,0x112ff6760,&PTR_PTR_1126ad980);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (in_stack_00000108,uVar11);
    _objc_release(lVar9);
  }
  if (lVar10 != 0) {
    uVar11 = 0;
    FUN_10429feb4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (in_stack_00000150,uVar11);
    _objc_release(lVar10);
  }
  func_0x000104297274(param_1,param_2,param_3,param_4,param_5,param_6,lStack_108,puStack_110,
                      param_10,param_11,param_12,lStack_118,param_14,lStack_120,puStack_128,param_16
                     );
  return;
}



/* Entry: 104297dd0; end: 104297e03; -[SCAdSnapCommonTrackInfo hash] */

undefined8 FUN_104297dd0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104297e04();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104297e04; end: 1042989bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104297e04(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  double dVar6;
  undefined1 auStack_168 [72];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  __ss6HasherVABycfC(&uStack_d8);
  uStack_f8 = uStack_b0;
  uStack_100 = uStack_b8;
  uStack_e8 = uStack_a0;
  uStack_f0 = uStack_a8;
  uStack_e0 = uStack_98;
  uStack_118 = uStack_d0;
  uStack_120 = uStack_d8;
  uStack_108 = uStack_c0;
  uStack_110 = uStack_c8;
  if (((undefined8 *)(unaff_x20 + _DAT_11306ade8))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ade8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar4 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306adf0));
  dVar6 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306adf8) != 0.0) {
    dVar6 = *(double *)(unaff_x20 + _DAT_11306adf8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar6);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306ae00));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306ae08));
  dVar6 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306ae10) != 0.0) {
    dVar6 = *(double *)(unaff_x20 + _DAT_11306ae10);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar6);
  dVar6 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306ae18) != 0.0) {
    dVar6 = *(double *)(unaff_x20 + _DAT_11306ae18);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar6);
  dVar6 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306ae20) != 0.0) {
    dVar6 = *(double *)(unaff_x20 + _DAT_11306ae20);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar6);
  dVar6 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306ae28) != 0.0) {
    dVar6 = *(double *)(unaff_x20 + _DAT_11306ae28);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar6);
  lVar2 = *(long *)(unaff_x20 + _DAT_11306ae30);
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,PTR___sSdN_11034dd90);
    lVar5 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar5);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306ae38));
  dVar6 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306ae40) != 0.0) {
    dVar6 = *(double *)(unaff_x20 + _DAT_11306ae40);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar6);
  if (((undefined8 *)(unaff_x20 + _DAT_11306ae48))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ae48);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar4 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  uVar3 = (ulong)*(byte *)(unaff_x20 + _DAT_11306ae50);
  __ss6HasherV8_combineyys5UInt8VF(uVar3);
  if (*(long *)(unaff_x20 + _DAT_11306ae58) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1042a1a2c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  uVar3 = (ulong)*(byte *)(unaff_x20 + _DAT_11306ae60);
  __ss6HasherV8_combineyys5UInt8VF(uVar3);
  if (*(long *)(unaff_x20 + _DAT_11306ae68) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_10427fc80();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11306ae70);
  __ss6HasherV8_combineyySuF(uVar4);
  if (*(long *)(unaff_x20 + _DAT_11306ae78) == 0) {
    uVar4 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_10428c6f0();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  if (*(long *)(unaff_x20 + _DAT_11306ae80) == 0) {
    uVar4 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001047c7a70();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  if (*(long *)(unaff_x20 + _DAT_11306ae88) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104283d94();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306ae90);
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  else {
    uVar4 = 0;
    FUN_1042a8530(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar4);
    lVar5 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar5);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306ae98));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306aea0));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306aea8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306aeb0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306aeb8));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306aec0));
  lVar2 = *(long *)(unaff_x20 + _DAT_11306aec8);
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,PTR___sSdN_11034dd90);
    lVar5 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar5);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306aed0));
  uVar3 = (ulong)*(byte *)(unaff_x20 + _DAT_11306aed8);
  __ss6HasherV8_combineyys5UInt8VF(uVar3);
  if (*(long *)(unaff_x20 + _DAT_11306aee0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_10427c2f8();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306aee8));
  lVar2 = *(long *)(unaff_x20 + _DAT_11306aef0);
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,PTR___sSdN_11034dd90);
    lVar5 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar5);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306aef8));
  lVar2 = *(long *)(unaff_x20 + _DAT_11306af00);
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  else {
    uVar4 = 0;
    func_0x0001047e0610(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar4);
    lVar5 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar5);
  lVar2 = *(long *)(unaff_x20 + _DAT_11306af08);
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  else {
    uVar4 = 0;
    func_0x00010482f460(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar4);
    lVar5 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar5);
  lVar2 = *(long *)(unaff_x20 + _DAT_11306af10);
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  else {
    uVar4 = 0;
    func_0x000104830004(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar4);
    lVar5 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar5);
  lVar2 = *(long *)(unaff_x20 + _DAT_11306af18);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(&uStack_120);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306af20);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(&uStack_120);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306af28);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(&uStack_120);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306af30);
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  else {
    uVar4 = 0;
    FUN_1042ac494(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar4);
    lVar5 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar5);
  lVar2 = *(long *)(unaff_x20 + _DAT_11306af38);
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,PTR___s10Foundation4DataVN_110350ae0)
    ;
    lVar5 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar5);
  if (*(long *)(unaff_x20 + _DAT_11306af40) == 0) {
    lVar5 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1042a6dac();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar5);
  }
  if (*(long *)(unaff_x20 + _DAT_11306af48) == 0) {
    lVar5 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104282bb4();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar5);
  }
  if (*(long *)(unaff_x20 + _DAT_11306af50) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104291554();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar5);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306af58));
  lVar2 = *(long *)(unaff_x20 + _DAT_11306af60);
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  else {
    uVar4 = 0;
    FUN_10429feb4(0,0x112ff6760,&PTR_PTR_1126ad980);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar4);
    lVar5 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar5);
  if (*(long *)(unaff_x20 + _DAT_11306af68) == 0) {
    lVar5 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001047ddd14();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar5);
  }
  if (*(long *)(unaff_x20 + _DAT_11306af70) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x000104817028();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar5);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306af78);
  if (lVar2 == 0) {
    uVar4 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_168);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar2 + _DAT_11306b758));
    uVar4 = *(undefined8 *)(lVar2 + _DAT_11306b760);
    __ss6HasherV8_combineyySuF(uVar4);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  if (*(long *)(unaff_x20 + _DAT_11306af80) == 0) {
    uVar4 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104293770();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  if (*(long *)(unaff_x20 + _DAT_11306af88) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_10428e384();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306af90);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306af98);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306afa0);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_11306afa8);
  lVar2 = lVar5;
  if (lVar5 != 0) {
    uVar4 = 0;
    FUN_10429feb4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar5,uVar4);
    lVar2 = lVar5;
    func_0x00010bfde980();
    _objc_release(lVar5);
  }
  __ss6HasherV8_combineyySuF(lVar2);
  uStack_68 = uStack_f8;
  uStack_70 = uStack_100;
  uStack_58 = uStack_e8;
  uStack_60 = uStack_f0;
  uStack_50 = uStack_e0;
  uStack_88 = uStack_118;
  uStack_90 = uStack_120;
  uStack_78 = uStack_108;
  uStack_80 = uStack_110;
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042989bc; end: 104299b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042989bc(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  uint uVar25;
  uint uVar26;
  long *plVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  uint uVar34;
  uint uVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  uint uVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long unaff_x20;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  uint uStack_228;
  uint uStack_224;
  uint uStack_220;
  uint uStack_21c;
  uint uStack_218;
  uint uStack_214;
  uint uStack_210;
  uint uStack_204;
  uint uStack_200;
  uint uStack_1fc;
  uint uStack_1d0;
  uint uStack_180;
  uint uStack_17c;
  uint uStack_178;
  uint uStack_16c;
  uint uStack_160;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  long lStack_d0;
  long alStack_c8 [5];
  
  lVar31 = unaff_x20;
  _swift_getObjectType();
  func_0x00010429ff9c(param_1,alStack_c8,0x112d387f8,&UNK_10d902650);
  if (alStack_c8[3] == 0) {
    FUN_10429ff14(alStack_c8,0x112d387f8,&UNK_10d902650);
    return 0;
  }
  plVar27 = &lStack_d0;
  _swift_dynamicCast(plVar27,alStack_c8,PTR___sypN_11034f1a8 + 8,lVar31,6);
  if (((ulong)plVar27 & 1) == 0) {
    return 0;
  }
  lVar31 = ((long *)(unaff_x20 + _DAT_11306ade8))[1];
  lVar32 = ((long *)(lStack_d0 + _DAT_11306ade8))[1];
  if (lVar31 == 0 || lVar32 == 0) {
    uStack_e4 = (uint)(lVar31 == 0 && lVar32 == 0);
  }
  else {
    lVar36 = *(long *)(unaff_x20 + _DAT_11306ade8);
    if (lVar36 == *(long *)(lStack_d0 + _DAT_11306ade8) && lVar31 == lVar32) {
      uStack_e4 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uStack_e4 = (uint)lVar36;
    }
  }
  lVar40 = *(long *)(unaff_x20 + _DAT_11306adf0);
  lVar32 = *(long *)(lStack_d0 + _DAT_11306adf0);
  dVar57 = *(double *)(unaff_x20 + _DAT_11306adf8);
  dVar55 = *(double *)(lStack_d0 + _DAT_11306adf8);
  lVar41 = *(long *)(unaff_x20 + _DAT_11306ae00);
  lVar36 = *(long *)(lStack_d0 + _DAT_11306ae00);
  lVar42 = *(long *)(unaff_x20 + _DAT_11306ae08);
  dVar58 = *(double *)(unaff_x20 + _DAT_11306ae10);
  dVar56 = *(double *)(lStack_d0 + _DAT_11306ae10);
  dVar63 = *(double *)(unaff_x20 + _DAT_11306ae18);
  dVar64 = *(double *)(lStack_d0 + _DAT_11306ae18);
  dVar65 = *(double *)(unaff_x20 + _DAT_11306ae20);
  dVar66 = *(double *)(lStack_d0 + _DAT_11306ae20);
  dVar59 = *(double *)(unaff_x20 + _DAT_11306ae28);
  dVar60 = *(double *)(lStack_d0 + _DAT_11306ae28);
  lVar31 = *(long *)(unaff_x20 + _DAT_11306ae30);
  uVar39 = (uint)(lVar31 == 0 && *(long *)(lStack_d0 + _DAT_11306ae30) == 0);
  lVar37 = *(long *)(lStack_d0 + _DAT_11306ae08);
  if ((lVar31 != 0) && (*(long *)(lStack_d0 + _DAT_11306ae30) != 0)) {
    FUN_10422988c();
    uVar39 = (uint)lVar31;
  }
  lVar43 = *(long *)(unaff_x20 + _DAT_11306ae38);
  lVar38 = *(long *)(lStack_d0 + _DAT_11306ae38);
  dVar61 = *(double *)(unaff_x20 + _DAT_11306ae40);
  dVar62 = *(double *)(lStack_d0 + _DAT_11306ae40);
  lVar31 = ((long *)(unaff_x20 + _DAT_11306ae48))[1];
  lVar33 = ((long *)(lStack_d0 + _DAT_11306ae48))[1];
  uVar25 = (uint)(lVar31 == 0 && lVar33 == 0);
  if ((lVar31 != 0) && (lVar33 != 0)) {
    lVar28 = *(long *)(unaff_x20 + _DAT_11306ae48);
    if ((lVar28 == *(long *)(lStack_d0 + _DAT_11306ae48)) && (lVar31 == lVar33)) {
      uVar25 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar25 = (uint)lVar28;
    }
  }
  bVar7 = *(byte *)(unaff_x20 + _DAT_11306ae50);
  bVar8 = *(byte *)(lStack_d0 + _DAT_11306ae50);
  if (*(long *)(unaff_x20 + _DAT_11306ae58) == 0) {
    uStack_160 = (uint)(*(long *)(lStack_d0 + _DAT_11306ae58) == 0);
  }
  else {
    lVar31 = *(long *)(lStack_d0 + _DAT_11306ae58);
    if (lVar31 == 0) {
      lVar33 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar33 = 0;
      FUN_1042a351c();
    }
    alStack_c8[0] = lVar31;
    alStack_c8[3] = lVar33;
    _objc_retain(lVar31);
    uStack_160 = 0;
    FUN_1042a1c64();
    FUN_10429ff14(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  bVar9 = *(byte *)(unaff_x20 + _DAT_11306ae60);
  bVar10 = *(byte *)(lStack_d0 + _DAT_11306ae60);
  if (*(long *)(unaff_x20 + _DAT_11306ae68) == 0) {
    uStack_16c = (uint)(*(long *)(lStack_d0 + _DAT_11306ae68) == 0);
  }
  else {
    lVar31 = *(long *)(lStack_d0 + _DAT_11306ae68);
    if (lVar31 == 0) {
      lVar33 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar33 = 0;
      FUN_104280784();
    }
    alStack_c8[0] = lVar31;
    alStack_c8[3] = lVar33;
    _objc_retain(lVar31);
    uStack_16c = 0;
    FUN_10427fdbc();
    FUN_10429ff14(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  iVar3 = *(int *)(unaff_x20 + _DAT_11306ae70);
  iVar4 = *(int *)(lStack_d0 + _DAT_11306ae70);
  if (*(long *)(unaff_x20 + _DAT_11306ae78) == 0) {
    uStack_178 = (uint)(*(long *)(lStack_d0 + _DAT_11306ae78) == 0);
  }
  else {
    lVar31 = *(long *)(lStack_d0 + _DAT_11306ae78);
    if (lVar31 == 0) {
      lVar33 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar33 = 0;
      FUN_10428e134();
    }
    alStack_c8[0] = lVar31;
    alStack_c8[3] = lVar33;
    _objc_retain(lVar31);
    uStack_178 = 0;
    FUN_10428c930();
    FUN_10429ff14(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  if (*(long *)(unaff_x20 + _DAT_11306ae80) == 0) {
    uStack_17c = (uint)(*(long *)(lStack_d0 + _DAT_11306ae80) == 0);
  }
  else {
    lVar31 = *(long *)(lStack_d0 + _DAT_11306ae80);
    if (lVar31 == 0) {
      lVar33 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar33 = 0;
      func_0x0001047c8648();
    }
    alStack_c8[0] = lVar31;
    alStack_c8[3] = lVar33;
    _objc_retain(lVar31);
    uStack_17c = 0;
    func_0x0001047c7c74();
    FUN_10429ff14(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  if (*(long *)(unaff_x20 + _DAT_11306ae88) == 0) {
    uStack_180 = (uint)(*(long *)(lStack_d0 + _DAT_11306ae88) == 0);
  }
  else {
    lVar31 = *(long *)(lStack_d0 + _DAT_11306ae88);
    if (lVar31 == 0) {
      lVar33 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar33 = 0;
      FUN_10428516c();
    }
    alStack_c8[0] = lVar31;
    alStack_c8[3] = lVar33;
    _objc_retain(lVar31);
    uStack_180 = 0;
    FUN_104284010();
    FUN_10429ff14(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  lVar33 = *(long *)(unaff_x20 + _DAT_11306ae90);
  lVar31 = *(long *)(lStack_d0 + _DAT_11306ae90);
  uVar51 = (uint)(lVar33 == 0 && lVar31 == 0);
  if ((lVar33 != 0) && (lVar31 != 0)) {
    _swift_bridgeObjectRetain(lVar31);
    lVar28 = lVar33;
    _swift_bridgeObjectRetain();
    uVar51 = (uint)lVar28;
    func_0x00010422a608();
    _swift_bridgeObjectRelease(lVar33);
    _swift_bridgeObjectRelease(lVar31);
  }
  lVar46 = *(long *)(unaff_x20 + _DAT_11306ae98);
  lVar47 = *(long *)(lStack_d0 + _DAT_11306ae98);
  bVar11 = *(byte *)(unaff_x20 + _DAT_11306aea0);
  bVar12 = *(byte *)(lStack_d0 + _DAT_11306aea0);
  bVar13 = *(byte *)(unaff_x20 + _DAT_11306aea8);
  bVar14 = *(byte *)(lStack_d0 + _DAT_11306aea8);
  lVar44 = *(long *)(unaff_x20 + _DAT_11306aeb0);
  lVar33 = *(long *)(lStack_d0 + _DAT_11306aeb0);
  lVar45 = *(long *)(unaff_x20 + _DAT_11306aeb8);
  lVar28 = *(long *)(lStack_d0 + _DAT_11306aeb8);
  bVar15 = *(byte *)(unaff_x20 + _DAT_11306aec0);
  bVar16 = *(byte *)(lStack_d0 + _DAT_11306aec0);
  lVar31 = *(long *)(unaff_x20 + _DAT_11306aec8);
  uVar34 = (uint)(lVar31 == 0 && *(long *)(lStack_d0 + _DAT_11306aec8) == 0);
  if ((lVar31 != 0) && (*(long *)(lStack_d0 + _DAT_11306aec8) != 0)) {
    FUN_10422988c();
    uVar34 = (uint)lVar31;
  }
  bVar17 = *(byte *)(unaff_x20 + _DAT_11306aed0);
  bVar18 = *(byte *)(lStack_d0 + _DAT_11306aed0);
  bVar19 = *(byte *)(unaff_x20 + _DAT_11306aed8);
  bVar20 = *(byte *)(lStack_d0 + _DAT_11306aed8);
  if (*(long *)(unaff_x20 + _DAT_11306aee0) == 0) {
    uStack_1d0 = (uint)(*(long *)(lStack_d0 + _DAT_11306aee0) == 0);
  }
  else {
    lVar31 = *(long *)(lStack_d0 + _DAT_11306aee0);
    if (lVar31 == 0) {
      lVar29 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar29 = 0;
      FUN_10427cc68();
    }
    alStack_c8[0] = lVar31;
    alStack_c8[3] = lVar29;
    _objc_retain(lVar31);
    uStack_1d0 = 0;
    FUN_10427c408();
    FUN_10429ff14(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  bVar21 = *(byte *)(unaff_x20 + _DAT_11306aee8);
  bVar22 = *(byte *)(lStack_d0 + _DAT_11306aee8);
  lVar31 = *(long *)(unaff_x20 + _DAT_11306aef0);
  uVar35 = (uint)(lVar31 == 0 && *(long *)(lStack_d0 + _DAT_11306aef0) == 0);
  if ((lVar31 != 0) && (*(long *)(lStack_d0 + _DAT_11306aef0) != 0)) {
    FUN_10422988c();
    uVar35 = (uint)lVar31;
  }
  iVar5 = *(int *)(unaff_x20 + _DAT_11306aef8);
  iVar6 = *(int *)(lStack_d0 + _DAT_11306aef8);
  lVar29 = *(long *)(unaff_x20 + _DAT_11306af00);
  lVar31 = *(long *)(lStack_d0 + _DAT_11306af00);
  uVar52 = (uint)(lVar29 == 0 && lVar31 == 0);
  if ((lVar29 != 0) && (lVar31 != 0)) {
    _swift_bridgeObjectRetain(lVar31);
    lVar30 = lVar29;
    _swift_bridgeObjectRetain();
    uVar52 = (uint)lVar30;
    func_0x00010422a61c();
    _swift_bridgeObjectRelease(lVar29);
    _swift_bridgeObjectRelease(lVar31);
  }
  lVar29 = *(long *)(unaff_x20 + _DAT_11306af08);
  lVar31 = *(long *)(lStack_d0 + _DAT_11306af08);
  uVar53 = (uint)(lVar29 == 0 && lVar31 == 0);
  if ((lVar29 != 0) && (lVar31 != 0)) {
    _swift_bridgeObjectRetain(lVar31);
    lVar30 = lVar29;
    _swift_bridgeObjectRetain();
    uVar53 = (uint)lVar30;
    func_0x00010422a630();
    _swift_bridgeObjectRelease(lVar29);
    _swift_bridgeObjectRelease(lVar31);
  }
  lVar29 = *(long *)(unaff_x20 + _DAT_11306af10);
  lVar31 = *(long *)(lStack_d0 + _DAT_11306af10);
  uVar54 = (uint)(lVar29 == 0 && lVar31 == 0);
  if ((lVar29 != 0) && (lVar31 != 0)) {
    _swift_bridgeObjectRetain(lVar31);
    lVar30 = lVar29;
    _swift_bridgeObjectRetain();
    uVar54 = (uint)lVar30;
    func_0x00010422a644();
    _swift_bridgeObjectRelease(lVar29);
    _swift_bridgeObjectRelease(lVar31);
  }
  lVar29 = *(long *)(unaff_x20 + _DAT_11306af18);
  lVar31 = *(long *)(lStack_d0 + _DAT_11306af18);
  uStack_d4 = (uint)(lVar29 == 0 && lVar31 == 0);
  if ((lVar29 != 0) && (lVar31 != 0)) {
    FUN_10429feb4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retain(lVar31);
    _objc_retain();
    lVar30 = lVar29;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    uStack_d4 = (uint)lVar30;
    _objc_release(lVar29);
    _objc_release(lVar31);
  }
  lVar29 = *(long *)(unaff_x20 + _DAT_11306af20);
  lVar31 = *(long *)(lStack_d0 + _DAT_11306af20);
  uStack_d8 = (uint)(lVar29 == 0 && lVar31 == 0);
  if ((lVar29 != 0) && (lVar31 != 0)) {
    FUN_10429feb4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retain(lVar31);
    _objc_retain();
    lVar30 = lVar29;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    uStack_d8 = (uint)lVar30;
    _objc_release(lVar29);
    _objc_release(lVar31);
  }
  lVar29 = *(long *)(unaff_x20 + _DAT_11306af28);
  lVar31 = *(long *)(lStack_d0 + _DAT_11306af28);
  uVar49 = (uint)(lVar29 == 0 && lVar31 == 0);
  if ((lVar29 != 0) && (lVar31 != 0)) {
    FUN_10429feb4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retain(lVar31);
    _objc_retain();
    lVar30 = lVar29;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    uVar49 = (uint)lVar30;
    _objc_release(lVar29);
    _objc_release(lVar31);
  }
  lVar29 = *(long *)(unaff_x20 + _DAT_11306af30);
  lVar31 = *(long *)(lStack_d0 + _DAT_11306af30);
  uVar50 = (uint)(lVar29 == 0 && lVar31 == 0);
  if ((lVar29 != 0) && (lVar31 != 0)) {
    _swift_bridgeObjectRetain(lVar31);
    lVar30 = lVar29;
    _swift_bridgeObjectRetain();
    uVar50 = (uint)lVar30;
    func_0x00010422a658();
    _swift_bridgeObjectRelease(lVar29);
    _swift_bridgeObjectRelease(lVar31);
  }
  lVar29 = *(long *)(unaff_x20 + _DAT_11306af38);
  lVar31 = *(long *)(lStack_d0 + _DAT_11306af38);
  uStack_dc = (uint)(lVar29 == 0 && lVar31 == 0);
  if ((lVar29 != 0) && (lVar31 != 0)) {
    _swift_bridgeObjectRetain(lVar31);
    lVar30 = lVar29;
    _swift_bridgeObjectRetain();
    uStack_dc = (uint)lVar30;
    func_0x000101731444();
    _swift_bridgeObjectRelease(lVar29);
    _swift_bridgeObjectRelease(lVar31);
  }
  if (*(long *)(unaff_x20 + _DAT_11306af40) == 0) {
    uStack_1fc = (uint)(*(long *)(lStack_d0 + _DAT_11306af40) == 0);
  }
  else {
    lVar31 = *(long *)(lStack_d0 + _DAT_11306af40);
    if (lVar31 == 0) {
      lVar29 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar29 = 0;
      FUN_1042a7bd0();
    }
    alStack_c8[0] = lVar31;
    alStack_c8[3] = lVar29;
    _objc_retain(lVar31);
    uStack_1fc = 0;
    FUN_1042a6fa0();
    FUN_10429ff14(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  if (*(long *)(unaff_x20 + _DAT_11306af48) == 0) {
    uStack_200 = (uint)(*(long *)(lStack_d0 + _DAT_11306af48) == 0);
  }
  else {
    lVar31 = *(long *)(lStack_d0 + _DAT_11306af48);
    if (lVar31 == 0) {
      lVar29 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar29 = 0;
      FUN_1042838a0();
    }
    alStack_c8[0] = lVar31;
    alStack_c8[3] = lVar29;
    _objc_retain(lVar31);
    uStack_200 = 0;
    FUN_104282cfc();
    FUN_10429ff14(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  if (*(long *)(unaff_x20 + _DAT_11306af50) == 0) {
    uStack_204 = (uint)(*(long *)(lStack_d0 + _DAT_11306af50) == 0);
  }
  else {
    lVar31 = *(long *)(lStack_d0 + _DAT_11306af50);
    if (lVar31 == 0) {
      lVar29 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar29 = 0;
      FUN_104292a3c();
    }
    alStack_c8[0] = lVar31;
    alStack_c8[3] = lVar29;
    _objc_retain(lVar31);
    uStack_204 = 0;
    FUN_1042917e0();
    FUN_10429ff14(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  bVar23 = *(byte *)(unaff_x20 + _DAT_11306af58);
  bVar24 = *(byte *)(lStack_d0 + _DAT_11306af58);
  lVar29 = *(long *)(unaff_x20 + _DAT_11306af60);
  lVar31 = *(long *)(lStack_d0 + _DAT_11306af60);
  uStack_e0 = (uint)(lVar29 == 0 && lVar31 == 0);
  if ((lVar29 != 0) && (lVar31 != 0)) {
    _swift_bridgeObjectRetain(lVar31);
    lVar30 = lVar29;
    _swift_bridgeObjectRetain();
    uStack_e0 = (uint)lVar30;
    FUN_10422a0c4();
    _swift_bridgeObjectRelease(lVar29);
    _swift_bridgeObjectRelease(lVar31);
  }
  if (*(long *)(unaff_x20 + _DAT_11306af68) == 0) {
    uStack_210 = (uint)(*(long *)(lStack_d0 + _DAT_11306af68) == 0);
  }
  else {
    lVar31 = *(long *)(lStack_d0 + _DAT_11306af68);
    if (lVar31 == 0) {
      lVar29 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar29 = 0;
      func_0x0001047de5f0();
    }
    alStack_c8[0] = lVar31;
    alStack_c8[3] = lVar29;
    _objc_retain(lVar31);
    uStack_210 = 0;
    func_0x0001047ddee0();
    FUN_10429ff14(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  if (*(long *)(unaff_x20 + _DAT_11306af70) == 0) {
    uStack_214 = (uint)(*(long *)(lStack_d0 + _DAT_11306af70) == 0);
  }
  else {
    lVar31 = *(long *)(lStack_d0 + _DAT_11306af70);
    if (lVar31 == 0) {
      lVar29 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar29 = 0;
      func_0x000104817798();
    }
    alStack_c8[0] = lVar31;
    alStack_c8[3] = lVar29;
    _objc_retain(lVar31);
    uStack_214 = 0;
    func_0x0001048170e0();
    FUN_10429ff14(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  if (*(long *)(unaff_x20 + _DAT_11306af78) == 0) {
    uStack_218 = (uint)(*(long *)(lStack_d0 + _DAT_11306af78) == 0);
  }
  else {
    lVar31 = *(long *)(lStack_d0 + _DAT_11306af78);
    if (lVar31 == 0) {
      lVar29 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar29 = 0;
      FUN_1042b9264();
    }
    alStack_c8[0] = lVar31;
    alStack_c8[3] = lVar29;
    _objc_retain(lVar31);
    uStack_218 = 0;
    FUN_1042b8cd0();
    FUN_10429ff14(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  if (*(long *)(unaff_x20 + _DAT_11306af80) == 0) {
    uStack_21c = (uint)(*(long *)(lStack_d0 + _DAT_11306af80) == 0);
  }
  else {
    lVar31 = *(long *)(lStack_d0 + _DAT_11306af80);
    if (lVar31 == 0) {
      lVar29 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar29 = 0;
      FUN_104293e64();
    }
    alStack_c8[0] = lVar31;
    alStack_c8[3] = lVar29;
    _objc_retain(lVar31);
    uStack_21c = 0;
    FUN_10429382c();
    FUN_10429ff14(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  if (*(long *)(unaff_x20 + _DAT_11306af88) == 0) {
    uStack_220 = (uint)(*(long *)(lStack_d0 + _DAT_11306af88) == 0);
  }
  else {
    lVar31 = *(long *)(lStack_d0 + _DAT_11306af88);
    if (lVar31 == 0) {
      lVar29 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar29 = 0;
      FUN_10428ea70();
    }
    alStack_c8[0] = lVar31;
    alStack_c8[3] = lVar29;
    _objc_retain(lVar31);
    uStack_220 = 0;
    FUN_10428e440();
    FUN_10429ff14(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  lVar31 = *(long *)(unaff_x20 + _DAT_11306af90);
  if (lVar31 == 0) {
    uStack_224 = (uint)(*(long *)(lStack_d0 + _DAT_11306af90) == 0);
  }
  else {
    func_0x00010c071ae0();
    uStack_224 = (uint)lVar31;
  }
  lVar31 = *(long *)(unaff_x20 + _DAT_11306af98);
  if (lVar31 == 0) {
    uVar26 = (uint)(*(long *)(lStack_d0 + _DAT_11306af98) == 0);
  }
  else {
    func_0x00010c071ae0();
    uVar26 = (uint)lVar31;
  }
  lVar31 = *(long *)(unaff_x20 + _DAT_11306afa0);
  if (lVar31 == 0) {
    uStack_228 = (uint)(*(long *)(lStack_d0 + _DAT_11306afa0) == 0);
  }
  else {
    func_0x00010c071ae0();
    uStack_228 = (uint)lVar31;
  }
  lVar29 = *(long *)(unaff_x20 + _DAT_11306afa8);
  lVar31 = *(long *)(lStack_d0 + _DAT_11306afa8);
  if (lVar29 == 0) {
    _swift_bridgeObjectRetain(lVar31);
    _objc_release(lStack_d0);
    if (lVar31 == 0) {
      uVar48 = 1;
      goto LAB_1042998e4;
    }
    _swift_bridgeObjectRelease(lVar31);
  }
  else {
    if (lVar31 != 0) {
      _swift_bridgeObjectRetain(lVar31);
      lVar30 = lVar29;
      _swift_bridgeObjectRetain(lVar29);
      uVar48 = (uint)lVar30;
      func_0x0001038a4f38();
      _swift_bridgeObjectRelease(lVar29);
      _swift_bridgeObjectRelease(lVar31);
      _objc_release(lStack_d0);
      goto LAB_1042998e4;
    }
    _objc_release(lStack_d0);
  }
  uVar48 = 0;
LAB_1042998e4:
  uVar1 = 0;
  if (dVar57 == dVar55) {
    uVar1 = uStack_e4 & lVar40 == lVar32;
  }
  uVar2 = 0;
  if (lVar41 == lVar36) {
    uVar2 = uVar1;
  }
  uVar1 = 0;
  if (lVar42 == lVar37) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if (dVar58 == dVar56) {
    uVar2 = uVar1;
  }
  uVar1 = 0;
  if (dVar63 == dVar64) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if (dVar65 == dVar66) {
    uVar2 = uVar1;
  }
  uVar1 = 0;
  if (dVar59 == dVar60) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if (lVar43 == lVar38) {
    uVar2 = uVar1 & uVar39;
  }
  uVar39 = 0;
  if (dVar61 == dVar62) {
    uVar39 = uVar2;
  }
  if ((uVar35 & ((uVar39 & uVar25 & ((bVar7 ^ bVar8) ^ 0xffffffff) & uStack_160 &
                  ((bVar9 ^ bVar10) ^ 0xffffffff) &
                  uStack_16c & iVar3 == iVar4 & uStack_178 & uStack_17c & uStack_180 & uVar51 ^ 1 |
                  (uint)(byte)(lVar46 != lVar47 | bVar11 ^ bVar12 | bVar13 ^ bVar14 |
                               lVar44 != lVar33 | lVar45 != lVar28 | bVar15 ^ bVar16) | uVar34 ^ 1 |
                  (uint)(bVar17 ^ bVar18) | (uint)(bVar19 ^ bVar20) | uStack_1d0 ^ 0xffffffff |
                 (uint)(bVar21 ^ bVar22)) ^ 0xffffffff) &
      iVar5 == iVar6 & uVar52 & uVar53 & uVar54 & uStack_d4 & uStack_d8 & uVar49 & uVar50 &
      uStack_dc & uStack_1fc & uStack_200 & uStack_204) == 0) {
    return 0;
  }
  if (((bVar23 ^ bVar24) & 1) != 0) {
    return 0;
  }
  if (((uStack_e0 ^ 1) & 1) != 0) {
    return 0;
  }
  if (((uStack_210 ^ 1) & 1) != 0) {
    return 0;
  }
  if (((uStack_214 ^ 1) & 1) != 0) {
    return 0;
  }
  if (((uStack_218 ^ 1) & 1) != 0) {
    return 0;
  }
  if (((uStack_21c ^ 1) & 1) == 0) {
    if (((uStack_220 ^ 1) & 1) != 0) {
      return 0;
    }
    if (((uStack_224 ^ 1) & 1) == 0) {
      if (((uVar26 ^ 1) & 1) == 0) {
        return uStack_228 & uVar48;
      }
      return 0;
    }
    return 0;
  }
  return 0;
}



/* Entry: 104299b28; end: 104299bb7; -[SCAdSnapCommonTrackInfo isEqual:] */

uint FUN_104299b28(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1042989bc(&uStack_40);
  _objc_release(param_1);
  FUN_10429ff14(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 104299bb8; end: 104299bbb; -[SCAdSnapCommonTrackInfo copyWithZone:] */

void FUN_104299bb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104299bbc; end: 10429acaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104299bbc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (((undefined8 *)(unaff_x20 + _DAT_11306ade8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ade8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4556495441455243;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4556495441455243,0xeb0000000044495f);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x444e495f50414e53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x444e495f50414e53,0xea00000000005845);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306adf8);
  uVar1 = 0xd00000000000002a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x800000010f1f1990);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f19c0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f1f19e0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306ae10);
  uVar1 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f1a10);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306ae18);
  uVar1 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f1f1a30);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306ae20);
  uVar1 = 0xd000000000000036;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000036,0x800000010f1f1a50);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306ae28);
  uVar1 = 0xd000000000000040;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000040,0x800000010f1f1a90);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306ae30);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,PTR___sSdN_11034dd90);
  }
  uVar1 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f1f1ae0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar1);
  uVar1 = 0x4f435f4550495753;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f435f4550495753,0xeb00000000544e55);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306ae40);
  uVar1 = 0xd000000000000026;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f1f1b10);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306ae48))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ae48);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4556455f54495845;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4556455f54495845,0xea0000000000544e);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f1f1b40);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f1b70);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x534f4f425f534157;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x534f4f425f534157,0xeb00000000444554);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar4 = 0xd000000000000015;
  uVar1 = uVar4;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f1b90);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar2 = 0xd000000000000011;
  uVar1 = uVar2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f1bb0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f1bd0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f1bf0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = uVar4;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f1c10);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306ae90);
  if (lVar3 != 0) {
    uVar1 = 0;
    FUN_1042a8530(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar1);
  }
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f1c30);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar1);
  uVar5 = 0xd000000000000012;
  uVar1 = uVar5;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f1c50);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar6 = 0x45524148535f4441;
  uVar1 = uVar6;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45524148535f4441,0xed00004e45504f5f);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45524148535f4441,0xed0000444e45535f);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar6);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f1c70);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f1c90);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x43534255535f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x43534255535f4441,0xed00004445424952);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306aec8);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,PTR___sSdN_11034dd90);
  }
  uVar1 = 0xd00000000000002d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002d,0x800000010f1f1cb0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar1);
  uVar1 = uVar4;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f1ce0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f1d00);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar2);
  uVar1 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1f1d20);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x524f5641465f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x524f5641465f4441,0xec00000044455449);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306aef0);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,PTR___sSdN_11034dd90);
  }
  uVar1 = 0xd00000000000002c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002c,0x800000010f1f1d40);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f1d70);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306af00);
  if (lVar3 != 0) {
    uVar1 = 0;
    func_0x0001047e0610(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar1);
  }
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f1d90);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306af08);
  if (lVar3 != 0) {
    uVar1 = 0;
    func_0x00010482f460(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar1);
  }
  uVar1 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f1f1db0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306af10);
  if (lVar3 != 0) {
    uVar1 = 0;
    func_0x000104830004(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar1);
  }
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f1dd0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f1df0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar5);
  uVar2 = 0xd000000000000013;
  uVar1 = uVar2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f1e10);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f1e30);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306af30);
  if (lVar3 != 0) {
    uVar1 = 0;
    FUN_1042ac494(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar1);
  }
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f1e50);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306af38);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,PTR___s10Foundation4DataVN_110350ae0)
    ;
  }
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f1e70);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar1);
  uVar1 = 0x5f52454b43495453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f52454b43495453,0xec0000004f464e49);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f1e90);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f1eb0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f1f1ed0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306af60);
  if (lVar3 != 0) {
    uVar1 = 0;
    FUN_10429feb4(0,0x112ff6760,&PTR_PTR_1126ad980);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar1);
  }
  uVar1 = 0xd00000000000001d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1f1f00);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f1f20);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = uVar4;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f1f40);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f1f60);
  func_0x00010bf93020(param_1);
  _objc_release(uVar4);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f1f80);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f1fa0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f1fc0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f1fe0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  uVar1 = 0x534f5045525f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x534f5045525f4441,0xeb00000000444554);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306afa8);
  if (lVar3 != 0) {
    uVar1 = 0;
    FUN_10429feb4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar1);
  }
  uVar1 = 0xd00000000000002a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x800000010f1f2000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10429acb0; end: 10429acff; -[SCAdSnapCommonTrackInfo encodeWithCoder:] */

void FUN_10429acb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104299bbc(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10429ad00; end: 10429ad2f;  */

void FUN_10429ad00(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10429ad30(param_1);
  return;
}



/* Entry: 10429ad30; end: 10429d25f;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10429ad30(ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lStack_260;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_138;
  long lStack_118;
  long lStack_110;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  
  uVar3 = 0x4556495441455243;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4556495441455243,0xeb0000000044495f);
  uVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (uVar4 == 0) {
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
    _swift_unknownObjectRelease(uVar4);
  }
  puVar2 = PTR___sypN_11034f1a8;
  uStack_b8 = uStack_d8;
  uStack_c0 = uStack_e0;
  lStack_a8 = lStack_c8;
  uStack_b0 = uStack_d0;
  uVar3 = uStack_d0;
  if (lStack_c8 == 0) {
    FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
    lStack_160 = 0;
    lStack_110 = 0;
  }
  else {
    plVar5 = &lStack_f0;
    _swift_dynamicCast(plVar5,&uStack_c0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lStack_160 = lStack_f0;
    lStack_110 = lStack_e8;
    if ((int)plVar5 == 0) {
      lStack_160 = 0;
      lStack_110 = 0;
    }
  }
  uVar6 = 0x444e495f50414e53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x444e495f50414e53,0xea00000000005845);
  func_0x00010bf66f40();
  _objc_release(uVar6);
  uVar6 = 0xd00000000000002a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x800000010f1f1990);
  func_0x00010bf66da0(param_1);
  uVar20 = uVar3;
  _objc_release(uVar6);
  uVar6 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f19c0);
  func_0x00010bf66f40();
  _objc_release(uVar6);
  uVar6 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f1f19e0);
  func_0x00010bf66f40();
  _objc_release(uVar6);
  uVar6 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f1a10);
  func_0x00010bf66da0(param_1);
  uVar21 = uVar20;
  _objc_release(uVar6);
  uVar6 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f1f1a30);
  func_0x00010bf66da0(param_1);
  uVar22 = uVar21;
  _objc_release(uVar6);
  uVar6 = 0xd000000000000036;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000036,0x800000010f1f1a50);
  func_0x00010bf66da0(param_1);
  uVar23 = uVar22;
  _objc_release(uVar6);
  uVar6 = 0xd000000000000040;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000040,0x800000010f1f1a90);
  func_0x00010bf66da0(param_1);
  _objc_release(uVar6);
  uVar6 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f1f1ae0);
  uVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (uVar4 == 0) {
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
    _swift_unknownObjectRelease(uVar4);
  }
  uStack_b8 = uStack_d8;
  uStack_c0 = uStack_e0;
  lStack_a8 = lStack_c8;
  uStack_b0 = uStack_d0;
  uVar6 = uStack_d0;
  if (lStack_c8 == 0) {
    FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
    lStack_118 = 0;
  }
  else {
    uVar7 = 0x112d3d588;
    func_0x0001000285a8(0x112d3d588,&UNK_10da29ed0);
    plVar5 = &lStack_f0;
    _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
    lStack_118 = lStack_f0;
    if ((int)plVar5 == 0) {
      lStack_118 = 0;
    }
  }
  uVar7 = 0x4f435f4550495753;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f435f4550495753,0xeb00000000544e55);
  func_0x00010bf66f40();
  _objc_release(uVar7);
  uVar7 = 0xd000000000000026;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f1f1b10);
  func_0x00010bf66da0(param_1);
  _objc_release(uVar7);
  uVar7 = 0x4556455f54495845;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4556455f54495845,0xea0000000000544e);
  uVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  if (uVar4 == 0) {
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
    _swift_unknownObjectRelease(uVar4);
  }
  uStack_b8 = uStack_d8;
  uStack_c0 = uStack_e0;
  lStack_a8 = lStack_c8;
  uStack_b0 = uStack_d0;
  if (lStack_c8 == 0) {
    FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
    lStack_168 = 0;
    lVar17 = 0;
  }
  else {
    plVar5 = &lStack_f0;
    _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,PTR___sSSN_11034da80,6);
    lVar17 = lStack_e8;
    lStack_168 = lStack_f0;
    if ((int)plVar5 == 0) {
      lStack_168 = 0;
      lVar17 = 0;
    }
  }
  uVar7 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f1f1b40);
  func_0x00010bf66ce0();
  _objc_release(uVar7);
  uVar7 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f1b70);
  uVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  if (uVar4 == 0) {
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
    _swift_unknownObjectRelease(uVar4);
  }
  uStack_b8 = uStack_d8;
  uStack_c0 = uStack_e0;
  lStack_a8 = lStack_c8;
  uStack_b0 = uStack_d0;
  if (lStack_c8 == 0) {
    FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
    lStack_f8 = 0;
  }
  else {
    uVar7 = 0;
    FUN_1042a351c(0);
    plVar5 = &lStack_f0;
    _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
    lStack_f8 = lStack_f0;
    if ((int)plVar5 == 0) {
      lStack_f8 = 0;
    }
  }
  uVar7 = 0x534f4f425f534157;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x534f4f425f534157,0xeb00000000444554);
  func_0x00010bf66ce0();
  _objc_release(uVar7);
  uVar12 = 0xd000000000000015;
  uVar7 = uVar12;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f1b90);
  uVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  if (uVar4 == 0) {
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
    _swift_unknownObjectRelease(uVar4);
  }
  uStack_b8 = uStack_d8;
  uStack_c0 = uStack_e0;
  lStack_a8 = lStack_c8;
  uStack_b0 = uStack_d0;
  if (lStack_c8 == 0) {
    FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
    lStack_100 = 0;
  }
  else {
    uVar7 = 0;
    FUN_104280784(0);
    plVar5 = &lStack_f0;
    _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
    lStack_100 = lStack_f0;
    if ((int)plVar5 == 0) {
      lStack_100 = 0;
    }
  }
  uVar8 = 0xd000000000000011;
  uVar7 = uVar8;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f1bb0);
  uVar4 = param_1;
  func_0x00010bf66f40();
  _objc_release(uVar7);
  if (uVar4 < 4) {
    uVar7 = 0xd000000000000017;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f1bd0);
    uVar4 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    if (uVar4 == 0) {
      uStack_d8 = 0;
      uStack_e0 = 0;
      lStack_c8 = 0;
      uStack_d0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
      _swift_unknownObjectRelease(uVar4);
    }
    uStack_b8 = uStack_d8;
    uStack_c0 = uStack_e0;
    lStack_a8 = lStack_c8;
    uStack_b0 = uStack_d0;
    if (lStack_c8 == 0) {
      FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
      lStack_138 = 0;
    }
    else {
      uVar7 = 0;
      FUN_10428e134(0);
      plVar5 = &lStack_f0;
      _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
      lStack_138 = lStack_f0;
      if ((int)plVar5 == 0) {
        lStack_138 = 0;
      }
    }
    uVar7 = 0xd00000000000001b;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f1bf0);
    uVar4 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    if (uVar4 == 0) {
      uStack_d8 = 0;
      uStack_e0 = 0;
      lStack_c8 = 0;
      uStack_d0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
      _swift_unknownObjectRelease(uVar4);
    }
    uStack_b8 = uStack_d8;
    uStack_c0 = uStack_e0;
    lStack_a8 = lStack_c8;
    uStack_b0 = uStack_d0;
    if (lStack_c8 == 0) {
      FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
      lStack_150 = 0;
    }
    else {
      uVar7 = 0;
      func_0x0001047c8648(0);
      plVar5 = &lStack_f0;
      _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
      lStack_150 = lStack_f0;
      if ((int)plVar5 == 0) {
        lStack_150 = 0;
      }
    }
    uVar7 = uVar12;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f1c10);
    uVar4 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    if (uVar4 == 0) {
      uStack_d8 = 0;
      uStack_e0 = 0;
      lStack_c8 = 0;
      uStack_d0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
      _swift_unknownObjectRelease(uVar4);
    }
    uStack_b8 = uStack_d8;
    uStack_c0 = uStack_e0;
    lStack_a8 = lStack_c8;
    uStack_b0 = uStack_d0;
    if (lStack_c8 == 0) {
      FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
      lStack_148 = 0;
    }
    else {
      uVar7 = 0;
      FUN_10428516c(0);
      plVar5 = &lStack_f0;
      _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
      lStack_148 = lStack_f0;
      if ((int)plVar5 == 0) {
        lStack_148 = 0;
      }
    }
    uVar7 = 0xd000000000000016;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f1c30);
    uVar4 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    if (uVar4 == 0) {
      uStack_d8 = 0;
      uStack_e0 = 0;
      lStack_c8 = 0;
      uStack_d0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
      _swift_unknownObjectRelease(uVar4);
    }
    uStack_b8 = uStack_d8;
    uStack_c0 = uStack_e0;
    lStack_a8 = lStack_c8;
    uStack_b0 = uStack_d0;
    if (lStack_c8 == 0) {
      FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
      lVar16 = 0;
    }
    else {
      uVar7 = 0x112efcde0;
      func_0x0001000285a8(0x112efcde0,&UNK_10db2eaf0);
      plVar5 = &lStack_f0;
      _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
      lVar16 = lStack_f0;
      if ((int)plVar5 == 0) {
        lVar16 = 0;
      }
    }
    uVar10 = 0xd000000000000012;
    uVar7 = uVar10;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f1c50);
    func_0x00010bf66f40();
    _objc_release(uVar7);
    uVar14 = 0x45524148535f4441;
    uVar7 = uVar14;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45524148535f4441,0xed00004e45504f5f);
    func_0x00010bf66ce0();
    _objc_release(uVar7);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45524148535f4441,0xed0000444e45535f);
    func_0x00010bf66ce0();
    _objc_release(uVar14);
    uVar7 = 0xd000000000000016;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f1c70);
    func_0x00010bf66f40();
    _objc_release(uVar7);
    uVar7 = 0xd000000000000018;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f1c90);
    func_0x00010bf66f40();
    _objc_release(uVar7);
    uVar7 = 0x43534255535f4441;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x43534255535f4441,0xed00004445424952);
    func_0x00010bf66ce0();
    _objc_release(uVar7);
    uVar7 = 0xd00000000000002d;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002d,0x800000010f1f1cb0);
    uVar4 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    if (uVar4 == 0) {
      uStack_d8 = 0;
      uStack_e0 = 0;
      lStack_c8 = 0;
      uStack_d0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
      _swift_unknownObjectRelease(uVar4);
    }
    uStack_b8 = uStack_d8;
    uStack_c0 = uStack_e0;
    lStack_a8 = lStack_c8;
    uStack_b0 = uStack_d0;
    if (lStack_c8 == 0) {
      FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
      lVar19 = 0;
    }
    else {
      uVar7 = 0x112d3d588;
      func_0x0001000285a8(0x112d3d588,&UNK_10da29ed0);
      plVar5 = &lStack_f0;
      _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
      lVar19 = lStack_f0;
      if ((int)plVar5 == 0) {
        lVar19 = 0;
      }
    }
    uVar7 = uVar12;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f1ce0);
    func_0x00010bf66ce0();
    _objc_release(uVar7);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f1d00);
    func_0x00010bf66ce0();
    _objc_release(uVar8);
    uVar7 = 0xd00000000000001c;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1f1d20);
    uVar4 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    if (uVar4 == 0) {
      uStack_d8 = 0;
      uStack_e0 = 0;
      lStack_c8 = 0;
      uStack_d0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
      _swift_unknownObjectRelease(uVar4);
    }
    uStack_b8 = uStack_d8;
    uStack_c0 = uStack_e0;
    lStack_a8 = lStack_c8;
    uStack_b0 = uStack_d0;
    if (lStack_c8 == 0) {
      FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
      lStack_158 = 0;
    }
    else {
      uVar7 = 0;
      FUN_10427cc68(0);
      plVar5 = &lStack_f0;
      _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
      lStack_158 = lStack_f0;
      if ((int)plVar5 == 0) {
        lStack_158 = 0;
      }
    }
    uVar7 = 0x524f5641465f4441;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x524f5641465f4441,0xec00000044455449);
    func_0x00010bf66ce0();
    _objc_release(uVar7);
    uVar7 = 0xd00000000000002c;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002c,0x800000010f1f1d40);
    uVar4 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    if (uVar4 == 0) {
      uStack_d8 = 0;
      uStack_e0 = 0;
      lStack_c8 = 0;
      uStack_d0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
      _swift_unknownObjectRelease(uVar4);
    }
    uStack_b8 = uStack_d8;
    uStack_c0 = uStack_e0;
    lStack_a8 = lStack_c8;
    uStack_b0 = uStack_d0;
    if (lStack_c8 == 0) {
      FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
      lStack_170 = 0;
    }
    else {
      uVar7 = 0x112d3d588;
      func_0x0001000285a8(0x112d3d588,&UNK_10da29ed0);
      plVar5 = &lStack_f0;
      _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
      lStack_170 = lStack_f0;
      if ((int)plVar5 == 0) {
        lStack_170 = 0;
      }
    }
    uVar7 = 0xd000000000000016;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f1d70);
    uVar4 = param_1;
    func_0x00010bf66f40();
    _objc_release(uVar7);
    if (uVar4 < 3) {
      uVar7 = 0xd000000000000018;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f1d90);
      uVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar4 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
        _swift_unknownObjectRelease(uVar4);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_238 = 0;
      }
      else {
        uVar7 = 0x11306afc0;
        func_0x0001000285a8(0x11306afc0,&UNK_10dce5aa8);
        plVar5 = &lStack_f0;
        _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
        lStack_238 = lStack_f0;
        if ((int)plVar5 == 0) {
          lStack_238 = 0;
        }
      }
      uVar7 = 0xd00000000000001f;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f1f1db0);
      uVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar4 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
        _swift_unknownObjectRelease(uVar4);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_240 = 0;
      }
      else {
        uVar7 = 0x11306afb8;
        func_0x0001000285a8(0x11306afb8,&UNK_10dce5aa0);
        plVar5 = &lStack_f0;
        _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
        lStack_240 = lStack_f0;
        if ((int)plVar5 == 0) {
          lStack_240 = 0;
        }
      }
      uVar7 = 0xd000000000000019;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f1dd0);
      uVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar4 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
        _swift_unknownObjectRelease(uVar4);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_228 = 0;
      }
      else {
        uVar7 = 0x11306afb0;
        func_0x0001000285a8(0x11306afb0,&UNK_10dce5a98);
        plVar5 = &lStack_f0;
        _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
        lStack_228 = lStack_f0;
        if ((int)plVar5 == 0) {
          lStack_228 = 0;
        }
      }
      lVar13 = lStack_228;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f1df0);
      uVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      if (uVar4 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
        _swift_unknownObjectRelease(uVar4);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_1c0 = 0;
      }
      else {
        uVar7 = 0;
        FUN_10429feb4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        plVar5 = &lStack_f0;
        _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
        lStack_1c0 = lStack_f0;
        if ((int)plVar5 == 0) {
          lStack_1c0 = 0;
        }
      }
      uVar7 = 0xd000000000000013;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f1e10);
      uVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar4 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
        _swift_unknownObjectRelease(uVar4);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_1c8 = 0;
      }
      else {
        uVar7 = 0;
        FUN_10429feb4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        plVar5 = &lStack_f0;
        _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
        lStack_1c8 = lStack_f0;
        if ((int)plVar5 == 0) {
          lStack_1c8 = 0;
        }
      }
      uVar7 = 0xd000000000000017;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f1e30);
      uVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar4 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
        _swift_unknownObjectRelease(uVar4);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_1d0 = 0;
      }
      else {
        uVar7 = 0;
        FUN_10429feb4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        plVar5 = &lStack_f0;
        _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
        lStack_1d0 = lStack_f0;
        if ((int)plVar5 == 0) {
          lStack_1d0 = 0;
        }
      }
      uVar7 = 0xd00000000000001a;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f1e50);
      uVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar4 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
        _swift_unknownObjectRelease(uVar4);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_248 = 0;
      }
      else {
        uVar7 = 0x112ff26a8;
        func_0x0001000285a8(0x112ff26a8,&UNK_10dc5db80);
        plVar5 = &lStack_f0;
        _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
        lStack_248 = lStack_f0;
        if ((int)plVar5 == 0) {
          lStack_248 = 0;
        }
      }
      uVar7 = 0xd000000000000019;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f1e70);
      uVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar4 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
        _swift_unknownObjectRelease(uVar4);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_250 = 0;
      }
      else {
        uVar7 = 0x112dc6598;
        func_0x0001000285a8(0x112dc6598,&UNK_10d9bc300);
        plVar5 = &lStack_f0;
        _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
        lStack_250 = lStack_f0;
        if ((int)plVar5 == 0) {
          lStack_250 = 0;
        }
      }
      uVar7 = 0x5f52454b43495453;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f52454b43495453,0xec0000004f464e49);
      uVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar4 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
        _swift_unknownObjectRelease(uVar4);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_1d8 = 0;
      }
      else {
        uVar7 = 0;
        FUN_1042a7bd0(0);
        plVar5 = &lStack_f0;
        _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
        lStack_1d8 = lStack_f0;
        if ((int)plVar5 == 0) {
          lStack_1d8 = 0;
        }
      }
      uVar7 = 0xd000000000000019;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f1e90);
      uVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar4 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
        _swift_unknownObjectRelease(uVar4);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_1e0 = 0;
      }
      else {
        uVar7 = 0;
        FUN_1042838a0(0);
        plVar5 = &lStack_f0;
        _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
        lStack_1e0 = lStack_f0;
        if ((int)plVar5 == 0) {
          lStack_1e0 = 0;
        }
      }
      uVar7 = 0xd000000000000018;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f1eb0);
      uVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar4 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
        _swift_unknownObjectRelease(uVar4);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_1e8 = 0;
      }
      else {
        uVar7 = 0;
        FUN_104292a3c(0);
        plVar5 = &lStack_f0;
        _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
        lStack_1e8 = lStack_f0;
        if ((int)plVar5 == 0) {
          lStack_1e8 = 0;
        }
      }
      uVar7 = 0xd000000000000021;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f1f1ed0);
      func_0x00010bf66ce0();
      _objc_release(uVar7);
      uVar7 = 0xd00000000000001d;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1f1f00);
      uVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar4 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
        _swift_unknownObjectRelease(uVar4);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_260 = 0;
      }
      else {
        uVar7 = 0x112ff6730;
        func_0x0001000285a8(0x112ff6730,&UNK_10dce5a90);
        plVar5 = &lStack_f0;
        _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
        lStack_260 = lStack_f0;
        if ((int)plVar5 == 0) {
          lStack_260 = 0;
        }
      }
      uVar7 = 0xd000000000000016;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f1f20);
      uVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar4 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
        _swift_unknownObjectRelease(uVar4);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_1f0 = 0;
      }
      else {
        uVar7 = 0;
        func_0x0001047de5f0(0);
        plVar5 = &lStack_f0;
        _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
        lStack_1f0 = lStack_f0;
        if ((int)plVar5 == 0) {
          lStack_1f0 = 0;
        }
      }
      uVar7 = uVar12;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f1f40);
      uVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar4 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
        _swift_unknownObjectRelease(uVar4);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_1f8 = 0;
      }
      else {
        uVar7 = 0;
        func_0x000104817798(0);
        plVar5 = &lStack_f0;
        _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
        lStack_1f8 = lStack_f0;
        if ((int)plVar5 == 0) {
          lStack_1f8 = 0;
        }
      }
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f1f60);
      uVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      if (uVar4 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
        _swift_unknownObjectRelease(uVar4);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_200 = 0;
      }
      else {
        uVar7 = 0;
        FUN_1042b9264(0);
        plVar5 = &lStack_f0;
        _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
        lStack_200 = lStack_f0;
        if ((int)plVar5 == 0) {
          lStack_200 = 0;
        }
      }
      uVar7 = 0xd000000000000017;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f1f80);
      uVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar4 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
        _swift_unknownObjectRelease(uVar4);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_208 = 0;
      }
      else {
        uVar7 = 0;
        FUN_104293e64(0);
        plVar5 = &lStack_f0;
        _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
        lStack_208 = lStack_f0;
        if ((int)plVar5 == 0) {
          lStack_208 = 0;
        }
      }
      uVar7 = 0xd000000000000016;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f1fa0);
      uVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar4 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
        _swift_unknownObjectRelease(uVar4);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_210 = 0;
      }
      else {
        uVar7 = 0;
        FUN_10428ea70(0);
        plVar5 = &lStack_f0;
        _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
        lStack_210 = lStack_f0;
        if ((int)plVar5 == 0) {
          lStack_210 = 0;
        }
      }
      uVar7 = 0xd000000000000014;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f1fc0);
      uVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar4 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
        _swift_unknownObjectRelease(uVar4);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_218 = 0;
      }
      else {
        uVar7 = 0;
        FUN_10429feb4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        plVar5 = &lStack_f0;
        _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
        lStack_218 = lStack_f0;
        if ((int)plVar5 == 0) {
          lStack_218 = 0;
        }
      }
      uVar7 = 0xd000000000000013;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f1fe0);
      uVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar4 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
        _swift_unknownObjectRelease(uVar4);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_220 = 0;
      }
      else {
        uVar7 = 0;
        FUN_10429feb4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        plVar5 = &lStack_f0;
        _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
        lStack_220 = lStack_f0;
        if ((int)plVar5 == 0) {
          lStack_220 = 0;
        }
      }
      uVar7 = 0x534f5045525f4441;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x534f5045525f4441,0xeb00000000444554);
      uVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar4 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
        _swift_unknownObjectRelease(uVar4);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_228 = 0;
      }
      else {
        uVar7 = 0;
        FUN_10429feb4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        plVar5 = &lStack_f0;
        _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
        lStack_228 = lStack_f0;
        if ((int)plVar5 == 0) {
          lStack_228 = 0;
        }
      }
      uVar7 = 0xd00000000000002a;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x800000010f1f2000);
      uVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar4 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
        _swift_unknownObjectRelease(uVar4);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_10429ff14(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lVar1 = 0;
      }
      else {
        uVar7 = 0x112da1fa0;
        func_0x0001000285a8(0x112da1fa0,&UNK_10d945e90);
        plVar5 = &lStack_f0;
        _swift_dynamicCast(plVar5,&uStack_c0,puVar2 + 8,uVar7,6);
        lVar1 = lStack_f0;
        if ((int)plVar5 == 0) {
          lVar1 = 0;
        }
      }
      if (lStack_110 == 0) {
        lStack_110 = 0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_160,lStack_110);
        _swift_bridgeObjectRelease(lStack_110);
        lStack_110 = lStack_160;
      }
      if (lStack_118 == 0) {
        lStack_160 = 0;
      }
      else {
        lStack_160 = lStack_118;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lStack_118,PTR___sSdN_11034dd90);
        _swift_bridgeObjectRelease(lStack_118);
      }
      if (lVar17 == 0) {
        lStack_168 = 0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_168,lVar17);
        _swift_bridgeObjectRelease(lVar17);
      }
      if (lVar16 == 0) {
        lStack_118 = 0;
      }
      else {
        uVar7 = 0;
        FUN_1042a8530(0);
        lStack_118 = lVar16;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar16,uVar7);
        _swift_bridgeObjectRelease(lVar16);
      }
      if (lVar19 == 0) {
        lVar17 = 0;
      }
      else {
        lVar17 = lVar19;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar19,PTR___sSdN_11034dd90);
        _swift_bridgeObjectRelease(lVar19);
      }
      if (lStack_170 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = lStack_170;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lStack_170,PTR___sSdN_11034dd90);
        _swift_bridgeObjectRelease(lStack_170);
      }
      if (lStack_238 == 0) {
        lVar19 = 0;
      }
      else {
        uVar7 = 0;
        func_0x0001047e0610(0);
        lVar19 = lStack_238;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lStack_238,uVar7);
        _swift_bridgeObjectRelease(lStack_238);
      }
      if (lStack_240 == 0) {
        lStack_170 = 0;
      }
      else {
        uVar7 = 0;
        func_0x00010482f460(0);
        lStack_170 = lStack_240;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lStack_240,uVar7);
        _swift_bridgeObjectRelease(lStack_240);
      }
      if (lVar13 == 0) {
        lVar11 = 0;
      }
      else {
        uVar7 = 0;
        func_0x000104830004(0);
        lVar11 = lVar13;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar13,uVar7);
        _swift_bridgeObjectRelease(lVar13);
      }
      if (lStack_248 == 0) {
        lVar13 = 0;
      }
      else {
        uVar7 = 0;
        FUN_1042ac494(0);
        lVar13 = lStack_248;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lStack_248,uVar7);
        _swift_bridgeObjectRelease(lStack_248);
      }
      if (lStack_250 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = lStack_250;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF
                  (lStack_250,PTR___s10Foundation4DataVN_110350ae0);
        _swift_bridgeObjectRelease(lStack_250);
      }
      if (lStack_260 == 0) {
        lVar15 = 0;
      }
      else {
        uVar7 = 0;
        FUN_10429feb4(0,0x112ff6760,&PTR_PTR_1126ad980);
        lVar15 = lStack_260;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lStack_260,uVar7);
        _swift_bridgeObjectRelease(lStack_260);
      }
      if (lVar1 == 0) {
        lVar9 = 0;
      }
      else {
        uVar7 = 0;
        FUN_10429feb4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        lVar9 = lVar1;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar1,uVar7);
        _swift_bridgeObjectRelease(lVar1);
      }
      func_0x00010c006820(uVar3,uVar20,uVar21,uVar22,uVar23,uVar6);
      _objc_release(lStack_110);
      _objc_release(lStack_160);
      _objc_release(lStack_168);
      _objc_release(lStack_118);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar19);
      _objc_release(lStack_170);
      _objc_release(lVar11);
      _objc_release(lVar13);
      _objc_release(lVar18);
      _objc_release(lVar15);
      _objc_release(lVar9);
      _objc_release(param_1);
      _objc_release(lStack_1c0);
      _objc_release(lStack_1c8);
      _objc_release(lStack_1d0);
      _objc_release(lStack_1d8);
      _objc_release(lStack_1e0);
      _objc_release(lStack_1e8);
      _objc_release(lStack_1f0);
      _objc_release(lStack_1f8);
      _objc_release(lStack_200);
      _objc_release(lStack_208);
      _objc_release(lStack_210);
      _objc_release(lStack_218);
      _objc_release(lStack_220);
      _objc_release(lStack_228);
      _objc_release(lStack_138);
      _objc_release(lStack_150);
      _objc_release(lStack_148);
      _objc_release(lStack_158);
      _objc_release(lStack_f8);
      _objc_release(lStack_100);
      return unaff_x20;
    }
    _objc_release(lStack_f8);
    _objc_release(lStack_100);
    _objc_release(lStack_138);
    _objc_release(lStack_150);
    _objc_release(lStack_148);
    _objc_release(lStack_158);
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lStack_170);
    _swift_bridgeObjectRelease(lVar19);
    _swift_bridgeObjectRelease(lVar16);
  }
  else {
    _objc_release(lStack_f8);
    _objc_release(lStack_100);
    _objc_release(param_1);
  }
  _swift_bridgeObjectRelease(lVar17);
  _swift_bridgeObjectRelease(lStack_118);
  _swift_bridgeObjectRelease(lStack_110);
  uVar3 = unaff_x20;
  _swift_getObjectType(unaff_x20);
  _swift_deallocPartialClassInstance(unaff_x20,uVar3,0x1d0,7);
  return 0;
}



/* Entry: 10429d260; end: 10429d287; -[SCAdSnapCommonTrackInfo initWithCoder:] */

void FUN_10429d260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10429ad30();
  return;
}



/* Entry: 10429d288; end: 10429d2c7; -[SCAdSnapCommonTrackInfo description] */

void FUN_10429d288(void)

{
  undefined1 auStack_5c8 [1448];
  
  _objc_retain();
  FUN_10429e778(auStack_5c8);
  func_0x00010178e3b8(auStack_5c8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10429d2c8; end: 10429d343; -[SCAdSnapCommonTrackInfo init] */

void FUN_10429d2c8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdSnapCommonTrackInfoWrapper.swift",0x31,2,0x293,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10429d310);
  (*pcVar1)();
}



/* Entry: 10429d344; end: 10429d573; -[SCAdSnapCommonTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10429d344(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ade8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ae30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ae48 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ae58));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ae68));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ae78));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ae80));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ae88));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ae90));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306aec8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306aee0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306aef0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306af00));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306af08));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306af10));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306af18));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306af20));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306af28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306af30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306af38));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306af40));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306af48));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306af50));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306af60));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306af68));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306af70));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306af78));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306af80));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306af88));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306af90));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306af98));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306afa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306afa8));
  return;
}



/* Entry: 10429d574; end: 10429e777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10429d574(undefined8 *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  ulong uVar16;
  long lVar17;
  undefined1 *puVar18;
  long unaff_x20;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lStack_998;
  long lStack_990;
  long lStack_988;
  long lStack_980;
  undefined8 uStack_978;
  long lStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  long lStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  long lStack_8a0;
  undefined8 uStack_898;
  undefined2 uStack_890;
  long lStack_888;
  long lStack_880;
  long lStack_878;
  long lStack_870;
  long lStack_868;
  long lStack_860;
  undefined1 auStack_858 [16];
  undefined1 auStack_848 [8];
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined1 uStack_7d8;
  undefined1 uStack_7d7;
  undefined6 uStack_7d6;
  undefined1 uStack_7d0;
  undefined1 uStack_7cf;
  undefined7 uStack_7ce;
  undefined1 uStack_7c7;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined1 uStack_758;
  undefined7 uStack_757;
  undefined1 uStack_750;
  undefined7 uStack_74f;
  undefined1 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined1 uStack_6c0;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined *puStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  long lStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  long lStack_5e0;
  undefined8 uStack_5d8;
  undefined2 uStack_5d0;
  undefined *puStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  long lStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  ulong uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined *puStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined1 uStack_450;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 uStack_330;
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
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined1 uStack_2b0;
  undefined8 uStack_2af;
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
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _swift_getObjectType();
  uStack_648 = param_1[1];
  uStack_650 = *param_1;
  puVar9 = (undefined8 *)(unaff_x20 + _DAT_11306ade8);
  puVar9[1] = uStack_648;
  *puVar9 = uStack_650;
  *(undefined8 *)(unaff_x20 + _DAT_11306adf0) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_11306adf8) = param_1[3];
  uVar21 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_11306ae00) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_11306ae08) = uVar21;
  uVar21 = param_1[7];
  *(undefined8 *)(unaff_x20 + _DAT_11306ae10) = param_1[6];
  *(undefined8 *)(unaff_x20 + _DAT_11306ae18) = uVar21;
  uVar21 = param_1[9];
  *(undefined8 *)(unaff_x20 + _DAT_11306ae20) = param_1[8];
  *(undefined8 *)(unaff_x20 + _DAT_11306ae28) = uVar21;
  uStack_658 = param_1[10];
  uVar21 = param_1[0xb];
  *(undefined8 *)(unaff_x20 + _DAT_11306ae30) = uStack_658;
  *(undefined8 *)(unaff_x20 + _DAT_11306ae38) = uVar21;
  *(undefined8 *)(unaff_x20 + _DAT_11306ae40) = param_1[0xc];
  uStack_668 = param_1[0xe];
  uStack_670 = param_1[0xd];
  uVar21 = param_1[0xd];
  puVar9 = (undefined8 *)(unaff_x20 + _DAT_11306ae48);
  puVar9[1] = param_1[0xe];
  *puVar9 = uVar21;
  *(undefined1 *)(unaff_x20 + _DAT_11306ae50) = *(undefined1 *)(param_1 + 0xf);
  uStack_108 = param_1[0x11];
  uStack_110 = param_1[0x10];
  uStack_f8 = param_1[0x13];
  uStack_100 = param_1[0x12];
  uStack_e8 = param_1[0x15];
  uStack_f0 = param_1[0x14];
  uStack_d8 = param_1[0x17];
  uStack_e0 = param_1[0x16];
  uStack_c8 = param_1[0x19];
  uStack_d0 = param_1[0x18];
  uStack_b8 = param_1[0x1b];
  uStack_c0 = param_1[0x1a];
  uStack_a8 = param_1[0x1d];
  uStack_b0 = param_1[0x1c];
  uStack_98 = param_1[0x1f];
  uStack_a0 = param_1[0x1e];
  uStack_90 = param_1[0x20];
  iVar8 = (int)&uStack_110;
  func_0x0001034bba7c();
  if (iVar8 == 1) {
    func_0x00010429ff9c(&uStack_650,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010429ff9c(&uStack_658,&puStack_510,0x11306a470,&UNK_10dce5650);
    func_0x00010429ff9c(&uStack_670,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uStack_138 = uStack_a8;
    uStack_140 = uStack_b0;
    uStack_128 = uStack_98;
    uStack_130 = uStack_a0;
    uStack_120 = uStack_90;
    uStack_178 = uStack_e8;
    uStack_180 = uStack_f0;
    uStack_168 = uStack_d8;
    uStack_170 = uStack_e0;
    uStack_158 = uStack_c8;
    uStack_160 = uStack_d0;
    uStack_148 = uStack_b8;
    uStack_150 = uStack_c0;
    uStack_198 = uStack_108;
    uStack_1a0 = uStack_110;
    uStack_188 = uStack_f8;
    uStack_190 = uStack_100;
    FUN_1042a351c(0);
    _objc_allocWithZone();
    func_0x00010429ff9c(&uStack_650,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010429ff9c(&uStack_658,&puStack_510,0x11306a470,&UNK_10dce5650);
    func_0x00010429ff9c(&uStack_670,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010429ff9c(&uStack_110,&puStack_510,0x1130699e0,&UNK_10dce4790);
    puVar9 = &uStack_1a0;
    FUN_1042a24a0();
  }
  *(undefined8 **)(unaff_x20 + _DAT_11306ae58) = puVar9;
  *(undefined1 *)(unaff_x20 + _DAT_11306ae60) = *(undefined1 *)(param_1 + 0x21);
  uVar16 = param_1[0x22];
  if ((uVar16 & 0xff0000000000) == 0x30000000000) {
    uVar16 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x25);
    uVar21 = param_1[0x23];
    uVar1 = param_1[0x24];
    uVar19 = 0;
    FUN_104280784(0);
    _objc_allocWithZone();
    uVar16 = uVar16 & 0xffffffffffff;
    FUN_10427fb1c(uVar16,uVar21,uVar1 & 0xffffffff000000ff,uVar2,uVar19);
  }
  *(ulong *)(unaff_x20 + _DAT_11306ae68) = uVar16;
  *(undefined8 *)(unaff_x20 + _DAT_11306ae70) = param_1[0x26];
  uStack_6c0 = *(undefined1 *)(param_1 + 0x37);
  uStack_6d8 = param_1[0x34];
  uStack_6e0 = param_1[0x33];
  uStack_6c8 = param_1[0x36];
  uStack_6d0 = param_1[0x35];
  uStack_718 = param_1[0x2c];
  uStack_720 = param_1[0x2b];
  uStack_708 = param_1[0x2e];
  uStack_710 = param_1[0x2d];
  uStack_6f8 = param_1[0x30];
  uStack_700 = param_1[0x2f];
  uStack_6e8 = param_1[0x32];
  uStack_6f0 = param_1[0x31];
  uStack_738 = param_1[0x28];
  uStack_740 = param_1[0x27];
  uStack_728 = param_1[0x2a];
  uStack_730 = param_1[0x29];
  iVar8 = (int)&uStack_740;
  func_0x00010187bbec();
  if (iVar8 == 1) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uStack_1d8 = uStack_6f8;
    uStack_1e0 = uStack_700;
    uStack_1c8 = uStack_6e8;
    uStack_1d0 = uStack_6f0;
    uStack_1b8 = uStack_6d8;
    uStack_1c0 = uStack_6e0;
    uStack_1a8 = uStack_6c8;
    uStack_1b0 = uStack_6d0;
    uStack_218 = uStack_738;
    uStack_220 = uStack_740;
    uStack_208 = uStack_728;
    uStack_210 = uStack_730;
    uStack_1f8 = uStack_718;
    uStack_200 = uStack_720;
    uStack_1e8 = uStack_708;
    uStack_1f0 = uStack_710;
    FUN_10428e134(0);
    _objc_allocWithZone();
    puVar9 = &uStack_220;
    func_0x00010428c5b0();
  }
  *(undefined8 **)(unaff_x20 + _DAT_11306ae78) = puVar9;
  uStack_778 = param_1[0x41];
  uStack_780 = param_1[0x40];
  uStack_768 = param_1[0x43];
  uStack_770 = param_1[0x42];
  uStack_760 = param_1[0x44];
  uStack_758 = (undefined1)param_1[0x45];
  uStack_7b8 = param_1[0x39];
  uStack_7c0 = param_1[0x38];
  uStack_7a8 = param_1[0x3b];
  uStack_7b0 = param_1[0x3a];
  uStack_798 = param_1[0x3d];
  uStack_7a0 = param_1[0x3c];
  uStack_788 = param_1[0x3f];
  uStack_790 = param_1[0x3e];
  uStack_74f = (undefined7)*(undefined8 *)((long)param_1 + 0x231);
  uStack_748 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x231) >> 0x38);
  uStack_757 = (undefined7)*(undefined8 *)((long)param_1 + 0x229);
  uStack_750 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x229) >> 0x38);
  iVar8 = (int)&uStack_7c0;
  func_0x0001018793b8();
  if (iVar8 == 1) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uStack_258 = uStack_778;
    uStack_260 = uStack_780;
    uStack_248 = uStack_768;
    uStack_250 = uStack_770;
    uStack_238 = CONCAT71(uStack_757,uStack_758);
    uStack_240 = uStack_760;
    uStack_230 = CONCAT71(uStack_74f,uStack_750);
    uStack_298 = uStack_7b8;
    uStack_2a0 = uStack_7c0;
    uStack_288 = uStack_7a8;
    uStack_290 = uStack_7b0;
    uStack_278 = uStack_798;
    uStack_280 = uStack_7a0;
    uStack_268 = uStack_788;
    uStack_270 = uStack_790;
    func_0x0001047c8648(0);
    _objc_allocWithZone();
    puVar9 = &uStack_2a0;
    func_0x0001047c7990();
  }
  *(undefined8 **)(unaff_x20 + _DAT_11306ae80) = puVar9;
  uStack_7f8 = param_1[0x51];
  uStack_800 = param_1[0x50];
  uStack_7e8 = param_1[0x53];
  uStack_7f0 = param_1[0x52];
  uStack_7e0 = param_1[0x54];
  uStack_7d8 = (undefined1)param_1[0x55];
  uStack_7d7 = (undefined1)((ulong)param_1[0x55] >> 8);
  uStack_838 = param_1[0x49];
  uStack_840 = param_1[0x48];
  uStack_828 = param_1[0x4b];
  uStack_830 = param_1[0x4a];
  uStack_818 = param_1[0x4d];
  uStack_820 = param_1[0x4c];
  uStack_808 = param_1[0x4f];
  uStack_810 = param_1[0x4e];
  uVar21 = *(undefined8 *)((long)param_1 + 0x2aa);
  uStack_7ce = (undefined7)*(undefined8 *)((long)param_1 + 0x2b2);
  uStack_7c7 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x2b2) >> 0x38);
  uStack_7d6 = (undefined6)uVar21;
  uStack_7d0 = (undefined1)((ulong)uVar21 >> 0x30);
  uStack_7cf = (undefined1)((ulong)uVar21 >> 0x38);
  iVar8 = (int)&uStack_840;
  func_0x0001034bbc64();
  if (iVar8 == 1) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uStack_2d8 = uStack_7f8;
    uStack_2e0 = uStack_800;
    uStack_2c8 = uStack_7e8;
    uStack_2d0 = uStack_7f0;
    uStack_2b8 = uStack_7d8;
    uStack_2c0 = uStack_7e0;
    uStack_2af = CONCAT71(uStack_7ce,uStack_7cf);
    uStack_2b7 = CONCAT61(uStack_7d6,uStack_7d7);
    uStack_2b0 = uStack_7d0;
    uStack_318 = uStack_838;
    uStack_320 = uStack_840;
    uStack_308 = uStack_828;
    uStack_310 = uStack_830;
    uStack_2f8 = uStack_818;
    uStack_300 = uStack_820;
    uStack_2e8 = uStack_808;
    uStack_2f0 = uStack_810;
    FUN_10428516c(0);
    _objc_allocWithZone();
    puVar9 = &uStack_320;
    FUN_104283b68();
  }
  *(undefined8 **)(unaff_x20 + _DAT_11306ae88) = puVar9;
  lVar17 = param_1[0x58];
  if (lVar17 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    lVar20 = *(long *)(lVar17 + 0x10);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar20 != 0) {
      puStack_510 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000104209cd4(0,lVar20,0);
      puVar14 = puStack_510;
      uVar21 = 0;
      func_0x0001048116c8(0);
      puVar18 = (undefined1 *)(lVar17 + 0x30);
      do {
        uVar19 = *(undefined8 *)(puVar18 + -0x10);
        uVar22 = *(undefined8 *)(puVar18 + -8);
        uVar3 = *puVar18;
        _objc_allocWithZone(uVar21);
        _swift_bridgeObjectRetain_n(uVar19,2);
        uVar10 = uVar19;
        func_0x0001048109d4(uVar19,uVar22,uVar3);
        lVar11 = 0;
        FUN_1042a8530();
        lVar17 = lVar11;
        _objc_allocWithZone();
        *(undefined8 *)(lVar17 + _DAT_11306b228) = uVar10;
        puVar7 = PTR_s_init_1125d9248;
        lStack_998 = lVar17;
        lStack_990 = lVar11;
        _objc_retain(uVar10);
        plVar12 = &lStack_998;
        _objc_msgSendSuper2(plVar12,puVar7);
        _objc_release(uVar10);
        _swift_bridgeObjectRelease(uVar19);
        uVar16 = *(ulong *)(puVar14 + 0x10);
        puStack_510 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar16) {
          func_0x000104209cd4(1 < *(ulong *)(puVar14 + 0x18),uVar16 + 1,1);
        }
        puVar18 = puVar18 + 0x18;
        *(ulong *)(puStack_510 + 0x10) = uVar16 + 1;
        *(long **)(puStack_510 + uVar16 * 8 + 0x20) = plVar12;
        lVar20 = lVar20 + -1;
        puVar14 = puStack_510;
      } while (lVar20 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11306ae90) = puVar14;
  *(undefined8 *)(unaff_x20 + _DAT_11306ae98) = param_1[0x59];
  *(undefined1 *)(unaff_x20 + _DAT_11306aea0) = *(undefined1 *)(param_1 + 0x5a);
  *(undefined1 *)(unaff_x20 + _DAT_11306aea8) = *(undefined1 *)((long)param_1 + 0x2d1);
  *(undefined8 *)(unaff_x20 + _DAT_11306aeb0) = param_1[0x5b];
  *(undefined8 *)(unaff_x20 + _DAT_11306aeb8) = param_1[0x5c];
  *(undefined1 *)(unaff_x20 + _DAT_11306aec0) = *(undefined1 *)(param_1 + 0x5d);
  uStack_678 = param_1[0x5e];
  *(undefined8 *)(unaff_x20 + _DAT_11306aec8) = uStack_678;
  *(undefined1 *)(unaff_x20 + _DAT_11306aed0) = *(undefined1 *)(param_1 + 0x5f);
  *(undefined1 *)(unaff_x20 + _DAT_11306aed8) = *(undefined1 *)((long)param_1 + 0x2f9);
  lVar17 = param_1[99];
  if (lVar17 == 1) {
    func_0x00010429ff9c(&uStack_678,&puStack_510,0x11306a470,&UNK_10dce5650);
    plVar12 = (long *)0x0;
  }
  else {
    uVar19 = param_1[0x65];
    bVar4 = *(byte *)(param_1 + 100);
    uVar21 = param_1[0x62];
    uVar22 = param_1[0x61];
    bVar5 = *(byte *)(param_1 + 0x60);
    lVar11 = 0;
    FUN_10427cc68();
    lVar20 = lVar11;
    _objc_allocWithZone();
    *(byte *)(lVar20 + _DAT_11306a478) = bVar5 & 1;
    *(undefined8 *)(lVar20 + _DAT_11306a480) = uVar22;
    puVar9 = (undefined8 *)(lVar20 + _DAT_11306a488);
    *puVar9 = uVar21;
    puVar9[1] = lVar17;
    *(byte *)(lVar20 + _DAT_11306a490) = bVar4 & 1;
    *(undefined8 *)(lVar20 + _DAT_11306a498) = uVar19;
    func_0x00010429ff9c(&uStack_678,&puStack_510,0x11306a470,&UNK_10dce5650);
    puVar14 = PTR_s_init_1125d9248;
    lStack_988 = lVar20;
    lStack_980 = lVar11;
    _swift_bridgeObjectRetain(lVar17);
    _swift_bridgeObjectRetain(uVar19);
    plVar12 = &lStack_988;
    _objc_msgSendSuper2(plVar12,puVar14);
  }
  *(long **)(unaff_x20 + _DAT_11306aee0) = plVar12;
  *(undefined1 *)(unaff_x20 + _DAT_11306aee8) = *(undefined1 *)(param_1 + 0x66);
  uStack_680 = param_1[0x67];
  *(undefined8 *)(unaff_x20 + _DAT_11306aef0) = uStack_680;
  *(undefined8 *)(unaff_x20 + _DAT_11306aef8) = param_1[0x68];
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar17 = param_1[0x69];
  if (lVar17 == 0) {
    func_0x00010429ff9c(&uStack_680,&puStack_510,0x11306a470,&UNK_10dce5650);
    puVar14 = (undefined *)0x0;
  }
  else {
    lVar20 = *(long *)(lVar17 + 0x10);
    if (lVar20 == 0) {
      func_0x00010429ff9c(&uStack_680,&puStack_510,0x11306a470,&UNK_10dce5650);
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x00010429ff9c(&uStack_680,&puStack_510,0x11306a470,&UNK_10dce5650);
      puStack_510 = puVar14;
      func_0x000104209ca0(0,lVar20,0);
      puVar14 = puStack_510;
      puVar9 = (undefined8 *)(lVar17 + 0x20);
      uVar21 = 0;
      func_0x0001047e0610(0);
      do {
        uStack_368 = puVar9[0xd];
        uStack_370 = puVar9[0xc];
        uStack_358 = puVar9[0xf];
        uStack_360 = puVar9[0xe];
        uStack_348 = puVar9[0x11];
        uStack_350 = puVar9[0x10];
        uStack_338 = puVar9[0x13];
        uStack_340 = puVar9[0x12];
        uStack_3a8 = puVar9[5];
        uStack_3b0 = puVar9[4];
        uStack_398 = puVar9[7];
        uStack_3a0 = puVar9[6];
        uStack_388 = puVar9[9];
        uStack_390 = puVar9[8];
        uStack_378 = puVar9[0xb];
        uStack_380 = puVar9[10];
        uStack_3c8 = puVar9[1];
        uStack_3d0 = *puVar9;
        uStack_3b8 = puVar9[3];
        uStack_3c0 = puVar9[2];
        uStack_330 = *(undefined1 *)(puVar9 + 0x14);
        _objc_allocWithZone(uVar21);
        puVar13 = &uStack_3d0;
        func_0x0001047df924();
        uVar16 = *(ulong *)(puVar14 + 0x10);
        puStack_510 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar16) {
          func_0x000104209ca0(1 < *(ulong *)(puVar14 + 0x18),uVar16 + 1,1);
        }
        *(ulong *)(puStack_510 + 0x10) = uVar16 + 1;
        *(undefined8 **)(puStack_510 + uVar16 * 8 + 0x20) = puVar13;
        puVar9 = puVar9 + 0x15;
        lVar20 = lVar20 + -1;
        puVar14 = puStack_510;
      } while (lVar20 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11306af00) = puVar14;
  lVar17 = param_1[0x6a];
  if (lVar17 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    lVar20 = *(long *)(lVar17 + 0x10);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar20 != 0) {
      puStack_510 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000104209c6c(0,lVar20,0);
      puVar14 = puStack_510;
      puVar9 = (undefined8 *)(lVar17 + 0x20);
      uVar21 = 0;
      func_0x00010482f460(0);
      do {
        uStack_3f8 = puVar9[1];
        uStack_400 = *puVar9;
        uStack_3e8 = puVar9[3];
        uStack_3f0 = puVar9[2];
        uStack_3d8 = puVar9[5];
        uStack_3e0 = puVar9[4];
        _objc_allocWithZone(uVar21);
        puVar13 = &uStack_400;
        func_0x00010482eccc();
        uVar16 = *(ulong *)(puVar14 + 0x10);
        puStack_510 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar16) {
          func_0x000104209c6c(1 < *(ulong *)(puVar14 + 0x18),uVar16 + 1,1);
        }
        *(ulong *)(puStack_510 + 0x10) = uVar16 + 1;
        *(undefined8 **)(puStack_510 + uVar16 * 8 + 0x20) = puVar13;
        puVar9 = puVar9 + 6;
        lVar20 = lVar20 + -1;
        puVar14 = puStack_510;
      } while (lVar20 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11306af08) = puVar14;
  lVar17 = param_1[0x6b];
  if (lVar17 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    lVar20 = *(long *)(lVar17 + 0x10);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar20 != 0) {
      puStack_510 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000104209c38(0,lVar20,0);
      puVar14 = puStack_510;
      puVar9 = (undefined8 *)(lVar17 + 0x20);
      uVar21 = 0;
      func_0x000104830004(0);
      do {
        uStack_438 = puVar9[1];
        uStack_440 = *puVar9;
        uStack_428 = puVar9[3];
        uStack_430 = puVar9[2];
        uStack_418 = puVar9[5];
        uStack_420 = puVar9[4];
        uStack_410 = puVar9[6];
        _objc_allocWithZone(uVar21);
        puVar13 = &uStack_440;
        func_0x00010482f614();
        uVar16 = *(ulong *)(puVar14 + 0x10);
        puStack_510 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar16) {
          func_0x000104209c38(1 < *(ulong *)(puVar14 + 0x18),uVar16 + 1,1);
        }
        *(ulong *)(puStack_510 + 0x10) = uVar16 + 1;
        *(undefined8 **)(puStack_510 + uVar16 * 8 + 0x20) = puVar13;
        puVar9 = puVar9 + 7;
        lVar20 = lVar20 + -1;
        puVar14 = puStack_510;
      } while (lVar20 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11306af10) = puVar14;
  if (*(char *)(param_1 + 0x6d) == '\x01') {
    puVar14 = (undefined *)0x0;
  }
  else {
    uVar21 = param_1[0x6c];
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar21);
  }
  *(undefined **)(unaff_x20 + _DAT_11306af18) = puVar14;
  if (*(char *)(param_1 + 0x6f) == '\x01') {
    puVar14 = (undefined *)0x0;
  }
  else {
    uVar21 = param_1[0x6e];
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar21);
  }
  *(undefined **)(unaff_x20 + _DAT_11306af20) = puVar14;
  if (*(char *)(param_1 + 0x71) == '\x01') {
    puVar14 = (undefined *)0x0;
  }
  else {
    uVar21 = param_1[0x70];
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar21);
  }
  *(undefined **)(unaff_x20 + _DAT_11306af28) = puVar14;
  lVar17 = param_1[0x72];
  if (lVar17 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    lVar20 = *(long *)(lVar17 + 0x10);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar20 != 0) {
      puStack_640 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000104209c04(0,lVar20,0);
      puVar14 = puStack_640;
      puVar9 = (undefined8 *)(lVar17 + 0x20);
      uVar21 = 0;
      FUN_1042ac494(0);
      do {
        uStack_478 = puVar9[0x13];
        uStack_480 = puVar9[0x12];
        uStack_468 = puVar9[0x15];
        uStack_470 = puVar9[0x14];
        uStack_458 = puVar9[0x17];
        uStack_460 = puVar9[0x16];
        uStack_450 = *(undefined1 *)(puVar9 + 0x18);
        uStack_4b8 = puVar9[0xb];
        uStack_4c0 = puVar9[10];
        uStack_4a8 = puVar9[0xd];
        uStack_4b0 = puVar9[0xc];
        uStack_498 = puVar9[0xf];
        uStack_4a0 = puVar9[0xe];
        uStack_488 = puVar9[0x11];
        uStack_490 = puVar9[0x10];
        uStack_4f8 = puVar9[3];
        uStack_500 = puVar9[2];
        uStack_4e8 = puVar9[5];
        uStack_4f0 = puVar9[4];
        uStack_4d8 = puVar9[7];
        uStack_4e0 = puVar9[6];
        uStack_4c8 = puVar9[9];
        uStack_4d0 = puVar9[8];
        uStack_508 = puVar9[1];
        puStack_510 = (undefined *)*puVar9;
        _objc_allocWithZone(uVar21);
        ppuVar15 = &puStack_510;
        FUN_1042aa478();
        uVar16 = *(ulong *)(puVar14 + 0x10);
        puStack_640 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar16) {
          func_0x000104209c04(1 < *(ulong *)(puVar14 + 0x18),uVar16 + 1,1);
        }
        *(ulong *)(puStack_640 + 0x10) = uVar16 + 1;
        *(undefined ***)(puStack_640 + uVar16 * 8 + 0x20) = ppuVar15;
        puVar9 = puVar9 + 0x19;
        lVar20 = lVar20 + -1;
        puVar14 = puStack_640;
      } while (lVar20 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11306af30) = puVar14;
  uStack_688 = param_1[0x73];
  *(undefined8 *)(unaff_x20 + _DAT_11306af38) = uStack_688;
  if ((param_1[0x77] & 0xff) == 2) {
    func_0x00010429ff9c(&uStack_688,&puStack_640,0x112ee42a8,&UNK_10db0f340);
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uStack_568 = param_1[0x75];
    uStack_570 = param_1[0x74];
    uStack_560 = param_1[0x76];
    uStack_548 = param_1[0x79];
    uStack_550 = param_1[0x78];
    uStack_538 = param_1[0x7b];
    uStack_540 = param_1[0x7a];
    uStack_528 = param_1[0x7d];
    uStack_530 = param_1[0x7c];
    uStack_518 = param_1[0x7f];
    uStack_520 = param_1[0x7e];
    uStack_558 = param_1[0x77];
    FUN_1042a7bd0(0);
    _objc_allocWithZone();
    func_0x00010429ff9c(&uStack_688,&puStack_640,0x112ee42a8,&UNK_10db0f340);
    puVar9 = &uStack_570;
    FUN_1042a73ac();
  }
  *(undefined8 **)(unaff_x20 + _DAT_11306af40) = puVar9;
  lVar17 = param_1[0x89];
  if (lVar17 == 0) {
    ppuVar15 = (undefined **)0x0;
  }
  else {
    uStack_600 = param_1[0x88];
    uStack_628 = param_1[0x83];
    uStack_630 = param_1[0x82];
    uStack_618 = param_1[0x85];
    uStack_620 = param_1[0x84];
    uStack_608 = param_1[0x87];
    uStack_610 = param_1[0x86];
    uStack_638 = param_1[0x81];
    puStack_640 = (undefined *)param_1[0x80];
    lStack_5f8 = lVar17;
    puStack_5c0 = puStack_640;
    uStack_5b8 = uStack_638;
    uStack_5b0 = uStack_630;
    uStack_5a8 = uStack_628;
    uStack_5a0 = uStack_620;
    uStack_598 = uStack_618;
    uStack_590 = uStack_610;
    uStack_588 = uStack_608;
    uStack_580 = uStack_600;
    lStack_578 = lVar17;
    FUN_1042838a0(0);
    _objc_allocWithZone();
    func_0x00010429ff60(&puStack_640,&puStack_900);
    ppuVar15 = &puStack_5c0;
    FUN_104282a88();
  }
  *(undefined ***)(unaff_x20 + _DAT_11306af48) = ppuVar15;
  lVar17 = param_1[0x96];
  if (lVar17 == 1) {
    ppuVar15 = (undefined **)0x0;
  }
  else {
    uStack_8d8 = param_1[0x8f];
    uStack_8e0 = param_1[0x8e];
    uStack_8c8 = param_1[0x91];
    uStack_8d0 = param_1[0x90];
    lStack_8b8 = param_1[0x93];
    uStack_8c0 = param_1[0x92];
    uStack_8a8 = param_1[0x95];
    uStack_8b0 = param_1[0x94];
    uStack_8f8 = param_1[0x8b];
    puStack_900 = (undefined *)param_1[0x8a];
    uStack_8e8 = param_1[0x8d];
    uStack_8f0 = param_1[0x8c];
    uStack_898 = param_1[0x97];
    uStack_890 = *(undefined2 *)(param_1 + 0x98);
    lStack_8a0 = lVar17;
    puStack_640 = puStack_900;
    uStack_638 = uStack_8f8;
    uStack_630 = uStack_8f0;
    uStack_628 = uStack_8e8;
    uStack_620 = uStack_8e0;
    uStack_618 = uStack_8d8;
    uStack_610 = uStack_8d0;
    uStack_608 = uStack_8c8;
    uStack_600 = uStack_8c0;
    lStack_5f8 = lStack_8b8;
    uStack_5f0 = uStack_8b0;
    uStack_5e8 = uStack_8a8;
    lStack_5e0 = lVar17;
    uStack_5d8 = uStack_898;
    uStack_5d0 = uStack_890;
    FUN_104292a3c(0);
    _objc_allocWithZone();
    func_0x0001034bbb04(&puStack_900,&uStack_978);
    ppuVar15 = &puStack_640;
    FUN_10429130c();
  }
  *(undefined ***)(unaff_x20 + _DAT_11306af50) = ppuVar15;
  *(undefined1 *)(unaff_x20 + _DAT_11306af58) = *(undefined1 *)((long)param_1 + 0x4c2);
  uStack_690 = param_1[0x99];
  *(undefined8 *)(unaff_x20 + _DAT_11306af60) = uStack_690;
  if (*(char *)((long)param_1 + 0x511) == '\x01') {
    func_0x00010429ff9c(&uStack_690,&puStack_900,0x11306aff0,&UNK_10dce5ad0);
    ppuVar15 = (undefined **)0x0;
  }
  else {
    uStack_8e8 = param_1[0x9d];
    uStack_8f0 = param_1[0x9c];
    uStack_8d8 = param_1[0x9f];
    uStack_8e0 = param_1[0x9e];
    uStack_8c8 = param_1[0xa1];
    uStack_8d0 = param_1[0xa0];
    uStack_8c0 = CONCAT71(uStack_8c0._1_7_,*(undefined1 *)(param_1 + 0xa2));
    uStack_8f8 = param_1[0x9b];
    puStack_900 = (undefined *)param_1[0x9a];
    func_0x0001047de5f0(0);
    _objc_allocWithZone();
    func_0x00010429ff9c(&uStack_690,&uStack_978,0x11306aff0,&UNK_10dce5ad0);
    ppuVar15 = &puStack_900;
    func_0x0001047ddb9c();
  }
  *(undefined ***)(unaff_x20 + _DAT_11306af68) = ppuVar15;
  lVar17 = param_1[0xa4];
  if (lVar17 == 0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uStack_958 = param_1[0xa7];
    uVar21 = param_1[0xa6];
    uStack_968 = param_1[0xa5];
    uStack_978 = param_1[0xa3];
    lStack_970 = lVar17;
    uStack_960 = uVar21;
    func_0x000104817798(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(lVar17);
    _swift_bridgeObjectRetain(uVar21);
    puVar9 = &uStack_978;
    func_0x000104816f88();
  }
  *(undefined8 **)(unaff_x20 + _DAT_11306af70) = puVar9;
  if (*(char *)(param_1 + 0xaa) == '\x01') {
    plVar12 = (long *)0x0;
  }
  else {
    uVar21 = param_1[0xa9];
    uVar19 = param_1[0xa8];
    lVar20 = 0;
    FUN_1042b9264();
    lVar17 = lVar20;
    _objc_allocWithZone();
    *(undefined8 *)(lVar17 + _DAT_11306b758) = uVar19;
    *(undefined8 *)(lVar17 + _DAT_11306b760) = uVar21;
    plVar12 = &lStack_888;
    lStack_888 = lVar17;
    lStack_880 = lVar20;
    _objc_msgSendSuper2(plVar12,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_11306af78) = plVar12;
  lVar17 = param_1[0xab];
  if (lVar17 == 0) {
    plVar12 = (long *)0x0;
  }
  else {
    uVar21 = param_1[0xac];
    cVar6 = *(char *)(param_1 + 0xad);
    lVar11 = 0;
    FUN_104293e64();
    lVar20 = lVar11;
    _objc_allocWithZone();
    *(long *)(lVar20 + _DAT_11306acd8) = lVar17;
    if (cVar6 == '\x01') {
      _swift_bridgeObjectRetain(lVar17);
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_allocWithZone();
      _swift_bridgeObjectRetain(lVar17);
      func_0x00010c00e360(uVar21);
    }
    *(undefined **)(lVar20 + _DAT_11306ace0) = puVar14;
    plVar12 = &lStack_878;
    lStack_878 = lVar20;
    lStack_870 = lVar11;
    _objc_msgSendSuper2(plVar12,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_11306af80) = plVar12;
  lVar17 = param_1[0xae];
  if (lVar17 == 0) {
    plVar12 = (long *)0x0;
  }
  else {
    cVar6 = *(char *)(param_1 + 0xb0);
    lVar11 = 0;
    FUN_10428ea70();
    lVar20 = lVar11;
    _objc_allocWithZone();
    *(long *)(lVar20 + _DAT_11306ab08) = lVar17;
    if (cVar6 == '\x01') {
      _swift_bridgeObjectRetain(lVar17);
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_allocWithZone();
      _swift_bridgeObjectRetain(lVar17);
      func_0x00010c01e540();
    }
    *(undefined **)(lVar20 + _DAT_11306ab10) = puVar14;
    plVar12 = &lStack_868;
    lStack_868 = lVar20;
    lStack_860 = lVar11;
    _objc_msgSendSuper2(plVar12,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_11306af88) = plVar12;
  uStack_698 = param_1[0xb1];
  *(undefined8 *)(unaff_x20 + _DAT_11306af90) = uStack_698;
  uStack_6a0 = param_1[0xb2];
  *(undefined8 *)(unaff_x20 + _DAT_11306af98) = uStack_6a0;
  uStack_6a8 = param_1[0xb3];
  *(undefined8 *)(unaff_x20 + _DAT_11306afa0) = uStack_6a8;
  uStack_6b0 = param_1[0xb4];
  *(undefined8 *)(unaff_x20 + _DAT_11306afa8) = uStack_6b0;
  func_0x00010429ff9c(&uStack_698,auStack_848,0x112dc3de0,&UNK_10d9813c0);
  func_0x00010429ff9c(&uStack_6a0,auStack_848,0x112dc3de0,&UNK_10d9813c0);
  func_0x00010429ff9c(&uStack_6a8,auStack_848,0x112dc3de0,&UNK_10d9813c0);
  func_0x00010429ff9c(&uStack_6b0,auStack_848,0x11302e3e8,&UNK_10dcaa5f0);
  _objc_msgSendSuper2(auStack_858,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10429e778; end: 10429feb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10429e778(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 extraout_x8;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uStack_1ff0;
  undefined8 uStack_1fe8;
  undefined8 uStack_1fe0;
  undefined8 uStack_1fd8;
  undefined8 uStack_1fd0;
  undefined8 uStack_1fc8;
  undefined8 uStack_1fc0;
  undefined8 uStack_1fb8;
  undefined8 uStack_1fb0;
  undefined8 uStack_1fa8;
  undefined8 uStack_1fa0;
  undefined8 uStack_1f98;
  undefined1 auStack_1f80 [1448];
  undefined1 auStack_19d8 [1448];
  undefined *puStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  undefined8 uStack_1408;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined8 uStack_13f0;
  undefined8 uStack_13e8;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  undefined8 uStack_13c8;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined *puStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined1 uStack_d78;
  undefined *puStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined1 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined4 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined1 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined1 uStack_bc8;
  undefined7 uStack_bc7;
  undefined1 uStack_bc0;
  undefined7 uStack_bbf;
  undefined1 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined1 uStack_b48;
  undefined1 uStack_b47;
  undefined6 uStack_b46;
  undefined1 uStack_b40;
  undefined1 uStack_b3f;
  undefined7 uStack_b3e;
  undefined1 uStack_b37;
  undefined *puStack_b30;
  undefined8 uStack_b28;
  undefined1 uStack_b20;
  undefined1 uStack_b1f;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined1 uStack_b08;
  undefined8 uStack_b00;
  undefined1 uStack_af8;
  undefined1 uStack_af7;
  ulong uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  ulong uStack_ad0;
  undefined8 uStack_ac8;
  undefined1 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined *puStack_aa8;
  undefined *puStack_aa0;
  undefined *puStack_a98;
  undefined8 uStack_a90;
  undefined1 uStack_a88;
  undefined8 uStack_a80;
  undefined1 uStack_a78;
  undefined8 uStack_a70;
  undefined1 uStack_a68;
  undefined *puStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined2 uStack_930;
  undefined1 uStack_92e;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined2 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined1 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined1 uStack_888;
  undefined8 uStack_880;
  long lStack_878;
  undefined1 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined *puStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined1 uStack_660;
  undefined7 uStack_65f;
  undefined1 uStack_658;
  undefined8 uStack_657;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined1 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined2 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  byte bStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
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
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a0;
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
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
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
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined8 uStack_11f;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined2 uStack_a8;
  undefined6 uStack_a6;
  undefined2 uStack_a0;
  undefined8 uStack_9e;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000101895cec(&puStack_2a0);
  uStack_d08 = uStack_238;
  uStack_d10 = uStack_240;
  uStack_cf8 = uStack_228;
  uStack_d00 = uStack_230;
  uStack_d48 = uStack_278;
  uStack_d50 = uStack_280;
  uStack_d38 = uStack_268;
  uStack_d40 = uStack_270;
  uStack_d18 = uStack_248;
  uStack_d20 = uStack_250;
  uStack_d28 = uStack_258;
  uStack_d30 = uStack_260;
  uStack_d58 = uStack_288;
  uStack_d60 = uStack_290;
  uStack_d68 = uStack_298;
  puStack_d70 = puStack_2a0;
  uStack_cf0 = uStack_220;
  uStack_ce0 = 0x30000000000;
  uStack_cd0 = 0;
  uStack_cd8 = 0;
  uStack_cc8 = 0;
  func_0x000101895d08(&uStack_218);
  uStack_c50 = uStack_1b0;
  uStack_c58 = uStack_1b8;
  uStack_c40 = uStack_1a0;
  uStack_c48 = uStack_1a8;
  uStack_c90 = uStack_1f0;
  uStack_c98 = uStack_1f8;
  uStack_c80 = uStack_1e0;
  uStack_c88 = uStack_1e8;
  uStack_c70 = uStack_1d0;
  uStack_c78 = uStack_1d8;
  uStack_c60 = uStack_1c0;
  uStack_c68 = uStack_1c8;
  uStack_c38 = uStack_198;
  uStack_cb0 = uStack_210;
  uStack_cb8 = uStack_218;
  uStack_ca0 = uStack_200;
  uStack_ca8 = uStack_208;
  func_0x0001018797b4(&uStack_190);
  uStack_bbf = (undefined7)uStack_11f;
  uStack_bb8 = (undefined1)((ulong)uStack_11f >> 0x38);
  uStack_be8 = uStack_148;
  uStack_bf0 = uStack_150;
  uStack_bd8 = uStack_138;
  uStack_be0 = uStack_140;
  uStack_bd0 = uStack_130;
  uStack_c28 = uStack_188;
  uStack_c30 = uStack_190;
  uStack_c18 = uStack_178;
  uStack_c20 = uStack_180;
  uStack_c08 = uStack_168;
  uStack_c10 = uStack_170;
  uStack_bf8 = uStack_158;
  uStack_c00 = uStack_160;
  func_0x000101895d28(&uStack_110);
  uStack_b3e = (undefined7)uStack_9e;
  uStack_b37 = (undefined1)((ulong)uStack_9e >> 0x38);
  uStack_b40 = (undefined1)uStack_a0;
  uStack_b3f = (undefined1)((ushort)uStack_a0 >> 8);
  uStack_b68 = uStack_c8;
  uStack_b70 = uStack_d0;
  uStack_b58 = uStack_b8;
  uStack_b60 = uStack_c0;
  uStack_b48 = (undefined1)uStack_a8;
  uStack_b47 = (undefined1)((ushort)uStack_a8 >> 8);
  uStack_b50 = uStack_b0;
  uStack_ba8 = uStack_108;
  uStack_bb0 = uStack_110;
  uStack_b98 = uStack_f8;
  uStack_ba0 = uStack_100;
  uStack_b88 = uStack_e8;
  uStack_b90 = uStack_f0;
  uStack_b78 = uStack_d8;
  uStack_b80 = uStack_e0;
  uStack_a90 = 0;
  uStack_a88 = 1;
  uStack_a80 = 0;
  uStack_a78 = 1;
  uStack_a70 = 0;
  uStack_a68 = 1;
  uStack_a40 = 0;
  uStack_a48 = 0;
  uStack_a50 = 0;
  uStack_a38 = 2;
  uStack_a28 = 0;
  uStack_a30 = 0;
  uStack_a18 = 0;
  uStack_a20 = 0;
  uStack_a08 = 0;
  uStack_a10 = 0;
  uStack_9f8 = 0;
  uStack_a00 = 0;
  uStack_9e8 = 0;
  uStack_9f0 = 0;
  uStack_9d8 = 0;
  uStack_9e0 = 0;
  uStack_9c8 = 0;
  uStack_9d0 = 0;
  uStack_9b8 = 0;
  uStack_9c0 = 0;
  uStack_9a8 = 0;
  uStack_9b0 = 0;
  uStack_998 = 0;
  uStack_9a0 = 0;
  uStack_988 = 0;
  uStack_990 = 0;
  uStack_978 = 0;
  uStack_980 = 0;
  uStack_968 = 0;
  uStack_970 = 0;
  uStack_958 = 0;
  uStack_960 = 0;
  uStack_948 = 0;
  uStack_950 = 0;
  uStack_938 = 0;
  uStack_940 = 1;
  uStack_930 = 0;
  uStack_918 = 0;
  uStack_920 = 0;
  uStack_908 = 0;
  uStack_910 = 0;
  uStack_8f8 = 0;
  uStack_900 = 0;
  uStack_8e8 = 0;
  uStack_8f0 = 0;
  uStack_8e0 = 0x100;
  puVar9 = (undefined8 *)(param_1 + _DAT_11306ade8);
  uVar13 = puVar9[1];
  uStack_de8 = puVar9[1];
  uStack_df0 = *puVar9;
  uStack_de0 = *(undefined8 *)(param_1 + _DAT_11306adf0);
  uStack_dd8 = *(undefined8 *)(param_1 + _DAT_11306adf8);
  uStack_dd0 = *(undefined8 *)(param_1 + _DAT_11306ae00);
  uStack_dc8 = *(undefined8 *)(param_1 + _DAT_11306ae08);
  uStack_dc0 = *(undefined8 *)(param_1 + _DAT_11306ae10);
  uStack_db8 = *(undefined8 *)(param_1 + _DAT_11306ae18);
  uStack_db0 = *(undefined8 *)(param_1 + _DAT_11306ae20);
  uStack_da8 = *(undefined8 *)(param_1 + _DAT_11306ae28);
  uVar18 = *(undefined8 *)(param_1 + _DAT_11306ae30);
  uStack_d98 = *(undefined8 *)(param_1 + _DAT_11306ae38);
  uStack_d90 = *(undefined8 *)(param_1 + _DAT_11306ae40);
  puVar9 = (undefined8 *)(param_1 + _DAT_11306ae48);
  uVar20 = puVar9[1];
  uStack_d80 = puVar9[1];
  uStack_d88 = *puVar9;
  uStack_d78 = *(undefined1 *)(param_1 + _DAT_11306ae50);
  uStack_da0 = uVar18;
  if (*(long *)(param_1 + _DAT_11306ae58) == 0) {
    uStack_2c8 = uStack_238;
    uStack_2d0 = uStack_240;
    uStack_2b8 = uStack_228;
    uStack_2c0 = uStack_230;
    uStack_2b0 = uStack_220;
    uStack_308 = uStack_278;
    uStack_310 = uStack_280;
    uStack_2f8 = uStack_268;
    uStack_300 = uStack_270;
    uStack_2d8 = uStack_248;
    uStack_2e0 = uStack_250;
    uStack_2e8 = uStack_258;
    uStack_2f0 = uStack_260;
    uStack_320 = uStack_290;
    uStack_318 = uStack_288;
    puStack_330 = puStack_2a0;
    uStack_328 = uStack_298;
  }
  else {
    func_0x0001042a33c0(&puStack_848);
    uStack_13c8 = uStack_7e0;
    uStack_13d0 = uStack_7e8;
    uStack_13b8 = uStack_7d0;
    uStack_13c0 = uStack_7d8;
    uStack_13b0 = uStack_7c8;
    uStack_1408 = uStack_820;
    uStack_1410 = uStack_828;
    uStack_13f8 = uStack_810;
    uStack_1400 = uStack_818;
    uStack_13d8 = uStack_7f0;
    uStack_13e0 = uStack_7f8;
    uStack_13e8 = uStack_800;
    uStack_13f0 = uStack_808;
    uStack_1418 = uStack_830;
    uStack_1420 = uStack_838;
    uStack_1428 = uStack_840;
    puStack_1430 = puStack_848;
    func_0x00010429ff5c(&puStack_1430);
    uStack_2c8 = uStack_13c8;
    uStack_2d0 = uStack_13d0;
    uStack_2b8 = uStack_13b8;
    uStack_2c0 = uStack_13c0;
    uStack_2b0 = uStack_13b0;
    uStack_308 = uStack_1408;
    uStack_310 = uStack_1410;
    uStack_2f8 = uStack_13f8;
    uStack_300 = uStack_1400;
    uStack_2d8 = uStack_13d8;
    uStack_2e0 = uStack_13e0;
    uStack_2e8 = uStack_13e8;
    uStack_2f0 = uStack_13f0;
    uStack_320 = uStack_1420;
    uStack_318 = uStack_1418;
    puStack_330 = puStack_1430;
    uStack_328 = uStack_1428;
  }
  uStack_e18 = uStack_d08;
  uStack_e20 = uStack_d10;
  uStack_e08 = uStack_cf8;
  uStack_e10 = uStack_d00;
  uStack_e00 = uStack_cf0;
  uStack_e58 = uStack_d48;
  uStack_e60 = uStack_d50;
  uStack_e48 = uStack_d38;
  uStack_e50 = uStack_d40;
  uStack_e28 = uStack_d18;
  uStack_e30 = uStack_d20;
  uStack_e38 = uStack_d28;
  uStack_e40 = uStack_d30;
  uStack_e68 = uStack_d58;
  uStack_e70 = uStack_d60;
  uStack_e78 = uStack_d68;
  puStack_e80 = puStack_d70;
  _swift_bridgeObjectRetain(uVar20);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar18);
  uVar13 = 0x1130699e0;
  puVar7 = &UNK_10dce4790;
  FUN_10429ff14(&puStack_e80);
  uStack_d08 = uStack_2c8;
  uStack_d10 = uStack_2d0;
  uStack_cf8 = uStack_2b8;
  uStack_d00 = uStack_2c0;
  uStack_cf0 = uStack_2b0;
  uStack_d48 = uStack_308;
  uStack_d50 = uStack_310;
  uStack_d38 = uStack_2f8;
  uStack_d40 = uStack_300;
  uStack_d28 = uStack_2e8;
  uStack_d30 = uStack_2f0;
  uStack_d18 = uStack_2d8;
  uStack_d20 = uStack_2e0;
  uStack_ce8 = *(undefined1 *)(param_1 + _DAT_11306ae60);
  uStack_d68 = uStack_328;
  puStack_d70 = puStack_330;
  uStack_d58 = uStack_318;
  uStack_d60 = uStack_320;
  lVar5 = *(long *)(param_1 + _DAT_11306ae68);
  if (lVar5 == 0) {
    uVar13 = 0;
    param_4 = 0;
    uStack_ce0 = 0x30000000000;
    uStack_cd0 = 0;
  }
  else {
    _objc_retain();
    lVar8 = lVar5;
    FUN_1042803ac();
    _objc_release(lVar5);
    uStack_ce0._0_6_ = (undefined6)lVar8;
    uStack_cd0 = CONCAT71(uStack_cd0._1_7_,(char)puVar7);
    uStack_cd0 = CONCAT44((int)((ulong)puVar7 >> 0x20),(undefined4)uStack_cd0);
  }
  uStack_cc0 = *(undefined8 *)(param_1 + _DAT_11306ae70);
  uStack_cd8 = uVar13;
  uStack_cc8 = param_4;
  if (*(long *)(param_1 + _DAT_11306ae78) == 0) {
    uStack_c50 = uStack_1b0;
    uStack_c58 = uStack_1b8;
    uStack_c40 = uStack_1a0;
    uStack_c48 = uStack_1a8;
    uStack_c38 = uStack_198;
    uStack_c90 = uStack_1f0;
    uStack_c98 = uStack_1f8;
    uStack_c80 = uStack_1e0;
    uStack_c88 = uStack_1e8;
    uStack_c70 = uStack_1d0;
    uStack_c78 = uStack_1d8;
    uStack_c60 = uStack_1c0;
    uStack_c68 = uStack_1c8;
    uStack_cb0 = uStack_210;
    uStack_cb8 = uStack_218;
    uStack_ca0 = uStack_200;
    uStack_ca8 = uStack_208;
  }
  else {
    FUN_10428da08(&uStack_7c0);
    uStack_c70 = uStack_778;
    uStack_c78 = uStack_780;
    uStack_c60 = uStack_768;
    uStack_c68 = uStack_770;
    uStack_c50 = uStack_758;
    uStack_c58 = uStack_760;
    uStack_c40 = uStack_748;
    uStack_c48 = uStack_750;
    uStack_cb0 = uStack_7b8;
    uStack_cb8 = uStack_7c0;
    uStack_ca0 = uStack_7a8;
    uStack_ca8 = uStack_7b0;
    uStack_c90 = uStack_798;
    uStack_c98 = uStack_7a0;
    uStack_c80 = uStack_788;
    uStack_c88 = uStack_790;
    func_0x00010187bc08(&uStack_cb8);
  }
  if (*(long *)(param_1 + _DAT_11306ae80) == 0) {
    uStack_be8 = uStack_148;
    uStack_bf0 = uStack_150;
    uStack_bd8 = uStack_138;
    uStack_be0 = uStack_140;
    uStack_bc8 = uStack_128;
    uStack_bd0 = uStack_130;
    uStack_bbf = (undefined7)uStack_11f;
    uStack_bb8 = (undefined1)((ulong)uStack_11f >> 0x38);
    uStack_bc7 = uStack_127;
    uStack_bc0 = uStack_120;
    uStack_c28 = uStack_188;
    uStack_c30 = uStack_190;
    uStack_c18 = uStack_178;
    uStack_c20 = uStack_180;
    uStack_c08 = uStack_168;
    uStack_c10 = uStack_170;
    uStack_bf8 = uStack_158;
    uStack_c00 = uStack_160;
  }
  else {
    _objc_retain();
    func_0x0001047c84d8(&uStack_740);
    uStack_be8 = uStack_6f8;
    uStack_bf0 = uStack_700;
    uStack_bd8 = uStack_6e8;
    uStack_be0 = uStack_6f0;
    uStack_bc8 = (undefined1)uStack_6d8;
    uStack_bc7 = (undefined7)((ulong)uStack_6d8 >> 8);
    uStack_bd0 = uStack_6e0;
    uStack_bc0 = (undefined1)uStack_6d0;
    uStack_bbf = (undefined7)((ulong)uStack_6d0 >> 8);
    uStack_c28 = uStack_738;
    uStack_c30 = uStack_740;
    uStack_c18 = uStack_728;
    uStack_c20 = uStack_730;
    uStack_c08 = uStack_718;
    uStack_c10 = uStack_720;
    uStack_bf8 = uStack_708;
    uStack_c00 = uStack_710;
    func_0x0001018797d8(&uStack_c30);
  }
  lVar5 = *(long *)(param_1 + _DAT_11306ae88);
  if (lVar5 == 0) {
    uStack_b68 = uStack_c8;
    uStack_b70 = uStack_d0;
    uStack_b58 = uStack_b8;
    uStack_b60 = uStack_c0;
    uStack_b48 = (undefined1)uStack_a8;
    uStack_b47 = (undefined1)((ushort)uStack_a8 >> 8);
    uStack_b50 = uStack_b0;
    uStack_b3e = (undefined7)uStack_9e;
    uStack_b37 = (undefined1)((ulong)uStack_9e >> 0x38);
    uStack_b46 = uStack_a6;
    uStack_b40 = (undefined1)uStack_a0;
    uStack_b3f = (undefined1)((ushort)uStack_a0 >> 8);
    uStack_ba8 = uStack_108;
    uStack_bb0 = uStack_110;
    uStack_b98 = uStack_f8;
    uStack_ba0 = uStack_100;
    uStack_b88 = uStack_e8;
    uStack_b90 = uStack_f0;
    uStack_b78 = uStack_d8;
    uStack_b80 = uStack_e0;
    uVar13 = uStack_f0;
  }
  else {
    _objc_retain();
    FUN_104284960(&uStack_6c8);
    _objc_release(lVar5);
    uStack_b68 = uStack_680;
    uStack_b70 = uStack_688;
    uStack_b58 = uStack_670;
    uStack_b60 = uStack_678;
    uStack_b48 = uStack_660;
    uStack_b50 = uStack_668;
    uStack_b3f = (undefined1)uStack_657;
    uStack_b3e = (undefined7)((ulong)uStack_657 >> 8);
    uStack_b47 = (undefined1)uStack_65f;
    uStack_b46 = (undefined6)((uint7)uStack_65f >> 8);
    uStack_b40 = uStack_658;
    uStack_ba8 = uStack_6c0;
    uStack_bb0 = uStack_6c8;
    uStack_b98 = uStack_6b0;
    uStack_ba0 = uStack_6b8;
    uStack_b88 = uStack_6a0;
    uStack_b90 = uStack_6a8;
    uStack_b78 = uStack_690;
    uStack_b80 = uStack_698;
    func_0x00010429ff54(&uStack_bb0);
    uVar13 = uStack_6a8;
  }
  uVar12 = *(ulong *)(param_1 + _DAT_11306ae90);
  if (uVar12 == 0) {
    puStack_b30 = (undefined *)0x0;
  }
  else {
    uVar14 = uVar12 & 0xffffffffffffff8;
    if (uVar12 >> 0x3e == 0) {
      uVar10 = *(ulong *)(uVar14 + 0x10);
    }
    else {
      uVar10 = uVar12;
      if (-1 < (long)uVar12) {
        uVar10 = uVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    puStack_b30 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar10 != 0) {
      puStack_1430 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar6 = uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU);
      uVar18 = 0;
      func_0x000104209d5c(0);
      if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10429fe9c);
        (*pcVar4)();
      }
      if ((uVar12 & 0xc000000000000001) == 0) {
        uVar19 = 0;
        do {
          puVar7 = puStack_1430;
          if (*(ulong *)(uVar14 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10429f3b0);
            (*pcVar4)();
          }
          lVar5 = *(long *)(*(long *)(uVar12 + 0x20 + uVar19 * 8) + _DAT_11306b228);
          if (lVar5 == 0) {
            _objc_retain();
            goto LAB_10429feb0;
          }
          _objc_retain();
          func_0x00010481135c();
          uVar3 = *(ulong *)(puVar7 + 0x10);
          puStack_1430 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
            func_0x000104209d5c(1 < *(ulong *)(puVar7 + 0x18),uVar3 + 1,1);
          }
          uVar19 = uVar19 + 1;
          *(ulong *)(puStack_1430 + 0x10) = uVar3 + 1;
          *(long *)(puStack_1430 + uVar3 * 0x18 + 0x20) = lVar5;
          *(ulong *)(puStack_1430 + uVar3 * 0x18 + 0x28) = uVar6;
          puStack_1430[uVar3 * 0x18 + 0x30] = (char)uVar18;
          puStack_b30 = puStack_1430;
        } while (uVar10 != uVar19);
      }
      else {
        uVar14 = 0;
        do {
          puVar7 = puStack_1430;
          uVar6 = uVar14;
          uVar19 = uVar12;
          func_0x000104208ac4();
          lVar5 = *(long *)(uVar6 + _DAT_11306b228);
          if (lVar5 == 0) {
LAB_10429feb0:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10429feb4);
            (*pcVar4)();
          }
          _objc_retain();
          func_0x00010481135c();
          uVar20 = uVar18;
          _swift_unknownObjectRelease(uVar6);
          uVar6 = *(ulong *)(puVar7 + 0x10);
          puStack_1430 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar6) {
            uVar20 = 1;
            func_0x000104209d5c(1 < *(ulong *)(puVar7 + 0x18),uVar6 + 1);
          }
          uVar14 = uVar14 + 1;
          *(ulong *)(puStack_1430 + 0x10) = uVar6 + 1;
          *(long *)(puStack_1430 + uVar6 * 0x18 + 0x20) = lVar5;
          *(ulong *)(puStack_1430 + uVar6 * 0x18 + 0x28) = uVar19;
          puStack_1430[uVar6 * 0x18 + 0x30] = (char)uVar18;
          uVar18 = uVar20;
          puStack_b30 = puStack_1430;
        } while (uVar10 != uVar14);
      }
    }
  }
  uStack_b28 = *(undefined8 *)(param_1 + _DAT_11306ae98);
  uStack_b20 = *(undefined1 *)(param_1 + _DAT_11306aea0);
  uStack_b1f = *(undefined1 *)(param_1 + _DAT_11306aea8);
  uStack_b18 = *(undefined8 *)(param_1 + _DAT_11306aeb0);
  uStack_b10 = *(undefined8 *)(param_1 + _DAT_11306aeb8);
  uStack_b08 = *(undefined1 *)(param_1 + _DAT_11306aec0);
  uVar18 = *(undefined8 *)(param_1 + _DAT_11306aec8);
  uStack_af8 = *(undefined1 *)(param_1 + _DAT_11306aed0);
  uStack_af7 = *(undefined1 *)(param_1 + _DAT_11306aed8);
  lVar5 = *(long *)(param_1 + _DAT_11306aee0);
  uStack_b00 = uVar18;
  if (lVar5 == 0) {
    uVar12 = 0;
    uVar15 = 0;
    uVar20 = 0;
    uVar14 = 0;
    uVar11 = 0;
    uVar21 = 1;
  }
  else {
    uVar12 = (ulong)*(byte *)(lVar5 + _DAT_11306a478);
    uVar15 = *(undefined8 *)(lVar5 + _DAT_11306a480);
    uVar14 = (ulong)*(byte *)(lVar5 + _DAT_11306a490);
    uVar20 = *(undefined8 *)(lVar5 + _DAT_11306a488);
    uVar21 = ((undefined8 *)(lVar5 + _DAT_11306a488))[1];
    uVar11 = *(undefined8 *)(lVar5 + _DAT_11306a498);
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRetain(uVar21);
  }
  uStack_ac0 = *(undefined1 *)(param_1 + _DAT_11306aee8);
  uVar16 = *(undefined8 *)(param_1 + _DAT_11306aef0);
  uStack_ab0 = *(undefined8 *)(param_1 + _DAT_11306aef8);
  uVar10 = *(ulong *)(param_1 + _DAT_11306af00);
  uStack_af0 = uVar12;
  uStack_ae8 = uVar15;
  uStack_ae0 = uVar20;
  uStack_ad8 = uVar21;
  uStack_ad0 = uVar14;
  uStack_ac8 = uVar11;
  uStack_ab8 = uVar16;
  if (uVar10 == 0) {
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRetain(uVar18);
    puStack_aa8 = (undefined *)0x0;
  }
  else {
    if (uVar10 >> 0x3e == 0) {
      uVar12 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar12 = uVar10;
      if (-1 < (long)uVar10) {
        uVar12 = uVar10 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar12 == 0) {
      _swift_bridgeObjectRetain(uVar16);
      _swift_bridgeObjectRetain(uVar18);
      puStack_aa8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_1430 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_bridgeObjectRetain(uVar18);
      _swift_bridgeObjectRetain(uVar16);
      func_0x000104209d40(0,uVar12 & ((long)uVar12 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10429fea0);
        (*pcVar4)();
      }
      if ((uVar10 & 0xc000000000000001) == 0) {
        puVar9 = (undefined8 *)(uVar10 + 0x20);
        do {
          puVar7 = puStack_1430;
          _objc_retain(*puVar9);
          func_0x0001047df6fc(&uStack_410);
          uVar14 = *(ulong *)(puVar7 + 0x10);
          puStack_1430 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar14) {
            func_0x000104209d40(1 < *(ulong *)(puVar7 + 0x18),uVar14 + 1,1);
          }
          *(ulong *)(puStack_1430 + 0x10) = uVar14 + 1;
          *(undefined8 *)(puStack_1430 + uVar14 * 0xa8 + 0x38) = uStack_3f8;
          *(undefined8 *)(puStack_1430 + uVar14 * 0xa8 + 0x30) = uStack_400;
          *(undefined8 *)(puStack_1430 + uVar14 * 0xa8 + 0x48) = uStack_3e8;
          *(undefined8 *)(puStack_1430 + uVar14 * 0xa8 + 0x40) = uStack_3f0;
          *(undefined8 *)(puStack_1430 + uVar14 * 0xa8 + 0x28) = uStack_408;
          *(undefined8 *)(puStack_1430 + uVar14 * 0xa8 + 0x20) = uStack_410;
          *(undefined8 *)(puStack_1430 + uVar14 * 0xa8 + 0x78) = uStack_3b8;
          *(undefined8 *)(puStack_1430 + uVar14 * 0xa8 + 0x70) = uStack_3c0;
          *(undefined8 *)(puStack_1430 + uVar14 * 0xa8 + 0x88) = uStack_3a8;
          *(undefined8 *)(puStack_1430 + uVar14 * 0xa8 + 0x80) = uStack_3b0;
          *(undefined8 *)(puStack_1430 + uVar14 * 0xa8 + 0x58) = uStack_3d8;
          *(undefined8 *)(puStack_1430 + uVar14 * 0xa8 + 0x50) = uStack_3e0;
          *(undefined8 *)(puStack_1430 + uVar14 * 0xa8 + 0x68) = uStack_3c8;
          *(undefined8 *)(puStack_1430 + uVar14 * 0xa8 + 0x60) = uStack_3d0;
          puStack_1430[uVar14 * 0xa8 + 0xc0] = uStack_370;
          *(undefined8 *)(puStack_1430 + uVar14 * 0xa8 + 0xa8) = uStack_388;
          *(undefined8 *)(puStack_1430 + uVar14 * 0xa8 + 0xa0) = uStack_390;
          *(undefined8 *)(puStack_1430 + uVar14 * 0xa8 + 0xb8) = uStack_378;
          *(undefined8 *)(puStack_1430 + uVar14 * 0xa8 + 0xb0) = uStack_380;
          *(undefined8 *)(puStack_1430 + uVar14 * 0xa8 + 0x98) = uStack_398;
          *(undefined8 *)(puStack_1430 + uVar14 * 0xa8 + 0x90) = uStack_3a0;
          uVar12 = uVar12 - 1;
          puStack_aa8 = puStack_1430;
          puVar9 = puVar9 + 1;
          uVar13 = uStack_3a0;
        } while (uVar12 != 0);
      }
      else {
        uVar14 = 0;
        do {
          puVar7 = puStack_1430;
          func_0x000104208928(uVar14,uVar10);
          func_0x0001047df6fc(&uStack_410);
          uVar6 = *(ulong *)(puVar7 + 0x10);
          puStack_1430 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar6) {
            func_0x000104209d40(1 < *(ulong *)(puVar7 + 0x18),uVar6 + 1,1);
          }
          uVar14 = uVar14 + 1;
          *(ulong *)(puStack_1430 + 0x10) = uVar6 + 1;
          *(undefined8 *)(puStack_1430 + uVar6 * 0xa8 + 0x38) = uStack_3f8;
          *(undefined8 *)(puStack_1430 + uVar6 * 0xa8 + 0x30) = uStack_400;
          *(undefined8 *)(puStack_1430 + uVar6 * 0xa8 + 0x48) = uStack_3e8;
          *(undefined8 *)(puStack_1430 + uVar6 * 0xa8 + 0x40) = uStack_3f0;
          *(undefined8 *)(puStack_1430 + uVar6 * 0xa8 + 0x28) = uStack_408;
          *(undefined8 *)(puStack_1430 + uVar6 * 0xa8 + 0x20) = uStack_410;
          *(undefined8 *)(puStack_1430 + uVar6 * 0xa8 + 0x78) = uStack_3b8;
          *(undefined8 *)(puStack_1430 + uVar6 * 0xa8 + 0x70) = uStack_3c0;
          *(undefined8 *)(puStack_1430 + uVar6 * 0xa8 + 0x88) = uStack_3a8;
          *(undefined8 *)(puStack_1430 + uVar6 * 0xa8 + 0x80) = uStack_3b0;
          *(undefined8 *)(puStack_1430 + uVar6 * 0xa8 + 0x58) = uStack_3d8;
          *(undefined8 *)(puStack_1430 + uVar6 * 0xa8 + 0x50) = uStack_3e0;
          *(undefined8 *)(puStack_1430 + uVar6 * 0xa8 + 0x68) = uStack_3c8;
          *(undefined8 *)(puStack_1430 + uVar6 * 0xa8 + 0x60) = uStack_3d0;
          puStack_1430[uVar6 * 0xa8 + 0xc0] = uStack_370;
          *(undefined8 *)(puStack_1430 + uVar6 * 0xa8 + 0xa8) = uStack_388;
          *(undefined8 *)(puStack_1430 + uVar6 * 0xa8 + 0xa0) = uStack_390;
          *(undefined8 *)(puStack_1430 + uVar6 * 0xa8 + 0xb8) = uStack_378;
          *(undefined8 *)(puStack_1430 + uVar6 * 0xa8 + 0xb0) = uStack_380;
          *(undefined8 *)(puStack_1430 + uVar6 * 0xa8 + 0x98) = uStack_398;
          *(undefined8 *)(puStack_1430 + uVar6 * 0xa8 + 0x90) = uStack_3a0;
          puStack_aa8 = puStack_1430;
          uVar13 = uStack_3a0;
        } while (uVar12 != uVar14);
      }
    }
  }
  uVar12 = *(ulong *)(param_1 + _DAT_11306af08);
  if (uVar12 == 0) {
    puStack_aa0 = (undefined *)0x0;
  }
  else {
    if (uVar12 >> 0x3e == 0) {
      uVar14 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar14 = uVar12;
      if (-1 < (long)uVar12) {
        uVar14 = uVar12 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    puStack_aa0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar14 != 0) {
      puStack_1430 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000104209d24(0,uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10429fea4);
        (*pcVar4)();
      }
      if ((uVar12 & 0xc000000000000001) == 0) {
        lVar5 = *(ulong *)(puStack_1430 + 0x10) * 0x30 + 0x48;
        uVar10 = *(ulong *)(puStack_1430 + 0x10);
        plVar17 = (long *)(uVar12 + 0x20);
        do {
          lVar8 = *plVar17;
          uVar18 = *(undefined8 *)(lVar8 + _DAT_1130912b0);
          uVar20 = *(undefined8 *)(lVar8 + _DAT_1130912b8);
          lVar8 = *(long *)(lVar8 + _DAT_1130912c0);
          uVar15 = *(undefined8 *)(lVar8 + _DAT_11308fc38);
          uVar16 = *(undefined8 *)(lVar8 + _DAT_11308fc40);
          uVar21 = *(undefined8 *)(lVar8 + _DAT_11308fc48);
          uVar11 = *(undefined8 *)(lVar8 + _DAT_11308fc50);
          uVar12 = uVar10 + 1;
          if (*(ulong *)(puStack_1430 + 0x18) >> 1 <= uVar10) {
            func_0x000104209d24(1 < *(ulong *)(puStack_1430 + 0x18),uVar12,1);
          }
          *(ulong *)(puStack_1430 + 0x10) = uVar12;
          puVar9 = (undefined8 *)(puStack_1430 + lVar5);
          puVar9[-5] = uVar18;
          puVar9[-4] = uVar20;
          puVar9[-3] = uVar15;
          puVar9[-2] = uVar16;
          lVar5 = lVar5 + 0x30;
          puVar9[-1] = uVar21;
          *puVar9 = uVar11;
          uVar14 = uVar14 - 1;
          uVar10 = uVar12;
          puStack_aa0 = puStack_1430;
          plVar17 = plVar17 + 1;
        } while (uVar14 != 0);
      }
      else {
        uVar10 = 0;
        do {
          puVar7 = puStack_1430;
          uVar6 = uVar10;
          func_0x00010420878c(uVar10,uVar12);
          uVar18 = *(undefined8 *)(uVar6 + _DAT_1130912b0);
          uVar20 = *(undefined8 *)(uVar6 + _DAT_1130912b8);
          lVar5 = *(long *)(uVar6 + _DAT_1130912c0);
          _objc_retain();
          _swift_unknownObjectRelease(uVar6);
          uVar21 = *(undefined8 *)(lVar5 + _DAT_11308fc38);
          uVar11 = *(undefined8 *)(lVar5 + _DAT_11308fc40);
          uVar15 = *(undefined8 *)(lVar5 + _DAT_11308fc48);
          uVar16 = *(undefined8 *)(lVar5 + _DAT_11308fc50);
          _objc_release(lVar5);
          uVar6 = *(ulong *)(puVar7 + 0x10);
          puStack_1430 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar6) {
            func_0x000104209d24(1 < *(ulong *)(puVar7 + 0x18),uVar6 + 1,1);
          }
          uVar10 = uVar10 + 1;
          *(ulong *)(puStack_1430 + 0x10) = uVar6 + 1;
          *(undefined8 *)(puStack_1430 + uVar6 * 0x30 + 0x20) = uVar18;
          *(undefined8 *)(puStack_1430 + uVar6 * 0x30 + 0x28) = uVar20;
          *(undefined8 *)(puStack_1430 + uVar6 * 0x30 + 0x30) = uVar21;
          *(undefined8 *)(puStack_1430 + uVar6 * 0x30 + 0x38) = uVar11;
          *(undefined8 *)(puStack_1430 + uVar6 * 0x30 + 0x40) = uVar15;
          *(undefined8 *)(puStack_1430 + uVar6 * 0x30 + 0x48) = uVar16;
          puStack_aa0 = puStack_1430;
        } while (uVar14 != uVar10);
      }
    }
  }
  uVar12 = *(ulong *)(param_1 + _DAT_11306af10);
  if (uVar12 == 0) {
    puStack_a98 = (undefined *)0x0;
  }
  else {
    if (uVar12 >> 0x3e == 0) {
      uVar14 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar14 = uVar12;
      if (-1 < (long)uVar12) {
        uVar14 = uVar12 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    puStack_a98 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar14 != 0) {
      puStack_1430 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001018ace0c(0,uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10429fea8);
        (*pcVar4)();
      }
      if ((uVar12 & 0xc000000000000001) == 0) {
        puVar9 = (undefined8 *)(uVar12 + 0x20);
        do {
          puVar7 = puStack_1430;
          _objc_retain(*puVar9);
          func_0x00010482fe58(&uStack_368);
          uVar12 = *(ulong *)(puVar7 + 0x10);
          puStack_1430 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar12) {
            func_0x0001018ace0c(1 < *(ulong *)(puVar7 + 0x18),uVar12 + 1,1);
          }
          *(ulong *)(puStack_1430 + 0x10) = uVar12 + 1;
          *(undefined8 *)(puStack_1430 + uVar12 * 0x38 + 0x50) = uStack_338;
          *(undefined8 *)(puStack_1430 + uVar12 * 0x38 + 0x38) = uStack_350;
          *(undefined8 *)(puStack_1430 + uVar12 * 0x38 + 0x30) = uStack_358;
          *(undefined8 *)(puStack_1430 + uVar12 * 0x38 + 0x48) = uStack_340;
          *(undefined8 *)(puStack_1430 + uVar12 * 0x38 + 0x40) = uStack_348;
          *(undefined8 *)(puStack_1430 + uVar12 * 0x38 + 0x28) = uStack_360;
          *(undefined8 *)(puStack_1430 + uVar12 * 0x38 + 0x20) = uStack_368;
          uVar14 = uVar14 - 1;
          puStack_a98 = puStack_1430;
          puVar9 = puVar9 + 1;
          uVar13 = uStack_368;
        } while (uVar14 != 0);
      }
      else {
        uVar10 = 0;
        do {
          puVar7 = puStack_1430;
          func_0x0001042085f0(uVar10,uVar12);
          func_0x00010482fe58(&uStack_368);
          uVar6 = *(ulong *)(puVar7 + 0x10);
          puStack_1430 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar6) {
            func_0x0001018ace0c(1 < *(ulong *)(puVar7 + 0x18),uVar6 + 1,1);
          }
          uVar10 = uVar10 + 1;
          *(ulong *)(puStack_1430 + 0x10) = uVar6 + 1;
          *(undefined8 *)(puStack_1430 + uVar6 * 0x38 + 0x50) = uStack_338;
          *(undefined8 *)(puStack_1430 + uVar6 * 0x38 + 0x38) = uStack_350;
          *(undefined8 *)(puStack_1430 + uVar6 * 0x38 + 0x30) = uStack_358;
          *(undefined8 *)(puStack_1430 + uVar6 * 0x38 + 0x48) = uStack_340;
          *(undefined8 *)(puStack_1430 + uVar6 * 0x38 + 0x40) = uStack_348;
          *(undefined8 *)(puStack_1430 + uVar6 * 0x38 + 0x28) = uStack_360;
          *(undefined8 *)(puStack_1430 + uVar6 * 0x38 + 0x20) = uStack_368;
          puStack_a98 = puStack_1430;
          uVar13 = uStack_368;
        } while (uVar14 != uVar10);
      }
    }
  }
  uVar18 = 0;
  bVar1 = *(long *)(param_1 + _DAT_11306af18) == 0;
  if (bVar1) {
    uVar13 = 0;
  }
  else {
    func_0x00010bf885a0();
  }
  bVar2 = *(long *)(param_1 + _DAT_11306af20) == 0;
  uStack_a90 = uVar13;
  uStack_a88 = bVar1;
  if (!bVar2) {
    func_0x00010bf885a0();
    uVar18 = uVar13;
  }
  bVar1 = *(long *)(param_1 + _DAT_11306af28) == 0;
  uStack_a80 = uVar18;
  uStack_a78 = bVar2;
  if (bVar1) {
    uVar13 = 0;
  }
  else {
    func_0x00010bf885a0();
  }
  uVar12 = *(ulong *)(param_1 + _DAT_11306af30);
  uStack_a70 = uVar13;
  uStack_a68 = bVar1;
  if (uVar12 == 0) {
    puStack_a60 = (undefined *)0x0;
  }
  else {
    if (uVar12 >> 0x3e == 0) {
      uVar14 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar14 = uVar12;
      if (-1 < (long)uVar12) {
        uVar14 = uVar12 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    puStack_a60 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar14 != 0) {
      puStack_1430 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000104209d08(0,uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10429feac);
        (*pcVar4)();
      }
      uVar10 = 0;
      do {
        puVar7 = puStack_1430;
        if ((uVar12 & 0xc000000000000001) == 0) {
          uVar6 = *(ulong *)(uVar12 + uVar10 * 8 + 0x20);
          _objc_retain(uVar6);
        }
        else {
          uVar6 = uVar10;
          func_0x000104208454(uVar10,uVar12);
        }
        FUN_1042ac1bc(&uStack_648);
        _objc_release(uVar6);
        uVar6 = *(ulong *)(puVar7 + 0x10);
        puStack_1430 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar6) {
          func_0x000104209d08(1 < *(ulong *)(puVar7 + 0x18),uVar6 + 1,1);
        }
        uVar10 = uVar10 + 1;
        *(ulong *)(puStack_1430 + 0x10) = uVar6 + 1;
        *(undefined8 *)(puStack_1430 + uVar6 * 200 + 0x28) = uStack_640;
        *(undefined8 *)(puStack_1430 + uVar6 * 200 + 0x20) = uStack_648;
        *(undefined8 *)(puStack_1430 + uVar6 * 200 + 0x58) = uStack_610;
        *(undefined8 *)(puStack_1430 + uVar6 * 200 + 0x50) = uStack_618;
        *(undefined8 *)(puStack_1430 + uVar6 * 200 + 0x68) = uStack_600;
        *(undefined8 *)(puStack_1430 + uVar6 * 200 + 0x60) = uStack_608;
        *(undefined8 *)(puStack_1430 + uVar6 * 200 + 0x38) = uStack_630;
        *(undefined8 *)(puStack_1430 + uVar6 * 200 + 0x30) = uStack_638;
        *(undefined8 *)(puStack_1430 + uVar6 * 200 + 0x48) = uStack_620;
        *(undefined8 *)(puStack_1430 + uVar6 * 200 + 0x40) = uStack_628;
        *(undefined8 *)(puStack_1430 + uVar6 * 200 + 0x98) = uStack_5d0;
        *(undefined8 *)(puStack_1430 + uVar6 * 200 + 0x90) = uStack_5d8;
        *(undefined8 *)(puStack_1430 + uVar6 * 200 + 0xa8) = uStack_5c0;
        *(undefined8 *)(puStack_1430 + uVar6 * 200 + 0xa0) = uStack_5c8;
        *(undefined8 *)(puStack_1430 + uVar6 * 200 + 0x78) = uStack_5f0;
        *(undefined8 *)(puStack_1430 + uVar6 * 200 + 0x70) = uStack_5f8;
        *(undefined8 *)(puStack_1430 + uVar6 * 200 + 0x88) = uStack_5e0;
        *(undefined8 *)(puStack_1430 + uVar6 * 200 + 0x80) = uStack_5e8;
        puStack_1430[uVar6 * 200 + 0xe0] = uStack_588;
        *(undefined8 *)(puStack_1430 + uVar6 * 200 + 200) = uStack_5a0;
        *(undefined8 *)(puStack_1430 + uVar6 * 200 + 0xc0) = uStack_5a8;
        *(undefined8 *)(puStack_1430 + uVar6 * 200 + 0xd8) = uStack_590;
        *(undefined8 *)(puStack_1430 + uVar6 * 200 + 0xd0) = uStack_598;
        *(undefined8 *)(puStack_1430 + uVar6 * 200 + 0xb8) = uStack_5b0;
        *(undefined8 *)(puStack_1430 + uVar6 * 200 + 0xb0) = uStack_5b8;
        puStack_a60 = puStack_1430;
      } while (uVar14 != uVar10);
    }
  }
  uVar13 = *(undefined8 *)(param_1 + _DAT_11306af38);
  uStack_a58 = uVar13;
  if (*(long *)(param_1 + _DAT_11306af40) == 0) {
    uStack_a50 = 0;
    uStack_a48 = 0;
    uStack_a40 = 0;
    uStack_a38 = 2;
    uStack_a28 = 0;
    uStack_a30 = 0;
    uStack_a18 = 0;
    uStack_a20 = 0;
    uStack_a08 = 0;
    uStack_a10 = 0;
    uStack_9f8 = 0;
    uStack_a00 = 0;
  }
  else {
    func_0x0001042a78cc(&uStack_580);
    uStack_a28 = uStack_558;
    uStack_a30 = uStack_560;
    uStack_a18 = uStack_548;
    uStack_a20 = uStack_550;
    uStack_a08 = uStack_538;
    uStack_a10 = uStack_540;
    uStack_9f8 = uStack_528;
    uStack_a00 = uStack_530;
    uStack_a48 = uStack_578;
    uStack_a50 = uStack_580;
    uStack_a38 = uStack_568;
    uStack_a40 = uStack_570;
  }
  lVar5 = *(long *)(param_1 + _DAT_11306af48);
  if (lVar5 == 0) {
    _swift_bridgeObjectRetain(uVar13);
    uVar18 = 0;
    uStack_1fa8 = 0;
    uStack_1fb0 = 0;
    uStack_1f98 = 0;
    uStack_1fa0 = 0;
    uStack_1fc8 = 0;
    uStack_1fd0 = 0;
    uStack_1fb8 = 0;
    uStack_1fc0 = 0;
    uVar13 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar13);
    _objc_retain(lVar5);
    FUN_1042837a8(&uStack_520);
    uStack_1fa8 = uStack_508;
    uStack_1fb0 = uStack_510;
    uStack_1f98 = uStack_518;
    uStack_1fa0 = uStack_520;
    uStack_1fc8 = uStack_4e8;
    uStack_1fd0 = uStack_4f0;
    uStack_1fb8 = uStack_4f8;
    uStack_1fc0 = uStack_500;
    _objc_release(lVar5);
    uVar18 = uStack_4e0;
    uVar13 = uStack_4d8;
  }
  FUN_10429ff14(&uStack_9f0,0x112dcd428,&UNK_10dbce5c0);
  uStack_9d8 = uStack_1fa8;
  uStack_9e0 = uStack_1fb0;
  uStack_9e8 = uStack_1f98;
  uStack_9f0 = uStack_1fa0;
  uStack_9b8 = uStack_1fc8;
  uStack_9c0 = uStack_1fd0;
  uStack_9c8 = uStack_1fb8;
  uStack_9d0 = uStack_1fc0;
  lVar5 = *(long *)(param_1 + _DAT_11306af50);
  uStack_9b0 = uVar18;
  uStack_9a8 = uVar13;
  if (lVar5 == 0) {
    uStack_468 = 0;
    uStack_460 = 0;
    uStack_1fa8 = 0;
    uStack_1fb0 = 0;
    uStack_1f98 = 0;
    uStack_1fa0 = 0;
    uStack_470 = 1;
    uStack_1fc8 = 0;
    uStack_1fd0 = 0;
    uStack_1fb8 = 0;
    uStack_1fc0 = 0;
    uStack_1fe8 = 0;
    uStack_1ff0 = 0;
    uStack_1fd8 = 0;
    uStack_1fe0 = 0;
  }
  else {
    _objc_retain();
    FUN_104292854(&uStack_4d0);
    uStack_1fa8 = uStack_4b8;
    uStack_1fb0 = uStack_4c0;
    uStack_1f98 = uStack_4c8;
    uStack_1fa0 = uStack_4d0;
    uStack_1fc8 = uStack_498;
    uStack_1fd0 = uStack_4a0;
    uStack_1fb8 = uStack_4a8;
    uStack_1fc0 = uStack_4b0;
    uStack_1fe8 = uStack_478;
    uStack_1ff0 = uStack_480;
    uStack_1fd8 = uStack_488;
    uStack_1fe0 = uStack_490;
    _objc_release(lVar5);
  }
  FUN_10429ff14(&uStack_9a0,0x112dcd580,&UNK_10d98ff20);
  uStack_998 = uStack_1f98;
  uStack_9a0 = uStack_1fa0;
  uStack_988 = uStack_1fa8;
  uStack_990 = uStack_1fb0;
  uStack_978 = uStack_1fb8;
  uStack_980 = uStack_1fc0;
  uStack_968 = uStack_1fc8;
  uStack_970 = uStack_1fd0;
  uStack_958 = uStack_1fd8;
  uStack_960 = uStack_1fe0;
  uStack_948 = uStack_1fe8;
  uStack_950 = uStack_1ff0;
  uStack_92e = *(undefined1 *)(param_1 + _DAT_11306af58);
  uStack_928 = *(undefined8 *)(param_1 + _DAT_11306af60);
  lVar5 = *(long *)(param_1 + _DAT_11306af68);
  uStack_940 = uStack_470;
  uStack_938 = uStack_468;
  uStack_930 = uStack_460;
  if (lVar5 == 0) {
    uStack_8e0 = uStack_8e0 & 0xff00;
    uVar13 = 0;
    uStack_8f8 = 0;
    uStack_900 = 0;
    uStack_8e8 = 0;
    uStack_8f0 = 0;
    uStack_918 = 0;
    uStack_920 = 0;
    uStack_908 = 0;
    uStack_910 = 0;
    _swift_bridgeObjectRetain();
  }
  else {
    _swift_bridgeObjectRetain();
    _objc_retain(lVar5);
    func_0x0001047de418(&uStack_458);
    uStack_8f8 = uStack_430;
    uStack_900 = uStack_438;
    uStack_8e8 = uStack_420;
    uStack_8f0 = uStack_428;
    uStack_8e0 = (ushort)bStack_418;
    uStack_918 = uStack_450;
    uStack_920 = uStack_458;
    uStack_908 = uStack_440;
    uStack_910 = uStack_448;
    uVar13 = uStack_448;
  }
  uStack_8e0 = CONCAT11(lVar5 == 0,(undefined1)uStack_8e0);
  lVar5 = *(long *)(param_1 + _DAT_11306af70);
  if (lVar5 == 0) {
    uVar18 = 0;
    uVar21 = 0;
    uVar20 = 0;
    uVar11 = 0;
    uVar15 = 0;
  }
  else {
    uVar18 = *(undefined8 *)(lVar5 + _DAT_113090c18);
    uVar21 = ((undefined8 *)(lVar5 + _DAT_113090c18))[1];
    uVar20 = *(undefined8 *)(lVar5 + _DAT_113090c20);
    uVar11 = ((undefined8 *)(lVar5 + _DAT_113090c20))[1];
    uVar15 = *(undefined8 *)(lVar5 + _DAT_113090c28);
    _swift_bridgeObjectRetain(uVar21);
    _swift_bridgeObjectRetain(uVar11);
  }
  lVar5 = *(long *)(param_1 + _DAT_11306af78);
  uStack_8a0 = lVar5 == 0;
  if ((bool)uStack_8a0) {
    uStack_8b0 = 0;
    uStack_8a8 = 0;
  }
  else {
    uStack_8b0 = *(undefined8 *)(lVar5 + _DAT_11306b758);
    uStack_8a8 = *(undefined8 *)(lVar5 + _DAT_11306b760);
  }
  lVar5 = *(long *)(param_1 + _DAT_11306af80);
  uVar16 = 0;
  uStack_8d8 = uVar18;
  uStack_8d0 = uVar21;
  uStack_8c8 = uVar20;
  uStack_8c0 = uVar11;
  uStack_8b8 = uVar15;
  if (lVar5 == 0) {
    uVar18 = 0;
    uStack_888 = 0;
  }
  else {
    uVar18 = *(undefined8 *)(lVar5 + _DAT_11306acd8);
    lVar5 = *(long *)(lVar5 + _DAT_11306ace0);
    _swift_bridgeObjectRetain(uVar18);
    if (lVar5 == 0) {
      uStack_888 = 1;
    }
    else {
      func_0x00010bf885a0(lVar5);
      uStack_888 = 0;
      uVar16 = uVar13;
    }
  }
  lVar5 = *(long *)(param_1 + _DAT_11306af88);
  uStack_898 = uVar18;
  uStack_890 = uVar16;
  if (lVar5 == 0) {
    uVar13 = 0;
    lVar5 = 0;
    uStack_870 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(lVar5 + _DAT_11306ab08);
    lVar5 = *(long *)(lVar5 + _DAT_11306ab10);
    _swift_bridgeObjectRetain(uVar13);
    if (lVar5 == 0) {
      lVar5 = 0;
      uStack_870 = 1;
    }
    else {
      func_0x00010c067fc0();
      uStack_870 = 0;
    }
  }
  uVar18 = *(undefined8 *)(param_1 + _DAT_11306af90);
  uVar20 = *(undefined8 *)(param_1 + _DAT_11306af98);
  uVar21 = *(undefined8 *)(param_1 + _DAT_11306afa0);
  uVar11 = *(undefined8 *)(param_1 + _DAT_11306afa8);
  uStack_880 = uVar13;
  lStack_878 = lVar5;
  uStack_868 = uVar18;
  uStack_860 = uVar20;
  uStack_858 = uVar21;
  _swift_bridgeObjectRetain(uVar11);
  _objc_retain(uVar18);
  _objc_retain(uVar20);
  _objc_retain(uVar21);
  _objc_release(param_1);
  uStack_850 = uVar11;
  _memcpy(auStack_19d8,&uStack_df0,0x5a8);
  _memcpy(&puStack_1430,&uStack_df0,0x5a8);
  func_0x00010178e37c(auStack_19d8,auStack_1f80);
  func_0x00010178e3b8(&puStack_1430);
  _memcpy(extraout_x8,auStack_19d8,0x5a8);
  return;
}



/* Entry: 10429feb4; end: 10429fef3;  */

void FUN_10429feb4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10429fef4; end: 10429ff13;  */

void FUN_10429fef4(void)

{
  _objc_opt_self(&PTR_PTR_112993e10);
  return;
}



/* Entry: 10429ff14; end: 10429ff53;  */

undefined8 FUN_10429ff14(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10429ff54; end: 10429ff5f;  */

void FUN_10429ff54(long param_1)

{
  *(undefined1 *)(param_1 + 0x79) = 0;
  return;
}



/* Entry: 10429ff60; end: 1042a0023;  */

undefined8 FUN_10429ff60(undefined8 param_1,undefined8 param_2)

{
  FUN_104211004(param_2,param_1);
  return param_2;
}



/* Entry: 1042a0024; end: 1042a0033; -[SCAdSnapInteractionRecord attachmentType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042a0024(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306aff8);
}



/* Entry: 1042a0034; end: 1042a0043; -[SCAdSnapInteractionRecord collectionItemPositionIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042a0034(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b000);
}



/* Entry: 1042a0044; end: 1042a0053; -[SCAdSnapInteractionRecord longformTimeViewedInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042a0044(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b008);
}



/* Entry: 1042a0054; end: 1042a0063; -[SCAdSnapInteractionRecord webViewAdTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a0054(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b010));
  return;
}



/* Entry: 1042a0064; end: 1042a0073; -[SCAdSnapInteractionRecord deepLinkFallBackToWebview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042a0064(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b018);
}



/* Entry: 1042a0074; end: 1042a0083; -[SCAdSnapInteractionRecord deepLinkFallBackToAppStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042a0074(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b020);
}



/* Entry: 1042a0084; end: 1042a0093; -[SCAdSnapInteractionRecord deepLinkFromCard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042a0084(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b028);
}



/* Entry: 1042a0094; end: 1042a00a3; -[SCAdSnapInteractionRecord deepLinkFallBackToDefaultBrowser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042a0094(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b030);
}



/* Entry: 1042a00a4; end: 1042a00ff; -[SCAdSnapInteractionRecord deepLinkURI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a00a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306b038))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306b038);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042a0100; end: 1042a010f; -[SCAdSnapInteractionRecord showcaseTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a0100(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b040));
  return;
}



/* Entry: 1042a0110; end: 1042a011f; -[SCAdSnapInteractionRecord appInstallLoadedOnEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042a0110(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b048);
}



/* Entry: 1042a0120; end: 1042a012f; -[SCAdSnapInteractionRecord appInstallLoadedOnExit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042a0120(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b050);
}



/* Entry: 1042a0130; end: 1042a013f; -[SCAdSnapInteractionRecord appInstallVisiblePageLoadTimeSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042a0130(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b058);
}



/* Entry: 1042a0140; end: 1042a03d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a0140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306aff8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306b000) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306b008) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306b010) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_11306b018) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_11306b020) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_11306b028) = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_11306b030) = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b038);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11306b040) = param_12;
  *(undefined1 *)(unaff_x20 + _DAT_11306b048) = (undefined1)param_13;
  *(undefined1 *)(unaff_x20 + _DAT_11306b050) = param_13._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_11306b058) = param_2;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042a03d8; end: 1042a04b3; -[SCAdSnapInteractionRecord initWithAttachmentType:collectionItemPositionIndex:longformTimeViewedInMillis:webViewAdTrackInfo:deepLinkFallBackToWebview:deepLinkFallBackToAppStore:deepLinkFromCard:deepLinkFallBackToDefaultBrowser:deepLinkURI:showcaseTrackInfo:appInstallLoadedOnEntry:appInstallLoadedOnExit:appInstallVisiblePageLoadTimeSeconds:] */

void FUN_1042a03d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined1 param_11,undefined4 param_12,
                  long param_13,undefined8 param_14,undefined1 param_15)

{
  if (param_13 == 0) {
    param_13 = 0;
    param_4 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_7);
  _objc_retain(param_14);
  func_0x0001042a028c(param_1,param_2,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_13,param_4,param_14,param_15);
  return;
}



/* Entry: 1042a04b4; end: 1042a04e7; -[SCAdSnapInteractionRecord hash] */

undefined8 FUN_1042a04b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042a04e8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042a04e8; end: 1042a06cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a04e8(void)

{
  double dVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306aff8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306b000));
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306b008) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306b008);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  if (*(long *)(unaff_x20 + _DAT_11306b010) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1042c3e80();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar1);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306b018));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306b020));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306b028));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306b030));
  if (((undefined8 *)(unaff_x20 + _DAT_11306b038))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306b038);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar4 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306b040);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar3);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306b048));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306b050));
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306b058) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306b058);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042a06cc; end: 1042a09c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042a06cc(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  long unaff_x20;
  uint uVar22;
  long lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  uint uStack_c4;
  long lStack_a8;
  long alStack_a0 [4];
  
  lVar19 = unaff_x20;
  _swift_getObjectType();
  func_0x0001042a19b4(param_1,alStack_a0,0x112d387f8,&UNK_10d902650);
  if (alStack_a0[3] == 0) {
    func_0x0001042a1974(alStack_a0,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar16 = &lStack_a8;
    _swift_dynamicCast(plVar16,alStack_a0,PTR___sypN_11034f1a8 + 8,lVar19,6);
    if (((ulong)plVar16 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_11306aff8);
      iVar2 = *(int *)(lStack_a8 + _DAT_11306aff8);
      lVar21 = *(long *)(unaff_x20 + _DAT_11306b000);
      lVar19 = *(long *)(lStack_a8 + _DAT_11306b000);
      dVar24 = *(double *)(unaff_x20 + _DAT_11306b008);
      dVar25 = *(double *)(lStack_a8 + _DAT_11306b008);
      if (*(long *)(unaff_x20 + _DAT_11306b010) == 0) {
        uStack_c4 = (uint)(*(long *)(lStack_a8 + _DAT_11306b010) == 0);
      }
      else {
        lVar23 = *(long *)(lStack_a8 + _DAT_11306b010);
        if (lVar23 == 0) {
          lVar17 = 0;
          alStack_a0[1] = 0;
          alStack_a0[2] = 0;
        }
        else {
          lVar17 = 0;
          FUN_1042ca7c4();
        }
        alStack_a0[0] = lVar23;
        alStack_a0[3] = lVar17;
        _objc_retain(lVar23);
        uStack_c4 = (uint)alStack_a0;
        FUN_1042c4774();
        func_0x0001042a1974(alStack_a0,0x112d387f8,&UNK_10d902650);
      }
      bVar3 = *(byte *)(unaff_x20 + _DAT_11306b018);
      bVar4 = *(byte *)(lStack_a8 + _DAT_11306b018);
      bVar5 = *(byte *)(unaff_x20 + _DAT_11306b020);
      bVar6 = *(byte *)(lStack_a8 + _DAT_11306b020);
      bVar7 = *(byte *)(unaff_x20 + _DAT_11306b028);
      bVar8 = *(byte *)(lStack_a8 + _DAT_11306b028);
      bVar9 = *(byte *)(unaff_x20 + _DAT_11306b030);
      bVar10 = *(byte *)(lStack_a8 + _DAT_11306b030);
      lVar23 = ((long *)(unaff_x20 + _DAT_11306b038))[1];
      lVar17 = ((long *)(lStack_a8 + _DAT_11306b038))[1];
      uVar22 = (uint)(lVar23 == 0 && lVar17 == 0);
      if ((lVar23 != 0) && (lVar17 != 0)) {
        lVar18 = *(long *)(unaff_x20 + _DAT_11306b038);
        if ((lVar18 == *(long *)(lStack_a8 + _DAT_11306b038)) && (lVar23 == lVar17)) {
          uVar22 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar22 = (uint)lVar18;
        }
      }
      lVar23 = *(long *)(unaff_x20 + _DAT_11306b040);
      if (lVar23 == 0) {
        uVar15 = (uint)(*(long *)(lStack_a8 + _DAT_11306b040) == 0);
      }
      else {
        func_0x00010c071ae0();
        uVar15 = (uint)lVar23;
      }
      bVar11 = *(byte *)(unaff_x20 + _DAT_11306b048);
      bVar12 = *(byte *)(lStack_a8 + _DAT_11306b048);
      bVar13 = *(byte *)(unaff_x20 + _DAT_11306b050);
      bVar14 = *(byte *)(lStack_a8 + _DAT_11306b050);
      dVar26 = *(double *)(unaff_x20 + _DAT_11306b058);
      dVar27 = *(double *)(lStack_a8 + _DAT_11306b058);
      _objc_release(lStack_a8);
      uVar20 = 0;
      if (dVar24 == dVar25) {
        uVar20 = (uint)(iVar1 == iVar2 && lVar21 == lVar19);
      }
      return uVar22 & ((uVar20 & uStack_c4 ^ 1 |
                       (uint)(byte)(bVar3 ^ bVar4 | bVar5 ^ bVar6 | bVar7 ^ bVar8 | bVar9 ^ bVar10))
                      ^ 0xffffffff) & uVar15 & ((bVar11 ^ bVar12) ^ 0xffffffff) &
             ((bVar13 ^ bVar14) ^ 0xffffffff) & (uint)(dVar26 == dVar27);
    }
  }
  return 0;
}



/* Entry: 1042a09c8; end: 1042a0a57; -[SCAdSnapInteractionRecord isEqual:] */

uint FUN_1042a09c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1042a06cc(&uStack_40);
  _objc_release(param_1);
  FUN_1042a1974(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}


