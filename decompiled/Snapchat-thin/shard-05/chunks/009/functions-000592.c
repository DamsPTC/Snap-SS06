/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10430c194; end: 10430c21f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430c194(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306cf80) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11306cf88) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11306cf90) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_11306cf98) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10430c220; end: 10430c2ab; -[SCAdPreferences initWithAudienceMatchOptOut:externalActivityMatchOptOut:thirdPartyAdNetworkOptOut:fullPersonalizationOptOut:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430c220(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_11306cf80) = param_3;
  *(undefined1 *)(param_1 + _DAT_11306cf88) = param_4;
  *(undefined1 *)(param_1 + _DAT_11306cf90) = param_5;
  *(undefined1 *)(param_1 + _DAT_11306cf98) = param_6;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10430c2ac; end: 10430c3ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430c2ac(undefined4 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(byte *)(unaff_x20 + _DAT_11306cf80) = (byte)param_1 & 1;
  *(byte *)(unaff_x20 + _DAT_11306cf88) = (byte)((uint)param_1 >> 8) & 1;
  *(byte *)(unaff_x20 + _DAT_11306cf90) = (byte)((uint)param_1 >> 0x10) & 1;
  *(byte *)(unaff_x20 + _DAT_11306cf98) = (byte)((uint)param_1 >> 0x18) & 1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10430c3ac; end: 10430c44f; -[SCAdPreferences hash] */

void FUN_10430c3ac(void)

{
  func_0x00010430c3cc();
  return;
}



/* Entry: 10430c450; end: 10430c54b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10430c450(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  long *plVar9;
  byte bVar10;
  long unaff_x20;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar9 = &lStack_78;
    _swift_dynamicCast(plVar9,auStack_70,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar9 & 1) != 0) {
      bVar10 = *(byte *)(unaff_x20 + _DAT_11306cf80);
      bVar1 = *(byte *)(lStack_78 + _DAT_11306cf80);
      bVar2 = *(byte *)(unaff_x20 + _DAT_11306cf88);
      bVar3 = *(byte *)(lStack_78 + _DAT_11306cf88);
      bVar4 = *(byte *)(unaff_x20 + _DAT_11306cf90);
      bVar5 = *(byte *)(lStack_78 + _DAT_11306cf90);
      bVar6 = *(byte *)(unaff_x20 + _DAT_11306cf98);
      bVar7 = *(byte *)(lStack_78 + _DAT_11306cf98);
      _objc_release();
      bVar10 = (bVar10 ^ bVar1 | bVar2 ^ bVar3 | bVar4 ^ bVar5 | bVar6 ^ bVar7) ^ 1;
      goto LAB_10430c52c;
    }
  }
  bVar10 = 0;
LAB_10430c52c:
  return bVar10 & 1;
}



/* Entry: 10430c54c; end: 10430c5cb; -[SCAdPreferences isEqual:] */

uint FUN_10430c54c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10430c450(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10430c5cc; end: 10430c5cf; -[SCAdPreferences copyWithZone:] */

void FUN_10430c5cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10430c5d0; end: 10430c5eb; -[SCAdPreferences description] */

void FUN_10430c5d0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430c5ec; end: 10430c687; -[SCAdPreferences init] */

void FUN_10430c5ec(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdRequestCommon/AdPreferencesWrapper.swift",
             0x2a,2,0x42,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10430c634);
  (*pcVar1)();
}



/* Entry: 10430c688; end: 10430c693; -[SCAdSourceConfig protoInitEndpoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430c688(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306cfc8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306cfc8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10430c694; end: 10430c69f; -[SCAdSourceConfig protoServeEndpoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430c694(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306cfd0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306cfd0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10430c6a0; end: 10430c6ab; -[SCAdSourceConfig protoInitAPIGatewayEnabledEndpoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430c6a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306cfd8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306cfd8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10430c6ac; end: 10430c703;  */

void FUN_10430c6ac(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10430c704; end: 10430c713; -[SCAdSourceConfig shouldDisableServeRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10430c704(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306cfe0);
}



/* Entry: 10430c714; end: 10430c7bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430c714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306cfc8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306cfd0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306cfd8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_11306cfe0) = param_7;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10430c7c0; end: 10430c8b3; -[SCAdSourceConfig initWithProtoInitEndpoint:protoServeEndpoint:protoInitAPIGatewayEnabledEndpoint:shouldDisableServeRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430c7c0(long param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined1 param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar3 = param_2;
  }
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11306cfc8);
  *plVar1 = param_3;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_1 + _DAT_11306cfd0);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_11306cfd8);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  *(undefined1 *)(param_1 + _DAT_11306cfe0) = param_6;
  lStack_60 = param_1;
  lStack_58 = lVar4;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10430c8b4; end: 10430c9a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430c8b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_90 [8];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_allocWithZone();
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306cfc8);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306cfd0);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306cfd8);
  puVar1[1] = uStack_68;
  *puVar1 = uStack_70;
  FUN_10430cd04(&uStack_50,auStack_80,0x112d35ff8,&UNK_10d900cd0);
  FUN_10430cd04(&uStack_60,auStack_80,0x112d35ff8,&UNK_10d900cd0);
  FUN_10430cd04(&uStack_70,auStack_80,0x112d35ff8,&UNK_10d900cd0);
  FUN_10430c9a8(param_1);
  *(undefined1 *)(unaff_x20 + _DAT_11306cfe0) = *(undefined1 *)(param_1 + 6);
  _objc_msgSendSuper2(auStack_90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10430c9a8; end: 10430c9db;  */

undefined8 FUN_10430c9a8(undefined8 param_1)

{
  (*(code *)(undefined *)0x104309ea8)();
  return param_1;
}



/* Entry: 10430c9dc; end: 10430ca0f; -[SCAdSourceConfig hash] */

undefined8 FUN_10430c9dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10430ca10();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10430ca10; end: 10430cb2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430ca10(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_11306cfc8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306cfc8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11306cfd0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306cfd0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11306cfd8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306cfd8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306cfe0));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10430cb2c; end: 10430cd03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10430cb2c(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long unaff_x20;
  uint uVar8;
  uint uVar9;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  FUN_10430cd04(param_1,auStack_60,0x112d387f8,&UNK_10d902650);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar3 = &lStack_68;
    _swift_dynamicCast(plVar3,auStack_60,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar5 = ((long *)(unaff_x20 + _DAT_11306cfc8))[1];
      lVar6 = ((long *)(lStack_68 + _DAT_11306cfc8))[1];
      uVar8 = (uint)(lVar5 == 0 && lVar6 == 0);
      if (lVar5 != 0 && lVar6 != 0) {
        lVar4 = *(long *)(unaff_x20 + _DAT_11306cfc8);
        if (lVar4 == *(long *)(lStack_68 + _DAT_11306cfc8) && lVar5 == lVar6) {
          uVar8 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar8 = (uint)lVar4;
        }
      }
      lVar5 = ((long *)(unaff_x20 + _DAT_11306cfd0))[1];
      lVar6 = ((long *)(lStack_68 + _DAT_11306cfd0))[1];
      uVar9 = (uint)(lVar5 == 0 && lVar6 == 0);
      if (lVar5 != 0 && lVar6 != 0) {
        lVar4 = *(long *)(unaff_x20 + _DAT_11306cfd0);
        if (lVar4 == *(long *)(lStack_68 + _DAT_11306cfd0) && lVar5 == lVar6) {
          uVar9 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar9 = (uint)lVar4;
        }
      }
      lVar5 = ((long *)(unaff_x20 + _DAT_11306cfd8))[1];
      lVar6 = ((long *)(lStack_68 + _DAT_11306cfd8))[1];
      uVar7 = (uint)(lVar5 == 0 && lVar6 == 0);
      if ((lVar5 != 0) && (lVar6 != 0)) {
        lVar4 = *(long *)(unaff_x20 + _DAT_11306cfd8);
        if ((lVar4 == *(long *)(lStack_68 + _DAT_11306cfd8)) && (lVar5 == lVar6)) {
          uVar7 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar7 = (uint)lVar4;
        }
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_11306cfe0);
      bVar2 = *(byte *)(lStack_68 + _DAT_11306cfe0);
      _objc_release(lStack_68);
      if ((uVar8 & uVar9 & 1) != 0) {
        uVar7 = uVar7 & ((bVar1 ^ bVar2) ^ 1);
        goto LAB_10430cce8;
      }
    }
  }
  uVar7 = 0;
LAB_10430cce8:
  return uVar7 & 1;
}



/* Entry: 10430cd04; end: 10430cd4b;  */

undefined8 FUN_10430cd04(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10430cd4c; end: 10430cdcb; -[SCAdSourceConfig isEqual:] */

uint FUN_10430cd4c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10430cb2c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10430cdcc; end: 10430cdcf; -[SCAdSourceConfig copyWithZone:] */

void FUN_10430cdcc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10430cdd0; end: 10430cf6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430cdd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_11306cfc8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306cfc8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f4c60);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11306cfd0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306cfd0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f4c80);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11306cfd8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306cfd8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000026;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f1f4ca0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1f4cd0);
  func_0x00010bf92da0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10430cf70; end: 10430cfbf; -[SCAdSourceConfig encodeWithCoder:] */

