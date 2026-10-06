/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1044dd664; end: 1044dd6af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044dd664(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113080b18) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044dd6b0; end: 1044dd6b3; -[SCNetworkConnectivityChange copyWithZone:] */

void FUN_1044dd6b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044dd6b4; end: 1044dd6cf; -[SCNetworkConnectivityChange description] */

void FUN_1044dd6b4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044dd6d0; end: 1044dd74b; -[SCNetworkConnectivityChange init] */

void FUN_1044dd6d0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCNetworkConnectivityMonitorServices/SCNetworkConnectivityChangeWrapper.swift",0x4d,2,
             0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dd718);
  (*pcVar1)();
}



/* Entry: 1044dd74c; end: 1044dd74f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044dd74c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113080b18) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044dd750; end: 1044dd75b; -[SCCarrierNetworkInfo carrierISOCountry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044dd750(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113080b60))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113080b60);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044dd75c; end: 1044dd76b; -[SCCarrierNetworkInfo maxConnectionTypeWithinOneWeek] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044dd75c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113080b68);
}



/* Entry: 1044dd76c; end: 1044dd77b; -[SCCarrierNetworkInfo realTimeRadioAccessConnectionType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044dd76c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113080b70);
}



/* Entry: 1044dd77c; end: 1044dd787; -[SCCarrierNetworkInfo realTimeRadioAccessConnectionTechnology] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044dd77c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113080b78))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113080b78);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044dd788; end: 1044dd887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044dd788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080b48);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080b50);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080b58);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080b60);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113080b68) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_113080b70) = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080b78);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044dd888; end: 1044dd8b7;  */

void FUN_1044dd888(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1044dd8b8(param_1);
  return;
}



/* Entry: 1044dd8b8; end: 1044dd9bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044dd8b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getObjectType();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080b48);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080b50);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080b58);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  uVar2 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080b60);
  puVar1[1] = param_1[7];
  *puVar1 = uVar2;
  uVar2 = param_1[9];
  *(undefined8 *)(unaff_x20 + _DAT_113080b68) = param_1[8];
  *(undefined8 *)(unaff_x20 + _DAT_113080b70) = uVar2;
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uVar2 = param_1[10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080b78);
  puVar1[1] = param_1[0xb];
  *puVar1 = uVar2;
  func_0x000101223174(&uStack_40,auStack_90);
  func_0x000101223174(&uStack_50,auStack_90);
  func_0x000101223174(&uStack_60,auStack_90);
  func_0x000101223174(&uStack_70,auStack_90);
  func_0x000101223174(&uStack_80,auStack_90);
  FUN_1044dd9c0(param_1);
  _objc_msgSendSuper2(&stack0xffffffffffffff60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044dd9c0; end: 1044dd9f3;  */

undefined8 FUN_1044dd9c0(undefined8 param_1)

{
  (*(code *)(undefined *)0x1044dcb50)();
  return param_1;
}



/* Entry: 1044dd9f4; end: 1044dd9f7; -[SCCarrierNetworkInfo copyWithZone:] */

void FUN_1044dd9f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044dd9f8; end: 1044dda2b; -[SCCarrierNetworkInfo description] */

void FUN_1044dd9f8(void)

{
  undefined1 auStack_70 [96];
  
  FUN_1044ddb24(auStack_70);
  FUN_1044dd9c0(auStack_70);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044dda2c; end: 1044ddaa7; -[SCCarrierNetworkInfo init] */

void FUN_1044dda2c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCNetworkConnectivityMonitorServices/SCCarrierNetworkInfoWrapper.swift",0x46,2,0x41,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dda74);
  (*pcVar1)();
}



/* Entry: 1044ddaa8; end: 1044ddb23; -[SCCarrierNetworkInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ddaa8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113080b48 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113080b50 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113080b58 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113080b60 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113080b78 + 8))
  ;
  return;
}



/* Entry: 1044ddb24; end: 1044ddbef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ddb24(undefined8 *param_1,long param_2)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_113080b48);
  puVar2 = (undefined8 *)(param_2 + _DAT_113080b50);
  puVar3 = (undefined8 *)(param_2 + _DAT_113080b58);
  puVar4 = (undefined8 *)(param_2 + _DAT_113080b60);
  uVar7 = *(undefined8 *)(param_2 + _DAT_113080b68);
  uVar8 = *(undefined8 *)(param_2 + _DAT_113080b70);
  puVar5 = (undefined8 *)(param_2 + _DAT_113080b78);
  uVar6 = puVar1[1];
  uVar10 = *puVar1;
  uVar9 = puVar2[1];
  uVar12 = puVar2[1];
  uVar11 = *puVar2;
  param_1[1] = puVar1[1];
  *param_1 = uVar10;
  param_1[3] = uVar12;
  param_1[2] = uVar11;
  uVar10 = puVar3[1];
  uVar12 = *puVar3;
  uVar11 = puVar4[1];
  uVar14 = puVar4[1];
  uVar13 = *puVar4;
  param_1[5] = puVar3[1];
  param_1[4] = uVar12;
  param_1[7] = uVar14;
  param_1[6] = uVar13;
  param_1[8] = uVar7;
  param_1[9] = uVar8;
  uVar7 = puVar5[1];
  uVar8 = *puVar5;
  param_1[0xb] = puVar5[1];
  param_1[10] = uVar8;
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar7);
  return;
}



/* Entry: 1044ddbf0; end: 1044ddc0f;  */

void FUN_1044ddbf0(void)

{
  _objc_opt_self(&PTR_PTR_1129c3d48);
  return;
}



/* Entry: 1044ddc10; end: 1044ddc43; +[_TtC30GenAIUniversalLensLaunchParams34GenAIUniversalLensLaunchParamsKeys lensModeKey] */

void FUN_1044ddc10(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e654c49416e6567,0xed000065646f4d73);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ddc44; end: 1044ddc6f; +[_TtC30GenAIUniversalLensLaunchParams34GenAIUniversalLensLaunchParamsKeys featureContextKey] */

void FUN_1044ddc44(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f2040b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ddc70; end: 1044ddc9b; +[_TtC30GenAIUniversalLensLaunchParams34GenAIUniversalLensLaunchParamsKeys useMySelfieAsLensInput] */

void FUN_1044ddc70(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f2040d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ddc9c; end: 1044ddccf; +[_TtC30GenAIUniversalLensLaunchParams34GenAIUniversalLensLaunchParamsKeys friendId] */

void FUN_1044ddc9c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x69724649416e6567,0xed00006449646e65);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ddcd0; end: 1044ddcfb; +[_TtC30GenAIUniversalLensLaunchParams34GenAIUniversalLensLaunchParamsKeys postProcessingOnly] */

void FUN_1044ddcd0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f2040f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ddcfc; end: 1044ddd27; +[_TtC30GenAIUniversalLensLaunchParams34GenAIUniversalLensLaunchParamsKeys generationId] */

void FUN_1044ddcfc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f204110);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ddd28; end: 1044ddd53; +[_TtC30GenAIUniversalLensLaunchParams34GenAIUniversalLensLaunchParamsKeys preferableGenerationMode] */

