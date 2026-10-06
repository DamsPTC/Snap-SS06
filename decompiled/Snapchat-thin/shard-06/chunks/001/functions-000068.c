/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10446a858; end: 10446a867; -[SCContextSnapLensMetrics turnNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446a858(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307bec0));
  return;
}



/* Entry: 10446a868; end: 10446a877; -[SCContextSnapLensMetrics isComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446a868(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307bec8));
  return;
}



/* Entry: 10446a878; end: 10446a883; -[SCContextSnapLensMetrics customizationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446a878(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307bed0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307bed0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10446a884; end: 10446a88f; -[SCContextSnapLensMetrics lyricsTrackIdInLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446a884(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307bed8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307bed8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10446a890; end: 10446a89b; -[SCContextSnapLensMetrics soundSyncTrackIdInLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446a890(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307bee0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307bee0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10446a89c; end: 10446a8f3;  */

void FUN_10446a89c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10446a8f4; end: 10446a9f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446a8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307beb0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307beb8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307bec0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11307bec8) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bed0);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bed8);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bee0);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10446a9f4; end: 10446abb7; -[SCContextSnapLensMetrics initWithLensId:promptId:turnNumber:isComplete:customizationId:lyricsTrackIdInLens:soundSyncTrackIdInLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446a9f4(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,long param_8,long param_9)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lStack_88 = 0;
    lStack_80 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_88 = param_2;
    lStack_80 = param_3;
  }
  if (param_4 == 0) {
    lStack_98 = 0;
    lStack_90 = 0;
    param_4 = lStack_90;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_98 = param_2;
  }
  if (param_7 == 0) {
    param_7 = 0;
    lVar6 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar6 = param_2;
  }
  _objc_retain();
  _objc_retain();
  lVar3 = param_8;
  _objc_retain();
  lVar4 = param_9;
  _objc_retain();
  if (lVar3 == 0) {
    param_8 = 0;
    lVar3 = 0;
    lVar5 = param_2;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar5 = param_2;
    _objc_release(lVar3);
    lVar3 = param_2;
  }
  if (lVar4 == 0) {
    param_9 = 0;
    lVar5 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar4);
  }
  plVar1 = (long *)(param_1 + _DAT_11307beb0);
  *plVar1 = lStack_80;
  plVar1[1] = lStack_88;
  plVar1 = (long *)(param_1 + _DAT_11307beb8);
  *plVar1 = param_4;
  plVar1[1] = lStack_98;
  *(undefined8 *)(param_1 + _DAT_11307bec0) = param_5;
  *(undefined8 *)(param_1 + _DAT_11307bec8) = param_6;
  plVar1 = (long *)(param_1 + _DAT_11307bed0);
  *plVar1 = param_7;
  plVar1[1] = lVar6;
  plVar1 = (long *)(param_1 + _DAT_11307bed8);
  *plVar1 = param_8;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_1 + _DAT_11307bee0);
  *plVar1 = param_9;
  plVar1[1] = lVar5;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10446abb8; end: 10446ad2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446abb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _swift_getObjectType();
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307beb0);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307beb8);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  if (*(char *)(param_1 + 5) == '\x01') {
    func_0x000101223174(&uStack_50,&uStack_70);
    func_0x000101223174(&uStack_60,&uStack_70);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x000101223174(&uStack_50,&uStack_70);
    func_0x000101223174(&uStack_60,&uStack_70);
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11307bec0) = puVar2;
  if (*(char *)((long)param_1 + 0x29) == '\x02') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010bff91e0();
  }
  *(undefined **)(unaff_x20 + _DAT_11307bec8) = puVar2;
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bed0);
  puVar1[1] = uStack_68;
  *puVar1 = uStack_70;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bed8);
  puVar1[1] = uStack_78;
  *puVar1 = uStack_80;
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bee0);
  puVar1[1] = uStack_88;
  *puVar1 = uStack_90;
  func_0x000101223174(&uStack_70,auStack_a0);
  func_0x000101223174(&uStack_80,auStack_a0);
  func_0x000101223174(&uStack_90,auStack_a0);
  func_0x000104468c58(param_1);
  _objc_msgSendSuper2(&stack0xffffffffffffff50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10446ad30; end: 10446ad33; -[SCContextSnapLensMetrics copyWithZone:] */

void FUN_10446ad30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10446ad34; end: 10446ad7f; -[SCContextSnapLensMetrics description] */

void FUN_10446ad34(undefined8 param_1)

{
  undefined1 auStack_80 [96];
  
  _objc_retain();
  FUN_10446ae98(auStack_80);
  _objc_release(param_1);
  func_0x000104468c58(auStack_80);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446ad80; end: 10446adfb; -[SCContextSnapLensMetrics init] */

void FUN_10446ad80(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCContextV2MetricsModels/SCContextSnapLensMetricsWrapper.swift",0x3e,2,0x41,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10446adc8);
  (*pcVar1)();
}



/* Entry: 10446adfc; end: 10446ae97; -[SCContextSnapLensMetrics .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446adfc(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307beb0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307beb8 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307bec0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307bec8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307bed0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307bed8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307bee0 + 8))
  ;
  return;
}



/* Entry: 10446ae98; end: 10446afbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446ae98(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11307beb0);
  puVar2 = (undefined8 *)(param_2 + _DAT_11307beb8);
  uVar12 = puVar1[1];
  uVar11 = *puVar1;
  uVar8 = puVar1[1];
  uVar9 = puVar2[1];
  uVar7 = *puVar2;
  lVar10 = *(long *)(param_2 + _DAT_11307bec0);
  bVar4 = lVar10 == 0;
  if (bVar4) {
    _swift_bridgeObjectRetain(puVar2[1]);
    _swift_bridgeObjectRetain(uVar8);
    lVar10 = 0;
  }
  else {
    _swift_bridgeObjectRetain(puVar2[1]);
    _swift_bridgeObjectRetain(uVar8);
    func_0x00010c067fc0();
  }
  lVar6 = *(long *)(param_2 + _DAT_11307bec8);
  if (lVar6 == 0) {
    uVar5 = 2;
  }
  else {
    func_0x00010bf1f3c0();
    uVar5 = (undefined1)lVar6;
  }
  puVar1 = (undefined8 *)(param_2 + _DAT_11307bed0);
  puVar2 = (undefined8 *)(param_2 + _DAT_11307bed8);
  puVar3 = (undefined8 *)(param_2 + _DAT_11307bee0);
  param_1[1] = uVar12;
  *param_1 = uVar11;
  param_1[3] = uVar9;
  param_1[2] = uVar7;
  param_1[4] = lVar10;
  *(bool *)(param_1 + 5) = bVar4;
  *(undefined1 *)((long)param_1 + 0x29) = uVar5;
  uVar8 = puVar1[1];
  uVar9 = *puVar1;
  uVar7 = puVar2[1];
  uVar12 = puVar2[1];
  uVar11 = *puVar2;
  param_1[7] = puVar1[1];
  param_1[6] = uVar9;
  param_1[9] = uVar12;
  param_1[8] = uVar11;
  uVar9 = puVar3[1];
  uVar11 = *puVar3;
  param_1[0xb] = puVar3[1];
  param_1[10] = uVar11;
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar9);
  return;
}



/* Entry: 10446afbc; end: 10446afdb;  */

void FUN_10446afbc(void)

{
  _objc_opt_self(&PTR_PTR_1129ba0f8);
  return;
}



/* Entry: 10446afdc; end: 10446b0e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10446afdc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x00010bf5e540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11307bf50);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11307bf58);
  _swift_bridgeObjectRetain(((undefined8 *)(unaff_x20 + _DAT_11307bf50))[1]);
  _objc_retain(uVar2);
  _objc_release(unaff_x20);
  return uVar1;
}



/* Entry: 10446b0e4; end: 10446b133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446b0e4(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(*param_2 + _DAT_11307bf50);
  uVar2 = puVar1[1];
  uVar3 = *(undefined8 *)(*param_2 + _DAT_11307bf58);
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  _swift_bridgeObjectRetain();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar3);
  return;
}



/* Entry: 10446b134; end: 10446b143; -[_TtC19TalkContextServices19TalkContextServices talkContextFactoryObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446b134(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307bf20));
  return;
}



/* Entry: 10446b144; end: 10446b24b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10446b144(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307bf18) = param_1;
  uVar1 = param_1;
  _swift_retain();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_11307bf20) = uVar1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  _swift_release(param_1);
  return puVar2;
}



/* Entry: 10446b24c; end: 10446b2ab; -[_TtC19TalkContextServices19TalkContextServices init] */

void FUN_10446b24c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("TalkContextServices.TalkContextServices",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10446b278);
  (*pcVar1)();
}



/* Entry: 10446b2ac; end: 10446b2e3; -[_TtC19TalkContextServices19TalkContextServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446b2ac(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11307bf18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307bf20));
  return;
}



/* Entry: 10446b2e4; end: 10446b48f;  */

void FUN_10446b2e4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10446b490; end: 10446b4db; -[SCTalkConversation convoId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446b490(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307bf50);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307bf50))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10446b4dc; end: 10446b4f3; -[SCTalkConversation convoMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446b4dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307bf58));
  return;
}



