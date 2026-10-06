/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104838830; end: 104838af3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104838830(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_113091588))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113091588);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar4 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  if (((undefined8 *)(unaff_x20 + _DAT_113091590))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113091590);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar4 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  lVar3 = *(long *)(unaff_x20 + _DAT_113091598);
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,PTR___sSSN_11034da80);
    lVar5 = lVar3;
    func_0x00010bfde980();
    _objc_release(lVar3);
  }
  __ss6HasherV8_combineyySuF(lVar5);
  if (((undefined8 *)(unaff_x20 + _DAT_1130915a0))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130915a0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar4 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  if (((undefined8 *)(unaff_x20 + _DAT_1130915a8))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130915a8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar4 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  lVar3 = *(long *)(unaff_x20 + _DAT_1130915b0);
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    uVar4 = 0;
    FUN_10483bf4c(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar4);
    lVar5 = lVar3;
    func_0x00010bfde980();
    _objc_release(lVar3);
  }
  __ss6HasherV8_combineyySuF(lVar5);
  lVar3 = *(long *)(unaff_x20 + _DAT_1130915b8);
  if (lVar3 == 0) {
    uVar4 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_c0);
    puVar1 = (undefined8 *)(lVar3 + _DAT_113091520);
    if (puVar1[1] == 0) {
      uVar4 = 0;
    }
    else {
      uVar2 = *puVar1;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
      uVar4 = uVar2;
      func_0x00010bfde980();
      _objc_release(uVar2);
    }
    __ss6HasherV8_combineyySuF(uVar4);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  if (*(long *)(unaff_x20 + _DAT_1130915c0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_10483cdec();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_1130915c8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104838af4; end: 104838e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104838af4(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long unaff_x20;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lStack_88;
  long alStack_80 [4];
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  FUN_10483aa48(param_1,alStack_80,0x112d387f8,&UNK_10d902650);
  if (alStack_80[3] == 0) {
    func_0x00010006e7f4(alStack_80);
  }
  else {
    plVar4 = &lStack_88;
    _swift_dynamicCast(plVar4,alStack_80,PTR___sypN_11034f1a8 + 8,lVar6,6);
    if (((ulong)plVar4 & 1) != 0) {
      lVar6 = ((long *)(unaff_x20 + _DAT_113091588))[1];
      lVar7 = ((long *)(lStack_88 + _DAT_113091588))[1];
      uVar3 = (uint)(lVar6 == 0 && lVar7 == 0);
      if (lVar6 != 0 && lVar7 != 0) {
        lVar5 = *(long *)(unaff_x20 + _DAT_113091588);
        if (lVar5 == *(long *)(lStack_88 + _DAT_113091588) && lVar6 == lVar7) {
          uVar3 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar3 = (uint)lVar5;
        }
      }
      lVar6 = ((long *)(unaff_x20 + _DAT_113091590))[1];
      lVar7 = ((long *)(lStack_88 + _DAT_113091590))[1];
      uVar9 = (uint)(lVar6 == 0 && lVar7 == 0);
      if (lVar6 != 0 && lVar7 != 0) {
        lVar5 = *(long *)(unaff_x20 + _DAT_113091590);
        if (lVar5 == *(long *)(lStack_88 + _DAT_113091590) && lVar6 == lVar7) {
          uVar9 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar9 = (uint)lVar5;
        }
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_113091598);
      uVar10 = (uint)(lVar6 == 0 && *(long *)(lStack_88 + _DAT_113091598) == 0);
      if ((lVar6 != 0) && (*(long *)(lStack_88 + _DAT_113091598) != 0)) {
        func_0x00010142cfc4();
        uVar10 = (uint)lVar6;
      }
      lVar6 = ((long *)(unaff_x20 + _DAT_1130915a0))[1];
      lVar7 = ((long *)(lStack_88 + _DAT_1130915a0))[1];
      uVar11 = (uint)(lVar6 == 0 && lVar7 == 0);
      if ((lVar6 != 0) && (lVar7 != 0)) {
        lVar5 = *(long *)(unaff_x20 + _DAT_1130915a0);
        if ((lVar5 == *(long *)(lStack_88 + _DAT_1130915a0)) && (lVar6 == lVar7)) {
          uVar11 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar11 = (uint)lVar5;
        }
      }
      lVar6 = ((long *)(unaff_x20 + _DAT_1130915a8))[1];
      lVar7 = ((long *)(lStack_88 + _DAT_1130915a8))[1];
      uVar12 = (uint)(lVar6 == 0 && lVar7 == 0);
      if ((lVar6 != 0) && (lVar7 != 0)) {
        lVar5 = *(long *)(unaff_x20 + _DAT_1130915a8);
        if ((lVar5 == *(long *)(lStack_88 + _DAT_1130915a8)) && (lVar6 == lVar7)) {
          uVar12 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar12 = (uint)lVar5;
        }
      }
      lVar7 = *(long *)(unaff_x20 + _DAT_1130915b0);
      lVar6 = *(long *)(lStack_88 + _DAT_1130915b0);
      uVar13 = (uint)(lVar7 == 0 && lVar6 == 0);
      if ((lVar7 != 0) && (lVar6 != 0)) {
        _swift_bridgeObjectRetain(lVar6);
        lVar5 = lVar7;
        _swift_bridgeObjectRetain();
        uVar13 = (uint)lVar5;
        func_0x00010470d468();
        _swift_bridgeObjectRelease(lVar7);
        _swift_bridgeObjectRelease(lVar6);
      }
      if (*(long *)(unaff_x20 + _DAT_1130915b8) == 0) {
        uVar14 = (uint)(*(long *)(lStack_88 + _DAT_1130915b8) == 0);
      }
      else {
        lVar6 = *(long *)(lStack_88 + _DAT_1130915b8);
        if (lVar6 == 0) {
          lVar7 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar7 = 0;
          FUN_104837df0();
        }
        alStack_80[0] = lVar6;
        alStack_80[3] = lVar7;
        _objc_retain(lVar6);
        uVar14 = 0;
        func_0x000104837998();
        func_0x00010006e7f4(alStack_80);
      }
      if (*(long *)(unaff_x20 + _DAT_1130915c0) == 0) {
        uVar8 = (uint)(*(long *)(lStack_88 + _DAT_1130915c0) == 0);
      }
      else {
        lVar6 = *(long *)(lStack_88 + _DAT_1130915c0);
        if (lVar6 == 0) {
          lVar7 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar7 = 0;
          FUN_10483d664();
        }
        alStack_80[0] = lVar6;
        alStack_80[3] = lVar7;
        _objc_retain(lVar6);
        plVar4 = alStack_80;
        FUN_10483cea4(plVar4);
        uVar8 = (uint)plVar4;
        func_0x00010006e7f4(alStack_80);
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_1130915c8);
      bVar2 = *(byte *)(lStack_88 + _DAT_1130915c8);
      _objc_release(lStack_88);
      if ((uVar3 & uVar9 & uVar10 & uVar11 & uVar12 & uVar13 & uVar14 & 1) != 0) {
        uVar8 = uVar8 & ((bVar1 ^ bVar2) ^ 1);
        goto LAB_104838e68;
      }
    }
  }
  uVar8 = 0;
LAB_104838e68:
  return uVar8 & 1;
}



/* Entry: 104838e8c; end: 104838e97; -[SCAdWebViewMetadata id] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104838e8c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113091588))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113091588);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104838e98; end: 104838ea3; -[SCAdWebViewMetadata baseURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104838e98(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113091590))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113091590);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104838ea4; end: 104838ef7; -[SCAdWebViewMetadata gaScriptURLs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104838ea4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113091598);
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



/* Entry: 104838ef8; end: 104838f03; -[SCAdWebViewMetadata snapPixelScriptURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104838ef8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130915a0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130915a0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104838f04; end: 104838f0f; -[SCAdWebViewMetadata resourcePrefetchHintsURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104838f04(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130915a8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130915a8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104838f10; end: 104838f67;  */

void FUN_104838f10(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104838f68; end: 104838fc3; -[SCAdWebViewMetadata renderCriticalResources] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104838f68(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1130915b0);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_10483bf4c(0);
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



/* Entry: 104838fc4; end: 104838fd3; -[SCAdWebViewMetadata inhouseCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104838fc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130915b8));
  return;
}



/* Entry: 104838fd4; end: 104838fe3; -[SCAdWebViewMetadata serverRedirectHints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104838fd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130915c0));
  return;
}



/* Entry: 104838fe4; end: 104838ff3; -[SCAdWebViewMetadata enablePreload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104838fe4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130915c8);
}



/* Entry: 104838ff4; end: 104839233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104838ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091588);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091590);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113091598) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130915a0);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130915a8);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_1130915b0) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_1130915b8) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_1130915c0) = param_12;
  *(undefined1 *)(unaff_x20 + _DAT_1130915c8) = param_13;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104839234; end: 10483986f; -[SCAdWebViewMetadata initWithId:baseURL:gaScriptURLs:snapPixelScriptURL:resourcePrefetchHintsURL:renderCriticalResources:inhouseCache:serverRedirectHints:enablePreload:] */

void FUN_104839234(undefined8 param_1,undefined *param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,undefined8 param_9,undefined8 param_10,
                  undefined1 param_11)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if (param_3 == 0) {
    uStack_78 = (undefined *)0x0;
    uStack_70 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_78 = param_2;
    uStack_70 = param_3;
  }
  if (param_4 == 0) {
    uStack_88 = (undefined *)0x0;
    uStack_80 = 0;
    puVar6 = PTR___sSSN_11034da80;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_88 = param_2;
    uStack_80 = param_4;
    puVar6 = PTR___sSSN_11034da80;
  }
  PTR___sSSN_11034da80 = puVar6;
  if (param_5 == 0) {
    param_5 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_5);
    param_2 = puVar6;
  }
  lVar2 = param_6;
  _objc_retain();
  lVar3 = param_7;
  _objc_retain();
  lVar4 = param_8;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  if (lVar2 == 0) {
    param_6 = 0;
    puVar1 = (undefined *)0x0;
    puVar6 = param_2;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
    puVar6 = param_2;
    _objc_release(lVar2);
    puVar1 = param_2;
  }
  if (lVar3 == 0) {
    param_7 = 0;
    puVar6 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
    _objc_release(lVar3);
  }
  if (lVar4 == 0) {
    param_8 = 0;
  }
  else {
    uVar5 = 0;
    FUN_10483bf4c(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_8,uVar5);
    _objc_release(lVar4);
  }
  func_0x000104839114(uStack_70,uStack_78,uStack_80,uStack_88,param_5,param_6,puVar1,param_7,puVar6,
                      param_8,param_9,param_10,param_11);
  return;
}



/* Entry: 104839870; end: 1048398a3; -[SCAdWebViewMetadata hash] */

undefined8 FUN_104839870(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104838830();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1048398a4; end: 104839923; -[SCAdWebViewMetadata isEqual:] */

uint FUN_1048398a4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104838af4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104839924; end: 104839927; -[SCAdWebViewMetadata copyWithZone:] */

void FUN_104839924(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104839928; end: 104839c8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104839928(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_113091588))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091588);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4449,0xe200000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113091590))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091590);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4c52555f45534142;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c52555f45534142,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_113091598);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,PTR___sSSN_11034da80);
  }
  uVar1 = 0x50495243535f4147;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x50495243535f4147,0xee00534c52555f54);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_1130915a0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130915a0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f2112a0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_1130915a8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130915a8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f2112c0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_1130915b0);
  if (lVar3 != 0) {
    uVar1 = 0;
    FUN_10483bf4c(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar1);
  }
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f2112e0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar1);
  uVar1 = 0x5f4553554f484e49;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f4553554f484e49,0xed00004548434143);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f211300);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x505f454c42414e45;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x505f454c42414e45,0xee0044414f4c4552);
  func_0x00010bf92da0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104839c90; end: 104839cdf; -[SCAdWebViewMetadata encodeWithCoder:] */

