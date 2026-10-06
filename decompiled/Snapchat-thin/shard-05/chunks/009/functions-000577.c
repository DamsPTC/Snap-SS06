/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1042b173c; end: 1042b173f; -[SCAdTrackRequest copyWithZone:] */

void FUN_1042b173c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042b1740; end: 1042b17b7; -[SCAdTrackRequest description] */

void FUN_1042b1740(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_10423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1042b0824(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x00010188dc5c(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042b17b8; end: 1042b1833; -[SCAdTrackRequest init] */

void FUN_1042b17b8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataServices/AdTrackRequestWrapper.swift",
             0x2a,2,0x6f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042b1800);
  (*pcVar1)();
}



/* Entry: 1042b1834; end: 1042b18d3; -[SCAdTrackRequest .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b1834(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306b4e8 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b4f8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306b500 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306b508));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306b510));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306b518));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b528));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306b538));
  return;
}



/* Entry: 1042b18d4; end: 1042b18f3;  */

void FUN_1042b18d4(void)

{
  _objc_opt_self(&PTR_PTR_112994ce8);
  return;
}



/* Entry: 1042b18f4; end: 1042b1923;  */

void FUN_1042b18f4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042b2e9c(param_1);
  return;
}



/* Entry: 1042b1924; end: 1042b1cbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b1924(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
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
  undefined8 uVar17;
  
  *param_1 = *(undefined8 *)(param_2 + _DAT_11306b568);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + _DAT_11306b570);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)(param_2 + _DAT_11306b578);
  *(undefined1 *)((long)param_1 + 10) = *(undefined1 *)(param_2 + _DAT_11306b580);
  puVar1 = (undefined8 *)(param_2 + _DAT_11306b588);
  uVar8 = puVar1[1];
  uVar13 = *puVar1;
  puVar2 = (undefined8 *)(param_2 + _DAT_11306b590);
  uVar6 = puVar2[1];
  uVar9 = puVar2[1];
  uVar7 = *puVar2;
  param_1[3] = puVar1[1];
  param_1[2] = uVar13;
  param_1[5] = uVar9;
  param_1[4] = uVar7;
  param_1[6] = *(undefined8 *)(param_2 + _DAT_11306b598);
  uVar13 = *(undefined8 *)(param_2 + _DAT_11306b5a8);
  param_1[7] = *(undefined8 *)(param_2 + _DAT_11306b5a0);
  param_1[8] = uVar13;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + _DAT_11306b5b0);
  puVar1 = (undefined8 *)(param_2 + _DAT_11306b5b8);
  uVar9 = puVar1[1];
  uVar13 = *puVar1;
  puVar2 = (undefined8 *)(param_2 + _DAT_11306b5c0);
  uVar7 = puVar2[1];
  uVar10 = puVar2[1];
  uVar14 = *puVar2;
  param_1[0xb] = puVar1[1];
  param_1[10] = uVar13;
  param_1[0xd] = uVar10;
  param_1[0xc] = uVar14;
  param_1[0xe] = *(undefined8 *)(param_2 + _DAT_11306b5c8);
  puVar1 = (undefined8 *)(param_2 + _DAT_11306b5d0);
  uVar10 = puVar1[1];
  uVar13 = *puVar1;
  param_1[0x10] = puVar1[1];
  param_1[0xf] = uVar13;
  uVar13 = *(undefined8 *)(param_2 + _DAT_11306b5e0);
  param_1[0x11] = *(undefined8 *)(param_2 + _DAT_11306b5d8);
  param_1[0x12] = uVar13;
  uVar13 = *(undefined8 *)(param_2 + _DAT_11306b5f0);
  param_1[0x13] = *(undefined8 *)(param_2 + _DAT_11306b5e8);
  param_1[0x14] = uVar13;
  param_1[0x15] = *(undefined8 *)(param_2 + _DAT_11306b5f8);
  param_1[0x16] = *(undefined8 *)(param_2 + _DAT_11306b600);
  uVar13 = *(undefined8 *)(param_2 + _DAT_11306b610);
  uVar14 = *(undefined8 *)(param_2 + _DAT_11306b618);
  param_1[0x17] = *(undefined8 *)(param_2 + _DAT_11306b608);
  uVar17 = *(undefined8 *)(param_2 + _DAT_11306b620);
  param_1[0x18] = uVar13;
  param_1[0x19] = uVar14;
  uVar13 = *(undefined8 *)(param_2 + _DAT_11306b628);
  param_1[0x1a] = uVar17;
  param_1[0x1b] = uVar13;
  param_1[0x1c] = *(undefined8 *)(param_2 + _DAT_11306b630);
  param_1[0x1d] = *(undefined8 *)(param_2 + _DAT_11306b638);
  puVar1 = (undefined8 *)(param_2 + _DAT_11306b640);
  uVar17 = puVar1[1];
  uVar13 = *puVar1;
  puVar2 = (undefined8 *)(param_2 + _DAT_11306b648);
  uVar11 = puVar2[1];
  uVar12 = puVar2[1];
  uVar14 = *puVar2;
  param_1[0x1f] = puVar1[1];
  param_1[0x1e] = uVar13;
  param_1[0x21] = uVar12;
  param_1[0x20] = uVar14;
  puVar1 = (undefined8 *)(param_2 + _DAT_11306b650);
  uVar12 = puVar1[1];
  uVar13 = *puVar1;
  puVar2 = (undefined8 *)(param_2 + _DAT_11306b658);
  uVar14 = puVar2[1];
  uVar16 = puVar2[1];
  uVar15 = *puVar2;
  param_1[0x23] = puVar1[1];
  param_1[0x22] = uVar13;
  param_1[0x25] = uVar16;
  param_1[0x24] = uVar15;
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + _DAT_11306b660);
  *(undefined1 *)((long)param_1 + 0x131) = *(undefined1 *)(param_2 + _DAT_11306b668);
  uVar13 = ((undefined8 *)(param_2 + _DAT_11306b670))[1];
  param_1[0x27] = *(undefined8 *)(param_2 + _DAT_11306b670);
  param_1[0x28] = uVar13;
  lVar4 = _DAT_113813388;
  lVar5 = 0;
  FUN_10425412c();
  func_0x0001042b6bd0(param_2 + lVar4,(long)param_1 + (long)*(int *)(lVar5 + 0x98),0x112d373d8,
                      &UNK_10d9014c0);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x9c)) =
       *(undefined8 *)(param_2 + _DAT_113813390);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0xa0)) =
       *(undefined8 *)(param_2 + _DAT_113813398);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0xa4)) =
       *(undefined1 *)(param_2 + _DAT_1138133a0);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0xa8)) =
       *(undefined1 *)(param_2 + _DAT_1138133a8);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0xac)) =
       *(undefined1 *)(param_2 + _DAT_1138133b0);
  uVar3 = *(undefined1 *)(param_2 + _DAT_1138133b8);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar17);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar14);
  _objc_release(param_2);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0xb0)) = uVar3;
  return;
}



/* Entry: 1042b1cc0; end: 1042b1ccf; -[SCAdUnlockableLensSwipeTrackInfo camera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042b1cc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b568);
}



/* Entry: 1042b1cd0; end: 1042b1cdf; -[SCAdUnlockableLensSwipeTrackInfo isAudioOn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042b1cd0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b570);
}



/* Entry: 1042b1ce0; end: 1042b1cef; -[SCAdUnlockableLensSwipeTrackInfo withWorldCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042b1ce0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b578);
}



/* Entry: 1042b1cf0; end: 1042b1cff; -[SCAdUnlockableLensSwipeTrackInfo withSelfieCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042b1cf0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b580);
}



/* Entry: 1042b1d00; end: 1042b1d0b; -[SCAdUnlockableLensSwipeTrackInfo lensOptionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b1d00(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306b588))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306b588);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042b1d0c; end: 1042b1d17; -[SCAdUnlockableLensSwipeTrackInfo encryptedGeoData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b1d0c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306b590))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306b590);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042b1d18; end: 1042b1d27; -[SCAdUnlockableLensSwipeTrackInfo unlockType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042b1d18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b598);
}



/* Entry: 1042b1d28; end: 1042b1d37; -[SCAdUnlockableLensSwipeTrackInfo firstFaceRenderTimestampSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042b1d28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b5a0);
}



/* Entry: 1042b1d38; end: 1042b1d47; -[SCAdUnlockableLensSwipeTrackInfo firstTriggerTimestampSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042b1d38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b5a8);
}



/* Entry: 1042b1d48; end: 1042b1d57; -[SCAdUnlockableLensSwipeTrackInfo isRendered] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042b1d48(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b5b0);
}



/* Entry: 1042b1d58; end: 1042b1d63; -[SCAdUnlockableLensSwipeTrackInfo lensNamespace] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b1d58(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306b5b8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306b5b8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042b1d64; end: 1042b1d6f; -[SCAdUnlockableLensSwipeTrackInfo mixerRequestId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b1d64(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306b5c0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306b5c0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042b1d70; end: 1042b1d7f; -[SCAdUnlockableLensSwipeTrackInfo sponsoredType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042b1d70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b5c8);
}



/* Entry: 1042b1d80; end: 1042b1d8b; -[SCAdUnlockableLensSwipeTrackInfo unlockableId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b1d80(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306b5d0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306b5d0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042b1d8c; end: 1042b1d9b; -[SCAdUnlockableLensSwipeTrackInfo snapSendCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042b1d8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b5d8);
}



/* Entry: 1042b1d9c; end: 1042b1dab; -[SCAdUnlockableLensSwipeTrackInfo snapTakenCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042b1d9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b5e0);
}



/* Entry: 1042b1dac; end: 1042b1dbb; -[SCAdUnlockableLensSwipeTrackInfo storyPostCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042b1dac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b5e8);
}



/* Entry: 1042b1dbc; end: 1042b1dcb; -[SCAdUnlockableLensSwipeTrackInfo memoriesSaveCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042b1dbc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b5f0);
}



/* Entry: 1042b1dcc; end: 1042b1ddb; -[SCAdUnlockableLensSwipeTrackInfo directSnapSendRecipients] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042b1dcc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b5f8);
}



/* Entry: 1042b1ddc; end: 1042b1deb; -[SCAdUnlockableLensSwipeTrackInfo totalSwipedViewSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042b1ddc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b600);
}



/* Entry: 1042b1dec; end: 1042b1dfb; -[SCAdUnlockableLensSwipeTrackInfo swipedOverCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042b1dec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b608);
}



/* Entry: 1042b1dfc; end: 1042b1e0b; -[SCAdUnlockableLensSwipeTrackInfo maxSwipeTimeSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042b1dfc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b610);
}



/* Entry: 1042b1e0c; end: 1042b1e1b; -[SCAdUnlockableLensSwipeTrackInfo recordingTimeSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042b1e0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b618);
}



/* Entry: 1042b1e1c; end: 1042b1e2b; -[SCAdUnlockableLensSwipeTrackInfo postCaptureTimeSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042b1e1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b620);
}



/* Entry: 1042b1e2c; end: 1042b1e3b; -[SCAdUnlockableLensSwipeTrackInfo totalTimeSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042b1e2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b628);
}



/* Entry: 1042b1e3c; end: 1042b1e4b; -[SCAdUnlockableLensSwipeTrackInfo maxContinuousTimeSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042b1e3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b630);
}



/* Entry: 1042b1e4c; end: 1042b1e5b; -[SCAdUnlockableLensSwipeTrackInfo indexPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042b1e4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b638);
}



/* Entry: 1042b1e5c; end: 1042b1e67; -[SCAdUnlockableLensSwipeTrackInfo rawAdData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b1e5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306b640))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306b640);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042b1e68; end: 1042b1e73; -[SCAdUnlockableLensSwipeTrackInfo encryptedSponsoredUnlockableTargetingInfoData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b1e68(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306b648))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306b648);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042b1e74; end: 1042b1e7f; -[SCAdUnlockableLensSwipeTrackInfo rankingId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b1e74(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306b650))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306b650);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042b1e80; end: 1042b1e8b; -[SCAdUnlockableLensSwipeTrackInfo rankingData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b1e80(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306b658))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306b658);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042b1e8c; end: 1042b1e9b; -[SCAdUnlockableLensSwipeTrackInfo shouldRecordAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042b1e8c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b660);
}



/* Entry: 1042b1e9c; end: 1042b1eab; -[SCAdUnlockableLensSwipeTrackInfo withAttachmentOpen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042b1e9c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b668);
}



/* Entry: 1042b1eac; end: 1042b1eb7; -[SCAdUnlockableLensSwipeTrackInfo attachmentType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b1eac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306b670))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306b670);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042b1eb8; end: 1042b1f0f;  */

