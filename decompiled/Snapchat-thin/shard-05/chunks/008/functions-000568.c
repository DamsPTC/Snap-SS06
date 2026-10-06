/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104280f04; end: 104280f13; -[SCAdDeepLinkAdTrackInfo skanImpressionEndTsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104280f04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a688));
  return;
}



/* Entry: 104280f14; end: 104280f23; -[SCAdDeepLinkAdTrackInfo skanViewTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104280f14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a690));
  return;
}



/* Entry: 104280f24; end: 10428116b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104280f24(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306a640) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306a648) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11306a650) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_11306a658) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a660);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_11306a668) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11306a670) = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_11306a678) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11306a680) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11306a688) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11306a690) = param_13;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10428116c; end: 10428123f; -[SCAdDeepLinkAdTrackInfo initWithDeepLinkToAppCount:deepLinkToAppInstallCount:deepLinkFallbackToWebview:deepLinkFallbackToDefaultBrowser:deepLinkURI:customProductPageEnabled:appInstallStatus:isInternalDeepLink:skanImpressionStartTsMs:skanImpressionEndTsMs:skanViewTime:] */

void FUN_10428116c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,long param_7,undefined4 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  if (param_7 == 0) {
    param_7 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
  }
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  func_0x000104281048(param_3,param_4,param_5,param_6,param_7,param_2,param_8,param_9,param_10);
  return;
}



/* Entry: 104281240; end: 10428126f;  */

void FUN_104281240(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104281270(param_1);
  return;
}



/* Entry: 104281270; end: 10428141b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104281270(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_c0 [112];
  
  _swift_getObjectType();
  uVar3 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11306a640) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306a648) = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_11306a650) = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(unaff_x20 + _DAT_11306a658) = *(undefined1 *)((long)param_1 + 0x11);
  uVar3 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a660);
  puVar1[1] = param_1[4];
  *puVar1 = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_11306a668) = *(undefined1 *)(param_1 + 5);
  *(undefined8 *)(unaff_x20 + _DAT_11306a670) = param_1[6];
  *(undefined1 *)(unaff_x20 + _DAT_11306a678) = *(undefined1 *)(param_1 + 7);
  if (*(char *)(param_1 + 9) == '\x01') {
    func_0x00010178e30c(param_1,auStack_c0);
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar3 = param_1[8];
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010178e30c(param_1,auStack_c0);
    func_0x00010c00e360(uVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_11306a680) = puVar2;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar3 = param_1[10];
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_11306a688) = puVar2;
  if (*(char *)(param_1 + 0xd) == '\x01') {
    func_0x00010178e348(param_1);
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar3 = param_1[0xc];
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar3);
    func_0x00010178e348(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_11306a690) = puVar2;
  _objc_msgSendSuper2(&stack0xffffffffffffff30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10428141c; end: 10428144f; -[SCAdDeepLinkAdTrackInfo hash] */

undefined8 FUN_10428141c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104281450();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104281450; end: 104281633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104281450(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a640));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a648));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306a650));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306a658));
  if (((undefined8 *)(unaff_x20 + _DAT_11306a660))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306a660);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306a668));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a670));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306a678));
  lVar3 = *(long *)(unaff_x20 + _DAT_11306a680);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11306a688);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11306a690);
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



/* Entry: 104281634; end: 1042819e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104281634(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  long unaff_x20;
  long lVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  uint uStack_9c;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar14 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar11 = &lStack_88;
    _swift_dynamicCast(plVar11,auStack_80,PTR___sypN_11034f1a8 + 8,lVar14,6);
    if (((ulong)plVar11 & 1) != 0) {
      lVar21 = *(long *)(unaff_x20 + _DAT_11306a640);
      lVar23 = *(long *)(lStack_88 + _DAT_11306a640);
      lVar22 = *(long *)(unaff_x20 + _DAT_11306a648);
      lVar18 = *(long *)(lStack_88 + _DAT_11306a648);
      bVar3 = *(byte *)(unaff_x20 + _DAT_11306a650);
      bVar4 = *(byte *)(lStack_88 + _DAT_11306a650);
      bVar5 = *(byte *)(unaff_x20 + _DAT_11306a658);
      bVar6 = *(byte *)(lStack_88 + _DAT_11306a658);
      lVar14 = ((long *)(unaff_x20 + _DAT_11306a660))[1];
      lVar15 = ((long *)(lStack_88 + _DAT_11306a660))[1];
      if (lVar14 == 0 || lVar15 == 0) {
        uStack_9c = (uint)(lVar14 == 0 && lVar15 == 0);
      }
      else {
        lVar12 = *(long *)(unaff_x20 + _DAT_11306a660);
        if (lVar12 == *(long *)(lStack_88 + _DAT_11306a660) && lVar14 == lVar15) {
          uStack_9c = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_9c = (uint)lVar12;
        }
      }
      bVar7 = *(byte *)(unaff_x20 + _DAT_11306a668);
      bVar8 = *(byte *)(lStack_88 + _DAT_11306a668);
      iVar1 = *(int *)(unaff_x20 + _DAT_11306a670);
      iVar2 = *(int *)(lStack_88 + _DAT_11306a670);
      bVar9 = *(byte *)(unaff_x20 + _DAT_11306a678);
      bVar10 = *(byte *)(lStack_88 + _DAT_11306a678);
      lVar15 = *(long *)(unaff_x20 + _DAT_11306a680);
      lVar14 = *(long *)(lStack_88 + _DAT_11306a680);
      uVar19 = (uint)(lVar15 == 0 && lVar14 == 0);
      if ((lVar15 != 0) && (lVar14 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar14);
        _objc_retain();
        lVar12 = lVar15;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar19 = (uint)lVar12;
        _objc_release(lVar15);
        _objc_release(lVar14);
      }
      lVar15 = *(long *)(unaff_x20 + _DAT_11306a688);
      lVar14 = *(long *)(lStack_88 + _DAT_11306a688);
      uVar20 = (uint)(lVar15 == 0 && lVar14 == 0);
      if ((lVar15 != 0) && (lVar14 != 0)) {
        func_0x0001002ed07c();
        _objc_retain(lVar14);
        _objc_retain();
        lVar12 = lVar15;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar20 = (uint)lVar12;
        _objc_release(lVar15);
        _objc_release(lVar14);
      }
      lVar15 = *(long *)(unaff_x20 + _DAT_11306a690);
      lVar14 = *(long *)(lStack_88 + _DAT_11306a690);
      if (lVar15 == 0) {
        lVar12 = lVar14;
        _objc_retain(lVar14);
        _objc_release(lStack_88);
        if (lVar14 != 0) {
          uVar17 = 0;
          goto LAB_104281968;
        }
        uVar17 = 1;
      }
      else {
        uVar17 = 0;
        lVar12 = lStack_88;
        if (lVar14 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar14);
          _objc_retain(lVar15);
          lVar13 = lVar15;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar17 = (uint)lVar13;
          _objc_release(lVar15);
          _objc_release(lVar14);
        }
LAB_104281968:
        _objc_release(lVar12);
      }
      uVar16 = 0;
      if ((((((lVar21 == lVar23) && (lVar22 == lVar18)) && (((bVar3 ^ bVar4) & 1) == 0)) &&
           ((((bVar5 ^ bVar6) & 1) == 0 && (((uStack_9c ^ 1) & 1) == 0)))) &&
          ((((bVar7 ^ bVar8) & 1) == 0 && ((iVar1 == iVar2 && (((bVar9 ^ bVar10) & 1) == 0)))))) &&
         (((uVar19 ^ 1) & 1) == 0)) {
        uVar16 = uVar20 & uVar17;
      }
      goto LAB_104281730;
    }
  }
  uVar16 = 0;
LAB_104281730:
  return uVar16 & 1;
}



/* Entry: 1042819e4; end: 104281a63; -[SCAdDeepLinkAdTrackInfo isEqual:] */

