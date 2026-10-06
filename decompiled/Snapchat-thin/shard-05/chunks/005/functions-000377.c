/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f115f8; end: 103f11607; -[SCDiscoverFeedStoryIHEventInteger timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f115f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302ded8);
}



/* Entry: 103f11608; end: 103f1166b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f11608(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302ded0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302ded8) = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1166c; end: 103f116cf; -[SCDiscoverFeedStoryIHEventInteger initWithValue:timestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1166c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_2;
  _swift_getObjectType();
  *(undefined8 *)(param_2 + _DAT_11302ded0) = param_4;
  *(undefined8 *)(param_2 + _DAT_11302ded8) = param_1;
  lStack_40 = param_2;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f116d0; end: 103f1173b; -[SCDiscoverFeedStoryIHEventInteger hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f116d0(long param_1)

{
  double dVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(param_1 + _DAT_11302ded0));
  dVar1 = 0.0;
  if (*(double *)(param_1 + _DAT_11302ded8) != 0.0) {
    dVar1 = *(double *)(param_1 + _DAT_11302ded8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103f1173c; end: 103f117f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103f1173c(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  double dVar4;
  double dVar5;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x20 + _DAT_11302ded0);
      lVar3 = *(long *)(lStack_68 + _DAT_11302ded0);
      dVar4 = *(double *)(unaff_x20 + _DAT_11302ded8);
      dVar5 = *(double *)(lStack_68 + _DAT_11302ded8);
      _objc_release();
      return dVar4 == dVar5 && lVar2 == lVar3;
    }
  }
  return false;
}



/* Entry: 103f117f8; end: 103f11803; -[SCDiscoverFeedStoryIHEventInteger isEqual:] */

uint FUN_103f117f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_103f1173c(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103f11804; end: 103f1184b; -[SCDiscoverFeedStoryIHEventInteger init] */

void FUN_103f11804(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCDiscoverFeedRankingServices/StoryIH.swift",
             0x2b,2,0x7b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f1184c);
  (*pcVar1)();
}



/* Entry: 103f1184c; end: 103f1185b; -[SCDiscoverFeedStoryIHCompositeStoryId corpus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f1184c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302dee0);
}



/* Entry: 103f1185c; end: 103f11867; -[SCDiscoverFeedStoryIHCompositeStoryId identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1185c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302dee8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302dee8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f11868; end: 103f11877; -[SCDiscoverFeedStoryIHCompositeStoryId version] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f11868(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302def0);
}



/* Entry: 103f11878; end: 103f118fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f11878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302dee0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302dee8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11302def0) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f118fc; end: 103f11997; -[SCDiscoverFeedStoryIHCompositeStoryId initWithCorpus:identifier:version:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f118fc(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_11302dee0) = param_3;
  plVar1 = (long *)(param_1 + _DAT_11302dee8);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11302def0) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f11998; end: 103f119cb; -[SCDiscoverFeedStoryIHCompositeStoryId hash] */

undefined8 FUN_103f11998(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f119cc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103f119cc; end: 103f11a73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f119cc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_11302dee0));
  if (((undefined8 *)(unaff_x20 + _DAT_11302dee8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11302dee8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_11302def0));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103f11a74; end: 103f11b9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103f11a74(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_11302dee0);
      lVar7 = *(long *)(lStack_68 + _DAT_11302dee0);
      lVar2 = ((long *)(unaff_x20 + _DAT_11302dee8))[1];
      lVar3 = ((long *)(lStack_68 + _DAT_11302dee8))[1];
      uVar5 = (uint)(lVar2 == 0 && lVar3 == 0);
      if (lVar2 != 0 && lVar3 != 0) {
        lVar4 = *(long *)(unaff_x20 + _DAT_11302dee8);
        if (lVar4 == *(long *)(lStack_68 + _DAT_11302dee8) && lVar2 == lVar3) {
          uVar5 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (lVar4);
          uVar5 = (uint)lVar4;
        }
      }
      lVar2 = *(long *)(unaff_x20 + _DAT_11302def0);
      lVar3 = *(long *)(lStack_68 + _DAT_11302def0);
      _objc_release();
      if (lVar6 == lVar7) {
        return uVar5 & lVar2 == lVar3;
      }
    }
  }
  return 0;
}



/* Entry: 103f11ba0; end: 103f11bab; -[SCDiscoverFeedStoryIHCompositeStoryId isEqual:] */