void FUN_104839c90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104839928(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104839ce0; end: 104839d0f;  */

void FUN_104839ce0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104839d10(param_1);
  return;
}



/* Entry: 104839d10; end: 10483a4cb;  */

undefined8 FUN_104839d10(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x20;
  long lVar8;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
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
  
  uVar2 = 0x4449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4449,0xe200000000000000);
  lVar8 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar8 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar8);
    _swift_unknownObjectRelease(lVar8);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lStack_f0 = 0;
    lVar8 = 0;
  }
  else {
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar8 = lStack_b8;
    lStack_f0 = lStack_c0;
    if ((int)plVar3 == 0) {
      lStack_f0 = 0;
      lVar8 = 0;
    }
  }
  uVar2 = 0x4c52555f45534142;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c52555f45534142,0xe800000000000000);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar4 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lStack_e8 = 0;
    lVar4 = 0;
  }
  else {
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar4 = lStack_b8;
    lStack_e8 = lStack_c0;
    if ((int)plVar3 == 0) {
      lStack_e8 = 0;
      lVar4 = 0;
    }
  }
  uVar2 = 0x50495243535f4147;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x50495243535f4147,0xee00534c52555f54);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
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
    lStack_d0 = 0;
  }
  else {
    uVar2 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
    lStack_d0 = lStack_c0;
    if ((int)plVar3 == 0) {
      lStack_d0 = 0;
    }
  }
  uVar2 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f2112a0);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
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
    lStack_f8 = 0;
    lVar5 = 0;
  }
  else {
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar5 = lStack_b8;
    lStack_f8 = lStack_c0;
    if ((int)plVar3 == 0) {
      lStack_f8 = 0;
      lVar5 = 0;
    }
  }
  uVar2 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f2112c0);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar6 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lStack_100 = 0;
    lStack_d8 = 0;
  }
  else {
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lStack_100 = lStack_c0;
    lStack_d8 = lStack_b8;
    if ((int)plVar3 == 0) {
      lStack_100 = 0;
      lStack_d8 = 0;
    }
  }
  uVar2 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f2112e0);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar6 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lStack_e0 = 0;
  }
  else {
    uVar2 = 0x1130915d0;
    func_0x0001000285a8(0x1130915d0,&UNK_10dd369d8);
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
    lStack_e0 = lStack_c0;
    if ((int)plVar3 == 0) {
      lStack_e0 = 0;
    }
  }
  uVar2 = 0x5f4553554f484e49;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f4553554f484e49,0xed00004548434143);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar6 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lVar6 = 0;
  }
  else {
    uVar2 = 0;
    FUN_104837df0(0);
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
    lVar6 = lStack_c0;
    if ((int)plVar3 == 0) {
      lVar6 = 0;
    }
  }
  uVar2 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f211300);
  lVar7 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
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
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lVar7 = 0;
  }
  else {
    uVar2 = 0;
    FUN_10483d664(0);
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
    lVar7 = lStack_c0;
    if ((int)plVar3 == 0) {
      lVar7 = 0;
    }
  }
  uVar2 = 0x505f454c42414e45;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x505f454c42414e45,0xee0044414f4c4552);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  if (lVar8 == 0) {
    lStack_f0 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_f0,lVar8);
    _swift_bridgeObjectRelease(lVar8);
  }
  if (lVar4 == 0) {
    lStack_e8 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_e8,lVar4);
    _swift_bridgeObjectRelease(lVar4);
  }
  if (lStack_d0 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = lStack_d0;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lStack_d0,PTR___sSSN_11034da80);
    _swift_bridgeObjectRelease(lStack_d0);
  }
  lVar4 = 0;
  if (lVar5 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_f8,lVar5);
    _swift_bridgeObjectRelease(lVar5);
    lVar4 = lStack_f8;
  }
  if (lStack_d8 == 0) {
    lStack_100 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_100,lStack_d8);
    _swift_bridgeObjectRelease(lStack_d8);
  }
  lVar5 = lStack_e0;
  if (lStack_e0 != 0) {
    uVar2 = 0;
    FUN_10483bf4c(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lStack_e0,uVar2);
    _swift_bridgeObjectRelease(lStack_e0);
  }
  func_0x00010c01b1e0(unaff_x20);
  _objc_release(lStack_f0);
  _objc_release(lStack_e8);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lStack_100);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar7);
  return unaff_x20;
}



