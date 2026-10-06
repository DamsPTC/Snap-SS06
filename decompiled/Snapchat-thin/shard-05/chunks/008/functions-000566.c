/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104277f5c; end: 104277f6b; -[SCAdSingleViewingSessionRecord totalLongformViewTimeInMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104277f5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a330);
}



/* Entry: 104277f6c; end: 104277f7b; -[SCAdSingleViewingSessionRecord totalAdViewTimeInMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104277f6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a338);
}



/* Entry: 104277f7c; end: 104277f8b; -[SCAdSingleViewingSessionRecord totalAdLongformViewTimeInMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104277f7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a340);
}



/* Entry: 104277f8c; end: 104277f9b; -[SCAdSingleViewingSessionRecord totalSnapViewed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104277f8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a348);
}



/* Entry: 104277f9c; end: 104277fab; -[SCAdSingleViewingSessionRecord totalSnapAttachmentViewed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104277f9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a350);
}



/* Entry: 104277fac; end: 104277fbb; -[SCAdSingleViewingSessionRecord totalAdSnapViewed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104277fac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a358);
}



/* Entry: 104277fbc; end: 104277fcb; -[SCAdSingleViewingSessionRecord totalAdAttachmentViewed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104277fbc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a360);
}



/* Entry: 104277fcc; end: 104277fdb; -[SCAdSingleViewingSessionRecord viewLocationType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104277fcc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a368);
}



/* Entry: 104277fdc; end: 104277feb; -[SCAdSingleViewingSessionRecord totalStoriesViewCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104277fdc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a370);
}



/* Entry: 104277fec; end: 104277ffb; -[SCAdSingleViewingSessionRecord totalUniqueStoriesViewCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104277fec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a378);
}



/* Entry: 104277ffc; end: 10427800b; -[SCAdSingleViewingSessionRecord availableStoriesCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104277ffc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a380));
  return;
}



/* Entry: 10427800c; end: 104278067; -[SCAdSingleViewingSessionRecord exitMethod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427800c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306a388))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306a388);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104278068; end: 104278077; -[SCAdSingleViewingSessionRecord isLastSnapAd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104278068(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a390);
}



/* Entry: 104278078; end: 10427808b; -[SCAdSingleViewingSessionRecord viewedAdContextList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104278078(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306a398);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_104277ea0(0);
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



/* Entry: 10427808c; end: 10427809b; -[SCAdSingleViewingSessionRecord contentViewDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427808c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a3a0));
  return;
}



/* Entry: 10427809c; end: 1042780ab; -[SCAdSingleViewingSessionRecord adsViewDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427809c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a3a8));
  return;
}



/* Entry: 1042780ac; end: 1042780bf; -[SCAdSingleViewingSessionRecord snapLevelInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042780ac(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306a3b0);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_104273684(0);
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



/* Entry: 1042780c0; end: 1042780d3; -[SCAdSingleViewingSessionRecord storyLevelInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042780c0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306a3b8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1042740fc(0);
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



/* Entry: 1042780d4; end: 1042780e3; -[SCAdSingleViewingSessionRecord sessionDepth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042780d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a3c0));
  return;
}



/* Entry: 1042780e4; end: 1042780f7; -[SCAdSingleViewingSessionRecord consumptionSpeedPerInventory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042780e4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306a3c8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_10427170c(0);
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



/* Entry: 1042780f8; end: 10427814f;  */

void FUN_1042780f8(long param_1,undefined8 param_2,long *param_3,code *param_4)

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



/* Entry: 104278150; end: 104278567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104278150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
                  undefined4 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_a8 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306a320) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306a328) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306a330) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306a338) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306a340) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306a348) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306a350) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11306a358) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11306a360) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11306a368) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11306a370) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11306a378) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11306a380) = param_13;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a388);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  *(undefined1 *)(unaff_x20 + _DAT_11306a390) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_11306a398) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_11306a3a0) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_11306a3a8) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_11306a3b0) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_11306a3b8) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_11306a3c0) = param_23;
  *(undefined8 *)(unaff_x20 + _DAT_11306a3c8) = param_24;
  _objc_msgSendSuper2(auStack_a8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104278568; end: 10427874f; -[SCAdSingleViewingSessionRecord initWithSessionStartTimestampInMs:totalViewTimeInMs:totalLongformViewTimeInMs:totalAdViewTimeInMs:totalAdLongformViewTimeInMs:totalSnapViewed:totalSnapAttachmentViewed:totalAdSnapViewed:totalAdAttachmentViewed:viewLocationType:totalStoriesViewCount:totalUniqueStoriesViewCount:availableStoriesCount:exitMethod:isLastSnapAd:viewedAdContextList:contentViewDuration:adsViewDuration:snapLevelInfo:storyLevelInfo:sessionDepth:consumptionSpeedPerInventory:] */