uint FUN_103f11ba0(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_103f11a74(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103f11bac; end: 103f11bf3; -[SCDiscoverFeedStoryIHCompositeStoryId init] */

void FUN_103f11bac(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCDiscoverFeedRankingServices/StoryIH.swift",
             0x2b,2,0xa9,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f11bf4);
  (*pcVar1)();
}



/* Entry: 103f11bf4; end: 103f11c07; -[SCDiscoverFeedStoryIHCompositeStoryId .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f11bf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302dee8 + 8))
  ;
  return;
}



/* Entry: 103f11c08; end: 103f11c17; -[SCDiscoverFeedStoryIHStoryInfo storyDurationSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f11c08(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302def8);
}



/* Entry: 103f11c18; end: 103f11c27; -[SCDiscoverFeedStoryIHStoryInfo isSubscribed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f11c18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302df00));
  return;
}



/* Entry: 103f11c28; end: 103f11c37; -[SCDiscoverFeedStoryIHStoryInfo isHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f11c28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302df08));
  return;
}



/* Entry: 103f11c38; end: 103f11c47; -[SCDiscoverFeedStoryIHStoryInfo numSnapsInLatestVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f11c38(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302df10);
}



/* Entry: 103f11c48; end: 103f11c57; -[SCDiscoverFeedStoryIHStoryInfo latestVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f11c48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302df18);
}



/* Entry: 103f11c58; end: 103f11c67; -[SCDiscoverFeedStoryIHStoryInfo tapStoryKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f11c58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302df20);
}



/* Entry: 103f11c68; end: 103f11c77; -[SCDiscoverFeedStoryIHStoryInfo storyType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f11c68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302df28);
}



/* Entry: 103f11c78; end: 103f11c87; -[SCDiscoverFeedStoryIHStoryInfo isShared] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f11c78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302df30));
  return;
}



/* Entry: 103f11c88; end: 103f11c97; -[SCDiscoverFeedStoryIHStoryInfo openedProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f11c88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302df38));
  return;
}



/* Entry: 103f11c98; end: 103f11ca3; -[SCDiscoverFeedStoryIHStoryInfo pageSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f11c98(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302df40))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302df40);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f11ca4; end: 103f11cb3; -[SCDiscoverFeedStoryIHStoryInfo numBoosts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f11ca4(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302df48);
}



/* Entry: 103f11cb4; end: 103f11cc3; -[SCDiscoverFeedStoryIHStoryInfo compositeStoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f11cb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302df50));
  return;
}



/* Entry: 103f11cc4; end: 103f11cd3; -[SCDiscoverFeedStoryIHStoryInfo reportAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f11cc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302df58));
  return;
}



/* Entry: 103f11cd4; end: 103f11cdf; -[SCDiscoverFeedStoryIHStoryInfo tileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f11cd4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302df60))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302df60);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f11ce0; end: 103f11cef; -[SCDiscoverFeedStoryIHStoryInfo feedType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f11ce0(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302df68);
}



/* Entry: 103f11cf0; end: 103f11cff; -[SCDiscoverFeedStoryIHStoryInfo isBoosted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f11cf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302df70));
  return;
}



/* Entry: 103f11d00; end: 103f11d0f; -[SCDiscoverFeedStoryIHStoryInfo isSendComment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f11d00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302df78));
  return;
}



/* Entry: 103f11d10; end: 103f11d1f; -[SCDiscoverFeedStoryIHStoryInfo commentsTrayViewTimeInMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f11d10(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302df80);
}



/* Entry: 103f11d20; end: 103f11d2f; -[SCDiscoverFeedStoryIHStoryInfo isRecommended] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f11d20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302df88));
  return;
}



/* Entry: 103f11d30; end: 103f11d3f; -[SCDiscoverFeedStoryIHStoryInfo isInFeedSurveyResponsePositive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f11d30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302df90));
  return;
}



/* Entry: 103f11d40; end: 103f11d4f; -[SCDiscoverFeedStoryIHStoryInfo isInFeedSurveyResponseNegative] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f11d40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302df98));
  return;
}



/* Entry: 103f11d50; end: 103f1217b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f11d50(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined4 param_18,undefined4 param_19,undefined8 param_20,
                  undefined8 param_21,undefined4 param_22,undefined4 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  *(undefined4 *)(unaff_x20 + _DAT_11302def8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302df00) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302df08) = param_3;
  *(undefined4 *)(unaff_x20 + _DAT_11302df10) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11302df18) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11302df20) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11302df28) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11302df30) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11302df38) = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302df40);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  *(undefined4 *)(unaff_x20 + _DAT_11302df48) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11302df50) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_11302df58) = param_15;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302df60);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  *(undefined4 *)(unaff_x20 + _DAT_11302df68) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_11302df70) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_11302df78) = param_21;
  *(undefined4 *)(unaff_x20 + _DAT_11302df80) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_11302df88) = param_24;
  *(undefined8 *)(unaff_x20 + _DAT_11302df90) = param_25;
  *(undefined8 *)(unaff_x20 + _DAT_11302df98) = param_26;
  _objc_msgSendSuper2(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1217c; end: 103f12307; -[SCDiscoverFeedStoryIHStoryInfo initWithStoryDurationSec:isSubscribed:isHidden:numSnapsInLatestVersion:latestVersion:tapStoryKey:storyType:isShared:openedProfile:pageSessionId:numBoosts:compositeStoryId:reportAction:tileId:feedType:isBoosted:isSendComment:commentsTrayViewTimeInMs:isRecommended:isInFeedSurveyResponsePositive:isInFeedSurveyResponseNegative:] */

void FUN_103f1217c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
                  undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  long param_17,undefined4 param_18,undefined4 param_19,undefined8 param_20,
                  undefined8 param_21,undefined4 param_22,undefined4 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26)

