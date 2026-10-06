/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10431d1ac; end: 10431d26f; -[SCDiscoverFeedSectionRerankingInfo initWithAstVersion:meanStoryScore:storyScoreVariance:ageDecayWeight:shouldReorderLocally:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431d1ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                  long param_5,long param_6,undefined1 param_7)

{
  long *plVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_4;
  _swift_getObjectType();
  if (param_6 == 0) {
    param_6 = 0;
    param_5 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_4 + _DAT_11306e3c8);
  *plVar1 = param_6;
  plVar1[1] = param_5;
  *(undefined4 *)(param_4 + _DAT_11306e3d0) = param_1;
  *(undefined4 *)(param_4 + _DAT_11306e3d8) = param_2;
  *(undefined4 *)(param_4 + _DAT_11306e3e0) = param_3;
  *(undefined1 *)(param_4 + _DAT_11306e3e8) = param_7;
  lStack_60 = param_4;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10431d270; end: 10431d2a3; -[SCDiscoverFeedSectionRerankingInfo hash] */

undefined8 FUN_10431d270(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10431d2a4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10431d2a4; end: 10431d3a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431d2a4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  if (((undefined8 *)(unaff_x20 + _DAT_11306e3c8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306e3c8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  fVar4 = 0.0;
  fVar3 = fVar4;
  if (*(float *)(unaff_x20 + _DAT_11306e3d0) != 0.0) {
    fVar3 = *(float *)(unaff_x20 + _DAT_11306e3d0);
  }
  __ss6HasherV8_combineyys6UInt32VF(fVar3);
  fVar3 = fVar4;
  if (*(float *)(unaff_x20 + _DAT_11306e3d8) != 0.0) {
    fVar3 = *(float *)(unaff_x20 + _DAT_11306e3d8);
  }
  __ss6HasherV8_combineyys6UInt32VF(fVar3);
  if (*(float *)(unaff_x20 + _DAT_11306e3e0) != 0.0) {
    fVar4 = *(float *)(unaff_x20 + _DAT_11306e3e0);
  }
  __ss6HasherV8_combineyys6UInt32VF(fVar4);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306e3e8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10431d3a4; end: 10431d50f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10431d3a4(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long unaff_x20;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar4 = &lStack_88;
    _swift_dynamicCast(plVar4,auStack_80,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar4 & 1) != 0) {
      lVar5 = ((long *)(unaff_x20 + _DAT_11306e3c8))[1];
      lVar6 = ((long *)(lStack_88 + _DAT_11306e3c8))[1];
      uVar8 = (uint)(lVar5 == 0 && lVar6 == 0);
      if (lVar5 != 0 && lVar6 != 0) {
        lVar7 = *(long *)(unaff_x20 + _DAT_11306e3c8);
        if (lVar7 == *(long *)(lStack_88 + _DAT_11306e3c8) && lVar5 == lVar6) {
          uVar8 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (lVar7);
          uVar8 = (uint)lVar7;
        }
      }
      fVar9 = *(float *)(unaff_x20 + _DAT_11306e3d0);
      fVar10 = *(float *)(lStack_88 + _DAT_11306e3d0);
      fVar11 = *(float *)(unaff_x20 + _DAT_11306e3d8);
      fVar12 = *(float *)(lStack_88 + _DAT_11306e3d8);
      fVar13 = *(float *)(unaff_x20 + _DAT_11306e3e0);
      fVar14 = *(float *)(lStack_88 + _DAT_11306e3e0);
      bVar2 = *(byte *)(unaff_x20 + _DAT_11306e3e8);
      bVar3 = *(byte *)(lStack_88 + _DAT_11306e3e8);
      _objc_release();
      uVar1 = 0;
      if (fVar11 == fVar12) {
        uVar1 = uVar8 & fVar9 == fVar10;
      }
      uVar8 = 0;
      if (fVar13 == fVar14) {
        uVar8 = uVar1;
      }
      return uVar8 & ((bVar2 ^ bVar3) ^ 1);
    }
  }
  return 0;
}



/* Entry: 10431d510; end: 10431d51b; -[SCDiscoverFeedSectionRerankingInfo isEqual:] */

uint FUN_10431d510(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10431d3a4(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10431d51c; end: 10431d563; -[SCDiscoverFeedSectionRerankingInfo init] */

void FUN_10431d51c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCDiscoverFeedSectionServices/Section.swift",
             0x2b,2,0x11f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10431d564);
  (*pcVar1)();
}



/* Entry: 10431d564; end: 10431d577; -[SCDiscoverFeedSectionRerankingInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431d564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306e3c8 + 8))
  ;
  return;
}



/* Entry: 10431d578; end: 10431d587; -[SCDiscoverFeedStoryIdentifier storyDedupeFp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10431d578(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306e3f0);
}



/* Entry: 10431d588; end: 10431d593; -[SCDiscoverFeedStoryIdentifier compositeStoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431d588(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306e3f8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306e3f8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10431d594; end: 10431d5ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431d594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306e3f0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306e3f8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10431d600; end: 10431d683; -[SCDiscoverFeedStoryIdentifier initWithStoryDedupeFp:compositeStoryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431d600(long param_1,long param_2,undefined8 param_3,long param_4)

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
  *(undefined8 *)(param_1 + _DAT_11306e3f0) = param_3;
  plVar1 = (long *)(param_1 + _DAT_11306e3f8);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10431d684; end: 10431d743; -[SCDiscoverFeedStoryIdentifier hash] */

undefined8 FUN_10431d684(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010431d6b8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10431d744; end: 10431d863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10431d744(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
    return 0;
  }
  plVar1 = &lStack_58;
  _swift_dynamicCast(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
  if (((ulong)plVar1 & 1) == 0) {
    return 0;
  }
  lVar6 = *(long *)(unaff_x20 + _DAT_11306e3f0);
  lVar7 = *(long *)(lStack_58 + _DAT_11306e3f0);
  lVar3 = ((long *)(unaff_x20 + _DAT_11306e3f8))[1];
  lVar5 = ((long *)(lStack_58 + _DAT_11306e3f8))[1];
  if (lVar3 == 0) {
    _swift_bridgeObjectRetain(lVar5);
    _objc_release(lStack_58);
    if (lVar5 != 0) {
      _swift_bridgeObjectRelease(lVar5);
      uVar4 = 0;
      goto LAB_10431d844;
    }
LAB_10431d840:
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    if (lVar5 != 0) {
      lVar2 = *(long *)(unaff_x20 + _DAT_11306e3f8);
      if (lVar2 == *(long *)(lStack_58 + _DAT_11306e3f8) && lVar3 == lVar5) {
        _objc_release(lStack_58);
        goto LAB_10431d840;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar4 = (uint)lVar2;
    }
    _objc_release(lStack_58);
  }
LAB_10431d844:
  return lVar6 == lVar7 & uVar4;
}



/* Entry: 10431d864; end: 10431d86f; -[SCDiscoverFeedStoryIdentifier isEqual:] */

uint FUN_10431d864(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10431d744(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10431d870; end: 10431d8b7; -[SCDiscoverFeedStoryIdentifier init] */

void FUN_10431d870(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCDiscoverFeedSectionServices/Section.swift",
             0x2b,2,0x148,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10431d8b8);
  (*pcVar1)();
}



/* Entry: 10431d8b8; end: 10431d8bb;  */

void FUN_10431d8b8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10431d8bc; end: 10431d8cf; -[SCDiscoverFeedStoryIdentifier .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431d8bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306e3f8 + 8))
  ;
  return;
}



/* Entry: 10431d8d0; end: 10431d8df; -[SCDiscoverFeedSection feedType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10431d8d0(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11306e400);
}



/* Entry: 10431d8e0; end: 10431d937; -[SCDiscoverFeedSection storyIdentifiers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431d8e0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306e408);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_10431e998();
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



/* Entry: 10431d938; end: 10431d943; -[SCDiscoverFeedSection displayText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431d938(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306e410))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306e410);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10431d944; end: 10431d94f; -[SCDiscoverFeedSection loggingKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431d944(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306e418))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306e418);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10431d950; end: 10431d9a7;  */

void FUN_10431d950(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10431d9a8; end: 10431d9b3; -[SCDiscoverFeedSection streamToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431d9a8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_11306e420))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11306e420);
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



/* Entry: 10431d9b4; end: 10431d9c3; -[SCDiscoverFeedSection fetchedDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10431d9b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306e428);
}



/* Entry: 10431d9c4; end: 10431d9d3; -[SCDiscoverFeedSection hasMoreStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10431d9c4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306e430);
}



/* Entry: 10431d9d4; end: 10431d9e3; -[SCDiscoverFeedSection layoutConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431d9d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306e438));
  return;
}



/* Entry: 10431d9e4; end: 10431d9f3; -[SCDiscoverFeedSection rerankingInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431d9e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306e440));
  return;
}



/* Entry: 10431d9f4; end: 10431d9ff; -[SCDiscoverFeedSection metaStreamToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431d9f4(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_11306e448))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11306e448);
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



/* Entry: 10431da00; end: 10431da0f; -[SCDiscoverFeedSection hasMoreFriendStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10431da00(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306e450);
}



/* Entry: 10431da10; end: 10431da1b; -[SCDiscoverFeedSection frontierToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431da10(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_11306e458))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11306e458);
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



/* Entry: 10431da1c; end: 10431da8b;  */

void FUN_10431da1c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10431da8c; end: 10431dd6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431da8c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
                  undefined4 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined4 *)(unaff_x20 + _DAT_11306e400) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306e408) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306e410);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306e418);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306e420);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11306e428) = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_11306e430) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11306e438) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11306e440) = param_13;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306e448);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  *(undefined1 *)(unaff_x20 + _DAT_11306e450) = param_16;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306e458);
  *puVar1 = param_18;
  puVar1[1] = param_19;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10431dd6c; end: 10431df17; -[SCDiscoverFeedSection initWithFeedType:storyIdentifiers:displayText:loggingKey:streamToken:fetchedDate:hasMoreStories:layoutConfiguration:rerankingInfo:metaStreamToken:hasMoreFriendStories:frontierToken:] */