void FUN_104278568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,long param_16,
                  undefined1 param_17,undefined4 param_18,long param_19)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000050;
  undefined8 uStack_e0;
  long lStack_d8;
  
  if (param_16 == 0) {
    uStack_e0 = 0;
    lStack_d8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_e0 = param_7;
    lStack_d8 = param_16;
  }
  if (param_19 != 0) {
    uVar1 = 0;
    FUN_104277ea0(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_19,uVar1);
  }
  if (in_stack_00000038 != 0) {
    uVar1 = 0;
    FUN_104273684(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (in_stack_00000038,uVar1);
  }
  _objc_retain(param_15);
  _objc_retain();
  _objc_retain();
  lVar2 = in_stack_00000040;
  _objc_retain();
  _objc_retain();
  lVar3 = in_stack_00000050;
  _objc_retain();
  if (lVar2 != 0) {
    uVar1 = 0;
    FUN_1042740fc(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (in_stack_00000040,uVar1);
    _objc_release(lVar2);
  }
  if (lVar3 != 0) {
    uVar1 = 0;
    FUN_10427170c(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (in_stack_00000050,uVar1);
    _objc_release(lVar3);
  }
  func_0x00010427835c(param_1,param_2,param_3,param_4,param_5,param_8,param_9,param_10,param_11,
                      param_12,param_13,param_14,param_15,lStack_d8,uStack_e0,param_17);
  return;
}



/* Entry: 104278750; end: 10427877f;  */

undefined8 FUN_104278750(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1042788ec();
  func_0x00010167c8a8(param_1);
  return uVar1;
}



/* Entry: 104278780; end: 104278783; -[SCAdSingleViewingSessionRecord copyWithZone:] */

void FUN_104278780(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104278784; end: 1042787c3; -[SCAdSingleViewingSessionRecord description] */

void FUN_104278784(void)

{
  undefined1 auStack_170 [336];
  
  _objc_retain();
  FUN_10427949c(auStack_170);
  func_0x00010167c8a8(auStack_170);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042787c4; end: 10427883f; -[SCAdSingleViewingSessionRecord init] */

void FUN_1042787c4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdSingleViewingSessionRecordWrapper.swift",0x38,2,0x8a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10427880c);
  (*pcVar1)();
}



/* Entry: 104278840; end: 1042788eb; -[SCAdSingleViewingSessionRecord .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104278840(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a380));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a388 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a398));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a3a0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a3a8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a3b0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a3b8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a3c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306a3c8));
  return;
}



/* Entry: 1042788ec; end: 10427949b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042788ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  long unaff_x20;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lStack_230;
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
  undefined1 auStack_1d0 [96];
  undefined *puStack_170;
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
  undefined8 uStack_118;
  undefined *puStack_108;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  
  _swift_getObjectType();
  uVar23 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11306a320) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306a328) = uVar23;
  uVar23 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11306a330) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_11306a338) = uVar23;
  *(undefined8 *)(unaff_x20 + _DAT_11306a340) = param_1[4];
  uVar23 = param_1[6];
  *(undefined8 *)(unaff_x20 + _DAT_11306a348) = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_11306a350) = uVar23;
  uVar23 = param_1[8];
  *(undefined8 *)(unaff_x20 + _DAT_11306a358) = param_1[7];
  *(undefined8 *)(unaff_x20 + _DAT_11306a360) = uVar23;
  uVar23 = param_1[10];
  *(undefined8 *)(unaff_x20 + _DAT_11306a368) = param_1[9];
  *(undefined8 *)(unaff_x20 + _DAT_11306a370) = uVar23;
  uStack_d8 = param_1[0xc];
  *(undefined8 *)(unaff_x20 + _DAT_11306a378) = param_1[0xb];
  *(undefined8 *)(unaff_x20 + _DAT_11306a380) = uStack_d8;
  uStack_e8 = param_1[0xe];
  uStack_f0 = param_1[0xd];
  uVar23 = param_1[0xd];
  puVar15 = (undefined8 *)(unaff_x20 + _DAT_11306a388);
  puVar15[1] = param_1[0xe];
  *puVar15 = uVar23;
  *(undefined1 *)(unaff_x20 + _DAT_11306a390) = *(undefined1 *)(param_1 + 0xf);
  lVar19 = param_1[0x10];
  if (lVar19 == 0) {
    FUN_10427a364(&uStack_d8,&puStack_170,0x112dc3de0,&UNK_10d9813c0);
    FUN_10427a364(&uStack_f0,&puStack_170,0x112d35ff8,&UNK_10d900cd0);
    puVar18 = (undefined *)0x0;
  }
  else {
    lVar21 = *(long *)(lVar19 + 0x10);
    if (lVar21 == 0) {
      FUN_10427a364(&uStack_d8,&puStack_170,0x112dc3de0,&UNK_10d9813c0);
      FUN_10427a364(&uStack_f0,&puStack_170,0x112d35ff8,&UNK_10d900cd0);
      puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      FUN_10427a364(&uStack_d8,&puStack_170,0x112dc3de0,&UNK_10d9813c0);
      FUN_10427a364(&uStack_f0,&puStack_170,0x112d35ff8,&UNK_10d900cd0);
      puStack_170 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000104209e64(0,lVar21,0);
      puVar18 = puStack_170;
      lVar13 = 0;
      FUN_104277ea0();
      puVar17 = (undefined1 *)(lVar19 + 0x40);
      do {
        uVar23 = *(undefined8 *)(puVar17 + -0x20);
        uVar25 = *(undefined8 *)(puVar17 + -0x18);
        uVar24 = *(undefined8 *)(puVar17 + -0x10);
        uVar28 = *(undefined8 *)(puVar17 + -8);
        uVar6 = *puVar17;
        lVar19 = lVar13;
        _objc_allocWithZone();
        puVar15 = (undefined8 *)(lVar19 + _DAT_11306a2d8);
        *puVar15 = uVar23;
        puVar15[1] = uVar25;
        *(undefined8 *)(lVar19 + _DAT_11306a2e0) = uVar24;
        *(undefined8 *)(lVar19 + _DAT_11306a2e8) = uVar28;
        *(undefined1 *)(lVar19 + _DAT_11306a2f0) = uVar6;
        puVar12 = PTR_s_init_1125d9248;
        lStack_230 = lVar19;
        lStack_228 = lVar13;
        _swift_bridgeObjectRetain(uVar25);
        plVar14 = &lStack_230;
        _objc_msgSendSuper2(plVar14,puVar12);
        uVar2 = *(ulong *)(puVar18 + 0x10);
        puStack_170 = puVar18;
        if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar2) {
          func_0x000104209e64(1 < *(ulong *)(puVar18 + 0x18),uVar2 + 1,1);
        }
        *(ulong *)(puStack_170 + 0x10) = uVar2 + 1;
        *(long **)(puStack_170 + uVar2 * 8 + 0x20) = plVar14;
        puVar17 = puVar17 + 0x28;
        lVar21 = lVar21 + -1;
        puVar18 = puStack_170;
      } while (lVar21 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11306a398) = puVar18;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    plVar14 = (long *)0x0;
  }
  else {
    uVar24 = param_1[0x16];
    uVar25 = param_1[0x17];
    uVar32 = param_1[0x14];
    uVar28 = param_1[0x15];
    uVar20 = param_1[0x12];
    uVar34 = param_1[0x13];
    uVar23 = param_1[0x11];
    lVar21 = 0;
    FUN_1042747e0();
    lVar19 = lVar21;
    _objc_allocWithZone();
    *(undefined8 *)(lVar19 + _DAT_11306a098) = uVar23;
    *(undefined8 *)(lVar19 + _DAT_11306a0a0) = uVar20;
    *(undefined8 *)(lVar19 + _DAT_11306a0a8) = uVar34;
    *(undefined8 *)(lVar19 + _DAT_11306a0b0) = uVar32;
    *(undefined8 *)(lVar19 + _DAT_11306a0b8) = uVar28;
    *(undefined8 *)(lVar19 + _DAT_11306a0c0) = uVar24;
    *(undefined8 *)(lVar19 + _DAT_11306a0c8) = uVar25;
    plVar14 = &lStack_220;
    lStack_220 = lVar19;
    lStack_218 = lVar21;
    _objc_msgSendSuper2(plVar14,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_11306a3a0) = plVar14;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    plVar14 = (long *)0x0;
  }
  else {
    uVar24 = param_1[0x1e];
    uVar25 = param_1[0x1f];
    uVar32 = param_1[0x1c];
    uVar28 = param_1[0x1d];
    uVar20 = param_1[0x1a];
    uVar34 = param_1[0x1b];
    uVar23 = param_1[0x19];
    lVar21 = 0;
    FUN_1042747e0();
    lVar19 = lVar21;
    _objc_allocWithZone();
    *(undefined8 *)(lVar19 + _DAT_11306a098) = uVar23;
    *(undefined8 *)(lVar19 + _DAT_11306a0a0) = uVar20;
    *(undefined8 *)(lVar19 + _DAT_11306a0a8) = uVar34;
    *(undefined8 *)(lVar19 + _DAT_11306a0b0) = uVar32;
    *(undefined8 *)(lVar19 + _DAT_11306a0b8) = uVar28;
    *(undefined8 *)(lVar19 + _DAT_11306a0c0) = uVar24;
    *(undefined8 *)(lVar19 + _DAT_11306a0c8) = uVar25;
    plVar14 = &lStack_210;
    lStack_210 = lVar19;
    lStack_208 = lVar21;
    _objc_msgSendSuper2(plVar14,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_11306a3a8) = plVar14;
  lVar19 = param_1[0x21];
  if (lVar19 == 0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    lVar21 = *(long *)(lVar19 + 0x10);
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar21 != 0) {
      puStack_170 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x00010167dad4(0,lVar21,0);
      puVar18 = puStack_170;
      lVar13 = 0;
      FUN_104273684();
      puVar17 = (undefined1 *)(lVar19 + 200);
      do {
        uVar23 = *(undefined8 *)(puVar17 + -0xa8);
        uVar20 = *(undefined8 *)(puVar17 + -0xa0);
        uVar7 = puVar17[-0x98];
        uVar26 = *(undefined8 *)(puVar17 + -0x90);
        uVar29 = *(undefined8 *)(puVar17 + -0x88);
        uVar31 = *(undefined8 *)(puVar17 + -0x80);
        uVar22 = *(undefined8 *)(puVar17 + -0x78);
        uVar8 = puVar17[-0x70];
        uVar9 = puVar17[-0x6f];
        uVar25 = *(undefined8 *)(puVar17 + -0x68);
        uVar27 = *(undefined8 *)(puVar17 + -0x60);
        uVar24 = *(undefined8 *)(puVar17 + -0x58);
        uVar30 = *(undefined8 *)(puVar17 + -0x50);
        uVar28 = *(undefined8 *)(puVar17 + -0x48);
        uVar3 = *(undefined8 *)(puVar17 + -0x40);
        uVar32 = *(undefined8 *)(puVar17 + -0x38);
        uVar4 = *(undefined8 *)(puVar17 + -0x30);
        uVar34 = *(undefined8 *)(puVar17 + -0x28);
        uVar5 = *(undefined8 *)(puVar17 + -0x20);
        uVar10 = puVar17[-0x18];
        uVar11 = puVar17[-0x17];
        uVar16 = *(undefined8 *)(puVar17 + -0x10);
        uVar33 = *(undefined8 *)(puVar17 + -8);
        uVar6 = *puVar17;
        lVar19 = lVar13;
        _objc_allocWithZone();
        puVar15 = (undefined8 *)(lVar19 + _DAT_113069f60);
        *puVar15 = uVar23;
        puVar15[1] = uVar20;
        *(undefined1 *)(lVar19 + _DAT_113069f68) = uVar7;
        *(undefined8 *)(lVar19 + _DAT_113069f70) = uVar26;
        *(undefined8 *)(lVar19 + _DAT_113069f78) = uVar29;
        *(undefined8 *)(lVar19 + _DAT_113069f80) = uVar31;
        *(undefined8 *)(lVar19 + _DAT_113069f88) = uVar22;
        *(undefined1 *)(lVar19 + _DAT_113069f90) = uVar8;
        *(undefined1 *)(lVar19 + _DAT_113069f98) = uVar9;
        puVar15 = (undefined8 *)(lVar19 + _DAT_113069fa0);
        *puVar15 = uVar25;
        puVar15[1] = uVar27;
        *(undefined8 *)(lVar19 + _DAT_113069fa8) = uVar24;
        *(undefined8 *)(lVar19 + _DAT_113069fb0) = uVar30;
        *(undefined8 *)(lVar19 + _DAT_113069fb8) = uVar28;
        *(undefined8 *)(lVar19 + _DAT_113069fc0) = uVar3;
        *(undefined8 *)(lVar19 + _DAT_113069fc8) = uVar32;
        *(undefined8 *)(lVar19 + _DAT_113069fd0) = uVar4;
        puVar15 = (undefined8 *)(lVar19 + _DAT_113069fd8);
        *puVar15 = uVar34;
        puVar15[1] = uVar5;
        *(undefined1 *)(lVar19 + _DAT_113069fe0) = uVar10;
        *(undefined1 *)(lVar19 + _DAT_113069fe8) = uVar11;
        *(undefined8 *)(lVar19 + _DAT_113069ff0) = uVar16;
        *(undefined8 *)(lVar19 + _DAT_113069ff8) = uVar33;
        *(undefined1 *)(lVar19 + _DAT_11306a000) = uVar6;
        puVar12 = PTR_s_init_1125d9248;
        lStack_200 = lVar19;
        lStack_1f8 = lVar13;
        _swift_bridgeObjectRetain(uVar20);
        _swift_bridgeObjectRetain(uVar27);
        _swift_bridgeObjectRetain(uVar5);
        plVar14 = &lStack_200;
        _objc_msgSendSuper2(plVar14,puVar12);
        uVar2 = *(ulong *)(puVar18 + 0x10);
        puStack_170 = puVar18;
        if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar2) {
          func_0x00010167dad4(1 < *(ulong *)(puVar18 + 0x18),uVar2 + 1,1);
        }
        *(ulong *)(puStack_170 + 0x10) = uVar2 + 1;
        *(long **)(puStack_170 + uVar2 * 8 + 0x20) = plVar14;
        puVar17 = puVar17 + 0xb0;
        lVar21 = lVar21 + -1;
        puVar18 = puStack_170;
      } while (lVar21 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11306a3b0) = puVar18;
  lVar19 = param_1[0x22];
  if (lVar19 == 0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    lVar21 = *(long *)(lVar19 + 0x10);
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar21 != 0) {
      puStack_170 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000104209e30(0,lVar21,0);
      puVar18 = puStack_170;
      lVar13 = 0;
      FUN_1042740fc();
      puVar15 = (undefined8 *)(lVar19 + 0x38);
      do {
        uVar23 = puVar15[-3];
        uVar28 = puVar15[-2];
        uVar20 = puVar15[-1];
        uVar27 = *puVar15;
        uVar25 = puVar15[1];
        uVar32 = puVar15[2];
        uVar30 = puVar15[3];
        uVar6 = *(undefined1 *)(puVar15 + 4);
        uVar24 = puVar15[5];
        uVar34 = puVar15[6];
        lVar19 = lVar13;
        _objc_allocWithZone();
        puVar1 = (undefined8 *)(lVar19 + _DAT_11306a030);
        *puVar1 = uVar23;
        puVar1[1] = uVar28;
        *(undefined8 *)(lVar19 + _DAT_11306a038) = uVar20;
        *(undefined8 *)(lVar19 + _DAT_11306a040) = uVar27;
        puVar1 = (undefined8 *)(lVar19 + _DAT_11306a048);
        *puVar1 = uVar25;
        puVar1[1] = uVar32;
        *(undefined8 *)(lVar19 + _DAT_11306a050) = uVar30;
        *(undefined1 *)(lVar19 + _DAT_11306a058) = uVar6;
        *(undefined8 *)(lVar19 + _DAT_11306a060) = uVar24;
        *(undefined8 *)(lVar19 + _DAT_11306a068) = uVar34;
        puVar12 = PTR_s_init_1125d9248;
        lStack_1f0 = lVar19;
        lStack_1e8 = lVar13;
        _swift_bridgeObjectRetain(uVar28);
        _swift_bridgeObjectRetain(uVar32);
        plVar14 = &lStack_1f0;
        _objc_msgSendSuper2(plVar14,puVar12);
        uVar2 = *(ulong *)(puVar18 + 0x10);
        puStack_170 = puVar18;
        if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar2) {
          func_0x000104209e30(1 < *(ulong *)(puVar18 + 0x18),uVar2 + 1,1);
        }
        puVar15 = puVar15 + 10;
        *(ulong *)(puStack_170 + 0x10) = uVar2 + 1;
        *(long **)(puStack_170 + uVar2 * 8 + 0x20) = plVar14;
        lVar21 = lVar21 + -1;
        puVar18 = puStack_170;
      } while (lVar21 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11306a3b8) = puVar18;
  if (*(char *)((long)param_1 + 0x141) == '\x01') {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    uStack_a8 = *(undefined1 *)(param_1 + 0x28);
    uStack_b0 = param_1[0x27];
    uStack_c0 = param_1[0x25];
    uStack_c8 = param_1[0x24];
    uStack_d0 = param_1[0x23];
    uStack_b8 = (undefined1)param_1[0x26];
    FUN_1042722c4(0);
    _objc_allocWithZone();
    puVar15 = &uStack_d0;
    FUN_104271cc8();
  }
  *(undefined8 **)(unaff_x20 + _DAT_11306a3c0) = puVar15;
  lVar19 = param_1[0x29];
  if (lVar19 == 0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    lVar21 = *(long *)(lVar19 + 0x10);
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar21 != 0) {
      puStack_108 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000104209dfc(0,lVar21,0);
      puVar18 = puStack_108;
      puVar15 = (undefined8 *)(lVar19 + 0x20);
      lVar19 = 0;
      FUN_10427170c();
      do {
        uStack_168 = puVar15[1];
        puStack_170 = (undefined *)*puVar15;
        uStack_158 = puVar15[3];
        uStack_160 = puVar15[2];
        uStack_148 = puVar15[5];
        uStack_150 = puVar15[4];
        uStack_138 = puVar15[7];
        uStack_140 = puVar15[6];
        uStack_128 = puVar15[9];
        uStack_130 = puVar15[8];
        uStack_118 = puVar15[0xb];
        uStack_120 = puVar15[10];
        lVar13 = lVar19;
        _objc_allocWithZone();
        puVar1 = (undefined8 *)(lVar13 + _DAT_113069e40);
        puVar1[1] = uStack_168;
        *puVar1 = puStack_170;
        *(undefined8 *)(lVar13 + _DAT_113069e48) = uStack_160;
        *(undefined4 *)(lVar13 + _DAT_113069e50) = (undefined4)uStack_158;
        *(undefined4 *)(lVar13 + _DAT_113069e58) = uStack_158._4_4_;
        *(undefined4 *)(lVar13 + _DAT_113069e60) = (undefined4)uStack_150;
        *(undefined4 *)(lVar13 + _DAT_113069e68) = uStack_150._4_4_;
        *(undefined8 *)(lVar13 + _DAT_113069e70) = uStack_148;
        *(undefined8 *)(lVar13 + _DAT_113069e78) = uStack_140;
        *(undefined4 *)(lVar13 + _DAT_113069e80) = (undefined4)uStack_138;
        *(undefined4 *)(lVar13 + _DAT_113069e88) = uStack_138._4_4_;
        *(undefined4 *)(lVar13 + _DAT_113069e90) = (undefined4)uStack_130;
        *(undefined4 *)(lVar13 + _DAT_113069e98) = uStack_130._4_4_;
        *(undefined8 *)(lVar13 + _DAT_113069ea0) = uStack_128;
        *(undefined8 *)(lVar13 + _DAT_113069ea8) = uStack_120;
        *(undefined8 *)(lVar13 + _DAT_113069eb0) = uStack_118;
        func_0x00010167cb80(&puStack_170,auStack_1d0);
        plVar14 = &lStack_1e0;
        lStack_1e0 = lVar13;
        lStack_1d8 = lVar19;
        _objc_msgSendSuper2(plVar14,PTR_s_init_1125d9248);
        uVar2 = *(ulong *)(puVar18 + 0x10);
        puStack_108 = puVar18;
        if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar2) {
          func_0x000104209dfc(1 < *(ulong *)(puVar18 + 0x18),uVar2 + 1,1);
        }
        *(ulong *)(puStack_108 + 0x10) = uVar2 + 1;
        *(long **)(puStack_108 + uVar2 * 8 + 0x20) = plVar14;
        puVar15 = puVar15 + 0xc;
        lVar21 = lVar21 + -1;
        puVar18 = puStack_108;
      } while (lVar21 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11306a3c8) = puVar18;
  _objc_msgSendSuper2(auStack_100,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10427949c; end: 10427a343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427949c(undefined8 *param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 auVar8 [16];
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  undefined *puVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 uVar26;
  undefined *puVar27;
  ulong uVar28;
  undefined8 uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined8 uVar32;
  undefined4 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined4 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined4 uVar43;
  undefined8 uVar44;
  undefined4 uVar45;
  undefined8 uVar46;
  undefined4 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined4 uVar50;
  undefined8 uVar51;
  undefined4 uVar52;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3a0;
  undefined8 uStack_390;
  undefined8 uStack_380;
  undefined8 uStack_370;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_340;
  undefined8 uStack_320;
  undefined8 uStack_310;
  undefined8 uStack_300;
  undefined8 uStack_2f0;
  undefined8 uStack_2e0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2a0;
  undefined1 auStack_1f8 [16];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [16];
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [16];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined8 uStack_b7;
  
  uVar44 = *(undefined8 *)(param_2 + _DAT_11306a320);
  uVar46 = *(undefined8 *)(param_2 + _DAT_11306a328);
  uVar48 = *(undefined8 *)(param_2 + _DAT_11306a330);
  uVar49 = *(undefined8 *)(param_2 + _DAT_11306a338);
  uVar51 = *(undefined8 *)(param_2 + _DAT_11306a340);
  uVar16 = *(undefined8 *)(param_2 + _DAT_11306a348);
  uVar11 = *(undefined8 *)(param_2 + _DAT_11306a350);
  uVar17 = *(undefined8 *)(param_2 + _DAT_11306a358);
  uVar12 = *(undefined8 *)(param_2 + _DAT_11306a360);
  uVar18 = *(undefined8 *)(param_2 + _DAT_11306a368);
  uVar13 = *(undefined8 *)(param_2 + _DAT_11306a370);
  uVar19 = *(undefined8 *)(param_2 + _DAT_11306a378);
  uVar32 = *(undefined8 *)(param_2 + _DAT_11306a380);
  uVar4 = *(undefined8 *)(param_2 + _DAT_11306a388);
  uVar5 = ((undefined8 *)(param_2 + _DAT_11306a388))[1];
  uVar7 = *(undefined1 *)(param_2 + _DAT_11306a390);
  uVar30 = *(ulong *)(param_2 + _DAT_11306a398);
  if (uVar30 == 0) {
    _swift_bridgeObjectRetain(uVar5);
    _objc_retain(uVar32);
    puStack_2a0 = (undefined *)0x0;
  }
  else {
    if (uVar30 >> 0x3e == 0) {
      uVar28 = *(ulong *)((uVar30 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar28 = uVar30;
      if (-1 < (long)uVar30) {
        uVar28 = uVar30 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar28 == 0) {
      _swift_bridgeObjectRetain(uVar5);
      _objc_retain(uVar32);
      puStack_2a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_158 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _objc_retain(uVar32);
      _swift_bridgeObjectRetain(uVar5);
      func_0x000104209be8(0,uVar28 & ((long)uVar28 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar28 < 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10427a338);
        (*pcVar9)();
      }
      if ((uVar30 & 0xc000000000000001) == 0) {
        puStack_2a0 = puStack_158;
        plVar15 = (long *)(uVar30 + 0x20);
        do {
          lVar10 = *plVar15;
          uVar25 = *(undefined8 *)(lVar10 + _DAT_11306a2d8);
          uVar6 = ((undefined8 *)(lVar10 + _DAT_11306a2d8))[1];
          uVar38 = *(undefined8 *)(lVar10 + _DAT_11306a2e0);
          uVar41 = *(undefined8 *)(lVar10 + _DAT_11306a2e8);
          uVar26 = *(undefined1 *)(lVar10 + _DAT_11306a2f0);
          uVar30 = *(ulong *)(puStack_2a0 + 0x10);
          uVar31 = *(ulong *)(puStack_2a0 + 0x18);
          puStack_158 = puStack_2a0;
          _swift_bridgeObjectRetain(uVar6);
          if (uVar31 >> 1 <= uVar30) {
            func_0x000104209be8(1 < uVar31,uVar30 + 1,1);
            puStack_2a0 = puStack_158;
          }
          *(ulong *)(puStack_2a0 + 0x10) = uVar30 + 1;
          *(undefined8 *)(puStack_2a0 + uVar30 * 0x28 + 0x20) = uVar25;
          *(undefined8 *)(puStack_2a0 + uVar30 * 0x28 + 0x28) = uVar6;
          *(undefined8 *)(puStack_2a0 + uVar30 * 0x28 + 0x30) = uVar38;
          *(undefined8 *)(puStack_2a0 + uVar30 * 0x28 + 0x38) = uVar41;
          puStack_2a0[uVar30 * 0x28 + 0x40] = uVar26;
          uVar28 = uVar28 - 1;
          plVar15 = plVar15 + 1;
        } while (uVar28 != 0);
      }
      else {
        uVar31 = 0;
        do {
          puVar22 = puStack_158;
          uVar23 = uVar31;
          func_0x0001042082b8(uVar31,uVar30);
          uVar25 = *(undefined8 *)(uVar23 + _DAT_11306a2d8);
          uVar6 = ((undefined8 *)(uVar23 + _DAT_11306a2d8))[1];
          uVar38 = *(undefined8 *)(uVar23 + _DAT_11306a2e0);
          uVar41 = *(undefined8 *)(uVar23 + _DAT_11306a2e8);
          uVar26 = *(undefined1 *)(uVar23 + _DAT_11306a2f0);
          _swift_bridgeObjectRetain(uVar6);
          _swift_unknownObjectRelease(uVar23);
          uVar23 = *(ulong *)(puVar22 + 0x10);
          puStack_158 = puVar22;
          if (*(ulong *)(puVar22 + 0x18) >> 1 <= uVar23) {
            func_0x000104209be8(1 < *(ulong *)(puVar22 + 0x18),uVar23 + 1,1);
          }
          uVar31 = uVar31 + 1;
          *(ulong *)(puStack_158 + 0x10) = uVar23 + 1;
          *(undefined8 *)(puStack_158 + uVar23 * 0x28 + 0x20) = uVar25;
          *(undefined8 *)(puStack_158 + uVar23 * 0x28 + 0x28) = uVar6;
          *(undefined8 *)(puStack_158 + uVar23 * 0x28 + 0x30) = uVar38;
          *(undefined8 *)(puStack_158 + uVar23 * 0x28 + 0x38) = uVar41;
          puStack_158[uVar23 * 0x28 + 0x40] = uVar26;
          puStack_2a0 = puStack_158;
        } while (uVar28 != uVar31);
      }
    }
  }
  bVar1 = *(long *)(param_2 + _DAT_11306a3a0) == 0;
  if (bVar1) {
    uStack_2c8 = 0;
    uStack_320 = 0;
    uStack_310 = 0;
    uStack_2f0 = 0;
    uStack_2e0 = 0;
    uStack_2c0 = 0;
    uStack_300 = 0;
  }
  else {
    FUN_104274778(auStack_1f8);
    auVar36._8_8_ = uStack_1e0;
    auVar36._0_8_ = uStack_1e8;
    auVar35._8_8_ = uStack_1e0;
    auVar35._0_8_ = uStack_1e8;
    uStack_2c0 = auStack_1d8._0_8_;
    auVar34 = NEON_ext(auStack_1d8,auStack_1d8,8,1);
    uStack_300 = auVar34._0_8_;
    uStack_2f0 = uStack_1e8;
    auVar36 = NEON_ext(auVar35,auVar36,8,1);
    uStack_2e0 = auStack_1f8._0_8_;
    auVar35 = NEON_ext(auStack_1f8,auStack_1f8,8,1);
    uStack_320 = auVar35._0_8_;
    uStack_310 = auVar36._0_8_;
    uStack_2c8 = uStack_1c8;
  }
  bVar2 = *(long *)(param_2 + _DAT_11306a3a8) == 0;
  if (bVar2) {
    uStack_358 = 0;
    uStack_3a0 = 0;
    uStack_390 = 0;
    uStack_350 = 0;
    uStack_340 = 0;
    uStack_380 = 0;
    uStack_370 = 0;
  }
  else {
    FUN_104274778(auStack_1c0);
    auVar8._8_8_ = uStack_1a8;
    auVar8._0_8_ = uStack_1b0;
    auVar34._8_8_ = uStack_1a8;
    auVar34._0_8_ = uStack_1b0;
    uStack_350 = auStack_1a0._0_8_;
    uStack_340 = auStack_1c0._0_8_;
    auVar35 = NEON_ext(auStack_1a0,auStack_1a0,8,1);
    uStack_380 = auVar35._0_8_;
    uStack_370 = uStack_1b0;
    auVar36 = NEON_ext(auVar34,auVar8,8,1);
    auVar35 = NEON_ext(auStack_1c0,auStack_1c0,8,1);
    uStack_3a0 = auVar35._0_8_;
    uStack_390 = auVar36._0_8_;
    uStack_358 = uStack_190;
  }
  uVar30 = *(ulong *)(param_2 + _DAT_11306a3b0);
  if (uVar30 == 0) {
    puVar22 = (undefined *)0x0;
  }
  else {
    if (uVar30 >> 0x3e == 0) {
      uVar28 = *(ulong *)((uVar30 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar28 = uVar30;
      if (-1 < (long)uVar30) {
        uVar28 = uVar30 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar28 != 0) {
      puStack_188 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000104209bcc(0,uVar28 & ((long)uVar28 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar28 < 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10427a33c);
        (*pcVar9)();
      }
      if ((uVar30 & 0xc000000000000001) == 0) {
        puVar21 = (undefined8 *)(uVar30 + 0x20);
        do {
          puVar22 = puStack_188;
          FUN_1042734fc(&puStack_158,*puVar21);
          uVar30 = *(ulong *)(puVar22 + 0x10);
          puStack_188 = puVar22;
          if (*(ulong *)(puVar22 + 0x18) >> 1 <= uVar30) {
            func_0x000104209bcc(1 < *(ulong *)(puVar22 + 0x18),uVar30 + 1,1);
          }
          *(ulong *)(puStack_188 + 0x10) = uVar30 + 1;
          *(undefined8 *)(puStack_188 + uVar30 * 0xb0 + 0x38) = uStack_140;
          *(undefined8 *)(puStack_188 + uVar30 * 0xb0 + 0x30) = uStack_148;
          *(undefined8 *)(puStack_188 + uVar30 * 0xb0 + 0x48) = uStack_130;
          *(undefined8 *)(puStack_188 + uVar30 * 0xb0 + 0x40) = uStack_138;
          *(undefined8 *)(puStack_188 + uVar30 * 0xb0 + 0x28) = uStack_150;
          *(undefined **)(puStack_188 + uVar30 * 0xb0 + 0x20) = puStack_158;
          *(undefined8 *)(puStack_188 + uVar30 * 0xb0 + 0x78) = uStack_100;
          *(undefined8 *)(puStack_188 + uVar30 * 0xb0 + 0x70) = uStack_108;
          *(undefined8 *)(puStack_188 + uVar30 * 0xb0 + 0x88) = uStack_f0;
          *(undefined8 *)(puStack_188 + uVar30 * 0xb0 + 0x80) = uStack_f8;
          *(undefined8 *)(puStack_188 + uVar30 * 0xb0 + 0x58) = uStack_120;
          *(undefined8 *)(puStack_188 + uVar30 * 0xb0 + 0x50) = uStack_128;
          *(undefined8 *)(puStack_188 + uVar30 * 0xb0 + 0x68) = uStack_110;
          *(undefined8 *)(puStack_188 + uVar30 * 0xb0 + 0x60) = uStack_118;
          *(undefined8 *)(puStack_188 + uVar30 * 0xb0 + 0xc1) = uStack_b7;
          *(ulong *)(puStack_188 + uVar30 * 0xb0 + 0xb9) = CONCAT17(uStack_b8,uStack_bf);
          *(undefined8 *)(puStack_188 + uVar30 * 0xb0 + 0xa8) = uStack_d0;
          *(undefined8 *)(puStack_188 + uVar30 * 0xb0 + 0xa0) = uStack_d8;
          *(ulong *)(puStack_188 + uVar30 * 0xb0 + 0xb8) = CONCAT71(uStack_bf,uStack_c0);
          *(undefined8 *)(puStack_188 + uVar30 * 0xb0 + 0xb0) = uStack_c8;
          *(undefined8 *)(puStack_188 + uVar30 * 0xb0 + 0x98) = uStack_e0;
          *(undefined8 *)(puStack_188 + uVar30 * 0xb0 + 0x90) = uStack_e8;
          uVar28 = uVar28 - 1;
          puVar21 = puVar21 + 1;
          puVar22 = puStack_188;
        } while (uVar28 != 0);
      }
      else {
        uVar31 = 0;
        do {
          puVar22 = puStack_188;
          uVar23 = uVar31;
          func_0x00010167a4c4(uVar31,uVar30);
          FUN_1042734fc(&puStack_158);
          _swift_unknownObjectRelease(uVar23);
          uVar23 = *(ulong *)(puVar22 + 0x10);
          puStack_188 = puVar22;
          if (*(ulong *)(puVar22 + 0x18) >> 1 <= uVar23) {
            func_0x000104209bcc(1 < *(ulong *)(puVar22 + 0x18),uVar23 + 1,1);
          }
          uVar31 = uVar31 + 1;
          *(ulong *)(puStack_188 + 0x10) = uVar23 + 1;
          *(undefined8 *)(puStack_188 + uVar23 * 0xb0 + 0x38) = uStack_140;
          *(undefined8 *)(puStack_188 + uVar23 * 0xb0 + 0x30) = uStack_148;
          *(undefined8 *)(puStack_188 + uVar23 * 0xb0 + 0x48) = uStack_130;
          *(undefined8 *)(puStack_188 + uVar23 * 0xb0 + 0x40) = uStack_138;
          *(undefined8 *)(puStack_188 + uVar23 * 0xb0 + 0x28) = uStack_150;
          *(undefined **)(puStack_188 + uVar23 * 0xb0 + 0x20) = puStack_158;
          *(undefined8 *)(puStack_188 + uVar23 * 0xb0 + 0x78) = uStack_100;
          *(undefined8 *)(puStack_188 + uVar23 * 0xb0 + 0x70) = uStack_108;
          *(undefined8 *)(puStack_188 + uVar23 * 0xb0 + 0x88) = uStack_f0;
          *(undefined8 *)(puStack_188 + uVar23 * 0xb0 + 0x80) = uStack_f8;
          *(undefined8 *)(puStack_188 + uVar23 * 0xb0 + 0x58) = uStack_120;
          *(undefined8 *)(puStack_188 + uVar23 * 0xb0 + 0x50) = uStack_128;
          *(undefined8 *)(puStack_188 + uVar23 * 0xb0 + 0x68) = uStack_110;
          *(undefined8 *)(puStack_188 + uVar23 * 0xb0 + 0x60) = uStack_118;
          *(undefined8 *)(puStack_188 + uVar23 * 0xb0 + 0xc1) = uStack_b7;
          *(ulong *)(puStack_188 + uVar23 * 0xb0 + 0xb9) = CONCAT17(uStack_b8,uStack_bf);
          *(undefined8 *)(puStack_188 + uVar23 * 0xb0 + 0xa8) = uStack_d0;
          *(undefined8 *)(puStack_188 + uVar23 * 0xb0 + 0xa0) = uStack_d8;
          *(ulong *)(puStack_188 + uVar23 * 0xb0 + 0xb8) = CONCAT71(uStack_bf,uStack_c0);
          *(undefined8 *)(puStack_188 + uVar23 * 0xb0 + 0xb0) = uStack_c8;
          *(undefined8 *)(puStack_188 + uVar23 * 0xb0 + 0x98) = uStack_e0;
          *(undefined8 *)(puStack_188 + uVar23 * 0xb0 + 0x90) = uStack_e8;
          puVar22 = puStack_188;
        } while (uVar28 != uVar31);
      }
    }
  }
  uVar30 = *(ulong *)(param_2 + _DAT_11306a3b8);
  if (uVar30 == 0) {
    puVar20 = (undefined *)0x0;
  }
  else {
    if (uVar30 >> 0x3e == 0) {
      uVar28 = *(ulong *)((uVar30 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar28 = uVar30;
      if (-1 < (long)uVar30) {
        uVar28 = uVar30 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar28 != 0) {
      puStack_188 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000104209bb0(0,uVar28 & ((long)uVar28 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar28 < 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10427a340);
        (*pcVar9)();
      }
      if ((uVar30 & 0xc000000000000001) == 0) {
        plVar15 = (long *)(uVar30 + 0x20);
        puVar20 = puStack_188;
        do {
          lVar10 = *plVar15;
          uVar14 = *(undefined8 *)(lVar10 + _DAT_11306a038);
          uVar25 = *(undefined8 *)(lVar10 + _DAT_11306a030);
          uVar38 = ((undefined8 *)(lVar10 + _DAT_11306a030))[1];
          uVar39 = *(undefined8 *)(lVar10 + _DAT_11306a040);
          uVar6 = *(undefined8 *)(lVar10 + _DAT_11306a048);
          uVar41 = ((undefined8 *)(lVar10 + _DAT_11306a048))[1];
          uVar42 = *(undefined8 *)(lVar10 + _DAT_11306a050);
          uVar26 = *(undefined1 *)(lVar10 + _DAT_11306a058);
          uVar29 = *(undefined8 *)(lVar10 + _DAT_11306a060);
          uVar24 = *(undefined8 *)(lVar10 + _DAT_11306a068);
          uVar30 = *(ulong *)(puVar20 + 0x10);
          uVar31 = *(ulong *)(puVar20 + 0x18);
          puStack_188 = puVar20;
          _swift_bridgeObjectRetain(uVar38);
          _swift_bridgeObjectRetain(uVar41);
          if (uVar31 >> 1 <= uVar30) {
            func_0x000104209bb0(1 < uVar31,uVar30 + 1,1);
            puVar20 = puStack_188;
          }
          *(ulong *)(puVar20 + 0x10) = uVar30 + 1;
          *(undefined8 *)(puVar20 + uVar30 * 0x50 + 0x20) = uVar25;
          *(undefined8 *)(puVar20 + uVar30 * 0x50 + 0x28) = uVar38;
          *(undefined8 *)(puVar20 + uVar30 * 0x50 + 0x30) = uVar14;
          *(undefined8 *)(puVar20 + uVar30 * 0x50 + 0x38) = uVar39;
          *(undefined8 *)(puVar20 + uVar30 * 0x50 + 0x40) = uVar6;
          *(undefined8 *)(puVar20 + uVar30 * 0x50 + 0x48) = uVar41;
          *(undefined8 *)(puVar20 + uVar30 * 0x50 + 0x50) = uVar42;
          puVar20[uVar30 * 0x50 + 0x58] = uVar26;
          *(undefined8 *)(puVar20 + uVar30 * 0x50 + 0x60) = uVar29;
          *(undefined8 *)(puVar20 + uVar30 * 0x50 + 0x68) = uVar24;
          uVar28 = uVar28 - 1;
          plVar15 = plVar15 + 1;
        } while (uVar28 != 0);
      }
      else {
        uVar31 = 0;
        do {
          puVar20 = puStack_188;
          uVar23 = uVar31;
          func_0x00010420811c(uVar31,uVar30);
          uVar25 = *(undefined8 *)(uVar23 + _DAT_11306a030);
          uVar38 = ((undefined8 *)(uVar23 + _DAT_11306a030))[1];
          uVar14 = *(undefined8 *)(uVar23 + _DAT_11306a038);
          uVar39 = *(undefined8 *)(uVar23 + _DAT_11306a040);
          uVar6 = *(undefined8 *)(uVar23 + _DAT_11306a048);
          uVar41 = ((undefined8 *)(uVar23 + _DAT_11306a048))[1];
          uVar42 = *(undefined8 *)(uVar23 + _DAT_11306a050);
          uVar26 = *(undefined1 *)(uVar23 + _DAT_11306a058);
          uVar29 = *(undefined8 *)(uVar23 + _DAT_11306a060);
          uVar24 = *(undefined8 *)(uVar23 + _DAT_11306a068);
          _swift_bridgeObjectRetain(uVar41);
          _swift_bridgeObjectRetain(uVar38);
          _swift_unknownObjectRelease(uVar23);
          uVar23 = *(ulong *)(puVar20 + 0x10);
          puStack_188 = puVar20;
          if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar23) {
            func_0x000104209bb0(1 < *(ulong *)(puVar20 + 0x18),uVar23 + 1,1);
          }
          uVar31 = uVar31 + 1;
          *(ulong *)(puStack_188 + 0x10) = uVar23 + 1;
          *(undefined8 *)(puStack_188 + uVar23 * 0x50 + 0x20) = uVar25;
          *(undefined8 *)(puStack_188 + uVar23 * 0x50 + 0x28) = uVar38;
          *(undefined8 *)(puStack_188 + uVar23 * 0x50 + 0x30) = uVar14;
          *(undefined8 *)(puStack_188 + uVar23 * 0x50 + 0x38) = uVar39;
          *(undefined8 *)(puStack_188 + uVar23 * 0x50 + 0x40) = uVar6;
          *(undefined8 *)(puStack_188 + uVar23 * 0x50 + 0x48) = uVar41;
          *(undefined8 *)(puStack_188 + uVar23 * 0x50 + 0x50) = uVar42;
          puStack_188[uVar23 * 0x50 + 0x58] = uVar26;
          *(undefined8 *)(puStack_188 + uVar23 * 0x50 + 0x60) = uVar29;
          *(undefined8 *)(puStack_188 + uVar23 * 0x50 + 0x68) = uVar24;
          puVar20 = puStack_188;
        } while (uVar28 != uVar31);
      }
    }
  }
  lVar10 = *(long *)(param_2 + _DAT_11306a3c0);
  bVar3 = lVar10 == 0;
  if (bVar3) {
    uVar25 = 0;
    uVar26 = 0;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    puStack_3c0 = (undefined *)0x0;
  }
  else {
    _objc_retain();
    FUN_104272220(&puStack_188);
    _objc_release(lVar10);
    uStack_3c8 = uStack_170;
    uStack_3d0 = uStack_178;
    uStack_3b8 = uStack_180;
    puStack_3c0 = puStack_188;
    uVar25 = uStack_168;
    uVar26 = uStack_160;
  }
  uVar30 = *(ulong *)(param_2 + _DAT_11306a3c8);
  if (uVar30 == 0) {
    _objc_release(param_2);
    puVar27 = (undefined *)0x0;
  }
  else {
    if (uVar30 >> 0x3e == 0) {
      uVar28 = *(ulong *)((uVar30 & 0xffffffffffffff8) + 0x10);
      puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar28 = uVar30;
      if (-1 < (long)uVar30) {
        uVar28 = uVar30 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar27;
    if (uVar28 == 0) {
      _objc_release(param_2);
      puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000104209b94(0,uVar28 & ((long)uVar28 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar28 < 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10427a344);
        (*pcVar9)();
      }
      if ((uVar30 & 0xc000000000000001) == 0) {
        plVar15 = (long *)(uVar30 + 0x20);
        do {
          lVar10 = *plVar15;
          uVar6 = *(undefined8 *)(lVar10 + _DAT_113069e40);
          uVar38 = ((undefined8 *)(lVar10 + _DAT_113069e40))[1];
          uVar39 = *(undefined8 *)(lVar10 + _DAT_113069e48);
          uVar33 = *(undefined4 *)(lVar10 + _DAT_113069e50);
          uVar47 = *(undefined4 *)(lVar10 + _DAT_113069e58);
          uVar37 = *(undefined4 *)(lVar10 + _DAT_113069e60);
          uVar40 = *(undefined4 *)(lVar10 + _DAT_113069e68);
          uVar41 = *(undefined8 *)(lVar10 + _DAT_113069e70);
          uVar14 = *(undefined8 *)(lVar10 + _DAT_113069e78);
          uVar43 = *(undefined4 *)(lVar10 + _DAT_113069e80);
          uVar45 = *(undefined4 *)(lVar10 + _DAT_113069e88);
          uVar50 = *(undefined4 *)(lVar10 + _DAT_113069e90);
          uVar52 = *(undefined4 *)(lVar10 + _DAT_113069e98);
          uVar24 = *(undefined8 *)(lVar10 + _DAT_113069ea0);
          uVar29 = *(undefined8 *)(lVar10 + _DAT_113069ea8);
          uVar42 = *(undefined8 *)(lVar10 + _DAT_113069eb0);
          uVar30 = *(ulong *)(puVar27 + 0x10);
          uVar31 = *(ulong *)(puVar27 + 0x18);
          _swift_bridgeObjectRetain(uVar38);
          if (uVar31 >> 1 <= uVar30) {
            func_0x000104209b94(1 < uVar31,uVar30 + 1,1);
          }
          *(ulong *)(puVar27 + 0x10) = uVar30 + 1;
          *(undefined8 *)(puVar27 + uVar30 * 0x60 + 0x20) = uVar6;
          *(undefined8 *)(puVar27 + uVar30 * 0x60 + 0x28) = uVar38;
          *(undefined8 *)(puVar27 + uVar30 * 0x60 + 0x30) = uVar39;
          *(undefined4 *)(puVar27 + uVar30 * 0x60 + 0x38) = uVar33;
          *(undefined4 *)(puVar27 + uVar30 * 0x60 + 0x3c) = uVar47;
          *(undefined4 *)(puVar27 + uVar30 * 0x60 + 0x40) = uVar37;
          *(undefined4 *)(puVar27 + uVar30 * 0x60 + 0x44) = uVar40;
          *(undefined8 *)(puVar27 + uVar30 * 0x60 + 0x48) = uVar41;
          *(undefined8 *)(puVar27 + uVar30 * 0x60 + 0x50) = uVar14;
          *(undefined4 *)(puVar27 + uVar30 * 0x60 + 0x58) = uVar43;
          *(undefined4 *)(puVar27 + uVar30 * 0x60 + 0x5c) = uVar45;
          *(undefined4 *)(puVar27 + uVar30 * 0x60 + 0x60) = uVar50;
          *(undefined4 *)(puVar27 + uVar30 * 0x60 + 100) = uVar52;
          *(undefined8 *)(puVar27 + uVar30 * 0x60 + 0x68) = uVar24;
          *(undefined8 *)(puVar27 + uVar30 * 0x60 + 0x70) = uVar29;
          *(undefined8 *)(puVar27 + uVar30 * 0x60 + 0x78) = uVar42;
          uVar28 = uVar28 - 1;
          plVar15 = plVar15 + 1;
        } while (uVar28 != 0);
      }
      else {
        uVar31 = 0;
        do {
          uVar23 = uVar31;
          func_0x000104207f80(uVar31,uVar30);
          uVar6 = *(undefined8 *)(uVar23 + _DAT_113069e40);
          uVar38 = ((undefined8 *)(uVar23 + _DAT_113069e40))[1];
          uVar41 = *(undefined8 *)(uVar23 + _DAT_113069e48);
          uVar33 = *(undefined4 *)(uVar23 + _DAT_113069e50);
          uVar50 = *(undefined4 *)(uVar23 + _DAT_113069e58);
          uVar52 = *(undefined4 *)(uVar23 + _DAT_113069e60);
          uVar37 = *(undefined4 *)(uVar23 + _DAT_113069e68);
          uVar24 = *(undefined8 *)(uVar23 + _DAT_113069e70);
          uVar14 = *(undefined8 *)(uVar23 + _DAT_113069e78);
          uVar40 = *(undefined4 *)(uVar23 + _DAT_113069e80);
          uVar43 = *(undefined4 *)(uVar23 + _DAT_113069e88);
          uVar45 = *(undefined4 *)(uVar23 + _DAT_113069e90);
          uVar47 = *(undefined4 *)(uVar23 + _DAT_113069e98);
          uVar29 = *(undefined8 *)(uVar23 + _DAT_113069ea0);
          uVar39 = *(undefined8 *)(uVar23 + _DAT_113069ea8);
          uVar42 = *(undefined8 *)(uVar23 + _DAT_113069eb0);
          _swift_bridgeObjectRetain(uVar38);
          _swift_unknownObjectRelease(uVar23);
          uVar23 = *(ulong *)(puVar27 + 0x10);
          if (*(ulong *)(puVar27 + 0x18) >> 1 <= uVar23) {
            func_0x000104209b94(1 < *(ulong *)(puVar27 + 0x18),uVar23 + 1,1);
          }
          uVar31 = uVar31 + 1;
          *(ulong *)(puVar27 + 0x10) = uVar23 + 1;
          *(undefined8 *)(puVar27 + uVar23 * 0x60 + 0x20) = uVar6;
          *(undefined8 *)(puVar27 + uVar23 * 0x60 + 0x28) = uVar38;
          *(undefined8 *)(puVar27 + uVar23 * 0x60 + 0x30) = uVar41;
          *(undefined4 *)(puVar27 + uVar23 * 0x60 + 0x38) = uVar33;
          *(undefined4 *)(puVar27 + uVar23 * 0x60 + 0x3c) = uVar50;
          *(undefined4 *)(puVar27 + uVar23 * 0x60 + 0x40) = uVar52;
          *(undefined4 *)(puVar27 + uVar23 * 0x60 + 0x44) = uVar37;
          *(undefined8 *)(puVar27 + uVar23 * 0x60 + 0x48) = uVar24;
          *(undefined8 *)(puVar27 + uVar23 * 0x60 + 0x50) = uVar14;
          *(undefined4 *)(puVar27 + uVar23 * 0x60 + 0x58) = uVar40;
          *(undefined4 *)(puVar27 + uVar23 * 0x60 + 0x5c) = uVar43;
          *(undefined4 *)(puVar27 + uVar23 * 0x60 + 0x60) = uVar45;
          *(undefined4 *)(puVar27 + uVar23 * 0x60 + 100) = uVar47;
          *(undefined8 *)(puVar27 + uVar23 * 0x60 + 0x68) = uVar29;
          *(undefined8 *)(puVar27 + uVar23 * 0x60 + 0x70) = uVar39;
          *(undefined8 *)(puVar27 + uVar23 * 0x60 + 0x78) = uVar42;
        } while (uVar28 != uVar31);
      }
      _objc_release(param_2);
    }
  }
  *param_1 = uVar44;
  param_1[1] = uVar46;
  param_1[2] = uVar48;
  param_1[3] = uVar49;
  param_1[4] = uVar51;
  param_1[5] = uVar16;
  param_1[6] = uVar11;
  param_1[7] = uVar17;
  param_1[8] = uVar12;
  param_1[9] = uVar18;
  param_1[10] = uVar13;
  param_1[0xb] = uVar19;
  param_1[0xc] = uVar32;
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar5;
  *(undefined1 *)(param_1 + 0xf) = uVar7;
  param_1[0x10] = puStack_2a0;
  param_1[0x12] = uStack_320;
  param_1[0x11] = uStack_2e0;
  param_1[0x14] = uStack_310;
  param_1[0x13] = uStack_2f0;
  param_1[0x16] = uStack_300;
  param_1[0x15] = uStack_2c0;
  param_1[0x17] = uStack_2c8;
  *(bool *)(param_1 + 0x18) = bVar1;
  param_1[0x1a] = uStack_3a0;
  param_1[0x19] = uStack_340;
  param_1[0x1c] = uStack_390;
  param_1[0x1b] = uStack_370;
  param_1[0x1e] = uStack_380;
  param_1[0x1d] = uStack_350;
  param_1[0x1f] = uStack_358;
  *(bool *)(param_1 + 0x20) = bVar2;
  param_1[0x21] = puVar22;
  param_1[0x22] = puVar20;
  param_1[0x24] = uStack_3b8;
  param_1[0x23] = puStack_3c0;
  param_1[0x26] = uStack_3c8;
  param_1[0x25] = uStack_3d0;
  param_1[0x27] = uVar25;
  *(undefined1 *)(param_1 + 0x28) = uVar26;
  *(bool *)((long)param_1 + 0x141) = bVar3;
  param_1[0x29] = puVar27;
  return;
}



/* Entry: 10427a344; end: 10427a363;  */

void FUN_10427a344(void)

{
  _objc_opt_self(&PTR_PTR_1129920d8);
  return;
}



/* Entry: 10427a364; end: 10427a40f;  */

undefined8 FUN_10427a364(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10427a410; end: 10427a41f; -[SCAdAppInstallTrackInfo loadedOnEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10427a410(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a3f8);
}



/* Entry: 10427a420; end: 10427a42f; -[SCAdAppInstallTrackInfo loadedOnExit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10427a420(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a400);
}



/* Entry: 10427a430; end: 10427a43f; -[SCAdAppInstallTrackInfo visiblePageLoadTimeSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10427a430(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a408);
}



/* Entry: 10427a440; end: 10427a44f; -[SCAdAppInstallTrackInfo customProductPageEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10427a440(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a410);
}



/* Entry: 10427a450; end: 10427a45f; -[SCAdAppInstallTrackInfo appInstallStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10427a450(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a418);
}



/* Entry: 10427a460; end: 10427a4b3; -[SCAdAppInstallTrackInfo appInActivityTimestampMsArray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427a460(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306a420);
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



/* Entry: 10427a4b4; end: 10427a4c3; -[SCAdAppInstallTrackInfo skOverlayAdTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427a4b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a428));
  return;
}



/* Entry: 10427a4c4; end: 10427a4d3; -[SCAdAppInstallTrackInfo skanImpressionStartTsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427a4c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a430));
  return;
}



/* Entry: 10427a4d4; end: 10427a4e3; -[SCAdAppInstallTrackInfo skanImpressionEndTsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427a4d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a438));
  return;
}



/* Entry: 10427a4e4; end: 10427a4f3; -[SCAdAppInstallTrackInfo skanViewTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427a4e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a440));
  return;
}



/* Entry: 10427a4f4; end: 10427a6fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427a4f4(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306a3f8) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11306a400) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306a408) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11306a410) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306a418) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306a420) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306a428) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11306a430) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11306a438) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11306a440) = param_10;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10427a6fc; end: 10427a7d3; -[SCAdAppInstallTrackInfo initWithLoadedOnEntry:loadedOnExit:visiblePageLoadTimeSeconds:customProductPageEnabled:appInstallStatus:appInActivityTimestampMsArray:skOverlayAdTrackInfo:skanImpressionStartTsMs:skanImpressionEndTsMs:skanViewTime:] */

void FUN_10427a6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  if (param_8 == 0) {
    param_8 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_8,PTR___sSdN_11034dd90);
  }
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  func_0x00010427a5f8(param_1,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12);
  return;
}



/* Entry: 10427a7d4; end: 10427a843;  */

undefined8 FUN_10427a7d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_10427b9a8(param_1);
  func_0x00010178e2d8(param_1);
  return uVar1;
}



/* Entry: 10427a844; end: 10427a877; -[SCAdAppInstallTrackInfo hash] */

undefined8 FUN_10427a844(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10427a878();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10427a878; end: 10427aa83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427a878(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  double dVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306a3f8));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306a400));
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306a408) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11306a408);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306a410));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a418));
  lVar1 = *(long *)(unaff_x20 + _DAT_11306a420);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar1,PTR___sSdN_11034dd90);
    lVar2 = lVar1;
    func_0x00010bfde980();
    _objc_release(lVar1);
  }
  __ss6HasherV8_combineyySuF(lVar2);
  if (*(long *)(unaff_x20 + _DAT_11306a428) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1042950cc();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306a430);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306a438);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306a440);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10427aa84; end: 10427ae37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10427aa84(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long unaff_x20;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  double dVar20;
  double dVar21;
  long lStack_98;
  long alStack_90 [4];
  
  lVar10 = unaff_x20;
  _swift_getObjectType();
  FUN_10427bf34(param_1,alStack_90,0x112d387f8,&UNK_10d902650);
  if (alStack_90[3] == 0) {
    func_0x00010427bf7c(alStack_90,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar9 = &lStack_98;
    _swift_dynamicCast(plVar9,alStack_90,PTR___sypN_11034f1a8 + 8,lVar10,6);
    if (((ulong)plVar9 & 1) != 0) {
      bVar3 = *(byte *)(unaff_x20 + _DAT_11306a3f8);
      bVar4 = *(byte *)(lStack_98 + _DAT_11306a3f8);
      bVar5 = *(byte *)(unaff_x20 + _DAT_11306a400);
      bVar6 = *(byte *)(lStack_98 + _DAT_11306a400);
      dVar20 = *(double *)(unaff_x20 + _DAT_11306a408);
      dVar21 = *(double *)(lStack_98 + _DAT_11306a408);
      bVar7 = *(byte *)(unaff_x20 + _DAT_11306a410);
      bVar8 = *(byte *)(lStack_98 + _DAT_11306a410);
      iVar1 = *(int *)(unaff_x20 + _DAT_11306a418);
      iVar2 = *(int *)(lStack_98 + _DAT_11306a418);
      lVar10 = *(long *)(unaff_x20 + _DAT_11306a420);
      uVar14 = (uint)(lVar10 == 0 && *(long *)(lStack_98 + _DAT_11306a420) == 0);
      if ((lVar10 != 0) && (*(long *)(lStack_98 + _DAT_11306a420) != 0)) {
        FUN_10422988c();
        uVar14 = (uint)lVar10;
      }
      if (*(long *)(unaff_x20 + _DAT_11306a428) == 0) {
        uVar17 = (uint)(*(long *)(lStack_98 + _DAT_11306a428) == 0);
      }
      else {
        lVar10 = *(long *)(lStack_98 + _DAT_11306a428);
        if (lVar10 == 0) {
          lVar11 = 0;
          alStack_90[1] = 0;
          alStack_90[2] = 0;
        }
        else {
          lVar11 = 0;
          FUN_1042967b0();
        }
        alStack_90[0] = lVar10;
        alStack_90[3] = lVar11;
        _objc_retain(lVar10);
        uVar17 = 0;
        FUN_1042952f4();
        func_0x00010427bf7c(alStack_90,0x112d387f8,&UNK_10d902650);
      }
      lVar11 = *(long *)(unaff_x20 + _DAT_11306a430);
      lVar10 = *(long *)(lStack_98 + _DAT_11306a430);
      uVar18 = (uint)(lVar11 == 0 && lVar10 == 0);
      if ((lVar11 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar12 = lVar11;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar18 = (uint)lVar12;
        _objc_release(lVar11);
        _objc_release(lVar10);
      }
      lVar11 = *(long *)(unaff_x20 + _DAT_11306a438);
      lVar10 = *(long *)(lStack_98 + _DAT_11306a438);
      uVar19 = (uint)(lVar11 == 0 && lVar10 == 0);
      if ((lVar11 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c();
        _objc_retain(lVar10);
        _objc_retain(lVar11);
        lVar12 = lVar11;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar19 = (uint)lVar12;
        _objc_release(lVar11);
        _objc_release(lVar10);
      }
      lVar11 = *(long *)(unaff_x20 + _DAT_11306a440);
      lVar10 = *(long *)(lStack_98 + _DAT_11306a440);
      if (lVar11 == 0) {
        lVar12 = lVar10;
        _objc_retain(lVar10);
        _objc_release(lStack_98);
        if (lVar10 != 0) {
          uVar16 = 0;
          goto LAB_10427add0;
        }
        uVar16 = 1;
      }
      else {
        uVar16 = 0;
        lVar12 = lStack_98;
        if (lVar10 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar10);
          _objc_retain(lVar11);
          lVar13 = lVar11;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar16 = (uint)lVar13;
          _objc_release(lVar11);
          _objc_release(lVar10);
        }
LAB_10427add0:
        _objc_release(lVar12);
      }
      uVar15 = 0;
      if ((((((bVar3 ^ bVar4 | bVar5 ^ bVar6) & 1) == 0) && (dVar20 == dVar21)) &&
          (((bVar7 ^ bVar8) & 1) == 0)) &&
         (((iVar1 == iVar2 && (((uVar14 ^ 1) & 1) == 0)) &&
          ((((uVar17 ^ 1) & 1) == 0 && (((uVar18 ^ 1) & 1) == 0)))))) {
        uVar15 = uVar19 & uVar16;
      }
      goto LAB_10427abd4;
    }
  }
  uVar15 = 0;
LAB_10427abd4:
  return uVar15 & 1;
}



/* Entry: 10427ae38; end: 10427aec7; -[SCAdAppInstallTrackInfo isEqual:] */

uint FUN_10427ae38(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10427aa84(&uStack_40);
  _objc_release(param_1);
  func_0x00010427bf7c(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 10427aec8; end: 10427aecb; -[SCAdAppInstallTrackInfo copyWithZone:] */

void FUN_10427aec8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10427aecc; end: 10427b1cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427aecc(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = 0x4f5f444544414f4c;
  uVar1 = uVar3;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f5f444544414f4c,0xef5952544e455f4e);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f5f444544414f4c,0xee00544958455f4e);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306a408);
  uVar1 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f0520);
  func_0x00010bf92e80(uVar3,param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f0540);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f0560);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  lVar2 = *(long *)(unaff_x20 + _DAT_11306a420);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,PTR___sSdN_11034dd90);
  }
  uVar1 = 0xd000000000000022;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f1f0580);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar2);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f05b0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f05d0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f05f0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4549565f4e414b53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4549565f4e414b53,0xee00454d49545f57);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10427b1cc; end: 10427b21b; -[SCAdAppInstallTrackInfo encodeWithCoder:] */

