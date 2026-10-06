/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103fe6eb8; end: 103fe6f43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe6eb8(undefined1 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113043db0) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113043db8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113043dc0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113043dc8) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe6f44; end: 103fe6fcf; -[SCAdMidRollStoryAdsConfigValue initWithEnablePublisherStories:enableShows:expandButtonIndex:additionalNumberOfSnapsWithPreparedMedia:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe6f44(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_113043db0) = param_3;
  *(undefined1 *)(param_1 + _DAT_113043db8) = param_4;
  *(undefined8 *)(param_1 + _DAT_113043dc0) = param_5;
  *(undefined8 *)(param_1 + _DAT_113043dc8) = param_6;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe6fd0; end: 103fe7057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe6fd0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(byte *)(unaff_x20 + _DAT_113043db0) = (byte)param_1 & 1;
  *(byte *)(unaff_x20 + _DAT_113043db8) = (byte)((uint)param_1 >> 8) & 1;
  *(undefined8 *)(unaff_x20 + _DAT_113043dc0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113043dc8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe7058; end: 103fe70fb; -[SCAdMidRollStoryAdsConfigValue hash] */

void FUN_103fe7058(void)

{
  func_0x000103fe7078();
  return;
}



/* Entry: 103fe70fc; end: 103fe71f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_103fe70fc(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar5 = &lStack_78;
    _swift_dynamicCast(plVar5,auStack_70,PTR___sypN_11034f1a8 + 8,lVar6,6);
    if (((ulong)plVar5 & 1) != 0) {
      bVar1 = *(byte *)(unaff_x20 + _DAT_113043db0);
      bVar2 = *(byte *)(lStack_78 + _DAT_113043db0);
      bVar3 = *(byte *)(unaff_x20 + _DAT_113043db8);
      bVar4 = *(byte *)(lStack_78 + _DAT_113043db8);
      lVar7 = *(long *)(unaff_x20 + _DAT_113043dc0);
      lVar8 = *(long *)(lStack_78 + _DAT_113043dc0);
      lVar6 = *(long *)(unaff_x20 + _DAT_113043dc8);
      lVar9 = *(long *)(lStack_78 + _DAT_113043dc8);
      _objc_release();
      if (lVar6 != lVar9) {
        return 0;
      }
      return lVar7 == lVar8 & ((bVar1 ^ bVar2 | bVar3 ^ bVar4) ^ 0xff);
    }
  }
  return 0;
}



/* Entry: 103fe71f4; end: 103fe7273; -[SCAdMidRollStoryAdsConfigValue isEqual:] */

uint FUN_103fe71f4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103fe70fc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103fe7274; end: 103fe7277; -[SCAdMidRollStoryAdsConfigValue copyWithZone:] */

void FUN_103fe7274(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fe7278; end: 103fe7293; -[SCAdMidRollStoryAdsConfigValue description] */

void FUN_103fe7278(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fe7294; end: 103fe732f; -[SCAdMidRollStoryAdsConfigValue init] */

void FUN_103fe7294(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCAdConfigService/AdMidRollStoryAdsConfigValueWrapper.swift",0x3b,2,0x42,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fe72dc);
  (*pcVar1)();
}



/* Entry: 103fe7330; end: 103fe733f; -[SCAdPrefetchConfigValue adPrefetchNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe7330(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043df8);
}



/* Entry: 103fe7340; end: 103fe734f; -[SCAdPrefetchConfigValue adPrefetchMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103fe7340(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113043e00);
}



/* Entry: 103fe7350; end: 103fe735f; -[SCAdPrefetchConfigValue adPrefetchMinFUSEngagementScore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe7350(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043e08);
}



/* Entry: 103fe7360; end: 103fe736f; -[SCAdPrefetchConfigValue adPrefetchMaxFetchCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe7360(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043e10);
}



/* Entry: 103fe7370; end: 103fe737f; -[SCAdPrefetchConfigValue adPrefetchDelayInMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe7370(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043e18);
}



/* Entry: 103fe7380; end: 103fe738f; -[SCAdPrefetchConfigValue adPrefetchFillAdTTLMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe7380(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043e20);
}



/* Entry: 103fe7390; end: 103fe739f; -[SCAdPrefetchConfigValue adPrefetchNoFillAdTTLMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe7390(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043e28);
}



/* Entry: 103fe73a0; end: 103fe73af; -[SCAdPrefetchConfigValue delayPrefetchInMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe73a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043e30);
}



/* Entry: 103fe73b0; end: 103fe748b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe73b0(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113043df8) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113043e00) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113043e08) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113043e10) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113043e18) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113043e20) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113043e28) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113043e30) = param_8;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe748c; end: 103fe7563; -[SCAdPrefetchConfigValue initWithAdPrefetchNumber:adPrefetchMedia:adPrefetchMinFUSEngagementScore:adPrefetchMaxFetchCount:adPrefetchDelayInMs:adPrefetchFillAdTTLMs:adPrefetchNoFillAdTTLMs:delayPrefetchInMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe748c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  long lStack_70;
  long lStack_68;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113043df8) = param_3;
  *(undefined1 *)(param_1 + _DAT_113043e00) = param_4;
  *(undefined8 *)(param_1 + _DAT_113043e08) = param_5;
  *(undefined8 *)(param_1 + _DAT_113043e10) = param_6;
  *(undefined8 *)(param_1 + _DAT_113043e18) = param_7;
  *(undefined8 *)(param_1 + _DAT_113043e20) = param_8;
  *(undefined8 *)(param_1 + _DAT_113043e28) = param_9;
  *(undefined8 *)(param_1 + _DAT_113043e30) = param_10;
  lStack_70 = param_1;
  lStack_68 = lVar1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe7564; end: 103fe7617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe7564(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113043df8) = *param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113043e00) = *(undefined1 *)(param_1 + 1);
  uVar1 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_113043e08) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_113043e10) = uVar1;
  uVar1 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_113043e18) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_113043e20) = uVar1;
  uVar1 = param_1[7];
  *(undefined8 *)(unaff_x20 + _DAT_113043e28) = param_1[6];
  *(undefined8 *)(unaff_x20 + _DAT_113043e30) = uVar1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe7618; end: 103fe761b; -[SCAdPrefetchConfigValue copyWithZone:] */

void FUN_103fe7618(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fe761c; end: 103fe7647; -[SCAdPrefetchConfigValue description] */

void FUN_103fe761c(void)

{
  undefined1 auStack_50 [64];
  
  FUN_103fe76c4(auStack_50);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fe7648; end: 103fe76c3; -[SCAdPrefetchConfigValue init] */

void FUN_103fe7648(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCAdConfigService/AdPrefetchConfigValueWrapper.swift",0x34,2,0x3e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fe7690);
  (*pcVar1)();
}



/* Entry: 103fe76c4; end: 103fe773b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe76c4(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined1 *)(param_2 + _DAT_113043e00);
  uVar2 = *(undefined8 *)(param_2 + _DAT_113043e08);
  uVar3 = *(undefined8 *)(param_2 + _DAT_113043e10);
  uVar4 = *(undefined8 *)(param_2 + _DAT_113043e18);
  uVar5 = *(undefined8 *)(param_2 + _DAT_113043e20);
  uVar6 = *(undefined8 *)(param_2 + _DAT_113043e28);
  uVar7 = *(undefined8 *)(param_2 + _DAT_113043e30);
  *param_1 = *(undefined8 *)(param_2 + _DAT_113043df8);
  *(undefined1 *)(param_1 + 1) = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  return;
}



/* Entry: 103fe773c; end: 103fe775b;  */

void FUN_103fe773c(void)

{
  _objc_opt_self(&PTR_PTR_11297a810);
  return;
}



/* Entry: 103fe775c; end: 103fe776b; -[SCAdPublisherRequestConfigValue multiauctionSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe775c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043e60);
}



/* Entry: 103fe776c; end: 103fe777b; -[SCAdPublisherRequestConfigValue mediaBufferSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe776c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043e68);
}



/* Entry: 103fe777c; end: 103fe778f; -[SCAdPublisherRequestConfigValue requestBufferSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe777c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043e70);
}



/* Entry: 103fe7790; end: 103fe7877; -[SCAdPublisherRequestConfigValue initWithMultiauctionSize:mediaBufferSize:requestBufferSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe7790(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113043e60) = param_3;
  *(undefined8 *)(param_1 + _DAT_113043e68) = param_4;
  *(undefined8 *)(param_1 + _DAT_113043e70) = param_5;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe7878; end: 103fe78e7; -[SCAdPublisherRequestConfigValue hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe7878(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_113043e60));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_113043e68));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_113043e70));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103fe78e8; end: 103fe79b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103fe78e8(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
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
      lVar2 = *(long *)(unaff_x20 + _DAT_113043e60);
      lVar4 = *(long *)(lStack_68 + _DAT_113043e60);
      lVar5 = *(long *)(unaff_x20 + _DAT_113043e68);
      lVar6 = *(long *)(lStack_68 + _DAT_113043e68);
      lVar3 = *(long *)(unaff_x20 + _DAT_113043e70);
      lVar7 = *(long *)(lStack_68 + _DAT_113043e70);
      _objc_release();
      return (lVar2 == lVar4 && lVar5 == lVar6) && lVar3 == lVar7;
    }
  }
  return false;
}



/* Entry: 103fe79b8; end: 103fe7a37; -[SCAdPublisherRequestConfigValue isEqual:] */

uint FUN_103fe79b8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103fe78e8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103fe7a38; end: 103fe7a3b; -[SCAdPublisherRequestConfigValue copyWithZone:] */

void FUN_103fe7a38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fe7a3c; end: 103fe7a57; -[SCAdPublisherRequestConfigValue description] */

void FUN_103fe7a3c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fe7a58; end: 103fe7af3; -[SCAdPublisherRequestConfigValue init] */

void FUN_103fe7a58(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCAdConfigService/AdPublisherRequestConfigValueWrapper.swift",0x3c,2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fe7aa0);
  (*pcVar1)();
}



/* Entry: 103fe7af4; end: 103fe7af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe7af4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113043e60) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113043e68) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113043e70) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe7af8; end: 103fe7b07; -[SCAdRetroRequestConfigValue persistenceEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103fe7af8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113043ea0);
}



/* Entry: 103fe7b08; end: 103fe7b17; -[SCAdRetroRequestConfigValue retryEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103fe7b08(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113043ea8);
}



/* Entry: 103fe7b18; end: 103fe7b27; -[SCAdRetroRequestConfigValue maxFileAgeMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe7b18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043eb0);
}



/* Entry: 103fe7b28; end: 103fe7b37; -[SCAdRetroRequestConfigValue maxFileSizeBytes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe7b28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043eb8);
}



/* Entry: 103fe7b38; end: 103fe7b47; -[SCAdRetroRequestConfigValue maxPersistedRequests] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe7b38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043ec0);
}



/* Entry: 103fe7b48; end: 103fe7beb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe7b48(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113043ea0) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_113043ea8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113043eb0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113043eb8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113043ec0) = param_5;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe7bec; end: 103fe7c8f; -[SCAdRetroRequestConfigValue initWithPersistenceEnabled:retryEnabled:maxFileAgeMillis:maxFileSizeBytes:maxPersistedRequests:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe7bec(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_2;
  _swift_getObjectType();
  *(undefined1 *)(param_2 + _DAT_113043ea0) = param_4;
  *(undefined1 *)(param_2 + _DAT_113043ea8) = param_5;
  *(undefined8 *)(param_2 + _DAT_113043eb0) = param_1;
  *(undefined8 *)(param_2 + _DAT_113043eb8) = param_6;
  *(undefined8 *)(param_2 + _DAT_113043ec0) = param_7;
  lStack_60 = param_2;
  lStack_58 = lVar1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe7c90; end: 103fe7d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe7c90(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(byte *)(unaff_x20 + _DAT_113043ea0) = (byte)param_2 & 1;
  *(byte *)(unaff_x20 + _DAT_113043ea8) = (byte)((uint)param_2 >> 8) & 1;
  *(undefined8 *)(unaff_x20 + _DAT_113043eb0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113043eb8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113043ec0) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe7d30; end: 103fe7df7; -[SCAdRetroRequestConfigValue hash] */

void FUN_103fe7d30(void)

{
  func_0x000103fe7d50();
  return;
}



/* Entry: 103fe7df8; end: 103fe7f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_103fe7df8(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar7 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar6 = &lStack_88;
    _swift_dynamicCast(plVar6,auStack_80,PTR___sypN_11034f1a8 + 8,lVar7,6);
    if (((ulong)plVar6 & 1) != 0) {
      bVar2 = *(byte *)(unaff_x20 + _DAT_113043ea0);
      bVar3 = *(byte *)(lStack_88 + _DAT_113043ea0);
      bVar4 = *(byte *)(unaff_x20 + _DAT_113043ea8);
      bVar5 = *(byte *)(lStack_88 + _DAT_113043ea8);
      dVar11 = *(double *)(unaff_x20 + _DAT_113043eb0);
      dVar12 = *(double *)(lStack_88 + _DAT_113043eb0);
      lVar8 = *(long *)(unaff_x20 + _DAT_113043eb8);
      lVar9 = *(long *)(lStack_88 + _DAT_113043eb8);
      lVar7 = *(long *)(unaff_x20 + _DAT_113043ec0);
      lVar10 = *(long *)(lStack_88 + _DAT_113043ec0);
      _objc_release();
      bVar1 = 0;
      if (lVar8 == lVar9) {
        bVar1 = dVar11 == dVar12 & ((bVar2 ^ bVar3 | bVar4 ^ bVar5) ^ 0xff);
      }
      if (lVar7 != lVar10) {
        return 0;
      }
      return bVar1;
    }
  }
  return 0;
}



/* Entry: 103fe7f10; end: 103fe7f8f; -[SCAdRetroRequestConfigValue isEqual:] */

uint FUN_103fe7f10(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103fe7df8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103fe7f90; end: 103fe7f93; -[SCAdRetroRequestConfigValue copyWithZone:] */

void FUN_103fe7f90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fe7f94; end: 103fe8123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe7f94(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1db9b0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4e455f5952544552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e455f5952544552,0xed000044454c4241);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113043eb0);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1db9d0);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1db9f0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1dba10);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103fe8124; end: 103fe8173; -[SCAdRetroRequestConfigValue encodeWithCoder:] */

void FUN_103fe8124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103fe7f94(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103fe8174; end: 103fe81b3;  */

undefined8 FUN_103fe8174(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_103fe828c(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103fe81b4; end: 103fe81ef; -[SCAdRetroRequestConfigValue initWithCoder:] */

undefined8 FUN_103fe81b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_103fe828c();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 103fe81f0; end: 103fe820b; -[SCAdRetroRequestConfigValue description] */

void FUN_103fe81f0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fe820c; end: 103fe8287; -[SCAdRetroRequestConfigValue init] */

void FUN_103fe820c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCAdConfigService/AdRetroRequestConfigValueWrapper.swift",0x38,2,99,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fe8254);
  (*pcVar1)();
}



/* Entry: 103fe8288; end: 103fe828b; -[SCAdRetroRequestConfigValue .cxx_destruct] */

void FUN_103fe8288(void)

{
  return;
}



/* Entry: 103fe828c; end: 103fe8403;  */

void FUN_103fe828c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1db9b0);
  func_0x00010bf66ce0(param_2);
  _objc_release(uVar1);
  uVar1 = 0x4e455f5952544552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e455f5952544552,0xed000044454c4241);
  func_0x00010bf66ce0(param_2);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1db9d0);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1db9f0);
  func_0x00010bf66f40(param_2);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1dba10);
  func_0x00010bf66f40(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c035650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1);
  return;
}



