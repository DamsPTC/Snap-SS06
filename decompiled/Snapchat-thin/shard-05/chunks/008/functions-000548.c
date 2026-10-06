/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1041c99c4; end: 1041c99d3; -[SCAdAppInstallAttachment appId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1041c99c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113068388);
}



/* Entry: 1041c99d4; end: 1041c9a2f; -[SCAdAppInstallAttachment customProductPageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c99d4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113068390))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113068390);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041c9a30; end: 1041c9a3f; -[SCAdAppInstallAttachment adNetworkAttribution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c9a30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113068398));
  return;
}



/* Entry: 1041c9a40; end: 1041c9a4f; -[SCAdAppInstallAttachment callbacks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c9a40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130683a0));
  return;
}



/* Entry: 1041c9a50; end: 1041c9a5f; -[SCAdAppInstallAttachment skanImpressionSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1041c9a50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130683a8);
}



/* Entry: 1041c9a60; end: 1041c9a6f; -[SCAdAppInstallAttachment commonAdConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c9a60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130683b0));
  return;
}



/* Entry: 1041c9a70; end: 1041c9a7f; -[SCAdAppInstallAttachment backgroundExitBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c9a70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130683b8));
  return;
}



/* Entry: 1041c9a80; end: 1041c9c27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c9a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113068388) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068390);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113068398) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_1130683a0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_1130683a8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_1130683b0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_1130683b8) = param_8;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041c9c28; end: 1041c9fdf; -[SCAdAppInstallAttachment initWithAppId:customProductPageId:adNetworkAttribution:callbacks:skanImpressionSource:commonAdConfig:backgroundExitBehavior:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041c9c28(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_113068388) = param_3;
  plVar1 = (long *)(param_1 + _DAT_113068390);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113068398) = param_5;
  *(undefined8 *)(param_1 + _DAT_1130683a0) = param_6;
  *(undefined8 *)(param_1 + _DAT_1130683a8) = param_7;
  *(undefined8 *)(param_1 + _DAT_1130683b0) = param_8;
  *(undefined8 *)(param_1 + _DAT_1130683b8) = param_9;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_msgSendSuper2(&lStack_70,puVar2);
  return;
}



/* Entry: 1041c9fe0; end: 1041ca013; -[SCAdAppInstallAttachment hash] */

undefined8 FUN_1041c9fe0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1041c9430();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1041ca014; end: 1041ca093; -[SCAdAppInstallAttachment isEqual:] */

uint FUN_1041ca014(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1041c95ac(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1041ca094; end: 1041ca097; -[SCAdAppInstallAttachment copyWithZone:] */

void FUN_1041ca094(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041ca098; end: 1041ca123; -[SCAdAppInstallAttachment description] */

void FUN_1041ca098(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x000100b91790();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1041c9838(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001041ca298(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      &SUB_100b91790);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041ca124; end: 1041ca19f; -[SCAdAppInstallAttachment init] */

void FUN_1041ca124(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdAttachmentHandlerScope/AdAppInstallAttachmentWrapper.swift",0x3c,2,0x5e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041ca16c);
  (*pcVar1)();
}



/* Entry: 1041ca1a0; end: 1041ca2d3; -[SCAdAppInstallAttachment .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ca1a0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113068390 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113068398));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130683a0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130683b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130683b8));
  return;
}



/* Entry: 1041ca2d4; end: 1041ca2f3;  */

void FUN_1041ca2d4(void)

{
  _objc_opt_self(&PTR_PTR_11298f5e8);
  return;
}



/* Entry: 1041ca2f4; end: 1041ca323;  */

void FUN_1041ca2f4(undefined8 param_1)

{
  _objc_allocWithZone();
  func_0x0001041cb7e4(param_1);
  return;
}



/* Entry: 1041ca324; end: 1041ca67b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ca324(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [72];
  
  lVar2 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_90 + -extraout_x8;
  __ss6HasherVABycfC(auStack_88);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130683e8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar5,((undefined8 *)(unaff_x20 + _DAT_1130683e8))[1]);
  uVar1 = uVar5;
  func_0x00010bfde980();
  _objc_release(uVar5);
  __ss6HasherV8_combineyySuF(uVar1);
  func_0x00010bfde980(*(undefined8 *)(unaff_x20 + _DAT_1130683f0));
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130683f8);
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF(_DAT_1138131f8);
  uVar5 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113813200);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar5,((undefined8 *)(unaff_x20 + _DAT_113813200))[1]);
  uVar1 = uVar5;
  func_0x00010bfde980();
  _objc_release(uVar5);
  __ss6HasherV8_combineyySuF(uVar1);
  lVar2 = *(long *)(unaff_x20 + _DAT_113813208);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_113813210))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113813210);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  lVar2 = *(long *)(unaff_x20 + _DAT_113813218);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_113813220))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113813220);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  FUN_1041cb9f4(unaff_x20 + _DAT_113813228,puVar4,0x112d3bc20,&UNK_10d904ef0);
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar6 = *(long *)(lVar2 + -8);
  puVar3 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar2);
  if ((int)puVar3 == 1) {
    func_0x0001041cba3c(puVar4,0x112d3bc20,&UNK_10d904ef0);
    puVar4 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
    (**(code **)(lVar6 + 8))(puVar4,lVar2);
    puVar4 = puVar3;
    func_0x00010bfde980(puVar3);
    _objc_release(puVar3);
  }
  __ss6HasherV8_combineyySuF(puVar4);
  if (((undefined8 *)(unaff_x20 + _DAT_113813230))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113813230);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  if (((undefined8 *)(unaff_x20 + _DAT_113813238))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113813238);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1041ca67c; end: 1041caee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1041ca67c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  uint uVar8;
  long unaff_x20;
  uint uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_c0;
  long lStack_b8;
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
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar14 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar5 = (long)&lStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar13 = 0x112d68090;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar5 - extraout_x8_00;
  lVar10 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar15 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar15 - extraout_x12;
  FUN_1041cb9f4(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x0001041cba3c(auStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar2 = &lStack_88;
    _swift_dynamicCast(plVar2,auStack_80,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_1130683e8);
      if ((lVar3 == *(long *)(lStack_88 + _DAT_1130683e8)) &&
         (((long *)(unaff_x20 + _DAT_1130683e8))[1] == ((long *)(lStack_88 + _DAT_1130683e8))[1])) {
        uStack_8c = 0;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_8c = (uint)lVar3 ^ 1;
      }
      uStack_90 = (uint)*(undefined8 *)(unaff_x20 + _DAT_1130683f0);
      func_0x00010c071ae0();
      uStack_94 = (uint)*(undefined8 *)(unaff_x20 + _DAT_1130683f8);
      func_0x00010c071ae0();
      lVar3 = unaff_x20 + _DAT_1138131f8;
      __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(lVar3,lStack_88 + _DAT_1138131f8);
      uStack_98 = (uint)lVar3;
      lVar3 = *(long *)(unaff_x20 + _DAT_113813200);
      if ((lVar3 == *(long *)(lStack_88 + _DAT_113813200)) &&
         (((long *)(unaff_x20 + _DAT_113813200))[1] == ((long *)(lStack_88 + _DAT_113813200))[1])) {
        uStack_9c = 0;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_9c = (uint)lVar3 ^ 1;
      }
      lVar3 = *(long *)(unaff_x20 + _DAT_113813208);
      if (lVar3 == 0) {
        uStack_a0 = (uint)(*(long *)(lStack_88 + _DAT_113813208) == 0);
      }
      else {
        func_0x00010c071ae0();
        uStack_a0 = (uint)lVar3;
      }
      lVar3 = ((long *)(unaff_x20 + _DAT_113813210))[1];
      lVar6 = ((long *)(lStack_88 + _DAT_113813210))[1];
      uStack_a4 = (uint)(lVar3 == 0 && lVar6 == 0);
      if ((lVar3 != 0) && (lVar6 != 0)) {
        lVar4 = *(long *)(unaff_x20 + _DAT_113813210);
        if ((lVar4 == *(long *)(lStack_88 + _DAT_113813210)) && (lVar3 == lVar6)) {
          uStack_a4 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_a4 = (uint)lVar4;
        }
      }
      lVar3 = *(long *)(unaff_x20 + _DAT_113813218);
      if (lVar3 == 0) {
        uStack_a8 = (uint)(*(long *)(lStack_88 + _DAT_113813218) == 0);
      }
      else {
        func_0x00010c071ae0();
        uStack_a8 = (uint)lVar3;
      }
      lVar3 = ((long *)(unaff_x20 + _DAT_113813220))[1];
      lVar6 = ((long *)(lStack_88 + _DAT_113813220))[1];
      uStack_ac = (uint)(lVar3 == 0 && lVar6 == 0);
      lStack_c0 = lVar5;
      lStack_b8 = lVar15;
      if ((lVar3 != 0) && (lVar6 != 0)) {
        lVar5 = *(long *)(unaff_x20 + _DAT_113813220);
        if ((lVar5 == *(long *)(lStack_88 + _DAT_113813220)) && (lVar3 == lVar6)) {
          uStack_ac = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_ac = (uint)lVar5;
        }
      }
      lVar3 = _DAT_113813228;
      FUN_1041cb9f4(lStack_88 + _DAT_113813228,lVar10,0x112d3bc20,&UNK_10d904ef0);
      lVar13 = (long)*(int *)(lVar13 + 0x30);
      FUN_1041cb9f4(unaff_x20 + lVar3,lVar12,0x112d3bc20,&UNK_10d904ef0);
      FUN_1041cb9f4(lVar10,lVar12 + lVar13,0x112d3bc20,&UNK_10d904ef0);
      pcVar11 = *(code **)(lVar14 + 0x30);
      lVar5 = lVar12;
      (*pcVar11)(lVar12,1,lVar1);
      lVar3 = lStack_b8;
      if ((int)lVar5 == 1) {
        func_0x0001041cba3c(lVar10,0x112d3bc20,&UNK_10d904ef0);
        lVar13 = lVar12 + lVar13;
        (*pcVar11)(lVar13,1,lVar1);
        if ((int)lVar13 == 1) {
          func_0x0001041cba3c(lVar12,0x112d3bc20,&UNK_10d904ef0);
          uVar9 = 0;
        }
        else {
LAB_1041caaf4:
          func_0x0001041cba3c(lVar12,0x112d68090,&UNK_10da24400);
          uVar9 = 1;
        }
      }
      else {
        FUN_1041cb9f4(lVar12,lStack_b8,0x112d3bc20,&UNK_10d904ef0);
        lVar5 = lVar12 + lVar13;
        (*pcVar11)(lVar5,1,lVar1);
        lVar15 = lStack_c0;
        if ((int)lVar5 == 1) {
          func_0x0001041cba3c(lVar10,0x112d3bc20,&UNK_10d904ef0);
          (**(code **)(lVar14 + 8))(lVar3,lVar1);
          goto LAB_1041caaf4;
        }
        lVar5 = lStack_c0;
        (**(code **)(lVar14 + 0x20))(lStack_c0,lVar12 + lVar13,lVar1);
        func_0x000101207ba8();
        lVar13 = lVar3;
        __sSQ2eeoiySbx_xtFZTj(lVar3,lVar15,lVar1,lVar5);
        pcVar11 = *(code **)(lVar14 + 8);
        (*pcVar11)(lVar15,lVar1);
        func_0x0001041cba3c(lVar10,0x112d3bc20,&UNK_10d904ef0);
        (*pcVar11)(lVar3,lVar1);
        func_0x0001041cba3c(lVar12,0x112d3bc20,&UNK_10d904ef0);
        uVar9 = (uint)lVar13 ^ 1;
      }
      lVar13 = ((long *)(unaff_x20 + _DAT_113813230))[1];
      lVar10 = ((long *)(lStack_88 + _DAT_113813230))[1];
      uVar7 = (uint)(lVar13 == 0 && lVar10 == 0);
      if ((lVar13 != 0) && (lVar10 != 0)) {
        lVar3 = *(long *)(unaff_x20 + _DAT_113813230);
        if ((lVar3 == *(long *)(lStack_88 + _DAT_113813230)) && (lVar13 == lVar10)) {
          uVar7 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar7 = (uint)lVar3;
        }
      }
      lVar13 = ((long *)(unaff_x20 + _DAT_113813238))[1];
      lVar10 = ((long *)(lStack_88 + _DAT_113813238))[1];
      if (lVar13 == 0) {
        _swift_bridgeObjectRetain(lVar10);
        _objc_release(lStack_88);
        if (lVar10 == 0) {
LAB_1041cac5c:
          uVar8 = 1;
        }
        else {
          _swift_bridgeObjectRelease(lVar10);
          uVar8 = 0;
        }
      }
      else {
        uVar8 = 0;
        if (lVar10 != 0) {
          lVar3 = *(long *)(unaff_x20 + _DAT_113813238);
          if ((lVar3 == *(long *)(lStack_88 + _DAT_113813238)) && (lVar13 == lVar10)) {
            _objc_release(lStack_88);
            goto LAB_1041cac5c;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar8 = (uint)lVar3;
        }
        _objc_release(lStack_88);
      }
      if (((uStack_8c | uStack_90 ^ 1 | uStack_94 ^ 1 | uStack_98 ^ 1 | uStack_9c | uStack_a0 ^ 1 |
            uStack_a4 ^ 0xffffffff | uStack_a8 ^ 0xffffffff | uStack_ac ^ 0xffffffff | uVar9) & 1)
          == 0) {
        uVar7 = uVar7 & uVar8;
        goto LAB_1041caccc;
      }
    }
  }
  uVar7 = 0;
LAB_1041caccc:
  return uVar7 & 1;
}



/* Entry: 1041caee8; end: 1041caef3; -[SCAppInstallAttachmentAdNetworkAttribution identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041caee8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130683e8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130683e8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041caef4; end: 1041caf03; -[SCAppInstallAttachmentAdNetworkAttribution campaignIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041caef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130683f0));
  return;
}



/* Entry: 1041caf04; end: 1041caf13; -[SCAppInstallAttachmentAdNetworkAttribution timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041caf04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130683f8));
  return;
}



/* Entry: 1041caf14; end: 1041cafab; -[SCAppInstallAttachmentAdNetworkAttribution uuid] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041caf14(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_1138131f8,lVar1);
  __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1041cafac; end: 1041cafb7; -[SCAppInstallAttachmentAdNetworkAttribution attributionSignature] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041cafac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113813200);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113813200))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041cafb8; end: 1041cafff;  */

void FUN_1041cafb8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1041cb000; end: 1041cb00f; -[SCAppInstallAttachmentAdNetworkAttribution sourceAppStoreIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041cb000(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113813208));
  return;
}



/* Entry: 1041cb010; end: 1041cb01b; -[SCAppInstallAttachmentAdNetworkAttribution version] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041cb010(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113813210))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113813210);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041cb01c; end: 1041cb02b; -[SCAppInstallAttachmentAdNetworkAttribution sourceIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041cb01c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113813218));
  return;
}



/* Entry: 1041cb02c; end: 1041cb037; -[SCAppInstallAttachmentAdNetworkAttribution viewThroughVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041cb02c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113813220))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113813220);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041cb038; end: 1041cb10f; -[SCAppInstallAttachmentAdNetworkAttribution viewThroughNonce] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041cb038(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  FUN_1041cb9f4(param_1 + _DAT_113813228,puVar4,0x112d3bc20,&UNK_10d904ef0);
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1041cb110; end: 1041cb11b; -[SCAppInstallAttachmentAdNetworkAttribution viewThroughSignature] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041cb110(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113813230))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113813230);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041cb11c; end: 1041cb127; -[SCAppInstallAttachmentAdNetworkAttribution aakCompactJWS] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041cb11c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113813238))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113813238);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041cb128; end: 1041cb17f;  */

void FUN_1041cb128(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1041cb180; end: 1041cb55f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1041cb180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130683e8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130683f0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130683f8) = param_4;
  lVar2 = _DAT_1138131f8;
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar3 + -8);
  (**(code **)(lVar5 + 0x10))(unaff_x20 + lVar2,param_5,lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813200);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113813208) = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813210);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_113813218) = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813220);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  FUN_1041cb9f4(param_14,unaff_x20 + _DAT_113813228,0x112d3bc20,&UNK_10d904ef0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813230);
  *puVar1 = param_15;
  puVar1[1] = param_16;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813238);
  *puVar1 = param_17;
  puVar1[1] = param_18;
  puVar4 = auStack_78;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  func_0x0001041cba3c(param_14,0x112d3bc20,&UNK_10d904ef0);
  (**(code **)(lVar5 + 8))(param_5,lVar3);
  return puVar4;
}



/* Entry: 1041cb560; end: 1041cb9f3; -[SCAppInstallAttachmentAdNetworkAttribution initWithIdentifier:campaignIdentifier:timestamp:uuid:attributionSignature:sourceAppStoreIdentifier:version:sourceIdentifier:viewThroughVersion:viewThroughNonce:viewThroughSignature:aakCompactJWS:] */

void FUN_1041cb560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,long param_11,long param_12,long param_13,
                  long param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long alStack_110 [10];
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0x112d3bc20;
  puVar9 = &UNK_10d904ef0;
  uStack_80 = param_1;
  uStack_78 = param_8;
  uStack_70 = param_4;
  uStack_68 = param_5;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_c0 + -extraout_x8;
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puStack_90 = puVar9;
  uStack_88 = param_3;
  __s10Foundation4UUIDV36_unconditionallyBridgeFromObjectiveCyACSo6NSUUIDCSgFZ(lVar8,param_6);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puStack_a0 = puVar9;
  uStack_98 = param_7;
  if (param_9 == 0) {
    puStack_b0 = (undefined *)0x0;
    lStack_a8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_b0 = puVar9;
    lStack_a8 = param_9;
  }
  if (param_11 == 0) {
    lStack_b8 = 0;
    puVar9 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_b8 = param_11;
  }
  if (param_12 == 0) {
    uVar4 = 1;
    (**(code **)(lVar10 + 0x38))(puVar7,1,1,lVar3);
    _objc_retain(uStack_70);
    _objc_retain(uStack_68);
    uVar2 = uStack_78;
    _objc_retain(uStack_78);
    _objc_retain(param_10);
    _objc_retain(param_13);
    _objc_retain(param_14);
  }
  else {
    __s10Foundation4UUIDV36_unconditionallyBridgeFromObjectiveCyACSo6NSUUIDCSgFZ(puVar7,param_12);
    pcVar5 = *(code **)(lVar10 + 0x38);
    _objc_retain(uStack_70);
    _objc_retain(uStack_68);
    uVar2 = uStack_78;
    _objc_retain(uStack_78);
    _objc_retain(param_10);
    _objc_retain(param_13);
    _objc_retain(param_14);
    uVar4 = 0;
    (*pcVar5)(puVar7,0,1,lVar3);
  }
  if (param_13 == 0) {
    lVar3 = 0;
    uVar1 = 0;
    uVar6 = uVar4;
  }
  else {
    lVar3 = param_13;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar6 = uVar4;
    _objc_release(param_13);
    uVar1 = uVar4;
  }
  if (param_14 == 0) {
    lVar10 = 0;
    uVar6 = 0;
  }
  else {
    lVar10 = param_14;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(param_14);
  }
  *(long *)(lVar8 + -0x10) = lVar10;
  *(undefined8 *)(lVar8 + -8) = uVar6;
  *(long *)(lVar8 + -0x20) = lVar3;
  *(undefined8 *)(lVar8 + -0x18) = uVar1;
  *(undefined **)(lVar8 + -0x30) = puVar9;
  *(undefined1 **)(lVar8 + -0x28) = puVar7;
  lVar3 = lStack_b8;
  *(undefined8 *)(lVar8 + -0x40) = param_10;
  *(long *)(lVar8 + -0x38) = lVar3;
  *(undefined **)(lVar8 + -0x48) = puStack_b0;
  *(long *)(lVar8 + -0x50) = lStack_a8;
  func_0x0001041cb374(uStack_88,puStack_90,uStack_70,uStack_68,lVar8,uStack_98,puStack_a0,uVar2);
  return;
}



/* Entry: 1041cb9f4; end: 1041cba7b;  */

undefined8 FUN_1041cb9f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1041cba7c; end: 1041cbaaf; -[SCAppInstallAttachmentAdNetworkAttribution hash] */

undefined8 FUN_1041cba7c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1041ca324();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1041cbab0; end: 1041cbb3f; -[SCAppInstallAttachmentAdNetworkAttribution isEqual:] */

uint FUN_1041cbab0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1041ca67c(&uStack_40);
  _objc_release(param_1);
  func_0x0001041cba3c(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1041cbb40; end: 1041cbb43; -[SCAppInstallAttachmentAdNetworkAttribution copyWithZone:] */

void FUN_1041cbb40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041cbb44; end: 1041cbbbb; -[SCAppInstallAttachmentAdNetworkAttribution description] */

void FUN_1041cbb44(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x000100b918b4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  func_0x0001041cacf8(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_10418e8e8(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041cbbbc; end: 1041cbc37; -[SCAppInstallAttachmentAdNetworkAttribution init] */

void FUN_1041cbbbc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdAttachmentHandlerScope/AppInstallAttachmentAdNetworkAttributionWrapper.swift",0x4e,2
             ,0x86,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041cbc04);
  (*pcVar1)();
}



/* Entry: 1041cbc38; end: 1041cbd4b; -[SCAppInstallAttachmentAdNetworkAttribution .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041cbc38(long param_1)

{
  long lVar1;
  long lVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130683e8 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130683f0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130683f8));
  lVar1 = _DAT_1138131f8;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113813200 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113813208));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113813210 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113813218));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113813220 + 8));
  func_0x0001041cba3c(param_1 + _DAT_113813228,0x112d3bc20,&UNK_10d904ef0);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113813230 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113813238 + 8))
  ;
  return;
}



/* Entry: 1041cbd4c; end: 1041cbd53;  */

void FUN_1041cbd4c(void)

{
  if (lRam0000000113068428 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7f529c);
  return;
}



/* Entry: 1041cbd54; end: 1041cbd8b;  */

void FUN_1041cbd54(undefined8 param_1)

{
  if (lRam0000000113068428 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7f529c);
  return;
}



/* Entry: 1041cbd8c; end: 1041cbe77;  */

void FUN_1041cbd8c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_78 = PTR___sBOWV_11034d658 + 0x40;
  puStack_80 = &UNK_10dce0b80;
  lVar1 = 0x13f;
  puStack_70 = puStack_78;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_68 = *(long *)(lVar1 + -8) + 0x40;
    puStack_60 = &UNK_10dce0b80;
    puStack_58 = &UNK_10dce0b98;
    puStack_50 = &UNK_10dce0bb0;
    puStack_48 = &UNK_10dce0b98;
    puStack_40 = &UNK_10dce0bb0;
    lVar1 = 0x13f;
    func_0x0001000b88b8();
    if (param_2 < 0x40) {
      lStack_38 = *(long *)(lVar1 + -8) + 0x40;
      puStack_30 = &UNK_10dce0bb0;
      puStack_28 = &UNK_10dce0bb0;
      _swift_updateClassMetadata2(param_1,0x100,0xc,&puStack_80,param_1 + 0x50);
    }
  }
  return;
}