void FUN_10427b1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10427aecc(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10427b21c; end: 10427b24b;  */

void FUN_10427b21c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10427b24c(param_1);
  return;
}



/* Entry: 10427b24c; end: 10427b863;  */

undefined8 FUN_10427b24c(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 unaff_x20;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar5 = 0x4f5f444544414f4c;
  uVar2 = uVar5;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f5f444544414f4c,0xef5952544e455f4e);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f5f444544414f4c,0xee00544958455f4e);
  func_0x00010bf66ce0();
  _objc_release(uVar5);
  uVar2 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f0520);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar2);
  uVar2 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f0540);
  func_0x00010bf66ce0(param_2);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f0560);
  uVar3 = param_2;
  func_0x00010bf66f40();
  _objc_release(uVar2);
  if (uVar3 < 3) {
    uVar2 = 0xd000000000000022;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f1f0580);
    uVar3 = param_2;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar3 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
      _swift_unknownObjectRelease(uVar3);
    }
    puVar1 = PTR___sypN_11034f1a8;
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010427bf7c(&uStack_90,0x112d387f8,&UNK_10d902650);
      lVar8 = 0;
    }
    else {
      uVar2 = 0x112d3d588;
      func_0x0001000285a8(0x112d3d588,&UNK_10da29ed0);
      plVar4 = &lStack_b8;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
      lVar8 = lStack_b8;
      if ((int)plVar4 == 0) {
        lVar8 = 0;
      }
    }
    uVar2 = 0xd000000000000018;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f05b0);
    uVar3 = param_2;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar3 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
      _swift_unknownObjectRelease(uVar3);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010427bf7c(&uStack_90,0x112d387f8,&UNK_10d902650);
      lVar9 = 0;
    }
    else {
      uVar2 = 0;
      FUN_1042967b0(0);
      plVar4 = &lStack_b8;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
      lVar9 = lStack_b8;
      if ((int)plVar4 == 0) {
        lVar9 = 0;
      }
    }
    uVar2 = 0xd00000000000001b;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f05d0);
    uVar3 = param_2;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar3 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
      _swift_unknownObjectRelease(uVar3);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010427bf7c(&uStack_90,0x112d387f8,&UNK_10d902650);
      lVar10 = 0;
    }
    else {
      uVar2 = 0;
      func_0x0001002ed07c(0);
      plVar4 = &lStack_b8;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
      lVar10 = lStack_b8;
      if ((int)plVar4 == 0) {
        lVar10 = 0;
      }
    }
    uVar2 = 0xd000000000000019;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f05f0);
    uVar3 = param_2;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar3 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
      _swift_unknownObjectRelease(uVar3);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010427bf7c(&uStack_90,0x112d387f8,&UNK_10d902650);
      lVar11 = 0;
    }
    else {
      uVar2 = 0;
      func_0x0001002ed07c(0);
      plVar4 = &lStack_b8;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
      lVar11 = lStack_b8;
      if ((int)plVar4 == 0) {
        lVar11 = 0;
      }
    }
    uVar2 = 0x4549565f4e414b53;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4549565f4e414b53,0xee00454d49545f57);
    uVar3 = param_2;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar3 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
      _swift_unknownObjectRelease(uVar3);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010427bf7c(&uStack_90,0x112d387f8,&UNK_10d902650);
      lVar6 = 0;
    }
    else {
      uVar2 = 0;
      func_0x0001002ed07c(0);
      plVar4 = &lStack_b8;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
      lVar6 = lStack_b8;
      if ((int)plVar4 == 0) {
        lVar6 = 0;
      }
    }
    if (lVar8 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar8;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar8,PTR___sSdN_11034dd90);
      _swift_bridgeObjectRelease(lVar8);
    }
    func_0x00010c0266c0(param_1);
    _objc_release(lVar7);
    _objc_release(param_2);
    _objc_release(lVar9);
    _objc_release(lVar10);
    _objc_release(lVar11);
    _objc_release(lVar6);
  }
  else {
    _objc_release(param_2);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Entry: 10427b864; end: 10427b88b; -[SCAdAppInstallTrackInfo initWithCoder:] */

void FUN_10427b864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10427b24c();
  return;
}



