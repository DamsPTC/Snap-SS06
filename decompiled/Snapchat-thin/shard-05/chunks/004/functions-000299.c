/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103e04418; end: 103e04427; -[SCAdServeOperationMetricsContext invalidateEmptyBottomMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103e04418(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113011268);
}



/* Entry: 103e04428; end: 103e0458f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e04428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113011248);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113011250);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113011258) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_113011260) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_113011268) = param_7;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e04590; end: 103e04673; -[SCAdServeOperationMetricsContext initWithAdId:adRequestClientId:adProductType:invalidateEmptyCollectionItem:invalidateEmptyBottomMedia:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e04590(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined1 param_6,undefined1 param_7)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113011248);
  *plVar1 = param_3;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_113011250);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113011258) = param_5;
  *(undefined1 *)(param_1 + _DAT_113011260) = param_6;
  *(undefined1 *)(param_1 + _DAT_113011268) = param_7;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e04674; end: 103e04737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e04674(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_allocWithZone();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113011248);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113011250);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  *(undefined8 *)(unaff_x20 + _DAT_113011258) = param_1[4];
  *(undefined1 *)(unaff_x20 + _DAT_113011260) = *(undefined1 *)(param_1 + 5);
  func_0x000101223174(&uStack_40,auStack_60);
  func_0x000101223174(&uStack_50,auStack_60);
  FUN_103e04738(param_1);
  *(undefined1 *)(unaff_x20 + _DAT_113011268) = *(undefined1 *)((long)param_1 + 0x29);
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e04738; end: 103e0476b;  */

undefined8 FUN_103e04738(undefined8 param_1)

{
  (*(code *)(undefined *)0x103df2ca0)();
  return param_1;
}



/* Entry: 103e0476c; end: 103e0476f; -[SCAdServeOperationMetricsContext copyWithZone:] */

void FUN_103e0476c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e04770; end: 103e047a3; -[SCAdServeOperationMetricsContext description] */

void FUN_103e04770(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e047a4; end: 103e0481f; -[SCAdServeOperationMetricsContext init] */

void FUN_103e047a4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdOperationalLoggingServices/AdServeOperationMetricsContextWrapper.swift",0x48,2,0x35,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e047ec);
  (*pcVar1)();
}



/* Entry: 103e04820; end: 103e0485f; -[SCAdServeOperationMetricsContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e04820(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113011248 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113011250 + 8))
  ;
  return;
}



/* Entry: 103e04860; end: 103e0487f;  */

void FUN_103e04860(void)

{
  _objc_opt_self(&PTR_PTR_11294e4e8);
  return;
}



/* Entry: 103e04880; end: 103e048bf;  */

undefined8 FUN_103e04880(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_103e04efc(param_1);
  func_0x000103dfda24(param_1);
  return uVar1;
}



/* Entry: 103e048c0; end: 103e048cf; -[SCAdSlotInfo adSlotIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e048c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113011298);
}



/* Entry: 103e048d0; end: 103e048df; -[SCAdSlotInfo slotEnterTimeMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e048d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130112a0);
}



/* Entry: 103e048e0; end: 103e048ef; -[SCAdSlotInfo isAdInserted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103e048e0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130112a8);
}



/* Entry: 103e048f0; end: 103e048ff; -[SCAdSlotInfo adOpportunityMissType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e048f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130112b0));
  return;
}



/* Entry: 103e04900; end: 103e0490f; -[SCAdSlotInfo adInsertionStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e04900(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130112b8);
}



/* Entry: 103e04910; end: 103e0491f; -[SCAdSlotInfo storyViewCountSinceLastAd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e04910(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130112c0);
}



/* Entry: 103e04920; end: 103e0492f; -[SCAdSlotInfo snapViewCountSinceLastAd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e04920(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130112c8);
}



/* Entry: 103e04930; end: 103e0493f; -[SCAdSlotInfo timeViewedMillisSinceLastAd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e04930(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130112d0);
}



/* Entry: 103e04940; end: 103e0494f; -[SCAdSlotInfo isBrandSafe] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103e04940(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130112d8);
}



/* Entry: 103e04950; end: 103e0495f; -[SCAdSlotInfo insertionRulesSatisfied] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103e04950(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130112e0);
}



/* Entry: 103e04960; end: 103e0496f; -[SCAdSlotInfo tryInsertAfterMediaReadyTimeMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e04960(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130112e8);
}



/* Entry: 103e04970; end: 103e0497f; -[SCAdSlotInfo lastTryInsertTimeMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e04970(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130112f0);
}



/* Entry: 103e04980; end: 103e0498f; -[SCAdSlotInfo insertionStartTimeMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e04980(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130112f8);
}



/* Entry: 103e04990; end: 103e0499f; -[SCAdSlotInfo insertionSuccessTimeMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e04990(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113011300);
}



/* Entry: 103e049a0; end: 103e049fb; -[SCAdSlotInfo slotEventHistoryList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e049a0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113011308);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000103e05718(0);
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



/* Entry: 103e049fc; end: 103e04a0b; -[SCAdSlotInfo insertionRuleReady] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103e049fc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113011310);
}



/* Entry: 103e04a0c; end: 103e04d03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e04a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined1 param_14,undefined8 param_15,undefined1 param_16)

{
  long unaff_x20;
  undefined1 auStack_a0 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113011298) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_1130112a0) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_1130112a8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_1130112b0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_1130112b8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_1130112c0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_1130112c8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_1130112d0) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_1130112d8) = param_13;
  *(undefined1 *)(unaff_x20 + _DAT_1130112e0) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_1130112e8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130112f0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_1130112f8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113011300) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113011308) = param_15;
  *(undefined1 *)(unaff_x20 + _DAT_113011310) = param_16;
  _objc_msgSendSuper2(auStack_a0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e04d04; end: 103e04e0b; -[SCAdSlotInfo initWithAdSlotIndex:slotEnterTimeMillis:isAdInserted:adOpportunityMissType:adInsertionStatus:storyViewCountSinceLastAd:snapViewCountSinceLastAd:timeViewedMillisSinceLastAd:isBrandSafe:insertionRulesSatisfied:tryInsertAfterMediaReadyTimeMillis:lastTryInsertTimeMillis:insertionStartTimeMillis:insertionSuccessTimeMillis:slotEventHistoryList:insertionRuleReady:] */

void FUN_103e04d04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
                  long param_17,undefined1 param_18)

{
  undefined8 uVar1;
  
  if (param_17 != 0) {
    uVar1 = 0;
    func_0x000103e05718(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_17,uVar1);
  }
  _objc_retain(param_11);
  func_0x000103e04b88(param_1,param_2,param_3,param_4,param_5,param_6,param_9,param_10,param_11,
                      param_12,param_13,param_14,(undefined1)param_15,param_15._1_1_,param_17,
                      param_18);
  return;
}



/* Entry: 103e04e0c; end: 103e04e0f; -[SCAdSlotInfo copyWithZone:] */

void FUN_103e04e0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e04e10; end: 103e04e47; -[SCAdSlotInfo description] */

void FUN_103e04e10(void)