void FUN_1044ddd28(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f204130);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ddd54; end: 1044ddd9f; +[_TtC30GenAIUniversalLensLaunchParams34GenAIUniversalLensLaunchParamsKeys templateIndex] */

void FUN_1044ddd54(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f204150);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ddda0; end: 1044dddb7; -[_TtC30GenAIUniversalLensLaunchParams34GenAIUniversalLensLaunchParamsKeys init] */

void FUN_1044ddda0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  (*(code *)0x1044ddd80)();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044dddb8; end: 1044dddbb; -[_TtC30GenAIUniversalLensLaunchParams34GenAIUniversalLensLaunchParamsKeys .cxx_destruct] */

void FUN_1044dddb8(void)

{
  return;
}



/* Entry: 1044dddbc; end: 1044ddde7; +[_TtC30GenAIUniversalLensLaunchParams43GenAIUniversalLensLaunchParamsLensModeValue onScreen] */

void FUN_1044dddbc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x65657263735f6e6f,0xe90000000000006e);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ddde8; end: 1044dde33; +[_TtC30GenAIUniversalLensLaunchParams43GenAIUniversalLensLaunchParamsLensModeValue offScreen] */

void FUN_1044ddde8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x657263735f66666f,0xea00000000006e65);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044dde34; end: 1044dde4b; -[_TtC30GenAIUniversalLensLaunchParams43GenAIUniversalLensLaunchParamsLensModeValue init] */

void FUN_1044dde34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  (*(code *)0x1044dde14)();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044dde4c; end: 1044dde4f; -[_TtC30GenAIUniversalLensLaunchParams43GenAIUniversalLensLaunchParamsLensModeValue .cxx_destruct] */

void FUN_1044dde4c(void)

{
  return;
}



/* Entry: 1044dde50; end: 1044dde83; +[_TtC30GenAIUniversalLensLaunchParams49GenAIUniversalLensLaunchParamsFeatureContextValue lensCarousel] */

void FUN_1044dde50(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5241435f534e454c,0xed00004c4553554f);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044dde84; end: 1044ddeab; +[_TtC30GenAIUniversalLensLaunchParams49GenAIUniversalLensLaunchParamsFeatureContextValue snapfeed] */

void FUN_1044dde84(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4445454650414e53,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ddeac; end: 1044ddefb; +[_TtC30GenAIUniversalLensLaunchParams49GenAIUniversalLensLaunchParamsFeatureContextValue aiSnaps] */

void FUN_1044ddeac(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5350414e535f4941,0xec0000004241545f);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ddefc; end: 1044ddf13; -[_TtC30GenAIUniversalLensLaunchParams49GenAIUniversalLensLaunchParamsFeatureContextValue init] */

void FUN_1044ddefc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  (*(code *)0x1044ddedc)();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044ddf14; end: 1044ddf17; -[_TtC30GenAIUniversalLensLaunchParams49GenAIUniversalLensLaunchParamsFeatureContextValue .cxx_destruct] */

void FUN_1044ddf14(void)

{
  return;
}



/* Entry: 1044ddf18; end: 1044ddf33; +[_TtC30GenAIUniversalLensLaunchParams39GenAIUniversalLensLaunchParamsBoolValue enabled] */

void FUN_1044ddf18(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x31,0xe100000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ddf34; end: 1044ddf6f; +[_TtC30GenAIUniversalLensLaunchParams39GenAIUniversalLensLaunchParamsBoolValue disabled] */

void FUN_1044ddf34(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x30,0xe100000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ddf70; end: 1044ddf87; -[_TtC30GenAIUniversalLensLaunchParams39GenAIUniversalLensLaunchParamsBoolValue init] */

void FUN_1044ddf70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  (*(code *)0x1044ddf50)();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044ddf88; end: 1044ddf8b; -[_TtC30GenAIUniversalLensLaunchParams39GenAIUniversalLensLaunchParamsBoolValue .cxx_destruct] */

void FUN_1044ddf88(void)

{
  return;
}



/* Entry: 1044ddf8c; end: 1044ddfbb; +[_TtC30GenAIUniversalLensLaunchParams59GenAIUniversalLensLaunchParamsPreferableGenerationModeValue unspecified] */

void FUN_1044ddf8c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4649434550534e55,0xeb00000000444549);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ddfbc; end: 1044ddfdb; +[_TtC30GenAIUniversalLensLaunchParams59GenAIUniversalLensLaunchParamsPreferableGenerationModeValue sync] */

void FUN_1044ddfbc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x434e5953,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ddfdc; end: 1044de01f; +[_TtC30GenAIUniversalLensLaunchParams59GenAIUniversalLensLaunchParamsPreferableGenerationModeValue async] */

void FUN_1044ddfdc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x434e595341,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044de020; end: 1044de02b; -[_TtC30GenAIUniversalLensLaunchParams59GenAIUniversalLensLaunchParamsPreferableGenerationModeValue init] */

void FUN_1044de020(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  (*(code *)0x1044de000)();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044de02c; end: 1044de067;  */

void FUN_1044de02c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  (*param_3)();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044de068; end: 1044de073;  */

void FUN_1044de068(void)

{
  (*(code *)0x1044de000)();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044de074; end: 1044de0a3;  */

void FUN_1044de074(code *param_1)

{
  (*param_1)();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044de0a4; end: 1044de0ab; -[_TtC30GenAIUniversalLensLaunchParams59GenAIUniversalLensLaunchParamsPreferableGenerationModeValue .cxx_destruct] */

void FUN_1044de0a4(void)

{
  return;
}



/* Entry: 1044de0ac; end: 1044de177; +[SCMusicSnapDocUtilities musicStickerCTItemInstanceWithTrackID:title:artistName:stickerType:trackOffsetMS:lottieURL:] */

void FUN_1044de0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  if (param_8 == 0) {
    param_8 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_8);
  }
  FUN_1044df890(param_3,param_4,param_2,param_5,uVar1,param_6,param_7,param_8,uVar2);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044de178; end: 1044de25f;  */

void FUN_1044de178(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1;
  FUN_1044de26c();
  if (lVar2 != 0) {
    func_0x00010c0ff640(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      _objc_release(lVar2);
    }
    else {
      lVar3 = param_1;
      func_0x00010bf5cc00();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1044de258);
        (*pcVar1)();
      }
      lVar4 = lVar3;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1044de25c);
        (*pcVar1)();
      }
      lVar3 = lVar4;
      func_0x00010bfedf20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1044de260);
        (*pcVar1)();
      }
      func_0x00010c0d38c0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(param_1);
      _objc_release(lVar3);
    }
  }
  return;
}



/* Entry: 1044de260; end: 1044de26b; +[SCMusicSnapDocUtilities getMusicStickerFromSnapDoc:snapDocEditorServices:] */

void FUN_1044de260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _swift_getObjCClassMetadata();
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  FUN_1044de418(param_3,param_4,FUN_1044de178);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044de26c; end: 1044de3ff;  */

