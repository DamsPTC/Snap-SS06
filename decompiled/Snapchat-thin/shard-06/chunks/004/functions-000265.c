/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048532a0; end: 1048532d3;  */

void FUN_1048532a0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048532d4; end: 1048532e3;  */

undefined1  [16] FUN_1048532d4(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0x16) {
    uVar1 = param_1;
  }
  auVar2[8] = 0x15 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1048532e4; end: 10485356b;  */

undefined1  [16] FUN_1048532e4(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_18;
  
  uVar3 = 0xe400000000000000;
  uVar2 = 0x656e6f6e;
  switch(param_1) {
  case 1:
    uVar3 = 0xe900000000000072;
    uVar2 = 0x657355676e6f7277;
  case 0:
    auVar5._8_8_ = uVar3;
    auVar5._0_8_ = uVar2;
    return auVar5;
  case 2:
    auVar8._8_8_ = 0x800000010f212000;
    auVar8._0_8_ = 0xd000000000000016;
    return auVar8;
  case 3:
    pcVar4 = "notifPayloadError";
    goto code_r0x000104853500;
  case 4:
    pcVar4 = "liveLocationNotif";
    goto code_r0x000104853500;
  case 5:
    auVar11._8_8_ = 0xee00646e75666552;
    auVar11._0_8_ = 0x706f685374666967;
    return auVar11;
  case 6:
    auVar14._8_8_ = 0xed0000797265766f;
    auVar14._0_8_ = 0x6365526873617263;
    return auVar14;
  case 7:
    pcVar4 = "invalidLoggedOut";
    break;
  case 8:
    pcVar4 = "sdnInvalidPayload";
code_r0x000104853500:
    auVar17._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar17._0_8_ = 0xd000000000000011;
    return auVar17;
  case 9:
    pcVar4 = "serverSuppressed";
    break;
  case 10:
    auVar16._8_8_ = 0x800000010f211f40;
    auVar16._0_8_ = 0xd000000000000014;
    return auVar16;
  case 0xb:
    auVar7._8_8_ = 0xe700000000000000;
    auVar7._0_8_ = 0x64657269707865;
    return auVar7;
  case 0xc:
    pcVar4 = "filteredByProcessor";
    goto code_r0x000104853418;
  case 0xd:
    auVar13._8_8_ = 0x800000010f211f00;
    auVar13._0_8_ = 0xd00000000000001f;
    return auVar13;
  case 0xe:
    auVar6._8_8_ = 0x800000010f211ed0;
    auVar6._0_8_ = 0xd000000000000021;
    return auVar6;
  case 0xf:
    pcVar4 = "nothingToDisplay";
    break;
  case 0x10:
    pcVar4 = "suppressNewNotif";
    break;
  case 0x11:
    pcVar4 = "filteredByPresenter";
    goto code_r0x000104853418;
  case 0x12:
    auVar15._8_8_ = 0xec00000064726163;
    auVar15._0_8_ = 0x7369447070416e69;
    return auVar15;
  case 0x13:
    auVar18._8_8_ = 0x800000010f211e50;
    auVar18._0_8_ = 0xd000000000000015;
    return auVar18;
  case 0x14:
    pcVar4 = "storageInaccessible";
code_r0x000104853418:
    auVar10._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar10._0_8_ = 0xd000000000000013;
    return auVar10;
  case 0x15:
    auVar12._8_8_ = 0x800000010f211e10;
    auVar12._0_8_ = 0xd000000000000012;
    return auVar12;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_1107a3380,&uStack_18,&UNK_1107a3380,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10485356c);
    (*pcVar1)();
  }
  auVar9._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar9._0_8_ = 0xd000000000000010;
  return auVar9;
}



/* Entry: 10485356c; end: 10485356f;  */

void FUN_10485356c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113092268 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd37f38;
  _swift_getWitnessTable(&UNK_10dd37f38,&UNK_1107a3380);
  puRam0000000113092268 = puVar1;
  return;
}



/* Entry: 104853570; end: 1048535af;  */

void FUN_104853570(void)

{
  undefined *puVar1;
  
  if (puRam0000000113092268 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd37f38;
  _swift_getWitnessTable(&UNK_10dd37f38,&UNK_1107a3380);
  puRam0000000113092268 = puVar1;
  return;
}



/* Entry: 1048535b0; end: 1048535bf;  */

undefined1  [16] FUN_1048535b0(void)

{
  return ZEXT816(0x1107a3380);
}



/* Entry: 1048535c0; end: 1048535df;  */

void FUN_1048535c0(void)

{
  _objc_opt_self(&PTR_PTR_1129dcee8);
  return;
}



/* Entry: 1048535e0; end: 10485362b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048535e0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113092298) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10485362c; end: 104853683; -[SCAppStartExperimentReaderServices initWithAppStartExperimentReader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485362c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113092298) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 104853684; end: 1048536e3; -[SCAppStartExperimentReaderServices init] */

void FUN_104853684(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCAppStartExperimentReaderServices.SCAppStartExperimentReaderServices",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048536b0);
  (*pcVar1)();
}



/* Entry: 1048536e4; end: 1048536f3; -[SCAppStartExperimentReaderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048536e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113092298));
  return;
}



/* Entry: 1048536f4; end: 104853703; -[_TtC26SCConfigRepositoryServices26SCConfigRepositoryServices configRepository] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048536f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130922c8));
  return;
}



/* Entry: 104853704; end: 10485374f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104853704(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130922c8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104853750; end: 1048537a7; -[_TtC26SCConfigRepositoryServices26SCConfigRepositoryServices initWithConfigRepository:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104853750(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130922c8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1048537a8; end: 104853807; -[_TtC26SCConfigRepositoryServices26SCConfigRepositoryServices init] */

void FUN_1048537a8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCConfigRepositoryServices.SCConfigRepositoryServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048537d4);
  (*pcVar1)();
}