uint FUN_1042819e4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104281634(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104281a64; end: 104281a67; -[SCAdDeepLinkAdTrackInfo copyWithZone:] */

void FUN_104281a64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104281a68; end: 104281d9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104281a68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f0a00);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f0a20);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1f0a40);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f1f0a60);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306a660))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306a660);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4e494c5f50454544;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e494c5f50454544,0xed00004952555f4b);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f0540);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f0560);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f0a90);
  func_0x00010bf92da0(param_1);
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



/* Entry: 104281d9c; end: 104281deb; -[SCAdDeepLinkAdTrackInfo encodeWithCoder:] */

void FUN_104281d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104281a68(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104281dec; end: 104281e1b;  */

void FUN_104281dec(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104281e1c(param_1);
  return;
}



/* Entry: 104281e1c; end: 1042823a7;  */

undefined8 FUN_104281e1c(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  long lVar6;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f0a00);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f0a20);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1f0a40);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f1f0a60);
  func_0x00010bf66ce0();
  _objc_release(uVar1);
  uVar1 = 0x4e494c5f50454544;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e494c5f50454544,0xed00004952555f4b);
  uVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (uVar2 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar2);
    _swift_unknownObjectRelease(uVar2);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uStack_d0 = 0;
    lVar6 = 0;
  }
  else {
    puVar3 = &uStack_c0;
    _swift_dynamicCast(puVar3,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar6 = lStack_b8;
    uStack_d0 = uStack_c0;
    if ((int)puVar3 == 0) {
      uStack_d0 = 0;
      lVar6 = 0;
    }
  }
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f0540);
  func_0x00010bf66ce0();
  _objc_release(uVar1);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f0560);
  uVar2 = param_1;
  func_0x00010bf66f40();
  _objc_release(uVar1);
  if (2 < uVar2) {
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar6);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return 0;
  }
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f0a90);
  func_0x00010bf66ce0();
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f05d0);
  uVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (uVar2 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar2);
    _swift_unknownObjectRelease(uVar2);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    puVar3 = &uStack_c0;
    _swift_dynamicCast(puVar3,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar1,6);
    uVar1 = uStack_c0;
    if ((int)puVar3 == 0) {
      uVar1 = 0;
    }
  }
  uVar4 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f05f0);
  uVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (uVar2 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar2);
    _swift_unknownObjectRelease(uVar2);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    func_0x0001002ed07c(0);
    puVar3 = &uStack_c0;
    _swift_dynamicCast(puVar3,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar4,6);
    uVar4 = uStack_c0;
    if ((int)puVar3 == 0) {
      uVar4 = 0;
    }
  }
  uVar5 = 0x4549565f4e414b53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4549565f4e414b53,0xee00454d49545f57);
  uVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (uVar2 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar2);
    _swift_unknownObjectRelease(uVar2);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    func_0x0001002ed07c(0);
    puVar3 = &uStack_c0;
    _swift_dynamicCast(puVar3,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar5,6);
    uVar5 = uStack_c0;
    if ((int)puVar3 == 0) {
      uVar5 = 0;
    }
  }
  if (lVar6 == 0) {
    uStack_d0 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_d0,lVar6);
    _swift_bridgeObjectRelease(lVar6);
  }
  func_0x00010c009c00(unaff_x20);
  _objc_release(uStack_d0);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar5);
  return unaff_x20;
}



/* Entry: 1042823a8; end: 1042823cf; -[SCAdDeepLinkAdTrackInfo initWithCoder:] */

void FUN_1042823a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104281e1c();
  return;
}