/* Entry: 103fe8404; end: 103fe8423;  */

void FUN_103fe8404(void)

{
  _objc_opt_self(&PTR_PTR_11297a9e8);
  return;
}



/* Entry: 103fe8424; end: 103fe8433; -[SCAdSKOverlayPreloadingConfig preloadWindowLevel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103fe8424(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113043ef0);
}



/* Entry: 103fe8434; end: 103fe8443; -[SCAdSKOverlayPreloadingConfig displayWindowLevel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103fe8434(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113043ef8);
}



/* Entry: 103fe8444; end: 103fe8453; -[SCAdSKOverlayPreloadingConfig maxNumberPreloadedOverlays] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe8444(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043f00);
}



/* Entry: 103fe8454; end: 103fe8463; -[SCAdSKOverlayPreloadingConfig userDismissible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103fe8454(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113043f08);
}



/* Entry: 103fe8464; end: 103fe8473; -[SCAdSKOverlayPreloadingConfig bottomMargin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe8464(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113043f10));
  return;
}



/* Entry: 103fe8474; end: 103fe850f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe8474(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined4 *)(unaff_x20 + _DAT_113043ef0) = param_1;
  *(undefined4 *)(unaff_x20 + _DAT_113043ef8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113043f00) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_113043f08) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113043f10) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe8510; end: 103fe853f;  */