/* Entry: 10427b88c; end: 10427b8c3; -[SCAdAppInstallTrackInfo description] */

void FUN_10427b88c(void)

{
  undefined1 auStack_d0 [192];
  
  _objc_retain();
  FUN_10427bc10(auStack_d0);
  func_0x00010178e2d8(auStack_d0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10427b8c4; end: 10427b93f; -[SCAdAppInstallTrackInfo init] */

void FUN_10427b8c4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdAppInstallTrackInfoWrapper.swift",0x31,2,0x9d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10427b90c);
  (*pcVar1)();
}



/* Entry: 10427b940; end: 10427b9a7; -[SCAdAppInstallTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427b940(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a420));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a428));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a430));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a438));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306a440));
  return;
}



/* Entry: 10427b9a8; end: 10427bc0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427b9a8(undefined1 *param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_1c0 [104];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _DAT_11306a3f8) = *param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11306a400) = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11306a408) = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(unaff_x20 + _DAT_11306a410) = param_1[0x10];
  uStack_148 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(unaff_x20 + _DAT_11306a418) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(unaff_x20 + _DAT_11306a420) = uStack_148;
  uStack_c8 = *(undefined8 *)(param_1 + 0x30);
  uStack_d0 = *(undefined8 *)(param_1 + 0x28);
  uStack_b8 = *(undefined8 *)(param_1 + 0x40);
  uStack_c0 = *(undefined8 *)(param_1 + 0x38);
  uStack_a8 = *(undefined8 *)(param_1 + 0x50);
  uStack_b0 = *(undefined8 *)(param_1 + 0x48);
  uStack_98 = *(undefined8 *)(param_1 + 0x60);
  uStack_a0 = *(undefined8 *)(param_1 + 0x58);
  uStack_88 = *(undefined8 *)(param_1 + 0x70);
  lStack_90 = *(long *)(param_1 + 0x68);
  uStack_78 = *(undefined8 *)(param_1 + 0x80);
  uStack_80 = *(undefined8 *)(param_1 + 0x78);
  uStack_70 = param_1[0x88];
  if (lStack_90 == 1) {
    FUN_10427bf34(&uStack_148,&uStack_140,0x11306a470,&UNK_10dce5650);
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uStack_108 = *(undefined8 *)(param_1 + 0x60);
    uStack_110 = *(undefined8 *)(param_1 + 0x58);
    uStack_f8 = *(undefined8 *)(param_1 + 0x70);
    uStack_100 = *(undefined8 *)(param_1 + 0x68);
    uStack_e8 = *(undefined8 *)(param_1 + 0x80);
    uStack_f0 = *(undefined8 *)(param_1 + 0x78);
    uStack_e0 = param_1[0x88];
    uStack_138 = *(undefined8 *)(param_1 + 0x30);
    uStack_140 = *(undefined8 *)(param_1 + 0x28);
    uStack_128 = *(undefined8 *)(param_1 + 0x40);
    uStack_130 = *(undefined8 *)(param_1 + 0x38);
    uStack_118 = *(undefined8 *)(param_1 + 0x50);
    uStack_120 = *(undefined8 *)(param_1 + 0x48);
    FUN_1042967b0(0);
    _objc_allocWithZone();
    FUN_10427bf34(&uStack_148,auStack_1c0,0x11306a470,&UNK_10dce5650);
    FUN_10427bf34(&uStack_d0,auStack_1c0,0x112dcde38,&UNK_10dce36f0);
    puVar2 = &uStack_140;
    FUN_104295e5c();
    func_0x00010427bf7c(&uStack_d0,0x112dcde38,&UNK_10dce36f0);
  }
  *(undefined8 **)(unaff_x20 + _DAT_11306a428) = puVar2;
  if (param_1[0x98] == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_11306a430) = puVar1;
  if (param_1[0xa8] == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_11306a438) = puVar1;
  if (param_1[0xb8] == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_11306a440) = puVar1;
  _objc_msgSendSuper2(&stack0xfffffffffffffea8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10427bc10; end: 10427bf13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427bc10(undefined8 *param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uStack_420;
  undefined8 uStack_418;
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
  undefined1 auStack_3c0 [192];
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
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined8 uStack_24f;
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
  undefined1 uStack_190;
  undefined8 uStack_18f;
  undefined1 uStack_178;
  undefined1 uStack_177;
  undefined6 uStack_176;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
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
  undefined1 uStack_58;
  
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_e8 = 0;
  uStack_110 = 1;
  uStack_108 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_f0 = 0;
  uStack_e0 = 1;
  uStack_d8 = 0;
  uStack_d0 = 1;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c0 = 1;
  uStack_178 = *(undefined1 *)(param_2 + _DAT_11306a3f8);
  uStack_177 = *(undefined1 *)(param_2 + _DAT_11306a400);
  uStack_170 = *(undefined8 *)(param_2 + _DAT_11306a408);
  uStack_168 = *(undefined1 *)(param_2 + _DAT_11306a410);
  uStack_160 = *(undefined8 *)(param_2 + _DAT_11306a418);
  uStack_158 = *(undefined8 *)(param_2 + _DAT_11306a420);
  lVar3 = *(long *)(param_2 + _DAT_11306a428);
  if (lVar3 == 0) {
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    _swift_bridgeObjectRetain();
    uVar4 = 0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    uStack_3e0 = 1;
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_418 = 0;
    uStack_420 = 0;
  }
  else {
    _swift_bridgeObjectRetain();
    _objc_retain(lVar3);
    FUN_104296024(&uStack_b8);
    uStack_3f8 = uStack_90;
    uStack_400 = uStack_98;
    uStack_3e8 = uStack_a0;
    uStack_3f0 = uStack_a8;
    uStack_418 = uStack_60;
    uStack_420 = uStack_68;
    uStack_408 = uStack_80;
    uStack_410 = uStack_88;
    uStack_3d8 = uStack_70;
    uStack_3e0 = uStack_78;
    uStack_3c8 = uStack_b0;
    uStack_3d0 = uStack_b8;
    _objc_release(lVar3);
    uVar4 = uStack_58;
  }
  func_0x00010427bf7c(&uStack_150,0x112dcde38,&UNK_10dce36f0);
  uStack_138 = uStack_3e8;
  uStack_140 = uStack_3f0;
  uStack_148 = uStack_3c8;
  uStack_150 = uStack_3d0;
  uStack_118 = uStack_408;
  uStack_120 = uStack_410;
  uStack_128 = uStack_3f8;
  uStack_130 = uStack_400;
  uStack_f8 = uStack_418;
  uStack_100 = uStack_420;
  uStack_108 = uStack_3d8;
  uStack_110 = uStack_3e0;
  uVar5 = 0;
  bVar1 = *(long *)(param_2 + _DAT_11306a430) == 0;
  uStack_f0 = uVar4;
  if (bVar1) {
    uStack_3e0 = 0;
  }
  else {
    func_0x00010bf885a0();
  }
  bVar2 = *(long *)(param_2 + _DAT_11306a438) == 0;
  uStack_e8 = uStack_3e0;
  uStack_e0 = bVar1;
  if (!bVar2) {
    func_0x00010bf885a0();
    uVar5 = uStack_3e0;
  }
  uStack_d8 = uVar5;
  uStack_d0 = bVar2;
  if (*(long *)(param_2 + _DAT_11306a440) == 0) {
    _objc_release(param_2);
    uStack_c8 = 0;
    uStack_c7 = 0;
    uStack_c0 = 1;
  }
  else {
    func_0x00010bf885a0();
    uStack_c8 = (undefined1)uStack_3e0;
    uStack_c7 = (undefined7)((ulong)uStack_3e0 >> 8);
    uStack_c0 = 0;
    _objc_release(param_2);
  }
  uStack_1b8 = CONCAT71(uStack_ef,uStack_f0);
  uStack_268 = CONCAT71(uStack_df,uStack_e0);
  uStack_278 = CONCAT71(uStack_ef,uStack_f0);
  uStack_280 = uStack_f8;
  uStack_270 = uStack_e8;
  uStack_1a8 = CONCAT71(uStack_df,uStack_e0);
  uStack_258 = uStack_d0;
  uStack_260 = uStack_d8;
  uStack_24f = CONCAT17(uStack_c0,uStack_c7);
  uStack_257 = uStack_cf;
  uStack_250 = uStack_c8;
  uStack_2b8 = uStack_130;
  uStack_2c0 = uStack_138;
  uStack_2a8 = uStack_120;
  uStack_2b0 = uStack_128;
  uStack_298 = uStack_110;
  uStack_2a0 = uStack_118;
  uStack_288 = uStack_100;
  uStack_290 = uStack_108;
  uStack_300 = CONCAT62(uStack_176,CONCAT11(uStack_177,uStack_178));
  uStack_2f0 = CONCAT71(uStack_167,uStack_168);
  uStack_2f8 = uStack_170;
  uStack_2e8 = uStack_160;
  uStack_240 = CONCAT62(uStack_176,CONCAT11(uStack_177,uStack_178));
  uStack_230 = CONCAT71(uStack_167,uStack_168);
  uStack_2d8 = uStack_150;
  uStack_2e0 = uStack_158;
  uStack_2c8 = uStack_140;
  uStack_2d0 = uStack_148;
  uStack_1c0 = uStack_f8;
  uStack_1b0 = uStack_e8;
  uStack_198 = uStack_d0;
  uStack_1a0 = uStack_d8;
  uStack_18f = CONCAT17(uStack_c0,uStack_c7);
  uStack_190 = uStack_c8;
  uStack_1f8 = uStack_130;
  uStack_200 = uStack_138;
  uStack_1e8 = uStack_120;
  uStack_1f0 = uStack_128;
  uStack_1d8 = uStack_110;
  uStack_1e0 = uStack_118;
  uStack_1c8 = uStack_100;
  uStack_1d0 = uStack_108;
  uStack_238 = uStack_170;
  uStack_228 = uStack_160;
  uStack_218 = uStack_150;
  uStack_220 = uStack_158;
  uStack_208 = uStack_140;
  uStack_210 = uStack_148;
  func_0x00010178e29c(&uStack_300,auStack_3c0);
  func_0x00010178e2d8(&uStack_240);
  param_1[0x11] = uStack_278;
  param_1[0x10] = uStack_280;
  param_1[0x13] = uStack_268;
  param_1[0x12] = uStack_270;
  param_1[0x15] = CONCAT71(uStack_257,uStack_258);
  param_1[0x14] = uStack_260;
  *(undefined8 *)((long)param_1 + 0xb1) = uStack_24f;
  *(ulong *)((long)param_1 + 0xa9) = CONCAT17(uStack_250,uStack_257);
  param_1[9] = uStack_2b8;
  param_1[8] = uStack_2c0;
  param_1[0xb] = uStack_2a8;
  param_1[10] = uStack_2b0;
  param_1[0xd] = uStack_298;
  param_1[0xc] = uStack_2a0;
  param_1[0xf] = uStack_288;
  param_1[0xe] = uStack_290;
  param_1[1] = uStack_2f8;
  *param_1 = uStack_300;
  param_1[3] = uStack_2e8;
  param_1[2] = uStack_2f0;
  param_1[5] = uStack_2d8;
  param_1[4] = uStack_2e0;
  param_1[7] = uStack_2c8;
  param_1[6] = uStack_2d0;
  return;
}



/* Entry: 10427bf14; end: 10427bf33;  */

void FUN_10427bf14(void)

{
  _objc_opt_self(&PTR_PTR_112992248);
  return;
}



/* Entry: 10427bf34; end: 10427bfbb;  */

undefined8 FUN_10427bf34(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10427bfbc; end: 10427bfcb; -[SCAdArShoppingExperienceTrack tryOnButtonClicked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10427bfbc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a478);
}



/* Entry: 10427bfcc; end: 10427bfdb; -[SCAdArShoppingExperienceTrack arExperienceTimeViewedInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10427bfcc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a480);
}



/* Entry: 10427bfdc; end: 10427c037; -[SCAdArShoppingExperienceTrack unlockableId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427bfdc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306a488))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306a488);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10427c038; end: 10427c047; -[SCAdArShoppingExperienceTrack arExperienceAttachmentClicked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10427c038(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a490);
}



/* Entry: 10427c048; end: 10427c09b; -[SCAdArShoppingExperienceTrack arLensSessionIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427c048(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306a498);
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



/* Entry: 10427c09c; end: 10427c147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427c09c(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306a478) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306a480) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a488);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_11306a490) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306a498) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10427c148; end: 10427c233; -[SCAdArShoppingExperienceTrack initWithTryOnButtonClicked:arExperienceTimeViewedInMillis:unlockableId:arExperienceAttachmentClicked:arLensSessionIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427c148(undefined8 param_1,long param_2,long param_3,undefined1 param_4,long param_5,
                  undefined1 param_6,long param_7)

{
  long *plVar1;
  long lVar2;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_2;
  _swift_getObjectType();
  if (param_5 == 0) {
    param_3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  if (param_7 == 0) {
    param_7 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_7,PTR___sSSN_11034da80);
  }
  *(undefined1 *)(param_2 + _DAT_11306a478) = param_4;
  *(undefined8 *)(param_2 + _DAT_11306a480) = param_1;
  plVar1 = (long *)(param_2 + _DAT_11306a488);
  *plVar1 = param_5;
  plVar1[1] = param_3;
  *(undefined1 *)(param_2 + _DAT_11306a490) = param_6;
  *(long *)(param_2 + _DAT_11306a498) = param_7;
  lStack_70 = param_2;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10427c234; end: 10427c2c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427c234(undefined1 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306a478) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306a480) = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a488);
  puVar1[1] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_11306a490) = param_1[0x20];
  *(undefined8 *)(unaff_x20 + _DAT_11306a498) = *(undefined8 *)(param_1 + 0x28);
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10427c2c4; end: 10427c2f7; -[SCAdArShoppingExperienceTrack hash] */

undefined8 FUN_10427c2c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10427c2f8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10427c2f8; end: 10427c407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427c2f8(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  double dVar5;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306a478));
  dVar5 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306a480) != 0.0) {
    dVar5 = *(double *)(unaff_x20 + _DAT_11306a480);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar5);
  if (((undefined8 *)(unaff_x20 + _DAT_11306a488))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306a488);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar4 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306a490));
  lVar2 = *(long *)(unaff_x20 + _DAT_11306a498);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,PTR___sSSN_11034da80);
    lVar3 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar3);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10427c408; end: 10427c59f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10427c408(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long unaff_x20;
  uint uVar10;
  double dVar11;
  double dVar12;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar7 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar5 = &lStack_78;
    _swift_dynamicCast(plVar5,auStack_70,PTR___sypN_11034f1a8 + 8,lVar7,6);
    if (((ulong)plVar5 & 1) != 0) {
      bVar1 = *(byte *)(unaff_x20 + _DAT_11306a478);
      bVar2 = *(byte *)(lStack_78 + _DAT_11306a478);
      dVar11 = *(double *)(unaff_x20 + _DAT_11306a480);
      dVar12 = *(double *)(lStack_78 + _DAT_11306a480);
      lVar7 = ((long *)(unaff_x20 + _DAT_11306a488))[1];
      lVar8 = ((long *)(lStack_78 + _DAT_11306a488))[1];
      uVar10 = (uint)(lVar7 == 0 && lVar8 == 0);
      if (lVar7 != 0 && lVar8 != 0) {
        lVar6 = *(long *)(unaff_x20 + _DAT_11306a488);
        if (lVar6 == *(long *)(lStack_78 + _DAT_11306a488) && lVar7 == lVar8) {
          uVar10 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar10 = (uint)lVar6;
        }
      }
      bVar3 = *(byte *)(unaff_x20 + _DAT_11306a490);
      bVar4 = *(byte *)(lStack_78 + _DAT_11306a490);
      lVar7 = *(long *)(unaff_x20 + _DAT_11306a498);
      lVar8 = *(long *)(lStack_78 + _DAT_11306a498);
      if (lVar7 == 0) {
        _swift_bridgeObjectRetain(lVar8);
        _objc_release(lStack_78);
        if (lVar8 == 0) {
          uVar9 = 1;
        }
        else {
          _swift_bridgeObjectRelease(lVar8);
          uVar9 = 0;
        }
      }
      else {
        uVar9 = 0;
        if (lVar8 != 0) {
          func_0x00010142cfc4(lVar7,lVar8);
          uVar9 = (uint)lVar7;
        }
        _objc_release(lStack_78);
      }
      return (uint)(dVar11 == dVar12) & ((bVar1 ^ bVar2) ^ 0xffffffff) &
             uVar10 & ((bVar3 ^ bVar4) ^ 1) & uVar9;
    }
  }
  return 0;
}



