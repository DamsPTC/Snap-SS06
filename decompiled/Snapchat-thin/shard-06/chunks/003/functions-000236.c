/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1047d0d8c; end: 1047d0dd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d0d8c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f738) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d0dd8; end: 1047d0e23; -[SCAdHeaderDecision initWithHeadlineType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d0dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308f738) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d0e24; end: 1047d0e6b; -[SCAdHeaderDecision hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d0e24(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308f738));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047d0e6c; end: 1047d0eeb; -[SCAdHeaderDecision isEqual:] */

uint FUN_1047d0e6c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047d0cd8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047d0eec; end: 1047d0eef; -[SCAdHeaderDecision copyWithZone:] */

void FUN_1047d0eec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047d0ef0; end: 1047d0f83; -[SCAdHeaderDecision encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d0ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0x454e494c44414548;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454e494c44414548,0xed0000455059545f);
  func_0x00010bf92fc0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047d0f84; end: 1047d0fb3;  */

void FUN_1047d0f84(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047d0fb4(param_1);
  return;
}



/* Entry: 1047d0fb4; end: 1047d1067;  */

undefined8 FUN_1047d0fb4(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  
  uVar1 = 0x454e494c44414548;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454e494c44414548,0xed0000455059545f);
  uVar2 = param_1;
  func_0x00010bf66f40();
  _objc_release(uVar1);
  if (uVar2 < 3) {
    func_0x00010c01a360();
    _objc_release(param_1);
  }
  else {
    _objc_release(param_1);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Entry: 1047d1068; end: 1047d108f; -[SCAdHeaderDecision initWithCoder:] */

void FUN_1047d1068(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047d0fb4();
  return;
}



/* Entry: 1047d1090; end: 1047d10ab; -[SCAdHeaderDecision description] */

void FUN_1047d1090(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047d10ac; end: 1047d1127; -[SCAdHeaderDecision init] */

void FUN_1047d10ac(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdHeaderDecisionWrapper.swift",
             0x29,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047d10f4);
  (*pcVar1)();
}



/* Entry: 1047d1128; end: 1047d112b; -[SCAdHeaderDecision .cxx_destruct] */

void FUN_1047d1128(void)

{
  return;
}



/* Entry: 1047d112c; end: 1047d114b;  */

void FUN_1047d112c(void)

{
  _objc_opt_self(&PTR_PTR_1129d5070);
  return;
}



/* Entry: 1047d114c; end: 1047d114f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d114c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f738) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d1150; end: 1047d11ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1047d1150(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_11308f768);
      iVar2 = *(int *)(lStack_58 + _DAT_11308f768);
      _objc_release();
      return iVar1 == iVar2;
    }
  }
  return false;
}



/* Entry: 1047d11f0; end: 1047d1203; -[SCAdProgressBarDecision segmentMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047d11f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f768);
}



/* Entry: 1047d1204; end: 1047d124f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d1204(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f768) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d1250; end: 1047d129b; -[SCAdProgressBarDecision initWithSegmentMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d1250(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308f768) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d129c; end: 1047d12e3; -[SCAdProgressBarDecision hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d129c(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308f768));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047d12e4; end: 1047d1363; -[SCAdProgressBarDecision isEqual:] */

uint FUN_1047d12e4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047d1150(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047d1364; end: 1047d1367; -[SCAdProgressBarDecision copyWithZone:] */

void FUN_1047d1364(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047d1368; end: 1047d13f7; -[SCAdProgressBarDecision encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d1368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0x5f544e454d474553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544e454d474553,0xec00000045444f4d);
  func_0x00010bf92fc0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047d13f8; end: 1047d1427;  */

void FUN_1047d13f8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047d1428(param_1);
  return;
}



/* Entry: 1047d1428; end: 1047d14d7;  */

undefined8 FUN_1047d1428(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  
  uVar1 = 0x5f544e454d474553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544e454d474553,0xec00000045444f4d);
  uVar2 = param_1;
  func_0x00010bf66f40();
  _objc_release(uVar1);
  if (uVar2 < 3) {
    func_0x00010c043a20();
    _objc_release(param_1);
  }
  else {
    _objc_release(param_1);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Entry: 1047d14d8; end: 1047d14ff; -[SCAdProgressBarDecision initWithCoder:] */

void FUN_1047d14d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047d1428();
  return;
}



/* Entry: 1047d1500; end: 1047d151b; -[SCAdProgressBarDecision description] */

void FUN_1047d1500(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047d151c; end: 1047d1597; -[SCAdProgressBarDecision init] */

void FUN_1047d151c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdProgressBarDecisionWrapper.swift",0x2e,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047d1564);
  (*pcVar1)();
}



/* Entry: 1047d1598; end: 1047d159b; -[SCAdProgressBarDecision .cxx_destruct] */

void FUN_1047d1598(void)

{
  return;
}



/* Entry: 1047d159c; end: 1047d15bb;  */

void FUN_1047d159c(void)

{
  _objc_opt_self(&PTR_PTR_1129d5140);
  return;
}



/* Entry: 1047d15bc; end: 1047d15bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d15bc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f768) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d15c0; end: 1047d1673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1047d15c0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_11308f798);
      iVar2 = *(int *)(lStack_58 + _DAT_11308f798);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308f7a0);
      uVar6 = *(undefined8 *)(lStack_58 + _DAT_11308f7a0);
      _objc_release();
      return iVar1 == iVar2 && (int)uVar5 == (int)uVar6;
    }
  }
  return false;
}



/* Entry: 1047d1674; end: 1047d1683; -[SCAdPromotedStoryTileDecision autoPlayMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047d1674(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f798);
}



/* Entry: 1047d1684; end: 1047d1697; -[SCAdPromotedStoryTileDecision tileTapBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047d1684(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f7a0);
}



/* Entry: 1047d1698; end: 1047d16fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d1698(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f798) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308f7a0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d16fc; end: 1047d175f; -[SCAdPromotedStoryTileDecision initWithAutoPlayMode:tileTapBehavior:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d16fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308f798) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308f7a0) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d1760; end: 1047d17bb; -[SCAdPromotedStoryTileDecision hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d1760(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308f798));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308f7a0));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047d17bc; end: 1047d183b; -[SCAdPromotedStoryTileDecision isEqual:] */

uint FUN_1047d17bc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047d15c0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047d183c; end: 1047d183f; -[SCAdPromotedStoryTileDecision copyWithZone:] */

void FUN_1047d183c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047d1840; end: 1047d1917; -[SCAdPromotedStoryTileDecision encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d1840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0x414c505f4f545541;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x414c505f4f545541,0xee0045444f4d5f59);
  func_0x00010bf92fc0(param_3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f20e430);
  func_0x00010bf92fc0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047d1918; end: 1047d1947;  */

void FUN_1047d1918(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047d1948(param_1);
  return;
}



/* Entry: 1047d1948; end: 1047d1a47;  */

undefined8 FUN_1047d1948(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  
  uVar1 = 0x414c505f4f545541;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x414c505f4f545541,0xee0045444f4d5f59);
  uVar2 = param_1;
  func_0x00010bf66f40();
  _objc_release(uVar1);
  if (uVar2 < 2) {
    uVar1 = 0xd000000000000011;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f20e430);
    uVar2 = param_1;
    func_0x00010bf66f40();
    _objc_release(uVar1);
    if (uVar2 < 3) {
      func_0x00010bff5d00();
      _objc_release(param_1);
      return unaff_x20;
    }
  }
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047d1a48; end: 1047d1a6f; -[SCAdPromotedStoryTileDecision initWithCoder:] */

void FUN_1047d1a48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047d1948();
  return;
}



