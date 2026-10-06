/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1046a0468; end: 1046a0527; -[SCTooltipImpressionEvent encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a0468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0x4e4f4d4d4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f4d4d4f43,0xe600000000000000);
  func_0x00010bf93020(param_3);
  _objc_release(uVar1);
  uVar1 = 0x544e455645;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544e455645,0xe500000000000000);
  func_0x00010bf93020(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1046a0528; end: 1046a0557;  */

void FUN_1046a0528(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1046a0558(param_1);
  return;
}



/* Entry: 1046a0558; end: 1046a076b;  */

undefined8 FUN_1046a0558(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 unaff_x20;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar2 = 0x4e4f4d4d4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f4d4d4f43,0xe600000000000000);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
LAB_1046a0714:
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar2 = 0;
    FUN_1046a076c(0,0x11308bd50,&PTR_PTR_1126b9150);
    puVar1 = PTR___sypN_11034f1a8;
    plVar4 = &lStack_88;
    _swift_dynamicCast(plVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar2,6);
    lVar3 = lStack_88;
    if (((ulong)plVar4 & 1) != 0) {
      uVar2 = 0x544e455645;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544e455645,0xe500000000000000);
      lVar5 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar5 == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar5);
        _swift_unknownObjectRelease(lVar5);
      }
      uStack_58 = uStack_78;
      uStack_60 = uStack_80;
      lStack_48 = lStack_68;
      uStack_50 = uStack_70;
      if (lStack_68 == 0) {
        _objc_release(param_1);
        param_1 = lVar3;
        goto LAB_1046a0714;
      }
      uVar2 = 0;
      FUN_1046a076c(0,0x11308cbe8,&PTR_PTR_1126b90a8);
      plVar4 = &lStack_88;
      _swift_dynamicCast(plVar4,&uStack_60,puVar1 + 8,uVar2,6);
      if (((ulong)plVar4 & 1) != 0) {
        func_0x00010c000060();
        _objc_release(param_1);
        _objc_release(lStack_88);
        _objc_release(lVar3);
        return unaff_x20;
      }
      _objc_release(param_1);
      param_1 = lVar3;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1046a076c; end: 1046a07ab;  */

void FUN_1046a076c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1046a07ac; end: 1046a07d3; -[SCTooltipImpressionEvent initWithCoder:] */

void FUN_1046a07ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1046a0558();
  return;
}



/* Entry: 1046a07d4; end: 1046a07ef; -[SCTooltipImpressionEvent description] */

void FUN_1046a07d4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046a07f0; end: 1046a086b; -[SCTooltipImpressionEvent init] */

void FUN_1046a07f0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/TooltipImpressionEventWrapper.swift",0x3c,2,0x4a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046a0838);
  (*pcVar1)();
}



/* Entry: 1046a086c; end: 1046a08a3; -[SCTooltipImpressionEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a086c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cbd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308cbe0));
  return;
}



/* Entry: 1046a08a4; end: 1046a08c3;  */

void FUN_1046a08a4(void)

{
  _objc_opt_self(&PTR_PTR_1129d1f88);
  return;
}



/* Entry: 1046a08c4; end: 1046a08c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a08c4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308cbd8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308cbe0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046a08c8; end: 1046a08f7;  */

void FUN_1046a08c8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1046a1148(param_1);
  return;
}



/* Entry: 1046a08f8; end: 1046a0907; -[SCAdWebViewLoadInfo domDownloadLatency] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a08f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cc18));
  return;
}



/* Entry: 1046a0908; end: 1046a0917; -[SCAdWebViewLoadInfo domLoadLatency] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a0908(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cc20));
  return;
}



/* Entry: 1046a0918; end: 1046a0927; -[SCAdWebViewLoadInfo firstContentfulPaintLatency] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a0918(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cc28));
  return;
}



/* Entry: 1046a0928; end: 1046a0937; -[SCAdWebViewLoadInfo fullLoadLatency] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a0928(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cc30));
  return;
}



/* Entry: 1046a0938; end: 1046a0947; -[SCAdWebViewLoadInfo loadProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a0938(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cc38));
  return;
}



/* Entry: 1046a0948; end: 1046a0957; -[SCAdWebViewLoadInfo hasSubsequentNavigation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a0948(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cc40));
  return;
}



/* Entry: 1046a0958; end: 1046a0963; -[SCAdWebViewLoadInfo userAgent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a0958(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308cc48))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308cc48);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1046a0964; end: 1046a096f; -[SCAdWebViewLoadInfo pageURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a0964(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308cc50))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308cc50);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1046a0970; end: 1046a097f; -[SCAdWebViewLoadInfo navigationStartTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a0970(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cc58));
  return;
}



/* Entry: 1046a0980; end: 1046a098f; -[SCAdWebViewLoadInfo responseStartLatencyMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a0980(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cc60));
  return;
}



/* Entry: 1046a0990; end: 1046a099f; -[SCAdWebViewLoadInfo domInteractiveLatencyMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a0990(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cc68));
  return;
}



/* Entry: 1046a09a0; end: 1046a09af; -[SCAdWebViewLoadInfo domContentLoadedStartLatencyMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a09a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cc70));
  return;
}



/* Entry: 1046a09b0; end: 1046a09bf; -[SCAdWebViewLoadInfo domCompleteLatencyMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a09b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cc78));
  return;
}



/* Entry: 1046a09c0; end: 1046a09cb; -[SCAdWebViewLoadInfo resolvedPageUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a09c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308cc80))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308cc80);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1046a09cc; end: 1046a09db; -[SCAdWebViewLoadInfo serverRedirectCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a09cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cc88));
  return;
}



/* Entry: 1046a09dc; end: 1046a09eb; -[SCAdWebViewLoadInfo serverRedirectResolvedTsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a09dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cc90));
  return;
}



/* Entry: 1046a09ec; end: 1046a09f7; -[SCAdWebViewLoadInfo serverRedirectResolvedUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a09ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308cc98))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308cc98);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1046a09f8; end: 1046a0a03; -[SCAdWebViewLoadInfo browseWebviewUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a09f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308cca0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308cca0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1046a0a04; end: 1046a0a0f; -[SCAdWebViewLoadInfo browseFinalResolvedUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a0a04(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308cca8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308cca8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1046a0a10; end: 1046a0a67;  */

void FUN_1046a0a10(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1046a0a68; end: 1046a0a77; -[SCAdWebViewLoadInfo hasPostClickEngagement] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a0a68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308ccb0));
  return;
}