/* Entry: 1042823d0; end: 104282407; -[SCAdDeepLinkAdTrackInfo description] */

void FUN_1042823d0(void)

{
  undefined1 auStack_80 [112];
  
  _objc_retain();
  FUN_1042824e0(auStack_80);
  func_0x00010178e348(auStack_80);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104282408; end: 104282483; -[SCAdDeepLinkAdTrackInfo init] */

void FUN_104282408(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdDeepLinkAdTrackInfoWrapper.swift",0x31,2,0xa8,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104282450);
  (*pcVar1)();
}



/* Entry: 104282484; end: 1042824df; -[SCAdDeepLinkAdTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104282484(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a660 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a680));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a688));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306a690));
  return;
}



/* Entry: 1042824e0; end: 1042826ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042824e0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_1d8 [112];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined1 uStack_157;
  undefined6 uStack_156;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined1 uStack_e7;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  
  uVar11 = *(undefined8 *)(param_3 + _DAT_11306a640);
  uVar10 = *(undefined8 *)(param_3 + _DAT_11306a648);
  uVar6 = *(undefined1 *)(param_3 + _DAT_11306a650);
  uVar7 = *(undefined1 *)(param_3 + _DAT_11306a658);
  uVar4 = *(undefined8 *)(param_3 + _DAT_11306a660);
  uVar5 = ((undefined8 *)(param_3 + _DAT_11306a660))[1];
  uVar8 = *(undefined1 *)(param_3 + _DAT_11306a668);
  uVar13 = *(undefined8 *)(param_3 + _DAT_11306a670);
  uVar9 = *(undefined1 *)(param_3 + _DAT_11306a678);
  lVar12 = *(long *)(param_3 + _DAT_11306a680);
  bVar1 = lVar12 == 0;
  if (bVar1) {
    _swift_bridgeObjectRetain(uVar5);
    uVar14 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    func_0x00010bf885a0(lVar12);
    uVar14 = param_2;
  }
  bVar2 = *(long *)(param_3 + _DAT_11306a688) == 0;
  if (bVar2) {
    uVar15 = 0;
  }
  else {
    func_0x00010bf885a0();
    uVar15 = param_2;
  }
  bVar3 = *(long *)(param_3 + _DAT_11306a690) == 0;
  if (bVar3) {
    _objc_release(param_3);
    param_2 = 0;
  }
  else {
    func_0x00010bf885a0();
    _objc_release(param_3);
  }
  uStack_108 = (undefined1)param_2;
  uStack_107 = (undefined7)((ulong)param_2 >> 8);
  uStack_168 = uVar11;
  uStack_160 = uVar10;
  uStack_158 = uVar6;
  uStack_157 = uVar7;
  uStack_150 = uVar4;
  uStack_148 = uVar5;
  uStack_140 = uVar8;
  uStack_138 = uVar13;
  uStack_130 = uVar9;
  uStack_128 = uVar14;
  uStack_120 = bVar1;
  uStack_118 = uVar15;
  uStack_110 = bVar2;
  uStack_100 = bVar3;
  uStack_f8 = uVar11;
  uStack_f0 = uVar10;
  uStack_e8 = uVar6;
  uStack_e7 = uVar7;
  uStack_e0 = uVar4;
  uStack_d8 = uVar5;
  uStack_d0 = uVar8;
  uStack_c8 = uVar13;
  uStack_c0 = uVar9;
  uStack_b8 = uVar14;
  uStack_b0 = bVar1;
  uStack_a8 = uVar15;
  uStack_a0 = bVar2;
  uStack_98 = param_2;
  uStack_90 = bVar3;
  func_0x00010178e30c(&uStack_168,auStack_1d8);
  func_0x00010178e348(&uStack_f8);
  param_1[9] = CONCAT71(uStack_11f,uStack_120);
  param_1[8] = uStack_128;
  param_1[0xb] = CONCAT71(uStack_10f,uStack_110);
  param_1[10] = uStack_118;
  *(ulong *)((long)param_1 + 0x61) = CONCAT17(uStack_100,uStack_107);
  *(ulong *)((long)param_1 + 0x59) = CONCAT17(uStack_108,uStack_10f);
  param_1[1] = uStack_160;
  *param_1 = uStack_168;
  param_1[3] = uStack_150;
  param_1[2] = CONCAT62(uStack_156,CONCAT11(uStack_157,uStack_158));
  param_1[5] = CONCAT71(uStack_13f,uStack_140);
  param_1[4] = uStack_148;
  param_1[7] = CONCAT71(uStack_12f,uStack_130);
  param_1[6] = uStack_138;
  return;
}



/* Entry: 1042826f0; end: 10428270f;  */

void FUN_1042826f0(void)

{
  _objc_opt_self(&PTR_PTR_1129928e0);
  return;
}



/* Entry: 104282710; end: 10428271f; -[SCAdEndCardInteractionInfo endCardDisplayedTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104282710(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a6c0);
}



/* Entry: 104282720; end: 10428272f; -[SCAdEndCardInteractionInfo tappedIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104282720(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a6c8));
  return;
}



/* Entry: 104282730; end: 10428273f; -[SCAdEndCardInteractionInfo endCardType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104282730(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a6d0);
}



/* Entry: 104282740; end: 10428274f; -[SCAdEndCardInteractionInfo screenshotEndCardStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104282740(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a6d8);
}



/* Entry: 104282750; end: 10428275f; -[SCAdEndCardInteractionInfo reviewEndCardStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104282750(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a6e0);
}



/* Entry: 104282760; end: 10428276f; -[SCAdEndCardInteractionInfo servedScreenshotCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104282760(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a6e8);
}



/* Entry: 104282770; end: 10428277f; -[SCAdEndCardInteractionInfo screenshotSwipeCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104282770(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a6f0);
}



/* Entry: 104282780; end: 10428278f; -[SCAdEndCardInteractionInfo renderedScreenshotCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104282780(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a6f8);
}



/* Entry: 104282790; end: 1042827d7; -[SCAdEndCardInteractionInfo displayedReviewIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104282790(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306a700);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042827d8; end: 1042829af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042827d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306a6c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306a6c8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306a6d0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306a6d8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306a6e0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306a6e8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306a6f0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11306a6f8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11306a700) = param_9;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042829b0; end: 104282a57; -[SCAdEndCardInteractionInfo initWithEndCardDisplayedTimestampMs:tappedIndex:endCardType:screenshotEndCardStyle:reviewEndCardStyle:servedScreenshotCount:screenshotSwipeCount:renderedScreenshotCount:displayedReviewIds:] */

void FUN_1042829b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_11,PTR___sSSN_11034da80);
  _objc_retain(param_4);
  func_0x0001042828c4(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  return;
}