/* Entry: 1047d1a70; end: 1047d1a8b; -[SCAdPromotedStoryTileDecision description] */

void FUN_1047d1a70(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047d1a8c; end: 1047d1b07; -[SCAdPromotedStoryTileDecision init] */

void FUN_1047d1a8c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdPromotedStoryTileDecisionWrapper.swift",0x34,2,0x49,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047d1ad4);
  (*pcVar1)();
}



/* Entry: 1047d1b08; end: 1047d1b0b; -[SCAdPromotedStoryTileDecision .cxx_destruct] */

void FUN_1047d1b08(void)

{
  return;
}



/* Entry: 1047d1b0c; end: 1047d1b2b;  */

void FUN_1047d1b0c(void)

{
  _objc_opt_self(&PTR_PTR_1129d5210);
  return;
}



/* Entry: 1047d1b2c; end: 1047d1b2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d1b2c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f798) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308f7a0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d1b30; end: 1047d1bcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1047d1b30(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_11308f7d0);
      iVar2 = *(int *)(lStack_58 + _DAT_11308f7d0);
      _objc_release();
      return iVar1 == iVar2;
    }
  }
  return false;
}



/* Entry: 1047d1bd0; end: 1047d1be3; -[SCAdStickerCtaDecision stickerCtaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047d1bd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f7d0);
}



/* Entry: 1047d1be4; end: 1047d1c2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d1be4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f7d0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d1c30; end: 1047d1c7b; -[SCAdStickerCtaDecision initWithStickerCtaType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d1c30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308f7d0) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d1c7c; end: 1047d1cc3; -[SCAdStickerCtaDecision hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d1c7c(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308f7d0));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047d1cc4; end: 1047d1d43; -[SCAdStickerCtaDecision isEqual:] */