{
  undefined8 uStack_b8;
  long lStack_b0;
  
  if (param_12 == 0) {
    lStack_b0 = 0;
    uStack_b8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_b8 = param_2;
    lStack_b0 = param_12;
  }
  if (param_17 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  func_0x000103f11f68(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      lStack_b0,uStack_b8,param_13);
  return;
}



/* Entry: 103f12308; end: 103f1233b; -[SCDiscoverFeedStoryIHStoryInfo hash] */

undefined8 FUN_103f12308(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f1233c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103f1233c; end: 103f129fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1233c(void)

{
  double dVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 auStack_368 [72];
  undefined1 auStack_320 [72];
  undefined1 auStack_2d8 [72];
  undefined1 auStack_290 [72];
  undefined1 auStack_248 [72];
  undefined1 auStack_200 [72];
  undefined1 auStack_1b8 [72];
  undefined1 auStack_170 [72];
  undefined1 auStack_128 [72];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  __ss6HasherVABycfC(auStack_128);
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_11302def8));
  lVar4 = *(long *)(unaff_x20 + _DAT_11302df00);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(&uStack_e0);
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar4 + _DAT_11302deb0));
    dVar1 = 0.0;
    if (*(double *)(lVar4 + _DAT_11302deb8) != 0.0) {
      dVar1 = *(double *)(lVar4 + _DAT_11302deb8);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    uStack_68 = uStack_b8;
    uStack_70 = uStack_c0;
    uStack_58 = uStack_a8;
    uStack_60 = uStack_b0;
    uStack_50 = uStack_a0;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar1);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_11302df08);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(&uStack_3b0);
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar4 + _DAT_11302deb0));
    dVar1 = 0.0;
    if (*(double *)(lVar4 + _DAT_11302deb8) != 0.0) {
      dVar1 = *(double *)(lVar4 + _DAT_11302deb8);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    uStack_b8 = uStack_388;
    uStack_c0 = uStack_390;
    uStack_a8 = uStack_378;
    uStack_b0 = uStack_380;
    uStack_a0 = uStack_370;
    uStack_d8 = uStack_3a8;
    uStack_e0 = uStack_3b0;
    uStack_c8 = uStack_398;
    uStack_d0 = uStack_3a0;
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar1);
  }
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_11302df10));
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_11302df18));
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_11302df20));
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_11302df28));
  lVar4 = *(long *)(unaff_x20 + _DAT_11302df30);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_368);
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar4 + _DAT_11302deb0));
    dVar1 = 0.0;
    if (*(double *)(lVar4 + _DAT_11302deb8) != 0.0) {
      dVar1 = *(double *)(lVar4 + _DAT_11302deb8);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar1);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_11302df38);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_320);
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar4 + _DAT_11302deb0));
    dVar1 = 0.0;
    if (*(double *)(lVar4 + _DAT_11302deb8) != 0.0) {
      dVar1 = *(double *)(lVar4 + _DAT_11302deb8);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar1);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11302df40))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11302df40);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar5 = uVar2;
    func_0x000107c44c3c();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  uVar3 = (ulong)*(uint *)(unaff_x20 + _DAT_11302df48);
  __ss6HasherV8_combineyys6UInt32VF(uVar3);
  if (*(long *)(unaff_x20 + _DAT_11302df50) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_103f119cc();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_11302df58);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_2d8);
    __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(lVar4 + _DAT_11302ded0));
    dVar1 = 0.0;
    if (*(double *)(lVar4 + _DAT_11302ded8) != 0.0) {
      dVar1 = *(double *)(lVar4 + _DAT_11302ded8);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar1);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11302df60))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11302df60);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar5 = uVar2;
    func_0x000107c44c3c();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_11302df68));
  lVar4 = *(long *)(unaff_x20 + _DAT_11302df70);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_290);
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar4 + _DAT_11302deb0));
    dVar1 = 0.0;
    if (*(double *)(lVar4 + _DAT_11302deb8) != 0.0) {
      dVar1 = *(double *)(lVar4 + _DAT_11302deb8);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar1);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_11302df78);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_248);
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar4 + _DAT_11302deb0));
    dVar1 = 0.0;
    if (*(double *)(lVar4 + _DAT_11302deb8) != 0.0) {
      dVar1 = *(double *)(lVar4 + _DAT_11302deb8);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar1);
  }
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_11302df80));
  lVar4 = *(long *)(unaff_x20 + _DAT_11302df88);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_200);
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar4 + _DAT_11302deb0));
    dVar1 = 0.0;
    if (*(double *)(lVar4 + _DAT_11302deb8) != 0.0) {
      dVar1 = *(double *)(lVar4 + _DAT_11302deb8);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar1);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_11302df90);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_1b8);
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar4 + _DAT_11302deb0));
    dVar1 = 0.0;
    if (*(double *)(lVar4 + _DAT_11302deb8) != 0.0) {
      dVar1 = *(double *)(lVar4 + _DAT_11302deb8);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar1);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_11302df98);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_170);
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar4 + _DAT_11302deb0));
    dVar1 = 0.0;
    if (*(double *)(lVar4 + _DAT_11302deb8) != 0.0) {
      dVar1 = *(double *)(lVar4 + _DAT_11302deb8);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103f129fc; end: 103f130cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103f129fc(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long unaff_x20;
  long lVar23;
  long lVar24;
  long *plVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_a0;
  uint uStack_9c;
  long lStack_90;
  long alStack_88 [3];
  long *plStack_70;
  
  lVar23 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_88);
  if (plStack_70 == (long *)0x0) {
    func_0x00010006e7f4(alStack_88);
  }
  else {
    plVar15 = &lStack_90;
    _swift_dynamicCast(plVar15,alStack_88,PTR___sypN_11034f1a8 + 8,lVar23,6);
    if (((ulong)plVar15 & 1) != 0) {
      iVar3 = *(int *)(unaff_x20 + _DAT_11302def8);
      iVar4 = *(int *)(lStack_90 + _DAT_11302def8);
      if (*(long *)(unaff_x20 + _DAT_11302df00) == 0) {
        uStack_9c = (uint)(*(long *)(lStack_90 + _DAT_11302df00) == 0);
      }
      else {
        lVar23 = *(long *)(lStack_90 + _DAT_11302df00);
        if (lVar23 == 0) {
          plVar15 = (long *)0x0;
          alStack_88[1] = 0;
          alStack_88[2] = 0;
        }
        else {
          FUN_103f130cc();
        }
        alStack_88[0] = lVar23;
        plStack_70 = plVar15;
        _objc_retain(lVar23);
        uStack_9c = 0;
        FUN_103f1123c();
        plVar15 = alStack_88;
        func_0x00010006e7f4();
      }
      if (*(long *)(unaff_x20 + _DAT_11302df08) == 0) {
        uStack_a0 = (uint)(*(long *)(lStack_90 + _DAT_11302df08) == 0);
      }
      else {
        lVar23 = *(long *)(lStack_90 + _DAT_11302df08);
        if (lVar23 == 0) {
          plVar15 = (long *)0x0;
          alStack_88[1] = 0;
          alStack_88[2] = 0;
        }
        else {
          FUN_103f130cc();
        }
        alStack_88[0] = lVar23;
        plStack_70 = plVar15;
        _objc_retain(lVar23);
        uStack_a0 = 0;
        FUN_103f1123c();
        plVar15 = alStack_88;
        func_0x00010006e7f4();
      }
      iVar5 = *(int *)(unaff_x20 + _DAT_11302df10);
      iVar6 = *(int *)(lStack_90 + _DAT_11302df10);
      lVar20 = *(long *)(unaff_x20 + _DAT_11302df18);
      lVar23 = *(long *)(lStack_90 + _DAT_11302df18);
      lVar21 = *(long *)(unaff_x20 + _DAT_11302df20);
      lVar18 = *(long *)(lStack_90 + _DAT_11302df20);
      lVar22 = *(long *)(unaff_x20 + _DAT_11302df28);
      lVar19 = *(long *)(lStack_90 + _DAT_11302df28);
      if (*(long *)(unaff_x20 + _DAT_11302df30) == 0) {
        uStack_dc = (uint)(*(long *)(lStack_90 + _DAT_11302df30) == 0);
      }
      else {
        lVar24 = *(long *)(lStack_90 + _DAT_11302df30);
        if (lVar24 == 0) {
          plVar15 = (long *)0x0;
          alStack_88[1] = 0;
          alStack_88[2] = 0;
        }
        else {
          FUN_103f130cc();
        }
        alStack_88[0] = lVar24;
        plStack_70 = plVar15;
        _objc_retain(lVar24);
        uStack_dc = 0;
        FUN_103f1123c();
        plVar15 = alStack_88;
        func_0x00010006e7f4();
      }
      if (*(long *)(unaff_x20 + _DAT_11302df38) == 0) {
        uStack_e0 = (uint)(*(long *)(lStack_90 + _DAT_11302df38) == 0);
      }
      else {
        lVar24 = *(long *)(lStack_90 + _DAT_11302df38);
        if (lVar24 == 0) {
          plVar15 = (long *)0x0;
          alStack_88[1] = 0;
          alStack_88[2] = 0;
        }
        else {
          FUN_103f130cc();
        }
        alStack_88[0] = lVar24;
        plStack_70 = plVar15;
        _objc_retain(lVar24);
        uStack_e0 = 0;
        FUN_103f1123c();
        func_0x00010006e7f4(alStack_88);
      }
      lVar24 = ((undefined8 *)(unaff_x20 + _DAT_11302df40))[1];
      lVar16 = ((undefined8 *)(lStack_90 + _DAT_11302df40))[1];
      plVar15 = (long *)(ulong)(lVar24 == 0 && lVar16 == 0);
      if ((lVar24 != 0) && (lVar16 != 0)) {
        plVar15 = *(long **)(unaff_x20 + _DAT_11302df40);
        if ((plVar15 == *(long **)(lStack_90 + _DAT_11302df40)) && (lVar24 == lVar16)) {
          plVar15 = (long *)0x1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
        }
      }
      iVar7 = *(int *)(unaff_x20 + _DAT_11302df48);
      uVar13 = (uint)plVar15;
      iVar8 = *(int *)(lStack_90 + _DAT_11302df48);
      if (*(long *)(unaff_x20 + _DAT_11302df50) == 0) {
        uStack_f0 = (uint)(*(long *)(lStack_90 + _DAT_11302df50) == 0);
      }
      else {
        lVar24 = *(long *)(lStack_90 + _DAT_11302df50);
        if (lVar24 == 0) {
          plVar15 = (long *)0x0;
          alStack_88[1] = 0;
          alStack_88[2] = 0;
        }
        else {
          func_0x000103f1310c();
        }
        alStack_88[0] = lVar24;
        plStack_70 = plVar15;
        _objc_retain(lVar24);
        uStack_f0 = 0;
        FUN_103f11a74();
        plVar15 = alStack_88;
        func_0x00010006e7f4();
      }
      if (*(long *)(unaff_x20 + _DAT_11302df58) == 0) {
        uStack_f4 = (uint)(*(long *)(lStack_90 + _DAT_11302df58) == 0);
      }
      else {
        lVar24 = *(long *)(lStack_90 + _DAT_11302df58);
        if (lVar24 == 0) {
          plVar15 = (long *)0x0;
          alStack_88[1] = 0;
          alStack_88[2] = 0;
        }
        else {
          func_0x000103f130ec();
        }
        alStack_88[0] = lVar24;
        plStack_70 = plVar15;
        _objc_retain(lVar24);
        uStack_f4 = 0;
        FUN_103f1173c();
        plVar15 = alStack_88;
        func_0x00010006e7f4();
      }
      lVar24 = ((undefined8 *)(unaff_x20 + _DAT_11302df60))[1];
      lVar16 = ((undefined8 *)(lStack_90 + _DAT_11302df60))[1];
      plVar25 = (long *)(ulong)(lVar24 == 0 && lVar16 == 0);
      if ((lVar24 != 0) && (lVar16 != 0)) {
        plVar15 = *(long **)(unaff_x20 + _DAT_11302df60);
        if ((plVar15 == *(long **)(lStack_90 + _DAT_11302df60)) && (lVar24 == lVar16)) {
          plVar25 = (long *)0x1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          plVar25 = plVar15;
        }
      }
      iVar9 = *(int *)(unaff_x20 + _DAT_11302df68);
      iVar10 = *(int *)(lStack_90 + _DAT_11302df68);
      if (*(long *)(unaff_x20 + _DAT_11302df70) == 0) {
        uVar26 = (uint)(*(long *)(lStack_90 + _DAT_11302df70) == 0);
      }
      else {
        lVar24 = *(long *)(lStack_90 + _DAT_11302df70);
        if (lVar24 == 0) {
          plVar15 = (long *)0x0;
          alStack_88[1] = 0;
          alStack_88[2] = 0;
        }
        else {
          FUN_103f130cc();
        }
        alStack_88[0] = lVar24;
        plStack_70 = plVar15;
        _objc_retain(lVar24);
        uVar26 = 0;
        FUN_103f1123c();
        plVar15 = alStack_88;
        func_0x00010006e7f4();
      }
      if (*(long *)(unaff_x20 + _DAT_11302df78) == 0) {
        uVar27 = (uint)(*(long *)(lStack_90 + _DAT_11302df78) == 0);
      }
      else {
        lVar24 = *(long *)(lStack_90 + _DAT_11302df78);
        if (lVar24 == 0) {
          plVar15 = (long *)0x0;
          alStack_88[1] = 0;
          alStack_88[2] = 0;
        }
        else {
          FUN_103f130cc();
        }
        alStack_88[0] = lVar24;
        plStack_70 = plVar15;
        _objc_retain(lVar24);
        uVar27 = 0;
        FUN_103f1123c();
        plVar15 = alStack_88;
        func_0x00010006e7f4();
      }
      iVar11 = *(int *)(unaff_x20 + _DAT_11302df80);
      iVar12 = *(int *)(lStack_90 + _DAT_11302df80);
      if (*(long *)(unaff_x20 + _DAT_11302df88) == 0) {
        uVar28 = (uint)(*(long *)(lStack_90 + _DAT_11302df88) == 0);
      }
      else {
        lVar24 = *(long *)(lStack_90 + _DAT_11302df88);
        if (lVar24 == 0) {
          plVar15 = (long *)0x0;
          alStack_88[1] = 0;
          alStack_88[2] = 0;
        }
        else {
          FUN_103f130cc();
        }
        alStack_88[0] = lVar24;
        plStack_70 = plVar15;
        _objc_retain(lVar24);
        uVar28 = 0;
        FUN_103f1123c();
        plVar15 = alStack_88;
        func_0x00010006e7f4();
      }
      if (*(long *)(unaff_x20 + _DAT_11302df90) == 0) {
        uVar17 = (uint)(*(long *)(lStack_90 + _DAT_11302df90) == 0);
      }
      else {
        lVar24 = *(long *)(lStack_90 + _DAT_11302df90);
        if (lVar24 == 0) {
          plVar15 = (long *)0x0;
          alStack_88[1] = 0;
          alStack_88[2] = 0;
        }
        else {
          FUN_103f130cc();
        }
        alStack_88[0] = lVar24;
        plStack_70 = plVar15;
        _objc_retain(lVar24);
        plVar15 = alStack_88;
        FUN_103f1123c(plVar15);
        uVar17 = (uint)plVar15;
        plVar15 = alStack_88;
        func_0x00010006e7f4();
      }
      if (*(long *)(unaff_x20 + _DAT_11302df98) == 0) {
        lVar16 = *(long *)(lStack_90 + _DAT_11302df98);
        lVar24 = lVar16;
        _objc_retain(lVar16);
        _objc_release(lStack_90);
        if (lVar16 == 0) {
          uVar14 = 1;
        }
        else {
          _objc_release(lVar24);
          uVar14 = 0;
        }
      }
      else {
        lVar24 = *(long *)(lStack_90 + _DAT_11302df98);
        if (lVar24 == 0) {
          plVar15 = (long *)0x0;
          alStack_88[1] = 0;
          alStack_88[2] = 0;
        }
        else {
          FUN_103f130cc();
        }
        alStack_88[0] = lVar24;
        plStack_70 = plVar15;
        _objc_retain(lVar24);
        plVar15 = alStack_88;
        FUN_103f1123c(plVar15);
        uVar14 = (uint)plVar15;
        _objc_release(lStack_90);
        func_0x00010006e7f4(alStack_88);
      }
      uVar2 = 0;
      if (iVar5 == iVar6) {
        uVar2 = iVar3 == iVar4 & uStack_9c & uStack_a0;
      }
      uVar1 = 0;
      if (lVar20 == lVar23) {
        uVar1 = uVar2;
      }
      uVar2 = 0;
      if (lVar21 == lVar18) {
        uVar2 = uVar1;
      }
      uVar1 = 0;
      if (lVar22 == lVar19) {
        uVar1 = uVar2;
      }
      uVar2 = 0;
      if (iVar7 == iVar8) {
        uVar2 = uVar1 & uStack_dc & uStack_e0 & uVar13;
      }
      uVar13 = 0;
      if (iVar9 == iVar10) {
        uVar13 = uVar2 & uStack_f0 & uStack_f4 & (uint)plVar25;
      }
      uVar2 = 0;
      if (iVar11 == iVar12) {
        uVar2 = uVar13 & uVar26 & uVar27;
      }
      if ((uVar2 & uVar28) == 1) {
        uVar17 = uVar17 & uVar14;
        goto LAB_103f130a0;
      }
    }
  }
  uVar17 = 0;
LAB_103f130a0:
  return uVar17 & 1;
}