/* Entry: 10446b4f4; end: 10446b64b; -[SCTalkConversation initWithConvoId:convoMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446b4f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11307bf50);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11307bf58) = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 10446b64c; end: 10446b64f; -[SCTalkConversation copyWithZone:] */

void FUN_10446b64c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10446b650; end: 10446b66b; -[SCTalkConversation description] */

void FUN_10446b650(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446b66c; end: 10446b6e7; -[SCTalkConversation init] */

void FUN_10446b66c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "TalkContextServices/TalkConversationWrapper.swift",0x31,2,0x27,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10446b6b4);
  (*pcVar1)();
}



/* Entry: 10446b6e8; end: 10446b723; -[SCTalkConversation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446b6e8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307bf50 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307bf58));
  return;
}



/* Entry: 10446b724; end: 10446b743;  */

void FUN_10446b724(void)

{
  _objc_opt_self(&PTR_PTR_1129ba2b8);
  return;
}



/* Entry: 10446b744; end: 10446b747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446b744(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bf50);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307bf58) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10446b748; end: 10446b757; -[_TtC18StartCallTrayScope18StartCallTrayScope presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446b748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307bf88));
  return;
}



/* Entry: 10446b758; end: 10446b7a3; -[_TtC18StartCallTrayScope18StartCallTrayScope convoId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446b758(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307bf90);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307bf90))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10446b7a4; end: 10446b7b3; -[_TtC18StartCallTrayScope18StartCallTrayScope convoMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446b7a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307bf98));
  return;
}



/* Entry: 10446b7b4; end: 10446b7c3; -[_TtC18StartCallTrayScope18StartCallTrayScope chatSourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10446b7b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307bfa0);
}



/* Entry: 10446b7c4; end: 10446b8df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10446b7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  lVar3 = _DAT_11307bfa8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11307bfa8,0);
  *(undefined8 *)(unaff_x20 + _DAT_11307bf88) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bf90);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11307bf98) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307bfa0) = param_5;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_6);
  puVar2 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _objc_retain(param_4);
  puVar4 = auStack_88;
  _objc_msgSendSuper2(puVar4,puVar2);
  _objc_release(param_1);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_6);
  return puVar4;
}



/* Entry: 10446b8e0; end: 10446b9df; -[_TtC18StartCallTrayScope18StartCallTrayScope initWithPresentingViewController:convoId:convoMetadata:chatSourceType:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446b8e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar3 = _DAT_11307bfa8;
  _swift_unknownObjectWeakInit(param_1 + _DAT_11307bfa8,0);
  *(undefined8 *)(param_1 + _DAT_11307bf88) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_11307bf90);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11307bf98) = param_5;
  *(undefined8 *)(param_1 + _DAT_11307bfa0) = param_6;
  _swift_beginAccess(param_1 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar3,param_7);
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = param_1;
  lStack_80 = lVar4;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_88,puVar2);
  return;
}



/* Entry: 10446b9e0; end: 10446ba5f; -[_TtC18StartCallTrayScope18StartCallTrayScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10446b9e0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307bf88));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307bf90 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307bf98));
  param_1 = param_1 + _DAT_11307bfa8;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10446ba60; end: 10446bac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446ba60(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033b658();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11307bfb8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10446bac8; end: 10446bb13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446bac8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307bfb8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10446bb14; end: 10446bc53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10446bb14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x000100337be0();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar3 = _DAT_11307bfa8;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11307bfa8,0);
  *(long *)(lVar5 + _DAT_11307bf88) = param_1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307bf90);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(lVar5 + _DAT_11307bf98) = param_4;
  *(undefined8 *)(lVar5 + _DAT_11307bfa0) = param_5;
  _swift_beginAccess(lVar5 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_6);
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  _objc_retain(param_1);
  _swift_bridgeObjectRetain(param_3);
  _objc_retain(param_4);
  plVar6 = &lStack_88;
  _objc_msgSendSuper2(plVar6,puVar2);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 10446bc54; end: 10446bd23; -[_TtC18StartCallTrayScope26StartCallTrayScopeServices buildWithPresentingViewController:convoId:convoMetadata:chatSourceType:delegate:] */