{
  undefined1 auStack_88 [120];
  
  _objc_retain();
  FUN_103e05180(auStack_88);
  func_0x000103dfda24(auStack_88);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e04e48; end: 103e04ec3; -[SCAdSlotInfo init] */

void FUN_103e04e48(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdOperationalLoggingServices/AdSlotInfoWrapper.swift",0x34,2,0x60,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e04e90);
  (*pcVar1)();
}



/* Entry: 103e04ec4; end: 103e04efb; -[SCAdSlotInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e04ec4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130112b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113011308));
  return;
}



/* Entry: 103e04efc; end: 103e0517f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e04efc(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_113011298) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130112a0) = param_1[1];
  *(undefined1 *)(unaff_x20 + _DAT_1130112a8) = *(undefined1 *)(param_1 + 2);
  uStack_78 = param_1[3];
  uVar8 = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_1130112b0) = uStack_78;
  *(undefined8 *)(unaff_x20 + _DAT_1130112b8) = uVar8;
  uVar8 = param_1[6];
  *(undefined8 *)(unaff_x20 + _DAT_1130112c0) = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_1130112c8) = uVar8;
  *(undefined8 *)(unaff_x20 + _DAT_1130112d0) = param_1[7];
  *(undefined1 *)(unaff_x20 + _DAT_1130112d8) = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(unaff_x20 + _DAT_1130112e0) = *(undefined1 *)((long)param_1 + 0x41);
  uVar8 = param_1[10];
  *(undefined8 *)(unaff_x20 + _DAT_1130112e8) = param_1[9];
  *(undefined8 *)(unaff_x20 + _DAT_1130112f0) = uVar8;
  uVar8 = param_1[0xc];
  *(undefined8 *)(unaff_x20 + _DAT_1130112f8) = param_1[0xb];
  *(undefined8 *)(unaff_x20 + _DAT_113011300) = uVar8;
  lVar5 = param_1[0xd];
  if (lVar5 == 0) {
    FUN_103e05540(&uStack_78,&puStack_80);
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar6 = *(long *)(lVar5 + 0x10);
    if (lVar6 == 0) {
      FUN_103e05540(&uStack_78,&puStack_80);
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      FUN_103e05540(&uStack_78,&puStack_80);
      puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_103e06904(0,lVar6,0);
      puVar4 = puStack_80;
      lVar2 = 0;
      func_0x000103e05718();
      puVar7 = (undefined8 *)(lVar5 + 0x28);
      do {
        uVar9 = puVar7[-1];
        uVar8 = *puVar7;
        lVar5 = lVar2;
        _objc_allocWithZone();
        *(undefined8 *)(lVar5 + _DAT_113011340) = uVar9;
        *(undefined8 *)(lVar5 + _DAT_113011348) = uVar8;
        plVar3 = &lStack_a0;
        lStack_a0 = lVar5;
        lStack_98 = lVar2;
        _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
        uVar1 = *(ulong *)(puVar4 + 0x10);
        puStack_80 = puVar4;
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
          FUN_103e06904(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
        }
        puVar7 = puVar7 + 2;
        *(ulong *)(puStack_80 + 0x10) = uVar1 + 1;
        *(long **)(puStack_80 + uVar1 * 8 + 0x20) = plVar3;
        lVar6 = lVar6 + -1;
        puVar4 = puStack_80;
      } while (lVar6 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_113011308) = puVar4;
  *(undefined1 *)(unaff_x20 + _DAT_113011310) = *(undefined1 *)(param_1 + 0xe);
  _objc_msgSendSuper2(&stack0xffffffffffffff70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e05180; end: 103e0551f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e05180(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auStack_210 [120];
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined1 uStack_157;
  undefined6 uStack_156;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined1 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined1 uStack_df;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 uStack_b0;
  
  puVar16 = *(undefined **)(param_2 + _DAT_113011298);
  uVar19 = *(undefined8 *)(param_2 + _DAT_1130112a0);
  uVar1 = *(undefined1 *)(param_2 + _DAT_1130112a8);
  uVar18 = *(undefined8 *)(param_2 + _DAT_1130112b0);
  uVar13 = *(undefined8 *)(param_2 + _DAT_1130112b8);
  uVar7 = *(undefined8 *)(param_2 + _DAT_1130112c0);
  uVar8 = *(undefined8 *)(param_2 + _DAT_1130112c8);
  uVar20 = *(undefined8 *)(param_2 + _DAT_1130112d0);
  uVar2 = *(undefined1 *)(param_2 + _DAT_1130112d8);
  uVar3 = *(undefined1 *)(param_2 + _DAT_1130112e0);
  uVar21 = *(undefined8 *)(param_2 + _DAT_1130112e8);
  uVar22 = *(undefined8 *)(param_2 + _DAT_1130112f0);
  uVar23 = *(undefined8 *)(param_2 + _DAT_1130112f8);
  uVar24 = *(undefined8 *)(param_2 + _DAT_113011300);
  uVar12 = *(ulong *)(param_2 + _DAT_113011308);
  if (uVar12 == 0) {
    _objc_retain(uVar18);
    puVar9 = (undefined *)0x0;
  }
  else {
    if (uVar12 >> 0x3e == 0) {
      uVar11 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar11 = uVar12;
      if (-1 < (long)uVar12) {
        uVar11 = uVar12 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar11 == 0) {
      _objc_retain(uVar18);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_120 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _objc_retain(uVar18);
      func_0x000103e0696c(0,uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x103e05520);
        (*pcVar5)();
      }
      if ((uVar12 & 0xc000000000000001) == 0) {
        lVar17 = *(ulong *)(puStack_120 + 0x10) << 4;
        uVar14 = *(ulong *)(puStack_120 + 0x10);
        plVar15 = (long *)(uVar12 + 0x20);
        do {
          uVar25 = *(undefined8 *)(*plVar15 + _DAT_113011340);
          uVar10 = *(undefined8 *)(*plVar15 + _DAT_113011348);
          uVar12 = uVar14 + 1;
          if (*(ulong *)(puStack_120 + 0x18) >> 1 <= uVar14) {
            func_0x000103e0696c(1 < *(ulong *)(puStack_120 + 0x18),uVar12,1);
          }
          *(ulong *)(puStack_120 + 0x10) = uVar12;
          *(undefined8 *)(puStack_120 + lVar17 + 0x20) = uVar25;
          *(undefined8 *)(puStack_120 + lVar17 + 0x28) = uVar10;
          lVar17 = lVar17 + 0x10;
          uVar11 = uVar11 - 1;
          uVar14 = uVar12;
          puVar9 = puStack_120;
          plVar15 = plVar15 + 1;
        } while (uVar11 != 0);
      }
      else {
        uVar14 = 0;
        do {
          puVar9 = puStack_120;
          uVar6 = uVar14;
          FUN_103e06d68(uVar14,uVar12);
          uVar25 = *(undefined8 *)(uVar6 + _DAT_113011340);
          uVar10 = *(undefined8 *)(uVar6 + _DAT_113011348);
          _swift_unknownObjectRelease();
          uVar6 = *(ulong *)(puVar9 + 0x10);
          puStack_120 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar6) {
            func_0x000103e0696c(1 < *(ulong *)(puVar9 + 0x18),uVar6 + 1,1);
          }
          uVar14 = uVar14 + 1;
          *(ulong *)(puStack_120 + 0x10) = uVar6 + 1;
          *(undefined8 *)(puStack_120 + uVar6 * 0x10 + 0x20) = uVar25;
          *(undefined8 *)(puStack_120 + uVar6 * 0x10 + 0x28) = uVar10;
          puVar9 = puStack_120;
        } while (uVar11 != uVar14);
      }
    }
  }
  uVar4 = *(undefined1 *)(param_2 + _DAT_113011310);
  _objc_release(param_2);
  puStack_198 = puVar16;
  uStack_190 = uVar19;
  uStack_188 = uVar1;
  uStack_180 = uVar18;
  uStack_178 = uVar13;
  uStack_170 = uVar7;
  uStack_168 = uVar8;
  uStack_160 = uVar20;
  uStack_158 = uVar2;
  uStack_157 = uVar3;
  uStack_150 = uVar21;
  uStack_148 = uVar22;
  uStack_140 = uVar23;
  uStack_138 = uVar24;
  puStack_130 = puVar9;
  uStack_128 = uVar4;
  puStack_120 = puVar16;
  uStack_118 = uVar19;
  uStack_110 = uVar1;
  uStack_108 = uVar18;
  uStack_100 = uVar13;
  uStack_f8 = uVar7;
  uStack_f0 = uVar8;
  uStack_e8 = uVar20;
  uStack_e0 = uVar2;
  uStack_df = uVar3;
  uStack_d8 = uVar21;
  uStack_d0 = uVar22;
  uStack_c8 = uVar23;
  uStack_c0 = uVar24;
  puStack_b8 = puVar9;
  uStack_b0 = uVar4;
  FUN_103dfd9f0(&puStack_198,auStack_210);
  func_0x000103dfda24(&puStack_120);
  param_1[9] = uStack_150;
  param_1[8] = CONCAT62(uStack_156,CONCAT11(uStack_157,uStack_158));
  param_1[0xb] = uStack_140;
  param_1[10] = uStack_148;
  param_1[0xd] = puStack_130;
  param_1[0xc] = uStack_138;
  param_1[1] = uStack_190;
  *param_1 = puStack_198;
  param_1[3] = uStack_180;
  param_1[2] = CONCAT71(uStack_187,uStack_188);
  *(undefined1 *)(param_1 + 0xe) = uStack_128;
  param_1[5] = uStack_170;
  param_1[4] = uStack_178;
  param_1[7] = uStack_160;
  param_1[6] = uStack_168;
  return;
}



/* Entry: 103e05520; end: 103e0553f;  */

void FUN_103e05520(void)

{
  _objc_opt_self(&PTR_PTR_11294e5d0);
  return;
}



/* Entry: 103e05540; end: 103e0558f;  */

undefined8 FUN_103e05540(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dc3de0;
  func_0x0001000285a8(0x112dc3de0,&UNK_10d9813c0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103e05590; end: 103e0559f; -[SCAdOpportunityEventHistory timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e05590(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113011340);
}



/* Entry: 103e055a0; end: 103e055b3; -[SCAdOpportunityEventHistory type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e055a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113011348);
}



/* Entry: 103e055b4; end: 103e05617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e055b4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113011340) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113011348) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e05618; end: 103e0567b; -[SCAdOpportunityEventHistory initWithTimestamp:type:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e05618(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_2;
  _swift_getObjectType();
  *(undefined8 *)(param_2 + _DAT_113011340) = param_1;
  *(undefined8 *)(param_2 + _DAT_113011348) = param_4;
  lStack_40 = param_2;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e0567c; end: 103e0567f; -[SCAdOpportunityEventHistory copyWithZone:] */

void FUN_103e0567c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e05680; end: 103e0569b; -[SCAdOpportunityEventHistory description] */

void FUN_103e05680(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e0569c; end: 103e05737; -[SCAdOpportunityEventHistory init] */

void FUN_103e0569c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdOperationalLoggingServices/AdOpportunityEventHistoryWrapper.swift",0x43,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e056e4);
  (*pcVar1)();
}



/* Entry: 103e05738; end: 103e0573b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e05738(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113011340) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113011348) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e0573c; end: 103e0576b;  */

void FUN_103e0573c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103e062c8(param_1);
  return;
}



/* Entry: 103e0576c; end: 103e05d03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0576c(undefined8 *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long extraout_x8;
  undefined8 uVar6;
  code *pcVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lStack_120;
  long lStack_118;
  code *pcStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined *puStack_f8;
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
  undefined1 uStack_80;
  
  lVar10 = 0x112dbe418;
  func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&lStack_120 - extraout_x8;
  lVar2 = 0;
  FUN_103df3a28();
  lVar10 = (long)*(int *)(lVar2 + 0x30);
  lVar3 = 0;
  func_0x000100b91d00();
  pcVar7 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar7)((long)param_1 + lVar10,1,1,lVar3);
  uVar4 = *(undefined8 *)(param_2 + _DAT_113011378);
  uVar6 = *(undefined8 *)(param_2 + _DAT_113011380);
  *param_1 = uVar4;
  param_1[1] = uVar6;
  param_1[2] = *(undefined8 *)(param_2 + _DAT_113011388);
  uVar6 = *(undefined8 *)(param_2 + _DAT_113011398);
  param_1[3] = *(undefined8 *)(param_2 + _DAT_113011390);
  param_1[4] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + _DAT_1130113a8);
  param_1[5] = *(undefined8 *)(param_2 + _DAT_1130113a0);
  param_1[6] = uVar6;
  uVar13 = *(ulong *)(param_2 + _DAT_1130113b0);
  if (uVar13 == 0) {
    _objc_retain();
    puVar8 = (undefined *)0x0;
  }
  else {
    pcStack_110 = pcVar7;
    if (uVar13 >> 0x3e == 0) {
      uVar11 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar11 = uVar13;
      if (-1 < (long)uVar13) {
        uVar11 = uVar13 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar11 == 0) {
      _objc_retain(uVar4);
      pcVar7 = pcStack_110;
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      lStack_118 = lVar3;
      puStack_f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _objc_retain(uVar4);
      func_0x000103e06988(0,uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x103e05d00);
        (*pcVar7)();
      }
      lStack_120 = lVar10;
      lStack_108 = lVar2;
      puStack_100 = param_1;
      if ((uVar13 & 0xc000000000000001) == 0) {
        puVar15 = (undefined8 *)(uVar13 + 0x20);
        do {
          puVar8 = puStack_f8;
          _objc_retain(*puVar15);
          FUN_103e05180(&uStack_f0);
          uVar13 = *(ulong *)(puVar8 + 0x10);
          puStack_f8 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar13) {
            func_0x000103e06988(1 < *(ulong *)(puVar8 + 0x18),uVar13 + 1,1);
          }
          *(ulong *)(puStack_f8 + 0x10) = uVar13 + 1;
          *(undefined8 *)(puStack_f8 + uVar13 * 0x78 + 0x48) = uStack_c8;
          *(undefined8 *)(puStack_f8 + uVar13 * 0x78 + 0x40) = uStack_d0;
          *(undefined8 *)(puStack_f8 + uVar13 * 0x78 + 0x58) = uStack_b8;
          *(undefined8 *)(puStack_f8 + uVar13 * 0x78 + 0x50) = uStack_c0;
          *(undefined8 *)(puStack_f8 + uVar13 * 0x78 + 0x28) = uStack_e8;
          *(undefined8 *)(puStack_f8 + uVar13 * 0x78 + 0x20) = uStack_f0;
          *(undefined8 *)(puStack_f8 + uVar13 * 0x78 + 0x38) = uStack_d8;
          *(undefined8 *)(puStack_f8 + uVar13 * 0x78 + 0x30) = uStack_e0;
          puStack_f8[uVar13 * 0x78 + 0x90] = uStack_80;
          *(undefined8 *)(puStack_f8 + uVar13 * 0x78 + 0x78) = uStack_98;
          *(undefined8 *)(puStack_f8 + uVar13 * 0x78 + 0x70) = uStack_a0;
          *(undefined8 *)(puStack_f8 + uVar13 * 0x78 + 0x88) = uStack_88;
          *(undefined8 *)(puStack_f8 + uVar13 * 0x78 + 0x80) = uStack_90;
          *(undefined8 *)(puStack_f8 + uVar13 * 0x78 + 0x68) = uStack_a8;
          *(undefined8 *)(puStack_f8 + uVar13 * 0x78 + 0x60) = uStack_b0;
          uVar11 = uVar11 - 1;
          pcVar7 = pcStack_110;
          puVar8 = puStack_f8;
          param_1 = puStack_100;
          lVar10 = lStack_120;
          puVar15 = puVar15 + 1;
          lVar3 = lStack_118;
          lVar2 = lStack_108;
        } while (uVar11 != 0);
      }
      else {
        uVar14 = 0;
        do {
          puVar8 = puStack_f8;
          func_0x000103e06f04(uVar14,uVar13);
          FUN_103e05180(&uStack_f0);
          uVar5 = *(ulong *)(puVar8 + 0x10);
          puStack_f8 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar5) {
            func_0x000103e06988(1 < *(ulong *)(puVar8 + 0x18),uVar5 + 1,1);
          }
          uVar14 = uVar14 + 1;
          *(ulong *)(puStack_f8 + 0x10) = uVar5 + 1;
          *(undefined8 *)(puStack_f8 + uVar5 * 0x78 + 0x48) = uStack_c8;
          *(undefined8 *)(puStack_f8 + uVar5 * 0x78 + 0x40) = uStack_d0;
          *(undefined8 *)(puStack_f8 + uVar5 * 0x78 + 0x58) = uStack_b8;
          *(undefined8 *)(puStack_f8 + uVar5 * 0x78 + 0x50) = uStack_c0;
          *(undefined8 *)(puStack_f8 + uVar5 * 0x78 + 0x28) = uStack_e8;
          *(undefined8 *)(puStack_f8 + uVar5 * 0x78 + 0x20) = uStack_f0;
          *(undefined8 *)(puStack_f8 + uVar5 * 0x78 + 0x38) = uStack_d8;
          *(undefined8 *)(puStack_f8 + uVar5 * 0x78 + 0x30) = uStack_e0;
          puStack_f8[uVar5 * 0x78 + 0x90] = uStack_80;
          *(undefined8 *)(puStack_f8 + uVar5 * 0x78 + 0x78) = uStack_98;
          *(undefined8 *)(puStack_f8 + uVar5 * 0x78 + 0x70) = uStack_a0;
          *(undefined8 *)(puStack_f8 + uVar5 * 0x78 + 0x88) = uStack_88;
          *(undefined8 *)(puStack_f8 + uVar5 * 0x78 + 0x80) = uStack_90;
          *(undefined8 *)(puStack_f8 + uVar5 * 0x78 + 0x68) = uStack_a8;
          *(undefined8 *)(puStack_f8 + uVar5 * 0x78 + 0x60) = uStack_b0;
          pcVar7 = pcStack_110;
          puVar8 = puStack_f8;
          param_1 = puStack_100;
          lVar10 = lStack_120;
          lVar3 = lStack_118;
          lVar2 = lStack_108;
        } while (uVar11 != uVar14);
      }
    }
  }
  param_1[7] = puVar8;
  bVar1 = *(long *)(param_2 + _DAT_1130113b8) == 0;
  if (!bVar1) {
    _objc_retain();
    func_0x0001047b6fb0(lVar9);
  }
  (*pcVar7)(lVar9,bVar1,1,lVar3);
  func_0x000101685658(lVar9,(long)param_1 + lVar10);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x34)) =
       *(undefined8 *)(param_2 + _DAT_1130113c0);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0x38)) =
       *(undefined1 *)(param_2 + _DAT_1130113c8);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0x3c)) =
       *(undefined1 *)(param_2 + _DAT_1130113d0);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x40)) =
       *(undefined8 *)(param_2 + _DAT_1130113d8);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x44)) =
       *(undefined8 *)(param_2 + _DAT_1130113e0);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x48)) =
       *(undefined8 *)(param_2 + _DAT_1130113e8);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x4c)) =
       *(undefined8 *)(param_2 + _DAT_1130113f0);
  uVar13 = *(ulong *)(param_2 + _DAT_1130113f8);
  if (uVar13 == 0) {
    _objc_release(param_2);
    puVar8 = (undefined *)0x0;
  }
  else {
    if (uVar13 >> 0x3e == 0) {
      uVar11 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar11 = uVar13;
      if (-1 < (long)uVar13) {
        uVar11 = uVar13 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar11 == 0) {
      _objc_release(param_2);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000103e0696c(0,uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x103e05d04);
        (*pcVar7)();
      }
      lStack_108 = lVar2;
      puStack_100 = param_1;
      if ((uVar13 & 0xc000000000000001) == 0) {
        lVar10 = *(ulong *)(puStack_f8 + 0x10) << 4;
        uVar14 = *(ulong *)(puStack_f8 + 0x10);
        plVar12 = (long *)(uVar13 + 0x20);
        do {
          uVar6 = *(undefined8 *)(*plVar12 + _DAT_113011340);
          uVar4 = *(undefined8 *)(*plVar12 + _DAT_113011348);
          uVar13 = uVar14 + 1;
          if (*(ulong *)(puStack_f8 + 0x18) >> 1 <= uVar14) {
            func_0x000103e0696c(1 < *(ulong *)(puStack_f8 + 0x18),uVar13,1);
          }
          *(ulong *)(puStack_f8 + 0x10) = uVar13;
          *(undefined8 *)(puStack_f8 + lVar10 + 0x20) = uVar6;
          *(undefined8 *)(puStack_f8 + lVar10 + 0x28) = uVar4;
          lVar10 = lVar10 + 0x10;
          uVar11 = uVar11 - 1;
          uVar14 = uVar13;
          plVar12 = plVar12 + 1;
        } while (uVar11 != 0);
      }
      else {
        uVar14 = 0;
        do {
          puVar8 = puStack_f8;
          uVar5 = uVar14;
          func_0x000103e06d68(uVar14,uVar13);
          uVar6 = *(undefined8 *)(uVar5 + _DAT_113011340);
          uVar4 = *(undefined8 *)(uVar5 + _DAT_113011348);
          _swift_unknownObjectRelease();
          uVar5 = *(ulong *)(puVar8 + 0x10);
          puStack_f8 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar5) {
            func_0x000103e0696c(1 < *(ulong *)(puVar8 + 0x18),uVar5 + 1,1);
          }
          uVar14 = uVar14 + 1;
          *(ulong *)(puStack_f8 + 0x10) = uVar5 + 1;
          *(undefined8 *)(puStack_f8 + uVar5 * 0x10 + 0x20) = uVar6;
          *(undefined8 *)(puStack_f8 + uVar5 * 0x10 + 0x28) = uVar4;
        } while (uVar11 != uVar14);
      }
      puVar8 = puStack_f8;
      _objc_release(param_2);
      param_1 = puStack_100;
      lVar2 = lStack_108;
    }
  }
  *(undefined **)((long)param_1 + (long)*(int *)(lVar2 + 0x50)) = puVar8;
  return;
}



/* Entry: 103e05d04; end: 103e05d13; -[SCAdOpportunityEvent storySessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e05d04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113011378));
  return;
}



/* Entry: 103e05d14; end: 103e05d23; -[SCAdOpportunityEvent adProductType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e05d14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113011380);
}



/* Entry: 103e05d24; end: 103e05d33; -[SCAdOpportunityEvent viewLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e05d24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113011388);
}



/* Entry: 103e05d34; end: 103e05d43; -[SCAdOpportunityEvent adRequestStartTimeMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e05d34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113011390);
}



/* Entry: 103e05d44; end: 103e05d53; -[SCAdOpportunityEvent adRequestFinishTimeMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e05d44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113011398);
}



/* Entry: 103e05d54; end: 103e05d63; -[SCAdOpportunityEvent adMediaDownloadStartTimeMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e05d54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130113a0);
}



/* Entry: 103e05d64; end: 103e05d73; -[SCAdOpportunityEvent adMediaDownloadFinishTimeMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e05d64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130113a8);
}



/* Entry: 103e05d74; end: 103e05d87; -[SCAdOpportunityEvent adSlotInfoList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e05d74(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1130113b0);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_103e05520(0);
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



/* Entry: 103e05d88; end: 103e05d97; -[SCAdOpportunityEvent adResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e05d88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130113b8));
  return;
}



/* Entry: 103e05d98; end: 103e05da7; -[SCAdOpportunityEvent adInsertionStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e05d98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130113c0);
}



/* Entry: 103e05da8; end: 103e05db7; -[SCAdOpportunityEvent isBrandSafe] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103e05da8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130113c8);
}



/* Entry: 103e05db8; end: 103e05dc7; -[SCAdOpportunityEvent insertionRuleSatisfied] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103e05db8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130113d0);
}



/* Entry: 103e05dc8; end: 103e05dd7; -[SCAdOpportunityEvent tryInsertAfterMediaReadyTimeMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e05dc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130113d8);
}



/* Entry: 103e05dd8; end: 103e05de7; -[SCAdOpportunityEvent lastTryInsertTimeMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e05dd8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130113e0);
}



/* Entry: 103e05de8; end: 103e05df7; -[SCAdOpportunityEvent insertionStartTimeMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e05de8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130113e8);
}



/* Entry: 103e05df8; end: 103e05e07; -[SCAdOpportunityEvent insertionSuccessTimeMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e05df8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130113f0);
}



/* Entry: 103e05e08; end: 103e05e1b; -[SCAdOpportunityEvent eventHistoryList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e05e08(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1130113f8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    (*(code *)0x103e05718)(0);
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



/* Entry: 103e05e1c; end: 103e05e73;  */

void FUN_103e05e1c(long param_1,undefined8 param_2,long *param_3,code *param_4)

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



/* Entry: 103e05e74; end: 103e0618b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e05e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined1 param_16,
                  undefined8 param_17)

{
  long unaff_x20;
  undefined1 auStack_b0 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113011378) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_113011380) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_113011388) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_113011390) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113011398) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130113a0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130113a8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_1130113b0) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_1130113b8) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_1130113c0) = param_14;
  *(undefined1 *)(unaff_x20 + _DAT_1130113c8) = param_15;
  *(undefined1 *)(unaff_x20 + _DAT_1130113d0) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_1130113d8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_1130113e0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_1130113e8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_1130113f0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_1130113f8) = param_17;
  _objc_msgSendSuper2(auStack_b0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e0618c; end: 103e062c7; -[SCAdOpportunityEvent initWithStorySessionId:adProductType:viewLocation:adRequestStartTimeMillis:adRequestFinishTimeMillis:adMediaDownloadStartTimeMillis:adMediaDownloadFinishTimeMillis:adSlotInfoList:adResponse:adInsertionStatus:isBrandSafe:insertionRuleSatisfied:tryInsertAfterMediaReadyTimeMillis:lastTryInsertTimeMillis:insertionStartTimeMillis:insertionSuccessTimeMillis:eventHistoryList:] */

void FUN_103e0618c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,long param_14,undefined8 param_15,undefined8 param_16,
                  undefined4 param_17,undefined4 param_18,long param_19)

{
  undefined8 uVar1;
  
  if (param_14 != 0) {
    uVar1 = 0;
    FUN_103e05520(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_14,uVar1);
  }
  if (param_19 != 0) {
    uVar1 = 0;
    func_0x000103e05718(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_19,uVar1);
  }
  _objc_retain(param_11);
  _objc_retain(param_15);
  func_0x000103e06000(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_11,
                      param_12,param_13,param_14,param_15,param_16,(undefined1)param_17,
                      param_17._1_1_,param_19);
  return;
}



/* Entry: 103e062c8; end: 103e0679f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e062c8(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_1d0 [8];
  long lStack_1c8;
  long lStack_1c0;
  undefined1 *puStack_1b8;
  undefined *apuStack_190 [15];
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [16];
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
  undefined1 uStack_80;
  
  _swift_getObjectType();
  lVar2 = 0;
  func_0x000100b91d00();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar4 = auStack_1d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (long)puVar4 - extraout_x12;
  lVar7 = 0x112dbe418;
  func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar11 - extraout_x8_00;
  uVar14 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_113011378) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113011380) = uVar14;
  *(undefined8 *)(unaff_x20 + _DAT_113011388) = param_1[2];
  uVar14 = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_113011390) = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_113011398) = uVar14;
  uVar14 = param_1[6];
  *(undefined8 *)(unaff_x20 + _DAT_1130113a0) = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_1130113a8) = uVar14;
  lVar10 = param_1[7];
  if (lVar10 == 0) {
    _objc_retain();
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar13 = *(long *)(lVar10 + 0x10);
    if (lVar13 == 0) {
      _objc_retain();
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_118 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lStack_1c8 = lVar2;
      lStack_1c0 = lVar11;
      puStack_1b8 = puVar4;
      _objc_retain();
      func_0x000103e06938(0,lVar13,0);
      puVar9 = puStack_118;
      puVar12 = (undefined8 *)(lVar10 + 0x20);
      uVar14 = 0;
      FUN_103e05520(0);
      do {
        uStack_e8 = puVar12[1];
        uStack_f0 = *puVar12;
        uStack_d8 = puVar12[3];
        uStack_e0 = puVar12[2];
        uStack_c8 = puVar12[5];
        uStack_d0 = puVar12[4];
        uStack_b8 = puVar12[7];
        uStack_c0 = puVar12[6];
        uStack_a8 = puVar12[9];
        uStack_b0 = puVar12[8];
        uStack_98 = puVar12[0xb];
        uStack_a0 = puVar12[10];
        uStack_88 = puVar12[0xd];
        uStack_90 = puVar12[0xc];
        uStack_80 = *(undefined1 *)(puVar12 + 0xe);
        _objc_allocWithZone(uVar14);
        FUN_103dfd9f0(&uStack_f0,apuStack_190);
        puVar3 = &uStack_f0;
        FUN_103e04efc();
        func_0x000103dfda24(&uStack_f0);
        uVar1 = *(ulong *)(puVar9 + 0x10);
        puStack_118 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
          func_0x000103e06938(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(puStack_118 + 0x10) = uVar1 + 1;
        *(undefined8 **)(puStack_118 + uVar1 * 8 + 0x20) = puVar3;
        puVar12 = puVar12 + 0xf;
        lVar13 = lVar13 + -1;
        lVar2 = lStack_1c8;
        puVar4 = puStack_1b8;
        puVar9 = puStack_118;
        lVar11 = lStack_1c0;
      } while (lVar13 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_1130113b0) = puVar9;
  lVar13 = 0;
  FUN_103df3a28();
  func_0x000101685588((long)param_1 + (long)*(int *)(lVar13 + 0x30),lVar7);
  lVar10 = lVar7;
  (**(code **)(lVar6 + 0x30))(lVar7,1,lVar2);
  puVar8 = (undefined1 *)0x0;
  if ((int)lVar10 != 1) {
    func_0x0001016855d8(lVar7,lVar11);
    func_0x000101681be8(lVar11,puVar4);
    func_0x0001047c0984(0);
    _objc_allocWithZone();
    func_0x0001047b952c();
    func_0x000103e070ac(lVar11,&SUB_100b91d00);
    puVar8 = puVar4;
  }
  *(undefined1 **)(unaff_x20 + _DAT_1130113b8) = puVar8;
  *(undefined8 *)(unaff_x20 + _DAT_1130113c0) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar13 + 0x34));
  *(undefined1 *)(unaff_x20 + _DAT_1130113c8) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar13 + 0x38));
  *(undefined1 *)(unaff_x20 + _DAT_1130113d0) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar13 + 0x3c));
  *(undefined8 *)(unaff_x20 + _DAT_1130113d8) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar13 + 0x40));
  *(undefined8 *)(unaff_x20 + _DAT_1130113e0) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar13 + 0x44));
  *(undefined8 *)(unaff_x20 + _DAT_1130113e8) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar13 + 0x48));
  *(undefined8 *)(unaff_x20 + _DAT_1130113f0) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar13 + 0x4c));
  lVar7 = *(long *)((long)param_1 + (long)*(int *)(lVar13 + 0x50));
  if (lVar7 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar2 = *(long *)(lVar7 + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar2 != 0) {
      apuStack_190[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000103e06904(0,lVar2,0);
      puVar9 = apuStack_190[0];
      lVar11 = 0;
      func_0x000103e05718();
      puVar12 = (undefined8 *)(lVar7 + 0x28);
      do {
        uVar15 = puVar12[-1];
        uVar14 = *puVar12;
        lVar7 = lVar11;
        _objc_allocWithZone();
        *(undefined8 *)(lVar7 + _DAT_113011340) = uVar15;
        *(undefined8 *)(lVar7 + _DAT_113011348) = uVar14;
        plVar5 = &lStack_110;
        lStack_110 = lVar7;
        lStack_108 = lVar11;
        _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
        uVar1 = *(ulong *)(puVar9 + 0x10);
        apuStack_190[0] = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
          func_0x000103e06904(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
        }
        puVar12 = puVar12 + 2;
        *(ulong *)(apuStack_190[0] + 0x10) = uVar1 + 1;
        *(long **)(apuStack_190[0] + uVar1 * 8 + 0x20) = plVar5;
        lVar2 = lVar2 + -1;
        puVar9 = apuStack_190[0];
      } while (lVar2 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_1130113f8) = puVar9;
  puVar4 = auStack_100;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  func_0x000103e070ac(param_1,FUN_103df3a28);
  return puVar4;
}



/* Entry: 103e067a0; end: 103e067a3; -[SCAdOpportunityEvent copyWithZone:] */

void FUN_103e067a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e067a4; end: 103e0682f; -[SCAdOpportunityEvent description] */

void FUN_103e067a4(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_103df3a28();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_103e0576c(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000103e070ac(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      FUN_103df3a28);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e06830; end: 103e068ab; -[SCAdOpportunityEvent init] */

void FUN_103e06830(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdOperationalLoggingServices/AdOpportunityEventWrapper.swift",0x3c,2,0x6b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e06878);
  (*pcVar1)();
}



/* Entry: 103e068ac; end: 103e06903; -[SCAdOpportunityEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e068ac(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113011378));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130113b0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130113b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130113f8));
  return;
}



/* Entry: 103e06904; end: 103e069a3;  */

void FUN_103e06904(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103e069a4();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103e069a4; end: 103e06adf;  */

code * FUN_103e069a4(ulong param_1,ulong param_2,ulong param_3,code *param_4,code *param_5,
                    undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103e06ae0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  pcVar2 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    pcVar2 = param_5;
    func_0x000103e06cfc(param_5,param_6,param_7);
    _swift_allocObject();
    pcVar3 = pcVar2;
    _malloc_size();
    pcVar1 = pcVar3 + -0x19;
    if (0x1f < (long)pcVar3) {
      pcVar1 = pcVar3 + -0x20;
    }
    *(ulong *)(pcVar2 + 0x10) = uVar6;
    *(ulong *)(pcVar2 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  pcVar1 = pcVar2 + 0x20;
  pcVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar4 = 0;
    (*param_5)(0);
    _swift_arrayInitWithCopy(pcVar1,pcVar3,uVar6,uVar4);
  }
  else {
    if (pcVar2 != param_4 || pcVar3 + uVar6 * 8 <= pcVar1) {
      _memmove(pcVar1,pcVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return pcVar2;
}



/* Entry: 103e06ae0; end: 103e06d67;  */

undefined * FUN_103e06ae0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103e06be0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x113011440;
    func_0x0001000285a8(0x113011440,&UNK_10dc98808);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 103e06d68; end: 103e070e7;  */

ulong FUN_103e06d68(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103e06e38);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103e06e3c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103e05718(0);
    uVar3 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar3);
    uVar4 = 0;
    func_0x000103e05718(0);
    uVar3 = param_1;
    _swift_dynamicCastClass(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0xd00000000000001d,0x800000010f1bc200);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar4 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103e06f04);
  (*pcVar2)();
}



/* Entry: 103e070e8; end: 103e07107;  */

void FUN_103e070e8(void)

{
  _objc_opt_self(&PTR_PTR_11294e7e0);
  return;
}



/* Entry: 103e07108; end: 103e07117; -[_TtC31SponsoredSnapBannerDataServices31SponsoredSnapBannerDataServices sponsoredSnapBannerDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e07108(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113011450));
  return;
}



/* Entry: 103e07118; end: 103e071df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e07118(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113011448) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113011450) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e071e0; end: 103e0723f; -[_TtC31SponsoredSnapBannerDataServices31SponsoredSnapBannerDataServices init] */

void FUN_103e071e0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SponsoredSnapBannerDataServices.SponsoredSnapBannerDataServices",0x3f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e0720c);
  (*pcVar1)();
}



/* Entry: 103e07240; end: 103e07277; -[_TtC31SponsoredSnapBannerDataServices31SponsoredSnapBannerDataServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e07240(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113011448));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113011450));
  return;
}



/* Entry: 103e07278; end: 103e072af;  */

void FUN_103e07278(undefined8 param_1)

{
  if (lRam00000001130114d8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7c5fb0);
  return;
}



/* Entry: 103e072b0; end: 103e0d81f;  */

long * FUN_103e072b0(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  code *pcVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  
  uVar12 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar12 >> 0x11 & 1) == 0) {
    lVar19 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar19;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar22 = *puVar2;
    uVar28 = puVar2[3];
    uVar23 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar22;
    puVar1[3] = uVar28;
    puVar1[2] = uVar23;
    uVar22 = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar22;
    uVar22 = puVar2[6];
    uVar23 = puVar2[7];
    puVar1[6] = uVar22;
    puVar1[7] = uVar23;
    uVar23 = puVar2[8];
    uVar28 = puVar2[9];
    puVar1[8] = uVar23;
    puVar1[9] = uVar28;
    uVar28 = puVar2[10];
    uVar32 = puVar2[0xb];
    puVar1[10] = uVar28;
    puVar1[0xb] = uVar32;
    uVar32 = puVar2[0xc];
    uVar31 = puVar2[0xd];
    puVar1[0xc] = uVar32;
    puVar1[0xd] = uVar31;
    uVar31 = puVar2[0xe];
    uVar30 = puVar2[0xf];
    puVar1[0xe] = uVar31;
    puVar1[0xf] = uVar30;
    uVar30 = puVar2[0x10];
    puVar1[0x10] = uVar30;
    lVar13 = 0;
    func_0x000100b91d00();
    lVar24 = (long)*(int *)(lVar13 + 0x3c);
    lVar14 = 0;
    __s10Foundation4UUIDVMa();
    lVar17 = *(long *)(lVar14 + -8);
    pcVar27 = *(code **)(lVar17 + 0x30);
    _swift_bridgeObjectRetain(lVar19);
    _swift_bridgeObjectRetain(uVar22);
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar28);
    _swift_bridgeObjectRetain(uVar32);
    _swift_bridgeObjectRetain(uVar31);
    _swift_bridgeObjectRetain(uVar30);
    lVar19 = (long)puVar2 + lVar24;
    (*pcVar27)(lVar19,1,lVar14);
    if ((int)lVar19 == 0) {
      (**(code **)(lVar17 + 0x10))((long)puVar1 + lVar24,(long)puVar2 + lVar24,lVar14);
      (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar24,0,1,lVar14);
    }
    else {
      lVar19 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar24,(long)puVar2 + lVar24,
              *(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
    }
    lVar24 = (long)*(int *)(lVar13 + 0x40);
    lVar19 = (long)puVar2 + lVar24;
    (*pcVar27)(lVar19,1,lVar14);
    if ((int)lVar19 == 0) {
      (**(code **)(lVar17 + 0x10))((long)puVar1 + lVar24,(long)puVar2 + lVar24,lVar14);
      (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar24,0,1,lVar14);
    }
    else {
      lVar19 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar24,(long)puVar2 + lVar24,
              *(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
    }
    lVar24 = (long)*(int *)(lVar13 + 0x44);
    lVar19 = (long)puVar2 + lVar24;
    (*pcVar27)(lVar19,1,lVar14);
    if ((int)lVar19 == 0) {
      (**(code **)(lVar17 + 0x10))((long)puVar1 + lVar24,(long)puVar2 + lVar24,lVar14);
      (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar24,0,1,lVar14);
    }
    else {
      lVar19 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar24,(long)puVar2 + lVar24,
              *(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
    }
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x48)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x48));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x4c)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x4c));
    uVar22 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x50));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x50)) = uVar22;
    uVar23 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x54));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x54)) = uVar23;
    uVar28 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x58));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x58)) = uVar28;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x5c));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x5c));
    lVar19 = puVar4[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar22);
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar28);
    if (lVar19 == 1) {
      uVar22 = puVar4[0xc];
      uVar28 = puVar4[0xf];
      uVar23 = puVar4[0xe];
      puVar3[0xd] = puVar4[0xd];
      puVar3[0xc] = uVar22;
      puVar3[0xf] = uVar28;
      puVar3[0xe] = uVar23;
      uVar22 = puVar4[0x10];
      uVar28 = puVar4[0x13];
      uVar23 = puVar4[0x12];
      puVar3[0x11] = puVar4[0x11];
      puVar3[0x10] = uVar22;
      puVar3[0x13] = uVar28;
      puVar3[0x12] = uVar23;
      uVar22 = puVar4[4];
      uVar28 = puVar4[7];
      uVar23 = puVar4[6];
      puVar3[5] = puVar4[5];
      puVar3[4] = uVar22;
      puVar3[7] = uVar28;
      puVar3[6] = uVar23;
      uVar22 = puVar4[8];
      uVar28 = puVar4[0xb];
      uVar23 = puVar4[10];
      puVar3[9] = puVar4[9];
      puVar3[8] = uVar22;
      puVar3[0xb] = uVar28;
      puVar3[10] = uVar23;
      uVar22 = *puVar4;
      uVar28 = puVar4[3];
      uVar23 = puVar4[2];
      puVar3[1] = puVar4[1];
      *puVar3 = uVar22;
      puVar3[3] = uVar28;
      puVar3[2] = uVar23;
    }
    else {
      *puVar3 = *puVar4;
      puVar3[1] = lVar19;
      uVar22 = puVar4[3];
      puVar3[2] = puVar4[2];
      puVar3[3] = uVar22;
      uVar23 = puVar4[5];
      puVar3[4] = puVar4[4];
      puVar3[5] = uVar23;
      uVar28 = puVar4[7];
      puVar3[6] = puVar4[6];
      puVar3[7] = uVar28;
      uVar32 = puVar4[9];
      puVar3[8] = puVar4[8];
      puVar3[9] = uVar32;
      *(undefined1 *)(puVar3 + 10) = *(undefined1 *)(puVar4 + 10);
      uVar31 = puVar4[0xb];
      puVar3[0xc] = puVar4[0xc];
      puVar3[0xb] = uVar31;
      lVar24 = puVar4[0x12];
      _swift_bridgeObjectRetain(lVar19);
      _swift_bridgeObjectRetain(uVar22);
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(uVar28);
      _swift_bridgeObjectRetain(uVar32);
      if (lVar24 == 0) {
        uVar22 = puVar4[0xd];
        puVar3[0xe] = puVar4[0xe];
        puVar3[0xd] = uVar22;
        uVar22 = puVar4[0xf];
        puVar3[0x10] = puVar4[0x10];
        puVar3[0xf] = uVar22;
        uVar22 = puVar4[0x11];
        puVar3[0x12] = puVar4[0x12];
        puVar3[0x11] = uVar22;
        puVar3[0x13] = puVar4[0x13];
      }
      else {
        uVar22 = puVar4[0xe];
        puVar3[0xd] = puVar4[0xd];
        puVar3[0xe] = uVar22;
        uVar22 = puVar4[0x10];
        puVar3[0xf] = puVar4[0xf];
        puVar3[0x10] = uVar22;
        puVar3[0x11] = puVar4[0x11];
        puVar3[0x12] = lVar24;
        puVar3[0x13] = puVar4[0x13];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar22);
        _swift_bridgeObjectRetain(lVar24);
      }
    }
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x60)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x60));
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 100));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 100));
    lVar19 = puVar4[1];
    if (lVar19 == 1) {
      uVar22 = *puVar4;
      uVar28 = puVar4[3];
      uVar23 = puVar4[2];
      puVar3[1] = puVar4[1];
      *puVar3 = uVar22;
      puVar3[3] = uVar28;
      puVar3[2] = uVar23;
      puVar3[4] = puVar4[4];
    }
    else {
      *puVar3 = *puVar4;
      puVar3[1] = lVar19;
      puVar3[2] = puVar4[2];
      *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(puVar4 + 3);
      *(undefined2 *)((long)puVar3 + 0x19) = *(undefined2 *)((long)puVar4 + 0x19);
      puVar3[4] = puVar4[4];
      _swift_bridgeObjectRetain();
    }
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x68));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x68));
    if (puVar4[0x27] == 0) {
      _memcpy(puVar3,puVar4,0x160);
    }
    else {
      uVar22 = *puVar4;
      puVar3[1] = puVar4[1];
      *puVar3 = uVar22;
      uVar22 = puVar4[2];
      uVar23 = puVar4[3];
      puVar3[2] = uVar22;
      puVar3[3] = uVar23;
      uVar25 = puVar4[4];
      puVar3[4] = uVar25;
      uVar23 = puVar4[5];
      puVar3[6] = puVar4[6];
      puVar3[5] = uVar23;
      uVar23 = puVar4[7];
      uVar28 = puVar4[8];
      puVar3[7] = uVar23;
      puVar3[8] = uVar28;
      *(undefined2 *)(puVar3 + 9) = *(undefined2 *)(puVar4 + 9);
      *(undefined1 *)((long)puVar3 + 0x4a) = *(undefined1 *)((long)puVar4 + 0x4a);
      uVar28 = puVar4[0xb];
      puVar3[10] = puVar4[10];
      puVar3[0xb] = uVar28;
      uVar18 = puVar4[0xc];
      puVar3[0xc] = uVar18;
      *(undefined1 *)(puVar3 + 0xd) = *(undefined1 *)(puVar4 + 0xd);
      uVar32 = puVar4[0xe];
      puVar3[0xf] = puVar4[0xf];
      puVar3[0xe] = uVar32;
      *(undefined1 *)(puVar3 + 0x10) = *(undefined1 *)(puVar4 + 0x10);
      uVar32 = puVar4[0x12];
      puVar3[0x11] = puVar4[0x11];
      puVar3[0x12] = uVar32;
      uVar31 = puVar4[0x14];
      puVar3[0x13] = puVar4[0x13];
      puVar3[0x14] = uVar31;
      uVar30 = puVar4[0x16];
      puVar3[0x15] = puVar4[0x15];
      puVar3[0x16] = uVar30;
      uVar6 = puVar4[0x18];
      puVar3[0x17] = puVar4[0x17];
      puVar3[0x18] = uVar6;
      uVar7 = puVar4[0x1a];
      puVar3[0x19] = puVar4[0x19];
      puVar3[0x1a] = uVar7;
      uVar33 = puVar4[0x1b];
      puVar3[0x1c] = puVar4[0x1c];
      puVar3[0x1b] = uVar33;
      uVar29 = puVar4[0x1d];
      puVar3[0x1d] = uVar29;
      *(undefined1 *)(puVar3 + 0x1e) = *(undefined1 *)(puVar4 + 0x1e);
      *(undefined1 *)((long)puVar3 + 0xf1) = *(undefined1 *)((long)puVar4 + 0xf1);
      *(undefined1 *)((long)puVar3 + 0xf2) = *(undefined1 *)((long)puVar4 + 0xf2);
      uVar33 = puVar4[0x20];
      puVar3[0x1f] = puVar4[0x1f];
      puVar3[0x20] = uVar33;
      uVar8 = puVar4[0x22];
      puVar3[0x21] = puVar4[0x21];
      puVar3[0x22] = uVar8;
      uVar9 = puVar4[0x24];
      puVar3[0x23] = puVar4[0x23];
      puVar3[0x24] = uVar9;
      uVar10 = puVar4[0x26];
      puVar3[0x25] = puVar4[0x25];
      puVar3[0x26] = uVar10;
      uVar20 = puVar4[0x27];
      puVar3[0x27] = uVar20;
      uVar34 = puVar4[0x28];
      puVar3[0x29] = puVar4[0x29];
      puVar3[0x28] = uVar34;
      uVar34 = puVar4[0x2b];
      puVar3[0x2a] = puVar4[0x2a];
      puVar3[0x2b] = uVar34;
      _swift_bridgeObjectRetain(uVar22);
      _swift_bridgeObjectRetain(uVar25);
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(uVar28);
      _swift_bridgeObjectRetain(uVar18);
      _swift_bridgeObjectRetain(uVar32);
      _swift_bridgeObjectRetain(uVar31);
      _swift_bridgeObjectRetain(uVar30);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar29);
      _swift_bridgeObjectRetain(uVar33);
      _swift_bridgeObjectRetain(uVar8);
      _swift_bridgeObjectRetain(uVar9);
      _swift_bridgeObjectRetain(uVar10);
      _swift_bridgeObjectRetain(uVar20);
    }
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x6c));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x6c));
    uVar21 = puVar4[1];
    if (uVar21 >> 0x3c < 0xf) {
      uVar22 = *puVar4;
      func_0x00010006c00c(uVar22,uVar21);
      *puVar3 = uVar22;
      puVar3[1] = uVar21;
    }
    else {
      uVar22 = *puVar4;
      puVar3[1] = puVar4[1];
      *puVar3 = uVar22;
    }
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x70)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x70));
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x74));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x74));
    uVar22 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar22;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x78));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x78));
    uVar22 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar22;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x7c));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x7c));
    uVar23 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar23;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x80));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x80));
    uVar21 = puVar4[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar22);
    _swift_bridgeObjectRetain(uVar23);
    if (uVar21 >> 0x3c < 0xf) {
      uVar22 = *puVar4;
      func_0x00010006c00c(uVar22,uVar21);
      *puVar3 = uVar22;
      puVar3[1] = uVar21;
    }
    else {
      uVar22 = *puVar4;
      puVar3[1] = puVar4[1];
      *puVar3 = uVar22;
    }
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x84));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x84));
    lVar19 = 0;
    func_0x000100b91fbc();
    lVar24 = *(long *)(lVar19 + -8);
    puVar15 = puVar4;
    (**(code **)(lVar24 + 0x30))(puVar4,1,lVar19);
    if ((int)puVar15 == 0) {
      uVar22 = puVar4[1];
      *puVar3 = *puVar4;
      puVar3[1] = uVar22;
      uVar22 = puVar4[2];
      uVar28 = puVar4[5];
      uVar23 = puVar4[4];
      puVar3[3] = puVar4[3];
      puVar3[2] = uVar22;
      puVar3[5] = uVar28;
      puVar3[4] = uVar23;
      uVar22 = puVar4[6];
      uVar23 = puVar4[7];
      puVar3[6] = uVar22;
      puVar3[7] = uVar23;
      uVar23 = puVar4[8];
      puVar3[8] = uVar23;
      lVar26 = (long)*(int *)(lVar19 + 0x28);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar22);
      _swift_bridgeObjectRetain(uVar23);
      lVar16 = (long)puVar4 + lVar26;
      (*pcVar27)(lVar16,1,lVar14);
      if ((int)lVar16 == 0) {
        (**(code **)(lVar17 + 0x10))((long)puVar3 + lVar26,(long)puVar4 + lVar26,lVar14);
        (**(code **)(lVar17 + 0x38))((long)puVar3 + lVar26,0,1,lVar14);
      }
      else {
        lVar16 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar3 + lVar26,(long)puVar4 + lVar26,
                *(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
      }
      puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x2c));
      puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x2c));
      uVar22 = puVar5[1];
      *puVar15 = *puVar5;
      puVar15[1] = uVar22;
      puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x30));
      puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x30));
      uVar22 = puVar5[1];
      *puVar15 = *puVar5;
      puVar15[1] = uVar22;
      lVar26 = (long)*(int *)(lVar19 + 0x34);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar22);
      lVar16 = (long)puVar4 + lVar26;
      (*pcVar27)(lVar16,1,lVar14);
      if ((int)lVar16 == 0) {
        (**(code **)(lVar17 + 0x10))((long)puVar3 + lVar26,(long)puVar4 + lVar26,lVar14);
        (**(code **)(lVar17 + 0x38))((long)puVar3 + lVar26,0,1,lVar14);
      }
      else {
        lVar14 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar3 + lVar26,(long)puVar4 + lVar26,
                *(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
      }
      puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x38));
      puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x38));
      uVar22 = puVar5[1];
      *puVar15 = *puVar5;
      puVar15[1] = uVar22;
      puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x3c));
      puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x3c));
      uVar22 = puVar4[1];
      *puVar15 = *puVar4;
      puVar15[1] = uVar22;
      pcVar27 = *(code **)(lVar24 + 0x38);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar22);
      (*pcVar27)(puVar3,0,1,lVar19);
    }
    else {
      lVar19 = 0x112db39a8;
      func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
      _memcpy(puVar3,puVar4,*(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
    }
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x88));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x88));
    lVar19 = puVar4[1];
    if (lVar19 == 0) {
      uVar22 = puVar4[0x10];
      uVar28 = puVar4[0x13];
      uVar23 = puVar4[0x12];
      puVar3[0x11] = puVar4[0x11];
      puVar3[0x10] = uVar22;
      puVar3[0x13] = uVar28;
      puVar3[0x12] = uVar23;
      *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
      uVar22 = puVar4[8];
      uVar28 = puVar4[0xb];
      uVar23 = puVar4[10];
      puVar3[9] = puVar4[9];
      puVar3[8] = uVar22;
      puVar3[0xb] = uVar28;
      puVar3[10] = uVar23;
      uVar28 = puVar4[0xc];
      uVar23 = puVar4[0xf];
      uVar22 = puVar4[0xe];
      puVar3[0xd] = puVar4[0xd];
      puVar3[0xc] = uVar28;
      puVar3[0xf] = uVar23;
      puVar3[0xe] = uVar22;
      uVar22 = *puVar4;
      uVar28 = puVar4[3];
      uVar23 = puVar4[2];
      puVar3[1] = puVar4[1];
      *puVar3 = uVar22;
      puVar3[3] = uVar28;
      puVar3[2] = uVar23;
      uVar28 = puVar4[4];
      uVar23 = puVar4[7];
      uVar22 = puVar4[6];
      puVar3[5] = puVar4[5];
      puVar3[4] = uVar28;
      puVar3[7] = uVar23;
      puVar3[6] = uVar22;
    }
    else {
      *puVar3 = *puVar4;
      puVar3[1] = lVar19;
      lVar19 = puVar4[8];
      _swift_bridgeObjectRetain();
      if (lVar19 == 1) {
        uVar22 = puVar4[2];
        uVar28 = puVar4[5];
        uVar23 = puVar4[4];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar22;
        puVar3[5] = uVar28;
        puVar3[4] = uVar23;
        uVar22 = puVar4[6];
        puVar3[7] = puVar4[7];
        puVar3[6] = uVar22;
        puVar3[8] = puVar4[8];
      }
      else {
        lVar14 = puVar4[4];
        if (lVar14 == 1) {
          uVar22 = puVar4[2];
          uVar28 = puVar4[5];
          uVar23 = puVar4[4];
          puVar3[3] = puVar4[3];
          puVar3[2] = uVar22;
          puVar3[5] = uVar28;
          puVar3[4] = uVar23;
          puVar3[6] = puVar4[6];
        }
        else {
          uVar22 = puVar4[2];
          puVar3[3] = puVar4[3];
          puVar3[2] = uVar22;
          uVar22 = puVar4[5];
          uVar23 = puVar4[6];
          puVar3[4] = lVar14;
          puVar3[5] = uVar22;
          puVar3[6] = uVar23;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar23);
        }
        puVar3[7] = puVar4[7];
        puVar3[8] = lVar19;
        _swift_bridgeObjectRetain(lVar19);
      }
      lVar19 = puVar4[0xf];
      if (lVar19 == 1) {
        uVar22 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar22;
        uVar22 = puVar4[0xb];
        puVar3[0xc] = puVar4[0xc];
        puVar3[0xb] = uVar22;
        uVar22 = puVar4[0xd];
        puVar3[0xe] = puVar4[0xe];
        puVar3[0xd] = uVar22;
        puVar3[0xf] = puVar4[0xf];
      }
      else {
        lVar14 = puVar4[0xb];
        if (lVar14 == 1) {
          uVar22 = puVar4[9];
          puVar3[10] = puVar4[10];
          puVar3[9] = uVar22;
          uVar22 = puVar4[0xb];
          puVar3[0xc] = puVar4[0xc];
          puVar3[0xb] = uVar22;
          puVar3[0xd] = puVar4[0xd];
        }
        else {
          uVar22 = puVar4[9];
          puVar3[10] = puVar4[10];
          puVar3[9] = uVar22;
          uVar22 = puVar4[0xc];
          uVar23 = puVar4[0xd];
          puVar3[0xb] = lVar14;
          puVar3[0xc] = uVar22;
          puVar3[0xd] = uVar23;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar23);
        }
        puVar3[0xe] = puVar4[0xe];
        puVar3[0xf] = lVar19;
        _swift_bridgeObjectRetain(lVar19);
      }
      *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(puVar4 + 0x10);
      uVar22 = puVar4[0x11];
      puVar3[0x12] = puVar4[0x12];
      puVar3[0x11] = uVar22;
      puVar3[0x13] = puVar4[0x13];
      *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
      _swift_bridgeObjectRetain();
    }
    *(undefined4 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x8c)) =
         *(undefined4 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x8c));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x90)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x90));
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x94));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x94));
    uVar22 = *puVar4;
    uVar28 = puVar4[3];
    uVar23 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar22;
    puVar3[3] = uVar28;
    puVar3[2] = uVar23;
    uVar22 = puVar4[4];
    uVar28 = puVar4[7];
    uVar23 = puVar4[6];
    puVar3[5] = puVar4[5];
    puVar3[4] = uVar22;
    puVar3[7] = uVar28;
    puVar3[6] = uVar23;
    uVar28 = puVar4[0xc];
    uVar23 = puVar4[0xf];
    uVar22 = puVar4[0xe];
    puVar3[0xd] = puVar4[0xd];
    puVar3[0xc] = uVar28;
    puVar3[0xf] = uVar23;
    puVar3[0xe] = uVar22;
    uVar28 = puVar4[8];
    uVar23 = puVar4[0xb];
    uVar22 = puVar4[10];
    puVar3[9] = puVar4[9];
    puVar3[8] = uVar28;
    puVar3[0xb] = uVar23;
    puVar3[10] = uVar22;
    uVar22 = *(undefined8 *)((long)puVar4 + 0xa9);
    *(undefined8 *)((long)puVar3 + 0xb1) = *(undefined8 *)((long)puVar4 + 0xb1);
    *(undefined8 *)((long)puVar3 + 0xa9) = uVar22;
    uVar22 = puVar4[0x12];
    uVar28 = puVar4[0x15];
    uVar23 = puVar4[0x14];
    puVar3[0x13] = puVar4[0x13];
    puVar3[0x12] = uVar22;
    puVar3[0x15] = uVar28;
    puVar3[0x14] = uVar23;
    uVar22 = puVar4[0x10];
    puVar3[0x11] = puVar4[0x11];
    puVar3[0x10] = uVar22;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x98)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x98));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x9c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x9c));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xa0)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xa0));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xa4)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xa4));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xa8)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xa8));
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xac));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xac));
    lVar19 = puVar4[1];
    if (lVar19 == 0) {
      uVar22 = *puVar4;
      uVar28 = puVar4[3];
      uVar23 = puVar4[2];
      puVar3[1] = puVar4[1];
      *puVar3 = uVar22;
      puVar3[3] = uVar28;
      puVar3[2] = uVar23;
    }
    else {
      *puVar3 = *puVar4;
      puVar3[1] = lVar19;
      uVar22 = puVar4[3];
      puVar3[2] = puVar4[2];
      puVar3[3] = uVar22;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar22);
    }
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xb0)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xb0));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xb4)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xb4));
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xb8));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xb8));
    lVar19 = puVar4[1];
    if (lVar19 == 0) {
      uVar22 = puVar4[0x10];
      uVar28 = puVar4[0x13];
      uVar23 = puVar4[0x12];
      puVar3[0x11] = puVar4[0x11];
      puVar3[0x10] = uVar22;
      puVar3[0x13] = uVar28;
      puVar3[0x12] = uVar23;
      *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
      uVar22 = puVar4[8];
      uVar28 = puVar4[0xb];
      uVar23 = puVar4[10];
      puVar3[9] = puVar4[9];
      puVar3[8] = uVar22;
      puVar3[0xb] = uVar28;
      puVar3[10] = uVar23;
      uVar28 = puVar4[0xc];
      uVar23 = puVar4[0xf];
      uVar22 = puVar4[0xe];
      puVar3[0xd] = puVar4[0xd];
      puVar3[0xc] = uVar28;
      puVar3[0xf] = uVar23;
      puVar3[0xe] = uVar22;
      uVar22 = *puVar4;
      uVar28 = puVar4[3];
      uVar23 = puVar4[2];
      puVar3[1] = puVar4[1];
      *puVar3 = uVar22;
      puVar3[3] = uVar28;
      puVar3[2] = uVar23;
      uVar28 = puVar4[4];
      uVar23 = puVar4[7];
      uVar22 = puVar4[6];
      puVar3[5] = puVar4[5];
      puVar3[4] = uVar28;
      puVar3[7] = uVar23;
      puVar3[6] = uVar22;
    }
    else {
      *puVar3 = *puVar4;
      puVar3[1] = lVar19;
      lVar19 = puVar4[8];
      _swift_bridgeObjectRetain();
      if (lVar19 == 1) {
        uVar22 = puVar4[2];
        uVar28 = puVar4[5];
        uVar23 = puVar4[4];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar22;
        puVar3[5] = uVar28;
        puVar3[4] = uVar23;
        uVar22 = puVar4[6];
        puVar3[7] = puVar4[7];
        puVar3[6] = uVar22;
        puVar3[8] = puVar4[8];
      }
      else {
        lVar14 = puVar4[4];
        if (lVar14 == 1) {
          uVar22 = puVar4[2];
          uVar28 = puVar4[5];
          uVar23 = puVar4[4];
          puVar3[3] = puVar4[3];
          puVar3[2] = uVar22;
          puVar3[5] = uVar28;
          puVar3[4] = uVar23;
          puVar3[6] = puVar4[6];
        }
        else {
          uVar22 = puVar4[2];
          puVar3[3] = puVar4[3];
          puVar3[2] = uVar22;
          uVar22 = puVar4[5];
          uVar23 = puVar4[6];
          puVar3[4] = lVar14;
          puVar3[5] = uVar22;
          puVar3[6] = uVar23;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar23);
        }
        puVar3[7] = puVar4[7];
        puVar3[8] = lVar19;
        _swift_bridgeObjectRetain(lVar19);
      }
      lVar19 = puVar4[0xf];
      if (lVar19 == 1) {
        uVar22 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar22;
        uVar22 = puVar4[0xb];
        puVar3[0xc] = puVar4[0xc];
        puVar3[0xb] = uVar22;
        uVar22 = puVar4[0xd];
        puVar3[0xe] = puVar4[0xe];
        puVar3[0xd] = uVar22;
        puVar3[0xf] = puVar4[0xf];
      }
      else {
        lVar14 = puVar4[0xb];
        if (lVar14 == 1) {
          uVar22 = puVar4[9];
          puVar3[10] = puVar4[10];
          puVar3[9] = uVar22;
          uVar22 = puVar4[0xb];
          puVar3[0xc] = puVar4[0xc];
          puVar3[0xb] = uVar22;
          puVar3[0xd] = puVar4[0xd];
        }
        else {
          uVar22 = puVar4[9];
          puVar3[10] = puVar4[10];
          puVar3[9] = uVar22;
          uVar22 = puVar4[0xc];
          uVar23 = puVar4[0xd];
          puVar3[0xb] = lVar14;
          puVar3[0xc] = uVar22;
          puVar3[0xd] = uVar23;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar23);
        }
        puVar3[0xe] = puVar4[0xe];
        puVar3[0xf] = lVar19;
        _swift_bridgeObjectRetain(lVar19);
      }
      *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(puVar4 + 0x10);
      uVar22 = puVar4[0x11];
      puVar3[0x12] = puVar4[0x12];
      puVar3[0x11] = uVar22;
      puVar3[0x13] = puVar4[0x13];
      *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
      _swift_bridgeObjectRetain();
    }
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xbc));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xbc));
    lVar19 = puVar4[1];
    if (lVar19 == 0) {
      uVar22 = puVar4[0x10];
      uVar28 = puVar4[0x13];
      uVar23 = puVar4[0x12];
      puVar3[0x11] = puVar4[0x11];
      puVar3[0x10] = uVar22;
      puVar3[0x13] = uVar28;
      puVar3[0x12] = uVar23;
      *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
      uVar22 = puVar4[8];
      uVar28 = puVar4[0xb];
      uVar23 = puVar4[10];
      puVar3[9] = puVar4[9];
      puVar3[8] = uVar22;
      puVar3[0xb] = uVar28;
      puVar3[10] = uVar23;
      uVar28 = puVar4[0xc];
      uVar23 = puVar4[0xf];
      uVar22 = puVar4[0xe];
      puVar3[0xd] = puVar4[0xd];
      puVar3[0xc] = uVar28;
      puVar3[0xf] = uVar23;
      puVar3[0xe] = uVar22;
      uVar22 = *puVar4;
      uVar28 = puVar4[3];
      uVar23 = puVar4[2];
      puVar3[1] = puVar4[1];
      *puVar3 = uVar22;
      puVar3[3] = uVar28;
      puVar3[2] = uVar23;
      uVar28 = puVar4[4];
      uVar23 = puVar4[7];
      uVar22 = puVar4[6];
      puVar3[5] = puVar4[5];
      puVar3[4] = uVar28;
      puVar3[7] = uVar23;
      puVar3[6] = uVar22;
    }
    else {
      *puVar3 = *puVar4;
      puVar3[1] = lVar19;
      lVar19 = puVar4[8];
      _swift_bridgeObjectRetain();
      if (lVar19 == 1) {
        uVar22 = puVar4[2];
        uVar28 = puVar4[5];
        uVar23 = puVar4[4];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar22;
        puVar3[5] = uVar28;
        puVar3[4] = uVar23;
        uVar22 = puVar4[6];
        puVar3[7] = puVar4[7];
        puVar3[6] = uVar22;
        puVar3[8] = puVar4[8];
      }
      else {
        lVar14 = puVar4[4];
        if (lVar14 == 1) {
          uVar22 = puVar4[2];
          uVar28 = puVar4[5];
          uVar23 = puVar4[4];
          puVar3[3] = puVar4[3];
          puVar3[2] = uVar22;
          puVar3[5] = uVar28;
          puVar3[4] = uVar23;
          puVar3[6] = puVar4[6];
        }
        else {
          uVar22 = puVar4[2];
          puVar3[3] = puVar4[3];
          puVar3[2] = uVar22;
          uVar22 = puVar4[5];
          uVar23 = puVar4[6];
          puVar3[4] = lVar14;
          puVar3[5] = uVar22;
          puVar3[6] = uVar23;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar23);
        }
        puVar3[7] = puVar4[7];
        puVar3[8] = lVar19;
        _swift_bridgeObjectRetain(lVar19);
      }
      lVar19 = puVar4[0xf];
      if (lVar19 == 1) {
        uVar22 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar22;
        uVar22 = puVar4[0xb];
        puVar3[0xc] = puVar4[0xc];
        puVar3[0xb] = uVar22;
        uVar22 = puVar4[0xd];
        puVar3[0xe] = puVar4[0xe];
        puVar3[0xd] = uVar22;
        puVar3[0xf] = puVar4[0xf];
      }
      else {
        lVar14 = puVar4[0xb];
        if (lVar14 == 1) {
          uVar22 = puVar4[9];
          puVar3[10] = puVar4[10];
          puVar3[9] = uVar22;
          uVar22 = puVar4[0xb];
          puVar3[0xc] = puVar4[0xc];
          puVar3[0xb] = uVar22;
          puVar3[0xd] = puVar4[0xd];
        }
        else {
          uVar22 = puVar4[9];
          puVar3[10] = puVar4[10];
          puVar3[9] = uVar22;
          uVar22 = puVar4[0xc];
          uVar23 = puVar4[0xd];
          puVar3[0xb] = lVar14;
          puVar3[0xc] = uVar22;
          puVar3[0xd] = uVar23;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar23);
        }
        puVar3[0xe] = puVar4[0xe];
        puVar3[0xf] = lVar19;
        _swift_bridgeObjectRetain(lVar19);
      }
      *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(puVar4 + 0x10);
      uVar22 = puVar4[0x11];
      puVar3[0x12] = puVar4[0x12];
      puVar3[0x11] = uVar22;
      puVar3[0x13] = puVar4[0x13];
      *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
      _swift_bridgeObjectRetain();
    }
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xc0)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xc0));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xc4)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xc4));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 200)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 200));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xcc)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xcc));
    iVar11 = *(int *)(param_3 + 0x1c);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    uVar22 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar22;
    *(undefined1 *)((long)param_1 + (long)iVar11) = *(undefined1 *)((long)param_2 + (long)iVar11);
    iVar11 = *(int *)(param_3 + 0x24);
    uVar28 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) = uVar28;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar11);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar11);
    uVar22 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar22;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    uVar23 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar23;
    _swift_bridgeObjectRetain();
    _objc_retain(uVar28);
    _swift_bridgeObjectRetain(uVar22);
    _swift_bridgeObjectRetain(uVar23);
  }
  else {
    lVar19 = *param_2;
    *param_1 = lVar19;
    uVar21 = (ulong)uVar12 & 0xff;
    param_1 = (long *)(lVar19 + (uVar21 + 0x10 & (uVar21 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 103e0d820; end: 103e0d837;  */

void FUN_103e0d820(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103e0d838; end: 103e0d8cb;  */

void FUN_103e0d838(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_58 = &UNK_10dc988a0;
  lVar1 = 0x13f;
  func_0x000100b91d00();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = &UNK_10dc988a0;
    puStack_40 = &UNK_10dc988b8;
    puStack_38 = &UNK_10dc988d0;
    puStack_30 = &UNK_10dc988e8;
    puStack_28 = &UNK_10dc988e8;
    _swift_initStructMetadata(param_1,0x100,7,&puStack_58,param_1 + 0x10);
  }
  return;
}



/* Entry: 103e0d8cc; end: 103e0d8d7; -[SCSponsoredSnapBannerMetadata feedId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0d8cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113011528);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113011528))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e0d8d8; end: 103e0d8e7; -[SCSponsoredSnapBannerMetadata adResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0d8d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113011530));
  return;
}



/* Entry: 103e0d8e8; end: 103e0d8f3; -[SCSponsoredSnapBannerMetadata conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0d8e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113011538);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113011538))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e0d8f4; end: 103e0d93b;  */

void FUN_103e0d8f4(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e0d93c; end: 103e0d94b; -[SCSponsoredSnapBannerMetadata hasAudio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0d93c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113011540));
  return;
}



/* Entry: 103e0d94c; end: 103e0d95b; -[SCSponsoredSnapBannerMetadata message] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0d94c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113011548));
  return;
}



/* Entry: 103e0d95c; end: 103e0d967; -[SCSponsoredSnapBannerMetadata chatHeadline] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0d95c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113011550))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113011550);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e0d968; end: 103e0d973; -[SCSponsoredSnapBannerMetadata adSyncAttemptId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0d968(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113011558))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113011558);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e0d974; end: 103e0d9cb;  */

void FUN_103e0d974(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e0d9cc; end: 103e0dabb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0d9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113011528);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113011530) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113011538);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113011540) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113011548) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113011550);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113011558);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e0dabc; end: 103e0dc13; -[SCSponsoredSnapBannerMetadata initWithFeedId:adResponse:conversationId:hasAudio:message:chatHeadline:adSyncAttemptId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0dabc(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  )

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar5 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_8 == 0) {
    lVar7 = 0;
    lVar6 = lVar5;
  }
  else {
    lVar7 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar6 = lVar7;
  }
  if (param_9 == 0) {
    param_9 = 0;
    lVar6 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_113011528);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113011530) = param_4;
  puVar1 = (undefined8 *)(param_1 + _DAT_113011538);
  *puVar1 = param_5;
  puVar1[1] = lVar5;
  *(undefined8 *)(param_1 + _DAT_113011540) = param_6;
  *(undefined8 *)(param_1 + _DAT_113011548) = param_7;
  plVar2 = (long *)(param_1 + _DAT_113011550);
  *plVar2 = param_8;
  plVar2[1] = lVar7;
  plVar2 = (long *)(param_1 + _DAT_113011558);
  *plVar2 = param_9;
  plVar2[1] = lVar6;
  puVar3 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar4;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_msgSendSuper2(&lStack_70,puVar3);
  return;
}