/* Entry: 10427c5a0; end: 10427c61f; -[SCAdArShoppingExperienceTrack isEqual:] */

uint FUN_10427c5a0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10427c408(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10427c620; end: 10427c623; -[SCAdArShoppingExperienceTrack copyWithZone:] */

void FUN_10427c620(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10427c624; end: 10427c7f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427c624(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f0650);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306a480);
  uVar1 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f1f0670);
  func_0x00010bf92e80(uVar3,param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306a488))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306a488);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar3 = 0x42414b434f4c4e55;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x42414b434f4c4e55,0xed000044495f454c);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar3);
  uVar1 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f1f06a0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  lVar2 = *(long *)(unaff_x20 + _DAT_11306a498);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,PTR___sSSN_11034da80);
  }
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f06d0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10427c7f4; end: 10427c843; -[SCAdArShoppingExperienceTrack encodeWithCoder:] */

void FUN_10427c7f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10427c624(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10427c844; end: 10427c873;  */

void FUN_10427c844(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10427c874(param_1);
  return;
}



/* Entry: 10427c874; end: 10427cb6b;  */

undefined8 FUN_10427c874(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar4;
  long lVar5;
  undefined8 unaff_x20;
  long lVar6;
  long lVar7;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  int iVar3;
  
  iVar2 = (int)&lStack_c0;
  iVar3 = (int)&lStack_c0;
  uVar4 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f0650);
  func_0x00010bf66ce0(param_2);
  _objc_release(uVar4);
  uVar4 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f1f0670);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar4);
  uVar4 = 0x42414b434f4c4e55;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x42414b434f4c4e55,0xed000044495f454c);
  lVar7 = param_2;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar7 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar7);
    _swift_unknownObjectRelease(lVar7);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    _swift_dynamicCast(&lStack_c0,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar6 = lStack_b8;
    lVar7 = lStack_c0;
    if (iVar2 == 0) {
      lVar7 = 0;
      lVar6 = 0;
    }
  }
  uVar4 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f1f06a0);
  func_0x00010bf66ce0(param_2);
  _objc_release(uVar4);
  uVar4 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f06d0);
  lVar5 = param_2;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar5 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lVar5 = 0;
  }
  else {
    uVar4 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    _swift_dynamicCast(&lStack_c0,&uStack_90,puVar1 + 8,uVar4,6);
    lVar5 = lStack_c0;
    if (iVar3 == 0) {
      lVar5 = 0;
    }
  }
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar7,lVar6);
    _swift_bridgeObjectRelease(lVar6);
  }
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar5;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar5,PTR___sSSN_11034da80);
    _swift_bridgeObjectRelease(lVar5);
  }
  func_0x00010c0557a0(param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(param_2);
  return unaff_x20;
}