void FUN_1042b1eb8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1042b1f10; end: 1042b1fe7; -[SCAdUnlockableLensSwipeTrackInfo attachmentOpenTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b1f10(long param_1)

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
  func_0x0001042b6bd0(param_1 + _DAT_113813388,puVar4,0x112d373d8,&UNK_10d9014c0);
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



/* Entry: 1042b1fe8; end: 1042b1ff7; -[SCAdUnlockableLensSwipeTrackInfo attachmentViewTimeSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042b1fe8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113813390);
}



/* Entry: 1042b1ff8; end: 1042b2007; -[SCAdUnlockableLensSwipeTrackInfo attachmentMediaDurationSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042b1ff8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113813398);
}



/* Entry: 1042b2008; end: 1042b2017; -[SCAdUnlockableLensSwipeTrackInfo attachmentIsRedirectToStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042b2008(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1138133a0);
}



/* Entry: 1042b2018; end: 1042b2027; -[SCAdUnlockableLensSwipeTrackInfo attachmentIsRedirectToWebview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042b2018(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1138133a8);
}



/* Entry: 1042b2028; end: 1042b2037; -[SCAdUnlockableLensSwipeTrackInfo attachmentIsRedirectToDefaultBrowser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042b2028(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1138133b0);
}



/* Entry: 1042b2038; end: 1042b2047; -[SCAdUnlockableLensSwipeTrackInfo attachmentIsPixelCookieAvailable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042b2038(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1138133b8);
}



/* Entry: 1042b2048; end: 1042b28eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1042b2048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined1 param_11,undefined1 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined1 param_18,undefined4 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined4 param_42,undefined4 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined4 param_49)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_b8 [24];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306b568) = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_11306b570) = param_10;
  *(undefined1 *)(unaff_x20 + _DAT_11306b578) = param_11;
  *(undefined1 *)(unaff_x20 + _DAT_11306b580) = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b588);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b590);
  *puVar1 = param_15;
  puVar1[1] = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_11306b598) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_11306b5a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306b5a8) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11306b5b0) = param_18;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b5b8);
  *puVar1 = param_20;
  puVar1[1] = param_21;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b5c0);
  *puVar1 = param_22;
  puVar1[1] = param_23;
  *(undefined8 *)(unaff_x20 + _DAT_11306b5c8) = param_24;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b5d0);
  *puVar1 = param_25;
  puVar1[1] = param_26;
  *(undefined8 *)(unaff_x20 + _DAT_11306b5d8) = param_27;
  *(undefined8 *)(unaff_x20 + _DAT_11306b5e0) = param_28;
  *(undefined8 *)(unaff_x20 + _DAT_11306b5e8) = param_29;
  *(undefined8 *)(unaff_x20 + _DAT_11306b5f0) = param_30;
  *(undefined8 *)(unaff_x20 + _DAT_11306b5f8) = param_31;
  *(undefined8 *)(unaff_x20 + _DAT_11306b600) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306b608) = param_32;
  *(undefined8 *)(unaff_x20 + _DAT_11306b610) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306b618) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306b620) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306b628) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11306b630) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11306b638) = param_33;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b640);
  *puVar1 = param_34;
  puVar1[1] = param_35;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b648);
  *puVar1 = param_36;
  puVar1[1] = param_37;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b650);
  *puVar1 = param_38;
  puVar1[1] = param_39;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b658);
  *puVar1 = param_40;
  puVar1[1] = param_41;
  *(undefined1 *)(unaff_x20 + _DAT_11306b660) = (undefined1)param_42;
  *(undefined1 *)(unaff_x20 + _DAT_11306b668) = param_42._1_1_;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b670);
  *puVar1 = param_44;
  puVar1[1] = param_45;
  func_0x0001042b6bd0(param_46,unaff_x20 + _DAT_113813388,0x112d373d8,&UNK_10d9014c0);
  *(undefined8 *)(unaff_x20 + _DAT_113813390) = param_47;
  *(undefined8 *)(unaff_x20 + _DAT_113813398) = param_48;
  *(undefined1 *)(unaff_x20 + _DAT_1138133a0) = (undefined1)param_49;
  *(undefined1 *)(unaff_x20 + _DAT_1138133a8) = param_49._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_1138133b0) = param_49._2_1_;
  *(undefined1 *)(unaff_x20 + _DAT_1138133b8) = param_49._3_1_;
  puVar2 = auStack_b8;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  func_0x0001042b6c18(param_46,0x112d373d8,&UNK_10d9014c0);
  return puVar2;
}



/* Entry: 1042b28ec; end: 1042b2e9b; -[SCAdUnlockableLensSwipeTrackInfo initWithCamera:isAudioOn:withWorldCamera:withSelfieCamera:lensOptionId:encryptedGeoData:unlockType:firstFaceRenderTimestampSec:firstTriggerTimestampSec:isRendered:lensNamespace:mixerRequestId:sponsoredType:unlockableId:snapSendCount:snapTakenCount:storyPostCount:memoriesSaveCount:directSnapSendRecipients:totalSwipedViewSec:swipedOverCount:maxSwipeTimeSec:recordingTimeSec:postCaptureTimeSec:totalTimeSec:maxContinuousTimeSec:indexPosition:rawAdData:encryptedSponsoredUnlockableTargetingInfoData:rankingId:rankingData:shouldRecordAttachment:withAttachmentOpen:attachmentType:attachmentOpenTimestamp:attachmentViewTimeSec:attachmentMediaDurationSec:attachmentIsRedirectToStore:attachmentIsRedirectToWebview:attachmentIsRedirectToDefaultBrowser:attachmentIsPixelCookieAvailable:] */

void FUN_1042b28ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                  undefined4 param_13,undefined4 param_14,long param_15,long param_16,
                  undefined8 param_17,byte param_18,undefined4 param_19,long param_20,long param_21,
                  undefined8 param_22,long param_23,undefined8 param_24,undefined8 param_25,
                  undefined8 param_26,undefined8 param_27,undefined8 param_28,undefined8 param_29,
                  undefined8 param_30,long param_31,long param_32,long param_33,long param_34,
                  undefined4 param_35,undefined4 param_36,long param_37,long param_38,
                  undefined8 param_39,undefined8 param_40,undefined4 param_41)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  undefined *puVar10;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [8];
  long alStack_2c0 [22];
  undefined1 auStack_210 [8];
  long alStack_208 [5];
  undefined1 auStack_1e0 [16];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  
  lVar3 = 0x112d373d8;
  puVar10 = &UNK_10d9014c0;
  uStack_f0 = param_11;
  uStack_e4 = param_12;
  uStack_e0 = param_13;
  uStack_dc = param_14;
  uStack_d8 = param_9;
  uStack_d0 = param_7;
  uStack_c8 = param_8;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  lStack_118 = (long)&uStack_1d0 + lVar3;
  if (param_15 == 0) {
    puStack_100 = (undefined *)0x0;
    lStack_f8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_100 = puVar10;
    lStack_f8 = param_15;
  }
  lStack_b8 = param_37;
  lStack_b0 = param_38;
  lStack_c0 = param_34;
  if (param_16 == 0) {
    puStack_110 = (undefined *)0x0;
    lStack_108 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_110 = puVar10;
    lStack_108 = param_16;
  }
  if (param_20 == 0) {
    lStack_120 = 0;
    puStack_128 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_128 = puVar10;
    lStack_120 = param_20;
  }
  lVar9 = param_21;
  _objc_retain();
  lVar4 = param_23;
  _objc_retain();
  lVar5 = param_31;
  _objc_retain();
  lStack_168 = param_32;
  _objc_retain();
  lStack_178 = param_33;
  _objc_retain();
  lVar6 = lStack_c0;
  _objc_retain();
  lVar7 = lStack_b8;
  _objc_retain();
  lVar8 = lStack_b0;
  _objc_retain();
  lStack_158 = lVar8;
  if (lVar9 == 0) {
    lStack_130 = 0;
    puStack_138 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_138 = puVar10;
    lStack_130 = param_21;
    _objc_release(lVar9);
  }
  if (lVar4 == 0) {
    lStack_140 = 0;
    puStack_148 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_148 = puVar10;
    lStack_140 = param_23;
    _objc_release(lVar4);
  }
  if (lVar5 == 0) {
    lStack_150 = 0;
    puStack_160 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_160 = puVar10;
    lStack_150 = param_31;
    _objc_release(lVar5);
  }
  if (param_32 == 0) {
    lStack_168 = 0;
    puStack_170 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_170 = puVar10;
    _objc_release(param_32);
  }
  if (param_33 == 0) {
    lStack_178 = 0;
    puStack_180 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_180 = puVar10;
    _objc_release(param_33);
  }
  if (lVar6 == 0) {
    lStack_c0 = 0;
    puStack_188 = (undefined *)0x0;
    lVar9 = lStack_b8;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_188 = puVar10;
    _objc_release(lVar6);
    lVar9 = lStack_b8;
  }
  if (lVar7 == 0) {
    lStack_198 = 0;
    puVar10 = (undefined *)0x0;
    lStack_b8 = lVar9;
  }
  else {
    lStack_b8 = lVar9;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_198 = lVar9;
    _objc_release(lVar7);
  }
  lVar4 = lStack_118;
  lVar9 = lStack_158;
  uStack_1a8 = param_30;
  uStack_1b0 = param_29;
  uStack_1b8 = param_28;
  uStack_1c0 = param_27;
  uStack_1c8 = param_26;
  uStack_1d0 = param_25;
  uStack_1a0 = param_22;
  lStack_b8 = CONCAT44(lStack_b8._4_4_,(uint)param_18);
  uStack_190 = param_17;
  bVar1 = lStack_158 == 0;
  if (bVar1) {
    lVar9 = 0;
    __s10Foundation4DateVMa();
    lVar4 = lStack_118;
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ
              (lStack_118,lStack_b0);
    _objc_release(lVar9);
    lVar9 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar9 + -8) + 0x38))(lVar4,bVar1,1);
  auStack_1e0[lVar3 + 3] = param_41._3_1_;
  auStack_1e0[lVar3 + 2] = param_41._2_1_;
  auStack_1e0[lVar3 + 1] = param_41._1_1_;
  auStack_1e0[lVar3] = (undefined1)param_41;
  *(undefined **)((long)alStack_208 + lVar3 + 8) = puVar10;
  *(long *)((long)alStack_208 + lVar3 + 0x10) = lVar4;
  *(long *)((long)alStack_208 + lVar3) = lStack_198;
  auStack_210[lVar3 + 1] = param_35._1_1_;
  auStack_210[lVar3] = (undefined1)param_35;
  *(undefined **)((long)alStack_2c0 + lVar3 + 0xa8) = puStack_188;
  *(long *)((long)alStack_2c0 + lVar3 + 0xa0) = lStack_c0;
  *(undefined8 *)((long)alStack_208 + lVar3 + 0x18) = param_39;
  *(undefined8 *)((long)alStack_208 + lVar3 + 0x20) = param_40;
  *(undefined **)((long)alStack_2c0 + lVar3 + 0x98) = puStack_180;
  *(long *)((long)alStack_2c0 + lVar3 + 0x90) = lStack_178;
  *(undefined **)((long)alStack_2c0 + lVar3 + 0x88) = puStack_170;
  *(long *)((long)alStack_2c0 + lVar3 + 0x80) = lStack_168;
  *(undefined **)((long)alStack_2c0 + lVar3 + 0x78) = puStack_160;
  *(long *)((long)alStack_2c0 + lVar3 + 0x70) = lStack_150;
  *(undefined8 *)((long)alStack_2c0 + lVar3 + 0x68) = uStack_1a8;
  *(undefined8 *)((long)alStack_2c0 + lVar3 + 0x60) = uStack_1b0;
  *(undefined8 *)((long)alStack_2c0 + lVar3 + 0x58) = uStack_1b8;
  *(undefined8 *)((long)alStack_2c0 + lVar3 + 0x50) = uStack_1c0;
  *(undefined8 *)((long)alStack_2c0 + lVar3 + 0x48) = uStack_1c8;
  uVar2 = uStack_1d0;
  *(undefined8 *)((long)alStack_2c0 + lVar3 + 0x38) = param_24;
  *(undefined8 *)((long)alStack_2c0 + lVar3 + 0x40) = uVar2;
  *(undefined **)((long)alStack_2c0 + lVar3 + 0x30) = puStack_148;
  *(long *)((long)alStack_2c0 + lVar3 + 0x28) = lStack_140;
  *(undefined8 *)((long)alStack_2c0 + lVar3 + 0x20) = uStack_1a0;
  *(undefined **)((long)alStack_2c0 + lVar3 + 0x18) = puStack_138;
  *(long *)((long)alStack_2c0 + lVar3 + 0x10) = lStack_130;
  *(undefined **)((long)alStack_2c0 + lVar3 + 8) = puStack_128;
  *(long *)((long)alStack_2c0 + lVar3) = lStack_120;
  auStack_2c8[lVar3] = (char)lStack_b8;
  *(undefined8 *)((long)&uStack_2d0 + lVar3) = uStack_190;
  func_0x0001042b249c(param_1,param_2,param_3,param_4,param_5,param_6,uStack_d0,uStack_c8,uStack_f0,
                      uStack_e4,uStack_e0,uStack_dc,lStack_f8,puStack_100,lStack_108,puStack_110);
  return;
}