/* Entry: 10483a4cc; end: 10483a4f3; -[SCAdWebViewMetadata initWithCoder:] */

void FUN_10483a4cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104839d10();
  return;
}



/* Entry: 10483a4f4; end: 10483a53f; -[SCAdWebViewMetadata description] */

void FUN_10483a4f4(undefined8 param_1)

{
  undefined1 auStack_a0 [128];
  
  _objc_retain();
  FUN_10483a664(auStack_a0);
  _objc_release(param_1);
  func_0x0001017b663c(auStack_a0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10483a540; end: 10483a5bb; -[SCAdWebViewMetadata init] */

void FUN_10483a540(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdWebViewMetadataWrapper.swift",
             0x2a,2,0x96,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10483a588);
  (*pcVar1)();
}



/* Entry: 10483a5bc; end: 10483a663; -[SCAdWebViewMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483a5bc(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113091588 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113091590 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113091598));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130915a0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130915a8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130915b0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130915b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130915c0));
  return;
}



/* Entry: 10483a664; end: 10483aa47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483a664(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  ulong uVar9;
  undefined1 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_113091588);
  puVar2 = (undefined8 *)(param_2 + _DAT_113091590);
  uVar25 = puVar1[1];
  uVar24 = *puVar1;
  uVar20 = puVar1[1];
  uVar23 = puVar2[1];
  uVar22 = *puVar2;
  uVar12 = puVar2[1];
  uVar16 = *(undefined8 *)(param_2 + _DAT_113091598);
  uVar3 = *(undefined8 *)(param_2 + _DAT_1130915a0);
  uVar5 = ((undefined8 *)(param_2 + _DAT_1130915a0))[1];
  uVar4 = *(undefined8 *)(param_2 + _DAT_1130915a8);
  uVar6 = ((undefined8 *)(param_2 + _DAT_1130915a8))[1];
  uVar19 = *(ulong *)(param_2 + _DAT_1130915b0);
  if (uVar19 == 0) {
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRetain(uVar5);
    puVar13 = (undefined *)0x0;
  }
  else {
    if (uVar19 >> 0x3e == 0) {
      uVar17 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar17 = uVar19;
      if (-1 < (long)uVar19) {
        uVar17 = uVar19 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar13;
    if (uVar17 == 0) {
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar20);
      _swift_bridgeObjectRetain(uVar12);
      _swift_bridgeObjectRetain(uVar16);
      _swift_bridgeObjectRetain(uVar5);
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      _swift_bridgeObjectRetain(uVar20);
      _swift_bridgeObjectRetain(uVar12);
      _swift_bridgeObjectRetain(uVar16);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      func_0x0001015528f8(0,uVar17 & ((long)uVar17 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10483aa48);
        (*pcVar8)();
      }
      if ((uVar19 & 0xc000000000000001) == 0) {
        plVar14 = (long *)(uVar19 + 0x20);
        do {
          puVar1 = (undefined8 *)(*plVar14 + _DAT_113091640);
          puVar2 = (undefined8 *)(*plVar14 + _DAT_113091648);
          uVar26 = puVar1[1];
          uVar18 = *puVar1;
          uVar15 = puVar2[1];
          uVar20 = *puVar2;
          uVar12 = puVar2[1];
          uVar19 = *(ulong *)(puVar13 + 0x10);
          uVar21 = *(ulong *)(puVar13 + 0x18);
          _swift_bridgeObjectRetain(puVar1[1]);
          _swift_bridgeObjectRetain(uVar12);
          if (uVar21 >> 1 <= uVar19) {
            func_0x0001015528f8(1 < uVar21,uVar19 + 1,1);
          }
          *(ulong *)(puVar13 + 0x10) = uVar19 + 1;
          *(undefined8 *)(puVar13 + uVar19 * 0x20 + 0x28) = uVar26;
          *(undefined8 *)(puVar13 + uVar19 * 0x20 + 0x20) = uVar18;
          *(undefined8 *)(puVar13 + uVar19 * 0x20 + 0x38) = uVar15;
          *(undefined8 *)(puVar13 + uVar19 * 0x20 + 0x30) = uVar20;
          uVar17 = uVar17 - 1;
          plVar14 = plVar14 + 1;
        } while (uVar17 != 0);
      }
      else {
        uVar21 = 0;
        do {
          uVar9 = uVar21;
          func_0x0001046c5088(uVar21,uVar19);
          puVar1 = (undefined8 *)(uVar9 + _DAT_113091640);
          puVar2 = (undefined8 *)(uVar9 + _DAT_113091648);
          uVar26 = puVar1[1];
          uVar18 = *puVar1;
          uVar12 = puVar1[1];
          uVar15 = puVar2[1];
          uVar20 = *puVar2;
          _swift_bridgeObjectRetain(puVar2[1]);
          _swift_bridgeObjectRetain(uVar12);
          _swift_unknownObjectRelease(uVar9);
          uVar9 = *(ulong *)(puVar13 + 0x10);
          if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar9) {
            func_0x0001015528f8(1 < *(ulong *)(puVar13 + 0x18),uVar9 + 1,1);
          }
          uVar21 = uVar21 + 1;
          *(ulong *)(puVar13 + 0x10) = uVar9 + 1;
          *(undefined8 *)(puVar13 + uVar9 * 0x20 + 0x28) = uVar26;
          *(undefined8 *)(puVar13 + uVar9 * 0x20 + 0x20) = uVar18;
          *(undefined8 *)(puVar13 + uVar9 * 0x20 + 0x38) = uVar15;
          *(undefined8 *)(puVar13 + uVar9 * 0x20 + 0x30) = uVar20;
        } while (uVar17 != uVar21);
      }
    }
  }
  if (*(long *)(param_2 + _DAT_1130915b8) == 0) {
    uVar12 = 0;
    uVar20 = 1;
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_2 + _DAT_1130915b8) + _DAT_113091520);
    uVar12 = *puVar1;
    uVar20 = puVar1[1];
    _swift_bridgeObjectRetain(uVar20);
  }
  lVar11 = *(long *)(param_2 + _DAT_1130915c0);
  if (lVar11 == 0) {
    uVar15 = 0;
    uVar18 = 0;
    lVar11 = 0;
    uVar10 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(lVar11 + _DAT_1130916c0);
    uVar18 = ((undefined8 *)(lVar11 + _DAT_1130916c0))[1];
    lVar11 = *(long *)(lVar11 + _DAT_1130916c8);
    _swift_bridgeObjectRetain(uVar18);
    if (lVar11 == 0) {
      lVar11 = 0;
      uVar10 = 1;
    }
    else {
      func_0x00010c067fc0();
      uVar10 = 0;
    }
  }
  uVar7 = *(undefined1 *)(param_2 + _DAT_1130915c8);
  param_1[1] = uVar25;
  *param_1 = uVar24;
  param_1[3] = uVar23;
  param_1[2] = uVar22;
  param_1[4] = uVar16;
  param_1[5] = uVar3;
  param_1[6] = uVar5;
  param_1[7] = uVar4;
  param_1[8] = uVar6;
  param_1[9] = puVar13;
  param_1[10] = uVar12;
  param_1[0xb] = uVar20;
  param_1[0xc] = uVar15;
  param_1[0xd] = uVar18;
  param_1[0xe] = lVar11;
  *(undefined1 *)(param_1 + 0xf) = uVar10;
  *(undefined1 *)((long)param_1 + 0x79) = uVar7;
  return;
}



/* Entry: 10483aa48; end: 10483aa8f;  */

undefined8 FUN_10483aa48(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10483aa90; end: 10483aaaf;  */

void FUN_10483aa90(void)

{
  _objc_opt_self(&PTR_PTR_1129dabf8);
  return;
}



/* Entry: 10483aab0; end: 10483ab1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483aab0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091600);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091608);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  uVar2 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091610);
  puVar1[1] = param_1[5];
  *puVar1 = uVar2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483ab1c; end: 10483ad37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483ab1c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091600);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113091600))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091608);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113091608))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091610);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113091610))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10483ad38; end: 10483ad43; -[SCAdWebViewPromotionInfo promoDescriptionShort] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483ad38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113091600);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113091600))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10483ad44; end: 10483ad4f; -[SCAdWebViewPromotionInfo promoDescriptionLong] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483ad44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113091608);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113091608))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10483ad50; end: 10483ad5b; -[SCAdWebViewPromotionInfo promoCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483ad50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113091610);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113091610))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10483ad5c; end: 10483ada3;  */

void FUN_10483ad5c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10483ada4; end: 10483ae3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483ada4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091600);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091608);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091610);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483ae40; end: 10483aefb; -[SCAdWebViewPromotionInfo initWithPromoDescriptionShort:promoDescriptionLong:promoCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483ae40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar4 = uVar3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_113091600);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_113091608);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)(param_1 + _DAT_113091610);
  *puVar1 = param_5;
  puVar1[1] = uVar4;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483aefc; end: 10483af67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483aefc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _swift_getObjectType();
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091600);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091608);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  uVar2 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091610);
  puVar1[1] = param_1[5];
  *puVar1 = uVar2;
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483af68; end: 10483af9b; -[SCAdWebViewPromotionInfo hash] */