/* Entry: 1041cbe78; end: 1041cc01f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041cbe78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(_DAT_113813240);
  uVar2 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113813248))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113813248);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113813250))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113813250);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113813258))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113813258);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113813260);
  func_0x00010bfde980(uVar2);
  __ss6HasherV8_combineyySuF();
  FUN_1041c9430();
  __ss6HasherV8_combineyySuF();
  if (*(long *)(unaff_x20 + _DAT_113813270) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1041e2ae0();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1041cc020; end: 1041cc31f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1041cc020(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long unaff_x20;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lStack_88;
  long alStack_80 [4];
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x0001041cdb28(param_1,alStack_80,0x112d387f8,&UNK_10d902650);
  if (alStack_80[3] == 0) {
    func_0x0001041cdbf0(alStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar3 = &lStack_88;
    _swift_dynamicCast(plVar3,alStack_80,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar2 = unaff_x20 + _DAT_113813240;
      __s10Foundation3URLV2eeoiySbAC_ACtFZ(lVar2,lStack_88 + _DAT_113813240);
      lVar7 = ((long *)(unaff_x20 + _DAT_113813248))[1];
      lVar8 = ((long *)(lStack_88 + _DAT_113813248))[1];
      uVar10 = (uint)(lVar7 == 0 && lVar8 == 0);
      if (lVar7 != 0 && lVar8 != 0) {
        lVar4 = *(long *)(unaff_x20 + _DAT_113813248);
        if (lVar4 == *(long *)(lStack_88 + _DAT_113813248) && lVar7 == lVar8) {
          uVar10 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar10 = (uint)lVar4;
        }
      }
      lVar7 = ((long *)(unaff_x20 + _DAT_113813250))[1];
      lVar8 = ((long *)(lStack_88 + _DAT_113813250))[1];
      uVar11 = (uint)(lVar7 == 0 && lVar8 == 0);
      if ((lVar7 != 0) && (lVar8 != 0)) {
        lVar4 = *(long *)(unaff_x20 + _DAT_113813250);
        if ((lVar4 == *(long *)(lStack_88 + _DAT_113813250)) && (lVar7 == lVar8)) {
          uVar11 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar11 = (uint)lVar4;
        }
      }
      lVar7 = ((long *)(unaff_x20 + _DAT_113813258))[1];
      lVar8 = ((long *)(lStack_88 + _DAT_113813258))[1];
      uVar12 = (uint)(lVar7 == 0 && lVar8 == 0);
      if ((lVar7 != 0) && (lVar8 != 0)) {
        lVar4 = *(long *)(unaff_x20 + _DAT_113813258);
        if ((lVar4 == *(long *)(lStack_88 + _DAT_113813258)) && (lVar7 == lVar8)) {
          uVar12 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar12 = (uint)lVar4;
        }
      }
      uVar1 = (uint)*(undefined8 *)(unaff_x20 + _DAT_113813260);
      func_0x00010c071ae0();
      lVar7 = *(long *)(lStack_88 + _DAT_113813268);
      uVar5 = 0;
      FUN_1041ca2d4();
      alStack_80[0] = lVar7;
      alStack_80[3] = uVar5;
      _objc_retain(lVar7);
      plVar3 = alStack_80;
      FUN_1041c95ac(plVar3);
      func_0x0001041cdbf0(alStack_80,0x112d387f8,&UNK_10d902650);
      if (*(long *)(unaff_x20 + _DAT_113813270) == 0) {
        lVar8 = *(long *)(lStack_88 + _DAT_113813270);
        lVar7 = lVar8;
        _objc_retain(lVar8);
        _objc_release(lStack_88);
        if (lVar8 == 0) {
          uVar9 = 1;
        }
        else {
          _objc_release(lVar7);
          uVar9 = 0;
        }
      }
      else {
        lVar7 = *(long *)(lStack_88 + _DAT_113813270);
        if (lVar7 == 0) {
          uVar5 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          uVar5 = 0;
          FUN_1041e36e8();
        }
        alStack_80[0] = lVar7;
        alStack_80[3] = uVar5;
        _objc_retain(lVar7);
        plVar6 = alStack_80;
        FUN_1041e2c04(plVar6);
        uVar9 = (uint)plVar6;
        _objc_release(lStack_88);
        func_0x0001041cdbf0(alStack_80,0x112d387f8,&UNK_10d902650);
      }
      if (((uint)lVar2 & uVar10 & uVar11 & uVar12 & uVar1 & 1) != 0) {
        uVar9 = (uint)plVar3 & uVar9;
        goto LAB_1041cc2f4;
      }
    }
  }
  uVar9 = 0;
LAB_1041cc2f4:
  return uVar9 & 1;
}



/* Entry: 1041cc320; end: 1041cc58f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041cc320(long param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar7 = _DAT_113813240;
  lVar6 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2 + lVar7,lVar6);
  uVar8 = *(undefined8 *)(param_2 + _DAT_113813248);
  uVar3 = ((undefined8 *)(param_2 + _DAT_113813248))[1];
  lVar7 = 0;
  func_0x000100b91b84();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x14));
  *puVar1 = uVar8;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)(param_2 + _DAT_113813250);
  uVar10 = puVar1[1];
  uVar8 = *puVar1;
  puVar5 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x18));
  puVar5[1] = puVar1[1];
  *puVar5 = uVar8;
  puVar1 = (undefined8 *)(param_2 + _DAT_113813258);
  uVar8 = puVar1[1];
  uVar11 = *puVar1;
  puVar5 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x1c));
  puVar5[1] = puVar1[1];
  *puVar5 = uVar11;
  uVar11 = *(undefined8 *)(param_2 + _DAT_113813260);
  _swift_bridgeObjectRetain(uVar8);
  _objc_retain(uVar11);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar10);
  FUN_1041be610(&uStack_b0,uVar11);
  _objc_release(uVar11);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x20));
  puVar1[9] = uStack_68;
  puVar1[8] = uStack_70;
  puVar1[0xb] = uStack_58;
  puVar1[10] = uStack_60;
  puVar1[0xd] = uStack_48;
  puVar1[0xc] = uStack_50;
  puVar1[1] = uStack_a8;
  *puVar1 = uStack_b0;
  puVar1[3] = uStack_98;
  puVar1[2] = uStack_a0;
  puVar1[5] = uStack_88;
  puVar1[4] = uStack_90;
  puVar1[7] = uStack_78;
  puVar1[6] = uStack_80;
  iVar4 = *(int *)(lVar7 + 0x24);
  _objc_retain(*(undefined8 *)(param_2 + _DAT_113813268));
  FUN_1041c9838(param_1 + iVar4);
  param_1 = param_1 + *(int *)(lVar7 + 0x28);
  lVar7 = *(long *)(param_2 + _DAT_113813270);
  bVar2 = lVar7 == 0;
  if (bVar2) {
    func_0x000100b91cc8();
    pcVar9 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
  }
  else {
    uVar8 = *(undefined8 *)(lVar7 + _DAT_113068838);
    _objc_retain();
    _objc_retain(uVar8);
    func_0x0001047b6fb0(param_1);
    uVar8 = *(undefined8 *)(lVar7 + _DAT_113068840);
    lVar6 = 0;
    func_0x000100b91cc8();
    *(undefined8 *)(param_1 + *(int *)(lVar6 + 0x14)) = uVar8;
    *(undefined8 *)(param_1 + *(int *)(lVar6 + 0x18)) = *(undefined8 *)(lVar7 + _DAT_113068848);
    uVar8 = *(undefined8 *)(lVar7 + _DAT_113068850);
    iVar4 = *(int *)(lVar6 + 0x1c);
    _swift_bridgeObjectRetain();
    _objc_retain(uVar8);
    func_0x0001041ed0c4(param_1 + iVar4);
    *(undefined8 *)(param_1 + *(int *)(lVar6 + 0x20)) = *(undefined8 *)(lVar7 + _DAT_113068858);
    uVar8 = *(undefined8 *)(lVar7 + _DAT_113068860);
    uVar3 = ((undefined8 *)(lVar7 + _DAT_113068860))[1];
    _swift_bridgeObjectRetain(uVar3);
    _objc_release(lVar7);
    puVar1 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x24));
    *puVar1 = uVar8;
    puVar1[1] = uVar3;
    pcVar9 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
    lVar7 = lVar6;
  }
  (*pcVar9)(param_1,bVar2,1,lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1041cc590; end: 1041cc627; -[SCAdPlayableAttachment playableURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041cc590(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_113813240,lVar1);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1041cc628; end: 1041cc633; -[SCAdPlayableAttachment attachmentCtaText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041cc628(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113813248))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113813248);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041cc634; end: 1041cc63f; -[SCAdPlayableAttachment appIconURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041cc634(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113813250))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113813250);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041cc640; end: 1041cc64b; -[SCAdPlayableAttachment appTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041cc640(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113813258))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113813258);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041cc64c; end: 1041cc6a3;  */

void FUN_1041cc64c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1041cc6a4; end: 1041cc6b3; -[SCAdPlayableAttachment commonAdConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041cc6a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113813260));
  return;
}



/* Entry: 1041cc6b4; end: 1041cc6c3; -[SCAdPlayableAttachment appInstall] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041cc6b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113813268));
  return;
}



/* Entry: 1041cc6c4; end: 1041cc6d3; -[SCAdPlayableAttachment skOverlayParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041cc6c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113813270));
  return;
}



/* Entry: 1041cc6d4; end: 1041cc807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1041cc6d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  lVar2 = _DAT_113813240;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar3 + -8);
  (**(code **)(lVar5 + 0x10))(unaff_x20 + lVar2,param_1,lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813248);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813250);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813258);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113813260) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113813268) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_113813270) = param_10;
  puVar4 = auStack_70;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(param_1,lVar3);
  return puVar4;
}



/* Entry: 1041cc808; end: 1041ccd23; -[SCAdPlayableAttachment initWithPlayableURL:attachmentCtaText:appIconURL:appTitle:commonAdConfig:appInstall:skOverlayParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1041cc808(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                    long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lVar5;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  lStack_78 = lVar2;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar2 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar2,param_3);
  if (param_4 == 0) {
    lStack_88 = 0;
    lStack_80 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_88 = param_2;
    lStack_80 = param_4;
  }
  if (param_5 == 0) {
    lStack_90 = 0;
    lVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar1 = param_2;
    lStack_90 = param_5;
  }
  if (param_6 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain();
  _objc_retain();
  _objc_retain();
  (**(code **)(lVar5 + 0x10))(param_1 + _DAT_113813240,lVar2,lVar3);
  plVar4 = (long *)(param_1 + _DAT_113813248);
  *plVar4 = lStack_80;
  plVar4[1] = lStack_88;
  plVar4 = (long *)(param_1 + _DAT_113813250);
  *plVar4 = lStack_90;
  plVar4[1] = lVar1;
  plVar4 = (long *)(param_1 + _DAT_113813258);
  *plVar4 = param_6;
  plVar4[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113813260) = param_7;
  *(undefined8 *)(param_1 + _DAT_113813268) = param_8;
  *(undefined8 *)(param_1 + _DAT_113813270) = param_9;
  lStack_68 = lStack_78;
  plVar4 = &lStack_70;
  lStack_70 = param_1;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(lVar2,lVar3);
  return plVar4;
}



/* Entry: 1041ccd24; end: 1041ccd57; -[SCAdPlayableAttachment hash] */

undefined8 FUN_1041ccd24(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1041cbe78();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1041ccd58; end: 1041ccde7; -[SCAdPlayableAttachment isEqual:] */

uint FUN_1041ccd58(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1041cc020(&uStack_40);
  _objc_release(param_1);
  func_0x0001041cdbf0(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1041ccde8; end: 1041ccdeb; -[SCAdPlayableAttachment copyWithZone:] */

void FUN_1041ccde8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041ccdec; end: 1041cd077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ccdec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = param_1;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(_DAT_113813240);
  uVar1 = 0x454c424159414c50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c424159414c50,0xec0000004c52555f);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113813248))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113813248);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
  }
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1ef010);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar2);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113813250))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113813250);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
  }
  uVar1 = 0x4e4f43495f505041;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f43495f505041,0xec0000004c52555f);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar2);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113813258))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113813258);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
  }
  uVar1 = 0x4c5449545f505041;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c5449545f505041,0xe900000000000045);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar2);
  _objc_release(uVar1);
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1ef030);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  uVar2 = 0x54534e495f505041;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54534e495f505041,0xeb000000004c4c41);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1ef050);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1041cd078; end: 1041cd0c7; -[SCAdPlayableAttachment encodeWithCoder:] */

void FUN_1041cd078(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1041ccdec(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1041cd0c8; end: 1041cd0f7;  */

void FUN_1041cd0c8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1041cd0f8(param_1);
  return;
}



/* Entry: 1041cd0f8; end: 1041cd94f;  */

undefined8 FUN_1041cd0f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long alStack_100 [2];
  long lStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar11 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar6 = (long *)((long)&lStack_f0 - extraout_x8);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = (long)plVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0x454c424159414c50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c424159414c50,0xec0000004c52555f);
  lVar11 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar11 == 0) {
    uStack_98 = 0;
    lStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_a0,lVar11);
    _swift_unknownObjectRelease(lVar11);
  }
  puVar9 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  lStack_80 = lStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
    func_0x0001041cdbf0(&lStack_80,0x112d387f8,&UNK_10d902650);
    (**(code **)(lVar13 + 0x38))(plVar6,1,1,lVar3);
LAB_1041cd2a8:
    uVar4 = 0x112d36580;
    puVar9 = &UNK_10d9016d0;
  }
  else {
    plVar5 = plVar6;
    _swift_dynamicCast(plVar6,&lStack_80,PTR___sypN_11034f1a8 + 8,lVar3,6);
    (**(code **)(lVar13 + 0x38))(plVar6,(uint)plVar5 ^ 1,1,lVar3);
    plVar5 = plVar6;
    (**(code **)(lVar13 + 0x30))(plVar6,1,lVar3);
    if ((int)plVar5 == 1) {
      _objc_release(param_1);
      goto LAB_1041cd2a8;
    }
    (**(code **)(lVar13 + 0x20))(lVar10,plVar6,lVar3);
    uVar4 = 0xd000000000000013;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1ef010);
    lVar11 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (lVar11 == 0) {
      uStack_98 = 0;
      lStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_a0,lVar11);
      _swift_unknownObjectRelease(lVar11);
    }
    uStack_78 = uStack_98;
    lStack_80 = lStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 == 0) {
      func_0x0001041cdbf0(&lStack_80,0x112d387f8,&UNK_10d902650);
      lStack_c0 = 0;
      lStack_b8 = 0;
    }
    else {
      plVar6 = &lStack_b0;
      _swift_dynamicCast(plVar6,&lStack_80,puVar9 + 8,PTR___sSSN_11034da80,6);
      lStack_c0 = lStack_b0;
      lStack_b8 = lStack_a8;
      if ((int)plVar6 == 0) {
        lStack_c0 = 0;
        lStack_b8 = 0;
      }
    }
    uVar4 = 0x4e4f43495f505041;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f43495f505041,0xec0000004c52555f);
    lVar11 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (lVar11 == 0) {
      uStack_98 = 0;
      lStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_a0,lVar11);
      _swift_unknownObjectRelease(lVar11);
    }
    uStack_78 = uStack_98;
    lStack_80 = lStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 == 0) {
      func_0x0001041cdbf0(&lStack_80,0x112d387f8,&UNK_10d902650);
      lStack_c8 = 0;
      lVar11 = 0;
    }
    else {
      plVar6 = &lStack_b0;
      _swift_dynamicCast(plVar6,&lStack_80,puVar9 + 8,PTR___sSSN_11034da80,6);
      lVar11 = lStack_a8;
      lStack_c8 = lStack_b0;
      if ((int)plVar6 == 0) {
        lStack_c8 = 0;
        lVar11 = 0;
      }
    }
    uVar4 = 0x4c5449545f505041;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c5449545f505041,0xe900000000000045);
    lVar7 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (lVar7 == 0) {
      uStack_98 = 0;
      lStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_a0,lVar7);
      _swift_unknownObjectRelease(lVar7);
    }
    uStack_78 = uStack_98;
    lStack_80 = lStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 == 0) {
      func_0x0001041cdbf0(&lStack_80,0x112d387f8,&UNK_10d902650);
      lStack_d0 = 0;
      lVar7 = 0;
    }
    else {
      plVar6 = &lStack_b0;
      _swift_dynamicCast(plVar6,&lStack_80,puVar9 + 8,PTR___sSSN_11034da80,6);
      lVar7 = lStack_a8;
      lStack_d0 = lStack_b0;
      if ((int)plVar6 == 0) {
        lStack_d0 = 0;
        lVar7 = 0;
      }
    }
    uVar4 = 0xd000000000000010;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1ef030);
    lVar8 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (lVar8 == 0) {
      uStack_98 = 0;
      lStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_a0,lVar8);
      _swift_unknownObjectRelease(lVar8);
    }
    uStack_78 = uStack_98;
    lStack_80 = lStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 != 0) {
      uVar4 = 0;
      func_0x0001041bd148(0);
      plVar6 = &lStack_b0;
      _swift_dynamicCast(plVar6,&lStack_80,puVar9 + 8,uVar4,6);
      if (((ulong)plVar6 & 1) == 0) {
        (**(code **)(lVar13 + 8))(lVar10,lVar3);
      }
      else {
        lStack_d8 = lStack_b0;
        uVar4 = 0x54534e495f505041;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54534e495f505041,0xeb000000004c4c41)
        ;
        lVar8 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        if (lVar8 == 0) {
          uStack_98 = 0;
          lStack_a0 = 0;
          lStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_a0,lVar8);
          _swift_unknownObjectRelease(lVar8);
        }
        uStack_78 = uStack_98;
        lStack_80 = lStack_a0;
        lStack_68 = lStack_88;
        uStack_70 = uStack_90;
        if (lStack_88 == 0) {
          (**(code **)(lVar13 + 8))(lVar10,lVar3);
          _objc_release(param_1);
          param_1 = lStack_d8;
          goto LAB_1041cd76c;
        }
        uVar4 = 0;
        FUN_1041ca2d4(0);
        plVar6 = &lStack_b0;
        _swift_dynamicCast(plVar6,&lStack_80,puVar9 + 8,uVar4,6);
        if (((ulong)plVar6 & 1) != 0) {
          lStack_e0 = lStack_b0;
          uVar4 = 0xd000000000000011;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000011,0x800000010f1ef050);
          lVar8 = param_1;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          if (lVar8 == 0) {
            uStack_98 = 0;
            lStack_a0 = 0;
            lStack_88 = 0;
            uStack_90 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_a0,lVar8);
            _swift_unknownObjectRelease(lVar8);
          }
          uStack_78 = uStack_98;
          lStack_80 = lStack_a0;
          lStack_68 = lStack_88;
          uStack_70 = uStack_90;
          if (lStack_88 == 0) {
            plVar6 = &lStack_80;
            func_0x0001041cdbf0(plVar6,0x112d387f8,&UNK_10d902650);
            lVar8 = 0;
          }
          else {
            uVar4 = 0;
            FUN_1041e36e8(0);
            plVar6 = &lStack_b0;
            _swift_dynamicCast(plVar6,&lStack_80,puVar9 + 8,uVar4,6);
            lVar8 = lStack_b0;
            if ((int)plVar6 == 0) {
              lVar8 = 0;
            }
          }
          __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
          lVar12 = lStack_b8;
          plStack_e8 = plVar6;
          if (lStack_b8 == 0) {
            lStack_c0 = 0;
          }
          else {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_c0,lStack_b8);
            _swift_bridgeObjectRelease(lVar12);
          }
          if (lVar11 == 0) {
            lVar12 = 0;
          }
          else {
            lVar12 = lStack_c8;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_c8,lVar11);
            _swift_bridgeObjectRelease(lVar11);
          }
          if (lVar7 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = lStack_d0;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_d0,lVar7);
            _swift_bridgeObjectRelease(lVar7);
          }
          *(long *)(lVar10 + -0x10) = lVar8;
          lVar2 = lStack_c0;
          lVar1 = lStack_d8;
          lVar7 = lStack_e0;
          plVar6 = plStack_e8;
          lStack_c8 = lVar8;
          func_0x00010c036ba0();
          lStack_b8 = unaff_x20;
          _objc_release(param_1);
          _objc_release(plVar6);
          _objc_release(lVar2);
          _objc_release(lVar12);
          _objc_release(lVar11);
          _objc_release(lVar7);
          _objc_release(lStack_c8);
          _objc_release(lVar1);
          (**(code **)(lVar13 + 8))(lVar10,lVar3);
          return lStack_b8;
        }
        (**(code **)(lVar13 + 8))(lVar10,lVar3);
        _objc_release(param_1);
        param_1 = lStack_d8;
      }
      _objc_release(param_1);
      _swift_bridgeObjectRelease(lVar7);
      _swift_bridgeObjectRelease(lVar11);
      _swift_bridgeObjectRelease(lStack_b8);
      goto LAB_1041cd2c0;
    }
    (**(code **)(lVar13 + 8))(lVar10,lVar3);