/* Entry: 1046a0a78; end: 1046a0ebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a0a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308cc18) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308cc20) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308cc28) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308cc30) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308cc38) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11308cc40) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308cc48);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308cc50);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11308cc58) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11308cc60) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11308cc68) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_11308cc70) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_11308cc78) = param_15;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308cc80);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_11308cc88) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_11308cc90) = param_19;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308cc98);
  *puVar1 = param_20;
  puVar1[1] = param_21;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308cca0);
  *puVar1 = param_22;
  puVar1[1] = param_23;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308cca8);
  *puVar1 = param_24;
  puVar1[1] = param_25;
  *(undefined8 *)(unaff_x20 + _DAT_11308ccb0) = param_26;
  _objc_msgSendSuper2(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046a0ec0; end: 1046a1147; -[SCAdWebViewLoadInfo initWithDomDownloadLatency:domLoadLatency:firstContentfulPaintLatency:fullLoadLatency:loadProgress:hasSubsequentNavigation:userAgent:pageURL:navigationStartTimestampMs:responseStartLatencyMs:domInteractiveLatencyMs:domContentLoadedStartLatencyMs:domCompleteLatencyMs:resolvedPageUrl:serverRedirectCount:serverRedirectResolvedTsMs:serverRedirectResolvedUrl:browseWebviewUrl:browseFinalResolvedUrl:hasPostClickEngagement:] */

void FUN_1046a0ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,long param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,long param_16,
                  undefined8 param_17,undefined8 param_18,long param_19,long param_20,long param_21,
                  undefined8 param_22)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (param_9 == 0) {
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_80 = param_2;
    uStack_78 = param_9;
  }
  if (param_10 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_90 = param_2;
    uStack_88 = param_10;
  }
  if (param_16 == 0) {
    uStack_a8 = 0;
    uStack_a0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_a8 = param_2;
    uStack_a0 = param_16;
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
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  lVar3 = param_19;
  _objc_retain();
  lVar4 = param_20;
  _objc_retain();
  lVar5 = param_21;
  _objc_retain();
  _objc_retain();
  if (lVar3 == 0) {
    param_19 = 0;
    uVar2 = 0;
    uVar6 = param_2;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar6 = param_2;
    _objc_release(lVar3);
    uVar2 = param_2;
  }
  if (lVar4 == 0) {
    param_20 = 0;
    uVar1 = 0;
    uVar7 = uVar6;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar7 = uVar6;
    _objc_release(lVar4);
    uVar1 = uVar6;
  }
  if (lVar5 == 0) {
    param_21 = 0;
    uVar7 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar5);
  }
  func_0x0001046a0c9c(param_3,param_4,param_5,param_6,param_7,param_8,uStack_78,uStack_80,uStack_88,
                      uStack_90,param_11,param_12,param_13,param_14,param_15,uStack_a0,uStack_a8,
                      param_17,param_18,param_19,uVar2,param_20,uVar1,param_21,uVar7,param_22);
  return;
}



/* Entry: 1046a1148; end: 1046a1657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a1148(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_d0 [16];
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
  
  _swift_getObjectType();
  if (*(char *)(param_1 + 8) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c027c20();
  }
  *(undefined **)(unaff_x20 + _DAT_11308cc18) = puVar2;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c027c20();
  }
  *(undefined **)(unaff_x20 + _DAT_11308cc20) = puVar2;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c027c20();
  }
  *(undefined **)(unaff_x20 + _DAT_11308cc28) = puVar2;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c027c20();
  }
  *(undefined **)(unaff_x20 + _DAT_11308cc30) = puVar2;
  if (*(char *)(param_1 + 0x48) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_11308cc38) = puVar2;
  if (*(char *)(param_1 + 0x49) == '\x02') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010bff91e0();
  }
  *(undefined **)(unaff_x20 + _DAT_11308cc40) = puVar2;
  uStack_68 = *(undefined8 *)(param_1 + 0x58);
  uStack_70 = *(undefined8 *)(param_1 + 0x50);
  uStack_78 = *(undefined8 *)(param_1 + 0x68);
  uStack_80 = *(undefined8 *)(param_1 + 0x60);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308cc48);
  puVar1[1] = uStack_68;
  *puVar1 = uStack_70;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308cc50);
  puVar1[1] = uStack_78;
  *puVar1 = uStack_80;
  if (*(char *)(param_1 + 0x78) == '\x01') {
    FUN_1046a2e24(&uStack_70,&uStack_90,0x112d35ff8,&UNK_10d900cd0);
    FUN_1046a2e24(&uStack_80,&uStack_90,0x112d35ff8,&UNK_10d900cd0);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    FUN_1046a2e24(&uStack_70,&uStack_90,0x112d35ff8,&UNK_10d900cd0);
    FUN_1046a2e24(&uStack_80,&uStack_90,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010c027c20();
  }
  *(undefined **)(unaff_x20 + _DAT_11308cc58) = puVar2;
  if (*(char *)(param_1 + 0x88) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c027c20();
  }
  *(undefined **)(unaff_x20 + _DAT_11308cc60) = puVar2;
  if (*(char *)(param_1 + 0x98) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c027c20();
  }
  *(undefined **)(unaff_x20 + _DAT_11308cc68) = puVar2;
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c027c20();
  }
  *(undefined **)(unaff_x20 + _DAT_11308cc70) = puVar2;
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c027c20();
  }
  *(undefined **)(unaff_x20 + _DAT_11308cc78) = puVar2;
  uStack_88 = *(undefined8 *)(param_1 + 200);
  uStack_90 = *(undefined8 *)(param_1 + 0xc0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308cc80);
  puVar1[1] = uStack_88;
  *puVar1 = uStack_90;
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    FUN_1046a2e24(&uStack_90,&uStack_a0,0x112d35ff8,&UNK_10d900cd0);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    FUN_1046a2e24(&uStack_90,&uStack_a0,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010c027c20();
  }
  *(undefined **)(unaff_x20 + _DAT_11308cc88) = puVar2;
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c027c20();
  }
  *(undefined **)(unaff_x20 + _DAT_11308cc90) = puVar2;
  uStack_98 = *(undefined8 *)(param_1 + 0xf8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xf0);
  uStack_a8 = *(undefined8 *)(param_1 + 0x108);
  uStack_b0 = *(undefined8 *)(param_1 + 0x100);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308cc98);
  puVar1[1] = uStack_98;
  *puVar1 = uStack_a0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308cca0);
  puVar1[1] = uStack_a8;
  *puVar1 = uStack_b0;
  uStack_b8 = *(undefined8 *)(param_1 + 0x118);
  uStack_c0 = *(undefined8 *)(param_1 + 0x110);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308cca8);
  puVar1[1] = uStack_b8;
  *puVar1 = uStack_c0;
  if (*(char *)(param_1 + 0x120) == '\x02') {
    FUN_1046a2e24(&uStack_a0,auStack_d0,0x112d35ff8,&UNK_10d900cd0);
    FUN_1046a2e24(&uStack_b0,auStack_d0,0x112d35ff8,&UNK_10d900cd0);
    FUN_1046a2e24(&uStack_c0,auStack_d0,0x112d35ff8,&UNK_10d900cd0);
    func_0x000104662e2c(param_1);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    FUN_1046a2e24(&uStack_a0,auStack_d0,0x112d35ff8,&UNK_10d900cd0);
    FUN_1046a2e24(&uStack_b0,auStack_d0,0x112d35ff8,&UNK_10d900cd0);
    FUN_1046a2e24(&uStack_c0,auStack_d0,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010bff91e0();
    func_0x000104662e2c(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_11308ccb0) = puVar2;
  _objc_msgSendSuper2(&stack0xffffffffffffff20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046a1658; end: 1046a168b; -[SCAdWebViewLoadInfo hash] */

