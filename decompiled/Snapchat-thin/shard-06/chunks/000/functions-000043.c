/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104421720; end: 1044217cb;  */

void FUN_104421720(void)

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



/* Entry: 1044217cc; end: 104421803;  */

void FUN_1044217cc(ulong *param_1,ulong *param_2)

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



/* Entry: 104421804; end: 10442185f; -[SCContextPostSnapParams postSnapActions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104421804(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113078558);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_104424364(0);
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



/* Entry: 104421860; end: 10442186f; -[SCContextPostSnapParams snapParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104421860(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113078560));
  return;
}



/* Entry: 104421870; end: 1044218bb; -[SCContextPostSnapParams contextSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104421870(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113078568);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113078568))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044218bc; end: 104421917; -[SCContextPostSnapParams conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044218bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113078570))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113078570);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104421918; end: 104421927; -[SCContextPostSnapParams isGroupConversation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104421918(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113078578);
}



/* Entry: 104421928; end: 104421937; -[SCContextPostSnapParams viewedAtTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104421928(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078580);
}



/* Entry: 104421938; end: 104421947; -[SCContextPostSnapParams isStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104421938(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113078588);
}



/* Entry: 104421948; end: 104421957; -[SCContextPostSnapParams isSnapFromCurrentUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104421948(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113078590);
}



/* Entry: 104421958; end: 104421a4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104421958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113078558) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113078560) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113078568);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113078570);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_113078578) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113078580) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113078588) = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_113078590) = param_10;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104421a4c; end: 104421b8b; -[SCContextPostSnapParams initWithPostSnapActions:snapParams:contextSessionId:conversationId:isGroupConversation:viewedAtTimestamp:isStory:isSnapFromCurrentUser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104421a4c(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,undefined1 param_8,undefined1 param_9,
                  undefined1 param_10)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_80;
  long lStack_78;
  
  lVar4 = param_2;
  _swift_getObjectType();
  if (param_4 != 0) {
    param_3 = 0;
    FUN_104424364();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_7 == 0) {
    param_7 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = param_3;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(long *)(param_2 + _DAT_113078558) = param_4;
  *(undefined8 *)(param_2 + _DAT_113078560) = param_5;
  puVar1 = (undefined8 *)(param_2 + _DAT_113078568);
  *puVar1 = param_6;
  puVar1[1] = param_3;
  plVar2 = (long *)(param_2 + _DAT_113078570);
  *plVar2 = param_7;
  plVar2[1] = lVar5;
  *(undefined1 *)(param_2 + _DAT_113078578) = param_8;
  *(undefined8 *)(param_2 + _DAT_113078580) = param_1;
  *(undefined1 *)(param_2 + _DAT_113078588) = param_9;
  *(undefined1 *)(param_2 + _DAT_113078590) = param_10;
  puVar3 = PTR_s_init_1125d9248;
  lStack_80 = param_2;
  lStack_78 = lVar4;
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_80,puVar3);
  return;
}



/* Entry: 104421b8c; end: 104421bcb;  */

undefined8 FUN_104421b8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_104422ea8(param_1);
  FUN_10442314c(param_1);
  return uVar1;
}



/* Entry: 104421bcc; end: 104421bff; -[SCContextPostSnapParams hash] */

undefined8 FUN_104421bcc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104421c00();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104421c00; end: 104421d77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104421c00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  double dVar5;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar3 = *(long *)(unaff_x20 + _DAT_113078558);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    uVar1 = 0;
    FUN_104424364(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar1);
    lVar4 = lVar3;
    func_0x00010bfde980();
    _objc_release(lVar3);
  }
  __ss6HasherV8_combineyySuF(lVar4);
  func_0x00010bfde980(*(undefined8 *)(unaff_x20 + _DAT_113078560));
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113078568);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113078568))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113078570))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113078570);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar1 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113078578));
  dVar5 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113078580) != 0.0) {
    dVar5 = *(double *)(unaff_x20 + _DAT_113078580);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar5);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113078588));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113078590));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104421d78; end: 104421fbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104421d78(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long unaff_x20;
  uint uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  long lStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  
  lVar12 = unaff_x20;
  _swift_getObjectType();
  func_0x0001044238d8(param_1,auStack_90,0x112d387f8,&UNK_10d902650);
  if (lStack_78 == 0) {
    func_0x000104423898(auStack_90,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar9 = &lStack_98;
    _swift_dynamicCast(plVar9,auStack_90,PTR___sypN_11034f1a8 + 8,lVar12,6);
    if (((ulong)plVar9 & 1) != 0) {
      lVar13 = *(long *)(unaff_x20 + _DAT_113078558);
      lVar12 = *(long *)(lStack_98 + _DAT_113078558);
      uVar11 = (uint)(lVar13 == 0 && lVar12 == 0);
      if (lVar13 != 0 && lVar12 != 0) {
        _swift_bridgeObjectRetain(lVar12);
        lVar10 = lVar13;
        _swift_bridgeObjectRetain(lVar13);
        uVar11 = (uint)lVar10;
        FUN_1044227ec();
        _swift_bridgeObjectRelease(lVar13);
        _swift_bridgeObjectRelease(lVar12);
      }
      uVar7 = (uint)*(undefined8 *)(unaff_x20 + _DAT_113078560);
      func_0x00010c071ae0();
      lVar12 = *(long *)(unaff_x20 + _DAT_113078568);
      if (lVar12 == *(long *)(lStack_98 + _DAT_113078568) &&
          ((long *)(unaff_x20 + _DAT_113078568))[1] == ((long *)(lStack_98 + _DAT_113078568))[1]) {
        uVar8 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar8 = (uint)lVar12;
      }
      lVar12 = ((long *)(unaff_x20 + _DAT_113078570))[1];
      lVar13 = ((long *)(lStack_98 + _DAT_113078570))[1];
      uVar14 = (uint)(lVar12 == 0 && lVar13 == 0);
      if ((lVar12 != 0) && (lVar13 != 0)) {
        lVar10 = *(long *)(unaff_x20 + _DAT_113078570);
        if ((lVar10 == *(long *)(lStack_98 + _DAT_113078570)) && (lVar12 == lVar13)) {
          uVar14 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar14 = (uint)lVar10;
        }
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_113078578);
      bVar2 = *(byte *)(lStack_98 + _DAT_113078578);
      dVar15 = *(double *)(unaff_x20 + _DAT_113078580);
      dVar16 = *(double *)(lStack_98 + _DAT_113078580);
      bVar3 = *(byte *)(unaff_x20 + _DAT_113078588);
      bVar4 = *(byte *)(lStack_98 + _DAT_113078588);
      bVar5 = *(byte *)(unaff_x20 + _DAT_113078590);
      bVar6 = *(byte *)(lStack_98 + _DAT_113078590);
      _objc_release(lStack_98);
      return uVar11 & uVar7 & uVar8 & uVar14 & ((bVar1 ^ bVar2) ^ 0xffffffff) &
             (uint)(dVar15 == dVar16) & ((bVar3 ^ bVar4) ^ 1) & ((bVar5 ^ bVar6) ^ 1);
    }
  }
  return 0;
}



/* Entry: 104421fbc; end: 10442204b; -[SCContextPostSnapParams isEqual:] */

uint FUN_104421fbc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104421d78(&uStack_40);
  _objc_release(param_1);
  FUN_104423898(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 10442204c; end: 10442204f; -[SCContextPostSnapParams copyWithZone:] */

void FUN_10442204c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104422050; end: 10442209b; -[SCContextPostSnapParams description] */

void FUN_104422050(undefined8 param_1)

{
  undefined1 auStack_68 [72];
  
  _objc_retain();
  FUN_104423180(auStack_68);
  _objc_release(param_1);
  FUN_10442314c(auStack_68);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442209c; end: 1044220e3; -[SCContextPostSnapParams init] */

void FUN_10442209c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCContextPostSnapDataServices/SCContextPostSnapParamsWrapper.swift",0x42,2,0x66,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044220e4);
  (*pcVar1)();
}



/* Entry: 1044220e4; end: 1044220ff; +[SCContextPostSnapParamsBuilder contextPostSnapParams] */

void FUN_1044220e4(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104422100; end: 10442213f; +[SCContextPostSnapParamsBuilder contextPostSnapParamsWithExistingContextPostSnapParams:] */

void FUN_104422100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_104423514(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104422140; end: 1044221ab; -[SCContextPostSnapParamsBuilder withPostSnapActions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104422140(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    FUN_104424364(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_113078598);
  *(long *)(param_1 + _DAT_113078598) = param_3;
  _objc_retain();
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1044221ac; end: 1044221f3; -[SCContextPostSnapParamsBuilder withSnapParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1044221ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130785a0);
  *(undefined8 *)(param_1 + _DAT_1130785a0) = param_3;
  _objc_retain(param_3);
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1044221f4; end: 104422243; -[SCContextPostSnapParamsBuilder withContextSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044221f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_1130785a8);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  _objc_retain(param_1);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104422244; end: 1044222a7; -[SCContextPostSnapParamsBuilder withConversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104422244(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_1130785b0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1044222a8; end: 1044222b7; -[SCContextPostSnapParamsBuilder withIsGroupConversation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044222a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1130785b8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044222b8; end: 1044222cf; -[SCContextPostSnapParamsBuilder withViewedAtTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044222b8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_1130785c0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044222d0; end: 1044222df; -[SCContextPostSnapParamsBuilder withIsStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044222d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1130785c8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044222e0; end: 1044222ef; -[SCContextPostSnapParamsBuilder withIsSnapFromCurrentUser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044222e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1130785d0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044222f0; end: 10442252b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044222f0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_80;
  long lStack_70;
  long lStack_68;
  
  lVar11 = *(long *)(unaff_x20 + _DAT_1130785a0);
  if (lVar11 == 0) {
    FUN_1044236a0(0x6172615070616e73,0xea0000000000736d);
    _swift_willThrow();
  }
  else {
    lVar10 = ((undefined8 *)(unaff_x20 + _DAT_1130785a8))[1];
    if (lVar10 == 0) {
      _objc_retain(lVar11);
      FUN_1044236a0(0xd000000000000010,0x800000010f1fd6c0);
      _swift_willThrow();
      _objc_release(lVar11);
    }
    else {
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_1130785a8);
      bVar4 = *(byte *)(unaff_x20 + _DAT_1130785b8);
      if (bVar4 == 2) {
        *(undefined1 *)(unaff_x20 + _DAT_1130785b8) = 0;
      }
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130785c0);
      if (*(char *)(puVar1 + 1) == '\x01') {
        uStack_80 = 0;
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 0;
      }
      else {
        uStack_80 = *puVar1;
      }
      bVar5 = *(byte *)(unaff_x20 + _DAT_1130785c8);
      if (bVar5 == 2) {
        *(undefined1 *)(unaff_x20 + _DAT_1130785c8) = 0;
      }
      bVar6 = *(byte *)(unaff_x20 + _DAT_1130785d0);
      if (bVar6 == 2) {
        *(undefined1 *)(unaff_x20 + _DAT_1130785d0) = 0;
      }
      uVar12 = *(undefined8 *)(unaff_x20 + _DAT_113078598);
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130785b0);
      uVar3 = ((undefined8 *)(unaff_x20 + _DAT_1130785b0))[1];
      FUN_104423858();
      lVar8 = param_1;
      _objc_allocWithZone();
      *(undefined8 *)(lVar8 + _DAT_113078558) = uVar12;
      *(long *)(lVar8 + _DAT_113078560) = lVar11;
      puVar1 = (undefined8 *)(lVar8 + _DAT_113078568);
      *puVar1 = uVar9;
      puVar1[1] = lVar10;
      puVar1 = (undefined8 *)(lVar8 + _DAT_113078570);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(byte *)(lVar8 + _DAT_113078578) = bVar4 & 1;
      *(undefined8 *)(lVar8 + _DAT_113078580) = uStack_80;
      *(byte *)(lVar8 + _DAT_113078588) = bVar5 & 1;
      *(byte *)(lVar8 + _DAT_113078590) = bVar6 & 1;
      puVar7 = PTR_s_init_1125d9248;
      lStack_70 = lVar8;
      lStack_68 = param_1;
      _objc_retain(lVar11);
      _swift_bridgeObjectRetain(lVar10);
      _swift_bridgeObjectRetain(uVar12);
      _swift_bridgeObjectRetain(uVar3);
      _objc_msgSendSuper2(&lStack_70,puVar7);
    }
  }
  return;
}



/* Entry: 10442252c; end: 104422597; -[SCContextPostSnapParamsBuilder build] */

/* WARNING: Removing unreachable block (ram,0x000104422578) */

void FUN_10442252c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044222f0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104422598; end: 104422627; -[SCContextPostSnapParamsBuilder safeBuildAndReturnError:] */

/* WARNING: Removing unreachable block (ram,0x0001044225d4) */
/* WARNING: Removing unreachable block (ram,0x000104422608) */
/* WARNING: Removing unreachable block (ram,0x0001044225d8) */

void FUN_104422598(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044222f0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104422628; end: 1044226d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104422628(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_113078598) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130785a0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130785a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130785b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_1130785b8) = 2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130785c0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_1130785c8) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_1130785d0) = 2;
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044226d4; end: 1044226f3; -[SCContextPostSnapParamsBuilder init] */

void FUN_1044226d4(void)

{
  FUN_104422628();
  return;
}



/* Entry: 1044226f4; end: 1044226f7;  */

void FUN_1044226f4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044226f8; end: 104422757; -[SCContextPostSnapParamsBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044226f8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113078598));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130785a0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130785a8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130785b0 + 8))
  ;
  return;
}



/* Entry: 104422758; end: 10442278b;  */

void FUN_104422758(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10442278c; end: 1044227eb; -[SCContextPostSnapParams .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442278c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113078558));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113078560));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113078568 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113078570 + 8))
  ;
  return;
}