undefined8 FUN_10483af68(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10483ab1c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10483af9c; end: 10483b01b; -[SCAdWebViewPromotionInfo isEqual:] */

uint FUN_10483af9c(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x00010483abf4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10483b01c; end: 10483b01f; -[SCAdWebViewPromotionInfo copyWithZone:] */

void FUN_10483b01c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10483b020; end: 10483b14b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483b020(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091600);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113091600))[1]);
  uVar2 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f211350);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091608);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113091608))[1]);
  uVar2 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f211370);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091610);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113091610))[1]);
  uVar2 = 0x4f435f4f4d4f5250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f435f4f4d4f5250,0xea00000000004544);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10483b14c; end: 10483b19b; -[SCAdWebViewPromotionInfo encodeWithCoder:] */

void FUN_10483b14c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10483b020(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10483b19c; end: 10483b1cb;  */

void FUN_10483b19c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10483b1cc(param_1);
  return;
}



/* Entry: 10483b1cc; end: 10483b4f7;  */

undefined8 FUN_10483b1cc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar5 = 0;
  uVar7 = 0;
  uVar9 = 0;
  uVar3 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f211350);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar4 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
  }
  else {
    _swift_dynamicCast(&uStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar10 = uStack_a8;
    uVar3 = uStack_b0;
    if ((uVar5 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_10483b49c;
    }
    uVar6 = 0xd000000000000016;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f211370);
    lVar4 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    if (lVar4 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar4);
      _swift_unknownObjectRelease(lVar4);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 != 0) {
      _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
      uVar2 = uStack_a8;
      uVar6 = uStack_b0;
      if ((uVar7 & 1) == 0) {
        _objc_release(param_1);
      }
      else {
        uVar8 = 0x4f435f4f4d4f5250;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f435f4f4d4f5250,0xea00000000004544)
        ;
        lVar4 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        if (lVar4 == 0) {
          uStack_98 = 0;
          uStack_a0 = 0;
          lStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar4);
          _swift_unknownObjectRelease(lVar4);
        }
        uStack_78 = uStack_98;
        uStack_80 = uStack_a0;
        lStack_68 = lStack_88;
        uStack_70 = uStack_90;
        if (lStack_88 == 0) {
          _objc_release(param_1);
          _swift_bridgeObjectRelease(uVar2);
          goto LAB_10483b48c;
        }
        _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
        if ((uVar9 & 1) != 0) {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar10);
          _swift_bridgeObjectRelease(uVar10);
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar2);
          _swift_bridgeObjectRelease(uVar2);
          uVar10 = uStack_b0;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_b0,uStack_a8);
          _swift_bridgeObjectRelease(uStack_a8);
          func_0x00010c03b5a0();
          _objc_release(uVar3);
          _objc_release(uVar6);
          _objc_release(uVar10);
          _objc_release(param_1);
          return unaff_x20;
        }
        _objc_release(param_1);
        _swift_bridgeObjectRelease(uVar2);
      }
      _swift_bridgeObjectRelease(uVar10);
      goto LAB_10483b49c;
    }
    _objc_release(param_1);