/* Entry: 1042b2e9c; end: 1042b323b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1042b2e9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_11306b568) = *param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11306b570) = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(unaff_x20 + _DAT_11306b578) = *(undefined1 *)((long)param_1 + 9);
  *(undefined1 *)(unaff_x20 + _DAT_11306b580) = *(undefined1 *)((long)param_1 + 10);
  uVar5 = param_1[2];
  uVar14 = param_1[5];
  uVar13 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b588);
  puVar1[1] = param_1[3];
  *puVar1 = uVar5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b590);
  puVar1[1] = uVar14;
  *puVar1 = uVar13;
  *(undefined8 *)(unaff_x20 + _DAT_11306b598) = param_1[6];
  uVar13 = param_1[8];
  *(undefined8 *)(unaff_x20 + _DAT_11306b5a0) = param_1[7];
  *(undefined8 *)(unaff_x20 + _DAT_11306b5a8) = uVar13;
  *(undefined1 *)(unaff_x20 + _DAT_11306b5b0) = *(undefined1 *)(param_1 + 9);
  uVar5 = param_1[10];
  uVar14 = param_1[0xd];
  uVar13 = param_1[0xc];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b5b8);
  puVar1[1] = param_1[0xb];
  *puVar1 = uVar5;
  uVar6 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b5c0);
  puVar1[1] = uVar14;
  *puVar1 = uVar13;
  uVar13 = param_1[0xd];
  *(undefined8 *)(unaff_x20 + _DAT_11306b5c8) = param_1[0xe];
  uVar14 = param_1[0xf];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b5d0);
  puVar1[1] = param_1[0x10];
  *puVar1 = uVar14;
  *(undefined8 *)(unaff_x20 + _DAT_11306b5d8) = param_1[0x11];
  uVar14 = param_1[0x13];
  *(undefined8 *)(unaff_x20 + _DAT_11306b5e0) = param_1[0x12];
  *(undefined8 *)(unaff_x20 + _DAT_11306b5e8) = uVar14;
  uVar14 = param_1[0x15];
  *(undefined8 *)(unaff_x20 + _DAT_11306b5f0) = param_1[0x14];
  *(undefined8 *)(unaff_x20 + _DAT_11306b5f8) = uVar14;
  *(undefined8 *)(unaff_x20 + _DAT_11306b600) = param_1[0x16];
  *(undefined8 *)(unaff_x20 + _DAT_11306b608) = param_1[0x17];
  uVar14 = param_1[0x19];
  *(undefined8 *)(unaff_x20 + _DAT_11306b610) = param_1[0x18];
  *(undefined8 *)(unaff_x20 + _DAT_11306b618) = uVar14;
  uVar14 = param_1[0x1b];
  *(undefined8 *)(unaff_x20 + _DAT_11306b620) = param_1[0x1a];
  *(undefined8 *)(unaff_x20 + _DAT_11306b628) = uVar14;
  uVar5 = param_1[0x10];
  *(undefined8 *)(unaff_x20 + _DAT_11306b630) = param_1[0x1c];
  uVar8 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11306b638) = param_1[0x1d];
  uVar12 = param_1[0xb];
  uVar9 = param_1[0x1e];
  uVar7 = param_1[0x21];
  uVar14 = param_1[0x20];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b640);
  puVar1[1] = param_1[0x1f];
  *puVar1 = uVar9;
  uVar9 = param_1[0x1f];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b648);
  puVar1[1] = uVar7;
  *puVar1 = uVar14;
  uVar10 = param_1[0x21];
  uVar11 = param_1[0x22];
  uVar7 = param_1[0x25];
  uVar14 = param_1[0x24];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b650);
  puVar1[1] = param_1[0x23];
  *puVar1 = uVar11;
  uVar11 = param_1[0x23];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b658);
  puVar1[1] = uVar7;
  *puVar1 = uVar14;
  uVar7 = param_1[0x25];
  *(undefined1 *)(unaff_x20 + _DAT_11306b660) = *(undefined1 *)(param_1 + 0x26);
  *(undefined1 *)(unaff_x20 + _DAT_11306b668) = *(undefined1 *)((long)param_1 + 0x131);
  uVar14 = param_1[0x28];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b670);
  *puVar1 = param_1[0x27];
  puVar1[1] = uVar14;
  lVar3 = 0;
  FUN_10425412c();
  func_0x0001042b6bd0((long)param_1 + (long)*(int *)(lVar3 + 0x98),unaff_x20 + _DAT_113813388,
                      0x112d373d8,&UNK_10d9014c0);
  *(undefined8 *)(unaff_x20 + _DAT_113813390) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x9c));
  *(undefined8 *)(unaff_x20 + _DAT_113813398) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0xa0));
  *(undefined1 *)(unaff_x20 + _DAT_1138133a0) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0xa4));
  *(undefined1 *)(unaff_x20 + _DAT_1138133a8) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0xa8));
  *(undefined1 *)(unaff_x20 + _DAT_1138133b0) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0xac));
  *(undefined1 *)(unaff_x20 + _DAT_1138133b8) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0xb0));
  puVar2 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar14);
  puVar4 = &stack0xffffffffffffff90;
  _objc_msgSendSuper2(puVar4,puVar2);
  func_0x0001034a2580(param_1);
  return puVar4;
}



/* Entry: 1042b323c; end: 1042b326f; -[SCAdUnlockableLensSwipeTrackInfo hash] */