/* Entry: 1044227ec; end: 104422a2f;  */

uint FUN_1044227ec(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar9 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar9 == uVar2) {
    if (uVar9 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104422a30);
          (*pcVar1)();
        }
        FUN_104424364(0);
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar12 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar10 = (ulong *)(param_1 + 0x20);
          puVar11 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar9 = uVar9 - 1;
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1044229d0);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1044229d4);
              (*pcVar1)();
            }
            uVar5 = *puVar10;
            uVar7 = *puVar11;
            _objc_retain();
            _objc_retain(uVar7);
            uVar2 = uVar5;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar7);
            uVar8 = (uint)uVar2;
            _objc_release(uVar5);
            _objc_release(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar12 = lVar12 + -1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar9 != 0);
        }
        else {
          lVar12 = 4;
          do {
            uVar9 = uVar9 - 1;
            uVar2 = lVar12 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1044229d8);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar12 * 8);
              _objc_retain();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_1044228f8;
LAB_1044228c8:
              FUN_104422a30(uVar2,param_2);
            }
            else {
              uVar3 = uVar2;
              FUN_104422a30(uVar2,param_1);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_1044228c8;
LAB_1044228f8:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1044229dc);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar12 * 8);
              _objc_retain(uVar2);
            }
            uVar4 = uVar3;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar3,uVar2);
            uVar8 = (uint)uVar4;
            _objc_release(uVar3);
            _objc_release(uVar2);
          } while (((uVar4 & 1) != 0) && (lVar12 = lVar12 + 1, uVar9 != 0));
        }
        goto LAB_104422a08;
      }
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
LAB_104422a08:
  return uVar8 & 1;
}



/* Entry: 104422a30; end: 104422bcb;  */

ulong FUN_104422a30(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104422b00);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104422b04);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_104424364(0);
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
    FUN_104424364(0);
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
  __sSS6appendyySSF(0xd000000000000019,0x800000010f1fd6e0);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar4 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104422bcc);
  (*pcVar2)();
}



/* Entry: 104422bcc; end: 104422c03;  */

void FUN_104422bcc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_104422c04();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 104422c04; end: 104422d27;  */

undefined * FUN_104422c04(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104422d28);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_104422e4c();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_104424364(0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 104422d28; end: 104422e4b;  */

undefined * FUN_104422d28(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104422e4c);
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
    puVar3 = (undefined *)0x113078628;
    func_0x0001000285a8(0x113078628,&UNK_10dcfcb48);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x38) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&UNK_11076cd90);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x38 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x38);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 104422e4c; end: 104422ea7;  */