/* Entry: 104282a58; end: 104282a87;  */

void FUN_104282a58(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104282a88(param_1);
  return;
}



/* Entry: 104282a88; end: 104282b7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104282a88(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_11306a6c0) = *param_1;
  if (*(char *)(param_1 + 2) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306a6c8) = puVar2;
  uVar1 = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_11306a6d0) = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11306a6d8) = uVar1;
  uVar1 = param_1[6];
  *(undefined8 *)(unaff_x20 + _DAT_11306a6e0) = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_11306a6e8) = uVar1;
  uVar1 = param_1[8];
  *(undefined8 *)(unaff_x20 + _DAT_11306a6f0) = param_1[7];
  *(undefined8 *)(unaff_x20 + _DAT_11306a6f8) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_11306a700) = param_1[9];
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104282b80; end: 104282bb3; -[SCAdEndCardInteractionInfo hash] */

undefined8 FUN_104282b80(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104282bb4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104282bb4; end: 104282cfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104282bb4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a6c0));
  lVar3 = *(long *)(unaff_x20 + _DAT_11306a6c8);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a6d0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a6d8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a6e0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a6e8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a6f0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a6f8));
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306a700);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,PTR___sSSN_11034da80);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104282cfc; end: 104282ef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104282cfc(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint uStack_8c;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar10 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar3 = &lStack_88;
    _swift_dynamicCast(plVar3,auStack_80,PTR___sypN_11034f1a8 + 8,lVar10,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar12 = *(long *)(unaff_x20 + _DAT_11306a6c0);
      lVar14 = *(long *)(lStack_88 + _DAT_11306a6c0);
      lVar8 = *(long *)(unaff_x20 + _DAT_11306a6c8);
      lVar10 = *(long *)(lStack_88 + _DAT_11306a6c8);
      if (lVar8 == 0 || lVar10 == 0) {
        uStack_8c = (uint)(lVar8 == 0 && lVar10 == 0);
      }
      else {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar5 = lVar8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_8c = (uint)lVar5;
        _objc_release(lVar8);
        _objc_release(lVar10);
      }
      lVar5 = *(long *)(unaff_x20 + _DAT_11306a6d0);
      lVar10 = *(long *)(lStack_88 + _DAT_11306a6d0);
      lVar6 = *(long *)(unaff_x20 + _DAT_11306a6d8);
      lVar8 = *(long *)(lStack_88 + _DAT_11306a6d8);
      lVar17 = *(long *)(unaff_x20 + _DAT_11306a6e0);
      lVar18 = *(long *)(lStack_88 + _DAT_11306a6e0);
      lVar7 = *(long *)(unaff_x20 + _DAT_11306a6e8);
      lVar9 = *(long *)(lStack_88 + _DAT_11306a6e8);
      lVar11 = *(long *)(unaff_x20 + _DAT_11306a6f0);
      lVar13 = *(long *)(lStack_88 + _DAT_11306a6f0);
      lVar15 = *(long *)(unaff_x20 + _DAT_11306a6f8);
      lVar16 = *(long *)(lStack_88 + _DAT_11306a6f8);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11306a700);
      func_0x00010142cfc4(uVar4,*(undefined8 *)(lStack_88 + _DAT_11306a700));
      _objc_release(lStack_88);
      uVar1 = 0;
      if (lVar5 == lVar10) {
        uVar1 = lVar12 == lVar14 & uStack_8c;
      }
      uVar2 = 0;
      if (lVar6 == lVar8) {
        uVar2 = uVar1;
      }
      uVar1 = 0;
      if (lVar17 == lVar18) {
        uVar1 = uVar2;
      }
      uVar2 = 0;
      if (lVar7 == lVar9) {
        uVar2 = uVar1;
      }
      uVar1 = 0;
      if (lVar11 == lVar13) {
        uVar1 = uVar2;
      }
      uVar2 = 0;
      if (lVar15 == lVar16) {
        uVar2 = uVar1;
      }
      return uVar2 & (uint)uVar4;
    }
  }
  return 0;
}



/* Entry: 104282ef4; end: 104282f73; -[SCAdEndCardInteractionInfo isEqual:] */

uint FUN_104282ef4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104282cfc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104282f74; end: 104282f77; -[SCAdEndCardInteractionInfo copyWithZone:] */

void FUN_104282f74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104282f78; end: 10428321b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104282f78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f1f0af0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x495f444550504154;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495f444550504154,0xec0000005845444e);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x445241435f444e45;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x445241435f444e45,0xed0000455059545f);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f0b10);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f0b30);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f0b50);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f0b70);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f0b90);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306a700);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,PTR___sSSN_11034da80);
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f0bb0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10428321c; end: 10428326b; -[SCAdEndCardInteractionInfo encodeWithCoder:] */