/* Entry: 103f130cc; end: 103f1312b;  */

void FUN_103f130cc(void)

{
  _objc_opt_self(&PTR_PTR_112964bd8);
  return;
}



/* Entry: 103f1312c; end: 103f13137; -[SCDiscoverFeedStoryIHStoryInfo isEqual:] */

uint FUN_103f1312c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_103f129fc(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103f13138; end: 103f1317f; -[SCDiscoverFeedStoryIHStoryInfo init] */

void FUN_103f13138(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCDiscoverFeedRankingServices/StoryIH.swift",
             0x2b,2,0x131,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f13180);
  (*pcVar1)();
}



/* Entry: 103f13180; end: 103f1326f; -[SCDiscoverFeedStoryIHStoryInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f13180(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302df00));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302df08));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302df30));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302df38));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302df40 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302df50));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302df58));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302df60 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302df70));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302df78));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302df88));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302df90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302df98));
  return;
}



/* Entry: 103f13270; end: 103f1327f; -[SCDiscoverFeedStoryIHImpressionInfo shortImpressionScore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f13270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302dfa0));
  return;
}



/* Entry: 103f13280; end: 103f1328f; -[SCDiscoverFeedStoryIHImpressionInfo longImpressionScore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f13280(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302dfa8));
  return;
}



/* Entry: 103f13290; end: 103f1329f; -[SCDiscoverFeedStoryIHImpressionInfo qualifiedLongImpressionScore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f13290(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302dfb0));
  return;
}



/* Entry: 103f132a0; end: 103f132af; -[SCDiscoverFeedStoryIHImpressionInfo longImpressionCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f132a0(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302dfb8);
}



/* Entry: 103f132b0; end: 103f132bf; -[SCDiscoverFeedStoryIHImpressionInfo qualifiedLongImpressionCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f132b0(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302dfc0);
}



/* Entry: 103f132c0; end: 103f132cf; -[SCDiscoverFeedStoryIHImpressionInfo totalImpressionTimeOnLatestVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f132c0(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302dfc8);
}



/* Entry: 103f132d0; end: 103f132df; -[SCDiscoverFeedStoryIHImpressionInfo totalQualifiedImpressionTimeOnLatestVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f132d0(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302dfd0);
}



/* Entry: 103f132e0; end: 103f132eb; -[SCDiscoverFeedStoryIHImpressionInfo longImpressionThumbnailId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f132e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302dfd8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302dfd8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f132ec; end: 103f132fb; -[SCDiscoverFeedStoryIHImpressionInfo decayedTotalImpressionTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f132ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302dfe0));
  return;
}



/* Entry: 103f132fc; end: 103f1330b; -[SCDiscoverFeedStoryIHImpressionInfo decayedTotalQualifiedImpressionTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f132fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302dfe8));
  return;
}



/* Entry: 103f1330c; end: 103f1331b; -[SCDiscoverFeedStoryIHImpressionInfo latestLongImpressionTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f1330c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302dff0);
}



/* Entry: 103f1331c; end: 103f1332b; -[SCDiscoverFeedStoryIHImpressionInfo totalImpressionTimeAllVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f1331c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302dff8);
}



/* Entry: 103f1332c; end: 103f1359b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1332c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302dfa0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302dfa8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302dfb0) = param_3;
  *(undefined4 *)(unaff_x20 + _DAT_11302dfb8) = param_4;
  *(undefined4 *)(unaff_x20 + _DAT_11302dfc0) = param_5;
  *(undefined4 *)(unaff_x20 + _DAT_11302dfc8) = param_6;
  *(undefined4 *)(unaff_x20 + _DAT_11302dfd0) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302dfd8);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11302dfe0) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11302dfe8) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11302dff0) = param_12;
  *(undefined4 *)(unaff_x20 + _DAT_11302dff8) = param_13;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1359c; end: 103f13677; -[SCDiscoverFeedStoryIHImpressionInfo initWithShortImpressionScore:longImpressionScore:qualifiedLongImpressionScore:longImpressionCount:qualifiedLongImpressionCount:totalImpressionTimeOnLatestVersion:totalQualifiedImpressionTimeOnLatestVersion:longImpressionThumbnailId:decayedTotalImpressionTime:decayedTotalQualifiedImpressionTime:latestLongImpressionTimestamp:totalImpressionTimeAllVersion:] */