uint FUN_1047d1cc4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047d1b30(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047d1d44; end: 1047d1d47; -[SCAdStickerCtaDecision copyWithZone:] */

void FUN_1047d1d44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047d1d48; end: 1047d1e9b; -[SCAdStickerCtaDecision encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d1d48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20e490);
  func_0x00010bf92fc0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047d1e9c; end: 1047d1f5f; -[SCAdStickerCtaDecision initWithCoder:] */

undefined8 FUN_1047d1e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  uVar3 = 0xf20e490;
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010);
  uVar2 = param_3;
  func_0x00010bf66f40(param_3);
  _objc_release(uVar1);
  FUN_1046baaac(uVar2);
  if ((uVar3 & 0xff) == 1) {
    _objc_release(param_3);
    uVar2 = param_1;
    _swift_getObjectType(param_1);
    _swift_deallocPartialClassInstance(param_1,uVar2,0x10,7);
    param_1 = 0;
  }
  else {
    func_0x00010c04c820(param_1);
    _objc_release(param_3);
  }
  return param_1;
}



/* Entry: 1047d1f60; end: 1047d1f7b; -[SCAdStickerCtaDecision description] */

void FUN_1047d1f60(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047d1f7c; end: 1047d1ff7; -[SCAdStickerCtaDecision init] */

void FUN_1047d1f7c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdStickerCtaDecisionWrapper.swift",0x2d,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047d1fc4);
  (*pcVar1)();
}



/* Entry: 1047d1ff8; end: 1047d1ffb; -[SCAdStickerCtaDecision .cxx_destruct] */

void FUN_1047d1ff8(void)

{
  return;
}



/* Entry: 1047d1ffc; end: 1047d201b;  */

void FUN_1047d1ffc(void)

{
  _objc_opt_self(&PTR_PTR_1129d52e8);
  return;
}



/* Entry: 1047d201c; end: 1047d201f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d201c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f7d0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d2020; end: 1047d20bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1047d2020(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_11308f800);
      iVar2 = *(int *)(lStack_58 + _DAT_11308f800);
      _objc_release();
      return iVar1 == iVar2;
    }
  }
  return false;
}



/* Entry: 1047d20c0; end: 1047d20d3; -[SCAdSurveyDecision surveyType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047d20c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f800);
}



/* Entry: 1047d20d4; end: 1047d211f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d20d4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f800) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d2120; end: 1047d216b; -[SCAdSurveyDecision initWithSurveyType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d2120(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308f800) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d216c; end: 1047d21b3; -[SCAdSurveyDecision hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d216c(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308f800));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047d21b4; end: 1047d2233; -[SCAdSurveyDecision isEqual:] */

uint FUN_1047d21b4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047d2020(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047d2234; end: 1047d2237; -[SCAdSurveyDecision copyWithZone:] */

void FUN_1047d2234(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047d2238; end: 1047d22c7; -[SCAdSurveyDecision encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d2238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0x545f594556525553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545f594556525553,0xeb00000000455059);
  func_0x00010bf92fc0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047d22c8; end: 1047d22f7;  */

void FUN_1047d22c8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047d22f8(param_1);
  return;
}



/* Entry: 1047d22f8; end: 1047d23a7;  */

undefined8 FUN_1047d22f8(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  
  uVar1 = 0x545f594556525553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545f594556525553,0xeb00000000455059);
  uVar2 = param_1;
  func_0x00010bf66f40();
  _objc_release(uVar1);
  if (uVar2 < 2) {
    func_0x00010c04fa60();
    _objc_release(param_1);
  }
  else {
    _objc_release(param_1);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Entry: 1047d23a8; end: 1047d23cf; -[SCAdSurveyDecision initWithCoder:] */

void FUN_1047d23a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047d22f8();
  return;
}



/* Entry: 1047d23d0; end: 1047d23eb; -[SCAdSurveyDecision description] */

void FUN_1047d23d0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047d23ec; end: 1047d2467; -[SCAdSurveyDecision init] */

void FUN_1047d23ec(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdSurveyDecisionWrapper.swift",
             0x29,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047d2434);
  (*pcVar1)();
}