/* Entry: 104853808; end: 104853817; -[_TtC26SCConfigRepositoryServices26SCConfigRepositoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104853808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130922c8));
  return;
}



/* Entry: 104853818; end: 104853837;  */

void FUN_104853818(void)

{
  _objc_opt_self(&PTR_PTR_1129dd058);
  return;
}



/* Entry: 104853838; end: 104853843; -[SCCircumstanceEngineConfig configId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104853838(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130922f8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130922f8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104853844; end: 10485384f; -[SCCircumstanceEngineConfig ruleId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104853844(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113092300))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113092300);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104853850; end: 1048538a7;  */

void FUN_104853850(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1048538a8; end: 10485391b; -[SCCircumstanceEngineConfig configResult] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048538a8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_113092308))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_113092308);
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



/* Entry: 10485391c; end: 10485392b; -[SCCircumstanceEngineConfig lastUpdateTimestampInSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10485391c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113092310);
}



/* Entry: 10485392c; end: 10485393b; -[SCCircumstanceEngineConfig ttlInSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10485392c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113092318);
}



/* Entry: 10485393c; end: 10485394b; -[SCCircumstanceEngineConfig configNamespace] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10485393c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113092320);
}



/* Entry: 10485394c; end: 104853a1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485394c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130922f8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113092300);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113092308);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113092310) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113092318) = param_2;
  *(undefined4 *)(unaff_x20 + _DAT_113092320) = param_9;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104853a20; end: 104853b5b; -[SCCircumstanceEngineConfig initWithConfigId:ruleId:configResult:lastUpdateTimestampInSeconds:ttlInSeconds:configNamespace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104853a20(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,undefined4 param_8)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_80;
  long lStack_78;
  
  lVar4 = param_3;
  _swift_getObjectType();
  if (param_5 == 0) {
    lVar3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar3 = param_4;
  }
  if (param_6 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_4;
  }
  if (param_7 == 0) {
    param_4 = -0x1000000000000000;
  }
  else {
    lVar5 = param_7;
    _objc_retain(param_7);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar5);
  }
  plVar1 = (long *)(param_3 + _DAT_1130922f8);
  *plVar1 = param_5;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_3 + _DAT_113092300);
  *plVar1 = param_6;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_3 + _DAT_113092308);
  *plVar1 = param_7;
  plVar1[1] = param_4;
  *(undefined8 *)(param_3 + _DAT_113092310) = param_1;
  *(undefined8 *)(param_3 + _DAT_113092318) = param_2;
  *(undefined4 *)(param_3 + _DAT_113092320) = param_8;
  lStack_80 = param_3;
  lStack_78 = lVar4;
  _objc_msgSendSuper2(&lStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104853b5c; end: 104853b8f; -[SCCircumstanceEngineConfig hash] */