void FUN_103f1359c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,long param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined4 param_15)

{
  if (param_11 == 0) {
    param_11 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_12);
  _objc_retain(param_13);
  func_0x000103f13464(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_11,param_2,
                      param_12,param_13,param_14,param_15);
  return;
}



/* Entry: 103f13678; end: 103f136ab; -[SCDiscoverFeedStoryIHImpressionInfo hash] */

undefined8 FUN_103f13678(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f136ac();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103f136ac; end: 103f138e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f136ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (*(long *)(unaff_x20 + _DAT_11302dfa0) == 0) {
    param_1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x000103f11450();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  if (*(long *)(unaff_x20 + _DAT_11302dfa8) == 0) {
    param_1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x000103f11450();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  if (*(long *)(unaff_x20 + _DAT_11302dfb0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x000103f11450();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_11302dfb8));
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_11302dfc0));
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_11302dfc8));
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_11302dfd0));
  if (((undefined8 *)(unaff_x20 + _DAT_11302dfd8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11302dfd8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_11302dfe0) == 0) {
    uVar2 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x000103f11450();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_11302dfe8) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x000103f11450();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_11302dff0));
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_11302dff8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103f138e4; end: 103f13c8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103f138e4(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  long unaff_x20;
  long lVar17;
  long *plVar18;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  long lStack_88;
  long alStack_80 [3];
  long *plStack_68;
  
  lVar17 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_80);
  if (plStack_68 == (long *)0x0) {
    func_0x00010006e7f4(alStack_80);
  }
  else {
    plVar15 = &lStack_88;
    _swift_dynamicCast(plVar15,alStack_80,PTR___sypN_11034f1a8 + 8,lVar17,6);
    if (((ulong)plVar15 & 1) != 0) {
      if (*(long *)(unaff_x20 + _DAT_11302dfa0) == 0) {
        uStack_8c = (uint)(*(long *)(lStack_88 + _DAT_11302dfa0) == 0);
      }
      else {
        lVar17 = *(long *)(lStack_88 + _DAT_11302dfa0);
        if (lVar17 == 0) {
          plVar15 = (long *)0x0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          FUN_103f13c8c();
        }
        alStack_80[0] = lVar17;
        plStack_68 = plVar15;
        _objc_retain(lVar17);
        uStack_8c = (uint)alStack_80;
        FUN_103f114cc();
        plVar15 = alStack_80;
        func_0x00010006e7f4();
      }
      if (*(long *)(unaff_x20 + _DAT_11302dfa8) == 0) {
        uStack_90 = (uint)(*(long *)(lStack_88 + _DAT_11302dfa8) == 0);
      }
      else {
        lVar17 = *(long *)(lStack_88 + _DAT_11302dfa8);
        if (lVar17 == 0) {
          plVar15 = (long *)0x0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          FUN_103f13c8c();
        }
        alStack_80[0] = lVar17;
        plStack_68 = plVar15;
        _objc_retain(lVar17);
        uStack_90 = (uint)alStack_80;
        FUN_103f114cc();
        plVar15 = alStack_80;
        func_0x00010006e7f4();
      }
      if (*(long *)(unaff_x20 + _DAT_11302dfb0) == 0) {
        uStack_94 = (uint)(*(long *)(lStack_88 + _DAT_11302dfb0) == 0);
      }
      else {
        lVar17 = *(long *)(lStack_88 + _DAT_11302dfb0);
        if (lVar17 == 0) {
          plVar15 = (long *)0x0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          FUN_103f13c8c();
        }
        alStack_80[0] = lVar17;
        plStack_68 = plVar15;
        _objc_retain(lVar17);
        uStack_94 = (uint)alStack_80;
        FUN_103f114cc();
        plVar15 = alStack_80;
        func_0x00010006e7f4();
      }
      iVar3 = *(int *)(unaff_x20 + _DAT_11302dfb8);
      iVar4 = *(int *)(lStack_88 + _DAT_11302dfb8);
      iVar5 = *(int *)(unaff_x20 + _DAT_11302dfc0);
      iVar6 = *(int *)(lStack_88 + _DAT_11302dfc0);
      iVar7 = *(int *)(unaff_x20 + _DAT_11302dfc8);
      iVar8 = *(int *)(lStack_88 + _DAT_11302dfc8);
      iVar9 = *(int *)(unaff_x20 + _DAT_11302dfd0);
      iVar10 = *(int *)(lStack_88 + _DAT_11302dfd0);
      lVar17 = ((undefined8 *)(unaff_x20 + _DAT_11302dfd8))[1];
      lVar16 = ((undefined8 *)(lStack_88 + _DAT_11302dfd8))[1];
      plVar18 = (long *)(ulong)(lVar17 == 0 && lVar16 == 0);
      if ((lVar17 != 0) && (lVar16 != 0)) {
        plVar15 = *(long **)(unaff_x20 + _DAT_11302dfd8);
        if ((plVar15 == *(long **)(lStack_88 + _DAT_11302dfd8)) && (lVar17 == lVar16)) {
          plVar18 = (long *)0x1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          plVar18 = plVar15;
        }
      }
      if (*(long *)(unaff_x20 + _DAT_11302dfe0) == 0) {
        uVar13 = (uint)(*(long *)(lStack_88 + _DAT_11302dfe0) == 0);
      }
      else {
        lVar17 = *(long *)(lStack_88 + _DAT_11302dfe0);
        if (lVar17 == 0) {
          plVar15 = (long *)0x0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          FUN_103f13c8c();
        }
        alStack_80[0] = lVar17;
        plStack_68 = plVar15;
        _objc_retain(lVar17);
        plVar15 = alStack_80;
        FUN_103f114cc(plVar15);
        uVar13 = (uint)plVar15;
        plVar15 = alStack_80;
        func_0x00010006e7f4();
      }
      if (*(long *)(unaff_x20 + _DAT_11302dfe8) == 0) {
        uVar14 = (uint)(*(long *)(lStack_88 + _DAT_11302dfe8) == 0);
      }
      else {
        lVar17 = *(long *)(lStack_88 + _DAT_11302dfe8);
        if (lVar17 == 0) {
          plVar15 = (long *)0x0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          FUN_103f13c8c();
        }
        alStack_80[0] = lVar17;
        plStack_68 = plVar15;
        _objc_retain(lVar17);
        plVar15 = alStack_80;
        FUN_103f114cc(plVar15);
        uVar14 = (uint)plVar15;
        func_0x00010006e7f4(alStack_80);
      }
      lVar16 = *(long *)(unaff_x20 + _DAT_11302dff0);
      lVar17 = *(long *)(lStack_88 + _DAT_11302dff0);
      iVar11 = *(int *)(unaff_x20 + _DAT_11302dff8);
      iVar12 = *(int *)(lStack_88 + _DAT_11302dff8);
      _objc_release(lStack_88);
      uVar1 = 0;
      if (iVar5 == iVar6) {
        uVar1 = uStack_8c & uStack_90 & uStack_94 & iVar3 == iVar4;
      }
      uVar2 = 0;
      if (iVar7 == iVar8) {
        uVar2 = uVar1;
      }
      uVar1 = 0;
      if (iVar9 == iVar10) {
        uVar1 = uVar2;
      }
      uVar2 = 0;
      if (lVar16 == lVar17) {
        uVar2 = uVar1 & (uint)plVar18 & uVar13 & uVar14;
      }
      if (iVar11 != iVar12) {
        return 0;
      }
      return uVar2;
    }
  }
  return 0;
}