/* Entry: 103e0dc14; end: 103e0dc43;  */

void FUN_103e0dc14(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103e0dc44(param_1);
  return;
}



/* Entry: 103e0dc44; end: 103e0de17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e0dc44(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _swift_getObjectType();
  lVar3 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar6 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113011528);
  *puVar1 = *param_1;
  puVar1[1] = uVar6;
  lVar3 = 0;
  FUN_103e07278();
  func_0x000101681be8((long)param_1 + (long)*(int *)(lVar3 + 0x14),puVar4);
  func_0x0001047c0984(0);
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(uVar6);
  func_0x0001047b952c();
  *(undefined1 **)(unaff_x20 + _DAT_113011530) = puVar4;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x18));
  uVar6 = puVar1[1];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113011538);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  if (*(char *)((long)param_1 + (long)*(int *)(lVar3 + 0x1c)) == '\x02') {
    _swift_bridgeObjectRetain(uVar6);
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar6);
    func_0x000107c45a48();
  }
  *(undefined **)(unaff_x20 + _DAT_113011540) = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_113011548) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x20));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
  uVar6 = puVar1[1];
  uVar7 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113011550);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar7;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x28));
  uVar7 = puVar1[1];
  uVar8 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113011558);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar8;
  puVar5 = PTR_s_init_1125d9248;
  _objc_retain();
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  puVar4 = &stack0xffffffffffffffa0;
  _objc_msgSendSuper2(puVar4,puVar5);
  func_0x00010207ff90(param_1);
  return puVar4;
}



/* Entry: 103e0de18; end: 103e0de1b; -[SCSponsoredSnapBannerMetadata copyWithZone:] */

void FUN_103e0de18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e0de1c; end: 103e0de93; -[SCSponsoredSnapBannerMetadata description] */

void FUN_103e0de1c(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_103e07278();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_103e0de94(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x00010207ff90(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