LAB_10483b48c:
    _swift_bridgeObjectRelease(uVar10);
  }
  func_0x00010006e7f4(&uStack_80);
LAB_10483b49c:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10483b4f8; end: 10483b51f; -[SCAdWebViewPromotionInfo initWithCoder:] */

void FUN_10483b4f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10483b1cc();
  return;
}



/* Entry: 10483b520; end: 10483b53b; -[SCAdWebViewPromotionInfo description] */

void FUN_10483b520(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10483b53c; end: 10483b5b7; -[SCAdWebViewPromotionInfo init] */

void FUN_10483b53c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdWebViewPromotionInfoWrapper.swift",0x2f,2,0x55,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10483b584);
  (*pcVar1)();
}



/* Entry: 10483b5b8; end: 10483b60b; -[SCAdWebViewPromotionInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483b5b8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113091600 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113091608 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113091610 + 8))
  ;
  return;
}



/* Entry: 10483b60c; end: 10483b62b;  */

void FUN_10483b60c(void)

{
  _objc_opt_self(&PTR_PTR_1129dad08);
  return;
}



/* Entry: 10483b62c; end: 10483b637; -[SCAdWebViewResourceInfo resourceURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483b62c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113091640))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113091640);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10483b638; end: 10483b643; -[SCAdWebViewResourceInfo attribute] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483b638(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113091648))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113091648);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10483b644; end: 10483b69b;  */