undefined8 FUN_1042b323c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042b3270();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042b3270; end: 1042b38a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b3270(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [72];
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_a0 + -extraout_x8;
  __ss6HasherVABycfC(auStack_98);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306b568));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306b570));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306b578));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306b580));
  if (((undefined8 *)(unaff_x20 + _DAT_11306b588))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b588);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  if (((undefined8 *)(unaff_x20 + _DAT_11306b590))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b590);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306b598));
  dVar7 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306b5a0) != 0.0) {
    dVar7 = *(double *)(unaff_x20 + _DAT_11306b5a0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306b5a8) != 0.0) {
    dVar7 = *(double *)(unaff_x20 + _DAT_11306b5a8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306b5b0));
  if (((undefined8 *)(unaff_x20 + _DAT_11306b5b8))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b5b8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  if (((undefined8 *)(unaff_x20 + _DAT_11306b5c0))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b5c0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306b5c8));
  if (((undefined8 *)(unaff_x20 + _DAT_11306b5d0))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b5d0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306b5d8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306b5e0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306b5e8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306b5f0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306b5f8));
  dVar7 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306b600) != 0.0) {
    dVar7 = *(double *)(unaff_x20 + _DAT_11306b600);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306b608));
  dVar7 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306b610) != 0.0) {
    dVar7 = *(double *)(unaff_x20 + _DAT_11306b610);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306b618) != 0.0) {
    dVar7 = *(double *)(unaff_x20 + _DAT_11306b618);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306b620) != 0.0) {
    dVar7 = *(double *)(unaff_x20 + _DAT_11306b620);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306b628) != 0.0) {
    dVar7 = *(double *)(unaff_x20 + _DAT_11306b628);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306b630) != 0.0) {
    dVar7 = *(double *)(unaff_x20 + _DAT_11306b630);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306b638));
  if (((undefined8 *)(unaff_x20 + _DAT_11306b640))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b640);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  if (((undefined8 *)(unaff_x20 + _DAT_11306b648))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b648);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  if (((undefined8 *)(unaff_x20 + _DAT_11306b650))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b650);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  if (((undefined8 *)(unaff_x20 + _DAT_11306b658))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b658);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306b660));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306b668));
  if (((undefined8 *)(unaff_x20 + _DAT_11306b670))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b670);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  func_0x0001042b6bd0(unaff_x20 + _DAT_113813388,puVar4,0x112d373d8,&UNK_10d9014c0);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar2 + -8);
  puVar3 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar2);
  if ((int)puVar3 == 1) {
    func_0x0001042b6c18(puVar4,0x112d373d8,&UNK_10d9014c0);
    puVar4 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar6 + 8))(puVar4,lVar2);
    puVar4 = puVar3;
    func_0x00010bfde980(puVar3);
    _objc_release(puVar3);
  }
  __ss6HasherV8_combineyySuF(puVar4);
  dVar7 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113813390) != 0.0) {
    dVar7 = *(double *)(unaff_x20 + _DAT_113813390);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113813398) != 0.0) {
    dVar7 = *(double *)(unaff_x20 + _DAT_113813398);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_1138133a0));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_1138133a8));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_1138133b0));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_1138133b8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042b38a8; end: 1042b459f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042b38a8(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long unaff_x20;
  long lVar16;
  long lVar17;
  uint uVar18;
  code *pcVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  long lStack_240;
  uint uStack_234;
  uint uStack_230;
  uint uStack_22c;
  uint uStack_228;
  uint uStack_224;
  uint uStack_220;
  uint uStack_21c;
  uint uStack_218;
  uint uStack_214;
  long lStack_210;
  long lStack_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  double dStack_1a0;
  double dStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  uint uStack_13c;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  int iStack_110;
  int iStack_10c;
  uint uStack_108;
  uint uStack_104;
  long lStack_100;
  long lStack_f8;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  ulong uStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [24];
  long lStack_b0;
  
  lVar14 = unaff_x20;
  _swift_getObjectType();
  lVar11 = 0;
  __s10Foundation4DateVMa();
  lVar17 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar20 = (long)&lStack_240 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar23 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar23 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar20 - extraout_x8_00;
  lVar22 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar22 + -8) + 0x40));
  lVar22 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar21 = lVar22 - extraout_x12;
  func_0x0001042b6bd0(param_1,auStack_c8,0x112d387f8,&UNK_10d902650);
  if (lStack_b0 == 0) {
    func_0x0001042b6c18(auStack_c8,0x112d387f8,&UNK_10d902650);
    return 0;
  }
  plVar12 = &lStack_d0;
  _swift_dynamicCast(plVar12,auStack_c8,PTR___sypN_11034f1a8 + 8,lVar14,6);
  if (((ulong)plVar12 & 1) == 0) {
    return 0;
  }
  lStack_f8 = *(long *)(unaff_x20 + _DAT_11306b568);
  lStack_100 = *(long *)(lStack_d0 + _DAT_11306b568);
  uStack_e0 = (uint)*(byte *)(lStack_d0 + _DAT_11306b570);
  uStack_dc = (uint)*(byte *)(unaff_x20 + _DAT_11306b570);
  uStack_e8 = (uint)*(byte *)(lStack_d0 + _DAT_11306b578);
  uStack_e4 = (uint)*(byte *)(unaff_x20 + _DAT_11306b578);
  uStack_f0 = (uint)*(byte *)(lStack_d0 + _DAT_11306b580);
  uStack_ec = (uint)*(byte *)(unaff_x20 + _DAT_11306b580);
  lVar14 = ((long *)(unaff_x20 + _DAT_11306b588))[1];
  lVar15 = ((long *)(lStack_d0 + _DAT_11306b588))[1];
  uStack_104 = (uint)(lVar14 == 0 && lVar15 == 0);
  if ((lVar14 != 0) && (lVar15 != 0)) {
    lVar13 = *(long *)(unaff_x20 + _DAT_11306b588);
    if ((lVar13 == *(long *)(lStack_d0 + _DAT_11306b588)) && (lVar14 == lVar15)) {
      uStack_104 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uStack_104 = (uint)lVar13;
    }
  }
  lVar14 = ((long *)(unaff_x20 + _DAT_11306b590))[1];
  lVar15 = ((long *)(lStack_d0 + _DAT_11306b590))[1];
  uStack_108 = (uint)(lVar14 == 0 && lVar15 == 0);
  if ((lVar14 != 0) && (lVar15 != 0)) {
    lVar13 = *(long *)(unaff_x20 + _DAT_11306b590);
    if ((lVar13 == *(long *)(lStack_d0 + _DAT_11306b590)) && (lVar14 == lVar15)) {
      uStack_108 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uStack_108 = (uint)lVar13;
    }
  }
  iStack_10c = *(int *)(unaff_x20 + _DAT_11306b598);
  iStack_110 = *(int *)(lStack_d0 + _DAT_11306b598);
  dVar24 = *(double *)(unaff_x20 + _DAT_11306b5a0);
  dVar25 = *(double *)(lStack_d0 + _DAT_11306b5a0);
  dVar26 = *(double *)(unaff_x20 + _DAT_11306b5a8);
  dVar27 = *(double *)(lStack_d0 + _DAT_11306b5a8);
  uStack_114 = (uint)*(byte *)(unaff_x20 + _DAT_11306b5b0);
  uStack_118 = (uint)*(byte *)(lStack_d0 + _DAT_11306b5b0);
  lVar14 = ((long *)(unaff_x20 + _DAT_11306b5b8))[1];
  lVar15 = ((long *)(lStack_d0 + _DAT_11306b5b8))[1];
  uStack_11c = (uint)(lVar14 == 0 && lVar15 == 0);
  if ((lVar14 != 0) && (lVar15 != 0)) {
    lVar13 = *(long *)(unaff_x20 + _DAT_11306b5b8);
    if ((lVar13 == *(long *)(lStack_d0 + _DAT_11306b5b8)) && (lVar14 == lVar15)) {
      uStack_11c = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uStack_11c = (uint)lVar13;
    }
  }
  lVar14 = ((long *)(unaff_x20 + _DAT_11306b5c0))[1];
  lVar15 = ((long *)(lStack_d0 + _DAT_11306b5c0))[1];
  uStack_120 = (uint)(lVar14 == 0 && lVar15 == 0);
  if ((lVar14 != 0) && (lVar15 != 0)) {
    lVar13 = *(long *)(unaff_x20 + _DAT_11306b5c0);
    if ((lVar13 == *(long *)(lStack_d0 + _DAT_11306b5c0)) && (lVar14 == lVar15)) {
      uStack_120 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uStack_120 = (uint)lVar13;
    }
  }
  lStack_130 = *(long *)(unaff_x20 + _DAT_11306b5c8);
  lStack_138 = *(long *)(lStack_d0 + _DAT_11306b5c8);
  lVar14 = ((long *)(unaff_x20 + _DAT_11306b5d0))[1];
  lVar15 = ((long *)(lStack_d0 + _DAT_11306b5d0))[1];
  uStack_13c = (uint)(lVar14 == 0 && lVar15 == 0);
  if ((lVar14 != 0) && (lVar15 != 0)) {
    lVar13 = *(long *)(unaff_x20 + _DAT_11306b5d0);
    if ((lVar13 == *(long *)(lStack_d0 + _DAT_11306b5d0)) && (lVar14 == lVar15)) {
      uStack_13c = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uStack_13c = (uint)lVar13;
    }
  }
  lStack_148 = *(long *)(unaff_x20 + _DAT_11306b5d8);
  lStack_150 = *(long *)(lStack_d0 + _DAT_11306b5d8);
  lStack_158 = *(long *)(unaff_x20 + _DAT_11306b5e0);
  lStack_160 = *(long *)(lStack_d0 + _DAT_11306b5e0);
  lStack_168 = *(long *)(unaff_x20 + _DAT_11306b5e8);
  lStack_170 = *(long *)(lStack_d0 + _DAT_11306b5e8);
  lStack_178 = *(long *)(unaff_x20 + _DAT_11306b5f0);
  lStack_180 = *(long *)(lStack_d0 + _DAT_11306b5f0);
  lStack_188 = *(long *)(unaff_x20 + _DAT_11306b5f8);
  lStack_190 = *(long *)(lStack_d0 + _DAT_11306b5f8);
  dStack_198 = *(double *)(unaff_x20 + _DAT_11306b600);
  dStack_1a0 = *(double *)(lStack_d0 + _DAT_11306b600);
  lStack_1a8 = *(long *)(unaff_x20 + _DAT_11306b608);
  lStack_1b0 = *(long *)(lStack_d0 + _DAT_11306b608);
  dStack_1b8 = *(double *)(unaff_x20 + _DAT_11306b610);
  dStack_1c0 = *(double *)(lStack_d0 + _DAT_11306b610);
  dStack_1c8 = *(double *)(unaff_x20 + _DAT_11306b618);
  dStack_1d0 = *(double *)(lStack_d0 + _DAT_11306b618);
  dStack_1d8 = *(double *)(unaff_x20 + _DAT_11306b620);
  dStack_1e0 = *(double *)(lStack_d0 + _DAT_11306b620);
  dStack_1e8 = *(double *)(unaff_x20 + _DAT_11306b628);
  dStack_1f0 = *(double *)(lStack_d0 + _DAT_11306b628);
  dStack_1f8 = *(double *)(unaff_x20 + _DAT_11306b630);
  dStack_200 = *(double *)(lStack_d0 + _DAT_11306b630);
  lVar14 = ((long *)(unaff_x20 + _DAT_11306b640))[1];
  lVar15 = ((long *)(lStack_d0 + _DAT_11306b640))[1];
  uVar18 = (uint)(lVar14 == 0 && lVar15 == 0);
  lStack_208 = *(long *)(unaff_x20 + _DAT_11306b638);
  lStack_210 = *(long *)(lStack_d0 + _DAT_11306b638);
  if ((lVar14 != 0) && (lVar15 != 0)) {
    lVar13 = *(long *)(unaff_x20 + _DAT_11306b640);
    if ((lVar13 == *(long *)(lStack_d0 + _DAT_11306b640)) && (lVar14 == lVar15)) {
      uVar18 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar18 = (uint)lVar13;
    }
  }
  lVar14 = ((long *)(unaff_x20 + _DAT_11306b648))[1];
  lVar15 = ((long *)(lStack_d0 + _DAT_11306b648))[1];
  uStack_218 = (uint)(lVar14 == 0 && lVar15 == 0);
  if ((lVar14 != 0) && (lVar15 != 0)) {
    lVar13 = *(long *)(unaff_x20 + _DAT_11306b648);
    if ((lVar13 == *(long *)(lStack_d0 + _DAT_11306b648)) && (lVar14 == lVar15)) {
      uStack_218 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uStack_218 = (uint)lVar13;
    }
  }
  lVar14 = ((long *)(unaff_x20 + _DAT_11306b650))[1];
  lVar15 = ((long *)(lStack_d0 + _DAT_11306b650))[1];
  uStack_21c = (uint)(lVar14 == 0 && lVar15 == 0);
  if ((lVar14 != 0) && (lVar15 != 0)) {
    lVar13 = *(long *)(unaff_x20 + _DAT_11306b650);
    if ((lVar13 == *(long *)(lStack_d0 + _DAT_11306b650)) && (lVar14 == lVar15)) {
      uStack_21c = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uStack_21c = (uint)lVar13;
    }
  }
  lVar14 = ((long *)(unaff_x20 + _DAT_11306b658))[1];
  lVar15 = ((long *)(lStack_d0 + _DAT_11306b658))[1];
  uStack_220 = (uint)(lVar14 == 0 && lVar15 == 0);
  if ((lVar14 != 0) && (lVar15 != 0)) {
    lVar13 = *(long *)(unaff_x20 + _DAT_11306b658);
    if ((lVar13 == *(long *)(lStack_d0 + _DAT_11306b658)) && (lVar14 == lVar15)) {
      uStack_220 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uStack_220 = (uint)lVar13;
    }
  }
  uStack_224 = (uint)*(byte *)(unaff_x20 + _DAT_11306b660);
  uStack_228 = (uint)*(byte *)(lStack_d0 + _DAT_11306b660);
  uStack_22c = (uint)*(byte *)(unaff_x20 + _DAT_11306b668);
  uStack_230 = (uint)*(byte *)(lStack_d0 + _DAT_11306b668);
  lVar14 = ((long *)(unaff_x20 + _DAT_11306b670))[1];
  lVar15 = ((long *)(lStack_d0 + _DAT_11306b670))[1];
  uStack_234 = (uint)(lVar14 == 0 && lVar15 == 0);
  lStack_240 = lVar20;
  lStack_128 = lVar22;
  uStack_d8 = uVar21;
  if ((lVar14 != 0) && (lVar15 != 0)) {
    lVar22 = *(long *)(unaff_x20 + _DAT_11306b670);
    if ((lVar22 == *(long *)(lStack_d0 + _DAT_11306b670)) && (lVar14 == lVar15)) {
      uStack_234 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uStack_234 = (uint)lVar22;
    }
  }
  uVar21 = uStack_d8;
  lVar22 = _DAT_113813388;
  uStack_214 = uVar18;
  func_0x0001042b6bd0(lStack_d0 + _DAT_113813388,uStack_d8,0x112d373d8,&UNK_10d9014c0);
  lVar23 = (long)*(int *)(lVar23 + 0x30);
  func_0x0001042b6bd0(unaff_x20 + lVar22,lVar16,0x112d373d8,&UNK_10d9014c0);
  func_0x0001042b6bd0(uVar21,lVar16 + lVar23,0x112d373d8,&UNK_10d9014c0);
  pcVar19 = *(code **)(lVar17 + 0x30);
  lVar14 = lVar16;
  (*pcVar19)(lVar16,1,lVar11);
  lVar22 = lStack_128;
  if ((int)lVar14 == 1) {
    func_0x0001042b6c18(uVar21,0x112d373d8,&UNK_10d9014c0);
    lVar23 = lVar16 + lVar23;
    (*pcVar19)(lVar23,1,lVar11);
    if ((int)lVar23 == 1) {
      func_0x0001042b6c18(lVar16,0x112d373d8,&UNK_10d9014c0);
      uStack_d8 = uStack_d8 & 0xffffffff00000000;
      goto LAB_1042b4284;
    }
LAB_1042b41d4:
    func_0x0001042b6c18(lVar16,0x112d373d0,&UNK_10d90f8f0);
    uVar18 = 1;
  }
  else {
    func_0x0001042b6bd0(lVar16,lStack_128,0x112d373d8,&UNK_10d9014c0);
    lVar14 = lVar16 + lVar23;
    (*pcVar19)(lVar14,1,lVar11);
    lVar20 = lStack_240;
    if ((int)lVar14 == 1) {
      func_0x0001042b6c18(uStack_d8,0x112d373d8,&UNK_10d9014c0);
      (**(code **)(lVar17 + 8))(lVar22,lVar11);
      goto LAB_1042b41d4;
    }
    lVar14 = lStack_240;
    (**(code **)(lVar17 + 0x20))(lStack_240,lVar16 + lVar23,lVar11);
    func_0x000100df4c40();
    lVar23 = lVar22;
    __sSQ2eeoiySbx_xtFZTj(lVar22,lVar20,lVar11,lVar14);
    pcVar19 = *(code **)(lVar17 + 8);
    (*pcVar19)(lVar20,lVar11);
    func_0x0001042b6c18(uStack_d8,0x112d373d8,&UNK_10d9014c0);
    (*pcVar19)(lVar22,lVar11);
    func_0x0001042b6c18(lVar16,0x112d373d8,&UNK_10d9014c0);
    uVar18 = (uint)lVar23 ^ 1;
  }
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar18);
LAB_1042b4284:
  bVar10 = lStack_f8 != lStack_100;
  dVar28 = *(double *)(unaff_x20 + _DAT_113813390);
  dVar29 = *(double *)(lStack_d0 + _DAT_113813390);
  dVar30 = *(double *)(unaff_x20 + _DAT_113813398);
  dVar31 = *(double *)(lStack_d0 + _DAT_113813398);
  bVar2 = *(byte *)(unaff_x20 + _DAT_1138133a0);
  bVar3 = *(byte *)(lStack_d0 + _DAT_1138133a0);
  bVar4 = *(byte *)(unaff_x20 + _DAT_1138133a8);
  bVar5 = *(byte *)(lStack_d0 + _DAT_1138133a8);
  bVar6 = *(byte *)(unaff_x20 + _DAT_1138133b0);
  bVar7 = *(byte *)(lStack_d0 + _DAT_1138133b0);
  bVar8 = *(byte *)(unaff_x20 + _DAT_1138133b8);
  bVar9 = *(byte *)(lStack_d0 + _DAT_1138133b8);
  _objc_release(lStack_d0);
  if ((uStack_104 &
       (((uint)bVar10 | uStack_dc ^ uStack_e0 | uStack_e4 ^ uStack_e8 | uStack_ec ^ uStack_f0) ^
       0xffffffff) & uStack_108 & 1) == 0) {
    return 0;
  }
  if (iStack_10c != iStack_110) {
    return 0;
  }
  if (dVar24 != dVar25) {
    return 0;
  }
  if (dVar26 == dVar27) {
    if (((uStack_114 ^ uStack_118) & 1) != 0) {
      return 0;
    }
    if (((uStack_11c ^ 1) & 1) == 0) {
      if (((uStack_120 ^ 1) & 1) == 0) {
        uVar18 = 0;
        if (lStack_148 == lStack_150) {
          uVar18 = lStack_130 == lStack_138 & uStack_13c;
        }
        uVar1 = 0;
        if (lStack_158 == lStack_160) {
          uVar1 = uVar18;
        }
        uVar18 = 0;
        if (lStack_168 == lStack_170) {
          uVar18 = uVar1;
        }
        uVar1 = 0;
        if (lStack_178 == lStack_180) {
          uVar1 = uVar18;
        }
        uVar18 = 0;
        if (lStack_188 == lStack_190) {
          uVar18 = uVar1;
        }
        uVar1 = 0;
        if (dStack_198 == dStack_1a0) {
          uVar1 = uVar18;
        }
        uVar18 = 0;
        if (lStack_1a8 == lStack_1b0) {
          uVar18 = uVar1;
        }
        uVar1 = 0;
        if (dStack_1b8 == dStack_1c0) {
          uVar1 = uVar18;
        }
        uVar18 = 0;
        if (dStack_1c8 == dStack_1d0) {
          uVar18 = uVar1;
        }
        uVar1 = 0;
        if (dStack_1d8 == dStack_1e0) {
          uVar1 = uVar18;
        }
        uVar18 = 0;
        if (dStack_1e8 == dStack_1f0) {
          uVar18 = uVar1;
        }
        uVar1 = 0;
        if (dStack_1f8 == dStack_200) {
          uVar1 = uVar18;
        }
        uVar18 = 0;
        if (lStack_208 == lStack_210) {
          uVar18 = uVar1;
        }
        uVar1 = 0;
        if (dVar30 == dVar31) {
          uVar1 = (uint)(dVar28 == dVar29) &
                  ((uVar18 & uStack_214 & uStack_218 & uStack_21c & uStack_220 ^ 1 |
                    uStack_224 ^ uStack_228 | uStack_22c ^ uStack_230 | uStack_234 ^ 0xffffffff |
                   (uint)uStack_d8) ^ 0xffffffff);
        }
        return uVar1 & ((bVar2 ^ bVar3) ^ 1) & ((bVar4 ^ bVar5) ^ 1) & ((bVar6 ^ bVar7) ^ 1) &
                       ((bVar8 ^ bVar9) ^ 1);
      }
      return 0;
    }
    return 0;
  }
  return 0;
}