undefined8 FUN_1044de26c(ulong param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  puVar2 = PTR_PTR_1126affe8;
  _objc_opt_self(PTR_PTR_1126affe8);
  func_0x00010bfccec0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = &UNK_11077d198;
  _swift_allocObject(&UNK_11077d198,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  pcStack_40 = FUN_1044dfa98;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100ff0b04;
  puStack_48 = &UNK_11077d1b0;
  puStack_38 = puVar3;
  __Block_copy(&puStack_60);
  _swift_release(puStack_38);
  func_0x00010c0ff580();
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar4);
  _objc_release(puVar2);
  if (param_1 != 0) {
    uVar5 = 0;
    FUN_1044e042c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = param_1;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_1,uVar5);
    _objc_release(param_1);
    if (uVar6 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar7 = uVar6;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar7 != 0) {
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1044de400);
          (*pcVar1)();
        }
        uVar5 = *(undefined8 *)(uVar6 + 0x20);
        _objc_retain(uVar5);
      }
      else {
        uVar5 = 0;
        FUN_1044df6d4(0,uVar6,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
      }
      _swift_bridgeObjectRelease(uVar6);
      return uVar5;
    }
    _swift_bridgeObjectRelease(uVar6);
  }
  return 0;
}



/* Entry: 1044de400; end: 1044de417; +[SCMusicSnapDocUtilities getMusicStickerFromSnapDoc:] */

void FUN_1044de400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_getObjCClassMetadata();
  uVar1 = param_3;
  _swift_unknownObjectRetain(param_3);
  FUN_1044de178();
  _swift_unknownObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044de418; end: 1044de487;  */

undefined8 FUN_1044de418(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf9f4a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf8cb40();
  _objc_retainAutoreleasedReturnValue();
  _swift_unknownObjectRelease(param_2);
  uVar2 = uVar1;
  (*param_3)(uVar1);
  _swift_unknownObjectRelease(uVar1);
  return uVar2;
}



/* Entry: 1044de488; end: 1044de493; +[SCMusicSnapDocUtilities getMusicStickerPlaybackLayerIdFromSnapDoc:snapDocEditorServices:] */

void FUN_1044de488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _swift_getObjCClassMetadata();
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  FUN_1044de418(param_3,param_4,FUN_1044de26c);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044de494; end: 1044de513;  */

void FUN_1044de494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _swift_getObjCClassMetadata();
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  FUN_1044de418(param_3,param_4,param_5);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044de514; end: 1044de517;  */

bool FUN_1044de514(long param_1)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1;
  func_0x00010c08c3a0();
  if ((int)lVar3 == 4) {
    lVar3 = param_1;
    func_0x00010bf5cc00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe08);
      (*pcVar1)();
    }
    lVar4 = lVar3;
    func_0x00010bfd8220();
    _objc_release(lVar3);
    if ((int)lVar4 != 0) {
      lVar3 = param_1;
      func_0x00010bf5cc00();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe0c);
        (*pcVar1)();
      }
      lVar4 = lVar3;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe10);
        (*pcVar1)();
      }
      lVar3 = lVar4;
      func_0x00010bfd6be0();
      _objc_release(lVar4);
      if ((int)lVar3 != 0) {
        lVar3 = param_1;
        func_0x00010bf5cc00();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe14);
          (*pcVar1)();
        }
        lVar4 = lVar3;
        func_0x00010bfd91a0();
        _objc_release(lVar3);
        if ((int)lVar4 != 0) {
          lVar3 = param_1;
          func_0x00010bf5cc00();
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe18);
            (*pcVar1)();
          }
          lVar4 = lVar3;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
          if (lVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe1c);
            (*pcVar1)();
          }
          lVar3 = lVar4;
          func_0x00010c0cc820();
          _objc_release(lVar4);
          if ((int)lVar3 == 3) {
            lVar3 = param_1;
            func_0x00010bf5cc00();
            _objc_retainAutoreleasedReturnValue();
            if (lVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe20);
              (*pcVar1)();
            }
            lVar4 = lVar3;
            func_0x00010c0cc0c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar3);
            if (lVar4 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe24);
              (*pcVar1)();
            }
            lVar3 = lVar4;
            func_0x00010bfedf20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar4);
            if (lVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe28);
              (*pcVar1)();
            }
            lVar4 = lVar3;
            func_0x00010bfedf40();
            _objc_release(lVar3);
            if ((int)lVar4 == 0xb) {
              lVar3 = param_1;
              func_0x00010bf5cc00();
              _objc_retainAutoreleasedReturnValue();
              if (lVar3 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe2c);
                (*pcVar1)();
              }
              lVar4 = lVar3;
              func_0x00010c0cc0c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar3);
              if (lVar4 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe30);
                (*pcVar1)();
              }
              lVar3 = lVar4;
              func_0x00010bfedf20();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar4);
              if (lVar3 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe34);
                (*pcVar1)();
              }
              lVar4 = lVar3;
              func_0x00010c0d38c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar3);
              if (lVar4 != 0) {
                _objc_release(lVar4);
                lVar3 = param_1;
                func_0x00010bf5cc00();
                _objc_retainAutoreleasedReturnValue();
                if (lVar3 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe38);
                  (*pcVar1)();
                }
                lVar4 = lVar3;
                func_0x00010c0840e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar3);
                if (lVar4 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe3c);
                  (*pcVar1)();
                }
                lVar3 = lVar4;
                func_0x00010bf96da0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar4);
                if (lVar3 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe40);
                  (*pcVar1)();
                }
                lVar4 = lVar3;
                func_0x00010bf96ee0();
                _objc_release(lVar3);
                if ((int)lVar4 == 9) {
                  return true;
                }
                lVar3 = param_1;
                func_0x00010c08c3a0();
                if ((int)lVar3 == 4) {
                  func_0x00010bf5cc00();
                  _objc_retainAutoreleasedReturnValue();
                  if (param_1 == 0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfb5c);
                    (*pcVar1)();
                  }
                  lVar3 = param_1;
                  func_0x00010c0840e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(param_1);
                  if (lVar3 == 0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfb60);
                    (*pcVar1)();
                  }
                  lVar4 = lVar3;
                  func_0x00010bf96da0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar3);
                  if (lVar4 == 0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfb64);
                    (*pcVar1)();
                  }
                  lVar3 = lVar4;
                  func_0x00010bf96ee0(lVar4);
                  _objc_release(lVar4);
                  bVar2 = (int)lVar3 == 7;
                }
                else {
                  bVar2 = false;
                }
                return bVar2;
              }
            }
          }
        }
      }
    }
  }
  return false;
}



/* Entry: 1044de518; end: 1044de523; +[SCMusicSnapDocUtilities getMusicStickerPlaybacklayerIdFromSnapDoc:] */

void FUN_1044de518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_getObjCClassMetadata();
  uVar1 = param_3;
  _swift_unknownObjectRetain(param_3);
  FUN_1044de26c();
  _swift_unknownObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044de524; end: 1044de74f;  */