/* Entry: 103f13c8c; end: 103f13cab;  */

void FUN_103f13c8c(void)

{
  _objc_opt_self(&PTR_PTR_112964ca0);
  return;
}



/* Entry: 103f13cac; end: 103f13cb7; -[SCDiscoverFeedStoryIHImpressionInfo isEqual:] */

uint FUN_103f13cac(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_103f138e4(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103f13cb8; end: 103f13cff; -[SCDiscoverFeedStoryIHImpressionInfo init] */

void FUN_103f13cb8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCDiscoverFeedRankingServices/StoryIH.swift",
             0x2b,2,0x18c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f13d00);
  (*pcVar1)();
}



/* Entry: 103f13d00; end: 103f13d7b; -[SCDiscoverFeedStoryIHImpressionInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f13d00(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302dfa0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302dfa8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302dfb0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302dfd8 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302dfe0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302dfe8));
  return;
}



/* Entry: 103f13d7c; end: 103f13d8b; -[SCDiscoverFeedStoryIHViewInfo shortViewScore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f13d7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302e000));
  return;
}



/* Entry: 103f13d8c; end: 103f13d9b; -[SCDiscoverFeedStoryIHViewInfo longViewScore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f13d8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302e008));
  return;
}



/* Entry: 103f13d9c; end: 103f13da7; -[SCDiscoverFeedStoryIHViewInfo longViewThumbnailId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f13d9c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302e010))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302e010);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f13da8; end: 103f13db7; -[SCDiscoverFeedStoryIHViewInfo totalWatchTimeOnLatestVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f13da8(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302e018);
}



/* Entry: 103f13db8; end: 103f13dc7; -[SCDiscoverFeedStoryIHViewInfo numSnapsViewedFromLatestVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f13db8(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302e020);
}



/* Entry: 103f13dc8; end: 103f13dd7; -[SCDiscoverFeedStoryIHViewInfo numberOfWatches] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f13dc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302e028));
  return;
}



/* Entry: 103f13dd8; end: 103f13de7; -[SCDiscoverFeedStoryIHViewInfo snapCompletionPercent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f13dd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302e030));
  return;
}



/* Entry: 103f13de8; end: 103f13df7; -[SCDiscoverFeedStoryIHViewInfo decayedNumSnapsViewed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f13de8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302e038));
  return;
}



/* Entry: 103f13df8; end: 103f13e07; -[SCDiscoverFeedStoryIHViewInfo decayedTotalWatchTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f13df8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302e040));
  return;
}



/* Entry: 103f13e08; end: 103f13e17; -[SCDiscoverFeedStoryIHViewInfo entranceIntent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f13e08(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302e048);
}



/* Entry: 103f13e18; end: 103f13e27; -[SCDiscoverFeedStoryIHViewInfo exitIntent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f13e18(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302e050);
}



/* Entry: 103f13e28; end: 103f13e37; -[SCDiscoverFeedStoryIHViewInfo latestWatchedVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f13e28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e058);
}



/* Entry: 103f13e38; end: 103f13e47; -[SCDiscoverFeedStoryIHViewInfo sliEntryEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f13e38(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302e060);
}



/* Entry: 103f13e48; end: 103f13e57; -[SCDiscoverFeedStoryIHViewInfo sliExitIntent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f13e48(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302e068);
}



/* Entry: 103f13e58; end: 103f13e67; -[SCDiscoverFeedStoryIHViewInfo totalWatchTimeMsecs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f13e58(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302e070);
}



/* Entry: 103f13e68; end: 103f13e77; -[SCDiscoverFeedStoryIHViewInfo totalWatchTimeAllVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f13e68(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302e078);
}



/* Entry: 103f13e78; end: 103f141a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f13e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                  undefined4 param_17)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [16];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302e000) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302e008) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302e010);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined4 *)(unaff_x20 + _DAT_11302e018) = param_5;
  *(undefined4 *)(unaff_x20 + _DAT_11302e020) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11302e028) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11302e030) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11302e038) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11302e040) = param_10;
  *(undefined4 *)(unaff_x20 + _DAT_11302e048) = param_11;
  *(undefined4 *)(unaff_x20 + _DAT_11302e050) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11302e058) = param_13;
  *(undefined4 *)(unaff_x20 + _DAT_11302e060) = param_14;
  *(undefined4 *)(unaff_x20 + _DAT_11302e068) = param_15;
  *(undefined4 *)(unaff_x20 + _DAT_11302e070) = param_16;
  *(undefined4 *)(unaff_x20 + _DAT_11302e078) = param_17;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f141a4; end: 103f142c7; -[SCDiscoverFeedStoryIHViewInfo initWithShortViewScore:longViewScore:longViewThumbnailId:totalWatchTimeOnLatestVersion:numSnapsViewedFromLatestVersion:numberOfWatches:snapCompletionPercent:decayedNumSnapsViewed:decayedTotalWatchTime:entranceIntent:exitIntent:latestWatchedVersion:sliEntryEvent:sliExitIntent:totalWatchTimeMsecs:totalWatchTimeAllVersion:] */