/* Entry: 1042b45a0; end: 1042b462f; -[SCAdUnlockableLensSwipeTrackInfo isEqual:] */

uint FUN_1042b45a0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042b38a8(&uStack_40);
  _objc_release(param_1);
  func_0x0001042b6c18(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1042b4630; end: 1042b4633; -[SCAdUnlockableLensSwipeTrackInfo copyWithZone:] */

void FUN_1042b4630(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042b4634; end: 1042b5363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b4634(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffa0 + -extraout_x8;
  uVar1 = 0x4152454d4143;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4152454d4143,0xe600000000000000);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4f494455415f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f494455415f5349,0xeb000000004e4f5f);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar6 = 0xd000000000000011;
  uVar1 = uVar6;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f2c70);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f2c90);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306b588))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b588);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x54504f5f534e454c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54504f5f534e454c,0xee0044495f4e4f49);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11306b590))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b590);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f2cb0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x545f4b434f4c4e55;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545f4b434f4c4e55,0xeb00000000455059);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306b5a0);
  uVar1 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f1f2cd0);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306b5a8);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f2cf0);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar1 = 0x45444e45525f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45444e45525f5349,0xeb00000000444552);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306b5b8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b5b8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4d414e5f534e454c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d414e5f534e454c,0xee00454341505345);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11306b5c0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b5c0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar8 = 0xd000000000000010;
  uVar2 = uVar8;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f2d10);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x45524f534e4f5053;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45524f534e4f5053,0xee00455059545f44);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306b5d0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b5d0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x42414b434f4c4e55;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x42414b434f4c4e55,0xed000044495f454c);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x4e45535f50414e53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e45535f50414e53,0xef544e554f435f44);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = uVar8;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f2d30);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f2d50);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar8);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f2d70);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f2d90);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306b600);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f2db0);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f2dd0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_11306b610);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f2df0);
  func_0x00010bf92e80(uVar6,param_1);
  _objc_release(uVar1);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_11306b618);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f2e10);
  func_0x00010bf92e80(uVar6,param_1);
  _objc_release(uVar1);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_11306b620);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f2e30);
  func_0x00010bf92e80(uVar6,param_1);
  _objc_release(uVar1);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_11306b628);
  uVar1 = 0x49545f4c41544f54;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x49545f4c41544f54,0xee004345535f454d);
  func_0x00010bf92e80(uVar6,param_1);
  _objc_release(uVar1);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_11306b630);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f2e50);
  func_0x00010bf92e80(uVar6,param_1);
  _objc_release(uVar1);
  uVar1 = 0x4f505f5845444e49;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f505f5845444e49,0xee004e4f49544953);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306b640))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b640);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar6 = 0x445f44415f574152;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x445f44415f574152,0xeb00000000415441);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar6);
  if (((undefined8 *)(unaff_x20 + _DAT_11306b648))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b648);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar6 = 0xd000000000000032;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000032,0x800000010f1f2e70);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar6);
  if (((undefined8 *)(unaff_x20 + _DAT_11306b650))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b650);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x5f474e494b4e4152;
  uVar6 = uVar2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f474e494b4e4152,0xea00000000004449);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar6);
  if (((undefined8 *)(unaff_x20 + _DAT_11306b658))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b658);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f474e494b4e4152,0xec00000041544144);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f2eb0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f2ed0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306b670))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b670);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar6 = 0x454d484341545441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454d484341545441,0xef455059545f544e);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar6);
  func_0x0001042b6bd0(unaff_x20 + _DAT_113813388,puVar5,0x112d373d8,&UNK_10d9014c0);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar9 = *(long *)(lVar3 + -8);
  puVar4 = puVar5;
  (**(code **)(lVar9 + 0x30))(puVar5,1,lVar3);
  puVar7 = (undefined1 *)0x0;
  if ((int)puVar4 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar9 + 8))(puVar5,lVar3);
    puVar7 = puVar4;
  }
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f2ef0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(puVar7);
  _objc_release(uVar1);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113813390);
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f2f10);
  func_0x00010bf92e80(uVar6,param_1);
  _objc_release(uVar1);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113813398);
  uVar1 = 0xd00000000000001d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1f2f30);
  func_0x00010bf92e80(uVar6,param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f1f2f50);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f1f2f70);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000029;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x800000010f1f2fa0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000024;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f1f2fd0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  return;
}



/* Entry: 1042b5364; end: 1042b53b3; -[SCAdUnlockableLensSwipeTrackInfo encodeWithCoder:] */

void FUN_1042b5364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042b4634(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042b53b4; end: 1042b53e3;  */

void FUN_1042b53b4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042b53e4(param_1);
  return;
}



/* Entry: 1042b53e4; end: 1042b69af;  */