LAB_1041cd76c:
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar7);
    _swift_bridgeObjectRelease(lVar11);
    _swift_bridgeObjectRelease(lStack_b8);
    uVar4 = 0x112d387f8;
    puVar9 = &UNK_10d902650;
    plVar6 = &lStack_80;
  }
  func_0x0001041cdbf0(plVar6,uVar4,puVar9);
LAB_1041cd2c0:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1041cd950; end: 1041cd977; -[SCAdPlayableAttachment initWithCoder:] */

void FUN_1041cd950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1041cd0f8();
  return;
}



/* Entry: 1041cd978; end: 1041cda03; -[SCAdPlayableAttachment description] */

void FUN_1041cd978(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x000100b91b84();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1041cc320(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001041cdbb4(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      &SUB_100b91b84);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041cda04; end: 1041cda7f; -[SCAdPlayableAttachment init] */

void FUN_1041cda04(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdAttachmentHandlerScope/AdPlayableAttachmentWrapper.swift",0x3a,2,0x88,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041cda4c);
  (*pcVar1)();
}



/* Entry: 1041cda80; end: 1041cdc2f; -[SCAdPlayableAttachment .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041cda80(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_113813240;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113813248 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113813250 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113813258 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113813260));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113813268));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113813270));
  return;
}



/* Entry: 1041cdc30; end: 1041cdc37;  */

void FUN_1041cdc30(void)

{
  if (lRam0000000113068460 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7f52ec);
  return;
}



/* Entry: 1041cdc38; end: 1041cdc6f;  */

void FUN_1041cdc38(undefined8 param_1)

{
  if (lRam0000000113068460 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7f52ec);
  return;
}



/* Entry: 1041cdc70; end: 1041cdd03;  */

void FUN_1041cdc70(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    lStack_58 = *(long *)(lVar1 + -8) + 0x40;
    puStack_50 = &UNK_10dce0bf0;
    puStack_48 = &UNK_10dce0bf0;
    puStack_40 = &UNK_10dce0bf0;
    puStack_38 = PTR___sBOWV_11034d658 + 0x40;
    puStack_28 = &UNK_10dce0c08;
    puStack_30 = puStack_38;
    _swift_updateClassMetadata2(param_1,0x100,7,&lStack_58,param_1 + 0x50);
  }
  return;
}



/* Entry: 1041cdd04; end: 1041cdd43;  */

void FUN_1041cdd04(undefined8 param_1,byte param_2)

{
  if (param_2 < 2) {
    if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)();
      return;
    }
    if (param_2 != 1) {
      return;
    }
  }
  else if (((param_2 != 2) && (param_2 != 3)) && (param_2 != 4)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 1041cdd44; end: 1041cdd7b;  */

void FUN_1041cdd44(undefined8 param_1)

{
  if (lRam00000001130684c8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7f5350);
  return;
}



/* Entry: 1041cdd7c; end: 1041cddbf;  */

undefined8 FUN_1041cdd7c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100b91cc8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1041cddc0; end: 1041cddc3;  */

byte FUN_1041cddc0(long *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  
  lVar10 = *param_1;
  bVar9 = *(byte *)(param_1 + 1);
  lVar8 = *param_2;
  cVar2 = (char)param_2[1];
  if (bVar9 < 3) {
    if (bVar9 == 0) {
      if (cVar2 != '\0' || lVar10 != lVar8) goto LAB_1041cdf74;
      goto LAB_1041cde68;
    }
    if (bVar9 == 1) {
      if (cVar2 == '\x01' && lVar10 == lVar8) goto LAB_1041cde68;
    }
    else if (cVar2 == '\x02' && lVar10 == lVar8) goto LAB_1041cde68;
  }
  else {
    if (bVar9 == 3) {
      if (cVar2 != '\x03' || lVar10 != lVar8) goto LAB_1041cdf74;
    }
    else if (bVar9 == 4) {
      if (cVar2 != '\x04' || lVar10 != lVar8) goto LAB_1041cdf74;
    }
    else if (lVar10 < 2) {
      if (lVar10 == 0) {
        bVar9 = 0;
        if ((cVar2 != '\x05') || (lVar8 != 0)) goto LAB_1041cdf78;
      }
      else {
        bVar9 = 0;
        if ((cVar2 != '\x05') || (lVar8 != 1)) goto LAB_1041cdf78;
      }
    }
    else if (lVar10 == 2) {
      bVar9 = 0;
      if ((cVar2 != '\x05') || (lVar8 != 2)) goto LAB_1041cdf78;
    }
    else {
      bVar9 = 0;
      if ((cVar2 != '\x05') || (lVar8 != 3)) goto LAB_1041cdf78;
    }
LAB_1041cde68:
    lVar10 = 0;
    FUN_1041cdd44();
    uVar1 = (long)param_1 + (long)*(int *)(lVar10 + 0x14);
    lVar8 = (long)param_2 + (long)*(int *)(lVar10 + 0x14);
    uVar3 = uVar1;
    func_0x0001046cae58(uVar1,lVar8);
    if ((uVar3 & 1) != 0) {
      lVar4 = 0;
      func_0x000100b91cc8();
      if (*(long *)(uVar1 + (long)*(int *)(lVar4 + 0x14)) ==
          *(long *)(lVar8 + *(int *)(lVar4 + 0x14))) {
        uVar5 = *(undefined8 *)(uVar1 + (long)*(int *)(lVar4 + 0x18));
        __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                  (uVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
        uVar6 = *(undefined8 *)(lVar8 + *(int *)(lVar4 + 0x18));
        func_0x00010018cc3c(uVar6);
        uVar7 = uVar6;
        __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
        _swift_bridgeObjectRelease(uVar6);
        uVar6 = uVar5;
        func_0x00010c071d00();
        _objc_release(uVar5);
        _objc_release(uVar7);
        if ((int)uVar6 != 0) {
          uVar3 = uVar1 + (long)*(int *)(lVar4 + 0x1c);
          FUN_1041e3a64(uVar3,lVar8 + *(int *)(lVar4 + 0x1c));
          if (((uVar3 & 1) != 0) &&
             (*(int *)(uVar1 + (long)*(int *)(lVar4 + 0x20)) ==
              *(int *)(lVar8 + *(int *)(lVar4 + 0x20)))) {
            bVar9 = *(byte *)((long)param_1 + (long)*(int *)(lVar10 + 0x18)) ^
                    *(byte *)((long)param_2 + (long)*(int *)(lVar10 + 0x18)) ^ 1;
            goto LAB_1041cdf78;
          }
        }
      }
    }
  }
LAB_1041cdf74:
  bVar9 = 0;
LAB_1041cdf78:
  return bVar9 & 1;
}



/* Entry: 1041cddc4; end: 1041cfa0f;  */

byte FUN_1041cddc4(long *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  
  lVar10 = *param_1;
  bVar9 = *(byte *)(param_1 + 1);
  lVar8 = *param_2;
  cVar2 = (char)param_2[1];
  if (bVar9 < 3) {
    if (bVar9 == 0) {
      if (cVar2 != '\0' || lVar10 != lVar8) goto LAB_1041cdf74;
      goto LAB_1041cde68;
    }
    if (bVar9 == 1) {
      if (cVar2 == '\x01' && lVar10 == lVar8) goto LAB_1041cde68;
    }
    else if (cVar2 == '\x02' && lVar10 == lVar8) goto LAB_1041cde68;
  }
  else {
    if (bVar9 == 3) {
      if (cVar2 != '\x03' || lVar10 != lVar8) goto LAB_1041cdf74;
    }
    else if (bVar9 == 4) {
      if (cVar2 != '\x04' || lVar10 != lVar8) goto LAB_1041cdf74;
    }
    else if (lVar10 < 2) {
      if (lVar10 == 0) {
        bVar9 = 0;
        if ((cVar2 != '\x05') || (lVar8 != 0)) goto LAB_1041cdf78;
      }
      else {
        bVar9 = 0;
        if ((cVar2 != '\x05') || (lVar8 != 1)) goto LAB_1041cdf78;
      }
    }
    else if (lVar10 == 2) {
      bVar9 = 0;
      if ((cVar2 != '\x05') || (lVar8 != 2)) goto LAB_1041cdf78;
    }
    else {
      bVar9 = 0;
      if ((cVar2 != '\x05') || (lVar8 != 3)) goto LAB_1041cdf78;
    }
LAB_1041cde68:
    lVar10 = 0;
    FUN_1041cdd44();
    uVar1 = (long)param_1 + (long)*(int *)(lVar10 + 0x14);
    lVar8 = (long)param_2 + (long)*(int *)(lVar10 + 0x14);
    uVar3 = uVar1;
    func_0x0001046cae58(uVar1,lVar8);
    if ((uVar3 & 1) != 0) {
      lVar4 = 0;
      func_0x000100b91cc8();
      if (*(long *)(uVar1 + (long)*(int *)(lVar4 + 0x14)) ==
          *(long *)(lVar8 + *(int *)(lVar4 + 0x14))) {
        uVar5 = *(undefined8 *)(uVar1 + (long)*(int *)(lVar4 + 0x18));
        __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                  (uVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
        uVar6 = *(undefined8 *)(lVar8 + *(int *)(lVar4 + 0x18));
        func_0x00010018cc3c(uVar6);
        uVar7 = uVar6;
        __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
        _swift_bridgeObjectRelease(uVar6);
        uVar6 = uVar5;
        func_0x00010c071d00();
        _objc_release(uVar5);
        _objc_release(uVar7);
        if ((int)uVar6 != 0) {
          uVar3 = uVar1 + (long)*(int *)(lVar4 + 0x1c);
          FUN_1041e3a64(uVar3,lVar8 + *(int *)(lVar4 + 0x1c));
          if (((uVar3 & 1) != 0) &&
             (*(int *)(uVar1 + (long)*(int *)(lVar4 + 0x20)) ==
              *(int *)(lVar8 + *(int *)(lVar4 + 0x20)))) {
            bVar9 = *(byte *)((long)param_1 + (long)*(int *)(lVar10 + 0x18)) ^
                    *(byte *)((long)param_2 + (long)*(int *)(lVar10 + 0x18)) ^ 1;
            goto LAB_1041cdf78;
          }
        }
      }
    }
  }
LAB_1041cdf74:
  bVar9 = 0;
LAB_1041cdf78:
  return bVar9 & 1;
}



/* Entry: 1041cfa10; end: 1041cfa4f;  */

void FUN_1041cfa10(undefined8 param_1,byte param_2)

{
  if (param_2 < 2) {
    if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
    if (param_2 != 1) {
      return;
    }
  }
  else if (((param_2 != 2) && (param_2 != 3)) && (param_2 != 4)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1041cfa50; end: 1041d4207;  */

undefined8 * FUN_1041cfa50(undefined8 *param_1,undefined8 *param_2,long param_3)

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
  undefined1 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  code *pcVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  long lVar34;
  code *pcVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  
  uVar23 = *param_2;
  uVar11 = *(undefined1 *)(param_2 + 1);
  FUN_1041cdd04(uVar23,uVar11);
  *param_1 = uVar23;
  *(undefined1 *)(param_1 + 1) = uVar11;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar23 = *puVar2;
  uVar29 = puVar2[3];
  uVar27 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar23;
  puVar1[3] = uVar29;
  puVar1[2] = uVar27;
  uVar23 = puVar2[4];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar23;
  uVar23 = puVar2[6];
  uVar27 = puVar2[7];
  puVar1[6] = uVar23;
  puVar1[7] = uVar27;
  uVar27 = puVar2[8];
  uVar29 = puVar2[9];
  puVar1[8] = uVar27;
  puVar1[9] = uVar29;
  uVar29 = puVar2[10];
  uVar6 = puVar2[0xb];
  puVar1[10] = uVar29;
  puVar1[0xb] = uVar6;
  uVar6 = puVar2[0xc];
  uVar36 = puVar2[0xd];
  puVar1[0xc] = uVar6;
  puVar1[0xd] = uVar36;
  uVar36 = puVar2[0xe];
  uVar33 = puVar2[0xf];
  puVar1[0xe] = uVar36;
  puVar1[0xf] = uVar33;
  uVar33 = puVar2[0x10];
  puVar1[0x10] = uVar33;
  lVar12 = 0;
  func_0x000100b91d00();
  lVar31 = (long)*(int *)(lVar12 + 0x3c);
  lVar13 = 0;
  __s10Foundation4UUIDVMa();
  lVar18 = *(long *)(lVar13 + -8);
  pcVar35 = *(code **)(lVar18 + 0x30);
  _swift_bridgeObjectRetain(uVar23);
  _swift_bridgeObjectRetain(uVar27);
  _swift_bridgeObjectRetain(uVar29);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar36);
  _swift_bridgeObjectRetain(uVar33);
  lVar24 = (long)puVar2 + lVar31;
  (*pcVar35)(lVar24,1,lVar13);
  if ((int)lVar24 == 0) {
    (**(code **)(lVar18 + 0x10))((long)puVar1 + lVar31,(long)puVar2 + lVar31,lVar13);
    (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar31,0,1,lVar13);
  }
  else {
    lVar24 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)puVar1 + lVar31,(long)puVar2 + lVar31,
            *(undefined8 *)(*(long *)(lVar24 + -8) + 0x40));
  }
  lVar31 = (long)*(int *)(lVar12 + 0x40);
  lVar24 = (long)puVar2 + lVar31;
  (*pcVar35)(lVar24,1,lVar13);
  if ((int)lVar24 == 0) {
    (**(code **)(lVar18 + 0x10))((long)puVar1 + lVar31,(long)puVar2 + lVar31,lVar13);
    (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar31,0,1,lVar13);
  }
  else {
    lVar24 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)puVar1 + lVar31,(long)puVar2 + lVar31,
            *(undefined8 *)(*(long *)(lVar24 + -8) + 0x40));
  }
  lVar31 = (long)*(int *)(lVar12 + 0x44);
  lVar24 = (long)puVar2 + lVar31;
  (*pcVar35)(lVar24,1,lVar13);
  if ((int)lVar24 == 0) {
    (**(code **)(lVar18 + 0x10))((long)puVar1 + lVar31,(long)puVar2 + lVar31,lVar13);
    (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar31,0,1,lVar13);
  }
  else {
    lVar24 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)puVar1 + lVar31,(long)puVar2 + lVar31,
            *(undefined8 *)(*(long *)(lVar24 + -8) + 0x40));
  }
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x48)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x48));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x4c)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x4c));
  uVar23 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x50));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x50)) = uVar23;
  uVar27 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x54));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x54)) = uVar27;
  uVar29 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x58));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x58)) = uVar29;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x5c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x5c));
  lVar24 = puVar4[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar23);
  _swift_bridgeObjectRetain(uVar27);
  _swift_bridgeObjectRetain(uVar29);
  if (lVar24 == 1) {
    uVar23 = puVar4[0xc];
    uVar29 = puVar4[0xf];
    uVar27 = puVar4[0xe];
    puVar3[0xd] = puVar4[0xd];
    puVar3[0xc] = uVar23;
    puVar3[0xf] = uVar29;
    puVar3[0xe] = uVar27;
    uVar23 = puVar4[0x10];
    uVar29 = puVar4[0x13];
    uVar27 = puVar4[0x12];
    puVar3[0x11] = puVar4[0x11];
    puVar3[0x10] = uVar23;
    puVar3[0x13] = uVar29;
    puVar3[0x12] = uVar27;
    uVar23 = puVar4[4];
    uVar29 = puVar4[7];
    uVar27 = puVar4[6];
    puVar3[5] = puVar4[5];
    puVar3[4] = uVar23;
    puVar3[7] = uVar29;
    puVar3[6] = uVar27;
    uVar23 = puVar4[8];
    uVar29 = puVar4[0xb];
    uVar27 = puVar4[10];
    puVar3[9] = puVar4[9];
    puVar3[8] = uVar23;
    puVar3[0xb] = uVar29;
    puVar3[10] = uVar27;
    uVar23 = *puVar4;
    uVar29 = puVar4[3];
    uVar27 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar23;
    puVar3[3] = uVar29;
    puVar3[2] = uVar27;
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar24;
    uVar23 = puVar4[3];
    puVar3[2] = puVar4[2];
    puVar3[3] = uVar23;
    uVar27 = puVar4[5];
    puVar3[4] = puVar4[4];
    puVar3[5] = uVar27;
    uVar29 = puVar4[7];
    puVar3[6] = puVar4[6];
    puVar3[7] = uVar29;
    uVar6 = puVar4[9];
    puVar3[8] = puVar4[8];
    puVar3[9] = uVar6;
    *(undefined1 *)(puVar3 + 10) = *(undefined1 *)(puVar4 + 10);
    uVar36 = puVar4[0xb];
    puVar3[0xc] = puVar4[0xc];
    puVar3[0xb] = uVar36;
    lVar31 = puVar4[0x12];
    _swift_bridgeObjectRetain(lVar24);
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar29);
    _swift_bridgeObjectRetain(uVar6);
    if (lVar31 == 0) {
      uVar23 = puVar4[0xd];
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xd] = uVar23;
      uVar23 = puVar4[0xf];
      puVar3[0x10] = puVar4[0x10];
      puVar3[0xf] = uVar23;
      uVar23 = puVar4[0x11];
      puVar3[0x12] = puVar4[0x12];
      puVar3[0x11] = uVar23;
      puVar3[0x13] = puVar4[0x13];
    }
    else {
      uVar23 = puVar4[0xe];
      puVar3[0xd] = puVar4[0xd];
      puVar3[0xe] = uVar23;
      uVar23 = puVar4[0x10];
      puVar3[0xf] = puVar4[0xf];
      puVar3[0x10] = uVar23;
      puVar3[0x11] = puVar4[0x11];
      puVar3[0x12] = lVar31;
      puVar3[0x13] = puVar4[0x13];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(lVar31);
    }
  }
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x60)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x60));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 100));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 100));
  lVar24 = puVar4[1];
  if (lVar24 == 1) {
    uVar23 = *puVar4;
    uVar29 = puVar4[3];
    uVar27 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar23;
    puVar3[3] = uVar29;
    puVar3[2] = uVar27;
    puVar3[4] = puVar4[4];
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar24;
    puVar3[2] = puVar4[2];
    *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(puVar4 + 3);
    *(undefined2 *)((long)puVar3 + 0x19) = *(undefined2 *)((long)puVar4 + 0x19);
    puVar3[4] = puVar4[4];
    _swift_bridgeObjectRetain();
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x68));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x68));
  if (puVar4[0x27] == 0) {
    _memcpy(puVar3,puVar4,0x160);
  }
  else {
    uVar23 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar23;
    uVar23 = puVar4[2];
    uVar27 = puVar4[3];
    puVar3[2] = uVar23;
    puVar3[3] = uVar27;
    uVar20 = puVar4[4];
    puVar3[4] = uVar20;
    uVar27 = puVar4[5];
    puVar3[6] = puVar4[6];
    puVar3[5] = uVar27;
    uVar22 = puVar4[7];
    uVar27 = puVar4[8];
    puVar3[7] = uVar22;
    puVar3[8] = uVar27;
    *(undefined2 *)(puVar3 + 9) = *(undefined2 *)(puVar4 + 9);
    *(undefined1 *)((long)puVar3 + 0x4a) = *(undefined1 *)((long)puVar4 + 0x4a);
    uVar27 = puVar4[0xb];
    puVar3[10] = puVar4[10];
    puVar3[0xb] = uVar27;
    uVar21 = puVar4[0xc];
    puVar3[0xc] = uVar21;
    *(undefined1 *)(puVar3 + 0xd) = *(undefined1 *)(puVar4 + 0xd);
    uVar29 = puVar4[0xe];
    puVar3[0xf] = puVar4[0xf];
    puVar3[0xe] = uVar29;
    *(undefined1 *)(puVar3 + 0x10) = *(undefined1 *)(puVar4 + 0x10);
    uVar29 = puVar4[0x12];
    puVar3[0x11] = puVar4[0x11];
    puVar3[0x12] = uVar29;
    uVar6 = puVar4[0x14];
    puVar3[0x13] = puVar4[0x13];
    puVar3[0x14] = uVar6;
    uVar36 = puVar4[0x16];
    puVar3[0x15] = puVar4[0x15];
    puVar3[0x16] = uVar36;
    uVar33 = puVar4[0x18];
    puVar3[0x17] = puVar4[0x17];
    puVar3[0x18] = uVar33;
    uVar7 = puVar4[0x1a];
    puVar3[0x19] = puVar4[0x19];
    puVar3[0x1a] = uVar7;
    uVar37 = puVar4[0x1b];
    puVar3[0x1c] = puVar4[0x1c];
    puVar3[0x1b] = uVar37;
    uVar28 = puVar4[0x1d];
    puVar3[0x1d] = uVar28;
    *(undefined1 *)(puVar3 + 0x1e) = *(undefined1 *)(puVar4 + 0x1e);
    *(undefined1 *)((long)puVar3 + 0xf1) = *(undefined1 *)((long)puVar4 + 0xf1);
    *(undefined1 *)((long)puVar3 + 0xf2) = *(undefined1 *)((long)puVar4 + 0xf2);
    uVar37 = puVar4[0x20];
    puVar3[0x1f] = puVar4[0x1f];
    puVar3[0x20] = uVar37;
    uVar8 = puVar4[0x22];
    puVar3[0x21] = puVar4[0x21];
    puVar3[0x22] = uVar8;
    uVar9 = puVar4[0x24];
    puVar3[0x23] = puVar4[0x23];
    puVar3[0x24] = uVar9;
    uVar10 = puVar4[0x26];
    puVar3[0x25] = puVar4[0x25];
    puVar3[0x26] = uVar10;
    uVar26 = puVar4[0x27];
    puVar3[0x27] = uVar26;
    uVar38 = puVar4[0x28];
    puVar3[0x29] = puVar4[0x29];
    puVar3[0x28] = uVar38;
    uVar38 = puVar4[0x2b];
    puVar3[0x2a] = puVar4[0x2a];
    puVar3[0x2b] = uVar38;
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar22);
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar21);
    _swift_bridgeObjectRetain(uVar29);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar36);
    _swift_bridgeObjectRetain(uVar33);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar28);
    _swift_bridgeObjectRetain(uVar37);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar26);
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x6c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x6c));
  uVar25 = puVar4[1];
  if (uVar25 >> 0x3c < 0xf) {
    uVar23 = *puVar4;
    func_0x00010006c00c(uVar23,uVar25);
    *puVar3 = uVar23;
    puVar3[1] = uVar25;
  }
  else {
    uVar23 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar23;
  }
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x70)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x70));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x74));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x74));
  uVar23 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar23;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x78));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x78));
  uVar23 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar23;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x7c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x7c));
  uVar27 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar27;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x80));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x80));
  uVar25 = puVar4[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar23);
  _swift_bridgeObjectRetain(uVar27);
  if (uVar25 >> 0x3c < 0xf) {
    uVar23 = *puVar4;
    func_0x00010006c00c(uVar23,uVar25);
    *puVar3 = uVar23;
    puVar3[1] = uVar25;
  }
  else {
    uVar23 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar23;
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x84));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x84));
  lVar24 = 0;
  func_0x000100b91fbc();
  lVar31 = *(long *)(lVar24 + -8);
  puVar14 = puVar4;
  (**(code **)(lVar31 + 0x30))(puVar4,1,lVar24);
  if ((int)puVar14 == 0) {
    uVar23 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar23;
    uVar23 = puVar4[2];
    uVar29 = puVar4[5];
    uVar27 = puVar4[4];
    puVar3[3] = puVar4[3];
    puVar3[2] = uVar23;
    puVar3[5] = uVar29;
    puVar3[4] = uVar27;
    uVar23 = puVar4[6];
    uVar27 = puVar4[7];
    puVar3[6] = uVar23;
    puVar3[7] = uVar27;
    uVar27 = puVar4[8];
    puVar3[8] = uVar27;
    lVar34 = (long)*(int *)(lVar24 + 0x28);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar27);
    lVar15 = (long)puVar4 + lVar34;
    (*pcVar35)(lVar15,1,lVar13);
    if ((int)lVar15 == 0) {
      (**(code **)(lVar18 + 0x10))((long)puVar3 + lVar34,(long)puVar4 + lVar34,lVar13);
      (**(code **)(lVar18 + 0x38))((long)puVar3 + lVar34,0,1,lVar13);
    }
    else {
      lVar15 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar3 + lVar34,(long)puVar4 + lVar34,
              *(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
    }
    puVar14 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar24 + 0x2c));
    puVar17 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar24 + 0x2c));
    uVar23 = puVar17[1];
    *puVar14 = *puVar17;
    puVar14[1] = uVar23;
    puVar14 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar24 + 0x30));
    puVar17 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar24 + 0x30));
    uVar23 = puVar17[1];
    *puVar14 = *puVar17;
    puVar14[1] = uVar23;
    lVar34 = (long)*(int *)(lVar24 + 0x34);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar23);
    lVar15 = (long)puVar4 + lVar34;
    (*pcVar35)(lVar15,1,lVar13);
    if ((int)lVar15 == 0) {
      (**(code **)(lVar18 + 0x10))((long)puVar3 + lVar34,(long)puVar4 + lVar34,lVar13);
      (**(code **)(lVar18 + 0x38))((long)puVar3 + lVar34,0,1,lVar13);
    }
    else {
      lVar15 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar3 + lVar34,(long)puVar4 + lVar34,
              *(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
    }
    puVar14 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar24 + 0x38));
    puVar17 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar24 + 0x38));
    uVar23 = puVar17[1];
    *puVar14 = *puVar17;
    puVar14[1] = uVar23;
    puVar14 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar24 + 0x3c));
    puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar24 + 0x3c));
    uVar23 = puVar4[1];
    *puVar14 = *puVar4;
    puVar14[1] = uVar23;
    pcVar30 = *(code **)(lVar31 + 0x38);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar23);
    (*pcVar30)(puVar3,0,1,lVar24);
  }
  else {
    lVar24 = 0x112db39a8;
    func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
    _memcpy(puVar3,puVar4,*(undefined8 *)(*(long *)(lVar24 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x88));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x88));
  lVar24 = puVar4[1];
  if (lVar24 == 0) {
    uVar23 = puVar4[0x10];
    uVar29 = puVar4[0x13];
    uVar27 = puVar4[0x12];
    puVar3[0x11] = puVar4[0x11];
    puVar3[0x10] = uVar23;
    puVar3[0x13] = uVar29;
    puVar3[0x12] = uVar27;
    *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
    uVar23 = puVar4[8];
    uVar29 = puVar4[0xb];
    uVar27 = puVar4[10];
    puVar3[9] = puVar4[9];
    puVar3[8] = uVar23;
    puVar3[0xb] = uVar29;
    puVar3[10] = uVar27;
    uVar29 = puVar4[0xc];
    uVar27 = puVar4[0xf];
    uVar23 = puVar4[0xe];
    puVar3[0xd] = puVar4[0xd];
    puVar3[0xc] = uVar29;
    puVar3[0xf] = uVar27;
    puVar3[0xe] = uVar23;
    uVar23 = *puVar4;
    uVar29 = puVar4[3];
    uVar27 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar23;
    puVar3[3] = uVar29;
    puVar3[2] = uVar27;
    uVar29 = puVar4[4];
    uVar27 = puVar4[7];
    uVar23 = puVar4[6];
    puVar3[5] = puVar4[5];
    puVar3[4] = uVar29;
    puVar3[7] = uVar27;
    puVar3[6] = uVar23;
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar24;
    lVar24 = puVar4[8];
    _swift_bridgeObjectRetain();
    if (lVar24 == 1) {
      uVar23 = puVar4[2];
      uVar29 = puVar4[5];
      uVar27 = puVar4[4];
      puVar3[3] = puVar4[3];
      puVar3[2] = uVar23;
      puVar3[5] = uVar29;
      puVar3[4] = uVar27;
      uVar23 = puVar4[6];
      puVar3[7] = puVar4[7];
      puVar3[6] = uVar23;
      puVar3[8] = puVar4[8];
    }
    else {
      lVar31 = puVar4[4];
      if (lVar31 == 1) {
        uVar23 = puVar4[2];
        uVar29 = puVar4[5];
        uVar27 = puVar4[4];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar23;
        puVar3[5] = uVar29;
        puVar3[4] = uVar27;
        puVar3[6] = puVar4[6];
      }
      else {
        uVar23 = puVar4[2];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar23;
        uVar23 = puVar4[5];
        uVar27 = puVar4[6];
        puVar3[4] = lVar31;
        puVar3[5] = uVar23;
        puVar3[6] = uVar27;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar27);
      }
      puVar3[7] = puVar4[7];
      puVar3[8] = lVar24;
      _swift_bridgeObjectRetain(lVar24);
    }
    lVar24 = puVar4[0xf];
    if (lVar24 == 1) {
      uVar23 = puVar4[9];
      puVar3[10] = puVar4[10];
      puVar3[9] = uVar23;
      uVar23 = puVar4[0xb];
      puVar3[0xc] = puVar4[0xc];
      puVar3[0xb] = uVar23;
      uVar23 = puVar4[0xd];
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xd] = uVar23;
      puVar3[0xf] = puVar4[0xf];
    }
    else {
      lVar31 = puVar4[0xb];
      if (lVar31 == 1) {
        uVar23 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar23;
        uVar23 = puVar4[0xb];
        puVar3[0xc] = puVar4[0xc];
        puVar3[0xb] = uVar23;
        puVar3[0xd] = puVar4[0xd];
      }
      else {
        uVar23 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar23;
        uVar23 = puVar4[0xc];
        uVar27 = puVar4[0xd];
        puVar3[0xb] = lVar31;
        puVar3[0xc] = uVar23;
        puVar3[0xd] = uVar27;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar27);
      }
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xf] = lVar24;
      _swift_bridgeObjectRetain(lVar24);
    }
    *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(puVar4 + 0x10);
    uVar23 = puVar4[0x11];
    puVar3[0x12] = puVar4[0x12];
    puVar3[0x11] = uVar23;
    puVar3[0x13] = puVar4[0x13];
    *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
    _swift_bridgeObjectRetain();
  }
  *(undefined4 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x8c)) =
       *(undefined4 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x8c));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x90)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x90));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x94));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x94));
  uVar23 = *puVar4;
  uVar29 = puVar4[3];
  uVar27 = puVar4[2];
  puVar3[1] = puVar4[1];
  *puVar3 = uVar23;
  puVar3[3] = uVar29;
  puVar3[2] = uVar27;
  uVar23 = puVar4[4];
  uVar29 = puVar4[7];
  uVar27 = puVar4[6];
  puVar3[5] = puVar4[5];
  puVar3[4] = uVar23;
  puVar3[7] = uVar29;
  puVar3[6] = uVar27;
  uVar29 = puVar4[0xc];
  uVar27 = puVar4[0xf];
  uVar23 = puVar4[0xe];
  puVar3[0xd] = puVar4[0xd];
  puVar3[0xc] = uVar29;
  puVar3[0xf] = uVar27;
  puVar3[0xe] = uVar23;
  uVar29 = puVar4[8];
  uVar27 = puVar4[0xb];
  uVar23 = puVar4[10];
  puVar3[9] = puVar4[9];
  puVar3[8] = uVar29;
  puVar3[0xb] = uVar27;
  puVar3[10] = uVar23;
  uVar23 = *(undefined8 *)((long)puVar4 + 0xa9);
  *(undefined8 *)((long)puVar3 + 0xb1) = *(undefined8 *)((long)puVar4 + 0xb1);
  *(undefined8 *)((long)puVar3 + 0xa9) = uVar23;
  uVar23 = puVar4[0x12];
  uVar29 = puVar4[0x15];
  uVar27 = puVar4[0x14];
  puVar3[0x13] = puVar4[0x13];
  puVar3[0x12] = uVar23;
  puVar3[0x15] = uVar29;
  puVar3[0x14] = uVar27;
  uVar23 = puVar4[0x10];
  puVar3[0x11] = puVar4[0x11];
  puVar3[0x10] = uVar23;
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x98)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x98));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x9c)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x9c));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xa0)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xa0));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xa4)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xa4));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xa8)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xa8));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xac));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xac));
  lVar24 = puVar4[1];
  if (lVar24 == 0) {
    uVar23 = *puVar4;
    uVar29 = puVar4[3];
    uVar27 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar23;
    puVar3[3] = uVar29;
    puVar3[2] = uVar27;
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar24;
    uVar23 = puVar4[3];
    puVar3[2] = puVar4[2];
    puVar3[3] = uVar23;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar23);
  }
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xb0)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xb0));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xb4)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xb4));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xb8));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xb8));
  lVar24 = puVar4[1];
  if (lVar24 == 0) {
    uVar23 = puVar4[0x10];
    uVar29 = puVar4[0x13];
    uVar27 = puVar4[0x12];
    puVar3[0x11] = puVar4[0x11];
    puVar3[0x10] = uVar23;
    puVar3[0x13] = uVar29;
    puVar3[0x12] = uVar27;
    *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
    uVar23 = puVar4[8];
    uVar29 = puVar4[0xb];
    uVar27 = puVar4[10];
    puVar3[9] = puVar4[9];
    puVar3[8] = uVar23;
    puVar3[0xb] = uVar29;
    puVar3[10] = uVar27;
    uVar29 = puVar4[0xc];
    uVar27 = puVar4[0xf];
    uVar23 = puVar4[0xe];
    puVar3[0xd] = puVar4[0xd];
    puVar3[0xc] = uVar29;
    puVar3[0xf] = uVar27;
    puVar3[0xe] = uVar23;
    uVar23 = *puVar4;
    uVar29 = puVar4[3];
    uVar27 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar23;
    puVar3[3] = uVar29;
    puVar3[2] = uVar27;
    uVar29 = puVar4[4];
    uVar27 = puVar4[7];
    uVar23 = puVar4[6];
    puVar3[5] = puVar4[5];
    puVar3[4] = uVar29;
    puVar3[7] = uVar27;
    puVar3[6] = uVar23;
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar24;
    lVar24 = puVar4[8];
    _swift_bridgeObjectRetain();
    if (lVar24 == 1) {
      uVar23 = puVar4[2];
      uVar29 = puVar4[5];
      uVar27 = puVar4[4];
      puVar3[3] = puVar4[3];
      puVar3[2] = uVar23;
      puVar3[5] = uVar29;
      puVar3[4] = uVar27;
      uVar23 = puVar4[6];
      puVar3[7] = puVar4[7];
      puVar3[6] = uVar23;
      puVar3[8] = puVar4[8];
    }
    else {
      lVar31 = puVar4[4];
      if (lVar31 == 1) {
        uVar23 = puVar4[2];
        uVar29 = puVar4[5];
        uVar27 = puVar4[4];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar23;
        puVar3[5] = uVar29;
        puVar3[4] = uVar27;
        puVar3[6] = puVar4[6];
      }
      else {
        uVar23 = puVar4[2];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar23;
        uVar23 = puVar4[5];
        uVar27 = puVar4[6];
        puVar3[4] = lVar31;
        puVar3[5] = uVar23;
        puVar3[6] = uVar27;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar27);
      }
      puVar3[7] = puVar4[7];
      puVar3[8] = lVar24;
      _swift_bridgeObjectRetain(lVar24);
    }
    lVar24 = puVar4[0xf];
    if (lVar24 == 1) {
      uVar23 = puVar4[9];
      puVar3[10] = puVar4[10];
      puVar3[9] = uVar23;
      uVar23 = puVar4[0xb];
      puVar3[0xc] = puVar4[0xc];
      puVar3[0xb] = uVar23;
      uVar23 = puVar4[0xd];
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xd] = uVar23;
      puVar3[0xf] = puVar4[0xf];
    }
    else {
      lVar31 = puVar4[0xb];
      if (lVar31 == 1) {
        uVar23 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar23;
        uVar23 = puVar4[0xb];
        puVar3[0xc] = puVar4[0xc];
        puVar3[0xb] = uVar23;
        puVar3[0xd] = puVar4[0xd];
      }
      else {
        uVar23 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar23;
        uVar23 = puVar4[0xc];
        uVar27 = puVar4[0xd];
        puVar3[0xb] = lVar31;
        puVar3[0xc] = uVar23;
        puVar3[0xd] = uVar27;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar27);
      }
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xf] = lVar24;
      _swift_bridgeObjectRetain(lVar24);
    }
    *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(puVar4 + 0x10);
    uVar23 = puVar4[0x11];
    puVar3[0x12] = puVar4[0x12];
    puVar3[0x11] = uVar23;
    puVar3[0x13] = puVar4[0x13];
    *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
    _swift_bridgeObjectRetain();
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xbc));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xbc));
  lVar24 = puVar4[1];
  if (lVar24 == 0) {
    uVar23 = puVar4[0x10];
    uVar29 = puVar4[0x13];
    uVar27 = puVar4[0x12];
    puVar3[0x11] = puVar4[0x11];
    puVar3[0x10] = uVar23;
    puVar3[0x13] = uVar29;
    puVar3[0x12] = uVar27;
    *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
    uVar23 = puVar4[8];
    uVar29 = puVar4[0xb];
    uVar27 = puVar4[10];
    puVar3[9] = puVar4[9];
    puVar3[8] = uVar23;
    puVar3[0xb] = uVar29;
    puVar3[10] = uVar27;
    uVar29 = puVar4[0xc];
    uVar27 = puVar4[0xf];
    uVar23 = puVar4[0xe];
    puVar3[0xd] = puVar4[0xd];
    puVar3[0xc] = uVar29;
    puVar3[0xf] = uVar27;
    puVar3[0xe] = uVar23;
    uVar23 = *puVar4;
    uVar29 = puVar4[3];
    uVar27 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar23;
    puVar3[3] = uVar29;
    puVar3[2] = uVar27;
    uVar29 = puVar4[4];
    uVar27 = puVar4[7];
    uVar23 = puVar4[6];
    puVar3[5] = puVar4[5];
    puVar3[4] = uVar29;
    puVar3[7] = uVar27;
    puVar3[6] = uVar23;
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar24;
    lVar24 = puVar4[8];
    _swift_bridgeObjectRetain();
    if (lVar24 == 1) {
      uVar23 = puVar4[2];
      uVar29 = puVar4[5];
      uVar27 = puVar4[4];
      puVar3[3] = puVar4[3];
      puVar3[2] = uVar23;
      puVar3[5] = uVar29;
      puVar3[4] = uVar27;
      uVar23 = puVar4[6];
      puVar3[7] = puVar4[7];
      puVar3[6] = uVar23;
      puVar3[8] = puVar4[8];
    }
    else {
      lVar31 = puVar4[4];
      if (lVar31 == 1) {
        uVar23 = puVar4[2];
        uVar29 = puVar4[5];
        uVar27 = puVar4[4];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar23;
        puVar3[5] = uVar29;
        puVar3[4] = uVar27;
        puVar3[6] = puVar4[6];
      }
      else {
        uVar23 = puVar4[2];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar23;
        uVar23 = puVar4[5];
        uVar27 = puVar4[6];
        puVar3[4] = lVar31;
        puVar3[5] = uVar23;
        puVar3[6] = uVar27;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar27);
      }
      puVar3[7] = puVar4[7];
      puVar3[8] = lVar24;
      _swift_bridgeObjectRetain(lVar24);
    }
    lVar24 = puVar4[0xf];
    if (lVar24 == 1) {
      uVar23 = puVar4[9];
      puVar3[10] = puVar4[10];
      puVar3[9] = uVar23;
      uVar23 = puVar4[0xb];
      puVar3[0xc] = puVar4[0xc];
      puVar3[0xb] = uVar23;
      uVar23 = puVar4[0xd];
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xd] = uVar23;
      puVar3[0xf] = puVar4[0xf];
    }
    else {
      lVar31 = puVar4[0xb];
      if (lVar31 == 1) {
        uVar23 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar23;
        uVar23 = puVar4[0xb];
        puVar3[0xc] = puVar4[0xc];
        puVar3[0xb] = uVar23;
        puVar3[0xd] = puVar4[0xd];
      }
      else {
        uVar23 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar23;
        uVar23 = puVar4[0xc];
        uVar27 = puVar4[0xd];
        puVar3[0xb] = lVar31;
        puVar3[0xc] = uVar23;
        puVar3[0xd] = uVar27;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar27);
      }
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xf] = lVar24;
      _swift_bridgeObjectRetain(lVar24);
    }
    *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(puVar4 + 0x10);
    uVar23 = puVar4[0x11];
    puVar3[0x12] = puVar4[0x12];
    puVar3[0x11] = uVar23;
    puVar3[0x13] = puVar4[0x13];
    *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
    _swift_bridgeObjectRetain();
  }
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xc0)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xc0));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xc4)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xc4));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 200)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 200));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xcc)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xcc));
  lVar24 = 0;
  func_0x000100b91cc8();
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar24 + 0x14)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar24 + 0x14));
  uVar29 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar24 + 0x18));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar24 + 0x18)) = uVar29;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar24 + 0x1c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar24 + 0x1c));
  uVar23 = *puVar4;
  puVar3[1] = puVar4[1];
  *puVar3 = uVar23;
  uVar23 = puVar4[2];
  uVar27 = puVar4[3];
  puVar3[2] = uVar23;
  puVar3[3] = uVar27;
  uVar27 = puVar4[4];
  puVar3[4] = uVar27;
  lVar12 = 0;
  func_0x000100b92084();
  puVar3 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x1c));
  puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar12 + 0x1c));
  lVar12 = 0;
  func_0x000100b92194();
  lVar31 = *(long *)(lVar12 + -8);
  pcVar30 = *(code **)(lVar31 + 0x30);
  _swift_bridgeObjectRetain(uVar29);
  _swift_bridgeObjectRetain(uVar23);
  _swift_bridgeObjectRetain(uVar27);
  puVar14 = puVar4;
  (*pcVar30)(puVar4,1,lVar12);
  if ((int)puVar14 == 0) {
    uVar23 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar23;
    uVar27 = puVar4[3];
    puVar3[2] = puVar4[2];
    puVar3[3] = uVar27;
    uVar29 = puVar4[5];
    puVar3[4] = puVar4[4];
    puVar3[5] = uVar29;
    puVar3[6] = puVar4[6];
    *(undefined1 *)(puVar3 + 7) = *(undefined1 *)(puVar4 + 7);
    puVar14 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x14));
    puVar17 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar12 + 0x14));
    lVar15 = 0;
    func_0x000100b922c8();
    lVar34 = *(long *)(lVar15 + -8);
    pcVar30 = *(code **)(lVar34 + 0x30);
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar29);
    puVar16 = puVar17;
    (*pcVar30)(puVar17,1,lVar15);
    if ((int)puVar16 == 0) {
      uVar23 = puVar17[1];
      *puVar14 = *puVar17;
      puVar14[1] = uVar23;
      uVar23 = puVar17[2];
      uVar29 = puVar17[5];
      uVar27 = puVar17[4];
      puVar14[3] = puVar17[3];
      puVar14[2] = uVar23;
      puVar14[5] = uVar29;
      puVar14[4] = uVar27;
      uVar23 = puVar17[7];
      puVar14[6] = puVar17[6];
      puVar14[7] = uVar23;
      lVar32 = (long)*(int *)(lVar15 + 0x28);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar23);
      lVar19 = (long)puVar17 + lVar32;
      (*pcVar35)(lVar19,1,lVar13);
      if ((int)lVar19 == 0) {
        (**(code **)(lVar18 + 0x10))((long)puVar14 + lVar32,(long)puVar17 + lVar32,lVar13);
        (**(code **)(lVar18 + 0x38))((long)puVar14 + lVar32,0,1,lVar13);
      }
      else {
        lVar19 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar14 + lVar32,(long)puVar17 + lVar32,
                *(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
      }
      puVar16 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar15 + 0x2c));
      puVar5 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar15 + 0x2c));
      uVar23 = puVar5[1];
      *puVar16 = *puVar5;
      puVar16[1] = uVar23;
      puVar16 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar15 + 0x30));
      puVar5 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar15 + 0x30));
      uVar23 = puVar5[1];
      *puVar16 = *puVar5;
      puVar16[1] = uVar23;
      lVar32 = (long)*(int *)(lVar15 + 0x34);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar23);
      lVar19 = (long)puVar17 + lVar32;
      (*pcVar35)(lVar19,1,lVar13);
      if ((int)lVar19 == 0) {
        (**(code **)(lVar18 + 0x10))((long)puVar14 + lVar32,(long)puVar17 + lVar32,lVar13);
        (**(code **)(lVar18 + 0x38))((long)puVar14 + lVar32,0,1,lVar13);
      }
      else {
        lVar13 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar14 + lVar32,(long)puVar17 + lVar32,
                *(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
      }
      puVar16 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar15 + 0x38));
      puVar17 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar15 + 0x38));
      uVar23 = puVar17[1];
      *puVar16 = *puVar17;
      puVar16[1] = uVar23;
      pcVar35 = *(code **)(lVar34 + 0x38);
      _swift_bridgeObjectRetain();
      (*pcVar35)(puVar14,0,1,lVar15);
    }
    else {
      lVar13 = 0x112dd1600;
      func_0x0001000285a8(0x112dd1600,&UNK_10d992a30);
      _memcpy(puVar14,puVar17,*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
    }
    puVar14 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x18));
    puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar12 + 0x18));
    lVar13 = 0;
    func_0x000100b92390();
    lVar18 = *(long *)(lVar13 + -8);
    puVar17 = puVar4;
    (**(code **)(lVar18 + 0x30))(puVar4,1,lVar13);
    if ((int)puVar17 == 0) {
      uVar23 = puVar4[1];
      *puVar14 = *puVar4;
      puVar14[1] = uVar23;
      lVar32 = (long)*(int *)(lVar13 + 0x14);
      lVar34 = 0;
      __s10Foundation3URLVMa();
      lVar19 = *(long *)(lVar34 + -8);
      pcVar35 = *(code **)(lVar19 + 0x30);
      _swift_bridgeObjectRetain(uVar23);
      lVar15 = (long)puVar4 + lVar32;
      (*pcVar35)(lVar15,1,lVar34);
      if ((int)lVar15 == 0) {
        (**(code **)(lVar19 + 0x10))((long)puVar14 + lVar32,(long)puVar4 + lVar32,lVar34);
        (**(code **)(lVar19 + 0x38))((long)puVar14 + lVar32,0,1,lVar34);
      }
      else {
        lVar15 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        _memcpy((long)puVar14 + lVar32,(long)puVar4 + lVar32,
                *(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
      }
      (**(code **)(lVar18 + 0x38))(puVar14,0,1,lVar13);
    }
    else {
      lVar13 = 0x112dd1458;
      func_0x0001000285a8(0x112dd1458,&UNK_10d992550);
      _memcpy(puVar14,puVar4,*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
    }
    (**(code **)(lVar31 + 0x38))(puVar3,0,1,lVar12);
  }
  else {
    lVar12 = 0x112dd1460;
    func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
    _memcpy(puVar3,puVar4,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  }
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar24 + 0x20)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar24 + 0x20));
  puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar24 + 0x24));
  puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar24 + 0x24));
  uVar23 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar23;
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1041d4208; end: 1041d4243;  */