void FUN_10431dd6c(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  long param_5,long param_6,long param_7,undefined8 param_8,undefined1 param_9)

{
  long lVar1;
  long in_stack_00000018;
  long in_stack_00000028;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  
  if (param_4 == 0) {
    lStack_88 = 0;
  }
  else {
    FUN_10431e998();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    param_2 = param_1;
    lStack_88 = param_4;
  }
  if (param_5 == 0) {
    uStack_98 = 0;
    lStack_90 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_98 = param_2;
    lStack_90 = param_5;
  }
  if (param_6 == 0) {
    uStack_a8 = 0;
    lStack_a0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_a8 = param_2;
    lStack_a0 = param_6;
  }
  lVar1 = param_7;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  if (lVar1 == 0) {
    param_7 = 0;
    param_2 = 0xf000000000000000;
  }
  else {
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_7);
    _objc_release(lVar1);
  }
  if (in_stack_00000018 != 0) {
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(in_stack_00000018);
  }
  if (in_stack_00000028 != 0) {
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(in_stack_00000028);
  }
  func_0x00010431dbfc(param_3,lStack_88,lStack_90,uStack_98,lStack_a0,uStack_a8,param_7,param_2,
                      param_8,param_9);
  return;
}



/* Entry: 10431df18; end: 10431df4b; -[SCDiscoverFeedSection hash] */