void FUN_104422e4c(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_104424364();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x113078630;
  plVar5 = (long *)&UNK_10dcfcb58;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 104422ea8; end: 10442314b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104422ea8(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long unaff_x20;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _swift_getObjectType();
  lVar11 = *param_1;
  if (lVar11 == 0) {
    puStack_70 = (undefined *)0x0;
  }
  else {
    lVar14 = *(long *)(lVar11 + 0x10);
    puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar14 != 0) {
      FUN_104422bcc(0,lVar14,0);
      puVar13 = puStack_70;
      lVar9 = 0;
      FUN_104424364();
      puVar12 = (undefined8 *)(lVar11 + 0x28);
      do {
        uVar1 = puVar12[-1];
        uVar5 = *puVar12;
        uVar2 = puVar12[1];
        uVar6 = puVar12[2];
        uVar3 = puVar12[3];
        uVar7 = puVar12[4];
        uVar15 = puVar12[5];
        lVar11 = lVar9;
        _objc_allocWithZone();
        *(undefined8 *)(lVar11 + _DAT_113078638) = uVar1;
        *(undefined8 *)(lVar11 + _DAT_113078640) = uVar5;
        *(undefined8 *)(lVar11 + _DAT_113078648) = uVar2;
        *(undefined8 *)(lVar11 + _DAT_113078650) = uVar6;
        *(undefined8 *)(lVar11 + _DAT_113078658) = uVar3;
        *(undefined8 *)(lVar11 + _DAT_113078660) = uVar7;
        *(undefined8 *)(lVar11 + _DAT_113078668) = uVar15;
        puVar8 = PTR_s_init_1125d9248;
        lStack_b0 = lVar11;
        lStack_a8 = lVar9;
        _objc_retain(uVar1);
        _objc_retain(uVar5);
        _objc_retain(uVar2);
        _objc_retain(uVar6);
        _objc_retain(uVar3);
        plVar10 = &lStack_b0;
        _objc_msgSendSuper2(plVar10,puVar8);
        uVar4 = *(ulong *)(puVar13 + 0x10);
        puStack_70 = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar4) {
          FUN_104422bcc(1 < *(ulong *)(puVar13 + 0x18),uVar4 + 1,1);
        }
        puVar12 = puVar12 + 7;
        *(ulong *)(puStack_70 + 0x10) = uVar4 + 1;
        *(long **)(puStack_70 + uVar4 * 8 + 0x20) = plVar10;
        lVar14 = lVar14 + -1;
        puVar13 = puStack_70;
      } while (lVar14 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_113078558) = puStack_70;
  *(long *)(unaff_x20 + _DAT_113078560) = param_1[1];
  lStack_68 = param_1[3];
  puStack_70 = (undefined *)param_1[2];
  lStack_78 = param_1[5];
  lStack_80 = param_1[4];
  plVar10 = (long *)(unaff_x20 + _DAT_113078568);
  plVar10[1] = lStack_68;
  *plVar10 = (long)puStack_70;
  plVar10 = (long *)(unaff_x20 + _DAT_113078570);
  plVar10[1] = lStack_78;
  *plVar10 = lStack_80;
  *(char *)(unaff_x20 + _DAT_113078578) = (char)param_1[6];
  *(long *)(unaff_x20 + _DAT_113078580) = param_1[7];
  *(char *)(unaff_x20 + _DAT_113078588) = (char)param_1[8];
  *(undefined1 *)(unaff_x20 + _DAT_113078590) = *(undefined1 *)((long)param_1 + 0x41);
  _objc_retain();
  func_0x000100402194(&puStack_70,auStack_90);
  func_0x0001044238d8(&lStack_80,auStack_90,0x112d35ff8,&UNK_10d900cd0);
  _objc_msgSendSuper2(auStack_a0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10442314c; end: 10442317f;  */

undefined8 FUN_10442314c(undefined8 param_1)

{
  (*(code *)(undefined *)0x1044213c0)();
  return param_1;
}



/* Entry: 104423180; end: 104423513;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104423180(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar10 = *(ulong *)(param_2 + _DAT_113078558);
  if (uVar10 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    if (uVar10 >> 0x3e == 0) {
      uVar11 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar11 = uVar10;
      if (-1 < (long)uVar10) {
        uVar11 = uVar10 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar11 != 0) {
      func_0x000104422be8(0,uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104423514);
        (*pcVar5)();
      }
      if ((uVar10 & 0xc000000000000001) == 0) {
        plVar8 = (long *)(uVar10 + 0x20);
        do {
          lVar9 = *plVar8;
          uVar14 = *(undefined8 *)(lVar9 + _DAT_113078638);
          uVar16 = *(undefined8 *)(lVar9 + _DAT_113078640);
          uVar17 = *(undefined8 *)(lVar9 + _DAT_113078648);
          uVar18 = *(undefined8 *)(lVar9 + _DAT_113078650);
          uVar19 = *(undefined8 *)(lVar9 + _DAT_113078658);
          uVar7 = *(undefined8 *)(lVar9 + _DAT_113078660);
          uVar13 = *(undefined8 *)(lVar9 + _DAT_113078668);
          uVar10 = *(ulong *)(puVar12 + 0x10);
          uVar15 = *(ulong *)(puVar12 + 0x18);
          _objc_retain(uVar14);
          _objc_retain(uVar16);
          _objc_retain(uVar17);
          _objc_retain(uVar18);
          _objc_retain(uVar19);
          if (uVar15 >> 1 <= uVar10) {
            func_0x000104422be8(1 < uVar15,uVar10 + 1,1);
          }
          *(ulong *)(puVar12 + 0x10) = uVar10 + 1;
          *(undefined8 *)(puVar12 + uVar10 * 0x38 + 0x20) = uVar14;
          *(undefined8 *)(puVar12 + uVar10 * 0x38 + 0x28) = uVar16;
          *(undefined8 *)(puVar12 + uVar10 * 0x38 + 0x30) = uVar17;
          *(undefined8 *)(puVar12 + uVar10 * 0x38 + 0x38) = uVar18;
          *(undefined8 *)(puVar12 + uVar10 * 0x38 + 0x40) = uVar19;
          *(undefined8 *)(puVar12 + uVar10 * 0x38 + 0x48) = uVar7;
          *(undefined8 *)(puVar12 + uVar10 * 0x38 + 0x50) = uVar13;
          uVar11 = uVar11 - 1;
          plVar8 = plVar8 + 1;
        } while (uVar11 != 0);
      }
      else {
        uVar15 = 0;
        do {
          uVar6 = uVar15;
          FUN_104422a30(uVar15,uVar10);
          uVar16 = *(undefined8 *)(uVar6 + _DAT_113078638);
          uVar17 = *(undefined8 *)(uVar6 + _DAT_113078640);
          uVar18 = *(undefined8 *)(uVar6 + _DAT_113078648);
          uVar19 = *(undefined8 *)(uVar6 + _DAT_113078650);
          uVar13 = *(undefined8 *)(uVar6 + _DAT_113078658);
          uVar7 = *(undefined8 *)(uVar6 + _DAT_113078660);
          uVar14 = *(undefined8 *)(uVar6 + _DAT_113078668);
          _objc_retain(uVar13);
          _objc_retain(uVar16);
          _objc_retain(uVar17);
          _objc_retain(uVar18);
          _objc_retain(uVar19);
          _swift_unknownObjectRelease(uVar6);
          uVar6 = *(ulong *)(puVar12 + 0x10);
          if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar6) {
            func_0x000104422be8(1 < *(ulong *)(puVar12 + 0x18),uVar6 + 1,1);
          }
          uVar15 = uVar15 + 1;
          *(ulong *)(puVar12 + 0x10) = uVar6 + 1;
          *(undefined8 *)(puVar12 + uVar6 * 0x38 + 0x20) = uVar16;
          *(undefined8 *)(puVar12 + uVar6 * 0x38 + 0x28) = uVar17;
          *(undefined8 *)(puVar12 + uVar6 * 0x38 + 0x30) = uVar18;
          *(undefined8 *)(puVar12 + uVar6 * 0x38 + 0x38) = uVar19;
          *(undefined8 *)(puVar12 + uVar6 * 0x38 + 0x40) = uVar13;
          *(undefined8 *)(puVar12 + uVar6 * 0x38 + 0x48) = uVar7;
          *(undefined8 *)(puVar12 + uVar6 * 0x38 + 0x50) = uVar14;
        } while (uVar11 != uVar15);
      }
    }
  }
  uVar14 = *(undefined8 *)(param_2 + _DAT_113078560);
  uVar7 = *(undefined8 *)(param_2 + _DAT_113078568);
  uVar13 = ((undefined8 *)(param_2 + _DAT_113078568))[1];
  uVar2 = *(undefined1 *)(param_2 + _DAT_113078578);
  uVar16 = *(undefined8 *)(param_2 + _DAT_113078580);
  uVar3 = *(undefined1 *)(param_2 + _DAT_113078588);
  uVar4 = *(undefined1 *)(param_2 + _DAT_113078590);
  puVar1 = (undefined8 *)(param_2 + _DAT_113078570);
  *param_1 = puVar12;
  param_1[1] = uVar14;
  param_1[2] = uVar7;
  param_1[3] = uVar13;
  uVar7 = puVar1[1];
  uVar14 = *puVar1;
  param_1[5] = puVar1[1];
  param_1[4] = uVar14;
  *(undefined1 *)(param_1 + 6) = uVar2;
  param_1[7] = uVar16;
  *(undefined1 *)(param_1 + 8) = uVar3;
  *(undefined1 *)((long)param_1 + 0x41) = uVar4;
  _objc_retain();
  _swift_bridgeObjectRetain(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar7);
  return;
}



/* Entry: 104423514; end: 10442369f;  */

/* WARNING: Possible PIC construction at 0x000104423548: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010442354c) */

void FUN_104423514(long param_1)

{
  if (param_1 == 0) {
    func_0x000104423878();
    _objc_allocWithZone();
  }
  else {
    func_0x000104423878();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1044236a0; end: 104423857;  */

undefined * FUN_1044236a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar6 = auStack_90;
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  __ss11_StringGutsV4growyySiF(0x33);
  __sSS6appendyySSF(0xd000000000000027,0x800000010f11f8b0);
  __sSS6appendyySSF(param_1,param_2);
  __sSS6appendyySSF(0x736e752073692027,0xea00000000007465);
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0xe000000000000000;
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  _swift_setDeallocating(lVar2);
  FUN_104423898((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f11f880);
  lVar2 = lVar4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(lVar4);
  func_0x00010c00e2e0(puVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  return puVar5;
}



/* Entry: 104423858; end: 104423897;  */

void FUN_104423858(void)

{
  _objc_opt_self(&PTR_PTR_1129b18d8);
  return;
}



/* Entry: 104423898; end: 10442391f;  */

undefined8 FUN_104423898(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 104423920; end: 104423923;  */

void FUN_104423920(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104423924; end: 104423963;  */

undefined8 FUN_104423924(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_10442416c(param_1);
  func_0x000104421694(param_1);
  return uVar1;
}



/* Entry: 104423964; end: 104423973; -[SCContextPostSnapAction action] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104423964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113078638));
  return;
}



/* Entry: 104423974; end: 104423983; -[SCContextPostSnapAction localizedText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104423974(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113078640));
  return;
}



/* Entry: 104423984; end: 104423993; -[SCContextPostSnapAction icon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104423984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113078648));
  return;
}



/* Entry: 104423994; end: 1044239a3; -[SCContextPostSnapAction secondaryText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104423994(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113078650));
  return;
}



/* Entry: 1044239a4; end: 1044239b3; -[SCContextPostSnapAction secondaryIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044239a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113078658));
  return;
}



/* Entry: 1044239b4; end: 1044239c3; -[SCContextPostSnapAction actionType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044239b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078660);
}



/* Entry: 1044239c4; end: 1044239d3; -[SCContextPostSnapAction styleType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044239c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078668);
}



/* Entry: 1044239d4; end: 104423a97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044239d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113078638) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113078640) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113078648) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113078650) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113078658) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113078660) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113078668) = param_7;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104423a98; end: 104423b87; -[SCContextPostSnapAction initWithAction:localizedText:icon:secondaryText:secondaryIcon:actionType:styleType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104423a98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113078638) = param_3;
  *(undefined8 *)(param_1 + _DAT_113078640) = param_4;
  *(undefined8 *)(param_1 + _DAT_113078648) = param_5;
  *(undefined8 *)(param_1 + _DAT_113078650) = param_6;
  *(undefined8 *)(param_1 + _DAT_113078658) = param_7;
  *(undefined8 *)(param_1 + _DAT_113078660) = param_8;
  *(undefined8 *)(param_1 + _DAT_113078668) = param_9;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_msgSendSuper2(&lStack_60,puVar1);
  return;
}



/* Entry: 104423b88; end: 104423bbb; -[SCContextPostSnapAction hash] */

undefined8 FUN_104423b88(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104423bbc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104423bbc; end: 104423d93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104423bbc(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_118 [72];
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  lVar1 = *(long *)(unaff_x20 + _DAT_113078638);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_113078640);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_113078648);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_118);
    FUN_104425514();
    __ss6HasherV8_combineyySuF();
    uVar2 = *(undefined8 *)(lVar1 + _DAT_1130786b8);
    __ss6HasherV8_combineyySuF(uVar2);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_113078650);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_113078658);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_d0);
    FUN_104425514();
    __ss6HasherV8_combineyySuF();
    uVar2 = *(undefined8 *)(lVar1 + _DAT_1130786b8);
    __ss6HasherV8_combineyySuF(uVar2);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113078660));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113078668));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104423d94; end: 104423fcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104423d94(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_88;
  long alStack_80 [4];
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  FUN_104424384(param_1,alStack_80,0x112d387f8,&UNK_10d902650);
  if (alStack_80[3] == 0) {
    func_0x00010006e7f4(alStack_80);
  }
  else {
    plVar7 = &lStack_88;
    _swift_dynamicCast(plVar7,alStack_80,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar7 & 1) != 0) {
      lVar8 = *(long *)(unaff_x20 + _DAT_113078638);
      if (lVar8 == 0) {
        uVar2 = (uint)(*(long *)(lStack_88 + _DAT_113078638) == 0);
      }
      else {
        func_0x00010c071ae0();
        uVar2 = (uint)lVar8;
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_113078640);
      if (lVar8 == 0) {
        uVar3 = (uint)(*(long *)(lStack_88 + _DAT_113078640) == 0);
      }
      else {
        func_0x00010c071ae0();
        uVar3 = (uint)lVar8;
      }
      if (*(long *)(unaff_x20 + _DAT_113078648) == 0) {
        uVar4 = (uint)(*(long *)(lStack_88 + _DAT_113078648) == 0);
      }
      else {
        lVar8 = *(long *)(lStack_88 + _DAT_113078648);
        if (lVar8 == 0) {
          lVar9 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar9 = 0;
          FUN_1044254f0();
        }
        alStack_80[0] = lVar8;
        alStack_80[3] = lVar9;
        _objc_retain(lVar8);
        plVar7 = alStack_80;
        FUN_1044251e8(plVar7);
        uVar4 = (uint)plVar7;
        func_0x00010006e7f4(alStack_80);
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_113078650);
      if (lVar8 == 0) {
        uVar5 = (uint)(*(long *)(lStack_88 + _DAT_113078650) == 0);
      }
      else {
        func_0x00010c071ae0();
        uVar5 = (uint)lVar8;
      }
      if (*(long *)(unaff_x20 + _DAT_113078658) == 0) {
        uVar6 = (uint)(*(long *)(lStack_88 + _DAT_113078658) == 0);
      }
      else {
        lVar8 = *(long *)(lStack_88 + _DAT_113078658);
        if (lVar8 == 0) {
          lVar9 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar9 = 0;
          FUN_1044254f0();
        }
        alStack_80[0] = lVar8;
        alStack_80[3] = lVar9;
        _objc_retain(lVar8);
        plVar7 = alStack_80;
        FUN_1044251e8(plVar7);
        uVar6 = (uint)plVar7;
        func_0x00010006e7f4(alStack_80);
      }
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_113078660);
      uVar12 = *(undefined8 *)(lStack_88 + _DAT_113078660);
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_113078668);
      uVar13 = *(undefined8 *)(lStack_88 + _DAT_113078668);
      _objc_release(lStack_88);
      uVar1 = 0;
      if ((int)uVar11 == (int)uVar12) {
        uVar1 = uVar2 & uVar3 & uVar4 & uVar5 & uVar6;
      }
      if ((int)uVar10 != (int)uVar13) {
        return 0;
      }
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 104423fd0; end: 10442404f; -[SCContextPostSnapAction isEqual:] */