undefined8 FUN_104853b5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104853b90();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104853b90; end: 104853cff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104853b90(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  double dVar3;
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  if (((undefined8 *)(unaff_x20 + _DAT_1130922f8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130922f8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113092300))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113092300);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_113092308))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113092308);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  else {
    uVar2 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar2);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113092310) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_113092310);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113092318) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_113092318);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_113092320));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104853d00; end: 104853fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104853d00(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  long lStack_a8;
  undefined1 auStack_a0 [24];
  long lStack_88;
  
  lVar11 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_a0);
  if (lStack_88 == 0) {
    func_0x00010006e7f4(auStack_a0);
    return 0;
  }
  plVar8 = &lStack_a8;
  _swift_dynamicCast(plVar8,auStack_a0,PTR___sypN_11034f1a8 + 8,lVar11,6);
  if (((ulong)plVar8 & 1) == 0) {
    return 0;
  }
  lVar11 = ((long *)(unaff_x20 + _DAT_1130922f8))[1];
  lVar12 = ((long *)(lStack_a8 + _DAT_1130922f8))[1];
  uVar13 = (uint)(lVar11 == 0 && lVar12 == 0);
  if (lVar11 != 0 && lVar12 != 0) {
    lVar9 = *(long *)(unaff_x20 + _DAT_1130922f8);
    if (lVar9 == *(long *)(lStack_a8 + _DAT_1130922f8) && lVar11 == lVar12) {
      uVar13 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar13 = (uint)lVar9;
    }
  }
  lVar11 = ((long *)(unaff_x20 + _DAT_113092300))[1];
  lVar12 = ((long *)(lStack_a8 + _DAT_113092300))[1];
  uVar14 = (uint)(lVar11 == 0 && lVar12 == 0);
  if (lVar11 != 0 && lVar12 != 0) {
    lVar9 = *(long *)(unaff_x20 + _DAT_113092300);
    if (lVar9 == *(long *)(lStack_a8 + _DAT_113092300) && lVar11 == lVar12) {
      uVar14 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar14 = (uint)lVar9;
    }
  }
  uVar2 = *(undefined8 *)(lStack_a8 + _DAT_113092308);
  uVar4 = ((undefined8 *)(lStack_a8 + _DAT_113092308))[1];
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113092308);
  uVar5 = ((undefined8 *)(unaff_x20 + _DAT_113092308))[1];
  if (uVar5 >> 0x3c < 0xf) {
    if (uVar4 >> 0x3c < 0xf) {
      func_0x000100de78a0(uVar2,uVar4);
      func_0x000100de78a0(uVar2,uVar4);
      func_0x000100de78a0(uVar3,uVar5);
      uVar10 = uVar3;
      func_0x000100e25fcc(uVar3,uVar5,uVar2,uVar4);
      uVar15 = (uint)uVar10;
      func_0x0001000b44c0(uVar2,uVar4);
      func_0x0001000b44c0(uVar2,uVar4);
      func_0x0001000b44c0(uVar3,uVar5);
      goto LAB_104853f34;
    }
  }
  else if (0xe < uVar4 >> 0x3c) {
    func_0x000100de78a0(uVar2,uVar4);
    func_0x000100de78a0(uVar3,uVar5);
    func_0x0001000b44c0(uVar3,uVar5);
    uVar15 = 1;
    goto LAB_104853f34;
  }
  func_0x000100de78a0(uVar2,uVar4);
  func_0x000100de78a0(uVar3,uVar5);
  func_0x0001000b44c0(uVar3,uVar5);
  func_0x0001000b44c0(uVar2,uVar4);
  uVar15 = 0;
LAB_104853f34:
  dVar16 = *(double *)(unaff_x20 + _DAT_113092310);
  dVar17 = *(double *)(lStack_a8 + _DAT_113092310);
  dVar18 = *(double *)(unaff_x20 + _DAT_113092318);
  dVar19 = *(double *)(lStack_a8 + _DAT_113092318);
  iVar6 = *(int *)(unaff_x20 + _DAT_113092320);
  iVar7 = *(int *)(lStack_a8 + _DAT_113092320);
  _objc_release(lStack_a8);
  uVar1 = 0;
  if (dVar18 == dVar19) {
    uVar1 = uVar13 & uVar14 & uVar15 & (uint)(dVar16 == dVar17);
  }
  if (iVar6 == iVar7) {
    return uVar1;
  }
  return 0;
}



/* Entry: 104853fb8; end: 104854037; -[SCCircumstanceEngineConfig isEqual:] */

uint FUN_104853fb8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104853d00(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104854038; end: 10485403b; -[SCCircumstanceEngineConfig copyWithZone:] */

void FUN_104854038(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10485403c; end: 1048540b7; -[SCCircumstanceEngineConfig init] */

void FUN_10485403c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCConfigRepositoryServices/SCCircumstanceEngineConfig.swift",0x3b,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104854084);
  (*pcVar1)();
}



/* Entry: 1048540b8; end: 10485410b; -[SCCircumstanceEngineConfig .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048540b8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130922f8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113092300 + 8));
  uVar2 = *(ulong *)(param_1 + _DAT_113092308);
  uVar1 = ((ulong *)(param_1 + _DAT_113092308))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 10485410c; end: 10485412b;  */

void FUN_10485410c(void)

{
  _objc_opt_self(&PTR_PTR_1129dd118);
  return;
}



/* Entry: 10485412c; end: 104854137; -[SCCircumstanceEngineEtag etagId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485412c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113092350))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113092350);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104854138; end: 1048541cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104854138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113092350);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113092358);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113092360) = param_1;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048541cc; end: 1048541ff; -[SCCircumstanceEngineEtag hash] */

undefined8 FUN_1048541cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104854200();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104854200; end: 1048542e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104854200(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_113092350))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113092350);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113092358))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113092358);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113092360) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_113092360);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048542e8; end: 10485444f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1048542e8(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
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
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar4,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar3 = ((ulong *)(unaff_x20 + _DAT_113092350))[1];
      uVar5 = ((ulong *)(lStack_68 + _DAT_113092350))[1];
      uVar7 = (ulong)(uVar3 == 0 && uVar5 == 0);
      if (uVar3 != 0 && uVar5 != 0) {
        uVar7 = *(ulong *)(unaff_x20 + _DAT_113092350);
        if (uVar7 == *(ulong *)(lStack_68 + _DAT_113092350) && uVar3 == uVar5) {
          uVar7 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
        }
      }
      lVar4 = ((long *)(unaff_x20 + _DAT_113092358))[1];
      lVar6 = ((long *)(lStack_68 + _DAT_113092358))[1];
      uVar8 = (uint)(lVar4 == 0 && lVar6 == 0);
      if (lVar4 != 0 && lVar6 != 0) {
        lVar2 = *(long *)(unaff_x20 + _DAT_113092358);
        if (lVar2 == *(long *)(lStack_68 + _DAT_113092358) && lVar4 == lVar6) {
          uVar8 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar8 = (uint)lVar2;
        }
      }
      dVar9 = *(double *)(unaff_x20 + _DAT_113092360);
      dVar10 = *(double *)(lStack_68 + _DAT_113092360);
      _objc_release(lStack_68);
      if ((uVar7 & 1) != 0) {
        return uVar8 & dVar9 == dVar10;
      }
    }
  }
  return 0;
}