void FUN_10430cf70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10430cdd0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10430cfc0; end: 10430cfef;  */

void FUN_10430cfc0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10430cff0(param_1);
  return;
}



/* Entry: 10430cff0; end: 10430d337;  */

undefined8 FUN_10430cff0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  int iVar3;
  int iVar4;
  
  iVar2 = (int)&uStack_b0;
  iVar3 = (int)&uStack_b0;
  iVar4 = (int)&uStack_b0;
  uVar5 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f4c60);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar6 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar6 = 0;
    uVar5 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar6 = lStack_a8;
    uVar5 = uStack_b0;
    if (iVar2 == 0) {
      uVar5 = 0;
      lVar6 = 0;
    }
  }
  uVar10 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f4c80);
  lVar7 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  if (lVar7 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar7);
    _swift_unknownObjectRelease(lVar7);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar7 = 0;
    uVar10 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar7 = lStack_a8;
    uVar10 = uStack_b0;
    if (iVar3 == 0) {
      uVar10 = 0;
      lVar7 = 0;
    }
  }
  uVar11 = 0xd000000000000026;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f1f4ca0);
  lVar8 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  if (lVar8 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar8);
    _swift_unknownObjectRelease(lVar8);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar8 = 0;
    uVar11 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar8 = lStack_a8;
    uVar11 = uStack_b0;
    if (iVar4 == 0) {
      uVar11 = 0;
      lVar8 = 0;
    }
  }
  uVar9 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1f4cd0);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar9);
  if (lVar6 == 0) {
    uVar5 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,lVar6);
    _swift_bridgeObjectRelease(lVar6);
  }
  if (lVar7 == 0) {
    uVar10 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar10,lVar7);
    _swift_bridgeObjectRelease(lVar7);
  }
  if (lVar8 == 0) {
    uVar11 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar11,lVar8);
    _swift_bridgeObjectRelease(lVar8);
  }
  func_0x00010c03b8e0();
  _objc_release(uVar5);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 10430d338; end: 10430d35f; -[SCAdSourceConfig initWithCoder:] */