/* Entry: 10427cb6c; end: 10427cb93; -[SCAdArShoppingExperienceTrack initWithCoder:] */

void FUN_10427cb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10427c874();
  return;
}



/* Entry: 10427cb94; end: 10427cbaf; -[SCAdArShoppingExperienceTrack description] */

void FUN_10427cb94(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10427cbb0; end: 10427cc2b; -[SCAdArShoppingExperienceTrack init] */

void FUN_10427cbb0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdArShoppingExperienceTrackWrapper.swift",0x37,2,0x68,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10427cbf8);
  (*pcVar1)();
}



/* Entry: 10427cc2c; end: 10427cc67; -[SCAdArShoppingExperienceTrack .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427cc2c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a488 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306a498));
  return;
}



/* Entry: 10427cc68; end: 10427cc87;  */

void FUN_10427cc68(void)

{
  _objc_opt_self(&PTR_PTR_112992360);
  return;
}



/* Entry: 10427cc88; end: 10427cc97; -[SCAdChatFeedBannerTrackInfo bannerTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10427cc88(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a4c8);
}



/* Entry: 10427cc98; end: 10427cca7; -[SCAdChatFeedBannerTrackInfo tapDestination] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10427cc98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a4d0);
}



/* Entry: 10427cca8; end: 10427cd03; -[SCAdChatFeedBannerTrackInfo conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427cca8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306a4d8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306a4d8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10427cd04; end: 10427cd07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427cd04(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306a4c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306a4d0) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a4d8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10427cd08; end: 10427ce27; -[SCAdChatFeedBannerTrackInfo initWithBannerTapped:tapDestination:conversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427cd08(long param_1,long param_2,undefined1 param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined1 *)(param_1 + _DAT_11306a4c8) = param_3;
  *(undefined8 *)(param_1 + _DAT_11306a4d0) = param_4;
  plVar1 = (long *)(param_1 + _DAT_11306a4d8);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10427ce28; end: 10427cefb; -[SCAdChatFeedBannerTrackInfo hash] */