void FUN_10428321c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104282f78(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10428326c; end: 10428329b;  */

void FUN_10428326c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10428329c(param_1);
  return;
}



/* Entry: 10428329c; end: 10428367f;  */

undefined8 FUN_10428329c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar2 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f1f0af0);
  func_0x00010bf66f40();
  _objc_release(uVar2);
  uVar2 = 0x495f444550504154;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495f444550504154,0xec0000005845444e);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_a8;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar2,6);
    uVar2 = uStack_a8;
    if ((int)puVar4 == 0) {
      uVar2 = 0;
    }
  }
  uVar5 = 0x445241435f444e45;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x445241435f444e45,0xed0000455059545f);
  func_0x00010bf66f40();
  _objc_release(uVar5);
  uVar5 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f0b10);
  func_0x00010bf66f40();
  _objc_release(uVar5);
  uVar5 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f0b30);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar5);
  uVar5 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f0b50);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar5);
  uVar5 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f0b70);
  func_0x00010bf66f40();
  _objc_release(uVar5);
  uVar5 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f0b90);
  func_0x00010bf66f40();
  _objc_release(uVar5);
  uVar5 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f0bb0);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar3 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
    _objc_release(uVar2);
    func_0x00010006e7f4(&uStack_80);
  }
  else {
    uVar5 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    puVar4 = &uStack_a8;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar5,6);
    if (((ulong)puVar4 & 1) != 0) {
      uVar5 = uStack_a8;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uStack_a8,PTR___sSSN_11034da80);
      _swift_bridgeObjectRelease(uStack_a8);
      func_0x00010c00fe00();
      _objc_release(uVar5);
      _objc_release(param_1);
      _objc_release(uVar2);
      return unaff_x20;
    }
    _objc_release(param_1);
    _objc_release(uVar2);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 104283680; end: 1042836a7; -[SCAdEndCardInteractionInfo initWithCoder:] */

void FUN_104283680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10428329c();
  return;
}



/* Entry: 1042836a8; end: 1042836f3; -[SCAdEndCardInteractionInfo description] */

void FUN_1042836a8(undefined8 param_1)

{
  undefined1 auStack_70 [80];
  
  _objc_retain();
  FUN_1042837a8(auStack_70);
  _objc_release(param_1);
  FUN_10428386c(auStack_70);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042836f4; end: 10428376f; -[SCAdEndCardInteractionInfo init] */

void FUN_1042836f4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdEndCardInteractionInfoWrapper.swift",0x34,2,0x95,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10428373c);
  (*pcVar1)();
}



/* Entry: 104283770; end: 1042837a7; -[SCAdEndCardInteractionInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104283770(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a6c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306a700));
  return;
}



/* Entry: 1042837a8; end: 10428386b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042837a8(undefined8 *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar10 = *(undefined8 *)(param_2 + _DAT_11306a6c0);
  lVar2 = *(long *)(param_2 + _DAT_11306a6c8);
  bVar1 = lVar2 == 0;
  if (!bVar1) {
    func_0x00010c067fc0();
  }
  uVar4 = *(undefined8 *)(param_2 + _DAT_11306a6d0);
  uVar5 = *(undefined8 *)(param_2 + _DAT_11306a6d8);
  uVar6 = *(undefined8 *)(param_2 + _DAT_11306a6e0);
  uVar7 = *(undefined8 *)(param_2 + _DAT_11306a6e8);
  uVar8 = *(undefined8 *)(param_2 + _DAT_11306a6f0);
  uVar9 = *(undefined8 *)(param_2 + _DAT_11306a6f8);
  uVar3 = *(undefined8 *)(param_2 + _DAT_11306a700);
  *param_1 = uVar10;
  param_1[1] = lVar2;
  *(bool *)(param_1 + 2) = bVar1;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  param_1[8] = uVar9;
  param_1[9] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar3);
  return;
}



/* Entry: 10428386c; end: 10428389f;  */

undefined8 FUN_10428386c(undefined8 param_1)

{
  FUN_104210ffc();
  return param_1;
}



/* Entry: 1042838a0; end: 1042838bf;  */

void FUN_1042838a0(void)

{
  _objc_opt_self(&PTR_PTR_112992a00);
  return;
}



/* Entry: 1042838c0; end: 1042838cf; -[SCAdExitEventSwipeInfo exitCoordStartSwipeTapPositionXRelative] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042838c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a730));
  return;
}



/* Entry: 1042838d0; end: 1042838df; -[SCAdExitEventSwipeInfo exitCoordStartSwipeTapPositionX] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042838d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a738));
  return;
}



/* Entry: 1042838e0; end: 1042838ef; -[SCAdExitEventSwipeInfo exitCoordStartSwipeTapPositionYRelative] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042838e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a740));
  return;
}



/* Entry: 1042838f0; end: 1042838ff; -[SCAdExitEventSwipeInfo exitCoordStartSwipeTapPositionY] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042838f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a748));
  return;
}



/* Entry: 104283900; end: 10428390f; -[SCAdExitEventSwipeInfo exitCoordEndSwipeTapPositionXRelative] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104283900(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a750));
  return;
}



/* Entry: 104283910; end: 10428391f; -[SCAdExitEventSwipeInfo exitCoordEndSwipeTapPositionX] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104283910(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a758));
  return;
}



/* Entry: 104283920; end: 10428392f; -[SCAdExitEventSwipeInfo exitCoordEndSwipeTapPositionYRelative] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104283920(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a760));
  return;
}



/* Entry: 104283930; end: 10428393f; -[SCAdExitEventSwipeInfo exitCoordEndSwipeTapPositionY] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104283930(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a768));
  return;
}



/* Entry: 104283940; end: 104283a1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104283940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306a730) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306a738) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306a740) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306a748) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306a750) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306a758) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306a760) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11306a768) = param_8;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104283a1c; end: 104283b37; -[SCAdExitEventSwipeInfo initWithExitCoordStartSwipeTapPositionXRelative:exitCoordStartSwipeTapPositionX:exitCoordStartSwipeTapPositionYRelative:exitCoordStartSwipeTapPositionY:exitCoordEndSwipeTapPositionXRelative:exitCoordEndSwipeTapPositionX:exitCoordEndSwipeTapPositionYRelative:exitCoordEndSwipeTapPositionY:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104283a1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11306a730) = param_3;
  *(undefined8 *)(param_1 + _DAT_11306a738) = param_4;
  *(undefined8 *)(param_1 + _DAT_11306a740) = param_5;
  *(undefined8 *)(param_1 + _DAT_11306a748) = param_6;
  *(undefined8 *)(param_1 + _DAT_11306a750) = param_7;
  *(undefined8 *)(param_1 + _DAT_11306a758) = param_8;
  *(undefined8 *)(param_1 + _DAT_11306a760) = param_9;
  *(undefined8 *)(param_1 + _DAT_11306a768) = param_10;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_msgSendSuper2(&lStack_70,puVar1);
  return;
}



/* Entry: 104283b38; end: 104283b67;  */