void FUN_10430d338(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10430cff0();
  return;
}



/* Entry: 10430d360; end: 10430d37b; -[SCAdSourceConfig description] */

void FUN_10430d360(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430d37c; end: 10430d3f7; -[SCAdSourceConfig init] */

void FUN_10430d37c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdRequestCommon/AdSourceConfigWrapper.swift",
             0x2b,2,0x59,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10430d3c4);
  (*pcVar1)();
}



/* Entry: 10430d3f8; end: 10430d44b; -[SCAdSourceConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430d3f8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306cfc8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306cfd0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306cfd8 + 8))
  ;
  return;
}



/* Entry: 10430d44c; end: 10430d46b;  */

void FUN_10430d44c(void)

{
  _objc_opt_self(&PTR_PTR_112998868);
  return;
}



/* Entry: 10430d46c; end: 10430d4b7;  */

void FUN_10430d46c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
  (**(code **)(lVar2 + 0x10))(param_1,uVar1,lVar2);
  return;
}



/* Entry: 10430d4b8; end: 10430d51b;  */

void FUN_10430d4b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
  (**(code **)(lVar2 + 0x18))(param_1,param_2,uVar1,lVar2);
  return;
}



/* Entry: 10430d51c; end: 10430d53b;  */

void FUN_10430d51c(void)

{
  FUN_10430d46c();
  return;
}



/* Entry: 10430d53c; end: 10430d55b;  */

void FUN_10430d53c(void)

{
  FUN_10430d4b8();
  return;
}



/* Entry: 10430d55c; end: 10430d57b;  */