void FUN_1044de524(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  _swift_getObjCClassMetadata();
  uVar1 = param_3;
  _swift_unknownObjectRetain(param_3);
  (*param_4)();
  _swift_unknownObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044de750; end: 1044de753;  */

bool FUN_1044de750(long param_1)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1;
  func_0x00010c08c3a0();
  if ((int)lVar3 == 4) {
    func_0x00010bf5cc00();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfb5c);
      (*pcVar1)();
    }
    lVar3 = param_1;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfb60);
      (*pcVar1)();
    }
    lVar4 = lVar3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfb64);
      (*pcVar1)();
    }
    lVar3 = lVar4;
    func_0x00010bf96ee0(lVar4);
    _objc_release(lVar4);
    bVar2 = (int)lVar3 == 7;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 1044de754; end: 1044de7c3; +[SCMusicSnapDocUtilities getMusicPlaybackLayerIdFromSnapDoc:snapDocEditorServices:] */

void FUN_1044de754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _swift_getObjCClassMetadata();
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x0001044de570(param_3,param_4);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044de7c4; end: 1044de7fb; +[SCMusicSnapDocUtilities isMusicTrackPlaybackLayer:] */

uint FUN_1044de7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1044dfab8();
  _objc_release(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 1044de7fc; end: 1044de833; +[SCMusicSnapDocUtilities isMusicStickerPlaybackLayer:] */

uint FUN_1044de7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1044dfb64();
  _objc_release(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 1044de834; end: 1044de837;  */

bool FUN_1044de834(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1;
  func_0x00010c08c3a0();
  if ((int)uVar2 == 4) {
    uVar2 = param_1;
    func_0x00010bf5cc00();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dffbc);
      (*pcVar1)();
    }
    uVar3 = uVar2;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dffc0);
      (*pcVar1)();
    }
    uVar2 = uVar3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dffc4);
      (*pcVar1)();
    }
    uVar3 = uVar2;
    func_0x00010bf96ee0();
    _objc_release(uVar2);
    if ((int)uVar3 == 7) {
      return true;
    }
  }
  uVar2 = param_1;
  FUN_1044dfb64();
  if ((uVar2 & 1) != 0) {
    return true;
  }
  uVar2 = param_1;
  func_0x00010c08c3a0();
  if ((int)uVar2 == 1) {
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dffc8);
      (*pcVar1)();
    }
    uVar2 = param_1;
    func_0x00010bf0b760();
    _objc_release(param_1);
    return (int)uVar2 == 2;
  }
  return false;
}



/* Entry: 1044de838; end: 1044de86f; +[SCMusicSnapDocUtilities isMusicPlaybackLayer:] */

uint FUN_1044de838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0001044dfebc();
  _objc_release(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 1044de870; end: 1044de9bf;  */

bool FUN_1044de870(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  puVar2 = PTR_PTR_1126affe8;
  _objc_opt_self(PTR_PTR_1126affe8);
  func_0x00010bfccec0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = &UNK_11077d238;
  _swift_allocObject(&UNK_11077d238,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  uStack_40 = 0x1044dffc8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100ff0b04;
  puStack_48 = &UNK_11077d250;
  puStack_38 = puVar3;
  __Block_copy(&puStack_60);
  _swift_release(puStack_38);
  func_0x00010c0ff580();
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar4);
  _objc_release(puVar2);
  if (param_2 == 0) {
    bVar1 = false;
  }
  else {
    uVar5 = 0;
    FUN_1044e042c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = param_2;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_2,uVar5);
    _objc_release(param_2);
    if (uVar6 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar7 = uVar6;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg(uVar7);
    }
    _swift_bridgeObjectRelease(uVar6);
    bVar1 = 0 < (long)uVar7;
  }
  return bVar1;
}



/* Entry: 1044de9c0; end: 1044dea17; +[SCMusicSnapDocUtilities snapDocHasTrackId:snapDocEditor:] */

uint FUN_1044de9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_getObjCClassMetadata();
  _swift_unknownObjectRetain(param_4);
  FUN_1044de870(param_3,param_4);
  _swift_unknownObjectRelease(param_4);
  return (uint)param_3 & 1;
}



/* Entry: 1044dea18; end: 1044deb9f;  */

bool FUN_1044dea18(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  puVar2 = PTR_PTR_1126affe8;
  _objc_opt_self(PTR_PTR_1126affe8);
  func_0x00010bfccec0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = &UNK_11077d288;
  _swift_allocObject(&UNK_11077d288,0x40,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined4 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  *(undefined8 *)(puVar3 + 0x30) = param_4;
  *(undefined8 *)(puVar3 + 0x38) = param_5;
  pcStack_60 = FUN_1044e00a0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100ff0b04;
  puStack_68 = &UNK_11077d2a0;
  puStack_58 = puVar3;
  __Block_copy(&puStack_80);
  puVar3 = puStack_58;
  _swift_bridgeObjectRetain(param_4);
  _swift_release(puVar3);
  func_0x00010c0ff580();
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar4);
  _objc_release(puVar2);
  if (param_6 == 0) {
    bVar1 = false;
  }
  else {
    uVar5 = 0;
    FUN_1044e042c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = param_6;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_6,uVar5);
    _objc_release(param_6);
    if (uVar6 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar7 = uVar6;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg(uVar7);
    }
    _swift_bridgeObjectRelease(uVar6);
    bVar1 = 0 < (long)uVar7;
  }
  return bVar1;
}



/* Entry: 1044deba0; end: 1044dec4f; +[SCMusicSnapDocUtilities snapDocHasIdenticalMusicStickerMetadata:stickerType:lottieURL:trackOffsetMs:snapDocEditor:] */