undefined8 FUN_1042b53e4(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long extraout_x8;
  code *pcVar13;
  long extraout_x12;
  long lVar14;
  undefined8 unaff_x20;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong uStack_2f0;
  undefined1 auStack_2e8 [8];
  ulong auStack_2e0 [15];
  undefined1 auStack_268 [8];
  long alStack_260 [4];
  undefined1 auStack_240 [16];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  undefined4 uStack_1d4;
  long lStack_1d0;
  long lStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long lStack_1b8;
  ulong uStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  long lStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = (long)&uStack_230 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar2 - extraout_x12;
  uVar3 = 0x4152454d4143;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4152454d4143,0xe600000000000000);
  func_0x00010bf66f40();
  _objc_release(uVar3);
  uVar3 = 0x4f494455415f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f494455415f5349,0xeb000000004e4f5f);
  func_0x00010bf66ce0();
  _objc_release(uVar3);
  uVar20 = 0xd000000000000011;
  uVar3 = uVar20;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f2c70);
  func_0x00010bf66ce0();
  _objc_release(uVar3);
  uVar3 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f2c90);
  func_0x00010bf66ce0();
  _objc_release(uVar3);
  uVar3 = 0x54504f5f534e454c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54504f5f534e454c,0xee0044495f4e4f49);
  uVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (uVar4 == 0) {
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_d8 = 0;
    uStack_e0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_f0,uVar4);
    _swift_unknownObjectRelease(uVar4);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_c8 = uStack_e8;
  uStack_d0 = uStack_f0;
  lStack_b8 = lStack_d8;
  uStack_c0 = uStack_e0;
  if (lStack_d8 == 0) {
    func_0x0001042b6c18(&uStack_d0,0x112d387f8,&UNK_10d902650);
    uStack_128 = 0;
    lVar11 = 0;
  }
  else {
    puVar5 = &uStack_100;
    _swift_dynamicCast(puVar5,&uStack_d0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar11 = lStack_f8;
    uStack_128 = uStack_100;
    if ((int)puVar5 == 0) {
      uStack_128 = 0;
      lVar11 = 0;
    }
  }
  uVar3 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f2cb0);
  uVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (uVar4 == 0) {
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_d8 = 0;
    uStack_e0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_f0,uVar4);
    _swift_unknownObjectRelease(uVar4);
  }
  uStack_c8 = uStack_e8;
  uStack_d0 = uStack_f0;
  lStack_b8 = lStack_d8;
  uStack_c0 = uStack_e0;
  uVar3 = uStack_e0;
  if (lStack_d8 == 0) {
    func_0x0001042b6c18(&uStack_d0,0x112d387f8,&UNK_10d902650);
    uStack_130 = 0;
    lVar14 = 0;
  }
  else {
    puVar5 = &uStack_100;
    _swift_dynamicCast(puVar5,&uStack_d0,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar14 = lStack_f8;
    uStack_130 = uStack_100;
    if ((int)puVar5 == 0) {
      uStack_130 = 0;
      lVar14 = 0;
    }
  }
  uVar6 = 0x545f4b434f4c4e55;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545f4b434f4c4e55,0xeb00000000455059);
  uVar4 = param_1;
  func_0x00010bf66f40();
  _objc_release(uVar6);
  if (uVar4 < 3) {
    uVar6 = 0xd00000000000001f;
    uStack_140 = uVar4;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f1f2cd0);
    func_0x00010bf66da0(param_1);
    uStack_148 = uVar3;
    _objc_release(uVar6);
    uVar6 = 0xd00000000000001b;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f2cf0);
    func_0x00010bf66da0(param_1);
    uStack_150 = uVar3;
    _objc_release(uVar6);
    uVar3 = 0x45444e45525f5349;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45444e45525f5349,0xeb00000000444552);
    uVar4 = param_1;
    func_0x00010bf66ce0();
    uStack_154 = (undefined4)uVar4;
    _objc_release(uVar3);
    uVar3 = 0x4d414e5f534e454c;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d414e5f534e454c,0xee00454341505345);
    uVar4 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (uVar4 == 0) {
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_d8 = 0;
      uStack_e0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_f0,uVar4);
      _swift_unknownObjectRelease(uVar4);
    }
    uStack_c8 = uStack_e8;
    uStack_d0 = uStack_f0;
    lStack_b8 = lStack_d8;
    uStack_c0 = uStack_e0;
    if (lStack_d8 == 0) {
      func_0x0001042b6c18(&uStack_d0,0x112d387f8,&UNK_10d902650);
      uStack_1f8 = 0;
      lStack_178 = 0;
    }
    else {
      puVar5 = &uStack_100;
      _swift_dynamicCast(puVar5,&uStack_d0,puVar1 + 8,PTR___sSSN_11034da80,6);
      uStack_1f8 = uStack_100;
      lStack_178 = lStack_f8;
      if ((int)puVar5 == 0) {
        uStack_1f8 = 0;
        lStack_178 = 0;
      }
    }
    uVar6 = 0xd000000000000010;
    uVar3 = uVar6;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f2d10);
    uVar4 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (uVar4 == 0) {
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_d8 = 0;
      uStack_e0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_f0,uVar4);
      _swift_unknownObjectRelease(uVar4);
    }
    uStack_c8 = uStack_e8;
    uStack_d0 = uStack_f0;
    lStack_b8 = lStack_d8;
    uStack_c0 = uStack_e0;
    if (lStack_d8 == 0) {
      func_0x0001042b6c18(&uStack_d0,0x112d387f8,&UNK_10d902650);
      uStack_200 = 0;
      uStack_198 = 0;
    }
    else {
      puVar5 = &uStack_100;
      _swift_dynamicCast(puVar5,&uStack_d0,puVar1 + 8,PTR___sSSN_11034da80,6);
      uStack_200 = uStack_100;
      uStack_198 = lStack_f8;
      if ((int)puVar5 == 0) {
        uStack_200 = 0;
        uStack_198 = 0;
      }
    }
    uVar3 = 0x45524f534e4f5053;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45524f534e4f5053,0xee00455059545f44);
    uVar4 = param_1;
    func_0x00010bf66f40();
    uStack_160 = uVar4;
    _objc_release(uVar3);
    uVar3 = 0x42414b434f4c4e55;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x42414b434f4c4e55,0xed000044495f454c);
    uVar4 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (uVar4 == 0) {
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_d8 = 0;
      uStack_e0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_f0,uVar4);
      _swift_unknownObjectRelease(uVar4);
    }
    uStack_c8 = uStack_e8;
    uStack_d0 = uStack_f0;
    lStack_b8 = lStack_d8;
    uStack_c0 = uStack_e0;
    uVar3 = uStack_e0;
    if (lStack_d8 == 0) {
      func_0x0001042b6c18(&uStack_d0,0x112d387f8,&UNK_10d902650);
      uStack_208 = 0;
      lStack_1a8 = 0;
    }
    else {
      puVar5 = &uStack_100;
      _swift_dynamicCast(puVar5,&uStack_d0,puVar1 + 8,PTR___sSSN_11034da80,6);
      uStack_208 = uStack_100;
      lStack_1a8 = lStack_f8;
      if ((int)puVar5 == 0) {
        uStack_208 = 0;
        lStack_1a8 = 0;
      }
    }
    uVar7 = 0x4e45535f50414e53;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e45535f50414e53,0xef544e554f435f44);
    uVar4 = param_1;
    func_0x00010bf66f40();
    uStack_168 = uVar4;
    _objc_release(uVar7);
    uVar7 = uVar6;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f2d30);
    uVar4 = param_1;
    func_0x00010bf66f40();
    uStack_170 = uVar4;
    _objc_release(uVar7);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f2d50);
    uVar4 = param_1;
    func_0x00010bf66f40();
    uStack_180 = uVar4;
    _objc_release(uVar6);
    uVar6 = 0xd000000000000013;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f2d70);
    uVar4 = param_1;
    func_0x00010bf66f40();
    uStack_188 = uVar4;
    _objc_release(uVar6);
    uVar6 = 0xd00000000000001b;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f2d90);
    uVar4 = param_1;
    func_0x00010bf66f40();
    uStack_190 = uVar4;
    _objc_release(uVar6);
    uVar6 = 0xd000000000000015;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f2db0);
    func_0x00010bf66da0(param_1);
    uVar7 = uVar3;
    _objc_release(uVar6);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f2dd0);
    uVar4 = param_1;
    func_0x00010bf66f40();
    uStack_1a0 = uVar4;
    _objc_release(uVar20);
    uVar20 = 0xd000000000000012;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f2df0);
    func_0x00010bf66da0(param_1);
    uVar6 = uVar7;
    _objc_release(uVar20);
    uVar20 = 0xd000000000000012;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f2e10);
    func_0x00010bf66da0(param_1);
    uVar24 = uVar6;
    _objc_release(uVar20);
    uVar20 = 0xd000000000000015;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f2e30);
    func_0x00010bf66da0(param_1);
    uVar25 = uVar24;
    _objc_release(uVar20);
    uVar20 = 0x49545f4c41544f54;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x49545f4c41544f54,0xee004345535f454d);
    func_0x00010bf66da0(param_1);
    uVar26 = uVar25;
    _objc_release(uVar20);
    uVar20 = 0xd000000000000017;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f2e50);
    func_0x00010bf66da0(param_1);
    _objc_release(uVar20);
    uVar20 = 0x4f505f5845444e49;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f505f5845444e49,0xee004e4f49544953);
    uVar4 = param_1;
    func_0x00010bf66f40();
    uStack_1b0 = uVar4;
    _objc_release(uVar20);
    uVar20 = 0x445f44415f574152;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x445f44415f574152,0xeb00000000415441);
    uVar4 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar20);
    if (uVar4 == 0) {
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_d8 = 0;
      uStack_e0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_f0,uVar4);
      _swift_unknownObjectRelease(uVar4);
    }
    uStack_c8 = uStack_e8;
    uStack_d0 = uStack_f0;
    lStack_b8 = lStack_d8;
    uStack_c0 = uStack_e0;
    if (lStack_d8 == 0) {
      func_0x0001042b6c18(&uStack_d0,0x112d387f8,&UNK_10d902650);
      uStack_210 = 0;
      lVar10 = 0;
    }
    else {
      puVar5 = &uStack_100;
      _swift_dynamicCast(puVar5,&uStack_d0,puVar1 + 8,PTR___sSSN_11034da80,6);
      lVar10 = lStack_f8;
      uStack_210 = uStack_100;
      if ((int)puVar5 == 0) {
        uStack_210 = 0;
        lVar10 = 0;
      }
    }
    uVar20 = 0xd000000000000032;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000032,0x800000010f1f2e70);
    uVar4 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar20);
    if (uVar4 == 0) {
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_d8 = 0;
      uStack_e0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_f0,uVar4);
      _swift_unknownObjectRelease(uVar4);
    }
    uStack_c8 = uStack_e8;
    uStack_d0 = uStack_f0;
    lStack_b8 = lStack_d8;
    uStack_c0 = uStack_e0;
    if (lStack_d8 == 0) {
      func_0x0001042b6c18(&uStack_d0,0x112d387f8,&UNK_10d902650);
      uStack_218 = 0;
      lStack_1b8 = 0;
    }
    else {
      puVar5 = &uStack_100;
      _swift_dynamicCast(puVar5,&uStack_d0,puVar1 + 8,PTR___sSSN_11034da80,6);
      uStack_218 = uStack_100;
      lStack_1b8 = lStack_f8;
      if ((int)puVar5 == 0) {
        uStack_218 = 0;
        lStack_1b8 = 0;
      }
    }
    uVar15 = 0x5f474e494b4e4152;
    uVar20 = uVar15;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f474e494b4e4152,0xea00000000004449);
    uVar4 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar20);
    if (uVar4 == 0) {
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_d8 = 0;
      uStack_e0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_f0,uVar4);
      _swift_unknownObjectRelease(uVar4);
    }
    uStack_c8 = uStack_e8;
    uStack_d0 = uStack_f0;
    lStack_b8 = lStack_d8;
    uStack_c0 = uStack_e0;
    if (lStack_d8 == 0) {
      func_0x0001042b6c18(&uStack_d0,0x112d387f8,&UNK_10d902650);
      uStack_220 = 0;
      lStack_1c8 = 0;
    }
    else {
      puVar5 = &uStack_100;
      _swift_dynamicCast(puVar5,&uStack_d0,puVar1 + 8,PTR___sSSN_11034da80,6);
      uStack_220 = uStack_100;
      lStack_1c8 = lStack_f8;
      if ((int)puVar5 == 0) {
        uStack_220 = 0;
        lStack_1c8 = 0;
      }
    }
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f474e494b4e4152,0xec00000041544144);
    uVar4 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar15);
    if (uVar4 == 0) {
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_d8 = 0;
      uStack_e0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_f0,uVar4);
      _swift_unknownObjectRelease(uVar4);
    }
    uStack_c8 = uStack_e8;
    uStack_d0 = uStack_f0;
    lStack_b8 = lStack_d8;
    uStack_c0 = uStack_e0;
    if (lStack_d8 == 0) {
      func_0x0001042b6c18(&uStack_d0,0x112d387f8,&UNK_10d902650);
      uStack_228 = 0;
      lStack_1d0 = 0;
    }
    else {
      puVar5 = &uStack_100;
      _swift_dynamicCast(puVar5,&uStack_d0,puVar1 + 8,PTR___sSSN_11034da80,6);
      uStack_228 = uStack_100;
      lStack_1d0 = lStack_f8;
      if ((int)puVar5 == 0) {
        uStack_228 = 0;
        lStack_1d0 = 0;
      }
    }
    uVar20 = 0xd000000000000018;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f2eb0);
    uVar4 = param_1;
    func_0x00010bf66ce0();
    uStack_1bc = (undefined4)uVar4;
    _objc_release(uVar20);
    uVar20 = 0xd000000000000014;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f2ed0);
    uVar4 = param_1;
    func_0x00010bf66ce0();
    uStack_1c0 = (undefined4)uVar4;
    _objc_release(uVar20);
    uVar20 = 0x454d484341545441;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454d484341545441,0xef455059545f544e);
    uVar4 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar20);
    if (uVar4 == 0) {
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_d8 = 0;
      uStack_e0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_f0,uVar4);
      _swift_unknownObjectRelease(uVar4);
    }
    uStack_c8 = uStack_e8;
    uStack_d0 = uStack_f0;
    lStack_b8 = lStack_d8;
    uStack_c0 = uStack_e0;
    if (lStack_d8 == 0) {
      func_0x0001042b6c18(&uStack_d0,0x112d387f8,&UNK_10d902650);
      uStack_230 = 0;
      lVar16 = 0;
    }
    else {
      puVar5 = &uStack_100;
      _swift_dynamicCast(puVar5,&uStack_d0,puVar1 + 8,PTR___sSSN_11034da80,6);
      lVar16 = lStack_f8;
      uStack_230 = uStack_100;
      if ((int)puVar5 == 0) {
        uStack_230 = 0;
        lVar16 = 0;
      }
    }
    uVar20 = 0xd000000000000019;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f2ef0);
    uVar4 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar20);
    if (uVar4 == 0) {
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_d8 = 0;
      uStack_e0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_f0,uVar4);
      _swift_unknownObjectRelease(uVar4);
    }
    uStack_c8 = uStack_e8;
    uStack_d0 = uStack_f0;
    lStack_b8 = lStack_d8;
    uStack_c0 = uStack_e0;
    uVar20 = uStack_e0;
    if (lStack_d8 == 0) {
      func_0x0001042b6c18(&uStack_d0,0x112d387f8,&UNK_10d902650);
      lVar8 = 0;
      __s10Foundation4DateVMa();
      pcVar13 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
      uVar12 = 1;
    }
    else {
      lVar8 = 0;
      __s10Foundation4DateVMa();
      lVar9 = lVar19;
      _swift_dynamicCast(lVar19,&uStack_d0,puVar1 + 8,lVar8,6);
      pcVar13 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
      uVar12 = (uint)lVar9 ^ 1;
    }
    (*pcVar13)(lVar19,uVar12,1,lVar8);
    uVar15 = 0xd000000000000018;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f2f10);
    func_0x00010bf66da0(param_1);
    uVar27 = uVar20;
    _objc_release(uVar15);
    uVar15 = 0xd00000000000001d;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1f2f30);
    func_0x00010bf66da0(param_1);
    _objc_release(uVar15);
    uVar15 = 0xd00000000000001f;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f1f2f50);
    uVar4 = param_1;
    func_0x00010bf66ce0();
    uStack_1d4 = (undefined4)uVar4;
    _objc_release(uVar15);
    uVar15 = 0xd000000000000021;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f1f2f70);
    uVar4 = param_1;
    func_0x00010bf66ce0();
    uStack_1e4 = (undefined4)uVar4;
    _objc_release(uVar15);
    uVar15 = 0xd000000000000029;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x800000010f1f2fa0);
    uVar4 = param_1;
    func_0x00010bf66ce0();
    uStack_1e8 = (undefined4)uVar4;
    _objc_release(uVar15);
    uVar15 = 0xd000000000000024;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f1f2fd0);
    uVar4 = param_1;
    func_0x00010bf66ce0();
    uStack_1ec = (undefined4)uVar4;
    _objc_release(uVar15);
    if (lVar11 == 0) {
      uStack_1e0 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_128,lVar11);
      uStack_1e0 = uStack_128;
      _swift_bridgeObjectRelease(lVar11);
    }
    lVar11 = lStack_178;
    if (lVar14 == 0) {
      uStack_130 = 0;
      uVar15 = uStack_1f8;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_130,lVar14);
      _swift_bridgeObjectRelease(lVar14);
      uVar15 = uStack_1f8;
    }
    uStack_1f8 = uVar15;
    if (lVar11 == 0) {
      lStack_178 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar15,lVar11);
      lStack_178 = uVar15;
      _swift_bridgeObjectRelease(lVar11);
    }
    uVar4 = uStack_198;
    if (uStack_198 == 0) {
      uStack_1f8 = 0;
    }
    else {
      uVar15 = uStack_200;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_200,uStack_198);
      uStack_1f8 = uVar15;
      _swift_bridgeObjectRelease(uVar4);
    }
    lVar11 = lStack_1a8;
    if (lStack_1a8 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = uStack_208;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_208,lStack_1a8);
      _swift_bridgeObjectRelease(lVar11);
    }
    lVar11 = lStack_1b8;
    if (lVar10 == 0) {
      uVar22 = 0;
      uVar18 = uStack_218;
    }
    else {
      uVar22 = uStack_210;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_210,lVar10);
      _swift_bridgeObjectRelease(lVar10);
      uVar18 = uStack_218;
    }
    uStack_218 = uVar18;
    if (lVar11 == 0) {
      uVar18 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar18,lVar11);
      _swift_bridgeObjectRelease(lVar11);
    }
    lVar11 = lStack_1c8;
    if (lStack_1c8 == 0) {
      uVar21 = 0;
    }
    else {
      uVar21 = uStack_220;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_220,lStack_1c8);
      _swift_bridgeObjectRelease(lVar11);
    }
    lVar11 = lStack_1d0;
    if (lStack_1d0 == 0) {
      uVar23 = 0;
      uVar17 = uStack_230;
    }
    else {
      uVar23 = uStack_228;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_228,lStack_1d0);
      _swift_bridgeObjectRelease(lVar11);
      uVar17 = uStack_230;
    }
    uStack_230 = uVar17;
    if (lVar16 == 0) {
      uVar17 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar17,lVar16);
      _swift_bridgeObjectRelease(lVar16);
    }
    uStack_198 = param_1;
    func_0x0001042b6bd0(lVar19,lVar2,0x112d373d8,&UNK_10d9014c0);
    lVar10 = 0;
    __s10Foundation4DateVMa();
    lVar16 = *(long *)(lVar10 + -8);
    lVar11 = lVar2;
    (**(code **)(lVar16 + 0x30))(lVar2,1,lVar10);
    lVar14 = 0;
    if ((int)lVar11 != 1) {
      __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
      (**(code **)(lVar16 + 8))(lVar2,lVar10);
      lVar14 = lVar11;
    }
    lStack_1a8 = lVar14;
    *(char *)(lVar19 + -0xd) = (char)uStack_1ec;
    *(char *)(lVar19 + -0xe) = (char)uStack_1e8;
    *(char *)(lVar19 + -0xf) = (char)uStack_1e4;
    *(char *)(lVar19 + -0x10) = (char)uStack_1d4;
    *(char *)(lVar19 + -0x37) = (char)uStack_1c0;
    *(char *)(lVar19 + -0x38) = (char)uStack_1bc;
    *(ulong *)(lVar19 + -0x68) = uStack_1a0;
    *(ulong *)(lVar19 + -0x70) = uStack_190;
    *(ulong *)(lVar19 + -0x78) = uStack_188;
    *(ulong *)(lVar19 + -0x80) = uStack_180;
    *(ulong *)(lVar19 + -0x88) = uStack_170;
    *(ulong *)(lVar19 + -0x90) = uStack_168;
    *(ulong *)(lVar19 + -0xa0) = uStack_160;
    *(ulong *)(lVar19 + -0x60) = uStack_1b0;
    *(undefined8 *)(lVar19 + -0x58) = uVar22;
    *(undefined8 *)(lVar19 + -0x98) = uVar15;
    *(undefined8 *)(lVar19 + -0x20) = uVar20;
    *(undefined8 *)(lVar19 + -0x18) = uVar27;
    *(undefined8 *)(lVar19 + -0x30) = uVar17;
    *(long *)(lVar19 + -0x28) = lVar14;
    *(undefined8 *)(lVar19 + -0x48) = uVar21;
    *(undefined8 *)(lVar19 + -0x40) = uVar23;
    *(undefined8 *)(lVar19 + -0x50) = uVar18;
    uVar20 = uStack_1f8;
    *(undefined8 *)(lVar19 + -0xa8) = uStack_1f8;
    lVar2 = lStack_178;
    *(long *)(lVar19 + -0xb0) = lStack_178;
    *(char *)(lVar19 + -0xb8) = (char)uStack_154;
    *(ulong *)(lVar19 + -0xc0) = uStack_140;
    uVar27 = uStack_1e0;
    func_0x00010bffafa0(uStack_148,uStack_150,uVar3,uVar7,uVar6,uVar24,uVar25,uVar26,unaff_x20);
    _objc_release(uVar27);
    _objc_release(uStack_130);
    _objc_release(lVar2);
    _objc_release(uVar20);
    _objc_release(uVar15);
    _objc_release(uVar22);
    _objc_release(uVar18);
    _objc_release(uVar21);
    _objc_release(uVar23);
    _objc_release(uVar17);
    _objc_release(lStack_1a8);
    _objc_release(uStack_198);
    func_0x0001042b6c18(lVar19,0x112d373d8,&UNK_10d9014c0);
    return unaff_x20;
  }
  _objc_release(param_1);
  _swift_bridgeObjectRelease(lVar14);
  _swift_bridgeObjectRelease(lVar11);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1042b69b0; end: 1042b69d7; -[SCAdUnlockableLensSwipeTrackInfo initWithCoder:] */