void FUN_10430d55c(void)

{
  FUN_10430d7d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10430d57c; end: 10430d5bf;  */

void FUN_10430d57c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
  (**(code **)(lVar2 + 0x10))(uVar1,lVar2);
  return;
}



/* Entry: 10430d5c0; end: 10430d63f;  */

void FUN_10430d5c0(void)

{
  FUN_10430d57c();
  return;
}



/* Entry: 10430d640; end: 10430d6a3;  */

void FUN_10430d640(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
  (**(code **)(*(long *)(lVar2 + 0x10) + 0x18))(param_1,param_2,uVar1);
  return;
}



/* Entry: 10430d6a4; end: 10430d733;  */

void FUN_10430d6a4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
  (**(code **)(*(long *)(lVar2 + 0x10) + 0x10))(param_1,uVar1);
  return;
}



/* Entry: 10430d734; end: 10430d757;  */

void FUN_10430d734(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10430d758; end: 10430d797;  */

void FUN_10430d758(void)

{
  func_0x00010430d7e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10430d798; end: 10430d7b7;  */

void FUN_10430d798(void)

{
  FUN_10430d640();
  return;
}



/* Entry: 10430d7b8; end: 10430d7d7;  */

void FUN_10430d7b8(void)

{
  func_0x00010430d6f0();
  return;
}



/* Entry: 10430d7d8; end: 10430d7ef;  */

void FUN_10430d7d8(void)

{
  return;
}



/* Entry: 10430d7f0; end: 10430d833;  */

void FUN_10430d7f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10dce8ac0;
  _swift_getWitnessTable();
  *(undefined **)(param_1 + 8) = puVar1;
  puVar1 = &DAT_10dce8aa4;
  _swift_getWitnessTable(&DAT_10dce8aa4,param_2);
  *(undefined **)(param_1 + 0x10) = puVar1;
  return;
}



/* Entry: 10430d834; end: 10430d84b;  */

void FUN_10430d834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f982c);
  return;
}



/* Entry: 10430d84c; end: 10430d88b;  */

void FUN_10430d84c(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = &UNK_10dce8b28;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x58);
  return;
}



/* Entry: 10430d88c; end: 10430d8bf;  */

void FUN_10430d88c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f98cc);
  return;
}



/* Entry: 10430d8c0; end: 10430d8ef;  */

void FUN_10430d8c0(void)

{
  FUN_10430d960();
  return;
}



/* Entry: 10430d8f0; end: 10430d90f;  */

void FUN_10430d8f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  long lStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_2,param_1,&UNK_10e7f992c,&UNK_10e7f9934);
  FUN_10430d834(0,uVar1);
  lStack_50 = param_1;
  uStack_48 = param_2;
  func_0x0001000c5db4(auStack_68);
  (**(code **)(*(long *)(param_1 + -8) + 0x10))();
  (*(code *)0x10430d8b8)(auStack_68);
  return;
}



/* Entry: 10430d910; end: 10430d93f;  */

void FUN_10430d910(void)

{
  FUN_10430d960();
  return;
}



/* Entry: 10430d940; end: 10430d95f;  */

void FUN_10430d940(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  long lStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_2,param_1,&UNK_10e7f9964,&UNK_10e7f996c);
  (*(code *)0x10430d840)(0,uVar1);
  lStack_50 = param_1;
  uStack_48 = param_2;
  func_0x0001000c5db4(auStack_68);
  (**(code **)(*(long *)(param_1 + -8) + 0x10))();
  (*(code *)0x10430d8bc)(auStack_68);
  return;
}



/* Entry: 10430d960; end: 10430d9ef;  */

void FUN_10430d960(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,code *param_6)

{
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  long lStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_2,param_1,param_3,param_4);
  (*param_5)(0,uVar1);
  lStack_50 = param_1;
  uStack_48 = param_2;
  func_0x0001000c5db4(auStack_68);
  (**(code **)(*(long *)(param_1 + -8) + 0x10))();
  (*param_6)(auStack_68);
  return;
}



/* Entry: 10430d9f0; end: 10430da77;  */

void FUN_10430d9f0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 8),param_1,&UNK_10e7f9964,&UNK_10e7f996c);
  FUN_10430d88c(0,uVar1);
  lStack_40 = param_1;
  lStack_38 = param_2;
  func_0x0001000c5db4(auStack_58);
  (**(code **)(*(long *)(param_1 + -8) + 0x10))();
  func_0x00010430d600(auStack_58);
  return;
}