undefined8 FUN_1041d4208(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1041d4244; end: 1041d6b2f;  */

void FUN_1041d4244(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar19 = *puVar2;
  uVar21 = puVar2[3];
  uVar20 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar19;
  puVar1[3] = uVar21;
  puVar1[2] = uVar20;
  puVar1[4] = puVar2[4];
  uVar19 = puVar2[5];
  puVar1[6] = puVar2[6];
  puVar1[5] = uVar19;
  uVar19 = puVar2[7];
  puVar1[8] = puVar2[8];
  puVar1[7] = uVar19;
  uVar19 = puVar2[9];
  puVar1[10] = puVar2[10];
  puVar1[9] = uVar19;
  uVar19 = puVar2[0xb];
  puVar1[0xc] = puVar2[0xc];
  puVar1[0xb] = uVar19;
  uVar19 = puVar2[0xd];
  puVar1[0xe] = puVar2[0xe];
  puVar1[0xd] = uVar19;
  uVar19 = puVar2[0xf];
  puVar1[0x10] = puVar2[0x10];
  puVar1[0xf] = uVar19;
  lVar6 = 0;
  func_0x000100b91d00();
  lVar14 = (long)*(int *)(lVar6 + 0x3c);
  lVar7 = 0;
  __s10Foundation4UUIDVMa();
  lVar17 = *(long *)(lVar7 + -8);
  pcVar18 = *(code **)(lVar17 + 0x30);
  lVar8 = (long)puVar2 + lVar14;
  (*pcVar18)(lVar8,1,lVar7);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar17 + 0x20))((long)puVar1 + lVar14,(long)puVar2 + lVar14,lVar7);
    (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar14,0,1,lVar7);
  }
  else {
    lVar8 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)puVar1 + lVar14,(long)puVar2 + lVar14,
            *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  }
  lVar14 = (long)*(int *)(lVar6 + 0x40);
  lVar8 = (long)puVar2 + lVar14;
  (*pcVar18)(lVar8,1,lVar7);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar17 + 0x20))((long)puVar1 + lVar14,(long)puVar2 + lVar14,lVar7);
    (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar14,0,1,lVar7);
  }
  else {
    lVar8 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)puVar1 + lVar14,(long)puVar2 + lVar14,
            *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  }
  lVar14 = (long)*(int *)(lVar6 + 0x44);
  lVar8 = (long)puVar2 + lVar14;
  (*pcVar18)(lVar8,1,lVar7);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar17 + 0x20))((long)puVar1 + lVar14,(long)puVar2 + lVar14,lVar7);
    (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar14,0,1,lVar7);
  }
  else {
    lVar8 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)puVar1 + lVar14,(long)puVar2 + lVar14,
            *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  }
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x48)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x48));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x4c)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x4c));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x50)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x50));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x54)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x54));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x58)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x58));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x5c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x5c));
  uVar19 = *puVar4;
  uVar21 = puVar4[3];
  uVar20 = puVar4[2];
  puVar3[1] = puVar4[1];
  *puVar3 = uVar19;
  puVar3[3] = uVar21;
  puVar3[2] = uVar20;
  uVar21 = puVar4[8];
  uVar20 = puVar4[0xb];
  uVar19 = puVar4[10];
  puVar3[9] = puVar4[9];
  puVar3[8] = uVar21;
  puVar3[0xb] = uVar20;
  puVar3[10] = uVar19;
  uVar21 = puVar4[4];
  uVar20 = puVar4[7];
  uVar19 = puVar4[6];
  puVar3[5] = puVar4[5];
  puVar3[4] = uVar21;
  puVar3[7] = uVar20;
  puVar3[6] = uVar19;
  uVar21 = puVar4[0x10];
  uVar20 = puVar4[0x13];
  uVar19 = puVar4[0x12];
  puVar3[0x11] = puVar4[0x11];
  puVar3[0x10] = uVar21;
  puVar3[0x13] = uVar20;
  puVar3[0x12] = uVar19;
  uVar21 = puVar4[0xc];
  uVar20 = puVar4[0xf];
  uVar19 = puVar4[0xe];
  puVar3[0xd] = puVar4[0xd];
  puVar3[0xc] = uVar21;
  puVar3[0xf] = uVar20;
  puVar3[0xe] = uVar19;
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x60)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x60));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 100));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 100));
  puVar3[4] = puVar4[4];
  uVar21 = *puVar4;
  uVar20 = puVar4[3];
  uVar19 = puVar4[2];
  puVar3[1] = puVar4[1];
  *puVar3 = uVar21;
  puVar3[3] = uVar20;
  puVar3[2] = uVar19;
  _memcpy((long)puVar1 + (long)*(int *)(lVar6 + 0x68),(long)puVar2 + (long)*(int *)(lVar6 + 0x68),
          0x160);
  puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x6c));
  uVar19 = *puVar3;
  puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x6c));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar19;
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x70)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x70));
  puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x74));
  uVar19 = *puVar3;
  puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x74));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar19;
  puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x78));
  uVar19 = *puVar3;
  puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x78));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar19;
  puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x7c));
  uVar19 = *puVar3;
  puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x7c));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar19;
  puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x80));
  uVar19 = *puVar3;
  puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x80));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar19;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x84));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x84));
  lVar8 = 0;
  func_0x000100b91fbc();
  lVar14 = *(long *)(lVar8 + -8);
  puVar9 = puVar4;
  (**(code **)(lVar14 + 0x30))(puVar4,1,lVar8);
  if ((int)puVar9 == 0) {
    uVar19 = *puVar4;
    uVar21 = puVar4[3];
    uVar20 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar19;
    puVar3[3] = uVar21;
    puVar3[2] = uVar20;
    puVar3[4] = puVar4[4];
    uVar19 = puVar4[5];
    puVar3[6] = puVar4[6];
    puVar3[5] = uVar19;
    uVar19 = puVar4[7];
    puVar3[8] = puVar4[8];
    puVar3[7] = uVar19;
    lVar16 = (long)*(int *)(lVar8 + 0x28);
    lVar10 = (long)puVar4 + lVar16;
    (*pcVar18)(lVar10,1,lVar7);
    if ((int)lVar10 == 0) {
      (**(code **)(lVar17 + 0x20))((long)puVar3 + lVar16,(long)puVar4 + lVar16,lVar7);
      (**(code **)(lVar17 + 0x38))((long)puVar3 + lVar16,0,1,lVar7);
    }
    else {
      lVar10 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar3 + lVar16,(long)puVar4 + lVar16,
              *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    puVar9 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar8 + 0x2c));
    uVar19 = *puVar9;
    puVar12 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar8 + 0x2c));
    puVar12[1] = puVar9[1];
    *puVar12 = uVar19;
    puVar9 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar8 + 0x30));
    uVar19 = *puVar9;
    puVar12 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar8 + 0x30));
    puVar12[1] = puVar9[1];
    *puVar12 = uVar19;
    lVar16 = (long)*(int *)(lVar8 + 0x34);
    lVar10 = (long)puVar4 + lVar16;
    (*pcVar18)(lVar10,1,lVar7);
    if ((int)lVar10 == 0) {
      (**(code **)(lVar17 + 0x20))((long)puVar3 + lVar16,(long)puVar4 + lVar16,lVar7);
      (**(code **)(lVar17 + 0x38))((long)puVar3 + lVar16,0,1,lVar7);
    }
    else {
      lVar10 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar3 + lVar16,(long)puVar4 + lVar16,
              *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    puVar9 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar8 + 0x38));
    uVar19 = *puVar9;
    puVar12 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar8 + 0x38));
    puVar12[1] = puVar9[1];
    *puVar12 = uVar19;
    puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar8 + 0x3c));
    uVar19 = *puVar4;
    puVar9 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar8 + 0x3c));
    puVar9[1] = puVar4[1];
    *puVar9 = uVar19;
    (**(code **)(lVar14 + 0x38))(puVar3,0,1,lVar8);
  }
  else {
    lVar8 = 0x112db39a8;
    func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
    _memcpy(puVar3,puVar4,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x88));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x88));
  uVar21 = puVar4[8];
  uVar20 = puVar4[0xb];
  uVar19 = puVar4[10];
  puVar3[9] = puVar4[9];
  puVar3[8] = uVar21;
  puVar3[0xb] = uVar20;
  puVar3[10] = uVar19;
  *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
  uVar21 = puVar4[0x10];
  uVar20 = puVar4[0x13];
  uVar19 = puVar4[0x12];
  puVar3[0x11] = puVar4[0x11];
  puVar3[0x10] = uVar21;
  puVar3[0x13] = uVar20;
  puVar3[0x12] = uVar19;
  uVar19 = puVar4[0xc];
  uVar21 = puVar4[0xf];
  uVar20 = puVar4[0xe];
  puVar3[0xd] = puVar4[0xd];
  puVar3[0xc] = uVar19;
  puVar3[0xf] = uVar21;
  puVar3[0xe] = uVar20;
  uVar19 = *puVar4;
  uVar21 = puVar4[3];
  uVar20 = puVar4[2];
  puVar3[1] = puVar4[1];
  *puVar3 = uVar19;
  puVar3[3] = uVar21;
  puVar3[2] = uVar20;
  uVar21 = puVar4[4];
  uVar20 = puVar4[7];
  uVar19 = puVar4[6];
  puVar3[5] = puVar4[5];
  puVar3[4] = uVar21;
  puVar3[7] = uVar20;
  puVar3[6] = uVar19;
  *(undefined4 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x8c)) =
       *(undefined4 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x8c));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x90)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x90));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x94));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x94));
  uVar19 = *puVar4;
  uVar21 = puVar4[3];
  uVar20 = puVar4[2];
  puVar3[1] = puVar4[1];
  *puVar3 = uVar19;
  puVar3[3] = uVar21;
  puVar3[2] = uVar20;
  uVar19 = puVar4[4];
  uVar21 = puVar4[7];
  uVar20 = puVar4[6];
  puVar3[5] = puVar4[5];
  puVar3[4] = uVar19;
  puVar3[7] = uVar21;
  puVar3[6] = uVar20;
  uVar21 = puVar4[0xc];
  uVar20 = puVar4[0xf];
  uVar19 = puVar4[0xe];
  puVar3[0xd] = puVar4[0xd];
  puVar3[0xc] = uVar21;
  puVar3[0xf] = uVar20;
  puVar3[0xe] = uVar19;
  uVar21 = puVar4[8];
  uVar20 = puVar4[0xb];
  uVar19 = puVar4[10];
  puVar3[9] = puVar4[9];
  puVar3[8] = uVar21;
  puVar3[0xb] = uVar20;
  puVar3[10] = uVar19;
  uVar19 = *(undefined8 *)((long)puVar4 + 0xa9);
  *(undefined8 *)((long)puVar3 + 0xb1) = *(undefined8 *)((long)puVar4 + 0xb1);
  *(undefined8 *)((long)puVar3 + 0xa9) = uVar19;
  uVar19 = puVar4[0x12];
  uVar21 = puVar4[0x15];
  uVar20 = puVar4[0x14];
  puVar3[0x13] = puVar4[0x13];
  puVar3[0x12] = uVar19;
  puVar3[0x15] = uVar21;
  puVar3[0x14] = uVar20;
  uVar19 = puVar4[0x10];
  puVar3[0x11] = puVar4[0x11];
  puVar3[0x10] = uVar19;
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x98)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x98));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x9c)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x9c));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xa0)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xa0));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xa4)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xa4));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xa8)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xa8));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xac));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xac));
  uVar19 = *puVar4;
  uVar21 = puVar4[3];
  uVar20 = puVar4[2];
  puVar3[1] = puVar4[1];
  *puVar3 = uVar19;
  puVar3[3] = uVar21;
  puVar3[2] = uVar20;
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xb0)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xb0));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xb4)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xb4));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xb8));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xb8));
  uVar19 = *puVar4;
  uVar21 = puVar4[3];
  uVar20 = puVar4[2];
  puVar3[1] = puVar4[1];
  *puVar3 = uVar19;
  puVar3[3] = uVar21;
  puVar3[2] = uVar20;
  uVar21 = puVar4[8];
  uVar20 = puVar4[0xb];
  uVar19 = puVar4[10];
  puVar3[9] = puVar4[9];
  puVar3[8] = uVar21;
  puVar3[0xb] = uVar20;
  puVar3[10] = uVar19;
  uVar19 = puVar4[4];
  uVar21 = puVar4[7];
  uVar20 = puVar4[6];
  puVar3[5] = puVar4[5];
  puVar3[4] = uVar19;
  puVar3[7] = uVar21;
  puVar3[6] = uVar20;
  *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
  uVar21 = puVar4[0x10];
  uVar20 = puVar4[0x13];
  uVar19 = puVar4[0x12];
  puVar3[0x11] = puVar4[0x11];
  puVar3[0x10] = uVar21;
  puVar3[0x13] = uVar20;
  puVar3[0x12] = uVar19;
  uVar19 = puVar4[0xc];
  uVar21 = puVar4[0xf];
  uVar20 = puVar4[0xe];
  puVar3[0xd] = puVar4[0xd];
  puVar3[0xc] = uVar19;
  puVar3[0xf] = uVar21;
  puVar3[0xe] = uVar20;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xbc));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xbc));
  uVar19 = *puVar4;
  uVar21 = puVar4[3];
  uVar20 = puVar4[2];
  puVar3[1] = puVar4[1];
  *puVar3 = uVar19;
  puVar3[3] = uVar21;
  puVar3[2] = uVar20;
  uVar21 = puVar4[8];
  uVar20 = puVar4[0xb];
  uVar19 = puVar4[10];
  puVar3[9] = puVar4[9];
  puVar3[8] = uVar21;
  puVar3[0xb] = uVar20;
  puVar3[10] = uVar19;
  uVar19 = puVar4[4];
  uVar21 = puVar4[7];
  uVar20 = puVar4[6];
  puVar3[5] = puVar4[5];
  puVar3[4] = uVar19;
  puVar3[7] = uVar21;
  puVar3[6] = uVar20;
  *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
  uVar21 = puVar4[0x10];
  uVar20 = puVar4[0x13];
  uVar19 = puVar4[0x12];
  puVar3[0x11] = puVar4[0x11];
  puVar3[0x10] = uVar21;
  puVar3[0x13] = uVar20;
  puVar3[0x12] = uVar19;
  uVar19 = puVar4[0xc];
  uVar21 = puVar4[0xf];
  uVar20 = puVar4[0xe];
  puVar3[0xd] = puVar4[0xd];
  puVar3[0xc] = uVar19;
  puVar3[0xf] = uVar21;
  puVar3[0xe] = uVar20;
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xc0)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xc0));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xc4)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xc4));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 200)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 200));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xcc)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xcc));
  lVar8 = 0;
  func_0x000100b91cc8();
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x14)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x14));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x18)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x18));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x1c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x1c));
  *puVar3 = *puVar4;
  uVar19 = puVar4[1];
  puVar3[2] = puVar4[2];
  puVar3[1] = uVar19;
  uVar19 = puVar4[3];
  puVar3[4] = puVar4[4];
  puVar3[3] = uVar19;
  lVar6 = 0;
  func_0x000100b92084();
  puVar3 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar6 + 0x1c));
  puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar6 + 0x1c));
  lVar6 = 0;
  func_0x000100b92194();
  lVar14 = *(long *)(lVar6 + -8);
  puVar9 = puVar4;
  (**(code **)(lVar14 + 0x30))(puVar4,1,lVar6);
  if ((int)puVar9 == 0) {
    uVar19 = *puVar4;
    uVar21 = puVar4[3];
    uVar20 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar19;
    puVar3[3] = uVar21;
    puVar3[2] = uVar20;
    uVar19 = puVar4[4];
    puVar3[5] = puVar4[5];
    puVar3[4] = uVar19;
    uVar19 = *(undefined8 *)((long)puVar4 + 0x29);
    *(undefined8 *)((long)puVar3 + 0x31) = *(undefined8 *)((long)puVar4 + 0x31);
    *(undefined8 *)((long)puVar3 + 0x29) = uVar19;
    puVar9 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar6 + 0x14));
    puVar12 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar6 + 0x14));
    lVar10 = 0;
    func_0x000100b922c8();
    lVar16 = *(long *)(lVar10 + -8);
    puVar11 = puVar12;
    (**(code **)(lVar16 + 0x30))(puVar12,1,lVar10);
    if ((int)puVar11 == 0) {
      uVar19 = *puVar12;
      uVar21 = puVar12[3];
      uVar20 = puVar12[2];
      puVar9[1] = puVar12[1];
      *puVar9 = uVar19;
      puVar9[3] = uVar21;
      puVar9[2] = uVar20;
      uVar19 = puVar12[4];
      uVar21 = puVar12[7];
      uVar20 = puVar12[6];
      puVar9[5] = puVar12[5];
      puVar9[4] = uVar19;
      puVar9[7] = uVar21;
      puVar9[6] = uVar20;
      lVar15 = (long)*(int *)(lVar10 + 0x28);
      lVar13 = (long)puVar12 + lVar15;
      (*pcVar18)(lVar13,1,lVar7);
      if ((int)lVar13 == 0) {
        (**(code **)(lVar17 + 0x20))((long)puVar9 + lVar15,(long)puVar12 + lVar15,lVar7);
        (**(code **)(lVar17 + 0x38))((long)puVar9 + lVar15,0,1,lVar7);
      }
      else {
        lVar13 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar9 + lVar15,(long)puVar12 + lVar15,
                *(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
      }
      puVar11 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar10 + 0x2c));
      uVar19 = *puVar11;
      puVar5 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x2c));
      puVar5[1] = puVar11[1];
      *puVar5 = uVar19;
      puVar11 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar10 + 0x30));
      uVar19 = *puVar11;
      puVar5 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x30));
      puVar5[1] = puVar11[1];
      *puVar5 = uVar19;
      lVar15 = (long)*(int *)(lVar10 + 0x34);
      lVar13 = (long)puVar12 + lVar15;
      (*pcVar18)(lVar13,1,lVar7);
      if ((int)lVar13 == 0) {
        (**(code **)(lVar17 + 0x20))((long)puVar9 + lVar15,(long)puVar12 + lVar15,lVar7);
        (**(code **)(lVar17 + 0x38))((long)puVar9 + lVar15,0,1,lVar7);
      }
      else {
        lVar7 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar9 + lVar15,(long)puVar12 + lVar15,
                *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
      }
      puVar12 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar10 + 0x38));
      uVar19 = *puVar12;
      puVar11 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x38));
      puVar11[1] = puVar12[1];
      *puVar11 = uVar19;
      (**(code **)(lVar16 + 0x38))(puVar9,0,1,lVar10);
    }
    else {
      lVar7 = 0x112dd1600;
      func_0x0001000285a8(0x112dd1600,&UNK_10d992a30);
      _memcpy(puVar9,puVar12,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    puVar9 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar6 + 0x18));
    puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar6 + 0x18));
    lVar7 = 0;
    func_0x000100b92390();
    lVar17 = *(long *)(lVar7 + -8);
    puVar12 = puVar4;
    (**(code **)(lVar17 + 0x30))(puVar4,1,lVar7);
    if ((int)puVar12 == 0) {
      uVar19 = *puVar4;
      puVar9[1] = puVar4[1];
      *puVar9 = uVar19;
      lVar15 = (long)*(int *)(lVar7 + 0x14);
      lVar16 = 0;
      __s10Foundation3URLVMa();
      lVar13 = *(long *)(lVar16 + -8);
      lVar10 = (long)puVar4 + lVar15;
      (**(code **)(lVar13 + 0x30))(lVar10,1,lVar16);
      if ((int)lVar10 == 0) {
        (**(code **)(lVar13 + 0x20))((long)puVar9 + lVar15,(long)puVar4 + lVar15,lVar16);
        (**(code **)(lVar13 + 0x38))((long)puVar9 + lVar15,0,1,lVar16);
      }
      else {
        lVar10 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        _memcpy((long)puVar9 + lVar15,(long)puVar4 + lVar15,
                *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
      }
      (**(code **)(lVar17 + 0x38))(puVar9,0,1,lVar7);
    }
    else {
      lVar7 = 0x112dd1458;
      func_0x0001000285a8(0x112dd1458,&UNK_10d992550);
      _memcpy(puVar9,puVar4,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    (**(code **)(lVar14 + 0x38))(puVar3,0,1,lVar6);
  }
  else {
    lVar6 = 0x112dd1460;
    func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
    _memcpy(puVar3,puVar4,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x20)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x20));
  puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x24));
  uVar19 = *puVar2;
  puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x24));
  puVar1[1] = puVar2[1];
  *puVar1 = uVar19;
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  return;
}