/* Entry: 104854450; end: 1048544cf; -[SCCircumstanceEngineEtag isEqual:] */

uint FUN_104854450(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1048542e8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1048544d0; end: 1048544d3; -[SCCircumstanceEngineEtag copyWithZone:] */

void FUN_1048544d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048544d4; end: 10485456f; -[SCCircumstanceEngineEtag init] */

void FUN_1048544d4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCConfigRepositoryServices/SCCircumstanceEngineEtag.swift",0x39,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10485451c);
  (*pcVar1)();
}



/* Entry: 104854570; end: 10485457f; -[_TtC18SCExperimentLogger26SCExperimentLoggerServices experimentLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104854570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113092390));
  return;
}



/* Entry: 104854580; end: 1048545cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104854580(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113092390) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048545cc; end: 104854607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048545cc(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_113092390) = param_1;
  func_0x00010009800c();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104854608; end: 10485465f; -[_TtC18SCExperimentLogger26SCExperimentLoggerServices initWithExperimentLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104854608(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_113092390) = param_3;
  lVar2 = param_1;
  func_0x00010009800c();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 104854660; end: 1048546bb; -[_TtC18SCExperimentLogger26SCExperimentLoggerServices init] */

void FUN_104854660(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCExperimentLogger.SCExperimentLoggerServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10485468c);
  (*pcVar1)();
}



/* Entry: 1048546bc; end: 1048546cb; -[_TtC18SCExperimentLogger26SCExperimentLoggerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048546bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113092390));
  return;
}



/* Entry: 1048546cc; end: 1048546d7; -[_TtC21ScopeGraphSaberBridge21ImmediateScopeRemoval whenComplete:] */