uint FUN_1044deba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  _swift_getObjCClassMetadata(param_1);
  _swift_unknownObjectRetain(param_7);
  FUN_1044dea18(param_3,param_4,param_5,param_2,param_6,param_7);
  _swift_unknownObjectRelease(param_7);
  _swift_bridgeObjectRelease(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 1044dec50; end: 1044df1a3;  */

bool FUN_1044dec50(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 unaff_x20;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  double dVar16;
  double dVar17;
  undefined *puStack_b8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar3 = PTR_PTR_1126affe8;
  _objc_opt_self(PTR_PTR_1126affe8);
  func_0x00010bfccec0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = &UNK_11077d2d8;
  _swift_allocObject(&UNK_11077d2d8,0x18,7);
  *(undefined8 *)(puVar12 + 0x10) = unaff_x20;
  uStack_80 = 0x1044e0494;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  dVar16 = 5.47077039858234e-315;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100ff0b04;
  puStack_88 = &UNK_11077d2f0;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar12;
  __Block_copy(ppuVar4);
  _swift_release(puStack_78);
  uVar13 = param_1;
  func_0x00010c0ff580();
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar4);
  _objc_release(puVar3);
  if (uVar13 == 0) {
    return false;
  }
  uVar5 = 0;
  FUN_1044e042c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar13;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar13,uVar5);
  _objc_release(uVar13);
  if (uVar6 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar13 = uVar6;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar13 != 0) {
    uVar14 = 0;
    do {
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1044df108);
          (*pcVar2)();
        }
        uVar7 = *(ulong *)(uVar6 + uVar14 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar7 = uVar14;
        FUN_1044df6d4(uVar14,uVar6,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
      }
      uVar1 = uVar14 + 1;
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1044df104);
        (*pcVar2)();
      }
      uVar8 = param_1;
      func_0x00010c0ff640();
      _objc_retainAutoreleasedReturnValue();
      if (uVar8 == 0) {
LAB_1044df09c:
        _objc_release(uVar7);
      }
      else {
        uVar15 = uVar8;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        if (uVar15 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1044df19c);
          (*pcVar2)();
        }
        uVar9 = uVar15;
        func_0x00010bfdd960();
        _objc_release(uVar15);
        if ((int)uVar9 == 0) {
          _objc_release(uVar8);
          goto LAB_1044df09c;
        }
        uVar15 = uVar8;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        if (uVar15 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1044df1a4);
          (*pcVar2)();
        }
        uVar9 = uVar15;
        func_0x00010c27a600();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        if (uVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1044df1a0);
          (*pcVar2)();
        }
        uVar15 = param_1;
        func_0x00010bf67240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        if (uVar15 == 0) {
LAB_1044df078:
          _objc_release(uVar8);
          goto LAB_1044df09c;
        }
        uVar5 = 0;
        FUN_1044e042c(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
        uVar9 = uVar15;
        __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar15,uVar5);
        _objc_release(uVar15);
        if (uVar9 >> 0x3e == 0) {
          uVar15 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
          if (3 < uVar15) goto LAB_1044df084;
        }
        else {
          uVar15 = uVar9 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar9) {
            uVar15 = uVar9;
          }
          uVar11 = uVar15;
          __ss18_CocoaArrayWrapperV8endIndexSivg();
          if (3 < (long)uVar11) {
LAB_1044df084:
            _objc_release(uVar8);
            _swift_bridgeObjectRelease(uVar9);
            goto LAB_1044df09c;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        if (uVar15 == 0) {
          _swift_bridgeObjectRelease(uVar9);
          goto LAB_1044df078;
        }
        if ((uVar9 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar9 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1044df10c);
            (*pcVar2)();
          }
          uVar5 = *(undefined8 *)(uVar9 + 0x20);
          _objc_retain(uVar5);
        }
        else {
          uVar5 = 0;
          FUN_1044df6d4(0,uVar9,&PTR_PTR_1126bb2a8,0x112d74ac8);
        }
        uVar10 = uVar5;
        func_0x00010c27a460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        func_0x00010c14e120(uVar10);
        dVar17 = dVar16;
        _objc_release(uVar10);
        if (dVar16 == 0.0) {
          _objc_release(uVar8);
          _swift_bridgeObjectRelease(uVar9);
          dVar16 = dVar17;
        }
        else {
          uVar11 = uVar15 - 1;
          if (SBORROW8(uVar15,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1044df190);
            (*pcVar2)();
          }
          if ((uVar9 & 0xc000000000000001) == 0) {
            if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1044df194);
              (*pcVar2)();
            }
            if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1044df198);
              (*pcVar2)();
            }
            uVar11 = *(ulong *)(uVar9 + uVar11 * 8 + 0x20);
            _objc_retain(uVar11);
          }
          else {
            FUN_1044df6d4(uVar11,uVar9,&PTR_PTR_1126bb2a8,0x112d74ac8);
          }
          _swift_bridgeObjectRelease(uVar9);
          uVar15 = uVar11;
          func_0x00010c27a460(uVar11);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar11);
          func_0x00010c14e120(uVar15);
          dVar16 = dVar17;
          _objc_release(uVar8);
          _objc_release(uVar15);
          if (dVar17 != 0.0) goto LAB_1044df09c;
        }
        puVar12 = puStack_b8;
        _swift_isUniquelyReferenced_nonNull_native();
        puStack_a0 = puStack_b8;
        if (((ulong)puVar12 & 1) == 0) {
          func_0x0001002ecff4(0,*(long *)(puStack_b8 + 0x10) + 1,1);
        }
        uVar8 = *(ulong *)(puStack_a0 + 0x10);
        if (*(ulong *)(puStack_a0 + 0x18) >> 1 <= uVar8) {
          func_0x0001002ecff4(1 < *(ulong *)(puStack_a0 + 0x18),uVar8 + 1,1);
        }
        *(ulong *)(puStack_a0 + 0x10) = uVar8 + 1;
        *(ulong *)(puStack_a0 + uVar8 * 8 + 0x20) = uVar7;
        puStack_b8 = puStack_a0;
      }
      uVar14 = uVar14 + 1;
    } while (uVar1 != uVar13);
  }
  _swift_bridgeObjectRelease(uVar6);
  if (((long)puStack_b8 < 0) || (((ulong)puStack_b8 >> 0x3e & 1) != 0)) {
    puVar12 = puStack_b8;
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  else {
    puVar12 = *(undefined **)(puStack_b8 + 0x10);
  }
  _swift_release(puStack_b8);
  return 0 < (long)puVar12;
}



/* Entry: 1044df1a4; end: 1044df1e3; +[SCMusicSnapDocUtilities snapDocMusicStickerHasDuration:] */

uint FUN_1044df1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  _swift_getObjCClassMetadata();
  uVar2 = param_3;
  _swift_unknownObjectRetain(param_3);
  uVar1 = (uint)uVar2;
  FUN_1044dec50();
  _swift_unknownObjectRelease(param_3);
  return uVar1 & 1;
}



/* Entry: 1044df1e4; end: 1044df3ab;  */

void FUN_1044df1e4(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 unaff_x20;
  ulong uVar9;
  ulong uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  puVar3 = &UNK_11077d328;
  _swift_allocObject(&UNK_11077d328,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  pcStack_70 = FUN_1044e0280;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100ff0b04;
  puStack_78 = &UNK_11077d340;
  puStack_68 = puVar3;
  __Block_copy(&puStack_90);
  _swift_release(puStack_68);
  uVar9 = param_1;
  func_0x00010c0ff5a0();
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar4);
  if (uVar9 != 0) {
    uVar5 = 0;
    FUN_1044e042c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = uVar9;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar9,uVar5);
    _objc_release(uVar9);
    if (uVar6 >> 0x3e == 0) {
      uVar9 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar9 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar9 = uVar6;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar9 != 0) {
      uVar10 = 0;
      do {
        if ((uVar6 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1044df36c);
            (*pcVar2)();
          }
          uVar7 = *(ulong *)(uVar6 + uVar10 * 8 + 0x20);
          _objc_retain(uVar7);
        }
        else {
          uVar7 = uVar10;
          FUN_1044df6d4(uVar10,uVar6,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
        }
        uVar1 = uVar10 + 1;
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1044df368);
          (*pcVar2)();
        }
        uVar8 = param_1;
        func_0x00010bf6c5a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        _objc_release(uVar8);
        uVar10 = uVar10 + 1;
      } while (uVar1 != uVar9);
    }
    _swift_bridgeObjectRelease(uVar6);
  }
  return;
}



/* Entry: 1044df3ac; end: 1044df3df; +[SCMusicSnapDocUtilities deleteAllMusicLayersInSnapDocEditor:] */