void FUN_10446bc54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10446bb14(param_3,param_4,param_2,param_5,param_6,param_7);
  _objc_release(param_3);
  _objc_release(param_5);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10446bd24; end: 10446bd27;  */

void FUN_10446bd24(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10446bd28; end: 10446bd5b;  */

void FUN_10446bd28(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10446bd5c; end: 10446bfab; -[_TtC18StartCallTrayScope26StartCallTrayScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446bd5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307bfb8));
  return;
}



/* Entry: 10446bfac; end: 10446c01b;  */

undefined8 * FUN_10446bfac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10446c01c; end: 10446c113;  */

int FUN_10446c01c(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 10446c114; end: 10446c16b;  */

uint FUN_10446c114(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = *(undefined1 *)(param_1 + 6);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = *(undefined1 *)(param_2 + 6);
  FUN_10446c16c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10446c16c; end: 10446c2cb;  */

byte FUN_10446c16c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  
  uVar1 = *param_1;
  if ((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar1 & 1) != 0)) {
    uVar1 = param_2[3];
    if (param_1[3] == 0) {
      if (uVar1 == 0) goto LAB_10446c1dc;
    }
    else if ((uVar1 != 0) &&
            ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == uVar1 ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar2 & 1) != 0)))) {
LAB_10446c1dc:
      if (((((byte)param_1[4] ^ (byte)param_2[4]) & 1) == 0) && (param_1[5] == param_2[5])) {
        bVar3 = (byte)param_1[6] ^ (byte)param_2[6] ^ 1;
        goto LAB_10446c214;
      }
    }
  }
  bVar3 = 0;