void FUN_1048546cc(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001048546d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1048546d8; end: 104854713; -[_TtC21ScopeGraphSaberBridge21ImmediateScopeRemoval init] */

void FUN_1048546d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000104854744();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104854714; end: 104854763;  */

void FUN_104854714(void)

{
  func_0x000104854744();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104854764; end: 104854793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104854764(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130923f0);
  *(undefined8 *)(unaff_x20 + _DAT_1130923f0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 104854794; end: 1048548a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104854794(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  
  func_0x00010006c804();
  lVar1 = _DAT_1130923f0;
  lVar2 = *(long *)(unaff_x20 + _DAT_113092400);
  if ((lVar2 != 0) && (lVar5 = *(long *)(unaff_x20 + _DAT_1130923f0), lVar5 != 0)) {
    _objc_retain();
    lVar3 = lVar5;
    _swift_unknownObjectRetain();
    _swift_dynamicCastUnknownClass();
    if (lVar3 != 0) {
      *(undefined8 *)(unaff_x20 + lVar1) = 0;
      _swift_unknownObjectRelease(lVar5);
      func_0x000100070bfc();
      func_0x00010c12e1e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _swift_unknownObjectRelease(lVar5);
      return;
    }
    _objc_release(lVar2);
    _swift_unknownObjectRelease(lVar5);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_1130923f0);
  *(undefined8 *)(unaff_x20 + _DAT_1130923f0) = 0;
  _swift_unknownObjectRelease(uVar4);
  func_0x000100070bfc();
  func_0x000104854744(0);
  _objc_allocWithZone();
  func_0x00010bfee200();
  return;
}



/* Entry: 1048548a4; end: 1048548d7;  */

void FUN_1048548a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104854794();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1048548d8; end: 1048548f3;  */

void FUN_1048548d8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ScopeGraphSaberBridge.OptionalBridgeScopeExposer",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048549c4);
  (*pcVar1)();
}



/* Entry: 1048548f4; end: 10485493f;  */

void FUN_1048548f4(void)

{
  ulong *unaff_x20;
  
  func_0x00010017d9c8(0,*(undefined8 *)
                         ((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x50));
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104854940; end: 104854997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104854940(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130923f0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130923f8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130923e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113092400));
  return;
}



/* Entry: 104854998; end: 1048549c3;  */

void FUN_104854998(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ScopeGraphSaberBridge.OptionalBridgeScopeExposer",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048549c4);
  (*pcVar1)();
}



/* Entry: 1048549c4; end: 1048549f7;  */

uint FUN_1048549c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1048549f8();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1048549f8; end: 104854a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1048549f8(void)

{
  undefined1 auStack_50 [16];
  undefined1 uStack_31;
  
  func_0x000100087bd4(&uStack_31,FUN_104854a58,auStack_50,PTR___sSbN_11034dd40);
  return uStack_31;
}



/* Entry: 104854a58; end: 104854a9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104854a58(undefined1 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130924a0);
  if (lVar2 == 0) {
    uVar1 = 1;
  }
  else {
    func_0x00010c071800();
    uVar1 = (undefined1)lVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 104854aa0; end: 104854ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104854aa0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130924a0);
  *(undefined8 *)(unaff_x20 + _DAT_1130924a0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104854ab8; end: 104854ae7;  */

void FUN_104854ab8(undefined8 param_1)

{
  _objc_allocWithZone();
  func_0x0001003b3b80(param_1);
  return;
}



/* Entry: 104854ae8; end: 104854bbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104854ae8(undefined8 param_1)

{
  undefined8 uVar1;
  ulong *unaff_x20;
  undefined1 auStack_60 [16];
  long lStack_38;
  
  _swift_dynamicCastUnknownClassUnconditional
            (param_1,*(undefined8 *)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x50),0
             ,0,0);
  uVar1 = 0x113092408;
  func_0x0001000285a8(0x113092408,&UNK_10dd38190);
  func_0x000100087bd4(&lStack_38,FUN_104854c90,auStack_60,uVar1);
  if (lStack_38 == 0) {
    func_0x000104854744(0);
    _objc_allocWithZone();
    func_0x00010bfee200();
  }
  else {
    func_0x00010c12e1e0(lStack_38);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_38);
  }
  return;
}



/* Entry: 104854bc0; end: 104854c8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104854bc0(undefined8 *param_1,ulong *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  uVar4 = *param_2;
  uVar3 = *(ulong *)PTR__swift_isaMask_11034f488;
  uStack_48 = param_3;
  _swift_beginAccess((long)param_2 + _DAT_1130924a8,auStack_60,0x21,0);
  uVar5 = *(undefined8 *)((uVar3 & uVar4) + 0x50);
  puVar1 = PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8;
  _swift_getWitnessTable(PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8,uVar5);
  uVar2 = 0;
  __sShMa(0,uVar5,puVar1);
  __sSh6removeyxSgxF(&uStack_38,&uStack_48,uVar2);
  _swift_endAccess(auStack_60);
  _objc_release(uStack_38);
  *param_1 = *(undefined8 *)((long)param_2 + _DAT_1130924a0);
  _objc_retain();
  return;
}



/* Entry: 104854c90; end: 104854ca7;  */

void FUN_104854c90(void)

{
  long unaff_x20;
  
  FUN_104854bc0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 104854ca8; end: 104854d8b;  */

void FUN_104854ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104854ae8(param_3);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104854d8c; end: 104854e4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104854d8c(byte *param_1,ulong *param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_1130924a8;
  bVar2 = 0;
  uVar4 = *param_2;
  uVar5 = *(ulong *)PTR__swift_isaMask_11034f488;
  _swift_beginAccess((long)param_2 + _DAT_1130924a8,auStack_58,0,0);
  uVar7 = *(undefined8 *)((long)param_2 + lVar1);
  uVar6 = *(undefined8 *)((uVar5 & uVar4) + 0x50);
  uStack_60 = param_3;
  _swift_bridgeObjectRetain(uVar7);
  puVar3 = PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8;
  _swift_getWitnessTable(PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8,uVar6);
  __sSh8containsySbxF(&uStack_60,uVar7,uVar6,puVar3);
  _swift_bridgeObjectRelease(uVar7);
  *param_1 = bVar2 & 1;
  return;
}



/* Entry: 104854e4c; end: 104854e63;  */

void FUN_104854e4c(void)

{
  long unaff_x20;
  
  FUN_104854d8c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 104854e64; end: 104854ebf;  */

uint FUN_104854e64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  uVar1 = param_3;
  func_0x000104854d04(param_3);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 104854ec0; end: 104854edb;  */

void FUN_104854ec0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ScopeGraphSaberBridge.OptionalMultiBridgeScopeExposer",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104854fbc);
  (*pcVar1)();
}



/* Entry: 104854edc; end: 104854f27;  */

void FUN_104854edc(void)

{
  ulong *unaff_x20;
  
  func_0x0001003b3b08(0,*(undefined8 *)
                         ((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x50));
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104854f28; end: 104854f8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104854f28(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113092490));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130924b0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113092498));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130924a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130924a8));
  return;
}



/* Entry: 104854f90; end: 104854fbb;  */

void FUN_104854f90(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ScopeGraphSaberBridge.OptionalMultiBridgeScopeExposer",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104854fbc);
  (*pcVar1)();
}



/* Entry: 104854fbc; end: 104854fef;  */

void FUN_104854fbc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104854ff0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104854ff0; end: 10485506b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104854ff0(void)

{
  undefined8 uVar1;
  ulong *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_38;
  
  uVar1 = 0;
  __sSqMa(0,*(undefined8 *)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x50));
  func_0x000100087bd4(&uStack_38,FUN_10485506c,auStack_50,uVar1);
  return uStack_38;
}



/* Entry: 10485506c; end: 1048550b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485506c(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113092548);
  if (lVar1 != 0) {
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 1048550b4; end: 10485510b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048550b4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113092548);
  *(undefined8 *)(unaff_x20 + _DAT_113092548) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10485510c; end: 10485513b;  */