uint FUN_104423fd0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104423d94(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104424050; end: 104424053; -[SCContextPostSnapAction copyWithZone:] */

void FUN_104424050(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104424054; end: 104424087; -[SCContextPostSnapAction description] */

void FUN_104424054(void)

{
  undefined1 auStack_48 [56];
  
  FUN_1044242bc(auStack_48);
  func_0x000104421694(auStack_48);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104424088; end: 104424103; -[SCContextPostSnapAction init] */

void FUN_104424088(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCContextPostSnapDataServices/SCContextPostSnapActionWrapper.swift",0x42,2,0x5f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044240d0);
  (*pcVar1)();
}



/* Entry: 104424104; end: 10442416b; -[SCContextPostSnapAction .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104424104(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113078638));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113078640));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113078648));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113078650));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113078658));
  return;
}



/* Entry: 10442416c; end: 1044242bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442416c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _swift_getObjectType();
  uStack_48 = *param_1;
  uStack_50 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_113078638) = uStack_48;
  *(undefined8 *)(unaff_x20 + _DAT_113078640) = uStack_50;
  uStack_58 = param_1[2];
  uStack_60 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_113078648) = uStack_58;
  *(undefined8 *)(unaff_x20 + _DAT_113078650) = uStack_60;
  uStack_68 = param_1[4];
  uVar1 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_113078658) = uStack_68;
  *(undefined8 *)(unaff_x20 + _DAT_113078660) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_113078668) = param_1[6];
  FUN_104424384(&uStack_48,auStack_70,0x112f4eb48,&UNK_10dba1750);
  FUN_104424384(&uStack_50,auStack_70,0x113078698,&UNK_10dcfcb88);
  FUN_104424384(&uStack_58,auStack_70,0x1130786a0,&UNK_10dcfcb90);
  FUN_104424384(&uStack_60,auStack_70,0x113078698,&UNK_10dcfcb88);
  FUN_104424384(&uStack_68,auStack_70,0x1130786a0,&UNK_10dcfcb90);
  _objc_msgSendSuper2(&stack0xffffffffffffff80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044242bc; end: 104424363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044242bc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_113078638);
  uVar4 = *(undefined8 *)(param_2 + _DAT_113078640);
  uVar5 = *(undefined8 *)(param_2 + _DAT_113078648);
  uVar6 = *(undefined8 *)(param_2 + _DAT_113078650);
  uVar7 = *(undefined8 *)(param_2 + _DAT_113078658);
  uVar2 = *(undefined8 *)(param_2 + _DAT_113078660);
  uVar3 = *(undefined8 *)(param_2 + _DAT_113078668);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  param_1[4] = uVar7;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  _objc_retain(uVar1);
  _objc_retain(uVar4);
  _objc_retain(uVar5);
  _objc_retain(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar7);
  return;
}



/* Entry: 104424364; end: 104424383;  */

void FUN_104424364(void)

{
  _objc_opt_self(&PTR_PTR_1129b1ac8);
  return;
}



/* Entry: 104424384; end: 104424467;  */

undefined8 FUN_104424384(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104424468; end: 10442452f;  */

/* WARNING: Possible PIC construction at 0x000104424514: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104424518) */

void FUN_104424468(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_6 >> 0x3c) & 3 | (param_7 & 0x3f) << 2;
  if (uVar1 < 3) {
    if ((uVar1 == 1) || (uVar1 == 2)) goto LAB_1044244e0;
  }
  else {
    if (uVar1 == 3) {
      _swift_bridgeObjectRetain(param_4);
LAB_1044244e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
      return;
    }
    if (uVar1 == 4) {
      _swift_bridgeObjectRetain(param_2);
      uVar1 = (uint)(param_4 >> 0x3e);
      if (uVar1 != 1) {
        if (uVar1 != 2) {
          return;
        }
        func_0x000107c6157c(param_3);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_retain_11034f4d0)(param_4 & 0x3fffffffffffffff);
      return;
    }
    if (uVar1 == 5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)();
      return;
    }
  }
  return;
}



/* Entry: 104424530; end: 104424547;  */

/* WARNING: Possible PIC construction at 0x0001044245ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001044245f0) */

void FUN_104424530(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = param_1[1];
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = (uint)((ulong)param_1[5] >> 0x3c) & 3 | (*(byte *)(param_1 + 6) & 0x3f) << 2;
  if (uVar4 < 3) {
    if ((uVar4 == 1) || (uVar4 == 2)) goto LAB_1044245bc;
  }
  else {
    if (uVar4 == 3) {
      _swift_bridgeObjectRelease(uVar3);
      uVar3 = uVar2;
LAB_1044245bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
      return;
    }
    if (uVar4 == 4) {
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = (uint)(uVar2 >> 0x3e);
      if (uVar4 != 1) {
        if (uVar4 != 2) {
          return;
        }
        func_0x000107c61574(uVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(uVar2 & 0x3fffffffffffffff);
      return;
    }
    if (uVar4 == 5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(*param_1);
      return;
    }
  }
  return;
}



/* Entry: 104424548; end: 104424617;  */

/* WARNING: Possible PIC construction at 0x0001044245ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001044245f0) */

void FUN_104424548(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_6 >> 0x3c) & 3 | (param_7 & 0x3f) << 2;
  if (uVar1 < 3) {
    if ((uVar1 == 1) || (uVar1 == 2)) goto LAB_1044245bc;
  }
  else {
    if (uVar1 == 3) {
      _swift_bridgeObjectRelease(param_2);
      param_2 = param_4;
LAB_1044245bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
      return;
    }
    if (uVar1 == 4) {
      _swift_bridgeObjectRelease(param_2);
      uVar1 = (uint)(param_4 >> 0x3e);
      if (uVar1 != 1) {
        if (uVar1 != 2) {
          return;
        }
        func_0x000107c61574(param_3);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(param_4 & 0x3fffffffffffffff);
      return;
    }
    if (uVar1 == 5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
  }
  return;
}



/* Entry: 104424618; end: 104424743;  */

undefined8 * FUN_104424618(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = *(undefined1 *)(param_2 + 6);
  FUN_104424468(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  *(undefined1 *)(param_1 + 6) = uVar7;
  param_1[7] = param_2[7];
  return param_1;
}



/* Entry: 104424744; end: 10442479f;  */

undefined8 * FUN_104424744(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *(undefined1 *)(param_2 + 6);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar8 = param_1[5];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  uVar6 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar5;
  FUN_104424548(uVar7,uVar1,uVar3,uVar2,uVar4,uVar8,uVar6);
  param_1[7] = param_2[7];
  return param_1;
}



/* Entry: 1044247a0; end: 104424877;  */

int FUN_1044247a0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3fa < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0x3fb;
  }
  uVar1 = ((uint)((ulong)*(undefined8 *)(param_1 + 10) >> 0x3c) & 3 |
          (uint)*(byte *)(param_1 + 0xc) << 2) ^ 0x3ff;
  if (0x3f9 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104424878; end: 1044248cf;  */

uint FUN_104424878(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1044248d0(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1044248d0; end: 104424b63;  */

/* WARNING: Possible PIC construction at 0x0001044249d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001044249dc) */
/* WARNING: Removing unreachable block (ram,0x0001044249e0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1044248d0(undefined8 *param_1,int *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  long lVar21;
  byte *pbVar22;
  undefined8 uVar23;
  byte *pbVar24;
  byte *pbVar25;
  long lVar26;
  byte *pbVar27;
  undefined8 uVar28;
  undefined1 *puVar29;
  undefined8 uVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  undefined1 auVar47 [16];
  
  puVar29 = &stack0xfffffffffffffff0;
  pbVar11 = (byte *)*param_1;
  pbVar13 = (byte *)param_1[1];
  pbVar10 = (byte *)param_1[2];
  pbVar27 = (byte *)param_1[5];
  uVar4 = (uint)((ulong)pbVar27 >> 0x3c) & 3 | (*(byte *)(param_1 + 6) & 0x3f) << 2;
  if (uVar4 < 3) {
    if (uVar4 == 0) {
      if (((uint)((ulong)*(undefined8 *)(param_2 + 10) >> 0x3c) & 3) == 0 &&
          (*(byte *)(param_2 + 0xc) & 0x3f) == 0) {
        return (byte *)(ulong)((int)pbVar11 == *param_2);
      }
    }
    else if (uVar4 == 1) {
      if (((uint)((ulong)*(undefined8 *)(param_2 + 10) >> 0x3c) & 3 |
          (*(byte *)(param_2 + 0xc) & 0x3f) << 2) == 1) {
        pbVar14 = *(byte **)param_2;
        pbVar27 = *(byte **)(param_2 + 2);
        if ((pbVar11 == pbVar14) && (pbVar13 == pbVar27)) {
          return (byte *)0x1;
        }
code_r0x00010bdb99d8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
        )(pbVar11,pbVar13,pbVar14,pbVar27,0);
        return pbVar11;
      }
    }
    else if (((uint)((ulong)*(undefined8 *)(param_2 + 10) >> 0x3c) & 3 |
             (*(byte *)(param_2 + 0xc) & 0x3f) << 2) == 2) {
      pbVar27 = *(byte **)(param_2 + 4);
      if (((pbVar11 == *(byte **)param_2) && (pbVar13 == *(byte **)(param_2 + 2))) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), ((ulong)pbVar11 & 1) != 0)) {
        return (byte *)(ulong)(pbVar10 == pbVar27);
      }
    }
  }
  else {
    pbVar22 = (byte *)param_1[3];
    if (uVar4 == 3) {
      if (((uint)((ulong)*(undefined8 *)(param_2 + 10) >> 0x3c) & 3 |
          (*(byte *)(param_2 + 0xc) & 0x3f) << 2) == 3) {
        pbVar27 = *(byte **)(param_2 + 4);
        pbVar24 = *(byte **)(param_2 + 6);
        if (((pbVar11 == *(byte **)param_2) && (pbVar13 == *(byte **)(param_2 + 2))) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), ((ulong)pbVar11 & 1) != 0)) {
          if (pbVar22 == (byte *)0x0) {
            if (pbVar24 == (byte *)0x0) {
              return (byte *)0x1;
            }
          }
          else if ((pbVar24 != (byte *)0x0) &&
                  (((pbVar10 == pbVar27 && (pbVar22 == pbVar24)) ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (pbVar10,pbVar22,pbVar27,pbVar24,0), ((ulong)pbVar10 & 1) != 0)))) {
            return (byte *)0x1;
          }
        }
      }
    }
    else if (uVar4 == 4) {
      uVar28 = *(undefined8 *)(param_2 + 10);
      if (((uint)((ulong)uVar28 >> 0x3c) & 3 | (*(byte *)(param_2 + 0xc) & 0x3f) << 2) == 4) {
        uVar23 = param_1[4];
        pbVar9 = *(byte **)(param_2 + 4);
        pbVar14 = *(byte **)(param_2 + 6);
        pbVar24 = *(byte **)(param_2 + 8);
        if (((pbVar11 == *(byte **)param_2) && (pbVar13 == *(byte **)(param_2 + 2))) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), ((ulong)pbVar11 & 1) != 0)) {
          uVar30 = 0x1044249dc;
          puVar7 = &stack0xffffffffffffffb0;
          pbVar20 = pbVar10;
          pbVar11 = pbVar22;
          pbVar25 = pbVar9;
          pbVar13 = pbVar14;
          do {
            *(undefined8 *)(puVar7 + -0x50) = uVar28;
            *(byte **)(puVar7 + -0x48) = pbVar27;
            *(byte **)(puVar7 + -0x40) = pbVar13;
            *(byte **)(puVar7 + -0x38) = pbVar25;
            *(byte **)(puVar7 + -0x30) = pbVar24;
            *(undefined8 *)(puVar7 + -0x28) = uVar23;
            *(byte **)(puVar7 + -0x20) = pbVar11;
            *(byte **)(puVar7 + -0x18) = pbVar20;
            *(undefined1 **)(puVar7 + -0x10) = puVar29;
            *(undefined8 *)(puVar7 + -8) = uVar30;
            *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            uVar4 = (uint)((ulong)pbVar22 >> 0x20);
            uVar15 = uVar4 >> 0x1e;
            uVar5 = (uint)((ulong)pbVar14 >> 0x20);
            uVar18 = uVar5 >> 0x1e;
            iVar8 = (int)pbVar10;
            pbVar12 = pbVar22;
            if ((ulong)pbVar22 >> 0x3e == 3) {
              uVar17 = 0;
              if ((((pbVar10 != (byte *)0x0) || (pbVar22 != (byte *)0xc000000000000000)) ||
                  ((ulong)pbVar14 >> 0x3e < 3)) ||
                 ((uVar17 = 0, pbVar9 != (byte *)0x0 || (pbVar14 != (byte *)0xc000000000000000))))
              goto joined_r0x000100e26170;
code_r0x000100e26128:
              pbVar9 = (byte *)0x1;
            }
            else if (uVar4 >> 0x1e < 2) {
              if (uVar15 == 0) {
                uVar17 = (ulong)pbVar22 >> 0x30 & 0xff;
              }
              else {
                iVar16 = (int)((ulong)pbVar10 >> 0x20);
                if (SBORROW4(iVar16,iVar8)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                  (*pcVar6)();
                }
                uVar17 = (ulong)(iVar16 - iVar8);
              }
joined_r0x000100e26170:
              if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
              if (uVar18 == 0) {
                uVar19 = (ulong)pbVar14 >> 0x30 & 0xff;
                goto code_r0x000100e2608c;
              }
              iVar16 = (int)((ulong)pbVar9 >> 0x20);
              if (SBORROW4(iVar16,(int)pbVar9)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar6)();
              }
              if (uVar17 == (long)(iVar16 - (int)pbVar9)) goto code_r0x000100e26094;
code_r0x000100e26154:
              pbVar9 = (byte *)0x0;
            }
            else {
              if (uVar15 == 2) {
                uVar17 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
                if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                  (*pcVar6)();
                }
                goto joined_r0x000100e26170;
              }
              uVar17 = 0;
              if (uVar18 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
              if (uVar18 == 2) {
                uVar19 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
                if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                  (*pcVar6)();
                }
code_r0x000100e2608c:
                if (uVar17 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
                if ((long)uVar17 < 1) goto code_r0x000100e26128;
                if (uVar15 < 2) {
                  if (uVar15 == 0) {
                    puVar7[-0x70] = (char)pbVar10;
                    puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                    puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                    puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                    puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                    puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                    puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                    puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                    puVar7[-0x68] = (char)pbVar22;
                    puVar7[-0x67] = (char)((ulong)pbVar22 >> 8);
                    puVar7[-0x66] = (char)((ulong)pbVar22 >> 0x10);
                    puVar7[-0x65] = (char)((ulong)pbVar22 >> 0x18);
                    puVar7[-100] = (char)((ulong)pbVar22 >> 0x20);
                    puVar7[-99] = (char)((ulong)pbVar22 >> 0x28);
                    pbVar12 = puVar7 + (((ulong)pbVar22 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                    uVar23 = 0;
                    func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                    pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                    goto code_r0x000100e262b0;
                  }
                  pbVar27 = (byte *)(long)iVar8;
                  pbVar25 = (byte *)(((long)pbVar10 >> 0x20) - (long)pbVar27);
                  if ((long)pbVar10 >> 0x20 < (long)pbVar27) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                    (*pcVar6)();
                  }
                  func_0x000107c5ec30();
                  pbVar13 = pbVar22;
                  if (pbVar10 == (byte *)0x0) {
                    func_0x000107c5ec38();
                    pbVar10 = (byte *)0x0;
                  }
                  else {
                    pbVar12 = pbVar10;
                    func_0x000107c5ec3c();
                    if (SBORROW8((long)pbVar27,(long)pbVar12)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + ((long)pbVar27 - (long)pbVar12);
                    func_0x000107c5ec38();
                    pbVar20 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      if ((long)pbVar25 <= (long)pbVar12) {
                        pbVar12 = pbVar25;
                      }
                      pbVar12 = pbVar12 + (long)pbVar10;
                      goto code_r0x000100e262a4;
                    }
                  }
                  pbVar12 = (byte *)0x0;
                }
                else {
                  if (uVar15 != 2) {
                    *(undefined8 *)(puVar7 + -0x6a) = 0;
                    *(undefined8 *)(puVar7 + -0x70) = 0;
                    pbVar12 = puVar7 + -0x70;
                    goto code_r0x000100e26260;
                  }
                  lVar21 = *(long *)(pbVar10 + 0x10);
                  pbVar13 = *(byte **)(pbVar10 + 0x18);
                  func_0x000107c5ec30();
                  pbVar12 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar21,(long)pbVar12)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + (lVar21 - (long)pbVar12);
                  }
                  pbVar25 = pbVar13 + -lVar21;
                  if (SBORROW8((long)pbVar13,lVar21)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                    (*pcVar6)();
                  }
                  func_0x000107c5ec38();
                  pbVar20 = pbVar10;
                  pbVar27 = pbVar22;
                  if (pbVar10 == (byte *)0x0) {
                    pbVar12 = (byte *)0x0;
                  }
                  else {
                    if ((long)pbVar25 <= (long)pbVar12) {
                      pbVar12 = pbVar25;
                    }
                    pbVar12 = pbVar12 + (long)pbVar10;
                  }
                }
code_r0x000100e262a4:
                pbVar11 = (byte *)((ulong)pbVar22 & 0x3fffffffffffffff);
                uVar23 = 0;
                func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar12,pbVar9,pbVar14);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                pbVar24 = pbVar14;
              }
              else {
                pbVar9 = (byte *)(ulong)(uVar17 == 0);
              }
            }
code_r0x000100e262b0:
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
              return pbVar9;
            }
            func_0x000107c60e78();
            *(byte **)(puVar7 + -0xc0) = pbVar13;
            *(byte **)(puVar7 + -0xb8) = pbVar25;
            *(byte **)(puVar7 + -0xb0) = pbVar24;
            *(undefined8 *)(puVar7 + -0xa8) = uVar23;
            *(byte **)(puVar7 + -0xa0) = pbVar11;
            *(byte **)(puVar7 + -0x98) = pbVar20;
            *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
            *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
            pbVar11 = *(byte **)pbVar9;
            pbVar10 = *(byte **)(pbVar9 + 8);
            pbVar24 = *(byte **)(pbVar9 + 0x18);
            bVar31 = pbVar9[0x28];
            pbVar22 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                               (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
            pbVar13 = pbVar10;
            if (bVar31 < 3) {
              if (bVar31 == 0) {
                if (pbVar12[0x28] == 0) {
                  lVar21 = *(long *)pbVar12;
                  uVar28 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar11,lVar21,uVar28);
                  return (byte *)(ulong)((uint)pbVar11 & 1);
                }
                return (byte *)0x0;
              }
              if (bVar31 == 1) {
                if (pbVar12[0x28] != 1) {
                  return (byte *)0x0;
                }
                pbVar14 = *(byte **)(pbVar12 + 8);
                pbVar27 = *(byte **)(pbVar12 + 0x10);
                lVar21 = *(long *)pbVar12;
                uVar28 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar11,lVar21,uVar28);
                if (((ulong)pbVar11 & 1) == 0) {
                  return (byte *)0x0;
                }
                pbVar11 = pbVar10;
                pbVar13 = pbVar22;
                if ((pbVar10 == pbVar14) && (pbVar22 == pbVar27)) {
                  return (byte *)0x1;
                }
              }
              else {
                if (pbVar12[0x28] != 2) {
                  return (byte *)0x0;
                }
                pbVar14 = *(byte **)pbVar12;
                pbVar27 = *(byte **)(pbVar12 + 8);
                lVar21 = *(long *)(pbVar12 + 0x18);
                if ((pbVar11 == pbVar14) && (pbVar10 == pbVar27)) {
                  if (((pbVar9[0x10] ^ pbVar12[0x10]) & 1) != 0) {
                    return (byte *)0x0;
                  }
                  if (pbVar24 != (byte *)0x0) {
                    if (lVar21 == 0) {
                      return (byte *)0x0;
                    }
                    func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                    func_0x000107c61174(lVar21);
                    func_0x000107c61174();
                    pbVar10 = pbVar24;
                    func_0x000107c60118();
                    func_0x000107c61170(pbVar24);
                    func_0x000107c61170(lVar21);
                    pbVar24 = pbVar10;
                    goto joined_r0x000100e266a4;
                  }
joined_r0x000100e26704:
                  if (lVar21 == 0) {
                    return (byte *)0x1;
                  }
                  return (byte *)0x0;
                }
              }
              goto code_r0x00010bdb99d8;
            }
            lVar26 = *(long *)(pbVar9 + 0x20);
            if (bVar31 < 5) {
              if (bVar31 != 3) {
                if (pbVar12[0x28] != 4) {
                  return (byte *)0x0;
                }
                pbVar14 = *(byte **)pbVar12;
                pbVar27 = *(byte **)(pbVar12 + 8);
                if (((pbVar11 == pbVar14) && (pbVar10 == pbVar27)) &&
                   (pbVar11 = pbVar22, pbVar13 = pbVar24, pbVar14 = *(byte **)(pbVar12 + 0x10),
                   pbVar27 = *(byte **)(pbVar12 + 0x18),
                   pbVar22 == *(byte **)(pbVar12 + 0x10) && pbVar24 == *(byte **)(pbVar12 + 0x18)))
                {
                  return (byte *)0x1;
                }
                goto code_r0x00010bdb99d8;
              }
              if (pbVar12[0x28] != 3) {
                return (byte *)0x0;
              }
              if ((uint)*pbVar12 != ((uint)pbVar11 & 0xff)) {
                return (byte *)0x0;
              }
              pbVar27 = *(byte **)(pbVar12 + 0x10);
              lVar21 = *(long *)(pbVar12 + 0x20);
              if (pbVar22 == (byte *)0x0) {
                if (pbVar27 != (byte *)0x0) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar27 == (byte *)0x0) {
                  return (byte *)0x0;
                }
                pbVar14 = *(byte **)(pbVar12 + 8);
                pbVar11 = pbVar10;
                pbVar13 = pbVar22;
                if ((pbVar10 != pbVar14) || (pbVar22 != pbVar27)) goto code_r0x00010bdb99d8;
              }
              if (lVar26 != 0) {
                if (lVar21 == 0) {
                  return (byte *)0x0;
                }
                if ((pbVar24 == *(byte **)(pbVar12 + 0x18)) && (lVar26 == lVar21)) {
                  return (byte *)0x1;
                }
                func_0x000107c605b8(pbVar24,lVar26,*(byte **)(pbVar12 + 0x18),lVar21,0);
joined_r0x000100e266a4:
                if (((ulong)pbVar24 & 1) == 0) {
                  return (byte *)0x0;
                }
                return (byte *)0x1;
              }
              goto joined_r0x000100e26704;
            }
            if (bVar31 != 5) {
              if ((((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
                  lVar26 == 0) && pbVar22 == (byte *)0x0) {
                if (pbVar12[0x28] != 6) {
                  return (byte *)0x0;
                }
                lVar26 = *(long *)(pbVar12 + 0x20);
                lVar21 = *(long *)(pbVar12 + 0x18);
                bVar31 = pbVar12[8] | (byte)lVar21;
                bVar32 = pbVar12[9] | (byte)((ulong)lVar21 >> 8);
                bVar33 = pbVar12[10] | (byte)((ulong)lVar21 >> 0x10);
                bVar34 = pbVar12[0xb] | (byte)((ulong)lVar21 >> 0x18);
                bVar35 = pbVar12[0xc] | (byte)((ulong)lVar21 >> 0x20);
                bVar36 = pbVar12[0xd] | (byte)((ulong)lVar21 >> 0x28);
                bVar37 = pbVar12[0xe] | (byte)((ulong)lVar21 >> 0x30);
                bVar38 = pbVar12[0xf] | (byte)((ulong)lVar21 >> 0x38);
                bVar39 = pbVar12[0x10] | (byte)lVar26;
                bVar40 = pbVar12[0x11] | (byte)((ulong)lVar26 >> 8);
                bVar41 = pbVar12[0x12] | (byte)((ulong)lVar26 >> 0x10);
                bVar42 = pbVar12[0x13] | (byte)((ulong)lVar26 >> 0x18);
                bVar43 = pbVar12[0x14] | (byte)((ulong)lVar26 >> 0x20);
                bVar44 = pbVar12[0x15] | (byte)((ulong)lVar26 >> 0x28);
                bVar45 = pbVar12[0x16] | (byte)((ulong)lVar26 >> 0x30);
                bVar46 = pbVar12[0x17] | (byte)((ulong)lVar26 >> 0x38);
                auVar47[1] = bVar32;
                auVar47[0] = bVar31;
                auVar47[2] = bVar33;
                auVar47[3] = bVar34;
                auVar47[4] = bVar35;
                auVar47[5] = bVar36;
                auVar47[6] = bVar37;
                auVar47[7] = bVar38;
                auVar47[8] = bVar39;
                auVar47[9] = bVar40;
                auVar47[10] = bVar41;
                auVar47[0xb] = bVar42;
                auVar47[0xc] = bVar43;
                auVar47[0xd] = bVar44;
                auVar47[0xe] = bVar45;
                auVar47[0xf] = bVar46;
                auVar3[1] = bVar32;
                auVar3[0] = bVar31;
                auVar3[2] = bVar33;
                auVar3[3] = bVar34;
                auVar3[4] = bVar35;
                auVar3[5] = bVar36;
                auVar3[6] = bVar37;
                auVar3[7] = bVar38;
                auVar3[8] = bVar39;
                auVar3[9] = bVar40;
                auVar3[10] = bVar41;
                auVar3[0xb] = bVar42;
                auVar3[0xc] = bVar43;
                auVar3[0xd] = bVar44;
                auVar3[0xe] = bVar45;
                auVar3[0xf] = bVar46;
                auVar47 = NEON_ext(auVar47,auVar3,8,1);
                if (CONCAT17(bVar38 | auVar47[7],
                             CONCAT16(bVar37 | auVar47[6],
                                      CONCAT15(bVar36 | auVar47[5],
                                               CONCAT14(bVar35 | auVar47[4],
                                                        CONCAT13(bVar34 | auVar47[3],
                                                                 CONCAT12(bVar33 | auVar47[2],
                                                                          CONCAT11(bVar32 | auVar47[
                                                  1],bVar31 | auVar47[0]))))))) == 0 &&
                    *(long *)pbVar12 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if ((pbVar11 == (byte *)0x1) &&
                 (((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar22 == (byte *)0x0) &&
                  lVar26 == 0)) {
                if (pbVar12[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar12 != 1) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar12[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar12 != 2) {
                  return (byte *)0x0;
                }
              }
              lVar26 = *(long *)(pbVar12 + 0x20);
              lVar21 = *(long *)(pbVar12 + 0x18);
              bVar31 = pbVar12[8] | (byte)lVar21;
              bVar32 = pbVar12[9] | (byte)((ulong)lVar21 >> 8);
              bVar33 = pbVar12[10] | (byte)((ulong)lVar21 >> 0x10);
              bVar34 = pbVar12[0xb] | (byte)((ulong)lVar21 >> 0x18);
              bVar35 = pbVar12[0xc] | (byte)((ulong)lVar21 >> 0x20);
              bVar36 = pbVar12[0xd] | (byte)((ulong)lVar21 >> 0x28);
              bVar37 = pbVar12[0xe] | (byte)((ulong)lVar21 >> 0x30);
              bVar38 = pbVar12[0xf] | (byte)((ulong)lVar21 >> 0x38);
              bVar39 = pbVar12[0x10] | (byte)lVar26;
              bVar40 = pbVar12[0x11] | (byte)((ulong)lVar26 >> 8);
              bVar41 = pbVar12[0x12] | (byte)((ulong)lVar26 >> 0x10);
              bVar42 = pbVar12[0x13] | (byte)((ulong)lVar26 >> 0x18);
              bVar43 = pbVar12[0x14] | (byte)((ulong)lVar26 >> 0x20);
              bVar44 = pbVar12[0x15] | (byte)((ulong)lVar26 >> 0x28);
              bVar45 = pbVar12[0x16] | (byte)((ulong)lVar26 >> 0x30);
              bVar46 = pbVar12[0x17] | (byte)((ulong)lVar26 >> 0x38);
              auVar1[1] = bVar32;
              auVar1[0] = bVar31;
              auVar1[2] = bVar33;
              auVar1[3] = bVar34;
              auVar1[4] = bVar35;
              auVar1[5] = bVar36;
              auVar1[6] = bVar37;
              auVar1[7] = bVar38;
              auVar1[8] = bVar39;
              auVar1[9] = bVar40;
              auVar1[10] = bVar41;
              auVar1[0xb] = bVar42;
              auVar1[0xc] = bVar43;
              auVar1[0xd] = bVar44;
              auVar1[0xe] = bVar45;
              auVar1[0xf] = bVar46;
              auVar2[1] = bVar32;
              auVar2[0] = bVar31;
              auVar2[2] = bVar33;
              auVar2[3] = bVar34;
              auVar2[4] = bVar35;
              auVar2[5] = bVar36;
              auVar2[6] = bVar37;
              auVar2[7] = bVar38;
              auVar2[8] = bVar39;
              auVar2[9] = bVar40;
              auVar2[10] = bVar41;
              auVar2[0xb] = bVar42;
              auVar2[0xc] = bVar43;
              auVar2[0xd] = bVar44;
              auVar2[0xe] = bVar45;
              auVar2[0xf] = bVar46;
              auVar47 = NEON_ext(auVar1,auVar2,8,1);
              lVar21 = CONCAT17(bVar38 | auVar47[7],
                                CONCAT16(bVar37 | auVar47[6],
                                         CONCAT15(bVar36 | auVar47[5],
                                                  CONCAT14(bVar35 | auVar47[4],
                                                           CONCAT13(bVar34 | auVar47[3],
                                                                    CONCAT12(bVar33 | auVar47[2],
                                                                             CONCAT11(bVar32 | 
                                                  auVar47[1],bVar31 | auVar47[0])))))));
              goto joined_r0x000100e26704;
            }
            if (pbVar12[0x28] != 5) {
              return (byte *)0x0;
            }
            pbVar9 = *(byte **)(pbVar12 + 8);
            pbVar14 = *(byte **)(pbVar12 + 0x10);
            lVar21 = *(long *)pbVar12;
            uVar23 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar11,lVar21,uVar23);
            if (((ulong)pbVar11 & 1) == 0) {
              return (byte *)0x0;
            }
            puVar29 = *(undefined1 **)(puVar7 + -0x90);
            uVar30 = *(undefined8 *)(puVar7 + -0x88);
            pbVar11 = *(byte **)(puVar7 + -0xa0);
            pbVar20 = *(byte **)(puVar7 + -0x98);
            pbVar24 = *(byte **)(puVar7 + -0xb0);
            uVar23 = *(undefined8 *)(puVar7 + -0xa8);
            pbVar13 = *(byte **)(puVar7 + -0xc0);
            pbVar25 = *(byte **)(puVar7 + -0xb8);
            puVar7 = puVar7 + -0x80;
          } while( true );
        }
      }
    }
    else if (((uint)((ulong)*(undefined8 *)(param_2 + 10) >> 0x3c) & 3 |
             (*(byte *)(param_2 + 0xc) & 0x3f) << 2) == 5) {
      uVar23 = *(undefined8 *)param_2;
      uVar28 = 0;
      func_0x0001007bbbf8(0);
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(pbVar11,uVar23,uVar28);
      return (byte *)(ulong)((uint)pbVar11 & 1);
    }
  }
  return (byte *)0x0;
}



/* Entry: 104424b64; end: 104424b8f;  */

long FUN_104424b64(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104424b90; end: 104424ba7;  */

/* WARNING: Possible PIC construction at 0x0001044245ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001044245f0) */

void FUN_104424b90(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = param_1[1];
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = (uint)((ulong)param_1[5] >> 0x3c) & 3 | (*(byte *)(param_1 + 6) & 0x3f) << 2;
  if (uVar4 < 3) {
    if ((uVar4 == 1) || (uVar4 == 2)) goto LAB_1044245bc;
  }
  else {
    if (uVar4 == 3) {
      _swift_bridgeObjectRelease(uVar3);
      uVar3 = uVar2;
LAB_1044245bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
      return;
    }
    if (uVar4 == 4) {
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = (uint)(uVar2 >> 0x3e);
      if (uVar4 != 1) {
        if (uVar4 != 2) {
          return;
        }
        func_0x000107c61574(uVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(uVar2 & 0x3fffffffffffffff);
      return;
    }
    if (uVar4 == 5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(*param_1);
      return;
    }
  }
  return;
}



/* Entry: 104424ba8; end: 104424cab;  */

undefined8 * FUN_104424ba8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = *(undefined1 *)(param_2 + 6);
  FUN_104424468(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  *(undefined1 *)(param_1 + 6) = uVar7;
  return param_1;
}



/* Entry: 104424cac; end: 104424cff;  */

undefined8 * FUN_104424cac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *(undefined1 *)(param_2 + 6);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar8 = param_1[5];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  uVar6 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar5;
  FUN_104424548(uVar7,uVar1,uVar3,uVar2,uVar4,uVar8,uVar6);
  return param_1;
}



/* Entry: 104424d00; end: 104424e23;  */

int FUN_104424d00(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3fa < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 0x3fb;
  }
  uVar1 = ((uint)((ulong)*(undefined8 *)(param_1 + 10) >> 0x3c) & 3 |
          (uint)*(byte *)(param_1 + 0xc) << 2) ^ 0x3ff;
  if (0x3f9 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104424e24; end: 104424efb;  */

void FUN_104424e24(void)

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



/* Entry: 104424efc; end: 104424f1f;  */

void FUN_104424efc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104424f20; end: 104424f5f;  */

void FUN_104424f20(void)

{
  undefined *puVar1;
  
  if (puRam00000001130786a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfccc0;
  _swift_getWitnessTable(&UNK_10dcfccc0,&UNK_11076d148);
  puRam00000001130786a8 = puVar1;
  return;
}



/* Entry: 104424f60; end: 104424f6f;  */

undefined1  [16] FUN_104424f60(void)

{
  return ZEXT816(0x11076d148);
}



/* Entry: 104424f70; end: 104424f7f; -[SCContextImage content] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104424f70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130786b0));
  return;
}



/* Entry: 104424f80; end: 104424f8f; -[SCContextImage renderingMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104424f80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130786b8);
}



/* Entry: 104424f90; end: 104425057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104424f90(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130786b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130786b8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104425058; end: 10442516b; -[SCContextImage initWithContent:renderingMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104425058(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130786b0) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130786b8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10442516c; end: 1044251e7; -[SCContextImage hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10442516c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  _objc_retain();
  FUN_104425514();
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130786b8);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1044251e8; end: 1044252cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1044251e8(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  long lStack_58;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar1 = &lStack_58;
    _swift_dynamicCast(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,lVar4,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar5 = *(undefined8 *)(lStack_58 + _DAT_1130786b0);
      uVar2 = 0;
      FUN_104427570();
      auStack_50[0] = uVar5;
      lStack_38 = uVar2;
      _objc_retain(uVar5);
      puVar3 = auStack_50;
      FUN_104425814(puVar3);
      func_0x00010006e7f4(auStack_50);
      lVar4 = *(long *)(unaff_x20 + _DAT_1130786b8);
      lVar6 = *(long *)(lStack_58 + _DAT_1130786b8);
      _objc_release(lStack_58);
      return (uint)puVar3 & (uint)(lVar4 == lVar6);
    }
  }
  return 0;
}



/* Entry: 1044252d0; end: 10442534f; -[SCContextImage isEqual:] */

uint FUN_1044252d0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1044251e8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104425350; end: 104425353; -[SCContextImage copyWithZone:] */

void FUN_104425350(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}