LAB_10446c214:
  return bVar3 & 1;
}



/* Entry: 10446c2cc; end: 10446c34f;  */

undefined8 * FUN_10446c2cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



/* Entry: 10446c350; end: 10446c3ab;  */

undefined8 * FUN_10446c350(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



/* Entry: 10446c3ac; end: 10446c453;  */

int FUN_10446c3ac(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10446c454; end: 10446c463; -[_TtC13SCTalkUIScope13SCTalkUIScope talkUIIntentObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446c454(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307c010));
  return;
}



/* Entry: 10446c464; end: 10446c473; -[_TtC13SCTalkUIScope13SCTalkUIScope chatEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446c464(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307c018));
  return;
}



/* Entry: 10446c474; end: 10446c483; -[_TtC13SCTalkUIScope13SCTalkUIScope typingActivityPairObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446c474(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307c020));
  return;
}



/* Entry: 10446c484; end: 10446c4a3; -[_TtC13SCTalkUIScope13SCTalkUIScope callButtonsContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446c484(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307c028));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446c4a4; end: 10446c4c3; -[_TtC13SCTalkUIScope13SCTalkUIScope presenceBarContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446c4a4(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307c030));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446c4c4; end: 10446c4d3; -[_TtC13SCTalkUIScope13SCTalkUIScope spotlightChatHeaderButtonEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10446c4c4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307c038);
}



/* Entry: 10446c4d4; end: 10446c51b; -[_TtC13SCTalkUIScope13SCTalkUIScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446c4d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11307c040;
  _swift_beginAccess(param_1 + _DAT_11307c040,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446c51c; end: 10446c573; -[_TtC13SCTalkUIScope13SCTalkUIScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446c51c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307c040;
  _swift_beginAccess(param_1 + _DAT_11307c040,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10446c574; end: 10446c59f; -[_TtC13SCTalkUIScope13SCTalkUIScope init] */

void FUN_10446c574(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("SCTalkUIScope.SCTalkUIScope",0x1b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10446c5a0);
  (*pcVar1)();
}



/* Entry: 10446c5a0; end: 10446c687; -[_TtC13SCTalkUIScope13SCTalkUIScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10446c5a0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307c010));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307c018));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307c020));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307c028));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307c030));
  param_1 = param_1 + _DAT_11307c040;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10446c688; end: 10446c6f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446c688(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10446ca54();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11307c050) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10446c6f4; end: 10446c6fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446c6f4(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10446ca54();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307c050) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10446c6fc; end: 10446c747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446c6fc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307c050) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10446c748; end: 10446c8b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10446c748(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined1 param_6,undefined8 param_7)

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
  FUN_10446c9b0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11307c040;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11307c040,0);
  *(long *)(lVar4 + _DAT_11307c010) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11307c018) = param_2;
  *(undefined8 *)(lVar4 + _DAT_11307c020) = param_3;
  *(undefined8 *)(lVar4 + _DAT_11307c028) = param_4;
  *(undefined8 *)(lVar4 + _DAT_11307c030) = param_5;
  *(undefined1 *)(lVar4 + _DAT_11307c038) = param_6;
  _swift_beginAccess(lVar4 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_7);
  puVar1 = PTR_s_init_1125d9248;
  lStack_88 = lVar4;
  lStack_80 = lVar3;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  plVar5 = &lStack_88;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_a0[0] = plVar5;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar5;
}



/* Entry: 10446c8b8; end: 10446c9af; -[_TtC13SCTalkUIScope21SCTalkUIScopeServices buildWithIntentObservable:chatEventObservable:typingObservable:callButtonsContainer:presenceBarContainer:spotlightChatHeaderButtonEnabled:delegate:] */

void FUN_10446c8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  _swift_unknownObjectRetain(param_9);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10446c748(param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  _swift_unknownObjectRelease(param_9);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10446c9b0; end: 10446c9cf;  */

void FUN_10446c9b0(void)

{
  _objc_opt_self(&PTR_PTR_1129ba528);
  return;
}



/* Entry: 10446c9d0; end: 10446c9fb; -[_TtC13SCTalkUIScope21SCTalkUIScopeServices init] */

void FUN_10446c9d0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCTalkUIScope.SCTalkUIScopeServices",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10446c9fc);
  (*pcVar1)();
}



/* Entry: 10446c9fc; end: 10446c9ff;  */

void FUN_10446c9fc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10446ca00; end: 10446ca33;  */

void FUN_10446ca00(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10446ca34; end: 10446ca53; -[_TtC13SCTalkUIScope21SCTalkUIScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446ca34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307c050));
  return;
}