undefined8 FUN_10431df18(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10431df4c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10431df4c; end: 10431e20b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431df4c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = (ulong)*(uint *)(unaff_x20 + _DAT_11306e400);
  __ss6HasherV8_combineyys6UInt32VF(uVar1);
  lVar4 = *(long *)(unaff_x20 + _DAT_11306e408);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    FUN_10431e998();
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar1);
    lVar5 = lVar4;
    func_0x00010bfde980();
    _objc_release(lVar4);
  }
  __ss6HasherV8_combineyySuF(lVar5);
  if (((undefined8 *)(unaff_x20 + _DAT_11306e410))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306e410);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_11306e418))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306e418);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_11306e420))[1] >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306e420);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_11306e428));
  uVar1 = (ulong)*(byte *)(unaff_x20 + _DAT_11306e430);
  __ss6HasherV8_combineyys5UInt8VF(uVar1);
  if (*(long *)(unaff_x20 + _DAT_11306e438) == 0) {
    uVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_10431cd08();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_11306e440) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_10431d2a4();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_11306e448))[1] >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306e448);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306e450));
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_11306e458))[1] >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306e458);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10431e20c; end: 10431e843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10431e20c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  uint uVar18;
  long lVar19;
  long unaff_x20;
  long lVar20;
  uint uVar21;
  uint uStack_bc;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_94;
  long lStack_88;
  long alStack_80 [3];
  long *plStack_68;
  
  lVar19 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_80);
  if (plStack_68 == (long *)0x0) {
    func_0x00010006e7f4(alStack_80);
  }
  else {
    plVar16 = &lStack_88;
    _swift_dynamicCast(plVar16,alStack_80,PTR___sypN_11034f1a8 + 8,lVar19,6);
    if (((ulong)plVar16 & 1) != 0) {
      iVar5 = *(int *)(unaff_x20 + _DAT_11306e400);
      iVar6 = *(int *)(lStack_88 + _DAT_11306e400);
      lVar20 = *(long *)(unaff_x20 + _DAT_11306e408);
      lVar19 = *(long *)(lStack_88 + _DAT_11306e408);
      if (lVar20 == 0 || lVar19 == 0) {
        uStack_94 = (uint)(lVar20 == 0 && lVar19 == 0);
      }
      else {
        _swift_bridgeObjectRetain(lVar19);
        lVar13 = lVar20;
        _swift_bridgeObjectRetain();
        uStack_94 = (uint)lVar13;
        FUN_10431bf9c();
        _swift_bridgeObjectRelease(lVar20);
        _swift_bridgeObjectRelease(lVar19);
      }
      lVar19 = ((long *)(unaff_x20 + _DAT_11306e410))[1];
      lVar20 = ((long *)(lStack_88 + _DAT_11306e410))[1];
      if (lVar19 == 0 || lVar20 == 0) {
        uStack_98 = (uint)(lVar19 == 0 && lVar20 == 0);
      }
      else {
        lVar13 = *(long *)(unaff_x20 + _DAT_11306e410);
        if (lVar13 == *(long *)(lStack_88 + _DAT_11306e410) && lVar19 == lVar20) {
          uStack_98 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_98 = (uint)lVar13;
        }
      }
      lVar19 = ((long *)(unaff_x20 + _DAT_11306e418))[1];
      lVar20 = ((long *)(lStack_88 + _DAT_11306e418))[1];
      uVar11 = (uint)(lVar19 == 0 && lVar20 == 0);
      if ((lVar19 != 0) && (lVar20 != 0)) {
        lVar13 = *(long *)(unaff_x20 + _DAT_11306e418);
        if ((lVar13 == *(long *)(lStack_88 + _DAT_11306e418)) && (lVar19 == lVar20)) {
          uVar11 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar11 = (uint)lVar13;
        }
      }
      plVar14 = *(long **)(lStack_88 + _DAT_11306e420);
      uVar3 = ((long *)(lStack_88 + _DAT_11306e420))[1];
      plVar16 = *(long **)(unaff_x20 + _DAT_11306e420);
      uVar4 = ((long *)(unaff_x20 + _DAT_11306e420))[1];
      if (uVar4 >> 0x3c < 0xf) {
        if (0xe < uVar3 >> 0x3c) goto LAB_10431e420;
        func_0x000100de78a0(plVar14,uVar3);
        func_0x000100de78a0(plVar14,uVar3);
        func_0x000100de78a0(plVar16,uVar4);
        plVar15 = plVar16;
        func_0x000100e25fcc(plVar16,uVar4,plVar14,uVar3);
        uStack_a0 = (uint)plVar15;
        func_0x0001000b44c0(plVar14,uVar3);
        func_0x0001000b44c0(plVar14,uVar3);
        func_0x0001000b44c0(plVar16,uVar4);
      }
      else if (uVar3 >> 0x3c < 0xf) {
LAB_10431e420:
        func_0x000100de78a0(plVar14,uVar3);
        func_0x000100de78a0(plVar16,uVar4);
        func_0x0001000b44c0(plVar16,uVar4);
        func_0x0001000b44c0(plVar14,uVar3);
        uStack_a0 = 0;
        plVar16 = plVar14;
      }
      else {
        func_0x000100de78a0(plVar14,uVar3);
        func_0x000100de78a0(plVar16,uVar4);
        func_0x0001000b44c0(plVar16,uVar4);
        uStack_a0 = 1;
      }
      lVar20 = *(long *)(unaff_x20 + _DAT_11306e428);
      lVar19 = *(long *)(lStack_88 + _DAT_11306e428);
      bVar7 = *(byte *)(unaff_x20 + _DAT_11306e430);
      bVar8 = *(byte *)(lStack_88 + _DAT_11306e430);
      if (*(long *)(unaff_x20 + _DAT_11306e438) == 0) {
        uStack_bc = (uint)(*(long *)(lStack_88 + _DAT_11306e438) == 0);
      }
      else {
        lVar13 = *(long *)(lStack_88 + _DAT_11306e438);
        if (lVar13 == 0) {
          plVar16 = (long *)0x0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          func_0x00010431e9d8();
        }
        alStack_80[0] = lVar13;
        plStack_68 = plVar16;
        _objc_retain(lVar13);
        uStack_bc = 0;
        FUN_10431ce2c();
        plVar16 = alStack_80;
        func_0x00010006e7f4();
      }
      if (*(long *)(unaff_x20 + _DAT_11306e440) == 0) {
        uVar12 = (uint)(*(long *)(lStack_88 + _DAT_11306e440) == 0);
      }
      else {
        lVar13 = *(long *)(lStack_88 + _DAT_11306e440);
        if (lVar13 == 0) {
          plVar16 = (long *)0x0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          func_0x00010431e9b8();
        }
        alStack_80[0] = lVar13;
        plStack_68 = plVar16;
        _objc_retain(lVar13);
        plVar16 = alStack_80;
        FUN_10431d3a4(plVar16);
        uVar12 = (uint)plVar16;
        func_0x00010006e7f4(alStack_80);
      }
      uVar1 = *(undefined8 *)(lStack_88 + _DAT_11306e448);
      uVar3 = ((undefined8 *)(lStack_88 + _DAT_11306e448))[1];
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306e448);
      uVar4 = ((undefined8 *)(unaff_x20 + _DAT_11306e448))[1];
      if (uVar4 >> 0x3c < 0xf) {
        if (0xe < uVar3 >> 0x3c) goto LAB_10431e604;
        func_0x000100de78a0(uVar1,uVar3);
        func_0x000100de78a0(uVar1,uVar3);
        func_0x000100de78a0(uVar2,uVar4);
        uVar17 = uVar2;
        func_0x000100e25fcc(uVar2,uVar4,uVar1,uVar3);
        func_0x0001000b44c0(uVar1,uVar3);
        func_0x0001000b44c0(uVar1,uVar3);
        func_0x0001000b44c0(uVar2,uVar4);
        uVar21 = (uint)uVar17 ^ 1;
      }
      else if (uVar3 >> 0x3c < 0xf) {
LAB_10431e604:
        func_0x000100de78a0(uVar1,uVar3);
        func_0x000100de78a0(uVar2,uVar4);
        func_0x0001000b44c0(uVar2,uVar4);
        func_0x0001000b44c0(uVar1,uVar3);
        uVar21 = 1;
      }
      else {
        func_0x000100de78a0(uVar1,uVar3);
        func_0x000100de78a0(uVar2,uVar4);
        func_0x0001000b44c0(uVar2,uVar4);
        uVar21 = 0;
      }
      bVar9 = *(byte *)(unaff_x20 + _DAT_11306e450);
      bVar10 = *(byte *)(lStack_88 + _DAT_11306e450);
      uVar1 = *(undefined8 *)(lStack_88 + _DAT_11306e458);
      uVar3 = ((undefined8 *)(lStack_88 + _DAT_11306e458))[1];
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306e458);
      uVar4 = ((undefined8 *)(unaff_x20 + _DAT_11306e458))[1];
      if (uVar4 >> 0x3c < 0xf) {
        func_0x000100de78a0(uVar1,uVar3);
        if (0xe < uVar3 >> 0x3c) {
          func_0x000100de78a0(uVar2,uVar4);
          _objc_release(lStack_88);
          goto LAB_10431e738;
        }
        func_0x000100de78a0(uVar1,uVar3);
        func_0x000100de78a0(uVar2,uVar4);
        uVar17 = uVar2;
        func_0x000100e25fcc(uVar2,uVar4,uVar1,uVar3);
        uVar18 = (uint)uVar17;
        func_0x0001000b44c0(uVar1,uVar3);
        _objc_release(lStack_88);
        func_0x0001000b44c0(uVar1,uVar3);
        func_0x0001000b44c0(uVar2,uVar4);
      }
      else {
        func_0x000100de78a0(uVar1,uVar3);
        func_0x000100de78a0(uVar2,uVar4);
        _objc_release(lStack_88);
        if (uVar3 >> 0x3c < 0xf) {
LAB_10431e738:
          func_0x0001000b44c0(uVar2,uVar4);
          func_0x0001000b44c0(uVar1,uVar3);
          uVar18 = 0;
        }
        else {
          func_0x0001000b44c0(uVar2,uVar4);
          uVar18 = 1;
        }
      }
      uVar11 = iVar5 == iVar6 & uStack_94 & uStack_98 & uVar11 & uStack_a0 ^ 1;
      if (lVar20 != lVar19) {
        uVar11 = 1;
      }
      uVar18 = ((uVar11 | (uint)(bVar7 ^ bVar8) | uStack_bc ^ 1 | uVar12 ^ 1 | uVar21 |
                          (uint)(bVar9 ^ bVar10)) ^ 1) & uVar18;
      goto LAB_10431e820;
    }
  }
  uVar18 = 0;