void FUN_103f141a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
                  undefined4 param_17,undefined4 param_18)

{
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  func_0x000103f14014(param_3,param_4,param_5,param_2,param_6,param_7,param_8,param_9,param_10,
                      param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18);
  return;
}



/* Entry: 103f142c8; end: 103f142fb; -[SCDiscoverFeedStoryIHViewInfo hash] */

undefined8 FUN_103f142c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f142fc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103f142fc; end: 103f145ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f142fc(undefined8 param_1)

{
  undefined8 uVar1;
  double dVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_118 [72];
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  if (*(long *)(unaff_x20 + _DAT_11302e000) == 0) {
    param_1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x000103f11450();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  if (*(long *)(unaff_x20 + _DAT_11302e008) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x000103f11450();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11302e010))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11302e010);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_11302e018));
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_11302e020));
  lVar4 = *(long *)(unaff_x20 + _DAT_11302e028);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_118);
    __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(lVar4 + _DAT_11302ded0));
    dVar2 = 0.0;
    if (*(double *)(lVar4 + _DAT_11302ded8) != 0.0) {
      dVar2 = *(double *)(lVar4 + _DAT_11302ded8);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar2);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar2);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_11302e030);
  if (lVar4 == 0) {
    dVar2 = 0.0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_d0);
    __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(lVar4 + _DAT_11302ded0));
    dVar2 = 0.0;
    if (*(double *)(lVar4 + _DAT_11302ded8) != 0.0) {
      dVar2 = *(double *)(lVar4 + _DAT_11302ded8);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar2);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_11302e038) == 0) {
    dVar2 = 0.0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x000103f11450();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_11302e040) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x000103f11450();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar2);
  }
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_11302e048));
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_11302e050));
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_11302e058));
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_11302e060));
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_11302e068));
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_11302e070));
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_11302e078));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103f145f0; end: 103f14a67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103f145f0(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long *plVar19;
  long lVar20;
  long unaff_x20;
  long lVar21;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  long lStack_88;
  long alStack_80 [3];
  long *plStack_68;
  
  lVar21 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_80);
  if (plStack_68 == (long *)0x0) {
    func_0x00010006e7f4(alStack_80);
  }
  else {
    plVar19 = &lStack_88;
    _swift_dynamicCast(plVar19,alStack_80,PTR___sypN_11034f1a8 + 8,lVar21,6);
    if (((ulong)plVar19 & 1) != 0) {
      if (*(long *)(unaff_x20 + _DAT_11302e000) == 0) {
        uStack_8c = (uint)(*(long *)(lStack_88 + _DAT_11302e000) == 0);
      }
      else {
        lVar21 = *(long *)(lStack_88 + _DAT_11302e000);
        if (lVar21 == 0) {
          plVar19 = (long *)0x0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          FUN_103f13c8c();
        }
        alStack_80[0] = lVar21;
        plStack_68 = plVar19;
        _objc_retain(lVar21);
        uStack_8c = (uint)alStack_80;
        FUN_103f114cc();
        plVar19 = alStack_80;
        func_0x00010006e7f4();
      }
      if (*(long *)(unaff_x20 + _DAT_11302e008) == 0) {
        uStack_90 = (uint)(*(long *)(lStack_88 + _DAT_11302e008) == 0);
      }
      else {
        lVar21 = *(long *)(lStack_88 + _DAT_11302e008);
        if (lVar21 == 0) {
          plVar19 = (long *)0x0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          FUN_103f13c8c();
        }
        alStack_80[0] = lVar21;
        plStack_68 = plVar19;
        _objc_retain(lVar21);
        uStack_90 = (uint)alStack_80;
        FUN_103f114cc();
        plVar19 = alStack_80;
        func_0x00010006e7f4();
      }
      lVar21 = ((undefined8 *)(unaff_x20 + _DAT_11302e010))[1];
      lVar20 = ((undefined8 *)(lStack_88 + _DAT_11302e010))[1];
      if (lVar21 == 0 || lVar20 == 0) {
        uStack_94 = (uint)(lVar21 == 0 && lVar20 == 0);
      }
      else {
        plVar19 = *(long **)(unaff_x20 + _DAT_11302e010);
        if (plVar19 == *(long **)(lStack_88 + _DAT_11302e010) && lVar21 == lVar20) {
          uStack_94 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_94 = (uint)plVar19;
        }
      }
      iVar3 = *(int *)(unaff_x20 + _DAT_11302e018);
      iVar4 = *(int *)(lStack_88 + _DAT_11302e018);
      iVar5 = *(int *)(unaff_x20 + _DAT_11302e020);
      iVar6 = *(int *)(lStack_88 + _DAT_11302e020);
      if (*(long *)(unaff_x20 + _DAT_11302e028) == 0) {
        uStack_a8 = (uint)(*(long *)(lStack_88 + _DAT_11302e028) == 0);
      }
      else {
        lVar21 = *(long *)(lStack_88 + _DAT_11302e028);
        if (lVar21 == 0) {
          plVar19 = (long *)0x0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          func_0x000103f130ec();
        }
        alStack_80[0] = lVar21;
        plStack_68 = plVar19;
        _objc_retain(lVar21);
        uStack_a8 = (uint)alStack_80;
        FUN_103f1173c();
        plVar19 = alStack_80;
        func_0x00010006e7f4();
      }
      if (*(long *)(unaff_x20 + _DAT_11302e030) == 0) {
        uStack_ac = (uint)(*(long *)(lStack_88 + _DAT_11302e030) == 0);
      }
      else {
        lVar21 = *(long *)(lStack_88 + _DAT_11302e030);
        if (lVar21 == 0) {
          plVar19 = (long *)0x0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          func_0x000103f130ec();
        }
        alStack_80[0] = lVar21;
        plStack_68 = plVar19;
        _objc_retain(lVar21);
        uStack_ac = (uint)alStack_80;
        FUN_103f1173c();
        plVar19 = alStack_80;
        func_0x00010006e7f4();
      }
      if (*(long *)(unaff_x20 + _DAT_11302e038) == 0) {
        uStack_b0 = (uint)(*(long *)(lStack_88 + _DAT_11302e038) == 0);
      }
      else {
        lVar21 = *(long *)(lStack_88 + _DAT_11302e038);
        if (lVar21 == 0) {
          plVar19 = (long *)0x0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          FUN_103f13c8c();
        }
        alStack_80[0] = lVar21;
        plStack_68 = plVar19;
        _objc_retain(lVar21);
        uStack_b0 = (uint)alStack_80;
        FUN_103f114cc();
        plVar19 = alStack_80;
        func_0x00010006e7f4();
      }
      if (*(long *)(unaff_x20 + _DAT_11302e040) == 0) {
        uStack_b4 = (uint)(*(long *)(lStack_88 + _DAT_11302e040) == 0);
      }
      else {
        lVar21 = *(long *)(lStack_88 + _DAT_11302e040);
        if (lVar21 == 0) {
          plVar19 = (long *)0x0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          FUN_103f13c8c();
        }
        alStack_80[0] = lVar21;
        plStack_68 = plVar19;
        _objc_retain(lVar21);
        uStack_b4 = (uint)alStack_80;
        FUN_103f114cc();
        func_0x00010006e7f4(alStack_80);
      }
      iVar7 = *(int *)(unaff_x20 + _DAT_11302e048);
      iVar8 = *(int *)(lStack_88 + _DAT_11302e048);
      iVar9 = *(int *)(unaff_x20 + _DAT_11302e050);
      iVar10 = *(int *)(lStack_88 + _DAT_11302e050);
      lVar21 = *(long *)(unaff_x20 + _DAT_11302e058);
      lVar20 = *(long *)(lStack_88 + _DAT_11302e058);
      iVar11 = *(int *)(unaff_x20 + _DAT_11302e060);
      iVar12 = *(int *)(lStack_88 + _DAT_11302e060);
      iVar13 = *(int *)(unaff_x20 + _DAT_11302e068);
      iVar14 = *(int *)(lStack_88 + _DAT_11302e068);
      iVar15 = *(int *)(unaff_x20 + _DAT_11302e070);
      iVar16 = *(int *)(lStack_88 + _DAT_11302e070);
      iVar17 = *(int *)(unaff_x20 + _DAT_11302e078);
      iVar18 = *(int *)(lStack_88 + _DAT_11302e078);
      _objc_release(lStack_88);
      uVar2 = 0;
      if (iVar5 == iVar6) {
        uVar2 = uStack_8c & uStack_90 & uStack_94 & (uint)(iVar3 == iVar4);
      }
      uVar1 = 0;
      if (iVar7 == iVar8) {
        uVar1 = uVar2 & uStack_a8 & uStack_ac & uStack_b0 & uStack_b4;
      }
      uVar2 = 0;
      if (iVar9 == iVar10) {
        uVar2 = uVar1;
      }
      uVar1 = 0;
      if (lVar21 == lVar20) {
        uVar1 = uVar2;
      }
      uVar2 = 0;
      if (iVar11 == iVar12) {
        uVar2 = uVar1;
      }
      uVar1 = 0;
      if (iVar13 == iVar14) {
        uVar1 = uVar2;
      }
      uVar2 = 0;
      if (iVar15 == iVar16) {
        uVar2 = uVar1;
      }
      if (iVar17 != iVar18) {
        return 0;
      }
      return uVar2;
    }
  }
  return 0;
}



