/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103bf85ac; end: 103bf85bb; -[SCAdPromotedStoryServeLifecycleEvent index] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103bf85ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff6678);
}



/* Entry: 103bf85bc; end: 103bf8647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf85bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff6668);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff6670);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ff6678) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bf8648; end: 103bf871f; -[SCAdPromotedStoryServeLifecycleEvent initWithServeItemId:adRenderData:index:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf8648(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c5ee30();
  uVar4 = param_2;
  func_0x000107c61170(uVar3);
  uVar3 = param_4;
  func_0x000107c5ee30();
  func_0x000107c61170(param_4);
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff6668);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff6670);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  *(undefined8 *)(param_1 + _DAT_112ff6678) = param_5;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bf8720; end: 103bf87cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103bf8720(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_70;
  func_0x000107c610f8();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff6668);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff6670);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  *(undefined8 *)(unaff_x20 + _DAT_112ff6678) = param_1[4];
  func_0x0001006e36f4(&uStack_40,auStack_60);
  func_0x0001006e36f4(&uStack_50,auStack_60);
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  FUN_103bf87cc(param_1);
  return puVar2;
}



/* Entry: 103bf87cc; end: 103bf87ff;  */

undefined8 FUN_103bf87cc(undefined8 param_1)

{
  (*(code *)(undefined *)0x103bf5ce8)();
  return param_1;
}



/* Entry: 103bf8800; end: 103bf8803; -[SCAdPromotedStoryServeLifecycleEvent copyWithZone:] */

void FUN_103bf8800(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bf8804; end: 103bf887f; -[SCAdPromotedStoryServeLifecycleEvent description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf8804(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ff6668);
  uVar3 = ((undefined8 *)(param_1 + _DAT_112ff6668))[1];
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff6670);
  uVar4 = ((undefined8 *)(param_1 + _DAT_112ff6670))[1];
  func_0x00010006c00c(uVar1,uVar3);
  func_0x00010006c00c(uVar2,uVar4);
  func_0x00010006c090(uVar1,uVar3);
  func_0x00010006c090(uVar2,uVar4);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8880; end: 103bf88fb; -[SCAdPromotedStoryServeLifecycleEvent init] */

void FUN_103bf8880(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "AdPromotedStoryDataServices/AdPromotedStoryServeLifecycleEventWrapper.swift",
                      0x4b,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bf88c8);
  (*pcVar1)();
}



/* Entry: 103bf88fc; end: 103bf893b; -[SCAdPromotedStoryServeLifecycleEvent .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bf891c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bf8920) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf88fc(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff6668))[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ff6668));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 103bf893c; end: 103bf895b;  */

void FUN_103bf893c(void)

{
  func_0x000107c61168(&PTR_PTR_112944a38);
  return;
}



/* Entry: 103bf895c; end: 103bf8967;  */

undefined * FUN_103bf895c(void)

{
  return &UNK_10dc64410;
}



/* Entry: 103bf8968; end: 103bf8993; +[SCAdViewContextParameters exitEvent] */

void FUN_103bf8968(void)