/* Entry: 10430da78; end: 10430dabf; -[SCLogoutScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430da78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306d220;
  _swift_beginAccess(param_1 + _DAT_11306d220,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430dac0; end: 10430db17; -[SCLogoutScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430dac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306d220;
  _swift_beginAccess(param_1 + _DAT_11306d220,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10430db18; end: 10430db27; -[SCLogoutScope logout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430db18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306d228));
  return;
}



/* Entry: 10430db28; end: 10430db47; -[SCLogoutScope blurContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430db28(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306d230));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430db48; end: 10430db4b;  */

void FUN_10430db48(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10430db4c; end: 10430dbb7; -[SCLogoutScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430db4c(long param_1)

{
  func_0x00010430db94(param_1 + _DAT_11306d220);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306d228));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11306d230));
  return;
}



/* Entry: 10430dbb8; end: 10430dc1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430dbb8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100231fa0();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306d240) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10430dc20; end: 10430dc6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430dc20(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306d240) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10430dc6c; end: 10430dd73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10430dc6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x000100231064();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11306d220;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11306d220,0);
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_1);
  *(undefined8 *)(lVar4 + _DAT_11306d228) = param_2;
  *(undefined8 *)(lVar4 + _DAT_11306d230) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _objc_retain(param_2);
  _swift_unknownObjectRetain(param_3);
  plVar5 = &lStack_78;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  _swift_release(uStack_80);
  _swift_unknownObjectRelease(aplStack_90[0]);
  return plVar5;
}



/* Entry: 10430dd74; end: 10430de0b; -[_TtC18SCLogoutSaberScope21SCLogoutScopeServices buildWithDelegate:logout:blurContainer:] */

void FUN_10430dd74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10430dc6c(param_3,param_4,param_5);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10430de0c; end: 10430de3f;  */

void FUN_10430de0c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10430de40; end: 10430de63; -[_TtC18SCLogoutSaberScope21SCLogoutScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430de40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306d240));
  return;
}



/* Entry: 10430de64; end: 10430de83; -[SCNGOCodeVerificationScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430de64(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306d298));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430de84; end: 10430de93; -[SCNGOCodeVerificationScope context] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10430de84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306d2a0);
}



/* Entry: 10430de94; end: 10430dea3; -[SCNGOCodeVerificationScope channel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430de94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306d2a8));
  return;
}



/* Entry: 10430dea4; end: 10430deaf; -[SCNGOCodeVerificationScope service] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430dea4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306d2b0;
  _swift_beginAccess(param_1 + _DAT_11306d2b0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430deb0; end: 10430debb; -[SCNGOCodeVerificationScope setService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430deb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306d2b0;
  _swift_beginAccess(param_1 + _DAT_11306d2b0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10430debc; end: 10430dec7; -[SCNGOCodeVerificationScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430debc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306d2b8;
  _swift_beginAccess(param_1 + _DAT_11306d2b8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430dec8; end: 10430df0b;  */

void FUN_10430dec8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430df0c; end: 10430df17; -[SCNGOCodeVerificationScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430df0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306d2b8;
  _swift_beginAccess(param_1 + _DAT_11306d2b8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10430df18; end: 10430df6b;  */

void FUN_10430df18(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10430df6c; end: 10430df6f;  */

void FUN_10430df6c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10430df70; end: 10430dfc7; -[SCNGOCodeVerificationScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010430dfac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010430dfb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10430df70(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d298));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306d2a8));
  param_1 = param_1 + _DAT_11306d2b0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10430dfc8; end: 10430e02f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430dfc8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100096dac();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306d2c8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10430e030; end: 10430e07b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430e030(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306d2c8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10430e07c; end: 10430e1d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10430e07c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_b8 [2];
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x000100094c78();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar2 = _DAT_11306d2b0;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11306d2b0,0);
  lVar3 = _DAT_11306d2b8;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11306d2b8,0);
  *(long *)(lVar5 + _DAT_11306d298) = param_1;
  *(undefined8 *)(lVar5 + _DAT_11306d2a8) = param_2;
  *(undefined8 *)(lVar5 + _DAT_11306d2a0) = param_3;
  _swift_beginAccess(lVar5 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar2,param_4);
  _swift_beginAccess(lVar5 + lVar3,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_5);
  puVar1 = PTR_s_init_1125d9248;
  lStack_a0 = lVar5;
  lStack_98 = lVar4;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  plVar6 = &lStack_a0;
  _objc_msgSendSuper2(plVar6,puVar1);
  aplStack_b8[0] = plVar6;
  func_0x00010008a7c8(&uStack_a8,aplStack_b8);
  func_0x000100083b20(aplStack_b8);
  _swift_release(uStack_a8);
  _swift_unknownObjectRelease(aplStack_b8[0]);
  return plVar6;
}