void FUN_10485510c(undefined8 param_1)

{
  _objc_allocWithZone();
  func_0x00010025a71c(param_1);
  return;
}



/* Entry: 10485513c; end: 1048551e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485513c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  func_0x00010006c804();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113092550);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x0001003c945c(uVar2,uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113092558);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x0001003c945c(uVar2,uVar3);
  lVar4 = *(long *)(unaff_x20 + _DAT_113092548);
  if (lVar4 != 0) {
    _objc_retain();
    lVar5 = lVar4;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      _objc_release();
      func_0x00010c12e1c0(lVar4);
    }
    _objc_release(lVar4);
  }
  func_0x000100070bfc();
  return;
}



/* Entry: 1048551e8; end: 10485520f;  */

void FUN_1048551e8(undefined8 param_1)

{
  _objc_retain();
  FUN_10485513c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104855210; end: 10485526b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104855210(void)

{
  long unaff_x20;
  undefined1 auStack_50 [16];
  
  func_0x000100087bd4(*(undefined8 *)(unaff_x20 + _DAT_113092538),&UNK_100a47c54,auStack_50,
                      PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 10485526c; end: 104855287;  */

void FUN_10485526c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ScopeGraphSaberBridge.PlugInBridgeScopeExposer",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104855370);
  (*pcVar1)();
}



/* Entry: 104855288; end: 1048552d3;  */

void FUN_104855288(void)

{
  ulong *unaff_x20;
  
  func_0x00010025a6b0(0,*(undefined8 *)
                         ((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x50));
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048552d4; end: 104855343;  */

/* WARNING: Possible PIC construction at 0x000104855324: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104855328) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048552d4(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113092540));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113092538));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113092548));
  if (*(long *)(param_1 + _DAT_113092550) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_113092550))[1]);
    return;
  }
  return;
}



/* Entry: 104855344; end: 1048553b7;  */

void FUN_104855344(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ScopeGraphSaberBridge.PlugInBridgeScopeExposer",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104855370);
  (*pcVar1)();
}



/* Entry: 1048553b8; end: 10485545b;  */

void FUN_1048553b8(code *param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 == 0) {
    (*param_1)();
  }
  else {
    lVar3 = *(long *)(unaff_x20 + 0x18);
    lVar1 = lVar2;
    _swift_getObjectType(lVar2);
    pcVar4 = *(code **)(lVar3 + 8);
    _swift_unknownObjectRetain(lVar2);
    (*pcVar4)(param_1,param_2,lVar1,lVar3);
    _swift_unknownObjectRelease(lVar2);
  }
  return;
}



/* Entry: 10485545c; end: 1048554af;  */

undefined8 FUN_10485545c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  _os_unfair_lock_lock(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  _os_unfair_lock_unlock(uVar2);
  return uVar1;
}



/* Entry: 1048554b0; end: 10485551f;  */

void FUN_1048554b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  _os_unfair_lock_lock(uVar3);
  if (*(char *)(lVar2 + 0x29) == '\x01') {
    *(undefined8 *)(lVar2 + 0x18) = param_1;
    *(undefined8 *)(lVar2 + 0x20) = param_2;
    *(char *)(lVar2 + 0x28) = (char)param_3;
    *(char *)(lVar2 + 0x29) = (char)((ulong)param_3 >> 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__os_unfair_lock_unlock_11034c790)(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104855520);
  (*pcVar1)();
}



/* Entry: 104855520; end: 1048555af;  */

void FUN_104855520(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar2;
  
  lVar1 = 0;
  FUN_1048564ec(0,*(undefined8 *)(unaff_x20 + 0x50));
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = (undefined8 *)(&stack0xffffffffffffffd0 + -extraout_x8);
  *puVar2 = param_1;
  *(undefined8 *)(&stack0xffffffffffffffd8 + -extraout_x8) = param_2;
  _swift_storeEnumTagMultiPayload(puVar2);
  _swift_allocObject();
  FUN_1048555e8(puVar2);
  return;
}



/* Entry: 1048555b0; end: 1048555e7;  */

void FUN_1048555b0(undefined8 param_1)

{
  _swift_allocObject();
  FUN_1048555e8(param_1);
  return;
}



/* Entry: 1048555e8; end: 104855693;  */

void FUN_1048555e8(undefined8 param_1)

{
  long lVar1;
  undefined4 *puVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  
  lVar3 = *unaff_x20;
  _swift_defaultActor_initialize();
  lVar4 = *(long *)(*unaff_x20 + 0x68);
  lVar1 = 0;
  func_0x0001002acfc8();
  _swift_allocObject();
  puVar2 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *puVar2 = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined4 **)(lVar1 + 0x10) = puVar2;
  *(undefined2 *)(lVar1 + 0x28) = 0x100;
  *(long *)((long)unaff_x20 + lVar4) = lVar1;
  lVar4 = *(long *)(*unaff_x20 + 0x60);
  lVar1 = 0;
  FUN_1048564ec(0,*(undefined8 *)(lVar3 + 0x50));
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))((long)unaff_x20 + lVar4,param_1,lVar1);
  return;
}