void FUN_1044df3ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getObjCClassMetadata();
  _swift_unknownObjectRetain(param_3);
  FUN_1044df1e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 1044df3e0; end: 1044df453; +[SCMusicSnapDocUtilities addMusicPlaybackLayerToSnapDocEditor:musicAssetData:] */

void FUN_1044df3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_4);
  _objc_release(uVar1);
  FUN_1044e0284(param_3,param_4,param_2);
  func_0x00010006c090(param_4,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 1044df454; end: 1044df50f;  */

void FUN_1044df454(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_1044df1e4();
  FUN_1044e0284(param_1,param_2,param_3);
  puVar1 = PTR_PTR_1126b13b8;
  _objc_opt_self(PTR_PTR_1126b13b8);
  puVar2 = PTR_PTR_1126affe8;
  _objc_opt_self(PTR_PTR_1126affe8);
  func_0x00010bfccec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb980(0,0,0,0,0x3ff0000000000000,0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1044df510; end: 1044df637; +[SCMusicSnapDocUtilities addMusicPlaybackLayersToSnapDocEditor:musicAssetData:musicStickerItemInstance:] */

void FUN_1044df510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_4);
  _objc_release(uVar1);
  _swift_getObjCClassMetadata(param_1);
  FUN_1044df1e4(param_3);
  FUN_1044e0284(param_3,param_4,param_2);
  puVar2 = PTR_PTR_1126b13b8;
  _objc_opt_self(PTR_PTR_1126b13b8);
  puVar3 = PTR_PTR_1126affe8;
  _objc_opt_self(PTR_PTR_1126affe8);
  func_0x00010bfccec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb980(0,0,0,0,0x3ff0000000000000,0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010006c090(param_4,param_2);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 1044df638; end: 1044df673; -[SCMusicSnapDocUtilities init] */

void FUN_1044df638(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_1044e03bc();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044df674; end: 1044df6a3;  */

void FUN_1044df674(void)

{
  FUN_1044e03bc();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044df6a4; end: 1044df6d3;  */

bool FUN_1044df6a4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1044df6d4; end: 1044df88f;  */

ulong FUN_1044df6d4(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044df7b8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044df7bc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    uVar3 = *param_3;
    _objc_opt_self(uVar3);
    uVar4 = param_1;
    _swift_dynamicCastObjCClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar4);
    uVar3 = *param_3;
    _objc_opt_self(uVar3);
    uVar4 = param_1;
    _swift_dynamicCastObjCClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1044e042c(0,param_4,param_3);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1044df890);
  (*pcVar2)();
}



/* Entry: 1044df890; end: 1044dfa97;  */

undefined *
FUN_1044df890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  puVar3 = PTR_PTR_1126bc980;
  _objc_allocWithZone(PTR_PTR_1126bc980);
  func_0x00010bfee200();
  func_0x00010c218f80();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  func_0x00010c216240(puVar3);
  _objc_release(param_2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,param_5);
  func_0x00010c16a540(puVar3);
  _objc_release(param_4);
  func_0x00010c20baa0(puVar3);
  func_0x00010c219040(puVar3);
  uVar4 = 0;
  if (param_9 != 0) {
    uVar4 = param_8;
  }
  lVar1 = -0x2000000000000000;
  if (param_9 != 0) {
    lVar1 = param_9;
  }
  _swift_bridgeObjectRetain(param_9);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,lVar1);
  _swift_bridgeObjectRelease(lVar1);
  func_0x00010c1c0fa0(puVar3);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126bc988;
  _objc_allocWithZone(PTR_PTR_1126bc988);
  func_0x00010bfee200();
  func_0x00010c1ca2c0();
  puVar6 = PTR_PTR_1126ba8f8;
  _objc_allocWithZone(PTR_PTR_1126ba8f8);
  func_0x00010bfee200();
  func_0x00010c21acc0();
  puVar7 = PTR_PTR_1126b0cb8;
  _objc_allocWithZone(PTR_PTR_1126b0cb8);
  func_0x00010bfee200();
  puVar8 = PTR_PTR_1126b0cc0;
  _objc_allocWithZone();
  func_0x00010bfee200();
  puVar9 = PTR_PTR_1126b37c0;
  _objc_allocWithZone(PTR_PTR_1126b37c0);
  func_0x00010bfee200();
  func_0x00010c1ac500();
  func_0x00010c196600(puVar7);
  func_0x00010c1b5d40(puVar8);
  puVar10 = puVar8;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar10 != (undefined *)0x0) {
    func_0x00010c1ac580();
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar9);
    _objc_release(puVar10);
    return puVar8;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1044dfa98);
  (*pcVar2)();
}



/* Entry: 1044dfa98; end: 1044dfab7;  */

bool FUN_1044dfa98(long param_1)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1;
  func_0x00010c08c3a0();
  if ((int)lVar3 == 4) {
    lVar3 = param_1;
    func_0x00010bf5cc00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe08);
      (*pcVar1)();
    }
    lVar4 = lVar3;
    func_0x00010bfd8220();
    _objc_release(lVar3);
    if ((int)lVar4 != 0) {
      lVar3 = param_1;
      func_0x00010bf5cc00();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe0c);
        (*pcVar1)();
      }
      lVar4 = lVar3;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe10);
        (*pcVar1)();
      }
      lVar3 = lVar4;
      func_0x00010bfd6be0();
      _objc_release(lVar4);
      if ((int)lVar3 != 0) {
        lVar3 = param_1;
        func_0x00010bf5cc00();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe14);
          (*pcVar1)();
        }
        lVar4 = lVar3;
        func_0x00010bfd91a0();
        _objc_release(lVar3);
        if ((int)lVar4 != 0) {
          lVar3 = param_1;
          func_0x00010bf5cc00();
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe18);
            (*pcVar1)();
          }
          lVar4 = lVar3;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
          if (lVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe1c);
            (*pcVar1)();
          }
          lVar3 = lVar4;
          func_0x00010c0cc820();
          _objc_release(lVar4);
          if ((int)lVar3 == 3) {
            lVar3 = param_1;
            func_0x00010bf5cc00();
            _objc_retainAutoreleasedReturnValue();
            if (lVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe20);
              (*pcVar1)();
            }
            lVar4 = lVar3;
            func_0x00010c0cc0c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar3);
            if (lVar4 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe24);
              (*pcVar1)();
            }
            lVar3 = lVar4;
            func_0x00010bfedf20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar4);
            if (lVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe28);
              (*pcVar1)();
            }
            lVar4 = lVar3;
            func_0x00010bfedf40();
            _objc_release(lVar3);
            if ((int)lVar4 == 0xb) {
              lVar3 = param_1;
              func_0x00010bf5cc00();
              _objc_retainAutoreleasedReturnValue();
              if (lVar3 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe2c);
                (*pcVar1)();
              }
              lVar4 = lVar3;
              func_0x00010c0cc0c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar3);
              if (lVar4 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe30);
                (*pcVar1)();
              }
              lVar3 = lVar4;
              func_0x00010bfedf20();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar4);
              if (lVar3 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe34);
                (*pcVar1)();
              }
              lVar4 = lVar3;
              func_0x00010c0d38c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar3);
              if (lVar4 != 0) {
                _objc_release(lVar4);
                lVar3 = param_1;
                func_0x00010bf5cc00();
                _objc_retainAutoreleasedReturnValue();
                if (lVar3 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe38);
                  (*pcVar1)();
                }
                lVar4 = lVar3;
                func_0x00010c0840e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar3);
                if (lVar4 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe3c);
                  (*pcVar1)();
                }
                lVar3 = lVar4;
                func_0x00010bf96da0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar4);
                if (lVar3 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe40);
                  (*pcVar1)();
                }
                lVar4 = lVar3;
                func_0x00010bf96ee0();
                _objc_release(lVar3);
                if ((int)lVar4 == 9) {
                  return true;
                }
                lVar3 = param_1;
                func_0x00010c08c3a0();
                if ((int)lVar3 == 4) {
                  func_0x00010bf5cc00();
                  _objc_retainAutoreleasedReturnValue();
                  if (param_1 == 0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfb5c);
                    (*pcVar1)();
                  }
                  lVar3 = param_1;
                  func_0x00010c0840e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(param_1);
                  if (lVar3 == 0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfb60);
                    (*pcVar1)();
                  }
                  lVar4 = lVar3;
                  func_0x00010bf96da0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar3);
                  if (lVar4 == 0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfb64);
                    (*pcVar1)();
                  }
                  lVar3 = lVar4;
                  func_0x00010bf96ee0(lVar4);
                  _objc_release(lVar4);
                  bVar2 = (int)lVar3 == 7;
                }
                else {
                  bVar2 = false;
                }
                return bVar2;
              }
            }
          }
        }
      }
    }
  }
  return false;
}