void FUN_103fe8510(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103fe8540(param_1);
  return;
}



/* Entry: 103fe8540; end: 103fe8607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe8540(undefined4 *param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined4 uVar2;
  undefined8 uVar3;
  
  _swift_getObjectType();
  uVar2 = param_1[1];
  *(undefined4 *)(unaff_x20 + _DAT_113043ef0) = *param_1;
  *(undefined4 *)(unaff_x20 + _DAT_113043ef8) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_113043f00) = *(undefined8 *)(param_1 + 2);
  *(undefined1 *)(unaff_x20 + _DAT_113043f08) = *(undefined1 *)(param_1 + 4);
  if (*(char *)(param_1 + 8) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 6);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x000107c466c0(uVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_113043f10) = puVar1;
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe8608; end: 103fe860b; -[SCAdSKOverlayPreloadingConfig copyWithZone:] */

void FUN_103fe8608(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fe860c; end: 103fe8637; -[SCAdSKOverlayPreloadingConfig description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe860c(long param_1)

{
  func_0x00010bf885a0(*(undefined8 *)(param_1 + _DAT_113043f10));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fe8638; end: 103fe86b3; -[SCAdSKOverlayPreloadingConfig init] */

void FUN_103fe8638(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCAdConfigService/AdSKOverlayPreloadingConfigWrapper.swift",0x3a,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fe8680);
  (*pcVar1)();
}



/* Entry: 103fe86b4; end: 103fe86c3; -[SCAdSKOverlayPreloadingConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe86b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113043f10));
  return;
}



/* Entry: 103fe86c4; end: 103fe86e3;  */

void FUN_103fe86c4(void)

{
  _objc_opt_self(&PTR_PTR_11297aad8);
  return;
}



/* Entry: 103fe86e4; end: 103fe86f3; -[SCAdTrackV2ConfigValue enableAttachmentSSF] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103fe86e4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113043f40);
}



/* Entry: 103fe86f4; end: 103fe8743; -[SCAdTrackV2ConfigValue supportedAdTypesObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe86f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113043f48);
  func_0x0001002ed07c(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fe8744; end: 103fe87af; -[SCAdTrackV2ConfigValue parserRegexes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe8744(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113043f50);
  func_0x0001002ed07c(0);
  func_0x000100120cb0();
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fe87b0; end: 103fe87b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe87b0(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113043f40) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113043f48) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113043f50) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe87b4; end: 103fe886b; -[SCAdTrackV2ConfigValue initWithEnableAttachmentSSF:supportedAdTypesObjc:parserRegexes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe87b4(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  uVar2 = 0;
  func_0x0001002ed07c(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar2);
  uVar3 = param_4;
  func_0x000100120cb0();
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_5,uVar2,PTR___sSSN_11034da80,uVar3);
  *(undefined1 *)(param_1 + _DAT_113043f40) = param_3;
  *(undefined8 *)(param_1 + _DAT_113043f48) = param_4;
  *(undefined8 *)(param_1 + _DAT_113043f50) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe886c; end: 103fe88df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe886c(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113043f40) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113043f48) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113043f50) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe88e0; end: 103fe8913; -[SCAdTrackV2ConfigValue hash] */

undefined8 FUN_103fe88e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103fe8914();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103fe8914; end: 103fe89ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe8914(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113043f40));
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113043f48);
  uVar1 = 0;
  func_0x0001002ed07c(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar3,uVar1);
  uVar2 = uVar3;
  func_0x00010bfde980();
  _objc_release(uVar3);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113043f50);
  func_0x000100120cb0();
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF(uVar3,uVar1,PTR___sSSN_11034da80,uVar2)
  ;
  uVar2 = uVar3;
  func_0x00010bfde980();
  _objc_release(uVar3);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103fe89f0; end: 103fe8b07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103fe89f0(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar4 = &lStack_68;
    _swift_dynamicCast(plVar4,auStack_60,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      bVar1 = *(byte *)(unaff_x20 + _DAT_113043f40);
      bVar2 = *(byte *)(lStack_68 + _DAT_113043f40);
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113043f48);
      uVar7 = *(undefined8 *)(lStack_68 + _DAT_113043f48);
      _swift_bridgeObjectRetain(uVar7);
      func_0x0001038a4f38(uVar6,uVar7);
      _swift_bridgeObjectRelease(uVar7);
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_113043f50);
      uVar8 = *(undefined8 *)(lStack_68 + _DAT_113043f50);
      _swift_bridgeObjectRetain(uVar8);
      FUN_103fe62a0(uVar7,uVar8);
      _objc_release(lStack_68);
      _swift_bridgeObjectRelease(uVar8);
      uVar5 = ((bVar1 ^ bVar2) ^ 1) & (uint)uVar6 & (uint)uVar7;
      goto LAB_103fe8aec;
    }
  }
  uVar5 = 0;