undefined8 FUN_10427ce28(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010427ce5c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10427cefc; end: 10427d03f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10427cefc(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long unaff_x20;
  long lVar9;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar7 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
    return 0;
  }
  plVar5 = &lStack_68;
  _swift_dynamicCast(plVar5,auStack_60,PTR___sypN_11034f1a8 + 8,lVar7,6);
  if (((ulong)plVar5 & 1) == 0) {
    return 0;
  }
  bVar3 = *(byte *)(unaff_x20 + _DAT_11306a4c8);
  bVar4 = *(byte *)(lStack_68 + _DAT_11306a4c8);
  iVar1 = *(int *)(unaff_x20 + _DAT_11306a4d0);
  iVar2 = *(int *)(lStack_68 + _DAT_11306a4d0);
  lVar7 = ((long *)(unaff_x20 + _DAT_11306a4d8))[1];
  lVar9 = ((long *)(lStack_68 + _DAT_11306a4d8))[1];
  if (lVar7 == 0) {
    _swift_bridgeObjectRetain(lVar9);
    _objc_release(lStack_68);
    if (lVar9 != 0) {
      _swift_bridgeObjectRelease(lVar9);
      uVar8 = 0;
      goto LAB_10427d018;
    }
LAB_10427d014:
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
    if (lVar9 != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_11306a4d8);
      if (lVar6 == *(long *)(lStack_68 + _DAT_11306a4d8) && lVar7 == lVar9) {
        _objc_release(lStack_68);
        goto LAB_10427d014;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar8 = (uint)lVar6;
    }
    _objc_release(lStack_68);
  }
LAB_10427d018:
  return ((bVar3 ^ bVar4) ^ 1) & (uint)(iVar1 == iVar2) & uVar8;
}