{
  func_0x000107c5fadc(0x6576655f74697865,0xea0000000000746e);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8994; end: 103bf89bf; +[SCAdViewContextParameters exitEventSwipeInfo] */

void FUN_103bf8994(void)

{
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1ad760);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf89c0; end: 103bf89cb;  */

undefined * FUN_103bf89c0(void)

{
  return &UNK_10dc64420;
}



/* Entry: 103bf89cc; end: 103bf89fb; +[SCAdViewContextParameters storiesLeft] */

void FUN_103bf89cc(void)

{
  func_0x000107c5fadc(0x5f736569726f7473,0xec0000007466656c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf89fc; end: 103bf8a07;  */

undefined * FUN_103bf89fc(void)

{
  return &UNK_1106e7920;
}



/* Entry: 103bf8a08; end: 103bf8a33; +[SCAdViewContextParameters renderedPosition] */

void FUN_103bf8a08(void)

{
  func_0x000107c5fadc(0xd000000000000011,0x800000010f1ad780);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8a34; end: 103bf8a3f;  */

undefined * FUN_103bf8a34(void)

{
  return &UNK_1106e7930;
}



/* Entry: 103bf8a40; end: 103bf8a6b; +[SCAdViewContextParameters intendedPosition] */

void FUN_103bf8a40(void)

{
  func_0x000107c5fadc(0xd000000000000011,0x800000010f1ad7a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8a6c; end: 103bf8a77;  */

undefined * FUN_103bf8a6c(void)

{
  return &UNK_10dc64430;
}



/* Entry: 103bf8a78; end: 103bf8aa7; +[SCAdViewContextParameters adIndexPosition] */

void FUN_103bf8a78(void)

{
  func_0x000107c5fadc(0x7865646e695f6461,0xec000000736f705f);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8aa8; end: 103bf8ab3;  */

undefined * FUN_103bf8aa8(void)

{
  return &UNK_10dc64440;
}



/* Entry: 103bf8ab4; end: 103bf8ae7; +[SCAdViewContextParameters adInsertPosition] */

void FUN_103bf8ab4(void)

{
  func_0x000107c5fadc(0x7265736e695f6461,0xed0000736f705f74);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8ae8; end: 103bf8af3;  */

undefined * FUN_103bf8ae8(void)

{
  return &UNK_10dc64450;
}



/* Entry: 103bf8af4; end: 103bf8b1f; +[SCAdViewContextParameters snapIndex] */

void FUN_103bf8af4(void)

{
  func_0x000107c5fadc(0x646e695f70616e73,0xea00000000007865);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8b20; end: 103bf8b2b;  */

undefined * FUN_103bf8b20(void)

{
  return &UNK_10dc64460;
}



/* Entry: 103bf8b2c; end: 103bf8b57; +[SCAdViewContextParameters snapCount] */

void FUN_103bf8b2c(void)

{
  func_0x000107c5fadc(0x756f635f70616e73,0xea0000000000746e);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8b58; end: 103bf8b63;  */

undefined * FUN_103bf8b58(void)

{
  return &UNK_10dc64470;
}



/* Entry: 103bf8b64; end: 103bf8b8f; +[SCAdViewContextParameters editionId] */

void FUN_103bf8b64(void)

{
  func_0x000107c5fadc(0x5f6e6f6974696465,0xea00000000006469);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8b90; end: 103bf8b9b;  */

undefined * FUN_103bf8b90(void)

{
  return &UNK_10dc64480;
}



/* Entry: 103bf8b9c; end: 103bf8bcb; +[SCAdViewContextParameters publisherId] */

void FUN_103bf8b9c(void)

{
  func_0x000107c5fadc(0x656873696c627570,0xec00000064695f72);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8bcc; end: 103bf8bd7;  */

undefined * FUN_103bf8bcc(void)

{
  return &UNK_10dc64490;
}



/* Entry: 103bf8bd8; end: 103bf8c0b; +[SCAdViewContextParameters publisherName] */

void FUN_103bf8bd8(void)

{
  func_0x000107c5fadc(0x656873696c627570,0xee00656d616e5f72);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8c0c; end: 103bf8c17;  */

undefined * FUN_103bf8c0c(void)

{
  return &UNK_10dc644a0;
}



/* Entry: 103bf8c18; end: 103bf8c43; +[SCAdViewContextParameters posterId] */

void FUN_103bf8c18(void)

{
  func_0x000107c5fadc(0x695f726574736f70,0xe900000000000064);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8c44; end: 103bf8c4f;  */

undefined * FUN_103bf8c44(void)

{
  return &UNK_10dc644b0;
}



/* Entry: 103bf8c50; end: 103bf8c7b; +[SCAdViewContextParameters profileId] */

void FUN_103bf8c50(void)

{
  func_0x000107c5fadc(0x5f656c69666f7270,0xea00000000006469);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8c7c; end: 103bf8c87;  */

undefined * FUN_103bf8c7c(void)

{
  return &UNK_1106e7940;
}



/* Entry: 103bf8c88; end: 103bf8cb3; +[SCAdViewContextParameters audioPlaybackVolume] */

void FUN_103bf8c88(void)

{
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1ad7c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8cb4; end: 103bf8cbf;  */

undefined * FUN_103bf8cb4(void)

{
  return &UNK_1106e7950;
}



/* Entry: 103bf8cc0; end: 103bf8ceb; +[SCAdViewContextParameters autoAdvanceIndex] */

void FUN_103bf8cc0(void)

{
  func_0x000107c5fadc(0xd000000000000012,0x800000010f1ad7e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8cec; end: 103bf8cf7;  */

undefined * FUN_103bf8cec(void)

{
  return &UNK_1106e7960;
}



/* Entry: 103bf8cf8; end: 103bf8d23; +[SCAdViewContextParameters autoAdvanceCount] */

void FUN_103bf8cf8(void)

{
  func_0x000107c5fadc(0xd000000000000012,0x800000010f1ad800);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8d24; end: 103bf8d2f;  */

undefined * FUN_103bf8d24(void)

{
  return &UNK_1106e7970;
}



/* Entry: 103bf8d30; end: 103bf8d5b; +[SCAdViewContextParameters attachmentTriggerType] */

void FUN_103bf8d30(void)

{
  func_0x000107c5fadc(0xd000000000000017,0x800000010efbca90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8d5c; end: 103bf8d67;  */

undefined * FUN_103bf8d5c(void)

{
  return &UNK_10dc644c0;
}



/* Entry: 103bf8d68; end: 103bf8d93; +[SCAdViewContextParameters operaType] */

void FUN_103bf8d68(void)

{
  func_0x000107c5fadc(0x79745f617265706f,0xea00000000006570);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8d94; end: 103bf8d9f;  */

undefined * FUN_103bf8d94(void)

{
  return &UNK_1106e7980;
}



/* Entry: 103bf8da0; end: 103bf8dcb; +[SCAdViewContextParameters refinedViewSource] */

void FUN_103bf8da0(void)

{
  func_0x000107c5fadc(0xd000000000000013,0x800000010efbc8f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8dcc; end: 103bf8dd7;  */

undefined * FUN_103bf8dcc(void)

{
  return &UNK_1106e7990;
}



/* Entry: 103bf8dd8; end: 103bf8e03; +[SCAdViewContextParameters isOptionalAdBreak] */

void FUN_103bf8dd8(void)

{
  func_0x000107c5fadc(0xd000000000000014,0x800000010f1ad820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8e04; end: 103bf8e0f;  */

undefined * FUN_103bf8e04(void)

{
  return &UNK_1106e79a0;
}



/* Entry: 103bf8e10; end: 103bf8e3b; +[SCAdViewContextParameters precedingStoryType] */

void FUN_103bf8e10(void)

{
  func_0x000107c5fadc(0xd000000000000014,0x800000010f1ad840);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8e3c; end: 103bf8e47;  */

undefined * FUN_103bf8e3c(void)

{
  return &UNK_1106e79b0;
}



/* Entry: 103bf8e48; end: 103bf8e73; +[SCAdViewContextParameters isWithinPayToPromoteContent] */

void FUN_103bf8e48(void)

{
  func_0x000107c5fadc(0xd000000000000020,0x800000010f1ad860);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8e74; end: 103bf8e7f;  */

undefined * FUN_103bf8e74(void)

{
  return &UNK_1106e79c0;
}



/* Entry: 103bf8e80; end: 103bf8eab; +[SCAdViewContextParameters organicAssetId] */

void FUN_103bf8e80(void)

{
  func_0x000107c5fadc(0xd000000000000010,0x800000010f1ad890);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8eac; end: 103bf8eb7;  */

undefined * FUN_103bf8eac(void)

{
  return &UNK_1106e79d0;
}



/* Entry: 103bf8eb8; end: 103bf8ee3; +[SCAdViewContextParameters subscriberStatus] */

void FUN_103bf8eb8(void)

{
  func_0x000107c5fadc(0xd000000000000011,0x800000010f1ad8b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8ee4; end: 103bf8eef;  */

undefined * FUN_103bf8ee4(void)

{
  return &UNK_1106e79e0;
}



/* Entry: 103bf8ef0; end: 103bf8f1b; +[SCAdViewContextParameters organicContextProfileId] */

void FUN_103bf8ef0(void)

{
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f1ad8d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8f1c; end: 103bf8f27;  */

undefined * FUN_103bf8f1c(void)

{
  return &UNK_1106e79f0;
}



/* Entry: 103bf8f28; end: 103bf8f53; +[SCAdViewContextParameters organicContextAssetId] */

void FUN_103bf8f28(void)

{
  func_0x000107c5fadc(0xd000000000000018,0x800000010f1ad8f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8f54; end: 103bf8f5f;  */

undefined * FUN_103bf8f54(void)

{
  return &UNK_10dc644d0;
}



/* Entry: 103bf8f60; end: 103bf8f8f; +[SCAdViewContextParameters parentAdId] */

void FUN_103bf8f60(void)

{
  func_0x000107c5fadc(0x615f746e65726170,0xec00000064695f64);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8f90; end: 103bf8f9b;  */

undefined * FUN_103bf8f90(void)

{
  return &UNK_1106e7a00;
}



/* Entry: 103bf8f9c; end: 103bf8fc7; +[SCAdViewContextParameters serverDrivenSwipeConfigEnabled] */

void FUN_103bf8f9c(void)

{
  func_0x000107c5fadc(0xd000000000000019,0x800000010f1ad910);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf8fc8; end: 103bf8fd3;  */

undefined * FUN_103bf8fc8(void)

{
  return &UNK_10dc644e0;
}



/* Entry: 103bf8fd4; end: 103bf8fff; +[SCAdViewContextParameters swipeConfig] */

void FUN_103bf8fd4(void)

{
  func_0x000107c5fadc(0x666e6f635f667373,0xea00000000006769);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf9000; end: 103bf900b;  */

undefined * FUN_103bf9000(void)

{
  return &UNK_1106e7a10;
}



/* Entry: 103bf900c; end: 103bf9037; +[SCAdViewContextParameters pillButtonAnimationDelayMs] */

void FUN_103bf900c(void)

{
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f1ad930);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf9038; end: 103bf9043;  */

undefined * FUN_103bf9038(void)

{
  return &UNK_1106e7a20;
}



/* Entry: 103bf9044; end: 103bf906f; +[SCAdViewContextParameters decidingAdjacentOrganicGarmSafety] */

void FUN_103bf9044(void)

{
  func_0x000107c5fadc(0xd000000000000025,0x800000010f1ad950);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf9070; end: 103bf907f; -[SCAdViewContextParameters .cxx_destruct] */

void FUN_103bf9070(void)

{
  return;
}



/* Entry: 103bf9080; end: 103bf90af; +[SCAdViewContextExitEvent autoAdvance] */

void FUN_103bf9080(void)

{
  func_0x000107c5fadc(0x5644415f4f545541,0xec00000045434e41);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf90b0; end: 103bf90bb;  */

undefined * FUN_103bf90b0(void)

{
  return &UNK_10dc64500;
}



/* Entry: 103bf90bc; end: 103bf90e3; +[SCAdViewContextExitEvent tapLeft] */

void FUN_103bf90bc(void)

{
  func_0x000107c5fadc(0x5446454c5f504154,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf90e4; end: 103bf90ef;  */

undefined * FUN_103bf90e4(void)

{
  return &UNK_10dc64510;
}



/* Entry: 103bf90f0; end: 103bf911b; +[SCAdViewContextExitEvent tapRight] */

void FUN_103bf90f0(void)

{
  func_0x000107c5fadc(0x484749525f504154,0xe900000000000054);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf911c; end: 103bf9127;  */

undefined * FUN_103bf911c(void)

{
  return &UNK_10dc64520;
}



/* Entry: 103bf9128; end: 103bf9157; +[SCAdViewContextExitEvent tapNavBar] */

void FUN_103bf9128(void)

{
  func_0x000107c5fadc(0x5f56414e5f504154,0xeb00000000524142);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf9158; end: 103bf9163;  */

undefined * FUN_103bf9158(void)

{
  return &UNK_1106e7a30;
}



/* Entry: 103bf9164; end: 103bf918f; +[SCAdViewContextExitEvent tapBrandProfile] */

void FUN_103bf9164(void)

{
  func_0x000107c5fadc(0xd000000000000011,0x800000010f1ad980);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf9190; end: 103bf919b;  */

undefined * FUN_103bf9190(void)

{
  return &UNK_10dc64530;
}



/* Entry: 103bf919c; end: 103bf91c7; +[SCAdViewContextExitEvent swipeLeft] */

void FUN_103bf919c(void)

{
  func_0x000107c5fadc(0x454c5f4550495753,0xea00000000005446);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf91c8; end: 103bf91d3;  */

undefined * FUN_103bf91c8(void)

{
  return &UNK_10dc64540;
}



/* Entry: 103bf91d4; end: 103bf9203; +[SCAdViewContextExitEvent swipeRight] */

void FUN_103bf91d4(void)

{
  func_0x000107c5fadc(0x49525f4550495753,0xeb00000000544847);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf9204; end: 103bf920f;  */

undefined * FUN_103bf9204(void)

{
  return &UNK_10dc64550;
}



/* Entry: 103bf9210; end: 103bf923b; +[SCAdViewContextExitEvent swipeDown] */

void FUN_103bf9210(void)

{
  func_0x000107c5fadc(0x4f445f4550495753,0xea00000000004e57);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf923c; end: 103bf9247;  */

undefined * FUN_103bf923c(void)

{
  return &UNK_10dc64560;
}



/* Entry: 103bf9248; end: 103bf926f; +[SCAdViewContextExitEvent swipeUp] */

void FUN_103bf9248(void)

{
  func_0x000107c5fadc(0x50555f4550495753,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf9270; end: 103bf927b;  */

undefined * FUN_103bf9270(void)

{
  return &UNK_10dc64570;
}



/* Entry: 103bf927c; end: 103bf92a7; +[SCAdViewContextExitEvent background] */

void FUN_103bf927c(void)

{
  func_0x000107c5fadc(0x554f52474b434142,0xea0000000000444e);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf92a8; end: 103bf92b3;  */

undefined * FUN_103bf92a8(void)

{
  return &UNK_10dc64580;
}



/* Entry: 103bf92b4; end: 103bf92e3; +[SCAdViewContextExitEvent longPressed] */

void FUN_103bf92b4(void)

{
  func_0x000107c5fadc(0x4552505f474e4f4c,0xec00000044455353);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf92e4; end: 103bf9313; +[SCAdViewContextExitEvent openBrowser] */

void FUN_103bf92e4(void)

{
  func_0x000107c5fadc(0x4f52425f4e45504f,0xec00000052455357);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf9314; end: 103bf931f;  */

undefined * FUN_103bf9314(void)

{
  return &UNK_10dc64590;
}



/* Entry: 103bf9320; end: 103bf934f; +[SCAdViewContextExitEvent backPressed] */

void FUN_103bf9320(void)

{
  func_0x000107c5fadc(0x4552505f4b434142,0xec00000044455353);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf9350; end: 103bf935b;  */

undefined * FUN_103bf9350(void)

{
  return &UNK_10dc645a0;
}



/* Entry: 103bf935c; end: 103bf937f; +[SCAdViewContextExitEvent other] */

void FUN_103bf935c(void)

{
  func_0x000107c5fadc(0x524548544f,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