LAB_103fe8aec:
  return uVar5 & 1;
}



/* Entry: 103fe8b08; end: 103fe8b87; -[SCAdTrackV2ConfigValue isEqual:] */

uint FUN_103fe8b08(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103fe89f0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103fe8b88; end: 103fe8b8b; -[SCAdTrackV2ConfigValue copyWithZone:] */

void FUN_103fe8b88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fe8b8c; end: 103fe8ba7; -[SCAdTrackV2ConfigValue description] */

void FUN_103fe8b8c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fe8ba8; end: 103fe8c23; -[SCAdTrackV2ConfigValue init] */

void FUN_103fe8ba8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCAdConfigService/AdTrackV2ConfigValueWrapper.swift",0x33,2,0x3f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fe8bf0);
  (*pcVar1)();
}



/* Entry: 103fe8c24; end: 103fe8c5b; -[SCAdTrackV2ConfigValue .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe8c24(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113043f48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113043f50));
  return;
}



/* Entry: 103fe8c5c; end: 103fe8c7b;  */

void FUN_103fe8c5c(void)

{
  _objc_opt_self(&PTR_PTR_11297abc0);
  return;
}



/* Entry: 103fe8c7c; end: 103fe8c7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe8c7c(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113043f40) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113043f48) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113043f50) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe8c80; end: 103fe8c8f; -[SCAdUATAnimationConfigValue delayMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe8c80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043f80);
}



/* Entry: 103fe8c90; end: 103fe8ca3; -[SCAdUATAnimationConfigValue durationMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe8c90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043f88);
}



/* Entry: 103fe8ca4; end: 103fe8d6b; -[SCAdUATAnimationConfigValue initWithDelayMs:durationMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe8ca4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113043f80) = param_3;
  *(undefined8 *)(param_1 + _DAT_113043f88) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe8d6c; end: 103fe8dc7; -[SCAdUATAnimationConfigValue hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe8d6c(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_113043f80));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_113043f88));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103fe8dc8; end: 103fe8e7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103fe8dc8(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar1 = &lStack_58;
    _swift_dynamicCast(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x20 + _DAT_113043f80);
      lVar4 = *(long *)(lStack_58 + _DAT_113043f80);
      lVar3 = *(long *)(unaff_x20 + _DAT_113043f88);
      lVar5 = *(long *)(lStack_58 + _DAT_113043f88);
      _objc_release();
      return lVar2 == lVar4 && lVar3 == lVar5;
    }
  }
  return false;
}



/* Entry: 103fe8e7c; end: 103fe8efb; -[SCAdUATAnimationConfigValue isEqual:] */