/* Entry: 10446ca54; end: 10446ca73;  */

void FUN_10446ca54(void)

{
  _objc_opt_self(&PTR_PTR_1129ba618);
  return;
}



/* Entry: 10446ca74; end: 10446ca8b;  */

void FUN_10446ca74(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10446ca8c; end: 10446cb63;  */

void FUN_10446ca8c(void)

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



/* Entry: 10446cb64; end: 10446cb83;  */

void FUN_10446cb64(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10446cb84; end: 10446cbc3;  */

void FUN_10446cb84(void)

{
  undefined *puVar1;
  
  if (puRam000000011307c0a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd03c20;
  _swift_getWitnessTable(&UNK_10dd03c20,&UNK_110773d38);
  puRam000000011307c0a8 = puVar1;
  return;
}



/* Entry: 10446cbc4; end: 10446cbeb;  */

undefined1  [16] FUN_10446cbc4(void)

{
  return ZEXT816(0x110773d38);
}



/* Entry: 10446cbec; end: 10446cc2b;  */

void FUN_10446cbec(void)

{
  undefined *puVar1;
  
  if (puRam000000011307c0b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd03ce0;
  _swift_getWitnessTable(&UNK_10dd03ce0,&UNK_110773db0);
  puRam000000011307c0b0 = puVar1;
  return;
}



/* Entry: 10446cc2c; end: 10446ccd7;  */

void FUN_10446cc2c(void)

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



/* Entry: 10446ccd8; end: 10446cd0f;  */

void FUN_10446ccd8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 10446cd10; end: 10446cde3;  */

void FUN_10446cd10(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10446cde4; end: 10446ce03;  */

void FUN_10446cde4(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 10446ce04; end: 10446ce4f; -[SCTalkUIChatEvent description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446ce04(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_11307c0b8) == '\x06') &&
     (*(char *)(param_1 + _DAT_11307c0c0 + 8) == '\x01')) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10446ce50);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446ce50; end: 10446ce97; -[SCTalkUIChatEvent init] */

void FUN_10446ce50(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCTalkUIScope/SCTalkUIChatEventWrapper.swift"
             ,0x2c,2,0x4e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10446ce98);
  (*pcVar1)();
}



/* Entry: 10446ce98; end: 10446cf47; -[SCTalkUIChatEvent hash] */

void FUN_10446ce98(void)

{
  func_0x00010446ceb8();
  return;
}



/* Entry: 10446cf48; end: 10446d077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10446cf48(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  double dVar6;
  double dVar7;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar5 = &lStack_68;
    _swift_dynamicCast(plVar5,auStack_60,PTR___sypN_11034f1a8 + 8,lVar4,6);
    if (((ulong)plVar5 & 1) != 0) {
      bVar3 = *(byte *)(unaff_x20 + _DAT_11307c0b8);
      if (bVar3 == *(byte *)(lStack_68 + _DAT_11307c0b8)) {
        if (((3 < bVar3) && (5 < bVar3)) && (bVar3 == 6)) {
          dVar6 = *(double *)(unaff_x20 + _DAT_11307c0c0);
          cVar1 = *(char *)((double *)(unaff_x20 + _DAT_11307c0c0) + 1);
          dVar7 = *(double *)(lStack_68 + _DAT_11307c0c0);
          cVar2 = *(char *)((double *)(lStack_68 + _DAT_11307c0c0) + 1);
          _objc_release();
          if (cVar1 == '\x01') {
            return cVar2 == '\x01';
          }
          return dVar6 == dVar7 && cVar2 != '\x01';
        }
        _objc_release();
        return true;
      }
      _objc_release();
    }
  }
  return false;
}



/* Entry: 10446d078; end: 10446d0f7; -[SCTalkUIChatEvent isEqual:] */

uint FUN_10446d078(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10446cf48(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10446d0f8; end: 10446d103; -[SCTalkUIChatEvent copyWithZone:] */

void FUN_10446d0f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10446d104; end: 10446d113; +[SCTalkUIChatEvent didSwipeOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446d104(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11307c0b8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307c0c0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446d114; end: 10446d123; +[SCTalkUIChatEvent didSwipeIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446d114(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11307c0b8) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307c0c0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446d124; end: 10446d133; +[SCTalkUIChatEvent willResignActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446d124(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11307c0b8) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307c0c0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446d134; end: 10446d143; +[SCTalkUIChatEvent didFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446d134(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11307c0b8) = 3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307c0c0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446d144; end: 10446d153; +[SCTalkUIChatEvent didFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446d144(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11307c0b8) = 4;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307c0c0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446d154; end: 10446d15b; +[SCTalkUIChatEvent didBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446d154(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11307c0b8) = 5;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307c0c0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446d15c; end: 10446d1bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446d15c(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11307c0b8) = 6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307c0c0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10446d1c0; end: 10446d22f; +[SCTalkUIChatEvent didAppearAtPercentageWithPercentage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446d1c0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11307c0b8) = 6;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307c0c0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446d230; end: 10446d237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446d230(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11307c0b8) = 7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307c0c0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10446d238; end: 10446d247; +[SCTalkUIChatEvent chatMediaWillEnterFullscreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446d238(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11307c0b8) = 7;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307c0c0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446d248; end: 10446d2ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446d248(undefined1 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11307c0b8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307c0c0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}