/* Entry: 104855694; end: 104855737;  */

void FUN_104855694(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x128) = param_1;
  *(long **)(unaff_x22 + 0x130) = unaff_x20;
  lVar4 = *unaff_x20;
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x138) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(lVar4 + 0x50);
  lVar2 = 0;
  FUN_1048564ec();
  *(long *)(unaff_x22 + 0x148) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x150) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x158) = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x160) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104855738);
  return;
}



/* Entry: 104855738; end: 104855bd7;  */

void FUN_104855738(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  long unaff_x22;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar7 = *(long *)(unaff_x22 + 0x150);
  plVar16 = *(long **)(unaff_x22 + 0x130);
  lVar17 = *(long *)(*plVar16 + 0x60);
  *(long *)(unaff_x22 + 0x168) = lVar17;
  _swift_beginAccess((long)plVar16 + lVar17,unaff_x22 + 0xb0,0,0);
  (**(code **)(lVar7 + 0x10))(uVar13,(long)plVar16 + lVar17,uVar15);
  _swift_getEnumCaseMultiPayload(uVar13,uVar15);
  if ((int)uVar13 == 0) {
    puVar1 = *(undefined8 **)(unaff_x22 + 0x158);
    puVar2 = *(undefined8 **)(unaff_x22 + 0x160);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x148);
    lVar7 = *(long *)(unaff_x22 + 0x150);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x140);
    lVar3 = 0;
    __sScPMa();
    uVar11 = puVar2[1];
    uVar18 = puVar2[1];
    uVar8 = *puVar2;
    *(undefined8 *)(unaff_x22 + 0x170) = uVar11;
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(uVar13,1,1,lVar3);
    puVar4 = &UNK_1107a3ea0;
    _swift_allocObject(&UNK_1107a3ea0,0x38,7);
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined8 *)(puVar4 + 0x18) = 0;
    *(undefined8 *)(puVar4 + 0x20) = uVar12;
    *(undefined8 *)(puVar4 + 0x30) = uVar18;
    *(undefined8 *)(puVar4 + 0x28) = uVar8;
    _swift_retain(uVar11);
    uVar11 = 0;
    func_0x0001001ca884(0,0,uVar13,&UNK_10dd38488,puVar4,uVar12);
    *(undefined8 *)(unaff_x22 + 0x178) = uVar11;
    *puVar1 = uVar11;
    _swift_storeEnumTagMultiPayload(puVar1,uVar15,1);
    _swift_beginAccess((long)plVar16 + lVar17,unaff_x22 + 0xe0,0x21,0);
    pcVar14 = *(code **)(lVar7 + 0x28);
    *(code **)(unaff_x22 + 0x180) = pcVar14;
    _swift_retain(uVar11);
    (*pcVar14)((long)plVar16 + lVar17,puVar1,uVar15);
    _swift_endAccess(unaff_x22 + 0xe0);
    puVar4 = &UNK_1107a3ec8;
    uVar13 = 0x20;
    uVar8 = 7;
    _swift_allocObject(&UNK_1107a3ec8,0x20);
    *(undefined **)(unaff_x22 + 0x188) = puVar4;
    *(undefined8 *)(puVar4 + 0x10) = uVar12;
    *(undefined8 *)(puVar4 + 0x18) = uVar11;
    uVar15 = uVar11;
    _swift_retain(uVar11);
    FUN_10485545c();
    if (((uint)uVar8 & 0xff00) != 0x100) {
      _swift_beginAccess(0x1138153c0,unaff_x22 + 0x110,0,0);
      FUN_10485728c(0x1138153c0,unaff_x22 + 0x88,0x113092810,&UNK_10dd38530);
      if (*(long *)(unaff_x22 + 0xa0) != 0) {
        FUN_104857124(unaff_x22 + 0x88,unaff_x22 + 0x60);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
        lVar7 = *(long *)(unaff_x22 + 0x80);
        func_0x0001000a8868(unaff_x22 + 0x60,uVar12);
        piVar10 = *(int **)(lVar7 + 0x10);
        plVar16 = (long *)(ulong)(uint)piVar10[1];
        UNRECOVERED_JUMPTABLE = (code *)((long)*piVar10 + (long)piVar10);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 400) = plVar16;
        *plVar16 = unaff_x22;
        plVar16[1] = (long)FUN_104855bd8;
        puVar9 = &UNK_10dd38498;
        goto LAB_104855a90;
      }
      func_0x0001048572d4(unaff_x22 + 0x88,0x113092810,&UNK_10dd38530);
    }
    plVar16 = (long *)0x30;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x198) = plVar16;
    *plVar16 = unaff_x22;
    plVar16[1] = (long)FUN_104855c84;
    lVar7 = *(long *)(unaff_x22 + 0x140);
    plVar16[2] = lVar7;
    lVar17 = *(long *)(lVar7 + -8);
    plVar16[3] = lVar17;
    uVar5 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar16[4] = uVar5;
    plVar6 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    _swift_task_alloc();
    plVar16[5] = (long)plVar6;
    *plVar6 = (long)plVar16;
    plVar6[1] = (long)FUN_1048560fc;
  }
  else {
    if ((int)uVar13 != 1) {
      (**(code **)(*(long *)(*(long *)(unaff_x22 + 0x140) + -8) + 0x20))
                (*(undefined8 *)(unaff_x22 + 0x128),*(undefined8 *)(unaff_x22 + 0x160));
      uVar15 = *(undefined8 *)(unaff_x22 + 0x158);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x138);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x160));
      _swift_task_dealloc(uVar15);
      _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x000104855b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    uVar15 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar11 = **(undefined8 **)(unaff_x22 + 0x160);
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar11;
    puVar4 = &UNK_1107a3e78;
    uVar13 = 0x20;
    uVar8 = 7;
    _swift_allocObject(&UNK_1107a3e78,0x20);
    *(undefined **)(unaff_x22 + 0x1b0) = puVar4;
    *(undefined8 *)(puVar4 + 0x10) = uVar15;
    *(undefined8 *)(puVar4 + 0x18) = uVar11;
    uVar15 = uVar11;
    _swift_retain(uVar11);
    FUN_10485545c();
    if (((uint)uVar8 & 0xff00) != 0x100) {
      _swift_beginAccess(0x1138153c0,unaff_x22 + 200,0,0);
      FUN_10485728c(0x1138153c0,unaff_x22 + 0x38,0x113092810,&UNK_10dd38530);
      if (*(long *)(unaff_x22 + 0x50) != 0) {
        FUN_104857124(unaff_x22 + 0x38,unaff_x22 + 0x10);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x28);
        lVar7 = *(long *)(unaff_x22 + 0x30);
        func_0x0001000a8868(unaff_x22 + 0x10,uVar12);
        piVar10 = *(int **)(lVar7 + 0x10);
        plVar16 = (long *)(ulong)(uint)piVar10[1];
        UNRECOVERED_JUMPTABLE = (code *)((long)*piVar10 + (long)piVar10);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x1b8) = plVar16;
        *plVar16 = unaff_x22;
        plVar16[1] = (long)FUN_104855e1c;
        puVar9 = &UNK_10dd38478;