void FUN_10483b644(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10483b69c; end: 10483b69f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483b69c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091640);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091648);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483b6a0; end: 10483b71b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483b6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091640);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091648);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483b71c; end: 10483b7c7; -[SCAdWebViewResourceInfo initWithResourceURL:attribute:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483b71c(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
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
  plVar1 = (long *)(param_1 + _DAT_113091640);
  *plVar1 = param_3;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_113091648);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483b7c8; end: 10483b7fb; -[SCAdWebViewResourceInfo hash] */

undefined8 FUN_10483b7c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10483b7fc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10483b7fc; end: 10483ba2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483b7fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_113091640))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091640);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113091648))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091648);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10483ba2c; end: 10483baab; -[SCAdWebViewResourceInfo isEqual:] */

uint FUN_10483ba2c(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x00010483b8c0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10483baac; end: 10483baaf; -[SCAdWebViewResourceInfo copyWithZone:] */

void FUN_10483baac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10483bab0; end: 10483bba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483bab0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_113091640))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091640);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x454352554f534552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454352554f534552,0xec0000004c52555f);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113091648))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091648);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x5455424952545441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5455424952545441,0xe900000000000045);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10483bba4; end: 10483bbf3; -[SCAdWebViewResourceInfo encodeWithCoder:] */

void FUN_10483bba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10483bab0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10483bbf4; end: 10483bc23;  */

void FUN_10483bbf4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10483bc24(param_1);
  return;
}



/* Entry: 10483bc24; end: 10483be4b;  */

undefined8 FUN_10483bc24(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  int iVar3;
  
  iVar2 = (int)&uStack_a0;
  iVar3 = (int)&uStack_a0;
  uVar4 = 0x454352554f534552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454352554f534552,0xec0000004c52555f);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar5 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    lVar5 = 0;
    uVar4 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar5 = lStack_98;
    uVar4 = uStack_a0;
    if (iVar2 == 0) {
      uVar4 = 0;
      lVar5 = 0;
    }
  }
  uVar6 = 0x5455424952545441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5455424952545441,0xe900000000000045);
  lVar7 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar7 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar7);
    _swift_unknownObjectRelease(lVar7);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    uVar6 = 0;
    lVar7 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,PTR___sSSN_11034da80,6);
    uVar6 = uStack_a0;
    lVar7 = lStack_98;
    if (iVar3 == 0) {
      uVar6 = 0;
      lVar7 = 0;
    }
  }
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,lVar5);
    _swift_bridgeObjectRelease(lVar5);
  }
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,lVar7);
    _swift_bridgeObjectRelease(lVar7);
  }
  func_0x00010c03fa80();
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 10483be4c; end: 10483be73; -[SCAdWebViewResourceInfo initWithCoder:] */

void FUN_10483be4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10483bc24();
  return;
}



/* Entry: 10483be74; end: 10483be8f; -[SCAdWebViewResourceInfo description] */