/* Entry: 1041d6b30; end: 1041d6b47;  */

void FUN_1041d6b30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1041d6b48; end: 1041d6bc3;  */

void FUN_1041d6b48(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_38 = &UNK_10dce0c78;
  lVar1 = 0x13f;
  func_0x000100b91cc8();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dce0c90;
    _swift_initStructMetadata(param_1,0x100,3,&puStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 1041d6bc4; end: 1041d6cdf;  */

bool FUN_1041d6bc4(long *param_1,long *param_2)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar3 = *param_2;
  cVar1 = (char)param_2[1];
  bVar2 = *(byte *)(param_1 + 1);
  if (bVar2 < 3) {
    if (bVar2 == 0) {
      if (cVar1 == '\0') goto LAB_1041d6c4c;
    }
    else if (bVar2 == 1) {
      if (cVar1 == '\x01') {
LAB_1041d6c4c:
        return lVar4 == lVar3;
      }
    }
    else if (cVar1 == '\x02') goto LAB_1041d6c4c;
  }
  else if (bVar2 == 3) {
    if (cVar1 == '\x03') goto LAB_1041d6c4c;
  }
  else if (bVar2 == 4) {
    if (cVar1 == '\x04') goto LAB_1041d6c4c;
  }
  else if (lVar4 < 2) {
    if (lVar4 == 0) {
      if ((cVar1 == '\x05') && (lVar3 == 0)) {
        return true;
      }
    }
    else if ((cVar1 == '\x05') && (lVar3 == 1)) {
      return true;
    }
  }
  else if (lVar4 == 2) {
    if ((cVar1 == '\x05') && (lVar3 == 2)) {
      return true;
    }
  }
  else if ((cVar1 == '\x05') && (lVar3 == 3)) {
    return true;
  }
  return false;
}



/* Entry: 1041d6ce0; end: 1041d6d2f;  */

undefined8 * FUN_1041d6ce0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_1041cdd04(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_1041cfa10(uVar3,uVar2);
  return param_1;
}



/* Entry: 1041d6d30; end: 1041d6d6b;  */

undefined8 * FUN_1041d6d30(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_1041cfa10(uVar3,uVar2);
  return param_1;
}



/* Entry: 1041d6d6c; end: 1041d6e47;  */

int FUN_1041d6d6c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfa < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfb;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 6) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1041d6e48; end: 1041d6eff;  */