undefined8 FUN_1046a1658(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1046a168c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1046a168c; end: 1046a1c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a168c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar2 = *(long *)(unaff_x20 + _DAT_11308cc18);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11308cc20);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11308cc28);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11308cc30);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11308cc38);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11308cc40);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11308cc48))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308cc48);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_11308cc50))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308cc50);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  lVar2 = *(long *)(unaff_x20 + _DAT_11308cc58);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11308cc60);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11308cc68);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11308cc70);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11308cc78);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11308cc80))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308cc80);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  lVar2 = *(long *)(unaff_x20 + _DAT_11308cc88);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11308cc90);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11308cc98))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308cc98);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_11308cca0))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308cca0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_11308cca8))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308cca8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  lVar2 = *(long *)(unaff_x20 + _DAT_11308ccb0);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1046a1c50; end: 1046a25c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1046a1c50(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long unaff_x20;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar10 = unaff_x20;
  _swift_getObjectType();
  FUN_1046a2e24(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar3 = &lStack_88;
    _swift_dynamicCast(plVar3,auStack_80,PTR___sypN_11034f1a8 + 8,lVar10,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar8 = *(long *)(unaff_x20 + _DAT_11308cc18);
      lVar10 = *(long *)(lStack_88 + _DAT_11308cc18);
      uVar14 = (uint)(lVar8 == 0 && lVar10 == 0);
      if (lVar8 != 0 && lVar10 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar4 = lVar8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar14 = (uint)lVar4;
        _objc_release(lVar8);
        _objc_release(lVar10);
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11308cc20);
      lVar10 = *(long *)(lStack_88 + _DAT_11308cc20);
      uStack_b0 = (uint)(lVar8 == 0 && lVar10 == 0);
      if (lVar8 != 0 && lVar10 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar4 = lVar8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_b0 = (uint)lVar4;
        _objc_release(lVar8);
        _objc_release(lVar10);
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11308cc28);
      lVar10 = *(long *)(lStack_88 + _DAT_11308cc28);
      uVar13 = (uint)(lVar8 == 0 && lVar10 == 0);
      if ((lVar8 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar4 = lVar8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar13 = (uint)lVar4;
        _objc_release(lVar8);
        _objc_release(lVar10);
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11308cc30);
      lVar10 = *(long *)(lStack_88 + _DAT_11308cc30);
      uStack_8c = (uint)(lVar8 == 0 && lVar10 == 0);
      if ((lVar8 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar4 = lVar8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_8c = (uint)lVar4;
        _objc_release(lVar8);
        _objc_release(lVar10);
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11308cc38);
      lVar10 = *(long *)(lStack_88 + _DAT_11308cc38);
      uStack_90 = (uint)(lVar8 == 0 && lVar10 == 0);
      if ((lVar8 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar4 = lVar8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_90 = (uint)lVar4;
        _objc_release(lVar8);
        _objc_release(lVar10);
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11308cc40);
      lVar10 = *(long *)(lStack_88 + _DAT_11308cc40);
      uStack_94 = (uint)(lVar8 == 0 && lVar10 == 0);
      if ((lVar8 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar4 = lVar8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_94 = (uint)lVar4;
        _objc_release(lVar8);
        _objc_release(lVar10);
      }
      lVar10 = ((long *)(unaff_x20 + _DAT_11308cc48))[1];
      lVar8 = ((long *)(lStack_88 + _DAT_11308cc48))[1];
      uVar1 = (uint)(lVar10 == 0 && lVar8 == 0);
      if ((lVar10 != 0) && (lVar8 != 0)) {
        lVar4 = *(long *)(unaff_x20 + _DAT_11308cc48);
        if ((lVar4 == *(long *)(lStack_88 + _DAT_11308cc48)) && (lVar10 == lVar8)) {
          uVar1 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar1 = (uint)lVar4;
        }
      }
      lVar10 = ((long *)(unaff_x20 + _DAT_11308cc50))[1];
      lVar8 = ((long *)(lStack_88 + _DAT_11308cc50))[1];
      uVar2 = (uint)(lVar10 == 0 && lVar8 == 0);
      if ((lVar10 != 0) && (lVar8 != 0)) {
        lVar4 = *(long *)(unaff_x20 + _DAT_11308cc50);
        if ((lVar4 == *(long *)(lStack_88 + _DAT_11308cc50)) && (lVar10 == lVar8)) {
          uVar2 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar2 = (uint)lVar4;
        }
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11308cc58);
      lVar10 = *(long *)(lStack_88 + _DAT_11308cc58);
      uStack_98 = (uint)(lVar8 == 0 && lVar10 == 0);
      if ((lVar8 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar4 = lVar8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_98 = (uint)lVar4;
        _objc_release(lVar8);
        _objc_release(lVar10);
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11308cc60);
      lVar10 = *(long *)(lStack_88 + _DAT_11308cc60);
      uStack_9c = (uint)(lVar8 == 0 && lVar10 == 0);
      if ((lVar8 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar4 = lVar8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_9c = (uint)lVar4;
        _objc_release(lVar8);
        _objc_release(lVar10);
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11308cc68);
      lVar10 = *(long *)(lStack_88 + _DAT_11308cc68);
      uStack_a0 = (uint)(lVar8 == 0 && lVar10 == 0);
      if ((lVar8 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar4 = lVar8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_a0 = (uint)lVar4;
        _objc_release(lVar8);
        _objc_release(lVar10);
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11308cc70);
      lVar10 = *(long *)(lStack_88 + _DAT_11308cc70);
      uStack_a4 = (uint)(lVar8 == 0 && lVar10 == 0);
      if ((lVar8 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar4 = lVar8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_a4 = (uint)lVar4;
        _objc_release(lVar8);
        _objc_release(lVar10);
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11308cc78);
      lVar10 = *(long *)(lStack_88 + _DAT_11308cc78);
      uStack_a8 = (uint)(lVar8 == 0 && lVar10 == 0);
      if ((lVar8 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar4 = lVar8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_a8 = (uint)lVar4;
        _objc_release(lVar8);
        _objc_release(lVar10);
      }
      lVar10 = ((long *)(unaff_x20 + _DAT_11308cc80))[1];
      lVar8 = ((long *)(lStack_88 + _DAT_11308cc80))[1];
      uVar9 = (uint)(lVar10 == 0 && lVar8 == 0);
      if ((lVar10 != 0) && (lVar8 != 0)) {
        lVar4 = *(long *)(unaff_x20 + _DAT_11308cc80);
        if ((lVar4 == *(long *)(lStack_88 + _DAT_11308cc80)) && (lVar10 == lVar8)) {
          uVar9 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar9 = (uint)lVar4;
        }
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11308cc88);
      lVar10 = *(long *)(lStack_88 + _DAT_11308cc88);
      uStack_ac = (uint)(lVar8 == 0 && lVar10 == 0);
      if ((lVar8 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar4 = lVar8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_ac = (uint)lVar4;
        _objc_release(lVar8);
        _objc_release(lVar10);
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11308cc90);
      lVar10 = *(long *)(lStack_88 + _DAT_11308cc90);
      uVar15 = (uint)(lVar8 == 0 && lVar10 == 0);
      if ((lVar8 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar4 = lVar8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar15 = (uint)lVar4;
        _objc_release(lVar8);
        _objc_release(lVar10);
      }
      lVar10 = ((long *)(unaff_x20 + _DAT_11308cc98))[1];
      lVar8 = ((long *)(lStack_88 + _DAT_11308cc98))[1];
      uVar11 = (uint)(lVar10 == 0 && lVar8 == 0);
      if ((lVar10 != 0) && (lVar8 != 0)) {
        lVar4 = *(long *)(unaff_x20 + _DAT_11308cc98);
        if ((lVar4 == *(long *)(lStack_88 + _DAT_11308cc98)) && (lVar10 == lVar8)) {
          uVar11 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar11 = (uint)lVar4;
        }
      }
      lVar10 = ((long *)(unaff_x20 + _DAT_11308cca0))[1];
      lVar8 = ((long *)(lStack_88 + _DAT_11308cca0))[1];
      uVar12 = (uint)(lVar10 == 0 && lVar8 == 0);
      if ((lVar10 != 0) && (lVar8 != 0)) {
        lVar4 = *(long *)(unaff_x20 + _DAT_11308cca0);
        if ((lVar4 == *(long *)(lStack_88 + _DAT_11308cca0)) && (lVar10 == lVar8)) {
          uVar12 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar12 = (uint)lVar4;
        }
      }
      lVar10 = ((long *)(unaff_x20 + _DAT_11308cca8))[1];
      lVar8 = ((long *)(lStack_88 + _DAT_11308cca8))[1];
      uVar6 = (uint)(lVar10 == 0 && lVar8 == 0);
      if ((lVar10 != 0) && (lVar8 != 0)) {
        lVar4 = *(long *)(unaff_x20 + _DAT_11308cca8);
        if ((lVar4 == *(long *)(lStack_88 + _DAT_11308cca8)) && (lVar10 == lVar8)) {
          uVar6 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar6 = (uint)lVar4;
        }
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11308ccb0);
      lVar10 = *(long *)(lStack_88 + _DAT_11308ccb0);
      if (lVar8 == 0) {
        lVar4 = lVar10;
        _objc_retain(lVar10);
        _objc_release(lStack_88);
        if (lVar10 != 0) {
          uVar7 = 0;
          goto LAB_1046a2518;
        }
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
        lVar4 = lStack_88;
        if (lVar10 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar10);
          _objc_retain(lVar8);
          lVar5 = lVar8;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar7 = (uint)lVar5;
          _objc_release(lVar8);
          _objc_release(lVar10);
        }
LAB_1046a2518:
        _objc_release(lVar4);
      }
      if ((uVar14 & uStack_b0 & uVar13 & uStack_8c & uStack_90 & uStack_94 & uVar1 &
           uVar2 & uStack_98 & uStack_9c & uStack_a0 &
           uStack_a4 & uStack_a8 & uVar9 & uStack_ac & uVar15 & uVar11 & uVar12 & 1) != 0) {
        uVar6 = uVar6 & uVar7;
        goto LAB_1046a259c;
      }
    }
  }
  uVar6 = 0;
LAB_1046a259c:
  return uVar6 & 1;
}



/* Entry: 1046a25c8; end: 1046a2647; -[SCAdWebViewLoadInfo isEqual:] */

uint FUN_1046a25c8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1046a1c50(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1046a2648; end: 1046a264b; -[SCAdWebViewLoadInfo copyWithZone:] */

void FUN_1046a2648(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1046a264c; end: 1046a268b; -[SCAdWebViewLoadInfo description] */

void FUN_1046a264c(void)

{
  undefined1 auStack_148 [296];
  
  _objc_retain();
  FUN_1046a2878(auStack_148);
  func_0x000104662e2c(auStack_148);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046a268c; end: 1046a2707; -[SCAdWebViewLoadInfo init] */

void FUN_1046a268c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdWebViewLoadInfoWrapper.swift",0x37,2,0xa2,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046a26d4);
  (*pcVar1)();
}



/* Entry: 1046a2708; end: 1046a2877; -[SCAdWebViewLoadInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a2708(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cc18));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cc20));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cc28));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cc30));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cc38));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cc40));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308cc48 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308cc50 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cc58));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cc60));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cc68));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cc70));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cc78));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308cc80 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cc88));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cc90));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308cc98 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308cca0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308cca8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308ccb0));
  return;
}



/* Entry: 1046a2878; end: 1046a2e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a2878(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 uVar21;
  long lVar22;
  undefined *puVar23;
  undefined1 uVar24;
  long lVar25;
  long lVar26;
  undefined1 uStack_4bc;
  long lStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  long lStack_498;
  long lStack_488;
  long lStack_478;
  long lStack_468;
  undefined1 uStack_43c;
  long lStack_430;
  long lStack_420;
  long lStack_410;
  long lStack_400;
  undefined1 auStack_3f0 [296];
  long lStack_2c8;
  undefined1 uStack_2c0;
  long lStack_2b8;
  undefined1 uStack_2b0;
  long lStack_2a8;
  undefined1 uStack_2a0;
  long lStack_298;
  undefined1 uStack_290;
  undefined8 uStack_288;
  undefined1 uStack_280;
  undefined1 uStack_27f;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined1 uStack_250;
  long lStack_248;
  undefined1 uStack_240;
  long lStack_238;
  undefined1 uStack_230;
  long lStack_228;
  undefined1 uStack_220;
  long lStack_218;
  undefined1 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined1 uStack_1f0;
  long lStack_1e8;
  undefined1 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  long lStack_1a0;
  undefined1 uStack_198;
  long lStack_190;
  undefined1 uStack_188;
  long lStack_180;
  undefined1 uStack_178;
  long lStack_170;
  undefined1 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined1 uStack_157;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined1 uStack_128;
  long lStack_120;
  undefined1 uStack_118;
  long lStack_110;
  undefined1 uStack_108;
  long lStack_100;
  undefined1 uStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined1 uStack_c8;
  long lStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  lStack_400 = *(long *)(param_3 + _DAT_11308cc18);
  bVar1 = lStack_400 == 0;
  if (bVar1) {
    lStack_400 = 0;
  }
  else {
    func_0x00010c0b4ca0();
  }
  lStack_410 = *(long *)(param_3 + _DAT_11308cc20);
  bVar2 = lStack_410 == 0;
  if (bVar2) {
    lStack_410 = 0;
  }
  else {
    func_0x00010c0b4ca0();
  }
  lStack_420 = *(long *)(param_3 + _DAT_11308cc28);
  bVar3 = lStack_420 == 0;
  if (bVar3) {
    lStack_420 = 0;
  }
  else {
    func_0x00010c0b4ca0();
  }
  lStack_430 = *(long *)(param_3 + _DAT_11308cc30);
  bVar4 = lStack_430 == 0;
  if (bVar4) {
    lStack_430 = 0;
  }
  else {
    func_0x00010c0b4ca0();
  }
  bVar5 = *(long *)(param_3 + _DAT_11308cc38) == 0;
  if (bVar5) {
    param_2 = 0;
  }
  else {
    func_0x00010bf885a0();
  }
  lVar22 = *(long *)(param_3 + _DAT_11308cc40);
  if (lVar22 == 0) {
    uStack_43c = 2;
  }
  else {
    func_0x00010bf1f3c0();
    uStack_43c = (undefined1)lVar22;
  }
  uVar11 = *(undefined8 *)(param_3 + _DAT_11308cc48);
  uVar16 = ((undefined8 *)(param_3 + _DAT_11308cc48))[1];
  uVar12 = *(undefined8 *)(param_3 + _DAT_11308cc50);
  uVar17 = ((undefined8 *)(param_3 + _DAT_11308cc50))[1];
  lStack_468 = *(long *)(param_3 + _DAT_11308cc58);
  bVar6 = lStack_468 == 0;
  if (bVar6) {
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar16);
    lStack_468 = 0;
  }
  else {
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar16);
    func_0x00010c0b4ca0();
  }
  lStack_478 = *(long *)(param_3 + _DAT_11308cc60);
  bVar7 = lStack_478 == 0;
  if (bVar7) {
    lStack_478 = 0;
  }
  else {
    func_0x00010c0b4ca0();
  }
  lStack_488 = *(long *)(param_3 + _DAT_11308cc68);
  bVar8 = lStack_488 == 0;
  if (bVar8) {
    lStack_488 = 0;
  }
  else {
    func_0x00010c0b4ca0();
  }
  lStack_498 = *(long *)(param_3 + _DAT_11308cc70);
  bVar9 = lStack_498 == 0;
  if (bVar9) {
    lStack_498 = 0;
  }
  else {
    func_0x00010c0b4ca0();
  }
  lVar22 = _DAT_11308cc88;
  lStack_4b8 = *(long *)(param_3 + _DAT_11308cc78);
  if (lStack_4b8 == 0) {
    uStack_4a8 = *(undefined8 *)(param_3 + _DAT_11308cc80);
    uStack_4b0 = ((undefined8 *)(param_3 + _DAT_11308cc80))[1];
    puVar23 = &UNK_10dd26698;
    _swift_getKeyPath(&UNK_10dd26698);
    lVar25 = *(long *)(param_3 + lVar22);
    _swift_bridgeObjectRetain(uStack_4b0);
    lStack_4b8 = 0;
    lVar22 = 0;
    uVar24 = 1;
    uStack_4bc = 1;
    uVar21 = 1;
    if (lVar25 == 0) goto LAB_1046a2b80;
  }
  else {
    func_0x00010c0b4ca0();
    lVar22 = _DAT_11308cc88;
    uStack_4a8 = *(undefined8 *)(param_3 + _DAT_11308cc80);
    uStack_4b0 = ((undefined8 *)(param_3 + _DAT_11308cc80))[1];
    puVar23 = &UNK_10dd26698;
    _swift_getKeyPath(&UNK_10dd26698);
    lVar25 = *(long *)(param_3 + lVar22);
    _swift_bridgeObjectRetain(uStack_4b0);
    uStack_4bc = 0;
    uVar21 = 0;
    if (lVar25 == 0) {
      lVar22 = 0;
      uVar24 = 1;
      goto LAB_1046a2b80;
    }
  }
  uStack_4bc = uVar21;
  _objc_retain();
  _objc_retain();
  lVar22 = lVar25;
  func_0x00010c0b4ca0();
  _objc_release(lVar25);
  _objc_release(lVar25);
  uVar24 = 0;
LAB_1046a2b80:
  _swift_release(puVar23);
  lVar25 = *(long *)(param_3 + _DAT_11308cc90);
  bVar10 = lVar25 == 0;
  if (bVar10) {
    lVar25 = 0;
  }
  else {
    func_0x00010c0b4ca0();
  }
  uVar13 = *(undefined8 *)(param_3 + _DAT_11308cc98);
  uVar18 = ((undefined8 *)(param_3 + _DAT_11308cc98))[1];
  uVar14 = *(undefined8 *)(param_3 + _DAT_11308cca0);
  uVar19 = ((undefined8 *)(param_3 + _DAT_11308cca0))[1];
  uVar15 = *(undefined8 *)(param_3 + _DAT_11308cca8);
  uVar20 = ((undefined8 *)(param_3 + _DAT_11308cca8))[1];
  lVar26 = *(long *)(param_3 + _DAT_11308ccb0);
  if (lVar26 == 0) {
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar18);
    _swift_bridgeObjectRetain(uVar19);
    _objc_release(param_3);
    uStack_1a8 = 2;
  }
  else {
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar18);
    _swift_bridgeObjectRetain(uVar19);
    func_0x00010bf1f3c0();
    _objc_release(param_3);
    uStack_1a8 = (char)lVar26;
  }
  lStack_2c8 = lStack_400;
  lStack_1a0 = lStack_400;
  lStack_2b8 = lStack_410;
  lStack_190 = lStack_410;
  lStack_2a8 = lStack_420;
  lStack_180 = lStack_420;
  lStack_298 = lStack_430;
  lStack_170 = lStack_430;
  uStack_27f = uStack_43c;
  lStack_258 = lStack_468;
  lStack_130 = lStack_468;
  lStack_248 = lStack_478;
  lStack_120 = lStack_478;
  lStack_238 = lStack_488;
  lStack_110 = lStack_488;
  lStack_228 = lStack_498;
  lStack_100 = lStack_498;
  lStack_218 = lStack_4b8;
  lStack_f0 = lStack_4b8;
  uStack_210 = uStack_4bc;
  uStack_e0 = uStack_4a8;
  uStack_208 = uStack_4a8;
  uStack_200 = uStack_4b0;
  uStack_d8 = uStack_4b0;
  uStack_2c0 = bVar1;
  uStack_2b0 = bVar2;
  uStack_2a0 = bVar3;
  uStack_290 = bVar4;
  uStack_288 = param_2;
  uStack_280 = bVar5;
  uStack_278 = uVar11;
  uStack_270 = uVar16;
  uStack_268 = uVar12;
  uStack_260 = uVar17;
  uStack_250 = bVar6;
  uStack_240 = bVar7;
  uStack_230 = bVar8;
  uStack_220 = bVar9;
  lStack_1f8 = lVar22;
  uStack_1f0 = uVar24;
  lStack_1e8 = lVar25;
  uStack_1e0 = bVar10;
  uStack_1d8 = uVar13;
  uStack_1d0 = uVar18;
  uStack_1c8 = uVar14;
  uStack_1c0 = uVar19;
  uStack_1b8 = uVar15;
  uStack_1b0 = uVar20;
  uStack_198 = bVar1;
  uStack_188 = bVar2;
  uStack_178 = bVar3;
  uStack_168 = bVar4;
  uStack_160 = param_2;
  uStack_158 = bVar5;
  uStack_157 = uStack_27f;
  uStack_150 = uVar11;
  uStack_148 = uVar16;
  uStack_140 = uVar12;
  uStack_138 = uVar17;
  uStack_128 = bVar6;
  uStack_118 = bVar7;
  uStack_108 = bVar8;
  uStack_f8 = bVar9;
  uStack_e8 = uStack_210;
  lStack_d0 = lVar22;
  uStack_c8 = uVar24;
  lStack_c0 = lVar25;
  uStack_b8 = bVar10;
  uStack_b0 = uVar13;
  uStack_a8 = uVar18;
  uStack_a0 = uVar14;
  uStack_98 = uVar19;
  uStack_90 = uVar15;
  uStack_88 = uVar20;
  uStack_80 = uStack_1a8;
  FUN_104674968(&lStack_2c8,auStack_3f0);
  func_0x000104662e2c(&lStack_1a0);
  _memcpy(param_1,&lStack_2c8,0x121);
  return;
}



/* Entry: 1046a2e24; end: 1046a2e6b;  */

undefined8 FUN_1046a2e24(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1046a2e6c; end: 1046a2e8b;  */

void FUN_1046a2e6c(void)

{
  _objc_opt_self(&PTR_PTR_1129d2060);
  return;
}



/* Entry: 1046a2e8c; end: 1046a2e97;  */

undefined * FUN_1046a2e8c(void)

{
  return PTR_s_longLongValue_11260ad40;
}



/* Entry: 1046a2e98; end: 1046a2ec7;  */

void FUN_1046a2e98(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1046a3240(param_1);
  return;
}



/* Entry: 1046a2ec8; end: 1046a2f97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a2ec8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (*(long *)(unaff_x20 + _DAT_11308cce0) == 0) {
    param_1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1046a168c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  if (*(long *)(unaff_x20 + _DAT_11308cce8) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1046aa038();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308ccf0));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1046a2f98; end: 1046a3113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1046a2f98(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lStack_68;
  long alStack_60 [4];
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_60);
  if (alStack_60[3] == 0) {
    func_0x00010006e7f4(alStack_60);
  }
  else {
    plVar2 = &lStack_68;
    _swift_dynamicCast(plVar2,alStack_60,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar2 & 1) != 0) {
      if (*(long *)(unaff_x20 + _DAT_11308cce0) == 0) {
        uVar6 = (ulong)(*(long *)(lStack_68 + _DAT_11308cce0) == 0);
      }
      else {
        lVar5 = *(long *)(lStack_68 + _DAT_11308cce0);
        if (lVar5 == 0) {
          lVar3 = 0;
          alStack_60[1] = 0;
          alStack_60[2] = 0;
        }
        else {
          lVar3 = 0;
          FUN_1046a2e6c();
        }
        alStack_60[0] = lVar5;
        alStack_60[3] = lVar3;
        _objc_retain(lVar5);
        uVar6 = 0;
        FUN_1046a1c50();
        func_0x00010006e7f4(alStack_60);
      }
      if (*(long *)(unaff_x20 + _DAT_11308cce8) == 0) {
        uVar1 = (uint)(*(long *)(lStack_68 + _DAT_11308cce8) == 0);
      }
      else {
        lVar5 = *(long *)(lStack_68 + _DAT_11308cce8);
        if (lVar5 == 0) {
          lVar3 = 0;
          alStack_60[1] = 0;
          alStack_60[2] = 0;
        }
        else {
          lVar3 = 0;
          FUN_1046aa9c8();
        }
        alStack_60[0] = lVar5;
        alStack_60[3] = lVar3;
        _objc_retain(lVar5);
        plVar2 = alStack_60;
        FUN_1046aa170(plVar2);
        uVar1 = (uint)plVar2;
        func_0x00010006e7f4(alStack_60);
      }
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308ccf0);
      uVar7 = *(undefined8 *)(lStack_68 + _DAT_11308ccf0);
      _objc_release(lStack_68);
      if ((uVar6 & 1) != 0) {
        return uVar1 & (int)uVar4 == (int)uVar7;
      }
    }
  }
  return 0;
}



/* Entry: 1046a3114; end: 1046a3123; -[SCAdWebViewParseResult webViewLoadInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a3114(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cce0));
  return;
}



/* Entry: 1046a3124; end: 1046a3133; -[SCAdWebViewParseResult webviewFirstGAInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a3124(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cce8));
  return;
}



/* Entry: 1046a3134; end: 1046a3143; -[SCAdWebViewParseResult exitMethod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1046a3134(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308ccf0);
}



/* Entry: 1046a3144; end: 1046a31b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a3144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308cce0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308cce8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308ccf0) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046a31b8; end: 1046a323f; -[SCAdWebViewParseResult initWithWebViewLoadInfo:webviewFirstGAInfo:exitMethod:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a31b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308cce0) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308cce8) = param_4;
  *(undefined8 *)(param_1 + _DAT_11308ccf0) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1046a3240; end: 1046a33a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a3240(long param_1)

{
  int iVar1;
  undefined1 *puVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_4f0 [296];
  long lStack_3c8;
  byte bStack_3c0;
  byte bStack_3bf;
  undefined8 uStack_3b8;
  undefined1 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 uStack_3a0;
  undefined1 auStack_290 [296];
  undefined1 auStack_168 [296];
  
  _swift_getObjectType();
  _memcpy(auStack_168,param_1,0x121);
  iVar1 = (int)auStack_168;
  func_0x000104677548();
  if (iVar1 == 1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _memcpy(auStack_290,auStack_168,0x121);
    FUN_1046a2e6c(0);
    _objc_allocWithZone();
    _memcpy(&lStack_3c8,auStack_168,0x121);
    FUN_104674968(&lStack_3c8,auStack_4f0);
    puVar2 = auStack_290;
    FUN_1046a1148();
  }
  *(undefined1 **)(unaff_x20 + _DAT_11308cce0) = puVar2;
  lVar4 = *(long *)(param_1 + 0x128);
  if (lVar4 == 1) {
    plVar3 = (long *)0x0;
  }
  else {
    uStack_3a0 = *(undefined1 *)(param_1 + 0x150);
    uStack_3a8 = *(undefined8 *)(param_1 + 0x148);
    uStack_3b8 = *(undefined8 *)(param_1 + 0x138);
    bStack_3c0 = (byte)*(undefined4 *)(param_1 + 0x130) & 1;
    bStack_3bf = (byte)((uint)*(undefined4 *)(param_1 + 0x130) >> 8) & 1;
    uStack_3b0 = (undefined1)*(undefined8 *)(param_1 + 0x140);
    lStack_3c8 = lVar4;
    FUN_1046aa9c8(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(lVar4);
    plVar3 = &lStack_3c8;
    FUN_1046aa5a0();
  }
  *(long **)(unaff_x20 + _DAT_11308cce8) = plVar3;
  func_0x000104662e94(param_1);
  *(undefined8 *)(unaff_x20 + _DAT_11308ccf0) = *(undefined8 *)(param_1 + 0x158);
  _objc_msgSendSuper2(&stack0xfffffffffffffd60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046a33a4; end: 1046a33d7; -[SCAdWebViewParseResult hash] */

undefined8 FUN_1046a33a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1046a2ec8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1046a33d8; end: 1046a3457; -[SCAdWebViewParseResult isEqual:] */

uint FUN_1046a33d8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1046a2f98(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1046a3458; end: 1046a345b; -[SCAdWebViewParseResult copyWithZone:] */

void FUN_1046a3458(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1046a345c; end: 1046a34a7; -[SCAdWebViewParseResult description] */

void FUN_1046a345c(undefined8 param_1)

{
  undefined1 auStack_180 [352];
  
  _objc_retain();
  FUN_1046a355c(auStack_180);
  _objc_release(param_1);
  func_0x000104662e94(auStack_180);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046a34a8; end: 1046a3523; -[SCAdWebViewParseResult init] */

void FUN_1046a34a8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdWebViewParseResultWrapper.swift",0x3a,2,0x42,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046a34f0);
  (*pcVar1)();
}



/* Entry: 1046a3524; end: 1046a355b; -[SCAdWebViewParseResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a3524(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cce0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308cce8));
  return;
}



/* Entry: 1046a355c; end: 1046a363b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a355c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_1d0 [296];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  if (*(long *)(param_2 + _DAT_11308cce0) == 0) {
    func_0x000104671090(auStack_1d0);
  }
  else {
    _objc_retain();
    FUN_1046a2878(auStack_1d0);
    func_0x0001046710c8(auStack_1d0);
  }
  lVar1 = *(long *)(param_2 + _DAT_11308cce8);
  if (lVar1 == 0) {
    uStack_a8 = 1;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_87 = 0;
    uStack_90 = 0;
    uStack_8f = 0;
    uStack_80 = 0;
  }
  else {
    _objc_retain();
    FUN_1046aa8b0(&uStack_70);
    _objc_release(lVar1);
    uStack_a0 = uStack_68;
    uStack_a8 = uStack_70;
    uStack_90 = uStack_58;
    uStack_98 = uStack_60;
    uStack_87 = (undefined7)uStack_4f;
    uStack_80 = (undefined1)((ulong)uStack_4f >> 0x38);
    uStack_8f = uStack_57;
    uStack_88 = uStack_50;
  }
  uStack_78 = *(undefined8 *)(param_2 + _DAT_11308ccf0);
  _memcpy(param_1,auStack_1d0,0x160);
  return;
}



/* Entry: 1046a363c; end: 1046a365b;  */

void FUN_1046a363c(void)

{
  _objc_opt_self(&PTR_PTR_1129d21c0);
  return;
}



/* Entry: 1046a365c; end: 1046a366b; -[SCAdWebviewAsmEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a365c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cd20));
  return;
}



/* Entry: 1046a366c; end: 1046a3683; -[SCAdWebviewAsmEvent event] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a366c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cd28));
  return;
}



/* Entry: 1046a3684; end: 1046a37c3; -[SCAdWebviewAsmEvent initWithCommon:event:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a3684(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308cd20) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308cd28) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1046a37c4; end: 1046a3847; -[SCAdWebviewAsmEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1046a37c4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308cd20);
  _objc_retain();
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308cd28);
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1046a3848; end: 1046a391f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1046a3848(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    _swift_dynamicCast(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308cd20);
      func_0x00010c071ae0(uVar3);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308cd28);
      uVar4 = *(undefined8 *)(lStack_58 + _DAT_11308cd28);
      _objc_retain(uVar4);
      func_0x00010c071ae0(uVar5);
      _objc_release(uVar4);
      _objc_release(lStack_58);
      return (uint)uVar3 & (uint)uVar5;
    }
  }
  return 0;
}



/* Entry: 1046a3920; end: 1046a399f; -[SCAdWebviewAsmEvent isEqual:] */

uint FUN_1046a3920(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1046a3848(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1046a39a0; end: 1046a39a3; -[SCAdWebviewAsmEvent copyWithZone:] */

void FUN_1046a39a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1046a39a4; end: 1046a39bf; -[SCAdWebviewAsmEvent description] */

void FUN_1046a39a4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046a39c0; end: 1046a3a3b; -[SCAdWebviewAsmEvent init] */

void FUN_1046a39c0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdWebviewAsmEventWrapper.swift",0x37,2,0x39,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046a3a08);
  (*pcVar1)();
}



/* Entry: 1046a3a3c; end: 1046a3a73; -[SCAdWebviewAsmEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a3a3c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cd20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308cd28));
  return;
}



/* Entry: 1046a3a74; end: 1046a3a93;  */

void FUN_1046a3a74(void)

{
  _objc_opt_self(&PTR_PTR_1129d2298);
  return;
}



/* Entry: 1046a3a94; end: 1046a3a97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a3a94(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308cd20) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308cd28) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046a3a98; end: 1046a3aa7; -[SCAdWebviewConfigEvent config] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a3a98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cd58));
  return;
}



/* Entry: 1046a3aa8; end: 1046a3abb; -[SCAdWebviewConfigEvent eventType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1046a3aa8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308cd60);
}



/* Entry: 1046a3abc; end: 1046a3b8f; -[SCAdWebviewConfigEvent initWithConfig:eventType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a3abc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308cd58) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308cd60) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1046a3b90; end: 1046a3c0f; -[SCAdWebviewConfigEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1046a3b90(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308cd58);
  _objc_retain();
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308cd60);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1046a3c10; end: 1046a3ccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1046a3c10(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    _swift_dynamicCast(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308cd58);
      func_0x00010c071ae0(uVar3);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308cd60);
      uVar5 = *(undefined8 *)(lStack_58 + _DAT_11308cd60);
      _objc_release(lStack_58);
      if ((int)uVar4 != (int)uVar5) {
        return 0;
      }
      return (int)uVar3;
    }
  }
  return 0;
}



/* Entry: 1046a3ccc; end: 1046a3d4b; -[SCAdWebviewConfigEvent isEqual:] */

uint FUN_1046a3ccc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1046a3c10(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1046a3d4c; end: 1046a3d4f; -[SCAdWebviewConfigEvent copyWithZone:] */

void FUN_1046a3d4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1046a3d50; end: 1046a3d6b; -[SCAdWebviewConfigEvent description] */

void FUN_1046a3d50(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046a3d6c; end: 1046a3de7; -[SCAdWebviewConfigEvent init] */

void FUN_1046a3d6c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdWebviewConfigEventWrapper.swift",0x3a,2,0x39,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046a3db4);
  (*pcVar1)();
}



/* Entry: 1046a3de8; end: 1046a3df7; -[SCAdWebviewConfigEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a3de8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308cd58));
  return;
}



/* Entry: 1046a3df8; end: 1046a3e17;  */

void FUN_1046a3df8(void)

{
  _objc_opt_self(&PTR_PTR_1129d2368);
  return;
}



/* Entry: 1046a3e18; end: 1046a3e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a3e18(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308cd58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308cd60) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046a3e1c; end: 1046a3f47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1046a3e1c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_190 [160];
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
  
  puVar4 = auStack_1a0;
  lVar1 = 0;
  FUN_10467a0d4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _objc_allocWithZone();
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_78 = param_1[0xf];
  uStack_80 = param_1[0xe];
  uStack_68 = param_1[0x11];
  uStack_70 = param_1[0x10];
  uStack_58 = param_1[0x13];
  uStack_60 = param_1[0x12];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  FUN_10469d938(0);
  _objc_allocWithZone();
  func_0x000102c62cd4(&uStack_f0,auStack_190);
  puVar2 = &uStack_f0;
  FUN_10469d28c();
  *(undefined8 **)(unaff_x20 + _DAT_11308cd90) = puVar2;
  lVar1 = 0;
  FUN_104677908();
  FUN_104677940((long)param_1 + (long)*(int *)(lVar1 + 0x14),puVar3);
  FUN_1046a64d4();
  *(undefined1 **)(unaff_x20 + _DAT_11308cd98) = puVar3;
  _objc_msgSendSuper2(auStack_1a0,PTR_s_init_1125d9248);
  func_0x0001046a445c(param_1);
  return puVar4;
}



/* Entry: 1046a3f48; end: 1046a4057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1046a3f48(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  long lStack_58;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar1 = &lStack_58;
    _swift_dynamicCast(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,unaff_x20,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar6 = *(undefined8 *)(lStack_58 + _DAT_11308cd90);
      uVar2 = 0;
      FUN_10469d938();
      auStack_50[0] = uVar6;
      lStack_38 = uVar2;
      _objc_retain(uVar6);
      puVar3 = auStack_50;
      FUN_10469c8c4(puVar3);
      func_0x00010006e7f4(auStack_50);
      uVar6 = *(undefined8 *)(lStack_58 + _DAT_11308cd98);
      uVar2 = 0;
      FUN_1046a8bb4();
      auStack_50[0] = uVar6;
      lStack_38 = uVar2;
      _objc_retain(uVar6);
      puVar4 = auStack_50;
      FUN_1046a4990(puVar4);
      _objc_release(lStack_58);
      func_0x00010006e7f4(auStack_50);
      uVar5 = (uint)puVar3 & (uint)puVar4;
      goto LAB_1046a4040;
    }
  }
  uVar5 = 0;
LAB_1046a4040:
  return uVar5 & 1;
}



/* Entry: 1046a4058; end: 1046a4067; -[SCAdWebviewEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a4058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cd90));
  return;
}



/* Entry: 1046a4068; end: 1046a4077; -[SCAdWebviewEvent type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a4068(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cd98));
  return;
}



/* Entry: 1046a4078; end: 1046a413f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a4078(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308cd90) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308cd98) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046a4140; end: 1046a41b7; -[SCAdWebviewEvent initWithCommon:type:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a4140(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308cd90) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308cd98) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1046a41b8; end: 1046a4237; -[SCAdWebviewEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1046a41b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  _objc_retain();
  uVar1 = param_1;
  FUN_10469c63c();
  __ss6HasherV8_combineyySuF();
  FUN_1046a44bc();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1046a4238; end: 1046a42b7; -[SCAdWebviewEvent isEqual:] */

uint FUN_1046a4238(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1046a3f48(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1046a42b8; end: 1046a42bb; -[SCAdWebviewEvent copyWithZone:] */

void FUN_1046a42b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1046a42bc; end: 1046a43a7; -[SCAdWebviewEvent description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a42bc(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 auStack_d0 [20];
  
  lVar3 = 0;
  FUN_104677908();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)((long)auStack_d0 + lVar2);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11308cd90);
  _objc_retain();
  _objc_retain(uVar5);
  FUN_10469d68c(auStack_d0);
  *(undefined8 *)((long)auStack_d0 + lVar2 + 0x48) = auStack_d0[9];
  *(undefined8 *)((long)auStack_d0 + lVar2 + 0x40) = auStack_d0[8];
  *(undefined8 *)((long)auStack_d0 + lVar2 + 0x58) = auStack_d0[0xb];
  *(undefined8 *)((long)auStack_d0 + lVar2 + 0x50) = auStack_d0[10];
  *(undefined8 *)((long)auStack_d0 + lVar2 + 0x28) = auStack_d0[5];
  *(undefined8 *)((long)auStack_d0 + lVar2 + 0x20) = auStack_d0[4];
  *(undefined8 *)((long)auStack_d0 + lVar2 + 0x38) = auStack_d0[7];
  *(undefined8 *)((long)auStack_d0 + lVar2 + 0x30) = auStack_d0[6];
  *(undefined8 *)((long)auStack_d0 + lVar2 + 0x88) = auStack_d0[0x11];
  *(undefined8 *)((long)auStack_d0 + lVar2 + 0x80) = auStack_d0[0x10];
  *(undefined8 *)((long)auStack_d0 + lVar2 + 0x98) = auStack_d0[0x13];
  *(undefined8 *)((long)auStack_d0 + lVar2 + 0x90) = auStack_d0[0x12];
  *(undefined8 *)((long)auStack_d0 + lVar2 + 0x68) = auStack_d0[0xd];
  *(undefined8 *)((long)auStack_d0 + lVar2 + 0x60) = auStack_d0[0xc];
  *(undefined8 *)((long)auStack_d0 + lVar2 + 0x78) = auStack_d0[0xf];
  *(undefined8 *)((long)auStack_d0 + lVar2 + 0x70) = auStack_d0[0xe];
  *(undefined8 *)((long)auStack_d0 + lVar2 + 8) = auStack_d0[1];
  *puVar4 = auStack_d0[0];
  *(undefined8 *)((long)auStack_d0 + lVar2 + 0x18) = auStack_d0[3];
  *(undefined8 *)((long)auStack_d0 + lVar2 + 0x10) = auStack_d0[2];
  iVar1 = *(int *)(lVar3 + 0x14);
  _objc_retain(*(undefined8 *)(param_1 + _DAT_11308cd98));
  func_0x0001046a531c((long)puVar4 + (long)iVar1);
  _objc_release(param_1);
  func_0x0001046a445c(puVar4);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046a43a8; end: 1046a4423; -[SCAdWebviewEvent init] */

void FUN_1046a43a8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdWebviewEventWrapper.swift",0x34,2,0x36,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046a43f0);
  (*pcVar1)();
}



/* Entry: 1046a4424; end: 1046a4497; -[SCAdWebviewEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a4424(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cd90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308cd98));
  return;
}