LAB_10431e820:
  return uVar18 & 1;
}



/* Entry: 10431e844; end: 10431e84f; -[SCDiscoverFeedSection isEqual:] */

uint FUN_10431e844(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10431e20c(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10431e850; end: 10431e8cb; -[SCDiscoverFeedSection init] */

void FUN_10431e850(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCDiscoverFeedSectionServices/Section.swift",
             0x2b,2,0x1a8,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10431e898);
  (*pcVar1)();
}



/* Entry: 10431e8cc; end: 10431e977; -[SCDiscoverFeedSection .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010431e924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010431e958: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010431e928) */
/* WARNING: Removing unreachable block (ram,0x00010431e95c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431e8cc(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e408));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e410 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e418 + 8));
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306e420))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_11306e420));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10431e978; end: 10431e997;  */

undefined1  [16] FUN_10431e978(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 10431e998; end: 10431e9f7;  */

void FUN_10431e998(void)

{
  _objc_opt_self(&PTR_PTR_11299bae0);
  return;
}



/* Entry: 10431e9f8; end: 10431e9fb;  */

void FUN_10431e9f8(void)

{
  undefined *puVar1;
  
  if (puRam000000011306e460 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcea898;
  _swift_getWitnessTable(&UNK_10dcea898,&UNK_110759998);
  puRam000000011306e460 = puVar1;
  return;
}



/* Entry: 10431e9fc; end: 10431ea3b;  */

void FUN_10431e9fc(void)

{
  undefined *puVar1;
  
  if (puRam000000011306e460 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcea898;
  _swift_getWitnessTable(&UNK_10dcea898,&UNK_110759998);
  puRam000000011306e460 = puVar1;
  return;
}



/* Entry: 10431ea3c; end: 10431ea3f;  */

void FUN_10431ea3c(void)

{
  undefined *puVar1;
  
  if (puRam000000011306e468 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcea938;
  _swift_getWitnessTable(&UNK_10dcea938,&UNK_1107599b8);
  puRam000000011306e468 = puVar1;
  return;
}



/* Entry: 10431ea40; end: 10431ea7f;  */

void FUN_10431ea40(void)

{
  undefined *puVar1;
  
  if (puRam000000011306e468 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcea938;
  _swift_getWitnessTable(&UNK_10dcea938,&UNK_1107599b8);
  puRam000000011306e468 = puVar1;
  return;
}



/* Entry: 10431ea80; end: 10431ea83;  */

void FUN_10431ea80(void)

{
  undefined *puVar1;
  
  if (puRam000000011306e470 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcea9d8;
  _swift_getWitnessTable(&UNK_10dcea9d8,&UNK_1107599d8);
  puRam000000011306e470 = puVar1;
  return;
}



/* Entry: 10431ea84; end: 10431eac3;  */

void FUN_10431ea84(void)

{
  undefined *puVar1;
  
  if (puRam000000011306e470 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcea9d8;
  _swift_getWitnessTable(&UNK_10dcea9d8,&UNK_1107599d8);
  puRam000000011306e470 = puVar1;
  return;
}



/* Entry: 10431eac4; end: 10431eac7;  */

void FUN_10431eac4(void)

{
  undefined *puVar1;
  
  if (puRam000000011306e478 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dceaaf0;
  _swift_getWitnessTable(&UNK_10dceaaf0,&UNK_1107599f8);
  puRam000000011306e478 = puVar1;
  return;
}



/* Entry: 10431eac8; end: 10431eb07;  */

void FUN_10431eac8(void)

{
  undefined *puVar1;
  
  if (puRam000000011306e478 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dceaaf0;
  _swift_getWitnessTable(&UNK_10dceaaf0,&UNK_1107599f8);
  puRam000000011306e478 = puVar1;
  return;
}



/* Entry: 10431eb08; end: 10431eb37;  */

undefined1  [16] FUN_10431eb08(void)

{
  return ZEXT816(0x110759998);
}



/* Entry: 10431eb38; end: 10431eb77;  */

void FUN_10431eb38(void)

{
  _objc_opt_self(&PTR_PTR_11299b6c0);
  return;
}



/* Entry: 10431eb78; end: 10431eb87;  */

undefined1  [16] FUN_10431eb78(void)

{
  return ZEXT816(0x1107599f8);
}



/* Entry: 10431eb88; end: 10431ebc7;  */

void FUN_10431eb88(void)

{
  _objc_opt_self(&PTR_PTR_11299b840);
  return;
}



/* Entry: 10431ebc8; end: 10431ebf7;  */

void FUN_10431ebc8(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010431ebd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10431ebf8; end: 10431ebfb; -[SCDiscoverFeedSectionLayoutStyle verticalSectionStyleVerticalSectionStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431ebf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306e380));
  return;
}



/* Entry: 10431ebfc; end: 10431ebff; -[SCDiscoverFeedSectionLayoutStyle asVerticalSectionStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431ebfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306e380));
  return;
}



/* Entry: 10431ec00; end: 10431ec03; -[SCDiscoverFeedSectionLayoutStyle asHorizontalSectionStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431ec00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306e388));
  return;
}



/* Entry: 10431ec04; end: 10431ec2f; -[SCDiscoverFeedSectionLayoutStyle horizontalSectionStyleHorizontalSectionStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431ec04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306e388));
  return;
}



/* Entry: 10431ec30; end: 10431ec33; -[SCDiscoverFeedVerticalSectionStyle copyWithZone:] */

void FUN_10431ec30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10431ec34; end: 10431ec37; -[SCDiscoverFeedHorizontalSectionStyle copyWithZone:] */

void FUN_10431ec34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10431ec38; end: 10431ec3b; -[SCDiscoverFeedSectionLayoutStyle copyWithZone:] */

void FUN_10431ec38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10431ec3c; end: 10431ec3f; -[SCDiscoverFeedSectionLayout copyWithZone:] */

void FUN_10431ec3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10431ec40; end: 10431ec43; -[SCDiscoverFeedSectionRerankingInfo copyWithZone:] */

void FUN_10431ec40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10431ec44; end: 10431ec47; -[SCDiscoverFeedStoryIdentifier copyWithZone:] */

void FUN_10431ec44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10431ec48; end: 10431ec6b; -[SCDiscoverFeedSection copyWithZone:] */

void FUN_10431ec48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10431ec6c; end: 10431f723;  */

long FUN_10431ec6c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10431f724; end: 10431f733; -[_TtC29SCContentProductPlaybackScope29SCContentProductPlaybackScope baseConfigurations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431f724(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306e598));
  return;
}



/* Entry: 10431f734; end: 10431f743; -[_TtC29SCContentProductPlaybackScope29SCContentProductPlaybackScope operaConfigurations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431f734(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306e5a0));
  return;
}



/* Entry: 10431f744; end: 10431f753; -[_TtC29SCContentProductPlaybackScope29SCContentProductPlaybackScope playbackMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10431f744(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306e5a8);
}



/* Entry: 10431f754; end: 10431f79b; -[_TtC29SCContentProductPlaybackScope29SCContentProductPlaybackScope deckContainerFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431f754(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306e5b0;
  _swift_beginAccess(param_1 + _DAT_11306e5b0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10431f79c; end: 10431f7f3; -[_TtC29SCContentProductPlaybackScope29SCContentProductPlaybackScope setDeckContainerFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431f79c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306e5b0;
  _swift_beginAccess(param_1 + _DAT_11306e5b0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10431f7f4; end: 10431f803; -[_TtC29SCContentProductPlaybackScope29SCContentProductPlaybackScope loggingInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431f7f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306e5b8));
  return;
}



/* Entry: 10431f804; end: 10431f813; -[_TtC29SCContentProductPlaybackScope29SCContentProductPlaybackScope viewLocationSpecificConfigurations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431f804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306e5c0));
  return;
}



/* Entry: 10431f814; end: 10431f83f; -[_TtC29SCContentProductPlaybackScope29SCContentProductPlaybackScope init] */

void FUN_10431f814(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCContentProductPlaybackScope.SCContentProductPlaybackScope",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10431f840);
  (*pcVar1)();
}



/* Entry: 10431f840; end: 10431f8cb; -[_TtC29SCContentProductPlaybackScope29SCContentProductPlaybackScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431f840(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306e598));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306e5a0));
  func_0x00010431f8a8(param_1 + _DAT_11306e5b0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306e5b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306e5c0));
  return;
}



/* Entry: 10431f8cc; end: 10431f937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431f8cc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010037842c();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306e5d0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10431f938; end: 10431f93f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431f938(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010037842c();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306e5d0) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10431f940; end: 10431f98b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431f940(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306e5d0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10431f98c; end: 10431fadb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10431f98c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = param_1;
  func_0x0001003758d0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11306e5b0;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11306e5b0,0);
  *(long *)(lVar4 + _DAT_11306e598) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11306e5a0) = param_2;
  *(undefined8 *)(lVar4 + _DAT_11306e5a8) = param_4;
  _swift_beginAccess(lVar4 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_3);
  *(undefined8 *)(lVar4 + _DAT_11306e5b8) = param_6;
  *(undefined8 *)(lVar4 + _DAT_11306e5c0) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_88 = lVar4;
  lStack_80 = lVar3;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_6);
  _objc_retain(param_5);
  plVar5 = &lStack_88;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_a0[0] = plVar5;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar5;
}



/* Entry: 10431fadc; end: 10431fbc7; -[_TtC29SCContentProductPlaybackScope37SCContentProductPlaybackScopeServices buildWithBaseConfigurations:operaConfigurations:deckContainerFactory:playbackMode:viewLocationSpecificConfigurations:loggingInfo:] */

void FUN_10431fadc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  uVar1 = param_7;
  _objc_retain(param_7);
  uVar2 = param_8;
  _objc_retain(param_8);
  _objc_retain(param_1);
  uVar3 = param_3;
  FUN_10431f98c(param_3,param_4,param_5,param_6,param_7,param_8);
  _objc_release(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10431fbc8; end: 10431fbf3; -[_TtC29SCContentProductPlaybackScope37SCContentProductPlaybackScopeServices init] */

void FUN_10431fbc8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCContentProductPlaybackScope.SCContentProductPlaybackScopeServices",0x43,"init()",6,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10431fbf4);
  (*pcVar1)();
}



/* Entry: 10431fbf4; end: 10431fbf7;  */

void FUN_10431fbf4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10431fbf8; end: 10431fc2b;  */

void FUN_10431fbf8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10431fc2c; end: 10431fc67; -[_TtC29SCContentProductPlaybackScope37SCContentProductPlaybackScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431fc2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306e5d0));
  return;
}



/* Entry: 10431fc68; end: 10431fca7;  */

void FUN_10431fc68(void)

{
  undefined *puVar1;
  
  if (puRam000000011306e628 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dceae80;
  _swift_getWitnessTable(&UNK_10dceae80,&UNK_110759c98);
  puRam000000011306e628 = puVar1;
  return;
}



/* Entry: 10431fca8; end: 10431fd53;  */

void FUN_10431fca8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10431fd54; end: 10431fd8b;  */

void FUN_10431fd54(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 10431fd8c; end: 10431fd97; -[SCContentProductOperaConfigurations baseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431fd8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306e630;
  _swift_beginAccess(param_1 + _DAT_11306e630,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10431fd98; end: 10431fda3; -[SCContentProductOperaConfigurations setBaseView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431fd98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306e630;
  _swift_beginAccess(param_1 + _DAT_11306e630,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10431fda4; end: 10431fdaf; -[SCContentProductOperaConfigurations presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431fda4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306e638;
  _swift_beginAccess(param_1 + _DAT_11306e638,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10431fdb0; end: 10431fdbb; -[SCContentProductOperaConfigurations setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431fdb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306e638;
  _swift_beginAccess(param_1 + _DAT_11306e638,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10431fdbc; end: 10431fdcb; -[SCContentProductOperaConfigurations navigationStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10431fdbc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306e640);
}



/* Entry: 10431fdcc; end: 10431fdd7; -[SCContentProductOperaConfigurations playbackDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431fdcc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306e648;
  _swift_beginAccess(param_1 + _DAT_11306e648,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10431fdd8; end: 10431fde3; -[SCContentProductOperaConfigurations setPlaybackDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431fdd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306e648;
  _swift_beginAccess(param_1 + _DAT_11306e648,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10431fde4; end: 10431fdef; -[SCContentProductOperaConfigurations contextPluginDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431fde4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306e650;
  _swift_beginAccess(param_1 + _DAT_11306e650,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10431fdf0; end: 10431fdfb; -[SCContentProductOperaConfigurations setContextPluginDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431fdf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306e650;
  _swift_beginAccess(param_1 + _DAT_11306e650,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10431fdfc; end: 10431fe0b; -[SCContentProductOperaConfigurations transitionMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10431fdfc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306e658);
}



/* Entry: 10431fe0c; end: 10431fe1b; -[SCContentProductOperaConfigurations composerOperaEventProviders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431fe0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306e660));
  return;
}



/* Entry: 10431fe1c; end: 10431fe27; -[SCContentProductOperaConfigurations contentRemovalDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431fe1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306e668;
  _swift_beginAccess(param_1 + _DAT_11306e668,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10431fe28; end: 10431fe6b;  */

void FUN_10431fe28(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