void FUN_1042b69b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042b53e4();
  return;
}



/* Entry: 1042b69d8; end: 1042b6a4f; -[SCAdUnlockableLensSwipeTrackInfo description] */

void FUN_1042b69d8(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_10425412c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1042b1924(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001034a2580(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042b6a50; end: 1042b6acb; -[SCAdUnlockableLensSwipeTrackInfo init] */

void FUN_1042b6a50(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdUnlockableLensSwipeTrackInfoWrapper.swift",0x3a,2,0x1d2,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042b6a98);
  (*pcVar1)();
}



/* Entry: 1042b6acc; end: 1042b6c57; -[SCAdUnlockableLensSwipeTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b6acc(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306b588 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306b590 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306b5b8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306b5c0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306b5d0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306b640 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306b648 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306b650 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306b658 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306b670 + 8));
  func_0x0001042b6c18(param_1 + _DAT_113813388,0x112d373d8,&UNK_10d9014c0);
  return;
}



/* Entry: 1042b6c58; end: 1042b6c5f;  */

void FUN_1042b6c58(void)

{
  if (lRam000000011306b6a0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7f7d5c);
  return;
}



/* Entry: 1042b6c60; end: 1042b6c97;  */

void FUN_1042b6c60(undefined8 param_1)

{
  if (lRam000000011306b6a0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7f7d5c);
  return;
}



/* Entry: 1042b6c98; end: 1042b6d73;  */

void FUN_1042b6c98(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_170 = &UNK_10dce5d88;
  puStack_168 = &UNK_10dce5d88;
  puStack_160 = &UNK_10dce5d88;
  puStack_158 = &UNK_10dce5da0;
  puStack_150 = &UNK_10dce5da0;
  puStack_130 = &UNK_10dce5d88;
  puStack_128 = &UNK_10dce5da0;
  puStack_120 = &UNK_10dce5da0;
  puStack_110 = &UNK_10dce5da0;
  puStack_a0 = &UNK_10dce5da0;
  puStack_98 = &UNK_10dce5da0;
  puStack_90 = &UNK_10dce5da0;
  puStack_88 = &UNK_10dce5da0;
  puStack_80 = &UNK_10dce5d88;
  puStack_78 = &UNK_10dce5d88;
  puStack_70 = &UNK_10dce5da0;
  lVar2 = 0x13f;
  puStack_178 = puVar1;
  puStack_148 = puVar1;
  puStack_140 = puVar1;
  puStack_138 = puVar1;
  puStack_118 = puVar1;
  puStack_108 = puVar1;
  puStack_100 = puVar1;
  puStack_f8 = puVar1;
  puStack_f0 = puVar1;
  puStack_e8 = puVar1;
  puStack_e0 = puVar1;
  puStack_d8 = puVar1;
  puStack_d0 = puVar1;
  puStack_c8 = puVar1;
  puStack_c0 = puVar1;
  puStack_b8 = puVar1;
  puStack_b0 = puVar1;
  puStack_a8 = puVar1;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_68 = *(long *)(lVar2 + -8) + 0x40;
    puStack_50 = &UNK_10dce5d88;
    puStack_48 = &UNK_10dce5d88;
    puStack_40 = &UNK_10dce5d88;
    puStack_38 = &UNK_10dce5d88;
    puStack_60 = puVar1;
    puStack_58 = puVar1;
    _swift_updateClassMetadata2(param_1,0x100,0x29,&puStack_178,param_1 + 0x50);
  }
  return;
}



/* Entry: 1042b6d74; end: 1042b6da3;  */

void FUN_1042b6d74(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042b76f0(param_1);
  return;
}



/* Entry: 1042b6da4; end: 1042b6fe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b6da4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306b6b0);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306b6b8));
  if (((undefined8 *)(unaff_x20 + _DAT_11306b6c0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b6c0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306b6c8);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11306b6d0);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11306b6d8);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11306b6e0);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306b6e8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b6e8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042b6fe4; end: 1042b73df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042b6fe4(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long unaff_x20;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar12 = unaff_x20;
  _swift_getObjectType();
  FUN_1042b8654(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar3 = &lStack_88;
    _swift_dynamicCast(plVar3,auStack_80,PTR___sypN_11034f1a8 + 8,lVar12,6);
    if (((ulong)plVar3 & 1) != 0) {
      uVar9 = *(ulong *)(unaff_x20 + _DAT_11306b6b0);
      lVar12 = *(long *)(lStack_88 + _DAT_11306b6b0);
      uVar7 = (ulong)(uVar9 == 0 && lVar12 == 0);
      if (uVar9 != 0 && lVar12 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar12);
        _objc_retain();
        uVar7 = uVar9;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        _objc_release(uVar9);
        _objc_release(lVar12);
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_11306b6b8);
      bVar2 = *(byte *)(lStack_88 + _DAT_11306b6b8);
      lVar12 = ((long *)(unaff_x20 + _DAT_11306b6c0))[1];
      lVar5 = ((long *)(lStack_88 + _DAT_11306b6c0))[1];
      uVar11 = (uint)(lVar12 == 0 && lVar5 == 0);
      if (lVar12 != 0 && lVar5 != 0) {
        lVar4 = *(long *)(unaff_x20 + _DAT_11306b6c0);
        if ((lVar4 == *(long *)(lStack_88 + _DAT_11306b6c0)) && (lVar12 == lVar5)) {
          uVar11 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar11 = (uint)lVar4;
        }
      }
      lVar5 = *(long *)(unaff_x20 + _DAT_11306b6c8);
      lVar12 = *(long *)(lStack_88 + _DAT_11306b6c8);
      uVar13 = (uint)(lVar5 == 0 && lVar12 == 0);
      if ((lVar5 != 0) && (lVar12 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar12);
        _objc_retain();
        lVar4 = lVar5;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar13 = (uint)lVar4;
        _objc_release(lVar5);
        _objc_release(lVar12);
      }
      lVar5 = *(long *)(unaff_x20 + _DAT_11306b6d0);
      lVar12 = *(long *)(lStack_88 + _DAT_11306b6d0);
      uVar14 = (uint)(lVar5 == 0 && lVar12 == 0);
      if ((lVar5 != 0) && (lVar12 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar12);
        _objc_retain();
        lVar4 = lVar5;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar14 = (uint)lVar4;
        _objc_release(lVar5);
        _objc_release(lVar12);
      }
      lVar5 = *(long *)(unaff_x20 + _DAT_11306b6d8);
      lVar12 = *(long *)(lStack_88 + _DAT_11306b6d8);
      uVar15 = (uint)(lVar5 == 0 && lVar12 == 0);
      if ((lVar5 != 0) && (lVar12 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar12);
        _objc_retain();
        lVar4 = lVar5;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar15 = (uint)lVar4;
        _objc_release(lVar5);
        _objc_release(lVar12);
      }
      lVar5 = *(long *)(unaff_x20 + _DAT_11306b6e0);
      lVar12 = *(long *)(lStack_88 + _DAT_11306b6e0);
      uVar8 = (uint)(lVar5 == 0 && lVar12 == 0);
      if ((lVar5 != 0) && (lVar12 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar12);
        _objc_retain(lVar5);
        lVar4 = lVar5;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar8 = (uint)lVar4;
        _objc_release(lVar5);
        _objc_release(lVar12);
      }
      lVar12 = ((long *)(unaff_x20 + _DAT_11306b6e8))[1];
      lVar5 = ((long *)(lStack_88 + _DAT_11306b6e8))[1];
      if (lVar12 == 0) {
        _swift_bridgeObjectRetain(lVar5);
        _objc_release(lStack_88);
        if (lVar5 == 0) {
LAB_1042b737c:
          uVar10 = 1;
        }
        else {
          _swift_bridgeObjectRelease(lVar5);
          uVar10 = 0;
        }
      }
      else {
        uVar10 = 0;
        if (lVar5 != 0) {
          lVar4 = *(long *)(unaff_x20 + _DAT_11306b6e8);
          if ((lVar4 == *(long *)(lStack_88 + _DAT_11306b6e8)) && (lVar12 == lVar5)) {
            _objc_release(lStack_88);
            goto LAB_1042b737c;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar10 = (uint)lVar4;
        }
        _objc_release(lStack_88);
      }
      uVar6 = 0;
      if (((((uVar7 & 1) != 0) && (uVar6 = 0, ((bVar1 ^ bVar2) & 1) == 0)) &&
          (((uVar11 ^ 1) & 1) == 0)) &&
         (((((uVar13 ^ 1) & 1) == 0 && (((uVar14 ^ 1) & 1) == 0)) && (((uVar15 ^ 1) & 1) == 0)))) {
        uVar6 = uVar8 & uVar10;
      }
      goto LAB_1042b7140;
    }
  }
  uVar6 = 0;
LAB_1042b7140:
  return uVar6 & 1;
}



/* Entry: 1042b73e0; end: 1042b73ef; -[SCAdUnlockableSnapCreationInfo camera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b73e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b6b0));
  return;
}



/* Entry: 1042b73f0; end: 1042b73ff; -[SCAdUnlockableSnapCreationInfo isAudioOn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042b73f0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b6b8);
}



/* Entry: 1042b7400; end: 1042b740b; -[SCAdUnlockableSnapCreationInfo mediaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b7400(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306b6c0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306b6c0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042b740c; end: 1042b741b; -[SCAdUnlockableSnapCreationInfo snapPreviewMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b740c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b6c8));
  return;
}



/* Entry: 1042b741c; end: 1042b742b; -[SCAdUnlockableSnapCreationInfo snapDurationMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b741c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b6d0));
  return;
}



/* Entry: 1042b742c; end: 1042b743b; -[SCAdUnlockableSnapCreationInfo filterSwipeCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b742c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b6d8));
  return;
}



/* Entry: 1042b743c; end: 1042b744b; -[SCAdUnlockableSnapCreationInfo geofilterLoadedCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b743c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b6e0));
  return;
}



/* Entry: 1042b744c; end: 1042b7457; -[SCAdUnlockableSnapCreationInfo filterCarouselEntryDirection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b744c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306b6e8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306b6e8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042b7458; end: 1042b74af;  */

void FUN_1042b7458(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1042b74b0; end: 1042b759b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b74b0(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306b6b0) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11306b6b8) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b6c0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306b6c8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306b6d0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306b6d8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11306b6e0) = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b6e8);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042b759c; end: 1042b76ef; -[SCAdUnlockableSnapCreationInfo initWithCamera:isAudioOn:mediaType:snapPreviewMillis:snapDurationMillis:filterSwipeCount:geofilterLoadedCount:filterCarouselEntryDirection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b759c(long param_1,long param_2,undefined8 param_3,undefined1 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  long param_10)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  _swift_getObjectType();
  if (param_5 == 0) {
    param_5 = 0;
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_10 == 0) {
    param_10 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_11306b6b0) = param_3;
  *(undefined1 *)(param_1 + _DAT_11306b6b8) = param_4;
  plVar1 = (long *)(param_1 + _DAT_11306b6c0);
  *plVar1 = param_5;
  plVar1[1] = lVar2;
  *(undefined8 *)(param_1 + _DAT_11306b6c8) = param_6;
  *(undefined8 *)(param_1 + _DAT_11306b6d0) = param_7;
  *(undefined8 *)(param_1 + _DAT_11306b6d8) = param_8;
  *(undefined8 *)(param_1 + _DAT_11306b6e0) = param_9;
  plVar1 = (long *)(param_1 + _DAT_11306b6e8);
  *plVar1 = param_10;
  plVar1[1] = param_2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar4;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_msgSendSuper2(&lStack_70,puVar3);
  return;
}