LAB_104855a90:
                    /* WARNING: Could not recover jumptable at 0x000104855abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(uVar15,uVar13,uVar8,puVar9,puVar4,uVar12,lVar7);
        return;
      }
      func_0x0001048572d4(unaff_x22 + 0x38,0x113092810,&UNK_10dd38530);
    }
    plVar16 = (long *)0x30;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1c0) = plVar16;
    *plVar16 = unaff_x22;
    plVar16[1] = (long)FUN_104855ec8;
    lVar7 = *(long *)(unaff_x22 + 0x140);
    plVar16[2] = lVar7;
    lVar17 = *(long *)(lVar7 + -8);
    plVar16[3] = lVar17;
    uVar5 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar16[4] = uVar5;
    plVar6 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    _swift_task_alloc();
    plVar16[5] = (long)plVar6;
    *plVar6 = (long)plVar16;
    plVar6[1] = (long)FUN_104856218;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(plVar6,uVar5,uVar11,lVar7);
  return;
}



/* Entry: 104855bd8; end: 104855c83;  */

void FUN_104855bd8(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x130);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 400));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x104855c24,uVar1,0);
  return;
}



/* Entry: 104855c84; end: 104855ceb;  */

void FUN_104855c84(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x198));
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 0x1a0) = plVar1;
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_104855cec;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)
            (*(undefined8 *)(lVar3 + 0x128),*(undefined8 *)(lVar3 + 0x178),
             *(undefined8 *)(lVar3 + 0x140));
  return;
}



/* Entry: 104855cec; end: 104855d37;  */

void FUN_104855cec(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x130);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x1a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104855d38,uVar1,0);
  return;
}



/* Entry: 104855d38; end: 104855e1b;  */

void FUN_104855d38(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  
  pcVar1 = *(code **)(unaff_x22 + 0x180);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x178);
  lVar9 = *(long *)(unaff_x22 + 0x168);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x158);
  lVar2 = *(long *)(unaff_x22 + 0x140);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x128);
  lVar6 = *(long *)(unaff_x22 + 0x130);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x170));
  _swift_release(uVar4);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(uVar8,uVar3,lVar2);
  _swift_storeEnumTagMultiPayload(uVar8,uVar5,2);
  _swift_beginAccess(lVar6 + lVar9,unaff_x22 + 0xf8,0x21,0);
  (*pcVar1)(lVar6 + lVar9,uVar8,uVar5);
  _swift_endAccess(unaff_x22 + 0xf8);
  _swift_release(uVar7);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x138);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x160));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000104855e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104855e1c; end: 104855ec7;  */

void FUN_104855e1c(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x130);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x1b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x104855e68,uVar1,0);
  return;
}



/* Entry: 104855ec8; end: 104855f2f;  */

void FUN_104855ec8(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x1c0));
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 0x1c8) = plVar1;
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_104855f30;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)
            (*(undefined8 *)(lVar3 + 0x128),*(undefined8 *)(lVar3 + 0x1a8),
             *(undefined8 *)(lVar3 + 0x140));
  return;
}