void FUN_104283b38(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104283b68(param_1);
  return;
}



/* Entry: 104283b68; end: 104283d5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104283b68(undefined8 *param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  _swift_getObjectType();
  if (*(char *)(param_1 + 1) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = *param_1;
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306a730) = puVar1;
  if (*(char *)(param_1 + 3) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1[2];
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306a738) = puVar1;
  if (*(char *)(param_1 + 5) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1[4];
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306a740) = puVar1;
  if (*(char *)(param_1 + 7) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1[6];
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306a748) = puVar1;
  if (*(char *)(param_1 + 9) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1[8];
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306a750) = puVar1;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1[10];
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306a758) = puVar1;
  if (*(char *)(param_1 + 0xd) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1[0xc];
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306a760) = puVar1;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1[0xe];
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306a768) = puVar1;
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104283d60; end: 104283d93; -[SCAdExitEventSwipeInfo hash] */

undefined8 FUN_104283d60(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104283d94();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104283d94; end: 10428400f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104283d94(void)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = *(long *)(unaff_x20 + _DAT_11306a730);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306a738);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306a740);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306a748);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306a750);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306a758);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306a760);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306a768);
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



/* Entry: 104284010; end: 10428447f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104284010(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uStack_8c;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar1 = &lStack_88;
    _swift_dynamicCast(plVar1,auStack_80,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_11306a730);
      lVar8 = *(long *)(lStack_88 + _DAT_11306a730);
      if (lVar6 == 0 || lVar8 == 0) {
        uStack_8c = (uint)(lVar6 == 0 && lVar8 == 0);
      }
      else {
        func_0x0001002ed07c(0);
        _objc_retain(lVar8);
        _objc_retain();
        lVar2 = lVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_8c = (uint)lVar2;
        _objc_release(lVar6);
        _objc_release(lVar8);
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_11306a738);
      lVar8 = *(long *)(lStack_88 + _DAT_11306a738);
      uVar9 = (uint)(lVar6 == 0 && lVar8 == 0);
      if (lVar6 != 0 && lVar8 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar8);
        _objc_retain();
        lVar2 = lVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar9 = (uint)lVar2;
        _objc_release(lVar6);
        _objc_release(lVar8);
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_11306a740);
      lVar8 = *(long *)(lStack_88 + _DAT_11306a740);
      uVar7 = (uint)(lVar6 == 0 && lVar8 == 0);
      if ((lVar6 != 0) && (lVar8 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar8);
        _objc_retain();
        lVar2 = lVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar7 = (uint)lVar2;
        _objc_release(lVar6);
        _objc_release(lVar8);
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_11306a748);
      lVar8 = *(long *)(lStack_88 + _DAT_11306a748);
      uVar10 = (uint)(lVar6 == 0 && lVar8 == 0);
      if ((lVar6 != 0) && (lVar8 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar8);
        _objc_retain();
        lVar2 = lVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar10 = (uint)lVar2;
        _objc_release(lVar6);
        _objc_release(lVar8);
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_11306a750);
      lVar8 = *(long *)(lStack_88 + _DAT_11306a750);
      uVar11 = (uint)(lVar6 == 0 && lVar8 == 0);
      if ((lVar6 != 0) && (lVar8 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar8);
        _objc_retain();
        lVar2 = lVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar11 = (uint)lVar2;
        _objc_release(lVar6);
        _objc_release(lVar8);
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_11306a758);
      lVar8 = *(long *)(lStack_88 + _DAT_11306a758);
      uVar12 = (uint)(lVar6 == 0 && lVar8 == 0);
      if ((lVar6 != 0) && (lVar8 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar8);
        _objc_retain();
        lVar2 = lVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar12 = (uint)lVar2;
        _objc_release(lVar6);
        _objc_release(lVar8);
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_11306a760);
      lVar8 = *(long *)(lStack_88 + _DAT_11306a760);
      uVar4 = (uint)(lVar6 == 0 && lVar8 == 0);
      if ((lVar6 != 0) && (lVar8 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar8);
        _objc_retain(lVar6);
        lVar2 = lVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar4 = (uint)lVar2;
        _objc_release(lVar6);
        _objc_release(lVar8);
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_11306a768);
      lVar8 = *(long *)(lStack_88 + _DAT_11306a768);
      if (lVar6 == 0) {
        lVar2 = lVar8;
        _objc_retain(lVar8);
        _objc_release(lStack_88);
        if (lVar8 != 0) {
          uVar5 = 0;
          goto LAB_104284424;
        }
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
        lVar2 = lStack_88;
        if (lVar8 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar8);
          _objc_retain(lVar6);
          lVar3 = lVar6;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar5 = (uint)lVar3;
          _objc_release(lVar6);
          _objc_release(lVar8);
        }
LAB_104284424:
        _objc_release(lVar2);
      }
      if ((uStack_8c & uVar9 & uVar7 & uVar10 & uVar11 & uVar12 & 1) != 0) {
        uVar4 = uVar4 & uVar5;
        goto LAB_104284454;
      }
    }
  }
  uVar4 = 0;
LAB_104284454:
  return uVar4 & 1;
}



/* Entry: 104284480; end: 1042844ff; -[SCAdExitEventSwipeInfo isEqual:] */