/* Entry: 1047d2468; end: 1047d246b; -[SCAdSurveyDecision .cxx_destruct] */

void FUN_1047d2468(void)

{
  return;
}



/* Entry: 1047d246c; end: 1047d248b;  */

void FUN_1047d246c(void)

{
  _objc_opt_self(&PTR_PTR_1129d53b8);
  return;
}



/* Entry: 1047d248c; end: 1047d248f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d248c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f800) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d2490; end: 1047d252f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1047d2490(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_11308f830);
      iVar2 = *(int *)(lStack_58 + _DAT_11308f830);
      _objc_release();
      return iVar1 == iVar2;
    }
  }
  return false;
}



/* Entry: 1047d2530; end: 1047d2543; -[SCAdTapTooltipDecision tapToPauseTooltipType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047d2530(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f830);
}



/* Entry: 1047d2544; end: 1047d258f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d2544(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f830) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d2590; end: 1047d25db; -[SCAdTapTooltipDecision initWithTapToPauseTooltipType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d2590(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308f830) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d25dc; end: 1047d2623; -[SCAdTapTooltipDecision hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d25dc(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308f830));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047d2624; end: 1047d26a3; -[SCAdTapTooltipDecision isEqual:] */

uint FUN_1047d2624(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047d2490(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047d26a4; end: 1047d26a7; -[SCAdTapTooltipDecision copyWithZone:] */

void FUN_1047d26a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047d26a8; end: 1047d27fb; -[SCAdTapTooltipDecision encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d26a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f20e510);
  func_0x00010bf92fc0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047d27fc; end: 1047d28bf; -[SCAdTapTooltipDecision initWithCoder:] */

undefined8 FUN_1047d27fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  uVar3 = 0xf20e510;
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019);
  uVar2 = param_3;
  func_0x00010bf66f40(param_3);
  _objc_release(uVar1);
  FUN_1046bae7c(uVar2);
  if ((uVar3 & 0xff) == 1) {
    _objc_release(param_3);
    uVar2 = param_1;
    _swift_getObjectType(param_1);
    _swift_deallocPartialClassInstance(param_1,uVar2,0x10,7);
    param_1 = 0;
  }
  else {
    func_0x00010c050780(param_1);
    _objc_release(param_3);
  }
  return param_1;
}



/* Entry: 1047d28c0; end: 1047d28db; -[SCAdTapTooltipDecision description] */

void FUN_1047d28c0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047d28dc; end: 1047d2957; -[SCAdTapTooltipDecision init] */

void FUN_1047d28dc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdTapTooltipDecisionWrapper.swift",0x2d,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047d2924);
  (*pcVar1)();
}



/* Entry: 1047d2958; end: 1047d295b; -[SCAdTapTooltipDecision .cxx_destruct] */

void FUN_1047d2958(void)

{
  return;
}



/* Entry: 1047d295c; end: 1047d297b;  */

void FUN_1047d295c(void)

{
  _objc_opt_self(&PTR_PTR_1129d5488);
  return;
}



/* Entry: 1047d297c; end: 1047d297f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d297c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f830) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d2980; end: 1047d2a1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1047d2980(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_11308f860);
      iVar2 = *(int *)(lStack_58 + _DAT_11308f860);
      _objc_release();
      return iVar1 == iVar2;
    }
  }
  return false;
}



/* Entry: 1047d2a20; end: 1047d2a33; -[SCAdWakeUpUiDecision wakeUpUiType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047d2a20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f860);
}



/* Entry: 1047d2a34; end: 1047d2a7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d2a34(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f860) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d2a80; end: 1047d2acb; -[SCAdWakeUpUiDecision initWithWakeUpUiType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d2a80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308f860) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d2acc; end: 1047d2b13; -[SCAdWakeUpUiDecision hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d2acc(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308f860));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047d2b14; end: 1047d2b93; -[SCAdWakeUpUiDecision isEqual:] */

uint FUN_1047d2b14(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047d2980(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047d2b94; end: 1047d2b97; -[SCAdWakeUpUiDecision copyWithZone:] */

void FUN_1047d2b94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047d2b98; end: 1047d2c2b; -[SCAdWakeUpUiDecision encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d2b98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0x5f50555f454b4157;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f50555f454b4157,0xef455059545f4955);
  func_0x00010bf92fc0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047d2c2c; end: 1047d2c5b;  */

void FUN_1047d2c2c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047d2c5c(param_1);
  return;
}