/* Entry: 1042b76f0; end: 1042b78e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b76f0(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _swift_getObjectType();
  if (*(char *)(param_1 + 8) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306b6b0) = puVar2;
  *(undefined1 *)(unaff_x20 + _DAT_11306b6b8) = *(undefined1 *)(param_1 + 9);
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b6c0);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_1042b8654(&uStack_50,&uStack_60,0x112d35ff8,&UNK_10d900cd0);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    FUN_1042b8654(&uStack_50,&uStack_60,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306b6c8) = puVar2;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306b6d0) = puVar2;
  if (*(char *)(param_1 + 0x48) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306b6d8) = puVar2;
  if (*(char *)(param_1 + 0x58) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306b6e0) = puVar2;
  uStack_58 = *(undefined8 *)(param_1 + 0x68);
  uStack_60 = *(undefined8 *)(param_1 + 0x60);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b6e8);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  FUN_1042b8654(&uStack_60,auStack_70,0x112d35ff8,&UNK_10d900cd0);
  FUN_104214514(param_1);
  _objc_msgSendSuper2(&stack0xffffffffffffff80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042b78e8; end: 1042b791b; -[SCAdUnlockableSnapCreationInfo hash] */

undefined8 FUN_1042b78e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042b6da4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042b791c; end: 1042b799b; -[SCAdUnlockableSnapCreationInfo isEqual:] */

uint FUN_1042b791c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042b6fe4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042b799c; end: 1042b799f; -[SCAdUnlockableSnapCreationInfo copyWithZone:] */

void FUN_1042b799c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042b79a0; end: 1042b7c23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b79a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x4152454d4143;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4152454d4143,0xe600000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4f494455415f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f494455415f5349,0xeb000000004e4f5f);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306b6c0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b6c0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x59545f414944454d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59545f414944454d,0xea00000000004550);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f3040);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f3060);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f3080);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f30a0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306b6e8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b6e8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f1f30c0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1042b7c24; end: 1042b7c73; -[SCAdUnlockableSnapCreationInfo encodeWithCoder:] */

void FUN_1042b7c24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042b79a0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042b7c74; end: 1042b7ca3;  */

void FUN_1042b7c74(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042b7ca4(param_1);
  return;
}



/* Entry: 1042b7ca4; end: 1042b82bf;  */

undefined8 FUN_1042b7ca4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar2 = 0x4152454d4143;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4152454d4143,0xe600000000000000);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uStack_c8 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar2,6);
    uStack_c8 = uStack_b0;
    if ((int)puVar4 == 0) {
      uStack_c8 = 0;
    }
  }
  uVar2 = 0x4f494455415f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f494455415f5349,0xeb000000004e4f5f);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0x59545f414944454d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59545f414944454d,0xea00000000004550);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uStack_d0 = 0;
    lVar3 = 0;
  }
  else {
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar3 = lStack_a8;
    uStack_d0 = uStack_b0;
    if ((int)puVar4 == 0) {
      uStack_d0 = 0;
      lVar3 = 0;
    }
  }
  uVar2 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f3040);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar5 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar2,6);
    uVar2 = uStack_b0;
    if ((int)puVar4 == 0) {
      uVar2 = 0;
    }
  }
  uVar6 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f3060);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar5 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar6,6);
    uVar6 = uStack_b0;
    if ((int)puVar4 == 0) {
      uVar6 = 0;
    }
  }
  uVar7 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f3080);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  if (lVar5 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar7,6);
    uVar7 = uStack_b0;
    if ((int)puVar4 == 0) {
      uVar7 = 0;
    }
  }
  uVar8 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f30a0);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  if (lVar5 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar8,6);
    uVar8 = uStack_b0;
    if ((int)puVar4 == 0) {
      uVar8 = 0;
    }
  }
  uVar9 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f1f30c0);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  if (lVar5 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar9 = 0;
    lVar5 = 0;
  }
  else {
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    uVar9 = uStack_b0;
    lVar5 = lStack_a8;
    if ((int)puVar4 == 0) {
      uVar9 = 0;
      lVar5 = 0;
    }
  }
  if (lVar3 == 0) {
    uStack_d0 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_d0,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  if (lVar5 == 0) {
    uVar9 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar9,lVar5);
    _swift_bridgeObjectRelease(lVar5);
  }
  func_0x00010bffaf80(unaff_x20);
  _objc_release(uStack_d0);
  _objc_release(uVar9);
  _objc_release(param_1);
  _objc_release(uStack_c8);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar8);
  return unaff_x20;
}



/* Entry: 1042b82c0; end: 1042b82e7; -[SCAdUnlockableSnapCreationInfo initWithCoder:] */

void FUN_1042b82c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042b7ca4();
  return;
}



/* Entry: 1042b82e8; end: 1042b831f; -[SCAdUnlockableSnapCreationInfo description] */

void FUN_1042b82e8(void)

{
  undefined1 auStack_80 [112];
  
  _objc_retain();
  FUN_1042b842c(auStack_80);
  FUN_104214514(auStack_80);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042b8320; end: 1042b839b; -[SCAdUnlockableSnapCreationInfo init] */

void FUN_1042b8320(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdUnlockableSnapCreationInfoWrapper.swift",0x38,2,0x81,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042b8368);
  (*pcVar1)();
}



/* Entry: 1042b839c; end: 1042b842b; -[SCAdUnlockableSnapCreationInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b839c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b6b0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306b6c0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b6c8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b6d0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b6d8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b6e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306b6e8 + 8))
  ;
  return;
}



/* Entry: 1042b842c; end: 1042b8653;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b842c(long *param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_1e0;
  long lStack_1c0;
  undefined1 auStack_1b8 [112];
  long lStack_148;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined6 uStack_13e;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  long lStack_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  long lStack_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  long lStack_f8;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 uStack_b0;
  long lStack_a8;
  undefined1 uStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  long lStack_88;
  undefined1 uStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_1c0 = *(long *)(param_2 + _DAT_11306b6b0);
  bVar1 = lStack_1c0 == 0;
  if (bVar1) {
    lStack_1c0 = 0;
  }
  else {
    func_0x00010c067fc0();
  }
  uVar10 = *(undefined1 *)(param_2 + _DAT_11306b6b8);
  lVar6 = *(long *)(param_2 + _DAT_11306b6c0);
  lVar8 = ((long *)(param_2 + _DAT_11306b6c0))[1];
  lStack_1e0 = *(long *)(param_2 + _DAT_11306b6c8);
  bVar2 = lStack_1e0 == 0;
  if (bVar2) {
    _swift_bridgeObjectRetain();
    lStack_1e0 = 0;
  }
  else {
    _swift_bridgeObjectRetain();
    func_0x00010c067fc0();
  }
  lVar11 = *(long *)(param_2 + _DAT_11306b6d0);
  bVar3 = lVar11 == 0;
  if (bVar3) {
    lVar11 = 0;
  }
  else {
    func_0x00010c067fc0();
  }
  lVar12 = *(long *)(param_2 + _DAT_11306b6d8);
  bVar4 = lVar12 == 0;
  if (bVar4) {
    lVar12 = 0;
  }
  else {
    func_0x00010c067fc0();
  }
  lVar13 = *(long *)(param_2 + _DAT_11306b6e0);
  bVar5 = lVar13 == 0;
  if (bVar5) {
    lVar13 = 0;
  }
  else {
    func_0x00010c067fc0();
  }
  lVar7 = *(long *)(param_2 + _DAT_11306b6e8);
  lVar9 = ((long *)(param_2 + _DAT_11306b6e8))[1];
  _swift_bridgeObjectRetain(lVar9);
  _objc_release(param_2);
  lStack_148 = lStack_1c0;
  lStack_128 = lStack_1e0;
  lStack_d8 = lStack_1c0;
  lStack_b8 = lStack_1e0;
  uStack_140 = bVar1;
  uStack_13f = uVar10;
  lStack_138 = lVar6;
  lStack_130 = lVar8;
  uStack_120 = bVar2;
  lStack_118 = lVar11;
  uStack_110 = bVar3;
  lStack_108 = lVar12;
  uStack_100 = bVar4;
  lStack_f8 = lVar13;
  uStack_f0 = bVar5;
  lStack_e8 = lVar7;
  lStack_e0 = lVar9;
  uStack_d0 = bVar1;
  uStack_cf = uVar10;
  lStack_c8 = lVar6;
  lStack_c0 = lVar8;
  uStack_b0 = bVar2;
  lStack_a8 = lVar11;
  uStack_a0 = bVar3;
  lStack_98 = lVar12;
  uStack_90 = bVar4;
  lStack_88 = lVar13;
  uStack_80 = bVar5;
  lStack_78 = lVar7;
  lStack_70 = lVar9;
  func_0x000104255664(&lStack_148,auStack_1b8);
  FUN_104214514(&lStack_d8);
  param_1[9] = CONCAT71(uStack_ff,uStack_100);
  param_1[8] = lStack_108;
  param_1[0xb] = CONCAT71(uStack_ef,uStack_f0);
  param_1[10] = lStack_f8;
  param_1[0xd] = lStack_e0;
  param_1[0xc] = lStack_e8;
  param_1[1] = CONCAT62(uStack_13e,CONCAT11(uStack_13f,uStack_140));
  *param_1 = lStack_148;
  param_1[3] = lStack_130;
  param_1[2] = lStack_138;
  param_1[5] = CONCAT71(uStack_11f,uStack_120);
  param_1[4] = lStack_128;
  param_1[7] = CONCAT71(uStack_10f,uStack_110);
  param_1[6] = lStack_118;
  return;
}



/* Entry: 1042b8654; end: 1042b869b;  */

undefined8 FUN_1042b8654(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1042b869c; end: 1042b86bb;  */

void FUN_1042b869c(void)

{
  _objc_opt_self(&PTR_PTR_112995018);
  return;
}



/* Entry: 1042b86bc; end: 1042b8717; -[SCAdViewReceipt viewReceipt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b86bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11306b718);
  uVar2 = ((undefined8 *)(param_1 + _DAT_11306b718))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1042b8718; end: 1042b87af; -[SCAdViewReceipt viewedTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b8718(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_1138133c0,lVar1);
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1042b87b0; end: 1042b885f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1042b87b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_50 [8];
  
  puVar4 = auStack_50;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b718);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  lVar2 = _DAT_1138133c0;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar3 + -8);
  (**(code **)(lVar5 + 0x10))(unaff_x20 + lVar2,param_3,lVar3);
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(param_3,lVar3);
  return puVar4;
}