uint FUN_104284480(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104284010(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104284500; end: 104284503; -[SCAdExitEventSwipeInfo copyWithZone:] */

void FUN_104284500(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104284504; end: 10428473b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104284504(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd00000000000002d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002d,0x800000010f1f0c10);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f1f0c40);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000002d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002d,0x800000010f1f0c70);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f1f0ca0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000002b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002b,0x800000010f1f0cd0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f1f0d00);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000002b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002b,0x800000010f1f0d30);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f1f0d60);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10428473c; end: 10428478b; -[SCAdExitEventSwipeInfo encodeWithCoder:] */

void FUN_10428473c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104284504(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10428478c; end: 1042847cb;  */

undefined8 FUN_10428478c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_104284b40(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042847cc; end: 104284807; -[SCAdExitEventSwipeInfo initWithCoder:] */

undefined8 FUN_1042847cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_104284b40();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104284808; end: 10428484b; -[SCAdExitEventSwipeInfo description] */

void FUN_104284808(undefined8 param_1)

{
  undefined1 auStack_a0 [128];
  
  _objc_retain();
  FUN_104284960(auStack_a0);
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10428484c; end: 1042848c7; -[SCAdExitEventSwipeInfo init] */

void FUN_10428484c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdExitEventSwipeInfoWrapper.swift",0x30,2,0x81,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104284894);
  (*pcVar1)();
}



/* Entry: 1042848c8; end: 10428495f; -[SCAdExitEventSwipeInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042848c8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a730));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a738));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a740));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a748));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a750));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a758));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a760));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306a768));
  return;
}



/* Entry: 104284960; end: 104284b3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104284960(undefined8 *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar9 = 0;
  bVar1 = *(long *)(param_3 + _DAT_11306a730) == 0;
  if (bVar1) {
    uVar10 = 0;
  }
  else {
    func_0x00010bf885a0();
    uVar10 = param_2;
  }
  bVar2 = *(long *)(param_3 + _DAT_11306a738) == 0;
  if (!bVar2) {
    func_0x00010bf885a0();
    uVar9 = param_2;
  }
  uVar11 = 0;
  bVar3 = *(long *)(param_3 + _DAT_11306a740) == 0;
  if (bVar3) {
    uVar12 = 0;
  }
  else {
    func_0x00010bf885a0();
    uVar12 = param_2;
  }
  bVar4 = *(long *)(param_3 + _DAT_11306a748) == 0;
  if (!bVar4) {
    func_0x00010bf885a0();
    uVar11 = param_2;
  }
  uVar13 = 0;
  bVar5 = *(long *)(param_3 + _DAT_11306a750) == 0;
  if (bVar5) {
    uVar14 = 0;
  }
  else {
    func_0x00010bf885a0();
    uVar14 = param_2;
  }
  bVar6 = *(long *)(param_3 + _DAT_11306a758) == 0;
  if (!bVar6) {
    func_0x00010bf885a0();
    uVar13 = param_2;
  }
  uVar15 = 0;
  bVar7 = *(long *)(param_3 + _DAT_11306a760) == 0;
  if (bVar7) {
    uVar16 = 0;
  }
  else {
    func_0x00010bf885a0();
    uVar16 = param_2;
  }
  bVar8 = *(long *)(param_3 + _DAT_11306a768) == 0;
  if (!bVar8) {
    func_0x00010bf885a0();
    uVar15 = param_2;
  }
  *param_1 = uVar10;
  *(bool *)(param_1 + 1) = bVar1;
  param_1[2] = uVar9;
  *(bool *)(param_1 + 3) = bVar2;
  param_1[4] = uVar12;
  *(bool *)(param_1 + 5) = bVar3;
  param_1[6] = uVar11;
  *(bool *)(param_1 + 7) = bVar4;
  param_1[8] = uVar14;
  *(bool *)(param_1 + 9) = bVar5;
  param_1[10] = uVar13;
  *(bool *)(param_1 + 0xb) = bVar6;
  param_1[0xc] = uVar16;
  *(bool *)(param_1 + 0xd) = bVar7;
  param_1[0xe] = uVar15;
  *(bool *)(param_1 + 0xf) = bVar8;
  return;
}



/* Entry: 104284b40; end: 10428516b;  */

undefined8 FUN_104284b40(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 unaff_x20;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar3 = 0xd00000000000002d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002d,0x800000010f1f0c10);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar2 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_a8;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar3,6);
    uVar3 = uStack_a8;
    if ((int)puVar4 == 0) {
      uVar3 = 0;
    }
  }
  uVar5 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f1f0c40);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar2 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_a8;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar5,6);
    uVar5 = uStack_a8;
    if ((int)puVar4 == 0) {
      uVar5 = 0;
    }
  }
  uVar6 = 0xd00000000000002d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002d,0x800000010f1f0c70);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar2 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_a8;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar6,6);
    uVar6 = uStack_a8;
    if ((int)puVar4 == 0) {
      uVar6 = 0;
    }
  }
  uVar7 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f1f0ca0);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  if (lVar2 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_a8;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar7,6);
    uVar7 = uStack_a8;
    if ((int)puVar4 == 0) {
      uVar7 = 0;
    }
  }
  uVar8 = 0xd00000000000002b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002b,0x800000010f1f0cd0);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  if (lVar2 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_a8;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar8,6);
    uVar8 = uStack_a8;
    if ((int)puVar4 == 0) {
      uVar8 = 0;
    }
  }
  uVar9 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f1f0d00);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  if (lVar2 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_a8;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar9,6);
    uVar9 = uStack_a8;
    if ((int)puVar4 == 0) {
      uVar9 = 0;
    }
  }
  uVar10 = 0xd00000000000002b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002b,0x800000010f1f0d30);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  if (lVar2 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_a8;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar10,6);
    uVar10 = uStack_a8;
    if ((int)puVar4 == 0) {
      uVar10 = 0;
    }
  }
  uVar11 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f1f0d60);
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  if (param_1 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,param_1);
    _swift_unknownObjectRelease(param_1);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_a8;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar11,6);
    uVar11 = uStack_a8;
    if ((int)puVar4 == 0) {
      uVar11 = 0;
    }
  }
  func_0x00010c011040(unaff_x20);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(uVar11);
  return unaff_x20;
}