void FUN_1041d6e48(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x0001046cae5c();
  lVar1 = 0;
  func_0x000100b91cc8();
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + *(int *)(lVar1 + 0x14)));
  uVar2 = *(undefined8 *)(unaff_x20 + *(int *)(lVar1 + 0x18));
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (uVar2,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  uVar3 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar3);
  FUN_1041e3a68((long)*(int *)(lVar1 + 0x1c),param_1);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + *(int *)(lVar1 + 0x20)));
  return;
}



/* Entry: 1041d6f00; end: 1041d6fc3;  */

void FUN_1041d6f00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  func_0x0001046cae5c(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x14)));
  uVar1 = *(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x18));
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (uVar1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  FUN_1041e3a68((long)*(int *)(param_1 + 0x1c),auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x20)));
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041d6fc4; end: 1041d7073;  */

void FUN_1041d6fc4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x0001046cae5c();
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x14)));
  uVar1 = *(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x18));
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (uVar1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  FUN_1041e3a68((long)*(int *)(param_2 + 0x1c),param_1);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x20)));
  return;
}



/* Entry: 1041d7074; end: 1041d7133;  */

void FUN_1041d7074(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  func_0x0001046cae5c(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x14)));
  uVar1 = *(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x18));
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (uVar1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  FUN_1041e3a68((long)*(int *)(param_2 + 0x1c),auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x20)));
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041d7134; end: 1041d7137;  */