/* Entry: 1044dfab8; end: 1044dfb63;  */

bool FUN_1044dfab8(long param_1)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1;
  func_0x00010c08c3a0();
  if ((int)lVar3 == 4) {
    func_0x00010bf5cc00();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfb5c);
      (*pcVar1)();
    }
    lVar3 = param_1;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfb60);
      (*pcVar1)();
    }
    lVar4 = lVar3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfb64);
      (*pcVar1)();
    }
    lVar3 = lVar4;
    func_0x00010bf96ee0(lVar4);
    _objc_release(lVar4);
    bVar2 = (int)lVar3 == 7;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 1044dfb64; end: 1044e009f;  */

bool FUN_1044dfb64(long param_1)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1;
  func_0x00010c08c3a0();
  if ((int)lVar3 == 4) {
    lVar3 = param_1;
    func_0x00010bf5cc00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe08);
      (*pcVar1)();
    }
    lVar4 = lVar3;
    func_0x00010bfd8220();
    _objc_release(lVar3);
    if ((int)lVar4 != 0) {
      lVar3 = param_1;
      func_0x00010bf5cc00();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe0c);
        (*pcVar1)();
      }
      lVar4 = lVar3;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe10);
        (*pcVar1)();
      }
      lVar3 = lVar4;
      func_0x00010bfd6be0();
      _objc_release(lVar4);
      if ((int)lVar3 != 0) {
        lVar3 = param_1;
        func_0x00010bf5cc00();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe14);
          (*pcVar1)();
        }
        lVar4 = lVar3;
        func_0x00010bfd91a0();
        _objc_release(lVar3);
        if ((int)lVar4 != 0) {
          lVar3 = param_1;
          func_0x00010bf5cc00();
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe18);
            (*pcVar1)();
          }
          lVar4 = lVar3;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
          if (lVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe1c);
            (*pcVar1)();
          }
          lVar3 = lVar4;
          func_0x00010c0cc820();
          _objc_release(lVar4);
          if ((int)lVar3 == 3) {
            lVar3 = param_1;
            func_0x00010bf5cc00();
            _objc_retainAutoreleasedReturnValue();
            if (lVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe20);
              (*pcVar1)();
            }
            lVar4 = lVar3;
            func_0x00010c0cc0c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar3);
            if (lVar4 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe24);
              (*pcVar1)();
            }
            lVar3 = lVar4;
            func_0x00010bfedf20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar4);
            if (lVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe28);
              (*pcVar1)();
            }
            lVar4 = lVar3;
            func_0x00010bfedf40();
            _objc_release(lVar3);
            if ((int)lVar4 == 0xb) {
              lVar3 = param_1;
              func_0x00010bf5cc00();
              _objc_retainAutoreleasedReturnValue();
              if (lVar3 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe2c);
                (*pcVar1)();
              }
              lVar4 = lVar3;
              func_0x00010c0cc0c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar3);
              if (lVar4 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe30);
                (*pcVar1)();
              }
              lVar3 = lVar4;
              func_0x00010bfedf20();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar4);
              if (lVar3 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe34);
                (*pcVar1)();
              }
              lVar4 = lVar3;
              func_0x00010c0d38c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar3);
              if (lVar4 != 0) {
                _objc_release(lVar4);
                lVar3 = param_1;
                func_0x00010bf5cc00();
                _objc_retainAutoreleasedReturnValue();
                if (lVar3 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe38);
                  (*pcVar1)();
                }
                lVar4 = lVar3;
                func_0x00010c0840e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar3);
                if (lVar4 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe3c);
                  (*pcVar1)();
                }
                lVar3 = lVar4;
                func_0x00010bf96da0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar4);
                if (lVar3 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfe40);
                  (*pcVar1)();
                }
                lVar4 = lVar3;
                func_0x00010bf96ee0();
                _objc_release(lVar3);
                if ((int)lVar4 == 9) {
                  return true;
                }
                lVar3 = param_1;
                func_0x00010c08c3a0();
                if ((int)lVar3 == 4) {
                  func_0x00010bf5cc00();
                  _objc_retainAutoreleasedReturnValue();
                  if (param_1 == 0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfb5c);
                    (*pcVar1)();
                  }
                  lVar3 = param_1;
                  func_0x00010c0840e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(param_1);
                  if (lVar3 == 0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfb60);
                    (*pcVar1)();
                  }
                  lVar4 = lVar3;
                  func_0x00010bf96da0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar3);
                  if (lVar4 == 0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dfb64);
                    (*pcVar1)();
                  }
                  lVar3 = lVar4;
                  func_0x00010bf96ee0(lVar4);
                  _objc_release(lVar4);
                  bVar2 = (int)lVar3 == 7;
                }
                else {
                  bVar2 = false;
                }
                return bVar2;
              }
            }
          }
        }
      }
    }
  }
  return false;
}



/* Entry: 1044e00a0; end: 1044e027f;  */