/* Entry: 10428516c; end: 10428518b;  */

void FUN_10428516c(void)

{
  _objc_opt_self(&PTR_PTR_112992b10);
  return;
}



/* Entry: 10428518c; end: 10428519b; -[SCAdHideTrackInfo adHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10428518c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a798);
}



/* Entry: 10428519c; end: 1042851af; -[SCAdHideTrackInfo adHidingReason] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10428519c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a7a0);
}



/* Entry: 1042851b0; end: 104285277; -[SCAdHideTrackInfo initWithAdHidden:adHidingReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042851b0(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_11306a798) = param_3;
  *(undefined8 *)(param_1 + _DAT_11306a7a0) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104285278; end: 1042852d3; -[SCAdHideTrackInfo hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104285278(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(param_1 + _DAT_11306a798));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11306a7a0));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042852d4; end: 10428538b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1042852d4(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
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
      bVar1 = *(byte *)(unaff_x20 + _DAT_11306a798);
      bVar2 = *(byte *)(lStack_58 + _DAT_11306a798);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11306a7a0);
      uVar6 = *(undefined8 *)(lStack_58 + _DAT_11306a7a0);
      _objc_release();
      return (int)uVar5 == (int)uVar6 & (bVar1 ^ bVar2 ^ 0xff);
    }
  }
  return 0;
}



/* Entry: 10428538c; end: 10428540b; -[SCAdHideTrackInfo isEqual:] */

uint FUN_10428538c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042852d4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10428540c; end: 10428540f; -[SCAdHideTrackInfo copyWithZone:] */

void FUN_10428540c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104285410; end: 1042854df; -[SCAdHideTrackInfo encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104285410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0x45444449485f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45444449485f4441,0xe90000000000004e);
  func_0x00010bf92da0(param_3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f0dd0);
  func_0x00010bf92fc0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042854e0; end: 10428550f;  */

void FUN_1042854e0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104285510(param_1);
  return;
}



/* Entry: 104285510; end: 10428560b;  */

undefined8 FUN_104285510(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 unaff_x20;
  
  uVar1 = 0x45444449485f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45444449485f4441,0xe90000000000004e);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar1);
  uVar3 = 0xf1f0dd0;
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010);
  uVar1 = param_1;
  func_0x00010bf66f40(param_1);
  _objc_release(uVar2);
  FUN_1042856cc(uVar1);
  if ((uVar3 & 0xff) == 1) {
    _objc_release(param_1);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  else {
    func_0x00010bff16a0();
    _objc_release(param_1);
  }
  return unaff_x20;
}



/* Entry: 10428560c; end: 104285633; -[SCAdHideTrackInfo initWithCoder:] */

void FUN_10428560c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104285510();
  return;
}



/* Entry: 104285634; end: 10428564f; -[SCAdHideTrackInfo description] */

void FUN_104285634(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104285650; end: 1042856cb; -[SCAdHideTrackInfo init] */

void FUN_104285650(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataServices/AdHideTrackInfoWrapper.swift",
             0x2b,2,0x4c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104285698);
  (*pcVar1)();
}



/* Entry: 1042856cc; end: 1042856df; -[SCAdHideTrackInfo .cxx_destruct] */

void FUN_1042856cc(void)

{
  return;
}



/* Entry: 1042856e0; end: 1042856ff;  */

void FUN_1042856e0(void)

{
  _objc_opt_self(&PTR_PTR_112992c18);
  return;
}



/* Entry: 104285700; end: 104285703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104285700(undefined1 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306a798) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306a7a0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104285704; end: 10428574f; -[SCAdLeadGenerationTrackConsent label] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104285704(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306a7d0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306a7d0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104285750; end: 104285763; -[SCAdLeadGenerationTrackConsent checked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104285750(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a7d8);
}



/* Entry: 104285764; end: 104285843; -[SCAdLeadGenerationTrackConsent initWithLabel:checked:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104285764(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11306a7d0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined1 *)(param_1 + _DAT_11306a7d8) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104285844; end: 104285877; -[SCAdLeadGenerationTrackConsent hash] */

undefined8 FUN_104285844(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104285878();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104285878; end: 1042859df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104285878(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306a7d0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11306a7d0))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306a7d8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042859e0; end: 104285a5f; -[SCAdLeadGenerationTrackConsent isEqual:] */

uint FUN_1042859e0(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001042858fc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104285a60; end: 104285a63; -[SCAdLeadGenerationTrackConsent copyWithZone:] */

void FUN_104285a60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}