uint FUN_103fe8e7c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103fe8dc8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103fe8efc; end: 103fe8eff; -[SCAdUATAnimationConfigValue copyWithZone:] */

void FUN_103fe8efc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fe8f00; end: 103fe8f1b; -[SCAdUATAnimationConfigValue description] */

void FUN_103fe8f00(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fe8f1c; end: 103fe8fb7; -[SCAdUATAnimationConfigValue init] */

void FUN_103fe8f1c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCAdConfigService/AdUATAnimationConfigValueWrapper.swift",0x38,2,0x36,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fe8f64);
  (*pcVar1)();
}



/* Entry: 103fe8fb8; end: 103fe8fbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe8fb8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113043f80) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113043f88) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe8fbc; end: 103fe8fcb; -[SCAdUATInfoCardConfigValue cardType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe8fbc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043fb8);
}



/* Entry: 103fe8fcc; end: 103fe8fdb; -[SCAdUATInfoCardConfigValue cardAnimationType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe8fcc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043fc0);
}



/* Entry: 103fe8fdc; end: 103fe8feb; -[SCAdUATInfoCardConfigValue cardAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe8fdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113043fc8));
  return;
}



/* Entry: 103fe8fec; end: 103fe8ffb; -[SCAdUATInfoCardConfigValue cardColorAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe8fec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113043fd0));
  return;
}