/* Entry: 103f14a68; end: 103f14a73; -[SCDiscoverFeedStoryIHViewInfo isEqual:] */

uint FUN_103f14a68(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_103f145f0(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103f14a74; end: 103f14abb; -[SCDiscoverFeedStoryIHViewInfo init] */

void FUN_103f14a74(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCDiscoverFeedRankingServices/StoryIH.swift",
             0x2b,2,0x1fb,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f14abc);
  (*pcVar1)();
}



/* Entry: 103f14abc; end: 103f14abf;  */

void FUN_103f14abc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f14ac0; end: 103f14b4b; -[SCDiscoverFeedStoryIHViewInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f14ac0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302e000));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302e008));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302e010 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302e028));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302e030));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302e038));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302e040));
  return;
}



/* Entry: 103f14b4c; end: 103f14b57; -[SCDiscoverFeedStoryIH identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f14b4c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302e080))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302e080);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f14b58; end: 103f14baf;  */

void FUN_103f14b58(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103f14bb0; end: 103f14bbf; -[SCDiscoverFeedStoryIH storyDedupeFp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f14bb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e088);
}



/* Entry: 103f14bc0; end: 103f14bcf; -[SCDiscoverFeedStoryIH allowanceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f14bc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e090);
}



/* Entry: 103f14bd0; end: 103f14bdf; -[SCDiscoverFeedStoryIH storyInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f14bd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302e098));
  return;
}



/* Entry: 103f14be0; end: 103f14bef; -[SCDiscoverFeedStoryIH impressionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f14be0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302e0a0));
  return;
}