void FUN_10483be74(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10483be90; end: 10483bf0b; -[SCAdWebViewResourceInfo init] */

void FUN_10483be90(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdWebViewResourceInfoWrapper.swift",0x2e,2,0x47,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10483bed8);
  (*pcVar1)();
}



/* Entry: 10483bf0c; end: 10483bf4b; -[SCAdWebViewResourceInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483bf0c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113091640 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113091648 + 8))
  ;
  return;
}



/* Entry: 10483bf4c; end: 10483bf6b;  */

void FUN_10483bf4c(void)

{
  _objc_opt_self(&PTR_PTR_1129dade8);
  return;
}



/* Entry: 10483bf6c; end: 10483bf6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483bf6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091640);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091648);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483bf70; end: 10483c12f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483bf70(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_allocWithZone();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091678);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091680);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091688);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  func_0x000100402194(&uStack_40,auStack_70);
  func_0x000100402194(&uStack_50,auStack_70);
  func_0x000100402194(&uStack_60,auStack_70);
  func_0x0001017b6774(param_1);
  *(undefined8 *)(unaff_x20 + _DAT_113091690) = param_1[6];
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483c130; end: 10483c29b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10483c130(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  uint uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar3 = &lStack_78;
    _swift_dynamicCast(plVar3,auStack_70,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar2 = *(long *)(unaff_x20 + _DAT_113091678);
      if (lVar2 == *(long *)(lStack_78 + _DAT_113091678) &&
          ((long *)(unaff_x20 + _DAT_113091678))[1] == ((long *)(lStack_78 + _DAT_113091678))[1]) {
        uVar4 = 0;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar4 = (uint)lVar2 ^ 1;
      }
      lVar2 = *(long *)(unaff_x20 + _DAT_113091680);
      if (lVar2 == *(long *)(lStack_78 + _DAT_113091680) &&
          ((long *)(unaff_x20 + _DAT_113091680))[1] == ((long *)(lStack_78 + _DAT_113091680))[1]) {
        uVar5 = 0;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar5 = (uint)lVar2 ^ 1;
      }
      lVar2 = *(long *)(unaff_x20 + _DAT_113091688);
      if (lVar2 == *(long *)(lStack_78 + _DAT_113091688) &&
          ((long *)(unaff_x20 + _DAT_113091688))[1] == ((long *)(lStack_78 + _DAT_113091688))[1]) {
        uVar1 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar1 = (uint)lVar2;
      }
      dVar6 = *(double *)(unaff_x20 + _DAT_113091690);
      dVar7 = *(double *)(lStack_78 + _DAT_113091690);
      _objc_release(lStack_78);
      if (((uVar4 | uVar5) & 1) == 0) {
        return uVar1 & dVar6 == dVar7;
      }
    }
  }
  return 0;
}



/* Entry: 10483c29c; end: 10483c2a7; -[SCAdWebViewRetargetPromptInfo title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483c29c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113091678);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113091678))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10483c2a8; end: 10483c2b3; -[SCAdWebViewRetargetPromptInfo subtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483c2a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113091680);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113091680))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10483c2b4; end: 10483c2bf; -[SCAdWebViewRetargetPromptInfo buttonText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483c2b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113091688);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113091688))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10483c2c0; end: 10483c307;  */

void FUN_10483c2c0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10483c308; end: 10483c317; -[SCAdWebViewRetargetPromptInfo retargetTimeThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10483c308(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113091690);
}



/* Entry: 10483c318; end: 10483c47f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483c318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091678);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091680);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091688);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113091690) = param_1;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483c480; end: 10483c553; -[SCAdWebViewRetargetPromptInfo initWithTitle:subtitle:buttonText:retargetTimeThreshold:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483c480(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_2;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = param_3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar4 = uVar3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_2 + _DAT_113091678);
  *puVar1 = param_4;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(param_2 + _DAT_113091680);
  *puVar1 = param_5;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)(param_2 + _DAT_113091688);
  *puVar1 = param_6;
  puVar1[1] = uVar4;
  *(undefined8 *)(param_2 + _DAT_113091690) = param_1;
  lStack_70 = param_2;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483c554; end: 10483c60f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483c554(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [16];
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
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091678);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091680);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091688);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  func_0x000100402194(&uStack_40,auStack_70);
  func_0x000100402194(&uStack_50,auStack_70);
  func_0x000100402194(&uStack_60,auStack_70);
  func_0x0001017b6774(param_1);
  *(undefined8 *)(unaff_x20 + _DAT_113091690) = param_1[6];
  _objc_msgSendSuper2(&stack0xffffffffffffff80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483c610; end: 10483c643; -[SCAdWebViewRetargetPromptInfo hash] */

undefined8 FUN_10483c610(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010483c034();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10483c644; end: 10483c6c3; -[SCAdWebViewRetargetPromptInfo isEqual:] */

uint FUN_10483c644(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10483c130(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10483c6c4; end: 10483c6c7; -[SCAdWebViewRetargetPromptInfo copyWithZone:] */

void FUN_10483c6c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10483c6c8; end: 10483c833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483c6c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113091678);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113091678))[1]);
  uVar1 = 0x454c544954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c544954,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113091680);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113091680))[1]);
  uVar1 = 0x454c544954425553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c544954425553,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113091688);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113091688))[1]);
  uVar1 = 0x545f4e4f54545542;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545f4e4f54545542,0xeb00000000545845);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091690);
  uVar2 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f2113f0);
  func_0x00010bf92e80(uVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10483c834; end: 10483c883; -[SCAdWebViewRetargetPromptInfo encodeWithCoder:] */

void FUN_10483c834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10483c6c8(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10483c884; end: 10483c8b3;  */

void FUN_10483c884(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10483c8b4(param_1);
  return;
}



/* Entry: 10483c8b4; end: 10483cc17;  */

undefined8 FUN_10483c8b4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 unaff_x20;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar5 = 0;
  uVar7 = 0;
  uVar9 = 0;
  uVar3 = 0x454c544954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c544954,0xe500000000000000);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar4 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    _objc_release(param_1);
  }
  else {
    _swift_dynamicCast(&uStack_c0,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar11 = uStack_b8;
    uVar3 = uStack_c0;
    if ((uVar5 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_10483cbb8;
    }
    uVar6 = 0x454c544954425553;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c544954425553,0xe800000000000000);
    lVar4 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    if (lVar4 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar4);
      _swift_unknownObjectRelease(lVar4);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 != 0) {
      _swift_dynamicCast(&uStack_c0,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      uVar2 = uStack_b8;
      uVar6 = uStack_c0;
      if ((uVar7 & 1) == 0) {
        _objc_release(param_1);
      }
      else {
        uVar8 = 0x545f4e4f54545542;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545f4e4f54545542,0xeb00000000545845)
        ;
        lVar4 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        if (lVar4 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar4);
          _swift_unknownObjectRelease(lVar4);
        }
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 == 0) {
          _objc_release(param_1);
          _swift_bridgeObjectRelease(uVar2);
          goto LAB_10483cba8;
        }
        uVar8 = uStack_a0;
        _swift_dynamicCast(&uStack_c0,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
        if ((uVar9 & 1) != 0) {
          uVar10 = 0xd000000000000017;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000017,0x800000010f2113f0);
          func_0x00010bf66da0(param_1);
          _objc_release(uVar10);
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar11);
          _swift_bridgeObjectRelease(uVar11);
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar2);
          _swift_bridgeObjectRelease(uVar2);
          uVar11 = uStack_c0;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_c0,uStack_b8);
          _swift_bridgeObjectRelease(uStack_b8);
          func_0x00010c053580(uVar8);
          _objc_release(uVar3);
          _objc_release(uVar6);
          _objc_release(uVar11);
          _objc_release(param_1);
          return unaff_x20;
        }
        _objc_release(param_1);
        _swift_bridgeObjectRelease(uVar2);
      }
      _swift_bridgeObjectRelease(uVar11);
      goto LAB_10483cbb8;
    }
    _objc_release(param_1);