bool FUN_1044e00a0(ulong param_1,long param_2)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar8 = *(ulong *)(unaff_x20 + 0x18);
  iVar2 = *(int *)(unaff_x20 + 0x20);
  uVar6 = *(ulong *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  uVar9 = *(ulong *)(unaff_x20 + 0x38);
  uVar4 = param_1;
  FUN_1044dfb64();
  if ((uVar4 & 1) == 0) {
    return false;
  }
  func_0x00010bf5cc00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1044e0278);
    (*pcVar3)();
  }
  uVar4 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1044e027c);
    (*pcVar3)();
  }
  uVar5 = uVar4;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1044e0280);
    (*pcVar3)();
  }
  uVar4 = uVar5;
  func_0x00010c0d38c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (uVar4 == 0) {
    return false;
  }
  uVar5 = uVar4;
  func_0x00010c277e80();
  if ((uVar5 == uVar8) && (uVar8 = uVar4, func_0x00010c2551e0(), (int)uVar8 == iVar2)) {
    uVar8 = uVar4;
    func_0x00010c0b58e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar8 == 0) {
      lVar7 = -0x2000000000000000;
      if (lVar1 != 0) {
        lVar7 = lVar1;
      }
    }
    else {
      uVar5 = uVar8;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(uVar8);
      uVar8 = 0;
      if (lVar1 != 0) {
        uVar8 = uVar6;
      }
      lVar7 = -0x2000000000000000;
      if (lVar1 != 0) {
        lVar7 = lVar1;
      }
      if (param_2 != 0) {
        if ((uVar5 == uVar8) && (param_2 == lVar7)) {
          _swift_bridgeObjectRetain(lVar1);
          _swift_bridgeObjectRelease(lVar7);
          _swift_bridgeObjectRelease(param_2);
LAB_1044e0230:
          uVar6 = uVar4;
          func_0x00010c2783a0(uVar4);
          _objc_release(uVar4);
          return uVar6 == uVar9;
        }
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar5,param_2,uVar8,lVar7,0);
        _swift_bridgeObjectRetain(lVar1);
        _swift_bridgeObjectRelease(lVar7);
        _swift_bridgeObjectRelease(param_2);
        if ((uVar5 & 1) != 0) goto LAB_1044e0230;
        goto LAB_1044e0250;
      }
    }
    _swift_bridgeObjectRetain(lVar1);
    _objc_release(uVar4);
    _swift_bridgeObjectRelease(lVar7);
  }
  else {
LAB_1044e0250:
    _objc_release(uVar4);
  }
  return false;
}



/* Entry: 1044e0280; end: 1044e0283;  */

bool FUN_1044e0280(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1;
  func_0x00010c08c3a0();
  if ((int)uVar2 == 4) {
    uVar2 = param_1;
    func_0x00010bf5cc00();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dffbc);
      (*pcVar1)();
    }
    uVar3 = uVar2;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dffc0);
      (*pcVar1)();
    }
    uVar2 = uVar3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dffc4);
      (*pcVar1)();
    }
    uVar3 = uVar2;
    func_0x00010bf96ee0();
    _objc_release(uVar2);
    if ((int)uVar3 == 7) {
      return true;
    }
  }
  uVar2 = param_1;
  FUN_1044dfb64();
  if ((uVar2 & 1) != 0) {
    return true;
  }
  uVar2 = param_1;
  func_0x00010c08c3a0();
  if ((int)uVar2 == 1) {
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dffc8);
      (*pcVar1)();
    }
    uVar2 = param_1;
    func_0x00010bf0b760();
    _objc_release(param_1);
    return (int)uVar2 == 2;
  }
  return false;
}



/* Entry: 1044e0284; end: 1044e03bb;  */

void FUN_1044e0284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b3080;
  _objc_opt_self(PTR_PTR_1126b3080);
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_2,param_3);
  func_0x00010bf64b00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = param_1;
  func_0x00010c265b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b25c8;
  _objc_allocWithZone(PTR_PTR_1126b25c8);
  func_0x00010bfee200();
  func_0x00010c1c4880();
  func_0x00010c16a960(puVar3);
  puVar4 = PTR_PTR_1126b25d0;
  _objc_allocWithZone(PTR_PTR_1126b25d0);
  func_0x00010bfee200();
  func_0x00010c1c4020();
  puVar5 = PTR_PTR_1126affe8;
  _objc_opt_self(PTR_PTR_1126affe8);
  func_0x00010bfccec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa9a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1044e03bc; end: 1044e042b;  */

void FUN_1044e03bc(void)

{
  _objc_opt_self(&PTR_PTR_1129c41b0);
  return;
}



/* Entry: 1044e042c; end: 1044e046b;  */

void FUN_1044e042c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1044e046c; end: 1044e0497;  */

void FUN_1044e046c(long param_1,long param_2)

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



/* Entry: 1044e0498; end: 1044e054b;  */

void FUN_1044e0498(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long in_x5;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(in_x5 + 0x10,auStack_58,0,0);
  in_x5 = in_x5 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (in_x5 != 0) {
    if (param_2 != 0) {
      uVar1 = 0;
      func_0x0001019c8110(0);
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_2,uVar1);
    }
    func_0x00010c2a6de0(in_x5);
    _swift_unknownObjectRelease(in_x5);
    _objc_release(param_2);
  }
  return;
}



/* Entry: 1044e054c; end: 1044e0553;  */

void FUN_1044e054c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    if (param_2 != 0) {
      uVar2 = 0;
      func_0x0001019c8110(0);
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_2,uVar2);
    }
    func_0x00010c2a6de0(lVar1);
    _swift_unknownObjectRelease(lVar1);
    _objc_release(param_2);
  }
  return;
}



/* Entry: 1044e0554; end: 1044e0587;  */

void FUN_1044e0554(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*param_1,param_1[1],*(undefined1 *)(param_1 + 2),*(undefined1 *)((long)param_1 + 0x11),
             param_1[3]);
  return;
}



/* Entry: 1044e0588; end: 1044e060b;  */

void FUN_1044e0588(void)

{
  long in_x4;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(in_x4 + 0x10,auStack_58,0,0);
  in_x4 = in_x4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (in_x4 != 0) {
    func_0x00010c2a6d40();
    _swift_unknownObjectRelease(in_x4);
  }
  return;
}



/* Entry: 1044e060c; end: 1044e0617;  */

void FUN_1044e060c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x00010c2a6d40();
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 1044e0618; end: 1044e06ef;  */

void FUN_1044e0618(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long in_x7;
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(in_x7 + 0x10,auStack_68,0,0);
  in_x7 = in_x7 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (in_x7 != 0) {
    uVar1 = 0;
    if (param_3 != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
      uVar1 = param_2;
    }
    if (param_4 != 0) {
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_4);
    }
    func_0x00010bf76a20(in_x7);
    _swift_unknownObjectRelease(in_x7);
    _objc_release(uVar1);
    _objc_release(param_4);
  }
  return;
}



/* Entry: 1044e06f0; end: 1044e06f7;  */

void FUN_1044e06f0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    uVar2 = 0;
    if (param_3 != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
      uVar2 = param_2;
    }
    if (param_4 != 0) {
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_4);
    }
    func_0x00010bf76a20(lVar1);
    _swift_unknownObjectRelease(lVar1);
    _objc_release(uVar2);
    _objc_release(param_4);
  }
  return;
}



/* Entry: 1044e06f8; end: 1044e072f;  */

void FUN_1044e06f8(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*param_1,param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4),
             *(undefined1 *)((long)param_1 + 0x21),param_1[5]);
  return;
}