/* Entry: 10427d040; end: 10427d0bf; -[SCAdChatFeedBannerTrackInfo isEqual:] */

uint FUN_10427d040(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10427cefc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10427d0c0; end: 10427d0c3; -[SCAdChatFeedBannerTrackInfo copyWithZone:] */

void FUN_10427d0c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10427d0c4; end: 10427d1eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427d0c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x545f52454e4e4142;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545f52454e4e4142,0xed00004445505041);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x545345445f504154;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545345445f504154,0xef4e4f4954414e49);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306a4d8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306a4d8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x41535245564e4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x41535245564e4f43,0xef44495f4e4f4954);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10427d1ec; end: 10427d23b; -[SCAdChatFeedBannerTrackInfo encodeWithCoder:] */

void FUN_10427d1ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10427d0c4(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10427d23c; end: 10427d26b;  */

void FUN_10427d23c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10427d26c(param_1);
  return;
}



/* Entry: 10427d26c; end: 10427d44b;  */

undefined8 FUN_10427d26c(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar3 = 0;
  uVar1 = 0x545f52454e4e4142;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545f52454e4e4142,0xed00004445505041);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x545345445f504154;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545345445f504154,0xef4e4f4954414e49);
  uVar2 = param_1;
  func_0x00010bf66f40();
  _objc_release(uVar1);
  if (3 < uVar2) {
    _objc_release(param_1);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return 0;
  }
  uVar1 = 0x41535245564e4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x41535245564e4f43,0xef44495f4e4f4954);
  uVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (uVar2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,uVar2);
    _swift_unknownObjectRelease(uVar2);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    _swift_dynamicCast(&uStack_90,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((uVar3 & 1) != 0) {
      uVar1 = uStack_90;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_90,uStack_88);
      _swift_bridgeObjectRelease(uStack_88);
      goto LAB_10427d408;
    }
  }
  uVar1 = 0;
LAB_10427d408:
  func_0x00010bff69e0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 10427d44c; end: 10427d473; -[SCAdChatFeedBannerTrackInfo initWithCoder:] */

void FUN_10427d44c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10427d26c();
  return;
}



/* Entry: 10427d474; end: 10427d48f; -[SCAdChatFeedBannerTrackInfo description] */

void FUN_10427d474(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10427d490; end: 10427d50b; -[SCAdChatFeedBannerTrackInfo init] */

void FUN_10427d490(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdChatFeedBannerTrackInfoWrapper.swift",0x35,2,0x54,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10427d4d8);
  (*pcVar1)();
}