LAB_10483cba8:
    _swift_bridgeObjectRelease(uVar11);
  }
  func_0x00010006e7f4(&uStack_90);
LAB_10483cbb8:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10483cc18; end: 10483cc3f; -[SCAdWebViewRetargetPromptInfo initWithCoder:] */

void FUN_10483cc18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10483c8b4();
  return;
}



/* Entry: 10483cc40; end: 10483cc5b; -[SCAdWebViewRetargetPromptInfo description] */

void FUN_10483cc40(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10483cc5c; end: 10483ccd7; -[SCAdWebViewRetargetPromptInfo init] */

void FUN_10483cc5c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdWebViewRetargetPromptInfoWrapper.swift",0x34,2,0x5f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10483cca4);
  (*pcVar1)();
}



/* Entry: 10483ccd8; end: 10483cd2b; -[SCAdWebViewRetargetPromptInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483ccd8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113091678 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113091680 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113091688 + 8))
  ;
  return;
}



/* Entry: 10483cd2c; end: 10483cd4b;  */

void FUN_10483cd2c(void)

{
  _objc_opt_self(&PTR_PTR_1129daec0);
  return;
}



/* Entry: 10483cd4c; end: 10483cdeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483cd4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130916c0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (param_4 == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_1130916c8) = puVar2;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483cdec; end: 10483cea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483cdec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130916c0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_1130916c0))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_1130916c8);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10483cea4; end: 10483cfff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10483cea4(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar6,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_1130916c0);
      if (lVar6 == *(long *)(lStack_68 + _DAT_1130916c0) &&
          ((long *)(unaff_x20 + _DAT_1130916c0))[1] == ((long *)(lStack_68 + _DAT_1130916c0))[1]) {
        uVar4 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar4 = (uint)lVar6;
      }
      lVar7 = *(long *)(unaff_x20 + _DAT_1130916c8);
      lVar6 = *(long *)(lStack_68 + _DAT_1130916c8);
      if (lVar7 == 0) {
        lVar3 = lVar6;
        _objc_retain(lVar6);
        _objc_release(lStack_68);
        if (lVar6 != 0) {
          uVar5 = 0;
          goto LAB_10483cfd0;
        }
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
        lVar3 = lStack_68;
        if (lVar6 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar6);
          _objc_retain(lVar7);
          lVar2 = lVar7;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar5 = (uint)lVar2;
          _objc_release(lVar7);
          _objc_release(lVar6);
        }
LAB_10483cfd0:
        _objc_release(lVar3);
      }
      uVar4 = uVar4 & uVar5;
      goto LAB_10483cfdc;
    }
  }
  uVar4 = 0;
LAB_10483cfdc:
  return uVar4 & 1;
}



/* Entry: 10483d000; end: 10483d04b; -[SCAdWebViewServerRedirectHints redirectResolvedUrlMatchPrefix] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483d000(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130916c0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130916c0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10483d04c; end: 10483d05b; -[SCAdWebViewServerRedirectHints expectedServerRedirectCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483d04c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130916c8));
  return;
}



/* Entry: 10483d05c; end: 10483d0c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483d05c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130916c0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130916c8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483d0c8; end: 10483d147; -[SCAdWebViewServerRedirectHints initWithRedirectResolvedUrlMatchPrefix:expectedServerRedirectCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483d0c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_1130916c0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_1130916c8) = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 10483d148; end: 10483d17b; -[SCAdWebViewServerRedirectHints hash] */

undefined8 FUN_10483d148(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10483cdec();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10483d17c; end: 10483d1fb; -[SCAdWebViewServerRedirectHints isEqual:] */

uint FUN_10483d17c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10483cea4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}