bool FUN_1041d7134(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1;
  func_0x0001046cae58();
  if ((uVar1 & 1) != 0) {
    lVar2 = 0;
    func_0x000100b91cc8();
    if (*(long *)(param_1 + (long)*(int *)(lVar2 + 0x14)) ==
        *(long *)(param_2 + *(int *)(lVar2 + 0x14))) {
      uVar3 = *(undefined8 *)(param_1 + (long)*(int *)(lVar2 + 0x18));
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                (uVar3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
      uVar4 = *(undefined8 *)(param_2 + *(int *)(lVar2 + 0x18));
      func_0x00010018cc3c(uVar4);
      uVar5 = uVar4;
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
      _swift_bridgeObjectRelease(uVar4);
      uVar4 = uVar3;
      func_0x00010c071d00();
      _objc_release(uVar3);
      _objc_release(uVar5);
      if ((int)uVar4 != 0) {
        uVar1 = param_1 + (long)*(int *)(lVar2 + 0x1c);
        FUN_1041e3a64(uVar1,param_2 + *(int *)(lVar2 + 0x1c));
        if ((uVar1 & 1) != 0) {
          return *(int *)(param_1 + (long)*(int *)(lVar2 + 0x20)) ==
                 *(int *)(param_2 + *(int *)(lVar2 + 0x20));
        }
      }
    }
  }
  return false;
}



/* Entry: 1041d7138; end: 1041d7243;  */

bool FUN_1041d7138(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1;
  func_0x0001046cae58();
  if ((uVar1 & 1) != 0) {
    lVar2 = 0;
    func_0x000100b91cc8();
    if (*(long *)(param_1 + (long)*(int *)(lVar2 + 0x14)) ==
        *(long *)(param_2 + *(int *)(lVar2 + 0x14))) {
      uVar3 = *(undefined8 *)(param_1 + (long)*(int *)(lVar2 + 0x18));
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                (uVar3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
      uVar4 = *(undefined8 *)(param_2 + *(int *)(lVar2 + 0x18));
      func_0x00010018cc3c(uVar4);
      uVar5 = uVar4;
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
      _swift_bridgeObjectRelease(uVar4);
      uVar4 = uVar3;
      func_0x00010c071d00();
      _objc_release(uVar3);
      _objc_release(uVar5);
      if ((int)uVar4 != 0) {
        uVar1 = param_1 + (long)*(int *)(lVar2 + 0x1c);
        FUN_1041e3a64(uVar1,param_2 + *(int *)(lVar2 + 0x1c));
        if ((uVar1 & 1) != 0) {
          return *(int *)(param_1 + (long)*(int *)(lVar2 + 0x20)) ==
                 *(int *)(param_2 + *(int *)(lVar2 + 0x20));
        }
      }
    }
  }
  return false;
}



/* Entry: 1041d7244; end: 1041d7247;  */

void FUN_1041d7244(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113068510 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000100b91cc8(0xff);
  puVar2 = &UNK_10dce0d40;
  _swift_getWitnessTable(&UNK_10dce0d40,uVar1);
  puRam0000000113068510 = puVar2;
  return;
}



/* Entry: 1041d7248; end: 1041d728b;  */

void FUN_1041d7248(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113068510 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000100b91cc8(0xff);
  puVar2 = &UNK_10dce0d40;
  _swift_getWitnessTable(&UNK_10dce0d40,uVar1);
  puRam0000000113068510 = puVar2;
  return;
}



/* Entry: 1041d728c; end: 1041dd373;  */

long * FUN_1041d728c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  code *pcVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
  code *pcVar33;
  long lVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  
  uVar11 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar11 >> 0x11 & 1) == 0) {
    lVar21 = *param_2;
    lVar12 = param_2[3];
    lVar16 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = lVar21;
    param_1[3] = lVar12;
    param_1[2] = lVar16;
    lVar21 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = lVar21;
    lVar21 = param_2[6];
    lVar16 = param_2[7];
    param_1[6] = lVar21;
    param_1[7] = lVar16;
    lVar34 = param_2[8];
    lVar16 = param_2[9];
    param_1[8] = lVar34;
    param_1[9] = lVar16;
    lVar20 = param_2[10];
    lVar16 = param_2[0xb];
    param_1[10] = lVar20;
    param_1[0xb] = lVar16;
    lVar28 = param_2[0xc];
    lVar16 = param_2[0xd];
    param_1[0xc] = lVar28;
    param_1[0xd] = lVar16;
    lVar30 = param_2[0xe];
    lVar16 = param_2[0xf];
    param_1[0xe] = lVar30;
    param_1[0xf] = lVar16;
    lVar32 = param_2[0x10];
    param_1[0x10] = lVar32;
    lVar16 = 0;
    func_0x000100b91d00();
    lVar25 = (long)*(int *)(lVar16 + 0x3c);
    lVar12 = 0;
    __s10Foundation4UUIDVMa();
    lVar17 = *(long *)(lVar12 + -8);
    pcVar26 = *(code **)(lVar17 + 0x30);
    _swift_bridgeObjectRetain(lVar21);
    _swift_bridgeObjectRetain(lVar34);
    _swift_bridgeObjectRetain(lVar20);
    _swift_bridgeObjectRetain(lVar28);
    _swift_bridgeObjectRetain(lVar30);
    _swift_bridgeObjectRetain(lVar32);
    lVar21 = (long)param_2 + lVar25;
    (*pcVar26)(lVar21,1,lVar12);
    if ((int)lVar21 == 0) {
      (**(code **)(lVar17 + 0x10))((long)param_1 + lVar25,(long)param_2 + lVar25,lVar12);
      (**(code **)(lVar17 + 0x38))((long)param_1 + lVar25,0,1,lVar12);
    }
    else {
      lVar21 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)param_1 + lVar25,(long)param_2 + lVar25,
              *(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
    }
    lVar20 = (long)*(int *)(lVar16 + 0x40);
    lVar21 = (long)param_2 + lVar20;
    (*pcVar26)(lVar21,1,lVar12);
    if ((int)lVar21 == 0) {
      (**(code **)(lVar17 + 0x10))((long)param_1 + lVar20,(long)param_2 + lVar20,lVar12);
      (**(code **)(lVar17 + 0x38))((long)param_1 + lVar20,0,1,lVar12);
    }
    else {
      lVar21 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)param_1 + lVar20,(long)param_2 + lVar20,
              *(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
    }
    lVar20 = (long)*(int *)(lVar16 + 0x44);
    lVar21 = (long)param_2 + lVar20;
    (*pcVar26)(lVar21,1,lVar12);
    if ((int)lVar21 == 0) {
      (**(code **)(lVar17 + 0x10))((long)param_1 + lVar20,(long)param_2 + lVar20,lVar12);
      (**(code **)(lVar17 + 0x38))((long)param_1 + lVar20,0,1,lVar12);
    }
    else {
      lVar21 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)param_1 + lVar20,(long)param_2 + lVar20,
              *(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x48)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x48));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x4c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x4c));
    uVar23 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x50));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x50)) = uVar23;
    uVar27 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x54));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x54)) = uVar27;
    uVar29 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x58));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x58)) = uVar29;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x5c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x5c));
    lVar21 = puVar2[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar29);
    if (lVar21 == 1) {
      uVar23 = puVar2[0xc];
      uVar29 = puVar2[0xf];
      uVar27 = puVar2[0xe];
      puVar1[0xd] = puVar2[0xd];
      puVar1[0xc] = uVar23;
      puVar1[0xf] = uVar29;
      puVar1[0xe] = uVar27;
      uVar23 = puVar2[0x10];
      uVar29 = puVar2[0x13];
      uVar27 = puVar2[0x12];
      puVar1[0x11] = puVar2[0x11];
      puVar1[0x10] = uVar23;
      puVar1[0x13] = uVar29;
      puVar1[0x12] = uVar27;
      uVar23 = puVar2[4];
      uVar29 = puVar2[7];
      uVar27 = puVar2[6];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar23;
      puVar1[7] = uVar29;
      puVar1[6] = uVar27;
      uVar23 = puVar2[8];
      uVar29 = puVar2[0xb];
      uVar27 = puVar2[10];
      puVar1[9] = puVar2[9];
      puVar1[8] = uVar23;
      puVar1[0xb] = uVar29;
      puVar1[10] = uVar27;
      uVar23 = *puVar2;
      uVar29 = puVar2[3];
      uVar27 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar23;
      puVar1[3] = uVar29;
      puVar1[2] = uVar27;
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar21;
      uVar23 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar23;
      uVar27 = puVar2[5];
      puVar1[4] = puVar2[4];
      puVar1[5] = uVar27;
      uVar29 = puVar2[7];
      puVar1[6] = puVar2[6];
      puVar1[7] = uVar29;
      uVar36 = puVar2[9];
      puVar1[8] = puVar2[8];
      puVar1[9] = uVar36;
      *(undefined1 *)(puVar1 + 10) = *(undefined1 *)(puVar2 + 10);
      uVar35 = puVar2[0xb];
      puVar1[0xc] = puVar2[0xc];
      puVar1[0xb] = uVar35;
      lVar20 = puVar2[0x12];
      _swift_bridgeObjectRetain(lVar21);
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(uVar27);
      _swift_bridgeObjectRetain(uVar29);
      _swift_bridgeObjectRetain(uVar36);
      if (lVar20 == 0) {
        uVar23 = puVar2[0xd];
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xd] = uVar23;
        uVar23 = puVar2[0xf];
        puVar1[0x10] = puVar2[0x10];
        puVar1[0xf] = uVar23;
        uVar23 = puVar2[0x11];
        puVar1[0x12] = puVar2[0x12];
        puVar1[0x11] = uVar23;
        puVar1[0x13] = puVar2[0x13];
      }
      else {
        uVar23 = puVar2[0xe];
        puVar1[0xd] = puVar2[0xd];
        puVar1[0xe] = uVar23;
        uVar23 = puVar2[0x10];
        puVar1[0xf] = puVar2[0xf];
        puVar1[0x10] = uVar23;
        puVar1[0x11] = puVar2[0x11];
        puVar1[0x12] = lVar20;
        puVar1[0x13] = puVar2[0x13];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar23);
        _swift_bridgeObjectRetain(lVar20);
      }
    }
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar16 + 0x60)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar16 + 0x60));
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 100));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 100));
    lVar21 = puVar2[1];
    if (lVar21 == 1) {
      uVar23 = *puVar2;
      uVar29 = puVar2[3];
      uVar27 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar23;
      puVar1[3] = uVar29;
      puVar1[2] = uVar27;
      puVar1[4] = puVar2[4];
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar21;
      puVar1[2] = puVar2[2];
      *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(puVar2 + 3);
      *(undefined2 *)((long)puVar1 + 0x19) = *(undefined2 *)((long)puVar2 + 0x19);
      puVar1[4] = puVar2[4];
      _swift_bridgeObjectRetain();
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x68));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x68));
    if (puVar2[0x27] == 0) {
      _memcpy(puVar1,puVar2,0x160);
    }
    else {
      uVar23 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar23;
      uVar23 = puVar2[2];
      uVar27 = puVar2[3];
      puVar1[2] = uVar23;
      puVar1[3] = uVar27;
      uVar19 = puVar2[4];
      puVar1[4] = uVar19;
      uVar27 = puVar2[5];
      puVar1[6] = puVar2[6];
      puVar1[5] = uVar27;
      uVar27 = puVar2[7];
      uVar29 = puVar2[8];
      puVar1[7] = uVar27;
      puVar1[8] = uVar29;
      *(undefined2 *)(puVar1 + 9) = *(undefined2 *)(puVar2 + 9);
      *(undefined1 *)((long)puVar1 + 0x4a) = *(undefined1 *)((long)puVar2 + 0x4a);
      uVar29 = puVar2[0xb];
      puVar1[10] = puVar2[10];
      puVar1[0xb] = uVar29;
      uVar18 = puVar2[0xc];
      puVar1[0xc] = uVar18;
      *(undefined1 *)(puVar1 + 0xd) = *(undefined1 *)(puVar2 + 0xd);
      uVar36 = puVar2[0xe];
      puVar1[0xf] = puVar2[0xf];
      puVar1[0xe] = uVar36;
      *(undefined1 *)(puVar1 + 0x10) = *(undefined1 *)(puVar2 + 0x10);
      uVar36 = puVar2[0x12];
      puVar1[0x11] = puVar2[0x11];
      puVar1[0x12] = uVar36;
      uVar35 = puVar2[0x14];
      puVar1[0x13] = puVar2[0x13];
      puVar1[0x14] = uVar35;
      uVar4 = puVar2[0x16];
      puVar1[0x15] = puVar2[0x15];
      puVar1[0x16] = uVar4;
      uVar5 = puVar2[0x18];
      puVar1[0x17] = puVar2[0x17];
      puVar1[0x18] = uVar5;
      uVar6 = puVar2[0x1a];
      puVar1[0x19] = puVar2[0x19];
      puVar1[0x1a] = uVar6;
      uVar37 = puVar2[0x1b];
      puVar1[0x1c] = puVar2[0x1c];
      puVar1[0x1b] = uVar37;
      uVar31 = puVar2[0x1d];
      puVar1[0x1d] = uVar31;
      *(undefined1 *)(puVar1 + 0x1e) = *(undefined1 *)(puVar2 + 0x1e);
      *(undefined1 *)((long)puVar1 + 0xf1) = *(undefined1 *)((long)puVar2 + 0xf1);
      *(undefined1 *)((long)puVar1 + 0xf2) = *(undefined1 *)((long)puVar2 + 0xf2);
      uVar37 = puVar2[0x20];
      puVar1[0x1f] = puVar2[0x1f];
      puVar1[0x20] = uVar37;
      uVar7 = puVar2[0x22];
      puVar1[0x21] = puVar2[0x21];
      puVar1[0x22] = uVar7;
      uVar8 = puVar2[0x24];
      puVar1[0x23] = puVar2[0x23];
      puVar1[0x24] = uVar8;
      uVar9 = puVar2[0x26];
      puVar1[0x25] = puVar2[0x25];
      puVar1[0x26] = uVar9;
      uVar24 = puVar2[0x27];
      puVar1[0x27] = uVar24;
      uVar38 = puVar2[0x28];
      puVar1[0x29] = puVar2[0x29];
      puVar1[0x28] = uVar38;
      uVar38 = puVar2[0x2b];
      puVar1[0x2a] = puVar2[0x2a];
      puVar1[0x2b] = uVar38;
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(uVar19);
      _swift_bridgeObjectRetain(uVar27);
      _swift_bridgeObjectRetain(uVar29);
      _swift_bridgeObjectRetain(uVar18);
      _swift_bridgeObjectRetain(uVar36);
      _swift_bridgeObjectRetain(uVar35);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar31);
      _swift_bridgeObjectRetain(uVar37);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar8);
      _swift_bridgeObjectRetain(uVar9);
      _swift_bridgeObjectRetain(uVar24);
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x6c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x6c));
    uVar22 = puVar2[1];
    if (uVar22 >> 0x3c < 0xf) {
      uVar23 = *puVar2;
      func_0x00010006c00c(uVar23,uVar22);
      *puVar1 = uVar23;
      puVar1[1] = uVar22;
    }
    else {
      uVar23 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar23;
    }
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar16 + 0x70)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar16 + 0x70));
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x74));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x74));
    uVar23 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar23;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x78));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x78));
    uVar23 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar23;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x7c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x7c));
    uVar27 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar27;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x80));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x80));
    uVar22 = puVar2[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar27);
    if (uVar22 >> 0x3c < 0xf) {
      uVar23 = *puVar2;
      func_0x00010006c00c(uVar23,uVar22);
      *puVar1 = uVar23;
      puVar1[1] = uVar22;
    }
    else {
      uVar23 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar23;
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x84));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x84));
    lVar21 = 0;
    func_0x000100b91fbc();
    lVar20 = *(long *)(lVar21 + -8);
    puVar13 = puVar2;
    (**(code **)(lVar20 + 0x30))(puVar2,1,lVar21);
    if ((int)puVar13 == 0) {
      uVar23 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar23;
      uVar23 = puVar2[2];
      uVar29 = puVar2[5];
      uVar27 = puVar2[4];
      puVar1[3] = puVar2[3];
      puVar1[2] = uVar23;
      puVar1[5] = uVar29;
      puVar1[4] = uVar27;
      uVar23 = puVar2[6];
      uVar27 = puVar2[7];
      puVar1[6] = uVar23;
      puVar1[7] = uVar27;
      uVar27 = puVar2[8];
      puVar1[8] = uVar27;
      lVar28 = (long)*(int *)(lVar21 + 0x28);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(uVar27);
      lVar25 = (long)puVar2 + lVar28;
      (*pcVar26)(lVar25,1,lVar12);
      if ((int)lVar25 == 0) {
        (**(code **)(lVar17 + 0x10))((long)puVar1 + lVar28,(long)puVar2 + lVar28,lVar12);
        (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar28,0,1,lVar12);
      }
      else {
        lVar25 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar1 + lVar28,(long)puVar2 + lVar28,
                *(undefined8 *)(*(long *)(lVar25 + -8) + 0x40));
      }
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x2c));
      puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar21 + 0x2c));
      uVar23 = puVar15[1];
      *puVar13 = *puVar15;
      puVar13[1] = uVar23;
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x30));
      puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar21 + 0x30));
      uVar23 = puVar15[1];
      *puVar13 = *puVar15;
      puVar13[1] = uVar23;
      lVar28 = (long)*(int *)(lVar21 + 0x34);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar23);
      lVar25 = (long)puVar2 + lVar28;
      (*pcVar26)(lVar25,1,lVar12);
      if ((int)lVar25 == 0) {
        (**(code **)(lVar17 + 0x10))((long)puVar1 + lVar28,(long)puVar2 + lVar28,lVar12);
        (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar28,0,1,lVar12);
      }
      else {
        lVar25 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar1 + lVar28,(long)puVar2 + lVar28,
                *(undefined8 *)(*(long *)(lVar25 + -8) + 0x40));
      }
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x38));
      puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar21 + 0x38));
      uVar23 = puVar15[1];
      *puVar13 = *puVar15;
      puVar13[1] = uVar23;
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x3c));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar21 + 0x3c));
      uVar23 = puVar2[1];
      *puVar13 = *puVar2;
      puVar13[1] = uVar23;
      pcVar33 = *(code **)(lVar20 + 0x38);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar23);
      (*pcVar33)(puVar1,0,1,lVar21);
    }
    else {
      lVar21 = 0x112db39a8;
      func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x88));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x88));
    lVar21 = puVar2[1];
    if (lVar21 == 0) {
      uVar23 = puVar2[0x10];
      uVar29 = puVar2[0x13];
      uVar27 = puVar2[0x12];
      puVar1[0x11] = puVar2[0x11];
      puVar1[0x10] = uVar23;
      puVar1[0x13] = uVar29;
      puVar1[0x12] = uVar27;
      *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
      uVar23 = puVar2[8];
      uVar29 = puVar2[0xb];
      uVar27 = puVar2[10];
      puVar1[9] = puVar2[9];
      puVar1[8] = uVar23;
      puVar1[0xb] = uVar29;
      puVar1[10] = uVar27;
      uVar29 = puVar2[0xc];
      uVar27 = puVar2[0xf];
      uVar23 = puVar2[0xe];
      puVar1[0xd] = puVar2[0xd];
      puVar1[0xc] = uVar29;
      puVar1[0xf] = uVar27;
      puVar1[0xe] = uVar23;
      uVar23 = *puVar2;
      uVar29 = puVar2[3];
      uVar27 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar23;
      puVar1[3] = uVar29;
      puVar1[2] = uVar27;
      uVar29 = puVar2[4];
      uVar27 = puVar2[7];
      uVar23 = puVar2[6];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar29;
      puVar1[7] = uVar27;
      puVar1[6] = uVar23;
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar21;
      lVar21 = puVar2[8];
      _swift_bridgeObjectRetain();
      if (lVar21 == 1) {
        uVar23 = puVar2[2];
        uVar29 = puVar2[5];
        uVar27 = puVar2[4];
        puVar1[3] = puVar2[3];
        puVar1[2] = uVar23;
        puVar1[5] = uVar29;
        puVar1[4] = uVar27;
        uVar23 = puVar2[6];
        puVar1[7] = puVar2[7];
        puVar1[6] = uVar23;
        puVar1[8] = puVar2[8];
      }
      else {
        lVar20 = puVar2[4];
        if (lVar20 == 1) {
          uVar23 = puVar2[2];
          uVar29 = puVar2[5];
          uVar27 = puVar2[4];
          puVar1[3] = puVar2[3];
          puVar1[2] = uVar23;
          puVar1[5] = uVar29;
          puVar1[4] = uVar27;
          puVar1[6] = puVar2[6];
        }
        else {
          uVar23 = puVar2[2];
          puVar1[3] = puVar2[3];
          puVar1[2] = uVar23;
          uVar23 = puVar2[5];
          uVar27 = puVar2[6];
          puVar1[4] = lVar20;
          puVar1[5] = uVar23;
          puVar1[6] = uVar27;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar27);
        }
        puVar1[7] = puVar2[7];
        puVar1[8] = lVar21;
        _swift_bridgeObjectRetain(lVar21);
      }
      lVar21 = puVar2[0xf];
      if (lVar21 == 1) {
        uVar23 = puVar2[9];
        puVar1[10] = puVar2[10];
        puVar1[9] = uVar23;
        uVar23 = puVar2[0xb];
        puVar1[0xc] = puVar2[0xc];
        puVar1[0xb] = uVar23;
        uVar23 = puVar2[0xd];
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xd] = uVar23;
        puVar1[0xf] = puVar2[0xf];
      }
      else {
        lVar20 = puVar2[0xb];
        if (lVar20 == 1) {
          uVar23 = puVar2[9];
          puVar1[10] = puVar2[10];
          puVar1[9] = uVar23;
          uVar23 = puVar2[0xb];
          puVar1[0xc] = puVar2[0xc];
          puVar1[0xb] = uVar23;
          puVar1[0xd] = puVar2[0xd];
        }
        else {
          uVar23 = puVar2[9];
          puVar1[10] = puVar2[10];
          puVar1[9] = uVar23;
          uVar23 = puVar2[0xc];
          uVar27 = puVar2[0xd];
          puVar1[0xb] = lVar20;
          puVar1[0xc] = uVar23;
          puVar1[0xd] = uVar27;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar27);
        }
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xf] = lVar21;
        _swift_bridgeObjectRetain(lVar21);
      }
      *(undefined2 *)(puVar1 + 0x10) = *(undefined2 *)(puVar2 + 0x10);
      uVar23 = puVar2[0x11];
      puVar1[0x12] = puVar2[0x12];
      puVar1[0x11] = uVar23;
      puVar1[0x13] = puVar2[0x13];
      *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
      _swift_bridgeObjectRetain();
    }
    *(undefined4 *)((long)param_1 + (long)*(int *)(lVar16 + 0x8c)) =
         *(undefined4 *)((long)param_2 + (long)*(int *)(lVar16 + 0x8c));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar16 + 0x90)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar16 + 0x90));
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x94));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x94));
    uVar23 = *puVar2;
    uVar29 = puVar2[3];
    uVar27 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar23;
    puVar1[3] = uVar29;
    puVar1[2] = uVar27;
    uVar23 = puVar2[4];
    uVar29 = puVar2[7];
    uVar27 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar23;
    puVar1[7] = uVar29;
    puVar1[6] = uVar27;
    uVar29 = puVar2[0xc];
    uVar27 = puVar2[0xf];
    uVar23 = puVar2[0xe];
    puVar1[0xd] = puVar2[0xd];
    puVar1[0xc] = uVar29;
    puVar1[0xf] = uVar27;
    puVar1[0xe] = uVar23;
    uVar29 = puVar2[8];
    uVar27 = puVar2[0xb];
    uVar23 = puVar2[10];
    puVar1[9] = puVar2[9];
    puVar1[8] = uVar29;
    puVar1[0xb] = uVar27;
    puVar1[10] = uVar23;
    uVar23 = *(undefined8 *)((long)puVar2 + 0xa9);
    *(undefined8 *)((long)puVar1 + 0xb1) = *(undefined8 *)((long)puVar2 + 0xb1);
    *(undefined8 *)((long)puVar1 + 0xa9) = uVar23;
    uVar23 = puVar2[0x12];
    uVar29 = puVar2[0x15];
    uVar27 = puVar2[0x14];
    puVar1[0x13] = puVar2[0x13];
    puVar1[0x12] = uVar23;
    puVar1[0x15] = uVar29;
    puVar1[0x14] = uVar27;
    uVar23 = puVar2[0x10];
    puVar1[0x11] = puVar2[0x11];
    puVar1[0x10] = uVar23;
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x98)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x98));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar16 + 0x9c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar16 + 0x9c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0xa0)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0xa0));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0xa4)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0xa4));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0xa8)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0xa8));
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0xac));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0xac));
    lVar21 = puVar2[1];
    if (lVar21 == 0) {
      uVar23 = *puVar2;
      uVar29 = puVar2[3];
      uVar27 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar23;
      puVar1[3] = uVar29;
      puVar1[2] = uVar27;
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar21;
      uVar23 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar23;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar23);
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0xb0)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0xb0));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0xb4)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0xb4));
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0xb8));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0xb8));
    lVar21 = puVar2[1];
    if (lVar21 == 0) {
      uVar23 = puVar2[0x10];
      uVar29 = puVar2[0x13];
      uVar27 = puVar2[0x12];
      puVar1[0x11] = puVar2[0x11];
      puVar1[0x10] = uVar23;
      puVar1[0x13] = uVar29;
      puVar1[0x12] = uVar27;
      *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
      uVar23 = puVar2[8];
      uVar29 = puVar2[0xb];
      uVar27 = puVar2[10];
      puVar1[9] = puVar2[9];
      puVar1[8] = uVar23;
      puVar1[0xb] = uVar29;
      puVar1[10] = uVar27;
      uVar29 = puVar2[0xc];
      uVar27 = puVar2[0xf];
      uVar23 = puVar2[0xe];
      puVar1[0xd] = puVar2[0xd];
      puVar1[0xc] = uVar29;
      puVar1[0xf] = uVar27;
      puVar1[0xe] = uVar23;
      uVar23 = *puVar2;
      uVar29 = puVar2[3];
      uVar27 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar23;
      puVar1[3] = uVar29;
      puVar1[2] = uVar27;
      uVar29 = puVar2[4];
      uVar27 = puVar2[7];
      uVar23 = puVar2[6];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar29;
      puVar1[7] = uVar27;
      puVar1[6] = uVar23;
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar21;
      lVar21 = puVar2[8];
      _swift_bridgeObjectRetain();
      if (lVar21 == 1) {
        uVar23 = puVar2[2];
        uVar29 = puVar2[5];
        uVar27 = puVar2[4];
        puVar1[3] = puVar2[3];
        puVar1[2] = uVar23;
        puVar1[5] = uVar29;
        puVar1[4] = uVar27;
        uVar23 = puVar2[6];
        puVar1[7] = puVar2[7];
        puVar1[6] = uVar23;
        puVar1[8] = puVar2[8];
      }
      else {
        lVar20 = puVar2[4];
        if (lVar20 == 1) {
          uVar23 = puVar2[2];
          uVar29 = puVar2[5];
          uVar27 = puVar2[4];
          puVar1[3] = puVar2[3];
          puVar1[2] = uVar23;
          puVar1[5] = uVar29;
          puVar1[4] = uVar27;
          puVar1[6] = puVar2[6];
        }
        else {
          uVar23 = puVar2[2];
          puVar1[3] = puVar2[3];
          puVar1[2] = uVar23;
          uVar23 = puVar2[5];
          uVar27 = puVar2[6];
          puVar1[4] = lVar20;
          puVar1[5] = uVar23;
          puVar1[6] = uVar27;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar27);
        }
        puVar1[7] = puVar2[7];
        puVar1[8] = lVar21;
        _swift_bridgeObjectRetain(lVar21);
      }
      lVar21 = puVar2[0xf];
      if (lVar21 == 1) {
        uVar23 = puVar2[9];
        puVar1[10] = puVar2[10];
        puVar1[9] = uVar23;
        uVar23 = puVar2[0xb];
        puVar1[0xc] = puVar2[0xc];
        puVar1[0xb] = uVar23;
        uVar23 = puVar2[0xd];
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xd] = uVar23;
        puVar1[0xf] = puVar2[0xf];
      }
      else {
        lVar20 = puVar2[0xb];
        if (lVar20 == 1) {
          uVar23 = puVar2[9];
          puVar1[10] = puVar2[10];
          puVar1[9] = uVar23;
          uVar23 = puVar2[0xb];
          puVar1[0xc] = puVar2[0xc];
          puVar1[0xb] = uVar23;
          puVar1[0xd] = puVar2[0xd];
        }
        else {
          uVar23 = puVar2[9];
          puVar1[10] = puVar2[10];
          puVar1[9] = uVar23;
          uVar23 = puVar2[0xc];
          uVar27 = puVar2[0xd];
          puVar1[0xb] = lVar20;
          puVar1[0xc] = uVar23;
          puVar1[0xd] = uVar27;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar27);
        }
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xf] = lVar21;
        _swift_bridgeObjectRetain(lVar21);
      }
      *(undefined2 *)(puVar1 + 0x10) = *(undefined2 *)(puVar2 + 0x10);
      uVar23 = puVar2[0x11];
      puVar1[0x12] = puVar2[0x12];
      puVar1[0x11] = uVar23;
      puVar1[0x13] = puVar2[0x13];
      *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
      _swift_bridgeObjectRetain();
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0xbc));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0xbc));
    lVar21 = puVar2[1];
    if (lVar21 == 0) {
      uVar23 = puVar2[0x10];
      uVar29 = puVar2[0x13];
      uVar27 = puVar2[0x12];
      puVar1[0x11] = puVar2[0x11];
      puVar1[0x10] = uVar23;
      puVar1[0x13] = uVar29;
      puVar1[0x12] = uVar27;
      *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
      uVar23 = puVar2[8];
      uVar29 = puVar2[0xb];
      uVar27 = puVar2[10];
      puVar1[9] = puVar2[9];
      puVar1[8] = uVar23;
      puVar1[0xb] = uVar29;
      puVar1[10] = uVar27;
      uVar29 = puVar2[0xc];
      uVar27 = puVar2[0xf];
      uVar23 = puVar2[0xe];
      puVar1[0xd] = puVar2[0xd];
      puVar1[0xc] = uVar29;
      puVar1[0xf] = uVar27;
      puVar1[0xe] = uVar23;
      uVar23 = *puVar2;
      uVar29 = puVar2[3];
      uVar27 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar23;
      puVar1[3] = uVar29;
      puVar1[2] = uVar27;
      uVar29 = puVar2[4];
      uVar27 = puVar2[7];
      uVar23 = puVar2[6];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar29;
      puVar1[7] = uVar27;
      puVar1[6] = uVar23;
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar21;
      lVar21 = puVar2[8];
      _swift_bridgeObjectRetain();
      if (lVar21 == 1) {
        uVar23 = puVar2[2];
        uVar29 = puVar2[5];
        uVar27 = puVar2[4];
        puVar1[3] = puVar2[3];
        puVar1[2] = uVar23;
        puVar1[5] = uVar29;
        puVar1[4] = uVar27;
        uVar23 = puVar2[6];
        puVar1[7] = puVar2[7];
        puVar1[6] = uVar23;
        puVar1[8] = puVar2[8];
      }
      else {
        lVar20 = puVar2[4];
        if (lVar20 == 1) {
          uVar23 = puVar2[2];
          uVar29 = puVar2[5];
          uVar27 = puVar2[4];
          puVar1[3] = puVar2[3];
          puVar1[2] = uVar23;
          puVar1[5] = uVar29;
          puVar1[4] = uVar27;
          puVar1[6] = puVar2[6];
        }
        else {
          uVar23 = puVar2[2];
          puVar1[3] = puVar2[3];
          puVar1[2] = uVar23;
          uVar23 = puVar2[5];
          uVar27 = puVar2[6];
          puVar1[4] = lVar20;
          puVar1[5] = uVar23;
          puVar1[6] = uVar27;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar27);
        }
        puVar1[7] = puVar2[7];
        puVar1[8] = lVar21;
        _swift_bridgeObjectRetain(lVar21);
      }
      lVar21 = puVar2[0xf];
      if (lVar21 == 1) {
        uVar23 = puVar2[9];
        puVar1[10] = puVar2[10];
        puVar1[9] = uVar23;
        uVar23 = puVar2[0xb];
        puVar1[0xc] = puVar2[0xc];
        puVar1[0xb] = uVar23;
        uVar23 = puVar2[0xd];
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xd] = uVar23;
        puVar1[0xf] = puVar2[0xf];
      }
      else {
        lVar20 = puVar2[0xb];
        if (lVar20 == 1) {
          uVar23 = puVar2[9];
          puVar1[10] = puVar2[10];
          puVar1[9] = uVar23;
          uVar23 = puVar2[0xb];
          puVar1[0xc] = puVar2[0xc];
          puVar1[0xb] = uVar23;
          puVar1[0xd] = puVar2[0xd];
        }
        else {
          uVar23 = puVar2[9];
          puVar1[10] = puVar2[10];
          puVar1[9] = uVar23;
          uVar23 = puVar2[0xc];
          uVar27 = puVar2[0xd];
          puVar1[0xb] = lVar20;
          puVar1[0xc] = uVar23;
          puVar1[0xd] = uVar27;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar27);
        }
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xf] = lVar21;
        _swift_bridgeObjectRetain(lVar21);
      }
      *(undefined2 *)(puVar1 + 0x10) = *(undefined2 *)(puVar2 + 0x10);
      uVar23 = puVar2[0x11];
      puVar1[0x12] = puVar2[0x12];
      puVar1[0x11] = uVar23;
      puVar1[0x13] = puVar2[0x13];
      *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
      _swift_bridgeObjectRetain();
    }
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar16 + 0xc0)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar16 + 0xc0));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0xc4)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0xc4));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 200)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 200));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar16 + 0xcc)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar16 + 0xcc));
    iVar10 = *(int *)(param_3 + 0x18);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar29 = *(undefined8 *)((long)param_2 + (long)iVar10);
    *(undefined8 *)((long)param_1 + (long)iVar10) = uVar29;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar23 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar23;
    uVar23 = puVar2[2];
    uVar27 = puVar2[3];
    puVar1[2] = uVar23;
    puVar1[3] = uVar27;
    uVar27 = puVar2[4];
    puVar1[4] = uVar27;
    lVar21 = 0;
    func_0x000100b92084();
    puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x1c));
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar21 + 0x1c));
    lVar21 = 0;
    func_0x000100b92194();
    lVar16 = *(long *)(lVar21 + -8);
    pcVar33 = *(code **)(lVar16 + 0x30);
    _swift_bridgeObjectRetain(uVar29);
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar27);
    puVar13 = puVar2;
    (*pcVar33)(puVar2,1,lVar21);
    if ((int)puVar13 == 0) {
      uVar23 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar23;
      uVar27 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar27;
      uVar29 = puVar2[5];
      puVar1[4] = puVar2[4];
      puVar1[5] = uVar29;
      puVar1[6] = puVar2[6];
      *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(puVar2 + 7);
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x14));
      puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar21 + 0x14));
      lVar20 = 0;
      func_0x000100b922c8();
      lVar25 = *(long *)(lVar20 + -8);
      pcVar33 = *(code **)(lVar25 + 0x30);
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(uVar27);
      _swift_bridgeObjectRetain(uVar29);
      puVar14 = puVar15;
      (*pcVar33)(puVar15,1,lVar20);
      if ((int)puVar14 == 0) {
        uVar23 = puVar15[1];
        *puVar13 = *puVar15;
        puVar13[1] = uVar23;
        uVar23 = puVar15[2];
        uVar29 = puVar15[5];
        uVar27 = puVar15[4];
        puVar13[3] = puVar15[3];
        puVar13[2] = uVar23;
        puVar13[5] = uVar29;
        puVar13[4] = uVar27;
        uVar23 = puVar15[7];
        puVar13[6] = puVar15[6];
        puVar13[7] = uVar23;
        lVar30 = (long)*(int *)(lVar20 + 0x28);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar23);
        lVar28 = (long)puVar15 + lVar30;
        (*pcVar26)(lVar28,1,lVar12);
        if ((int)lVar28 == 0) {
          (**(code **)(lVar17 + 0x10))((long)puVar13 + lVar30,(long)puVar15 + lVar30,lVar12);
          (**(code **)(lVar17 + 0x38))((long)puVar13 + lVar30,0,1,lVar12);
        }
        else {
          lVar28 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          _memcpy((long)puVar13 + lVar30,(long)puVar15 + lVar30,
                  *(undefined8 *)(*(long *)(lVar28 + -8) + 0x40));
        }
        puVar14 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar20 + 0x2c));
        puVar3 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar20 + 0x2c));
        uVar23 = puVar3[1];
        *puVar14 = *puVar3;
        puVar14[1] = uVar23;
        puVar14 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar20 + 0x30));
        puVar3 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar20 + 0x30));
        uVar23 = puVar3[1];
        *puVar14 = *puVar3;
        puVar14[1] = uVar23;
        lVar30 = (long)*(int *)(lVar20 + 0x34);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar23);
        lVar28 = (long)puVar15 + lVar30;
        (*pcVar26)(lVar28,1,lVar12);
        if ((int)lVar28 == 0) {
          (**(code **)(lVar17 + 0x10))((long)puVar13 + lVar30,(long)puVar15 + lVar30,lVar12);
          (**(code **)(lVar17 + 0x38))((long)puVar13 + lVar30,0,1,lVar12);
        }
        else {
          lVar12 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          _memcpy((long)puVar13 + lVar30,(long)puVar15 + lVar30,
                  *(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
        }
        puVar14 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar20 + 0x38));
        puVar15 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar20 + 0x38));
        uVar23 = puVar15[1];
        *puVar14 = *puVar15;
        puVar14[1] = uVar23;
        pcVar26 = *(code **)(lVar25 + 0x38);
        _swift_bridgeObjectRetain();
        (*pcVar26)(puVar13,0,1,lVar20);
      }
      else {
        lVar12 = 0x112dd1600;
        func_0x0001000285a8(0x112dd1600,&UNK_10d992a30);
        _memcpy(puVar13,puVar15,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
      }
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x18));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar21 + 0x18));
      lVar12 = 0;
      func_0x000100b92390();
      lVar17 = *(long *)(lVar12 + -8);
      puVar15 = puVar2;
      (**(code **)(lVar17 + 0x30))(puVar2,1,lVar12);
      if ((int)puVar15 == 0) {
        uVar23 = puVar2[1];
        *puVar13 = *puVar2;
        puVar13[1] = uVar23;
        lVar30 = (long)*(int *)(lVar12 + 0x14);
        lVar25 = 0;
        __s10Foundation3URLVMa();
        lVar28 = *(long *)(lVar25 + -8);
        pcVar26 = *(code **)(lVar28 + 0x30);
        _swift_bridgeObjectRetain(uVar23);
        lVar20 = (long)puVar2 + lVar30;
        (*pcVar26)(lVar20,1,lVar25);
        if ((int)lVar20 == 0) {
          (**(code **)(lVar28 + 0x10))((long)puVar13 + lVar30,(long)puVar2 + lVar30,lVar25);
          (**(code **)(lVar28 + 0x38))((long)puVar13 + lVar30,0,1,lVar25);
        }
        else {
          lVar20 = 0x112d36580;
          func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
          _memcpy((long)puVar13 + lVar30,(long)puVar2 + lVar30,
                  *(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
        }
        (**(code **)(lVar17 + 0x38))(puVar13,0,1,lVar12);
      }
      else {
        lVar12 = 0x112dd1458;
        func_0x0001000285a8(0x112dd1458,&UNK_10d992550);
        _memcpy(puVar13,puVar2,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
      }
      (**(code **)(lVar16 + 0x38))(puVar1,0,1,lVar21);
    }
    else {
      lVar21 = 0x112dd1460;
      func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
    }
    iVar10 = *(int *)(param_3 + 0x24);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar10);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar10);
    uVar23 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar23;
    _swift_bridgeObjectRetain();
  }
  else {
    lVar21 = *param_2;
    *param_1 = lVar21;
    uVar22 = (ulong)uVar11 & 0xff;
    param_1 = (long *)(lVar21 + (uVar22 + 0x10 & (uVar22 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1041dd374; end: 1041dd3af;  */

undefined8 FUN_1041dd374(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1041dd3b0; end: 1041dfb7b;  */

undefined8 * FUN_1041dd3b0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar17 = *param_2;
  uVar19 = param_2[3];
  uVar18 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar17;
  param_1[3] = uVar19;
  param_1[2] = uVar18;
  param_1[4] = param_2[4];
  uVar17 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar17;
  uVar17 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar17;
  uVar17 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar17;
  uVar17 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar17;
  uVar17 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar17;
  uVar17 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar17;
  lVar5 = 0;
  func_0x000100b91d00();
  lVar12 = (long)*(int *)(lVar5 + 0x3c);
  lVar6 = 0;
  __s10Foundation4UUIDVMa();
  lVar15 = *(long *)(lVar6 + -8);
  pcVar16 = *(code **)(lVar15 + 0x30);
  lVar7 = (long)param_2 + lVar12;
  (*pcVar16)(lVar7,1,lVar6);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar15 + 0x20))((long)param_1 + lVar12,(long)param_2 + lVar12,lVar6);
    (**(code **)(lVar15 + 0x38))((long)param_1 + lVar12,0,1,lVar6);
  }
  else {
    lVar7 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar12,(long)param_2 + lVar12,
            *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  }
  lVar12 = (long)*(int *)(lVar5 + 0x40);
  lVar7 = (long)param_2 + lVar12;
  (*pcVar16)(lVar7,1,lVar6);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar15 + 0x20))((long)param_1 + lVar12,(long)param_2 + lVar12,lVar6);
    (**(code **)(lVar15 + 0x38))((long)param_1 + lVar12,0,1,lVar6);
  }
  else {
    lVar7 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar12,(long)param_2 + lVar12,
            *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  }
  lVar12 = (long)*(int *)(lVar5 + 0x44);
  lVar7 = (long)param_2 + lVar12;
  (*pcVar16)(lVar7,1,lVar6);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar15 + 0x20))((long)param_1 + lVar12,(long)param_2 + lVar12,lVar6);
    (**(code **)(lVar15 + 0x38))((long)param_1 + lVar12,0,1,lVar6);
  }
  else {
    lVar7 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar12,(long)param_2 + lVar12,
            *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  }
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x48)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x48));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x4c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x4c));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x50)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x50));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x54)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x54));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x58)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x58));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x5c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x5c));
  uVar17 = *puVar2;
  uVar19 = puVar2[3];
  uVar18 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar17;
  puVar1[3] = uVar19;
  puVar1[2] = uVar18;
  uVar19 = puVar2[8];
  uVar18 = puVar2[0xb];
  uVar17 = puVar2[10];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar19;
  puVar1[0xb] = uVar18;
  puVar1[10] = uVar17;
  uVar19 = puVar2[4];
  uVar18 = puVar2[7];
  uVar17 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar19;
  puVar1[7] = uVar18;
  puVar1[6] = uVar17;
  uVar19 = puVar2[0x10];
  uVar18 = puVar2[0x13];
  uVar17 = puVar2[0x12];
  puVar1[0x11] = puVar2[0x11];
  puVar1[0x10] = uVar19;
  puVar1[0x13] = uVar18;
  puVar1[0x12] = uVar17;
  uVar19 = puVar2[0xc];
  uVar18 = puVar2[0xf];
  uVar17 = puVar2[0xe];
  puVar1[0xd] = puVar2[0xd];
  puVar1[0xc] = uVar19;
  puVar1[0xf] = uVar18;
  puVar1[0xe] = uVar17;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x60)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x60));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 100));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 100));
  puVar1[4] = puVar2[4];
  uVar19 = *puVar2;
  uVar18 = puVar2[3];
  uVar17 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar19;
  puVar1[3] = uVar18;
  puVar1[2] = uVar17;
  _memcpy((long)param_1 + (long)*(int *)(lVar5 + 0x68),(long)param_2 + (long)*(int *)(lVar5 + 0x68),
          0x160);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x6c));
  uVar17 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x6c));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar17;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x70)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x70));
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x74));
  uVar17 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x74));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar17;
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x78));
  uVar17 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x78));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar17;
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x7c));
  uVar17 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x7c));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar17;
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x80));
  uVar17 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x80));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar17;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x84));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x84));
  lVar7 = 0;
  func_0x000100b91fbc();
  lVar12 = *(long *)(lVar7 + -8);
  puVar8 = puVar2;
  (**(code **)(lVar12 + 0x30))(puVar2,1,lVar7);
  if ((int)puVar8 == 0) {
    uVar17 = *puVar2;
    uVar19 = puVar2[3];
    uVar18 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar17;
    puVar1[3] = uVar19;
    puVar1[2] = uVar18;
    puVar1[4] = puVar2[4];
    uVar17 = puVar2[5];
    puVar1[6] = puVar2[6];
    puVar1[5] = uVar17;
    uVar17 = puVar2[7];
    puVar1[8] = puVar2[8];
    puVar1[7] = uVar17;
    lVar11 = (long)*(int *)(lVar7 + 0x28);
    lVar14 = (long)puVar2 + lVar11;
    (*pcVar16)(lVar14,1,lVar6);
    if ((int)lVar14 == 0) {
      (**(code **)(lVar15 + 0x20))((long)puVar1 + lVar11,(long)puVar2 + lVar11,lVar6);
      (**(code **)(lVar15 + 0x38))((long)puVar1 + lVar11,0,1,lVar6);
    }
    else {
      lVar14 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar11,(long)puVar2 + lVar11,
              *(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
    }
    puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x2c));
    uVar17 = *puVar8;
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x2c));
    puVar10[1] = puVar8[1];
    *puVar10 = uVar17;
    puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x30));
    uVar17 = *puVar8;
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x30));
    puVar10[1] = puVar8[1];
    *puVar10 = uVar17;
    lVar11 = (long)*(int *)(lVar7 + 0x34);
    lVar14 = (long)puVar2 + lVar11;
    (*pcVar16)(lVar14,1,lVar6);
    if ((int)lVar14 == 0) {
      (**(code **)(lVar15 + 0x20))((long)puVar1 + lVar11,(long)puVar2 + lVar11,lVar6);
      (**(code **)(lVar15 + 0x38))((long)puVar1 + lVar11,0,1,lVar6);
    }
    else {
      lVar14 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar11,(long)puVar2 + lVar11,
              *(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
    }
    puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x38));
    uVar17 = *puVar8;
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x38));
    puVar10[1] = puVar8[1];
    *puVar10 = uVar17;
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x3c));
    uVar17 = *puVar2;
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x3c));
    puVar8[1] = puVar2[1];
    *puVar8 = uVar17;
    (**(code **)(lVar12 + 0x38))(puVar1,0,1,lVar7);
  }
  else {
    lVar7 = 0x112db39a8;
    func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x88));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x88));
  uVar19 = puVar2[8];
  uVar18 = puVar2[0xb];
  uVar17 = puVar2[10];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar19;
  puVar1[0xb] = uVar18;
  puVar1[10] = uVar17;
  *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
  uVar19 = puVar2[0x10];
  uVar18 = puVar2[0x13];
  uVar17 = puVar2[0x12];
  puVar1[0x11] = puVar2[0x11];
  puVar1[0x10] = uVar19;
  puVar1[0x13] = uVar18;
  puVar1[0x12] = uVar17;
  uVar17 = puVar2[0xc];
  uVar19 = puVar2[0xf];
  uVar18 = puVar2[0xe];
  puVar1[0xd] = puVar2[0xd];
  puVar1[0xc] = uVar17;
  puVar1[0xf] = uVar19;
  puVar1[0xe] = uVar18;
  uVar17 = *puVar2;
  uVar19 = puVar2[3];
  uVar18 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar17;
  puVar1[3] = uVar19;
  puVar1[2] = uVar18;
  uVar19 = puVar2[4];
  uVar18 = puVar2[7];
  uVar17 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar19;
  puVar1[7] = uVar18;
  puVar1[6] = uVar17;
  *(undefined4 *)((long)param_1 + (long)*(int *)(lVar5 + 0x8c)) =
       *(undefined4 *)((long)param_2 + (long)*(int *)(lVar5 + 0x8c));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x90)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x90));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x94));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x94));
  uVar17 = *puVar2;
  uVar19 = puVar2[3];
  uVar18 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar17;
  puVar1[3] = uVar19;
  puVar1[2] = uVar18;
  uVar17 = puVar2[4];
  uVar19 = puVar2[7];
  uVar18 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar17;
  puVar1[7] = uVar19;
  puVar1[6] = uVar18;
  uVar19 = puVar2[0xc];
  uVar18 = puVar2[0xf];
  uVar17 = puVar2[0xe];
  puVar1[0xd] = puVar2[0xd];
  puVar1[0xc] = uVar19;
  puVar1[0xf] = uVar18;
  puVar1[0xe] = uVar17;
  uVar19 = puVar2[8];
  uVar18 = puVar2[0xb];
  uVar17 = puVar2[10];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar19;
  puVar1[0xb] = uVar18;
  puVar1[10] = uVar17;
  uVar17 = *(undefined8 *)((long)puVar2 + 0xa9);
  *(undefined8 *)((long)puVar1 + 0xb1) = *(undefined8 *)((long)puVar2 + 0xb1);
  *(undefined8 *)((long)puVar1 + 0xa9) = uVar17;
  uVar17 = puVar2[0x12];
  uVar19 = puVar2[0x15];
  uVar18 = puVar2[0x14];
  puVar1[0x13] = puVar2[0x13];
  puVar1[0x12] = uVar17;
  puVar1[0x15] = uVar19;
  puVar1[0x14] = uVar18;
  uVar17 = puVar2[0x10];
  puVar1[0x11] = puVar2[0x11];
  puVar1[0x10] = uVar17;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x98)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x98));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x9c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x9c));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0xa0)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0xa0));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0xa4)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0xa4));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0xa8)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0xa8));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0xac));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0xac));
  uVar17 = *puVar2;
  uVar19 = puVar2[3];
  uVar18 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar17;
  puVar1[3] = uVar19;
  puVar1[2] = uVar18;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0xb0)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0xb0));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0xb4)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0xb4));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0xb8));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0xb8));
  uVar17 = *puVar2;
  uVar19 = puVar2[3];
  uVar18 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar17;
  puVar1[3] = uVar19;
  puVar1[2] = uVar18;
  uVar19 = puVar2[8];
  uVar18 = puVar2[0xb];
  uVar17 = puVar2[10];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar19;
  puVar1[0xb] = uVar18;
  puVar1[10] = uVar17;
  uVar17 = puVar2[4];
  uVar19 = puVar2[7];
  uVar18 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar17;
  puVar1[7] = uVar19;
  puVar1[6] = uVar18;
  *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
  uVar19 = puVar2[0x10];
  uVar18 = puVar2[0x13];
  uVar17 = puVar2[0x12];
  puVar1[0x11] = puVar2[0x11];
  puVar1[0x10] = uVar19;
  puVar1[0x13] = uVar18;
  puVar1[0x12] = uVar17;
  uVar17 = puVar2[0xc];
  uVar19 = puVar2[0xf];
  uVar18 = puVar2[0xe];
  puVar1[0xd] = puVar2[0xd];
  puVar1[0xc] = uVar17;
  puVar1[0xf] = uVar19;
  puVar1[0xe] = uVar18;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0xbc));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0xbc));
  uVar17 = *puVar2;
  uVar19 = puVar2[3];
  uVar18 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar17;
  puVar1[3] = uVar19;
  puVar1[2] = uVar18;
  uVar19 = puVar2[8];
  uVar18 = puVar2[0xb];
  uVar17 = puVar2[10];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar19;
  puVar1[0xb] = uVar18;
  puVar1[10] = uVar17;
  uVar17 = puVar2[4];
  uVar19 = puVar2[7];
  uVar18 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar17;
  puVar1[7] = uVar19;
  puVar1[6] = uVar18;
  *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
  uVar19 = puVar2[0x10];
  uVar18 = puVar2[0x13];
  uVar17 = puVar2[0x12];
  puVar1[0x11] = puVar2[0x11];
  puVar1[0x10] = uVar19;
  puVar1[0x13] = uVar18;
  puVar1[0x12] = uVar17;
  uVar17 = puVar2[0xc];
  uVar19 = puVar2[0xf];
  uVar18 = puVar2[0xe];
  puVar1[0xd] = puVar2[0xd];
  puVar1[0xc] = uVar17;
  puVar1[0xf] = uVar19;
  puVar1[0xe] = uVar18;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0xc0)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0xc0));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0xc4)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0xc4));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 200)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 200));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0xcc)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0xcc));
  iVar3 = *(int *)(param_3 + 0x18);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *puVar1 = *puVar2;
  uVar17 = puVar2[1];
  puVar1[2] = puVar2[2];
  puVar1[1] = uVar17;
  uVar17 = puVar2[3];
  puVar1[4] = puVar2[4];
  puVar1[3] = uVar17;
  lVar7 = 0;
  func_0x000100b92084();
  puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x1c));
  puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x1c));
  lVar7 = 0;
  func_0x000100b92194();
  lVar5 = *(long *)(lVar7 + -8);
  puVar8 = puVar2;
  (**(code **)(lVar5 + 0x30))(puVar2,1,lVar7);
  if ((int)puVar8 == 0) {
    uVar17 = *puVar2;
    uVar19 = puVar2[3];
    uVar18 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar17;
    puVar1[3] = uVar19;
    puVar1[2] = uVar18;
    uVar17 = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar17;
    uVar17 = *(undefined8 *)((long)puVar2 + 0x29);
    *(undefined8 *)((long)puVar1 + 0x31) = *(undefined8 *)((long)puVar2 + 0x31);
    *(undefined8 *)((long)puVar1 + 0x29) = uVar17;
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x14));
    puVar10 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x14));
    lVar12 = 0;
    func_0x000100b922c8();
    lVar14 = *(long *)(lVar12 + -8);
    puVar9 = puVar10;
    (**(code **)(lVar14 + 0x30))(puVar10,1,lVar12);
    if ((int)puVar9 == 0) {
      uVar17 = *puVar10;
      uVar19 = puVar10[3];
      uVar18 = puVar10[2];
      puVar8[1] = puVar10[1];
      *puVar8 = uVar17;
      puVar8[3] = uVar19;
      puVar8[2] = uVar18;
      uVar17 = puVar10[4];
      uVar19 = puVar10[7];
      uVar18 = puVar10[6];
      puVar8[5] = puVar10[5];
      puVar8[4] = uVar17;
      puVar8[7] = uVar19;
      puVar8[6] = uVar18;
      lVar13 = (long)*(int *)(lVar12 + 0x28);
      lVar11 = (long)puVar10 + lVar13;
      (*pcVar16)(lVar11,1,lVar6);
      if ((int)lVar11 == 0) {
        (**(code **)(lVar15 + 0x20))((long)puVar8 + lVar13,(long)puVar10 + lVar13,lVar6);
        (**(code **)(lVar15 + 0x38))((long)puVar8 + lVar13,0,1,lVar6);
      }
      else {
        lVar11 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar8 + lVar13,(long)puVar10 + lVar13,
                *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
      }
      puVar9 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar12 + 0x2c));
      uVar17 = *puVar9;
      puVar4 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar12 + 0x2c));
      puVar4[1] = puVar9[1];
      *puVar4 = uVar17;
      puVar9 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar12 + 0x30));
      uVar17 = *puVar9;
      puVar4 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar12 + 0x30));
      puVar4[1] = puVar9[1];
      *puVar4 = uVar17;
      lVar13 = (long)*(int *)(lVar12 + 0x34);
      lVar11 = (long)puVar10 + lVar13;
      (*pcVar16)(lVar11,1,lVar6);
      if ((int)lVar11 == 0) {
        (**(code **)(lVar15 + 0x20))((long)puVar8 + lVar13,(long)puVar10 + lVar13,lVar6);
        (**(code **)(lVar15 + 0x38))((long)puVar8 + lVar13,0,1,lVar6);
      }
      else {
        lVar6 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar8 + lVar13,(long)puVar10 + lVar13,
                *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
      }
      puVar10 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar12 + 0x38));
      uVar17 = *puVar10;
      puVar9 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar12 + 0x38));
      puVar9[1] = puVar10[1];
      *puVar9 = uVar17;
      (**(code **)(lVar14 + 0x38))(puVar8,0,1,lVar12);
    }
    else {
      lVar6 = 0x112dd1600;
      func_0x0001000285a8(0x112dd1600,&UNK_10d992a30);
      _memcpy(puVar8,puVar10,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    }
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x18));
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x18));
    lVar6 = 0;
    func_0x000100b92390();
    lVar12 = *(long *)(lVar6 + -8);
    puVar10 = puVar2;
    (**(code **)(lVar12 + 0x30))(puVar2,1,lVar6);
    if ((int)puVar10 == 0) {
      uVar17 = *puVar2;
      puVar8[1] = puVar2[1];
      *puVar8 = uVar17;
      lVar13 = (long)*(int *)(lVar6 + 0x14);
      lVar14 = 0;
      __s10Foundation3URLVMa();
      lVar11 = *(long *)(lVar14 + -8);
      lVar15 = (long)puVar2 + lVar13;
      (**(code **)(lVar11 + 0x30))(lVar15,1,lVar14);
      if ((int)lVar15 == 0) {
        (**(code **)(lVar11 + 0x20))((long)puVar8 + lVar13,(long)puVar2 + lVar13,lVar14);
        (**(code **)(lVar11 + 0x38))((long)puVar8 + lVar13,0,1,lVar14);
      }
      else {
        lVar15 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        _memcpy((long)puVar8 + lVar13,(long)puVar2 + lVar13,
                *(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
      }
      (**(code **)(lVar12 + 0x38))(puVar8,0,1,lVar6);
    }
    else {
      lVar6 = 0x112dd1458;
      func_0x0001000285a8(0x112dd1458,&UNK_10d992550);
      _memcpy(puVar8,puVar2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    }
    (**(code **)(lVar5 + 0x38))(puVar1,0,1,lVar7);
  }
  else {
    lVar7 = 0x112dd1460;
    func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x24);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  param_2 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar17 = *param_2;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar1[1] = param_2[1];
  *puVar1 = uVar17;
  return param_1;
}



/* Entry: 1041dfb7c; end: 1041dfbd3;  */

void FUN_1041dfb7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1041dfbd4; end: 1041dfc13;  */

void FUN_1041dfbd4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130685b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce0da0;
  _swift_getWitnessTable(&UNK_10dce0da0,&UNK_1107500e0);
  puRam00000001130685b8 = puVar1;
  return;
}