/* Entry: 10430e1d4; end: 10430e28f; -[_TtC31SCNGOCodeVerificationSaberScope34SCNGOCodeVerificationScopeServices buildWithUiContainer:channel:context:service:delegate:] */

void FUN_10430e1d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10430e07c(param_3,param_4,param_5,param_6,param_7);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10430e290; end: 10430e2c3;  */

void FUN_10430e290(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10430e2c4; end: 10430e2e7; -[_TtC31SCNGOCodeVerificationSaberScope34SCNGOCodeVerificationScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430e2c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306d2c8));
  return;
}



/* Entry: 10430e2e8; end: 10430e333; -[SCPhoneCodeScope phoneReceivingCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430e2e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306d320);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306d320))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10430e334; end: 10430e343; -[SCPhoneCodeScope initialCodeDeliveryMechanism] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10430e334(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306d328);
}



/* Entry: 10430e344; end: 10430e363; -[SCPhoneCodeScope codeVerifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430e344(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306d330));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430e364; end: 10430e3ab; -[SCPhoneCodeScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430e364(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306d338;
  _swift_beginAccess(param_1 + _DAT_11306d338,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430e3ac; end: 10430e403; -[SCPhoneCodeScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430e3ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306d338;
  _swift_beginAccess(param_1 + _DAT_11306d338,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10430e404; end: 10430e423; -[SCPhoneCodeScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430e404(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306d340));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430e424; end: 10430e433; -[SCPhoneCodeScope shouldShowSwitchToVoiceOption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10430e424(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306d348);
}



/* Entry: 10430e434; end: 10430e447; -[SCPhoneCodeScope shouldShowSwitchToEmailOption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10430e434(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306d350);
}



/* Entry: 10430e448; end: 10430e513; -[SCPhoneCodeScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430e448(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d320 + 8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d330));
  func_0x00010430e4a4(param_1 + _DAT_11306d338);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11306d340));
  return;
}



/* Entry: 10430e514; end: 10430e57b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430e514(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10430e888();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306d360) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10430e57c; end: 10430e5c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430e57c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306d360) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10430e5c8; end: 10430e733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10430e5c8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8)

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
  FUN_10430e814();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11306d338;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11306d338,0);
  plVar5 = (long *)(lVar4 + _DAT_11306d320);
  *plVar5 = param_1;
  plVar5[1] = param_2;
  *(undefined8 *)(lVar4 + _DAT_11306d328) = param_3;
  *(undefined8 *)(lVar4 + _DAT_11306d330) = param_4;
  _swift_beginAccess(lVar4 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_5);
  *(undefined8 *)(lVar4 + _DAT_11306d340) = param_6;
  *(undefined1 *)(lVar4 + _DAT_11306d348) = param_7;
  *(undefined1 *)(lVar4 + _DAT_11306d350) = param_8;
  puVar1 = PTR_s_init_1125d9248;
  lStack_88 = lVar4;
  lStack_80 = lVar3;
  _swift_bridgeObjectRetain(param_2);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_6);
  plVar5 = &lStack_88;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_a0[0] = plVar5;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar5;
}



/* Entry: 10430e734; end: 10430e813; -[_TtC21SCPhoneCodeSaberScope24SCPhoneCodeScopeServices buildWithPhoneReceivingCode:initialCodeDeliveryMechanism:codeVerifier:delegate:uiContainer:shouldShowSwitchToVoiceOption:shouldShowSwitchToEmailOption:] */

void FUN_10430e734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_1);
  FUN_10430e5c8(param_3,param_2,param_4,param_5,param_6,param_7,param_8,param_9);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10430e814; end: 10430e867;  */

void FUN_10430e814(void)

{
  _objc_opt_self(&PTR_PTR_112998c80);
  return;
}


