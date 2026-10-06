/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10481b99c; end: 10481b9ab; -[SCAdServeLoggingContext isCached] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10481b99c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113090e08);
}



/* Entry: 10481b9ac; end: 10481b9bb; -[SCAdServeLoggingContext prefetchRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10481b9ac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113090e10);
}



/* Entry: 10481b9bc; end: 10481b9cb; -[SCAdServeLoggingContext earlyFetch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10481b9bc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113090e18);
}



/* Entry: 10481b9cc; end: 10481b9db; -[SCAdServeLoggingContext requestOrigin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10481b9cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090e20);
}



/* Entry: 10481b9dc; end: 10481ba97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481b9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090df8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113090e00) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_113090e08) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_113090e10) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_113090e18) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113090e20) = param_7;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10481ba98; end: 10481bb6b; -[SCAdServeLoggingContext initWithStorySessionId:viewSource:isCached:prefetchRequest:earlyFetch:requestOrigin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481ba98(long param_1,long param_2,long param_3,undefined8 param_4,undefined1 param_5,
                  undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113090df8);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113090e00) = param_4;
  *(undefined1 *)(param_1 + _DAT_113090e08) = param_5;
  *(undefined1 *)(param_1 + _DAT_113090e10) = param_6;
  *(undefined1 *)(param_1 + _DAT_113090e18) = param_7;
  *(undefined8 *)(param_1 + _DAT_113090e20) = param_8;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10481bb6c; end: 10481bc0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481bb6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  _swift_getObjectType();
  uVar2 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090df8);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_113090e00) = param_1[2];
  *(undefined1 *)(unaff_x20 + _DAT_113090e08) = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(unaff_x20 + _DAT_113090e10) = *(undefined1 *)((long)param_1 + 0x19);
  *(undefined1 *)(unaff_x20 + _DAT_113090e18) = *(undefined1 *)((long)param_1 + 0x1a);
  *(undefined8 *)(unaff_x20 + _DAT_113090e20) = param_1[4];
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10481bc0c; end: 10481bc3f; -[SCAdServeLoggingContext hash] */

undefined8 FUN_10481bc0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10481b6bc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10481bc40; end: 10481bcbf; -[SCAdServeLoggingContext isEqual:] */

uint FUN_10481bc40(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10481b7a0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10481bcc0; end: 10481bcc3; -[SCAdServeLoggingContext copyWithZone:] */

void FUN_10481bcc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10481bcc4; end: 10481beaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481bcc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_113090df8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090df8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f2106f0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x554f535f57454956;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x554f535f57454956,0xeb00000000454352);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x45484341435f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45484341435f5349,0xe900000000000044);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f210710);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x45465f594c524145;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45465f594c524145,0xeb00000000484354);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x5f54534555514552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f54534555514552,0xee004e494749524f);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10481beb0; end: 10481beff; -[SCAdServeLoggingContext encodeWithCoder:] */

void FUN_10481beb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10481bcc4(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10481bf00; end: 10481bf2f;  */

void FUN_10481bf00(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10481bf30(param_1);
  return;
}



/* Entry: 10481bf30; end: 10481c1ef;  */

undefined8 FUN_10481bf30(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  long lVar5;
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
  
  iVar1 = (int)&uStack_b0;
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f2106f0);
  uVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar3);
    _swift_unknownObjectRelease(uVar3);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar5 = 0;
    uVar2 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar5 = lStack_a8;
    uVar2 = uStack_b0;
    if (iVar1 == 0) {
      uVar2 = 0;
      lVar5 = 0;
    }
  }
  uVar4 = 0x554f535f57454956;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x554f535f57454956,0xeb00000000454352);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar4);
  uVar4 = 0x45484341435f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45484341435f5349,0xe900000000000044);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar4);
  uVar4 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f210710);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar4);
  uVar4 = 0x45465f594c524145;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45465f594c524145,0xeb00000000484354);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar4);
  uVar4 = 0x5f54534555514552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f54534555514552,0xee004e494749524f);
  uVar3 = param_1;
  func_0x00010bf66f40();
  _objc_release(uVar4);
  if (uVar3 < 5) {
    if (lVar5 == 0) {
      uVar2 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar5);
      _swift_bridgeObjectRelease(lVar5);
    }
    func_0x00010c04e0e0();
    _objc_release(uVar2);
    _objc_release(param_1);
  }
  else {
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar5);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Entry: 10481c1f0; end: 10481c217; -[SCAdServeLoggingContext initWithCoder:] */

void FUN_10481c1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10481bf30();
  return;
}



/* Entry: 10481c218; end: 10481c24b; -[SCAdServeLoggingContext description] */

void FUN_10481c218(void)

{
  undefined1 auStack_38 [40];
  
  func_0x00010481c2dc(auStack_38);
  func_0x000103de2efc(auStack_38);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10481c24c; end: 10481c2c7; -[SCAdServeLoggingContext init] */

void FUN_10481c24c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdServeLoggingContextWrapper.swift",0x2e,2,0x77,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10481c294);
  (*pcVar1)();
}



/* Entry: 10481c2c8; end: 10481c347; -[SCAdServeLoggingContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481c2c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113090df8 + 8))
  ;
  return;
}



/* Entry: 10481c348; end: 10481c367;  */

void FUN_10481c348(void)

{
  _objc_opt_self(&PTR_PTR_1129d97f8);
  return;
}



/* Entry: 10481c368; end: 10481c3d3;  */

void FUN_10481c368(undefined8 param_1)

{
  undefined1 auStack_180 [352];
  
  FUN_104820bb8(auStack_180);
  _memcpy(param_1,auStack_180,0x160);
  return;
}



/* Entry: 10481c3d4; end: 10481ca0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481c3d4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113090e50));
  if (((undefined8 *)(unaff_x20 + _DAT_113090e58))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090e58);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_113090e60))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090e60);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113090e68));
  if (((undefined8 *)(unaff_x20 + _DAT_113090e70))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090e70);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113090e78));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113090e80));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113090e88));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113090e90));
  if (((undefined8 *)(unaff_x20 + _DAT_113090e98))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090e98);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  lVar2 = *(long *)(unaff_x20 + _DAT_113090ea0);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,PTR___sSSN_11034da80);
    lVar4 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar4);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113090ea8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113090eb0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113090eb8));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113090ec0));
  if (((undefined8 *)(unaff_x20 + _DAT_113090ec8))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090ec8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_113090ed0))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090ed0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_113090ed8))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090ed8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_113090ee0))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090ee0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_113090ee8))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090ee8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_113090ef0));
  if (((undefined8 *)(unaff_x20 + _DAT_113090ef8))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090ef8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113090f00));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113090f08));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113090f10));
  if (((undefined8 *)(unaff_x20 + _DAT_113090f18))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090f18);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_113090f20))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090f20);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_113090f28))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090f28);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_113090f30))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090f30);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090f38);
  uVar3 = 0;
  func_0x0001002ed07c(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar3);
  uVar3 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar3);
  lVar2 = *(long *)(unaff_x20 + _DAT_113090f40);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_c0);
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar2 + _DAT_113090d60));
    __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar2 + _DAT_113090d68));
    uVar3 = *(undefined8 *)(lVar2 + _DAT_113090d70);
    __ss6HasherV8_combineyySuF(uVar3);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113090f48));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10481ca0c; end: 10481d2e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10481ca0c(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  long *plVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  uint uVar41;
  long lVar42;
  long lVar43;
  uint uVar44;
  long unaff_x20;
  undefined8 uVar45;
  uint uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uStack_98;
  long lStack_90;
  long alStack_88 [5];
  
  lVar39 = unaff_x20;
  _swift_getObjectType();
  FUN_104821108(param_1,alStack_88,0x112d387f8,&UNK_10d902650);
  if (alStack_88[3] == 0) {
    func_0x00010006e7f4(alStack_88);
  }
  else {
    plVar35 = &lStack_90;
    _swift_dynamicCast(plVar35,alStack_88,PTR___sypN_11034f1a8 + 8,lVar39,6);
    if (((ulong)plVar35 & 1) != 0) {
      iVar2 = *(int *)(unaff_x20 + _DAT_113090e50);
      iVar3 = *(int *)(lStack_90 + _DAT_113090e50);
      lVar39 = ((long *)(unaff_x20 + _DAT_113090e58))[1];
      lVar40 = ((long *)(lStack_90 + _DAT_113090e58))[1];
      if (lVar39 == 0 || lVar40 == 0) {
        uStack_98 = (uint)(lVar39 == 0 && lVar40 == 0);
      }
      else {
        lVar36 = *(long *)(unaff_x20 + _DAT_113090e58);
        if (lVar36 == *(long *)(lStack_90 + _DAT_113090e58) && lVar39 == lVar40) {
          uStack_98 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_98 = (uint)lVar36;
        }
      }
      lVar39 = ((long *)(unaff_x20 + _DAT_113090e60))[1];
      lVar40 = ((long *)(lStack_90 + _DAT_113090e60))[1];
      uVar26 = (uint)(lVar39 == 0 && lVar40 == 0);
      if (lVar39 != 0 && lVar40 != 0) {
        lVar36 = *(long *)(unaff_x20 + _DAT_113090e60);
        if ((lVar36 == *(long *)(lStack_90 + _DAT_113090e60)) && (lVar39 == lVar40)) {
          uVar26 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar26 = (uint)lVar36;
        }
      }
      iVar4 = *(int *)(unaff_x20 + _DAT_113090e68);
      iVar5 = *(int *)(lStack_90 + _DAT_113090e68);
      lVar39 = ((long *)(unaff_x20 + _DAT_113090e70))[1];
      lVar40 = ((long *)(lStack_90 + _DAT_113090e70))[1];
      uVar44 = (uint)(lVar39 == 0 && lVar40 == 0);
      if ((lVar39 != 0) && (lVar40 != 0)) {
        lVar36 = *(long *)(unaff_x20 + _DAT_113090e70);
        if ((lVar36 == *(long *)(lStack_90 + _DAT_113090e70)) && (lVar39 == lVar40)) {
          uVar44 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar44 = (uint)lVar36;
        }
      }
      lVar42 = *(long *)(unaff_x20 + _DAT_113090e78);
      lVar36 = *(long *)(lStack_90 + _DAT_113090e78);
      bVar10 = *(byte *)(unaff_x20 + _DAT_113090e80);
      bVar11 = *(byte *)(lStack_90 + _DAT_113090e80);
      bVar12 = *(byte *)(unaff_x20 + _DAT_113090e88);
      bVar13 = *(byte *)(lStack_90 + _DAT_113090e88);
      bVar14 = *(byte *)(unaff_x20 + _DAT_113090e90);
      bVar15 = *(byte *)(lStack_90 + _DAT_113090e90);
      lVar39 = ((long *)(unaff_x20 + _DAT_113090e98))[1];
      lVar40 = ((long *)(lStack_90 + _DAT_113090e98))[1];
      uVar27 = (uint)(lVar39 == 0 && lVar40 == 0);
      if ((lVar39 != 0) && (lVar40 != 0)) {
        lVar37 = *(long *)(unaff_x20 + _DAT_113090e98);
        if ((lVar37 == *(long *)(lStack_90 + _DAT_113090e98)) && (lVar39 == lVar40)) {
          uVar27 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar27 = (uint)lVar37;
        }
      }
      lVar39 = *(long *)(unaff_x20 + _DAT_113090ea0);
      uVar41 = (uint)(lVar39 == 0 && *(long *)(lStack_90 + _DAT_113090ea0) == 0);
      if ((lVar39 != 0) && (*(long *)(lStack_90 + _DAT_113090ea0) != 0)) {
        func_0x00010142cfc4();
        uVar41 = (uint)lVar39;
      }
      bVar16 = *(byte *)(unaff_x20 + _DAT_113090ea8);
      bVar17 = *(byte *)(lStack_90 + _DAT_113090ea8);
      iVar6 = *(int *)(unaff_x20 + _DAT_113090eb0);
      iVar7 = *(int *)(lStack_90 + _DAT_113090eb0);
      iVar8 = *(int *)(unaff_x20 + _DAT_113090eb8);
      iVar9 = *(int *)(lStack_90 + _DAT_113090eb8);
      bVar18 = *(byte *)(unaff_x20 + _DAT_113090ec0);
      bVar19 = *(byte *)(lStack_90 + _DAT_113090ec0);
      lVar39 = ((long *)(unaff_x20 + _DAT_113090ec8))[1];
      lVar40 = ((long *)(lStack_90 + _DAT_113090ec8))[1];
      uVar28 = (uint)(lVar39 == 0 && lVar40 == 0);
      if ((lVar39 != 0) && (lVar40 != 0)) {
        lVar37 = *(long *)(unaff_x20 + _DAT_113090ec8);
        if ((lVar37 == *(long *)(lStack_90 + _DAT_113090ec8)) && (lVar39 == lVar40)) {
          uVar28 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar28 = (uint)lVar37;
        }
      }
      lVar39 = ((long *)(unaff_x20 + _DAT_113090ed0))[1];
      lVar40 = ((long *)(lStack_90 + _DAT_113090ed0))[1];
      uVar29 = (uint)(lVar39 == 0 && lVar40 == 0);
      if ((lVar39 != 0) && (lVar40 != 0)) {
        lVar37 = *(long *)(unaff_x20 + _DAT_113090ed0);
        if ((lVar37 == *(long *)(lStack_90 + _DAT_113090ed0)) && (lVar39 == lVar40)) {
          uVar29 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar29 = (uint)lVar37;
        }
      }
      lVar39 = ((long *)(unaff_x20 + _DAT_113090ed8))[1];
      lVar40 = ((long *)(lStack_90 + _DAT_113090ed8))[1];
      uVar30 = (uint)(lVar39 == 0 && lVar40 == 0);
      if ((lVar39 != 0) && (lVar40 != 0)) {
        lVar37 = *(long *)(unaff_x20 + _DAT_113090ed8);
        if ((lVar37 == *(long *)(lStack_90 + _DAT_113090ed8)) && (lVar39 == lVar40)) {
          uVar30 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar30 = (uint)lVar37;
        }
      }
      lVar39 = ((long *)(unaff_x20 + _DAT_113090ee0))[1];
      lVar40 = ((long *)(lStack_90 + _DAT_113090ee0))[1];
      uVar31 = (uint)(lVar39 == 0 && lVar40 == 0);
      if ((lVar39 != 0) && (lVar40 != 0)) {
        lVar37 = *(long *)(unaff_x20 + _DAT_113090ee0);
        if ((lVar37 == *(long *)(lStack_90 + _DAT_113090ee0)) && (lVar39 == lVar40)) {
          uVar31 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar31 = (uint)lVar37;
        }
      }
      lVar39 = ((long *)(unaff_x20 + _DAT_113090ee8))[1];
      lVar40 = ((long *)(lStack_90 + _DAT_113090ee8))[1];
      uVar32 = (uint)(lVar39 == 0 && lVar40 == 0);
      if ((lVar39 != 0) && (lVar40 != 0)) {
        lVar37 = *(long *)(unaff_x20 + _DAT_113090ee8);
        if ((lVar37 == *(long *)(lStack_90 + _DAT_113090ee8)) && (lVar39 == lVar40)) {
          uVar32 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar32 = (uint)lVar37;
        }
      }
      lVar43 = *(long *)(unaff_x20 + _DAT_113090ef0);
      lVar37 = *(long *)(lStack_90 + _DAT_113090ef0);
      lVar39 = ((long *)(unaff_x20 + _DAT_113090ef8))[1];
      lVar40 = ((long *)(lStack_90 + _DAT_113090ef8))[1];
      uVar33 = (uint)(lVar39 == 0 && lVar40 == 0);
      if ((lVar39 != 0) && (lVar40 != 0)) {
        lVar38 = *(long *)(unaff_x20 + _DAT_113090ef8);
        if ((lVar38 == *(long *)(lStack_90 + _DAT_113090ef8)) && (lVar39 == lVar40)) {
          uVar33 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar33 = (uint)lVar38;
        }
      }
      bVar20 = *(byte *)(unaff_x20 + _DAT_113090f00);
      bVar21 = *(byte *)(lStack_90 + _DAT_113090f00);
      bVar22 = *(byte *)(unaff_x20 + _DAT_113090f08);
      bVar23 = *(byte *)(lStack_90 + _DAT_113090f08);
      bVar24 = *(byte *)(unaff_x20 + _DAT_113090f10);
      bVar25 = *(byte *)(lStack_90 + _DAT_113090f10);
      lVar39 = ((long *)(unaff_x20 + _DAT_113090f18))[1];
      lVar40 = ((long *)(lStack_90 + _DAT_113090f18))[1];
      uVar49 = (uint)(lVar39 == 0 && lVar40 == 0);
      if ((lVar39 != 0) && (lVar40 != 0)) {
        lVar38 = *(long *)(unaff_x20 + _DAT_113090f18);
        if ((lVar38 == *(long *)(lStack_90 + _DAT_113090f18)) && (lVar39 == lVar40)) {
          uVar49 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar49 = (uint)lVar38;
        }
      }
      lVar39 = ((long *)(unaff_x20 + _DAT_113090f20))[1];
      lVar40 = ((long *)(lStack_90 + _DAT_113090f20))[1];
      uVar50 = (uint)(lVar39 == 0 && lVar40 == 0);
      if ((lVar39 != 0) && (lVar40 != 0)) {
        lVar38 = *(long *)(unaff_x20 + _DAT_113090f20);
        if ((lVar38 == *(long *)(lStack_90 + _DAT_113090f20)) && (lVar39 == lVar40)) {
          uVar50 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar50 = (uint)lVar38;
        }
      }
      lVar39 = ((long *)(unaff_x20 + _DAT_113090f28))[1];
      lVar40 = ((long *)(lStack_90 + _DAT_113090f28))[1];
      uVar51 = (uint)(lVar39 == 0 && lVar40 == 0);
      if ((lVar39 != 0) && (lVar40 != 0)) {
        lVar38 = *(long *)(unaff_x20 + _DAT_113090f28);
        if ((lVar38 == *(long *)(lStack_90 + _DAT_113090f28)) && (lVar39 == lVar40)) {
          uVar51 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar51 = (uint)lVar38;
        }
      }
      lVar39 = ((long *)(unaff_x20 + _DAT_113090f30))[1];
      lVar40 = ((long *)(lStack_90 + _DAT_113090f30))[1];
      uVar46 = (uint)(lVar39 == 0 && lVar40 == 0);
      if ((lVar39 != 0) && (lVar40 != 0)) {
        lVar38 = *(long *)(unaff_x20 + _DAT_113090f30);
        if ((lVar38 == *(long *)(lStack_90 + _DAT_113090f30)) && (lVar39 == lVar40)) {
          uVar46 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar46 = (uint)lVar38;
        }
      }
      uVar45 = *(undefined8 *)(unaff_x20 + _DAT_113090f38);
      uVar47 = *(undefined8 *)(lStack_90 + _DAT_113090f38);
      _swift_bridgeObjectRetain(uVar47);
      func_0x0001038a4f38(uVar45,uVar47);
      _swift_bridgeObjectRelease(uVar47);
      if (*(long *)(unaff_x20 + _DAT_113090f40) == 0) {
        uVar34 = (uint)(*(long *)(lStack_90 + _DAT_113090f40) == 0);
      }
      else {
        lVar39 = *(long *)(lStack_90 + _DAT_113090f40);
        if (lVar39 == 0) {
          lVar40 = 0;
          alStack_88[1] = 0;
          alStack_88[2] = 0;
        }
        else {
          lVar40 = 0;
          FUN_10481add8();
        }
        alStack_88[0] = lVar39;
        alStack_88[3] = lVar40;
        _objc_retain(lVar39);
        plVar35 = alStack_88;
        FUN_10481a8f4(plVar35);
        uVar34 = (uint)plVar35;
        func_0x00010006e7f4(alStack_88);
      }
      uVar47 = *(undefined8 *)(unaff_x20 + _DAT_113090f48);
      uVar48 = *(undefined8 *)(lStack_90 + _DAT_113090f48);
      _objc_release(lStack_90);
      uVar1 = 0;
      if (iVar4 == iVar5) {
        uVar1 = iVar2 == iVar3 & uStack_98 & uVar26;
      }
      uVar26 = uVar1 & uVar44 ^ 1;
      if (lVar42 != lVar36) {
        uVar26 = 1;
      }
      if ((((((uVar26 | (byte)(bVar10 ^ bVar11 | bVar12 ^ bVar13 | bVar14 ^ bVar15)) ^ 1) &
             uVar27 & uVar41 ^ 1 |
            (uint)(byte)(bVar16 ^ bVar17 | iVar6 != iVar7 | iVar8 != iVar9 | bVar18 ^ bVar19)) ^ 1)
          & uVar28 & uVar29 & uVar30 & uVar31 & uVar32 & (uint)(lVar43 == lVar37) & uVar33) != 1) {
        return 0;
      }
      if (((bVar20 ^ bVar21) & 1) != 0) {
        return 0;
      }
      if (((bVar22 ^ bVar23) & 1) != 0) {
        return 0;
      }
      if (((bVar24 ^ bVar25) & 1) != 0) {
        return 0;
      }
      if (((uVar49 ^ 1) & 1) != 0) {
        return 0;
      }
      if (((uVar50 ^ 1) & 1) != 0) {
        return 0;
      }
      if (((uVar51 ^ 1) & 1) != 0) {
        return 0;
      }
      if (((uVar46 ^ 1) & 1) != 0) {
        return 0;
      }
      if ((((uint)uVar45 ^ 1) & 1) != 0) {
        return 0;
      }
      return uVar34 & (int)uVar47 == (int)uVar48;
    }
  }
  return 0;
}



/* Entry: 10481d2e4; end: 10481d2f3; -[SCAdTargetingParameters adProductType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10481d2e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090e50);
}



/* Entry: 10481d2f4; end: 10481d2ff; -[SCAdTargetingParameters inventoryFullyQualified] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481d2f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090e58))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090e58);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10481d300; end: 10481d30b; -[SCAdTargetingParameters inventoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481d300(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090e60))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090e60);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10481d30c; end: 10481d31b; -[SCAdTargetingParameters inventorySubtype] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10481d30c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090e68);
}



/* Entry: 10481d31c; end: 10481d327; -[SCAdTargetingParameters inventoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481d31c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090e70))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090e70);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10481d328; end: 10481d337; -[SCAdTargetingParameters adPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10481d328(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090e78);
}



/* Entry: 10481d338; end: 10481d347; -[SCAdTargetingParameters isUnskippableAdSlot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10481d338(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113090e80);
}



/* Entry: 10481d348; end: 10481d357; -[SCAdTargetingParameters canSupportShowsSkippableAd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10481d348(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113090e88);
}



/* Entry: 10481d358; end: 10481d367; -[SCAdTargetingParameters isQATestGroup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10481d358(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113090e90);
}



/* Entry: 10481d368; end: 10481d373; -[SCAdTargetingParameters debugAdId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481d368(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090e98))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090e98);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10481d374; end: 10481d3c7; -[SCAdTargetingParameters debugProductIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481d374(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113090ea0);
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



/* Entry: 10481d3c8; end: 10481d3d7; -[SCAdTargetingParameters isDebugRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10481d3c8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113090ea8);
}



/* Entry: 10481d3d8; end: 10481d3e7; -[SCAdTargetingParameters mockAdServerDebugAdType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10481d3d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090eb0);
}



/* Entry: 10481d3e8; end: 10481d3f7; -[SCAdTargetingParameters mockAdServerAdRequestStatusCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10481d3e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090eb8);
}



/* Entry: 10481d3f8; end: 10481d407; -[SCAdTargetingParameters mockAdServerForcePoliticalAd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10481d3f8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113090ec0);
}



/* Entry: 10481d408; end: 10481d413; -[SCAdTargetingParameters channel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481d408(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090ec8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090ec8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10481d414; end: 10481d41f; -[SCAdTargetingParameters channelId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481d414(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090ed0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090ed0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10481d420; end: 10481d42b; -[SCAdTargetingParameters productType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481d420(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090ed8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090ed8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10481d42c; end: 10481d437; -[SCAdTargetingParameters publisher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481d42c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090ee0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090ee0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10481d438; end: 10481d443; -[SCAdTargetingParameters editionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481d438(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090ee8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090ee8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10481d444; end: 10481d453; -[SCAdTargetingParameters publisherId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10481d444(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090ef0);
}



/* Entry: 10481d454; end: 10481d45f; -[SCAdTargetingParameters posterId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481d454(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090ef8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090ef8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10481d460; end: 10481d46f; -[SCAdTargetingParameters enableDPAProcessing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10481d460(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113090f00);
}



/* Entry: 10481d470; end: 10481d47f; -[SCAdTargetingParameters enableCommercialsExtendedPlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10481d470(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113090f08);
}



/* Entry: 10481d480; end: 10481d48f; -[SCAdTargetingParameters enableStoryAd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10481d480(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113090f10);
}



/* Entry: 10481d490; end: 10481d49b; -[SCAdTargetingParameters supportedAdTypes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481d490(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090f18))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090f18);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10481d49c; end: 10481d4a7; -[SCAdTargetingParameters supportedDpaAdTypes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481d49c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090f20))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090f20);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10481d4a8; end: 10481d4b3; -[SCAdTargetingParameters skAdNetworkIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481d4a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090f28))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090f28);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10481d4b4; end: 10481d4bf; -[SCAdTargetingParameters skAdNetworkSourceAppIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481d4b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090f30))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090f30);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10481d4c0; end: 10481d517;  */

void FUN_10481d4c0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10481d518; end: 10481d567; -[SCAdTargetingParameters contentCategories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481d518(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090f38);
  func_0x0001002ed07c(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10481d568; end: 10481d577; -[SCAdTargetingParameters inventoryRequestDebugFlags] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481d568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090f40));
  return;
}



/* Entry: 10481d578; end: 10481d587; -[SCAdTargetingParameters adViewLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10481d578(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090f48);
}



/* Entry: 10481d588; end: 10481dc7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481d588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
                  undefined8 param_17,undefined8 param_18,undefined1 param_19,undefined4 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined4 param_34,undefined4 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113090e50) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090e58);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090e60);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113090e68) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090e70);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113090e78) = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_113090e80) = (undefined1)param_10;
  *(undefined1 *)(unaff_x20 + _DAT_113090e88) = param_10._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_113090e90) = param_10._2_1_;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090e98);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_113090ea0) = param_14;
  *(undefined1 *)(unaff_x20 + _DAT_113090ea8) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_113090eb0) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_113090eb8) = param_18;
  *(undefined1 *)(unaff_x20 + _DAT_113090ec0) = param_19;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090ec8);
  *puVar1 = param_21;
  puVar1[1] = param_22;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090ed0);
  *puVar1 = param_23;
  puVar1[1] = param_24;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090ed8);
  *puVar1 = param_25;
  puVar1[1] = param_26;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090ee0);
  *puVar1 = param_27;
  puVar1[1] = param_28;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090ee8);
  *puVar1 = param_29;
  puVar1[1] = param_30;
  *(undefined8 *)(unaff_x20 + _DAT_113090ef0) = param_31;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090ef8);
  *puVar1 = param_32;
  puVar1[1] = param_33;
  *(undefined1 *)(unaff_x20 + _DAT_113090f00) = (undefined1)param_34;
  *(undefined1 *)(unaff_x20 + _DAT_113090f08) = param_34._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_113090f10) = param_34._2_1_;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090f18);
  *puVar1 = param_36;
  puVar1[1] = param_37;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090f20);
  *puVar1 = param_38;
  puVar1[1] = param_39;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090f28);
  *puVar1 = param_40;
  puVar1[1] = param_41;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090f30);
  *puVar1 = param_42;
  puVar1[1] = param_43;
  *(undefined8 *)(unaff_x20 + _DAT_113090f38) = param_44;
  *(undefined8 *)(unaff_x20 + _DAT_113090f40) = param_45;
  *(undefined8 *)(unaff_x20 + _DAT_113090f48) = param_46;
  _objc_msgSendSuper2(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10481dc80; end: 10481e737; -[SCAdTargetingParameters initWithAdProductType:inventoryFullyQualified:inventoryType:inventorySubtype:inventoryId:adPosition:isUnskippableAdSlot:canSupportShowsSkippableAd:isQATestGroup:debugAdId:debugProductIds:isDebugRequest:mockAdServerDebugAdType:mockAdServerAdRequestStatusCode:mockAdServerForcePoliticalAd:channel:channelId:productType:publisher:editionId:publisherId:posterId:enableDPAProcessing:enableCommercialsExtendedPlay:enableStoryAd:supportedAdTypes:supportedDpaAdTypes:skAdNetworkIdentifier:skAdNetworkSourceAppIdentifier:contentCategories:inventoryRequestDebugFlags:adViewLocation:] */

void FUN_10481dc80(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8,undefined1 param_9
                  ,undefined4 param_10,long param_11,long param_12)

{
  undefined8 uVar1;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000068;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  
  if (param_4 == 0) {
    uStack_c0 = 0;
    lStack_b8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_c0 = param_2;
    lStack_b8 = param_4;
  }
  if (param_5 == 0) {
    uStack_d0 = 0;
    lStack_c8 = 0;
    uStack_e0 = param_2;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_e0 = param_2;
    uStack_d0 = param_2;
    lStack_c8 = param_5;
  }
  if (param_7 == 0) {
    uStack_e0 = 0;
    lStack_d8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_d8 = param_7;
  }
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  if (param_11 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(param_11);
  }
  if (param_12 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(param_12);
  }
  if (in_stack_00000038 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_00000038);
  }
  if (in_stack_00000040 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_00000040);
  }
  if (in_stack_00000048 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_00000048);
  }
  if (in_stack_00000050 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_00000050);
  }
  if (in_stack_00000058 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_00000058);
  }
  if (in_stack_00000068 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_00000068);
  }
  if (in_stack_00000078 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_00000078);
  }
  if (in_stack_00000080 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_00000080);
  }
  if (in_stack_00000088 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_00000088);
  }
  if (in_stack_00000090 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_00000090);
  }
  uVar1 = 0;
  func_0x0001002ed07c(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (in_stack_00000098,uVar1);
  _objc_release(in_stack_00000098);
  func_0x00010481d908(param_3,lStack_b8,uStack_c0,lStack_c8,uStack_d0,param_6,lStack_d8,uStack_e0,
                      param_8,param_9);
  return;
}



/* Entry: 10481e738; end: 10481e76b; -[SCAdTargetingParameters hash] */

undefined8 FUN_10481e738(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10481c3d4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10481e76c; end: 10481e7eb; -[SCAdTargetingParameters isEqual:] */

uint FUN_10481e76c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10481ca0c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10481e7ec; end: 10481e7ef; -[SCAdTargetingParameters copyWithZone:] */

void FUN_10481e7ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10481e7f0; end: 10481f2c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481e7f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar1 = 0x55444f52505f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55444f52505f4441,0xef455059545f5443);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113090e58))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090e58);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f210760);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113090e60))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090e60);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar4 = 0x524f544e45564e49;
  uVar2 = uVar4;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x524f544e45564e49,0xee00455059545f59);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f210780);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113090e70))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090e70);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x524f544e45564e49,0xec00000044495f59);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar4);
  uVar1 = 0x5449534f505f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5449534f505f4441,0xeb000000004e4f49);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f2107a0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f2107c0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x53455441515f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x53455441515f5349,0xef50554f52475f54);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113090e98))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090e98);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x44415f4755424544;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44415f4755424544,0xeb0000000044495f);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_113090ea0);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,PTR___sSSN_11034da80);
  }
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f2107e0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f210800);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f210820);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f210840);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f210870);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113090ec8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090ec8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4c454e4e414843;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c454e4e414843,0xe700000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113090ed0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090ed0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x5f4c454e4e414843;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f4c454e4e414843,0xea00000000004449);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113090ed8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090ed8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x5f544355444f5250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544355444f5250,0xec00000045505954);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113090ee0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090ee0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar4 = 0x454853494c425550;
  uVar2 = uVar4;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454853494c425550,0xe900000000000052);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113090ee8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090ee8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x5f4e4f4954494445;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f4e4f4954494445,0xea00000000004449);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454853494c425550,0xec00000044495f52);
  func_0x00010bf92fa0(param_1);
  _objc_release(uVar4);
  if (((undefined8 *)(unaff_x20 + _DAT_113090ef8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090ef8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x495f524554534f50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495f524554534f50,0xe900000000000044);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f2108a0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f2108c0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x535f454c42414e45;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x535f454c42414e45,0xef44415f59524f54);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113090f18))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090f18);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f2108f0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113090f20))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090f20);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f210910);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113090f28))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090f28);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f210930);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113090f30))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090f30);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f210950);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090f38);
  uVar1 = 0;
  func_0x0001002ed07c(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f210980);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f2109a0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f2109c0);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10481f2c8; end: 10481f317; -[SCAdTargetingParameters encodeWithCoder:] */

void FUN_10481f2c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10481e7f0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10481f318; end: 10481f347;  */

void FUN_10481f318(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10481f348(param_1);
  return;
}



/* Entry: 10481f348; end: 104820973;  */

undefined8 FUN_10481f348(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined8 unaff_x20;
  undefined8 uVar11;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_118;
  long lStack_110;
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
  
  uVar2 = 0x55444f52505f4441;
  uVar10 = 0x545f5443;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55444f52505f4441);
  func_0x00010bf66f40();
  _objc_release(uVar2);
  func_0x000102d02a38();
  if ((uVar10 & 0xff) == 1) {
    _objc_release(param_1);
    goto LAB_10481f9cc;
  }
  uVar2 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f210760);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lVar3 = 0;
    lStack_1c8 = 0;
  }
  else {
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar3 = lStack_b8;
    lStack_1c8 = lStack_c0;
    if ((int)plVar4 == 0) {
      lStack_1c8 = 0;
      lVar3 = 0;
    }
  }
  uVar11 = 0x524f544e45564e49;
  uVar2 = uVar11;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x524f544e45564e49,0xee00455059545f59);
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
    lVar5 = 0;
  }
  else {
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar5 = lStack_b8;
    lStack_d0 = lStack_c0;
    if ((int)plVar4 == 0) {
      lStack_d0 = 0;
      lVar5 = 0;
    }
  }
  uVar2 = 0xd000000000000011;
  uVar10 = 0xf210780;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011);
  func_0x00010bf66f40();
  _objc_release(uVar2);
  FUN_1046b123c();
  if ((uVar10 & 0xff) == 1) {
    _objc_release(param_1);
LAB_10481f9bc:
    _swift_bridgeObjectRelease(lVar5);
    lStack_128 = lVar3;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x524f544e45564e49,0xec00000044495f59);
    lVar6 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
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
      lStack_110 = 0;
      lStack_d8 = 0;
    }
    else {
      plVar4 = &lStack_c0;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      lStack_110 = lStack_c0;
      lStack_d8 = lStack_b8;
      if ((int)plVar4 == 0) {
        lStack_110 = 0;
        lStack_d8 = 0;
      }
    }
    uVar2 = 0x5449534f505f4441;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5449534f505f4441,0xeb000000004e4f49);
    func_0x00010bf66f40();
    _objc_release(uVar2);
    uVar2 = 0xd000000000000016;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f2107a0);
    func_0x00010bf66ce0();
    _objc_release(uVar2);
    uVar2 = 0xd00000000000001e;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f2107c0);
    func_0x00010bf66ce0();
    _objc_release(uVar2);
    uVar2 = 0x53455441515f5349;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x53455441515f5349,0xef50554f52475f54);
    func_0x00010bf66ce0();
    _objc_release(uVar2);
    uVar2 = 0x44415f4755424544;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44415f4755424544,0xeb0000000044495f);
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
      lStack_118 = 0;
      lStack_e0 = 0;
    }
    else {
      plVar4 = &lStack_c0;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      lStack_118 = lStack_c0;
      lStack_e0 = lStack_b8;
      if ((int)plVar4 == 0) {
        lStack_118 = 0;
        lStack_e0 = 0;
      }
    }
    uVar2 = 0xd000000000000011;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f2107e0);
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
      lStack_e8 = 0;
    }
    else {
      uVar2 = 0x112d38270;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      plVar4 = &lStack_c0;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
      lStack_e8 = lStack_c0;
      if ((int)plVar4 == 0) {
        lStack_e8 = 0;
      }
    }
    uVar2 = 0xd000000000000010;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f210800);
    func_0x00010bf66ce0();
    _objc_release(uVar2);
    uVar2 = 0xd00000000000001c;
    uVar10 = 0xf210820;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c);
    func_0x00010bf66f40();
    _objc_release(uVar2);
    func_0x0001042a6cc4();
    if ((uVar10 & 0xff) == 1) {
LAB_10481f99c:
      _objc_release(param_1);
LAB_10481f9a4:
      _swift_bridgeObjectRelease(lStack_e8);
      _swift_bridgeObjectRelease(lStack_e0);
      _swift_bridgeObjectRelease(lStack_d8);
      goto LAB_10481f9bc;
    }
    uVar2 = 0xd000000000000025;
    uVar10 = 0xf210840;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025);
    func_0x00010bf66f40();
    _objc_release(uVar2);
    func_0x000102d0e2a0();
    if ((uVar10 & 0xff) == 1) goto LAB_10481f99c;
    uVar2 = 0xd000000000000021;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f210870);
    func_0x00010bf66ce0();
    _objc_release(uVar2);
    uVar2 = 0x4c454e4e414843;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c454e4e414843,0xe700000000000000);
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
      lStack_198 = 0;
      lStack_128 = 0;
    }
    else {
      plVar4 = &lStack_c0;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      lStack_198 = lStack_c0;
      lStack_128 = lStack_b8;
      if ((int)plVar4 == 0) {
        lStack_198 = 0;
        lStack_128 = 0;
      }
    }
    uVar2 = 0x5f4c454e4e414843;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f4c454e4e414843,0xea00000000004449);
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
      lStack_1a0 = 0;
      lStack_130 = 0;
    }
    else {
      plVar4 = &lStack_c0;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      lStack_1a0 = lStack_c0;
      lStack_130 = lStack_b8;
      if ((int)plVar4 == 0) {
        lStack_1a0 = 0;
        lStack_130 = 0;
      }
    }
    uVar2 = 0x5f544355444f5250;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544355444f5250,0xec00000045505954);
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
      lStack_1a8 = 0;
      lStack_138 = 0;
    }
    else {
      plVar4 = &lStack_c0;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      lStack_1a8 = lStack_c0;
      lStack_138 = lStack_b8;
      if ((int)plVar4 == 0) {
        lStack_1a8 = 0;
        lStack_138 = 0;
      }
    }
    uVar11 = 0x454853494c425550;
    uVar2 = uVar11;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454853494c425550,0xe900000000000052);
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
      lStack_1b0 = 0;
      lStack_140 = 0;
    }
    else {
      plVar4 = &lStack_c0;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      lStack_1b0 = lStack_c0;
      lStack_140 = lStack_b8;
      if ((int)plVar4 == 0) {
        lStack_1b0 = 0;
        lStack_140 = 0;
      }
    }
    uVar2 = 0x5f4e4f4954494445;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f4e4f4954494445,0xea00000000004449);
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
      lStack_1b8 = 0;
      lStack_150 = 0;
    }
    else {
      plVar4 = &lStack_c0;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      lStack_1b8 = lStack_c0;
      lStack_150 = lStack_b8;
      if ((int)plVar4 == 0) {
        lStack_1b8 = 0;
        lStack_150 = 0;
      }
    }
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454853494c425550,0xec00000044495f52);
    func_0x00010bf66f00();
    _objc_release(uVar11);
    uVar2 = 0x495f524554534f50;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495f524554534f50,0xe900000000000044);
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
      lStack_1c0 = 0;
      lStack_148 = 0;
    }
    else {
      plVar4 = &lStack_c0;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      lStack_1c0 = lStack_c0;
      lStack_148 = lStack_b8;
      if ((int)plVar4 == 0) {
        lStack_1c0 = 0;
        lStack_148 = 0;
      }
    }
    uVar2 = 0xd000000000000014;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f2108a0);
    func_0x00010bf66ce0();
    _objc_release(uVar2);
    uVar2 = 0xd000000000000020;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f2108c0);
    func_0x00010bf66ce0();
    _objc_release(uVar2);
    uVar2 = 0x535f454c42414e45;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x535f454c42414e45,0xef44415f59524f54);
    func_0x00010bf66ce0();
    _objc_release(uVar2);
    uVar2 = 0xd000000000000012;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f2108f0);
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
      lStack_1d0 = 0;
      lVar6 = 0;
    }
    else {
      plVar4 = &lStack_c0;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      lVar6 = lStack_b8;
      lStack_1d0 = lStack_c0;
      if ((int)plVar4 == 0) {
        lStack_1d0 = 0;
        lVar6 = 0;
      }
    }
    uVar2 = 0xd000000000000016;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f210910);
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
      lStack_1d8 = 0;
      lStack_158 = 0;
    }
    else {
      plVar4 = &lStack_c0;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      lStack_1d8 = lStack_c0;
      lStack_158 = lStack_b8;
      if ((int)plVar4 == 0) {
        lStack_1d8 = 0;
        lStack_158 = 0;
      }
    }
    uVar2 = 0xd000000000000018;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f210930);
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
      lStack_1e0 = 0;
      lStack_160 = 0;
    }
    else {
      plVar4 = &lStack_c0;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      lStack_1e0 = lStack_c0;
      lStack_160 = lStack_b8;
      if ((int)plVar4 == 0) {
        lStack_1e0 = 0;
        lStack_160 = 0;
      }
    }
    uVar2 = 0xd000000000000023;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f210950);
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
      lStack_1e8 = 0;
      lVar7 = 0;
    }
    else {
      plVar4 = &lStack_c0;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      lVar7 = lStack_b8;
      lStack_1e8 = lStack_c0;
      if ((int)plVar4 == 0) {
        lStack_1e8 = 0;
        lVar7 = 0;
      }
    }
    uVar2 = 0xd000000000000012;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f210980);
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
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      _objc_release(param_1);
      _swift_bridgeObjectRelease(lVar5);
      _swift_bridgeObjectRelease(lVar3);
      _swift_bridgeObjectRelease(lStack_e8);
      _swift_bridgeObjectRelease(lStack_e0);
      _swift_bridgeObjectRelease(lStack_d8);
      _swift_bridgeObjectRelease(lVar7);
      _swift_bridgeObjectRelease(lStack_160);
      _swift_bridgeObjectRelease(lStack_158);
      _swift_bridgeObjectRelease(lVar6);
      _swift_bridgeObjectRelease(lStack_148);
      _swift_bridgeObjectRelease(lStack_150);
      _swift_bridgeObjectRelease(lStack_140);
      _swift_bridgeObjectRelease(lStack_138);
      _swift_bridgeObjectRelease(lStack_130);
      _swift_bridgeObjectRelease(lStack_128);
      func_0x00010006e7f4(&uStack_90);
      goto LAB_10481f9cc;
    }
    uVar2 = 0x112da1fa0;
    func_0x0001000285a8(0x112da1fa0,&UNK_10d945e90);
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
    lVar8 = lStack_c0;
    if (((ulong)plVar4 & 1) != 0) {
      uVar2 = 0xd00000000000001d;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f2109a0);
      lVar9 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar9 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar9);
        _swift_unknownObjectRelease(lVar9);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x00010006e7f4(&uStack_90);
        lVar9 = 0;
      }
      else {
        uVar2 = 0;
        FUN_10481add8(0);
        plVar4 = &lStack_c0;
        _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
        lVar9 = lStack_c0;
        if ((int)plVar4 == 0) {
          lVar9 = 0;
        }
      }
      uVar10 = 0xf2109c0;
      uVar2 = 0xd000000000000010;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010);
      func_0x00010bf66f40();
      _objc_release(uVar2);
      func_0x0001018aad68();
      if ((uVar10 & 0xff) != 1) {
        if (lVar3 == 0) {
          lStack_1c8 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_1c8,lVar3);
          _swift_bridgeObjectRelease(lVar3);
        }
        if (lVar5 == 0) {
          lStack_d0 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_d0,lVar5);
          _swift_bridgeObjectRelease(lVar5);
        }
        if (lStack_d8 == 0) {
          lStack_d8 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_110,lStack_d8);
          _swift_bridgeObjectRelease(lStack_d8);
          lStack_d8 = lStack_110;
        }
        if (lStack_e0 == 0) {
          lStack_e0 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_118,lStack_e0);
          _swift_bridgeObjectRelease(lStack_e0);
          lStack_e0 = lStack_118;
        }
        if (lStack_e8 == 0) {
          lStack_e8 = 0;
        }
        else {
          lVar3 = lStack_e8;
          __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lStack_e8,PTR___sSSN_11034da80);
          _swift_bridgeObjectRelease(lStack_e8);
          lStack_e8 = lVar3;
        }
        if (lStack_128 == 0) {
          lStack_110 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_198,lStack_128);
          _swift_bridgeObjectRelease(lStack_128);
          lStack_110 = lStack_198;
        }
        if (lStack_130 == 0) {
          lStack_118 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_1a0,lStack_130);
          _swift_bridgeObjectRelease(lStack_130);
          lStack_118 = lStack_1a0;
        }
        if (lStack_138 == 0) {
          lStack_130 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_1a8,lStack_138);
          _swift_bridgeObjectRelease(lStack_138);
          lStack_130 = lStack_1a8;
        }
        if (lStack_140 == 0) {
          lStack_128 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_1b0,lStack_140);
          _swift_bridgeObjectRelease(lStack_140);
          lStack_128 = lStack_1b0;
        }
        if (lStack_150 == 0) {
          lStack_1b8 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_1b8,lStack_150);
          _swift_bridgeObjectRelease(lStack_150);
        }
        if (lStack_148 == 0) {
          lStack_1c0 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_1c0,lStack_148);
          _swift_bridgeObjectRelease(lStack_148);
        }
        if (lVar6 == 0) {
          lStack_1d0 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_1d0,lVar6);
          _swift_bridgeObjectRelease(lVar6);
        }
        if (lStack_158 == 0) {
          lStack_1d8 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_1d8,lStack_158);
          _swift_bridgeObjectRelease(lStack_158);
        }
        if (lStack_160 == 0) {
          lStack_1e0 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_1e0,lStack_160);
          _swift_bridgeObjectRelease(lStack_160);
        }
        if (lVar7 == 0) {
          lStack_1e8 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_1e8,lVar7);
          _swift_bridgeObjectRelease(lVar7);
        }
        uVar2 = 0;
        func_0x0001002ed07c(0);
        lVar3 = lVar8;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar8,uVar2);
        _swift_bridgeObjectRelease(lVar8);
        func_0x00010bff1b40();
        _objc_release(lStack_1c8);
        _objc_release(lStack_d0);
        _objc_release(lStack_d8);
        _objc_release(lStack_e0);
        _objc_release(lStack_e8);
        _objc_release(lStack_110);
        _objc_release(lStack_118);
        _objc_release(lStack_130);
        _objc_release(lStack_128);
        _objc_release(lStack_1b8);
        _objc_release(lStack_1c0);
        _objc_release(lStack_1d0);
        _objc_release(lStack_1d8);
        _objc_release(lStack_1e0);
        _objc_release(lStack_1e8);
        _objc_release(lVar3);
        _objc_release(param_1);
        _objc_release(lVar9);
        return unaff_x20;
      }
      _objc_release(lVar9);
      _swift_bridgeObjectRelease(lVar8);
      _objc_release(param_1);
      _swift_bridgeObjectRelease(lVar7);
      _swift_bridgeObjectRelease(lStack_160);
      _swift_bridgeObjectRelease(lStack_158);
      _swift_bridgeObjectRelease(lVar6);
      _swift_bridgeObjectRelease(lStack_148);
      _swift_bridgeObjectRelease(lStack_150);
      _swift_bridgeObjectRelease(lStack_140);
      _swift_bridgeObjectRelease(lStack_138);
      _swift_bridgeObjectRelease(lStack_130);
      _swift_bridgeObjectRelease(lStack_128);
      goto LAB_10481f9a4;
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar5);
    _swift_bridgeObjectRelease(lVar3);
    _swift_bridgeObjectRelease(lStack_e8);
    _swift_bridgeObjectRelease(lStack_e0);
    _swift_bridgeObjectRelease(lStack_d8);
    _swift_bridgeObjectRelease(lVar7);
    _swift_bridgeObjectRelease(lStack_160);
    _swift_bridgeObjectRelease(lStack_158);
    _swift_bridgeObjectRelease(lVar6);
    _swift_bridgeObjectRelease(lStack_148);
    _swift_bridgeObjectRelease(lStack_150);
    _swift_bridgeObjectRelease(lStack_140);
    _swift_bridgeObjectRelease(lStack_138);
    _swift_bridgeObjectRelease(lStack_130);
  }
  _swift_bridgeObjectRelease(lStack_128);
LAB_10481f9cc:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 104820974; end: 10482099b; -[SCAdTargetingParameters initWithCoder:] */

void FUN_104820974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10481f348();
  return;
}



/* Entry: 10482099c; end: 1048209db; -[SCAdTargetingParameters description] */

void FUN_10482099c(void)

{
  undefined1 auStack_180 [352];
  
  _objc_retain();
  FUN_104820bb8(auStack_180);
  func_0x000102d12390(auStack_180);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048209dc; end: 104820a57; -[SCAdTargetingParameters init] */

void FUN_1048209dc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdTargetingParametersWrapper.swift",0x2e,2,0x180,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104820a24);
  (*pcVar1)();
}



/* Entry: 104820a58; end: 104820bb7; -[SCAdTargetingParameters .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104820a58(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090e58 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090e60 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090e70 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090e98 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090ea0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090ec8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090ed0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090ed8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090ee0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090ee8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090ef8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090f18 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090f20 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090f28 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090f30 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090f38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113090f40));
  return;
}



/* Entry: 104820bb8; end: 104821107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104820bb8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long lVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uStack_5a8;
  ulong uStack_5a0;
  undefined8 uStack_598;
  undefined1 auStack_488 [352];
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 uStack_2e0;
  undefined1 uStack_2df;
  undefined1 uStack_2de;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined1 uStack_237;
  undefined1 uStack_236;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined1 uStack_17f;
  undefined1 uStack_17e;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
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
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined1 uStack_d6;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar43 = *(undefined8 *)(param_2 + _DAT_113090e50);
  uVar1 = *(undefined8 *)(param_2 + _DAT_113090e58);
  uVar14 = ((undefined8 *)(param_2 + _DAT_113090e58))[1];
  uVar2 = *(undefined8 *)(param_2 + _DAT_113090e60);
  uVar15 = ((undefined8 *)(param_2 + _DAT_113090e60))[1];
  uVar35 = *(undefined8 *)(param_2 + _DAT_113090e68);
  uVar40 = *(undefined8 *)(param_2 + _DAT_113090e78);
  uVar27 = *(undefined1 *)(param_2 + _DAT_113090e80);
  uVar3 = *(undefined8 *)(param_2 + _DAT_113090e70);
  uVar16 = ((undefined8 *)(param_2 + _DAT_113090e70))[1];
  uVar28 = *(undefined1 *)(param_2 + _DAT_113090e88);
  uVar29 = *(undefined1 *)(param_2 + _DAT_113090e90);
  uVar4 = *(undefined8 *)(param_2 + _DAT_113090e98);
  uVar17 = ((undefined8 *)(param_2 + _DAT_113090e98))[1];
  uVar45 = *(undefined8 *)(param_2 + _DAT_113090ea0);
  uVar30 = *(undefined1 *)(param_2 + _DAT_113090ea8);
  uVar41 = *(undefined8 *)(param_2 + _DAT_113090eb0);
  uVar36 = *(undefined8 *)(param_2 + _DAT_113090eb8);
  uVar31 = *(undefined1 *)(param_2 + _DAT_113090ec0);
  uVar5 = *(undefined8 *)(param_2 + _DAT_113090ec8);
  uVar18 = ((undefined8 *)(param_2 + _DAT_113090ec8))[1];
  uVar6 = *(undefined8 *)(param_2 + _DAT_113090ed0);
  uVar19 = ((undefined8 *)(param_2 + _DAT_113090ed0))[1];
  uVar7 = *(undefined8 *)(param_2 + _DAT_113090ed8);
  uVar20 = ((undefined8 *)(param_2 + _DAT_113090ed8))[1];
  uVar8 = *(undefined8 *)(param_2 + _DAT_113090ee0);
  uVar21 = ((undefined8 *)(param_2 + _DAT_113090ee0))[1];
  uVar9 = *(undefined8 *)(param_2 + _DAT_113090ee8);
  uVar22 = ((undefined8 *)(param_2 + _DAT_113090ee8))[1];
  uVar37 = *(undefined8 *)(param_2 + _DAT_113090ef0);
  uVar10 = *(undefined8 *)(param_2 + _DAT_113090ef8);
  uVar23 = ((undefined8 *)(param_2 + _DAT_113090ef8))[1];
  uVar32 = *(undefined1 *)(param_2 + _DAT_113090f00);
  uVar33 = *(undefined1 *)(param_2 + _DAT_113090f08);
  uVar34 = *(undefined1 *)(param_2 + _DAT_113090f10);
  uVar11 = *(undefined8 *)(param_2 + _DAT_113090f18);
  uVar24 = ((undefined8 *)(param_2 + _DAT_113090f18))[1];
  uVar12 = *(undefined8 *)(param_2 + _DAT_113090f20);
  uVar25 = ((undefined8 *)(param_2 + _DAT_113090f20))[1];
  uVar13 = *(undefined8 *)(param_2 + _DAT_113090f28);
  uVar26 = ((undefined8 *)(param_2 + _DAT_113090f28))[1];
  uVar42 = *(undefined8 *)(param_2 + _DAT_113090f30);
  uVar44 = ((undefined8 *)(param_2 + _DAT_113090f30))[1];
  uVar46 = *(undefined8 *)(param_2 + _DAT_113090f38);
  lVar38 = *(long *)(param_2 + _DAT_113090f40);
  if (lVar38 == 0) {
    uStack_5a8 = 0;
    uStack_5a0 = 2;
    uStack_598 = 0;
  }
  else {
    uStack_5a0 = (ulong)*(byte *)(lVar38 + _DAT_113090d60);
    uStack_598 = *(undefined8 *)(lVar38 + _DAT_113090d68);
    uStack_5a8 = *(undefined8 *)(lVar38 + _DAT_113090d70);
  }
  uVar39 = *(undefined8 *)(param_2 + _DAT_113090f48);
  _swift_bridgeObjectRetain(uVar44);
  _swift_bridgeObjectRetain(uVar46);
  _swift_bridgeObjectRetain(uVar14);
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar17);
  _swift_bridgeObjectRetain(uVar45);
  _swift_bridgeObjectRetain(uVar18);
  _swift_bridgeObjectRetain(uVar19);
  _swift_bridgeObjectRetain(uVar20);
  _swift_bridgeObjectRetain(uVar21);
  _swift_bridgeObjectRetain(uVar22);
  _swift_bridgeObjectRetain(uVar23);
  _swift_bridgeObjectRetain(uVar24);
  _swift_bridgeObjectRetain(uVar25);
  _swift_bridgeObjectRetain(uVar26);
  _objc_release(param_2);
  uStack_1e8 = uStack_5a0;
  uStack_88 = uStack_5a0;
  uStack_80 = uStack_598;
  uStack_1e0 = uStack_598;
  uStack_1d8 = uStack_5a8;
  uStack_78 = uStack_5a8;
  uStack_328 = uVar43;
  uStack_320 = uVar1;
  uStack_318 = uVar14;
  uStack_310 = uVar2;
  uStack_308 = uVar15;
  uStack_300 = uVar35;
  uStack_2f8 = uVar3;
  uStack_2f0 = uVar16;
  uStack_2e8 = uVar40;
  uStack_2e0 = uVar27;
  uStack_2df = uVar28;
  uStack_2de = uVar29;
  uStack_2d8 = uVar4;
  uStack_2d0 = uVar17;
  uStack_2c8 = uVar45;
  uStack_2c0 = uVar30;
  uStack_2b8 = uVar41;
  uStack_2b0 = uVar36;
  uStack_2a8 = uVar31;
  uStack_2a0 = uVar5;
  uStack_298 = uVar18;
  uStack_290 = uVar6;
  uStack_288 = uVar19;
  uStack_280 = uVar7;
  uStack_278 = uVar20;
  uStack_270 = uVar8;
  uStack_268 = uVar21;
  uStack_260 = uVar9;
  uStack_258 = uVar22;
  uStack_250 = uVar37;
  uStack_248 = uVar10;
  uStack_240 = uVar23;
  uStack_238 = uVar32;
  uStack_237 = uVar33;
  uStack_236 = uVar34;
  uStack_230 = uVar11;
  uStack_228 = uVar24;
  uStack_220 = uVar12;
  uStack_218 = uVar25;
  uStack_210 = uVar13;
  uStack_208 = uVar26;
  uStack_200 = uVar42;
  uStack_1f8 = uVar44;
  uStack_1f0 = uVar46;
  uStack_1d0 = uVar39;
  uStack_1c8 = uVar43;
  uStack_1c0 = uVar1;
  uStack_1b8 = uVar14;
  uStack_1b0 = uVar2;
  uStack_1a8 = uVar15;
  uStack_1a0 = uVar35;
  uStack_198 = uVar3;
  uStack_190 = uVar16;
  uStack_188 = uVar40;
  uStack_180 = uVar27;
  uStack_17f = uVar28;
  uStack_17e = uVar29;
  uStack_178 = uVar4;
  uStack_170 = uVar17;
  uStack_168 = uVar45;
  uStack_160 = uVar30;
  uStack_158 = uVar41;
  uStack_150 = uVar36;
  uStack_148 = uVar31;
  uStack_140 = uVar5;
  uStack_138 = uVar18;
  uStack_130 = uVar6;
  uStack_128 = uVar19;
  uStack_120 = uVar7;
  uStack_118 = uVar20;
  uStack_110 = uVar8;
  uStack_108 = uVar21;
  uStack_100 = uVar9;
  uStack_f8 = uVar22;
  uStack_f0 = uVar37;
  uStack_e8 = uVar10;
  uStack_e0 = uVar23;
  uStack_d8 = uVar32;
  uStack_d7 = uVar33;
  uStack_d6 = uVar34;
  uStack_d0 = uVar11;
  uStack_c8 = uVar24;
  uStack_c0 = uVar12;
  uStack_b8 = uVar25;
  uStack_b0 = uVar13;
  uStack_a8 = uVar26;
  uStack_a0 = uVar42;
  uStack_98 = uVar44;
  uStack_90 = uVar46;
  uStack_70 = uVar39;
  func_0x000102d12354(&uStack_328,auStack_488);
  func_0x000102d12390(&uStack_1c8);
  _memcpy(param_1,&uStack_328,0x160);
  return;
}



/* Entry: 104821108; end: 10482114f;  */

undefined8 FUN_104821108(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104821150; end: 10482116f;  */

void FUN_104821150(void)

{
  _objc_opt_self(&PTR_PTR_1129d98f0);
  return;
}



/* Entry: 104821170; end: 10482119f;  */

void FUN_104821170(undefined8 param_1)

{
  _objc_allocWithZone();
  func_0x000104821924(param_1);
  return;
}



/* Entry: 1048211a0; end: 1048212cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048211a0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_113090f78))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090f78);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113090f80);
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF
            (uVar3,((undefined8 *)(unaff_x20 + _DAT_113090f80))[1]);
  uVar1 = uVar3;
  func_0x00010bfde980();
  _objc_release(uVar3);
  __ss6HasherV8_combineyySuF(uVar1);
  if (*(long *)(unaff_x20 + _DAT_113090f88) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047e6e30();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_113090f90);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048212d0; end: 10482151b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1048212d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long unaff_x20;
  uint uVar11;
  long lStack_78;
  long alStack_70 [4];
  
  lVar7 = unaff_x20;
  _swift_getObjectType();
  func_0x000104822450(param_1,alStack_70,0x112d387f8,&UNK_10d902650);
  if (alStack_70[3] == 0) {
    func_0x000104822498(alStack_70,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar3 = &lStack_78;
    _swift_dynamicCast(plVar3,alStack_70,PTR___sypN_11034f1a8 + 8,lVar7,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar7 = ((long *)(unaff_x20 + _DAT_113090f78))[1];
      lVar8 = ((long *)(lStack_78 + _DAT_113090f78))[1];
      uVar11 = (uint)(lVar7 == 0 && lVar8 == 0);
      if (lVar7 != 0 && lVar8 != 0) {
        lVar4 = *(long *)(unaff_x20 + _DAT_113090f78);
        if (lVar4 == *(long *)(lStack_78 + _DAT_113090f78) && lVar7 == lVar8) {
          uVar11 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar11 = (uint)lVar4;
        }
      }
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113090f80);
      uVar1 = ((undefined8 *)(unaff_x20 + _DAT_113090f80))[1];
      uVar6 = *(undefined8 *)(lStack_78 + _DAT_113090f80);
      uVar2 = ((undefined8 *)(lStack_78 + _DAT_113090f80))[1];
      func_0x00010006c00c(uVar6,uVar2);
      func_0x000100e25fcc(uVar5,uVar1,uVar6,uVar2);
      func_0x00010006c090(uVar6,uVar2);
      if (*(long *)(unaff_x20 + _DAT_113090f88) == 0) {
        uVar9 = (uint)(*(long *)(lStack_78 + _DAT_113090f88) == 0);
      }
      else {
        lVar7 = *(long *)(lStack_78 + _DAT_113090f88);
        if (lVar7 == 0) {
          lVar8 = 0;
          alStack_70[1] = 0;
          alStack_70[2] = 0;
        }
        else {
          lVar8 = 0;
          FUN_1047e97cc();
        }
        alStack_70[0] = lVar7;
        alStack_70[3] = lVar8;
        _objc_retain(lVar7);
        plVar3 = alStack_70;
        FUN_1047e7148(plVar3);
        uVar9 = (uint)plVar3;
        func_0x000104822498(alStack_70,0x112d387f8,&UNK_10d902650);
      }
      lVar7 = *(long *)(unaff_x20 + _DAT_113090f90);
      if (lVar7 == 0) {
        lVar8 = *(long *)(lStack_78 + _DAT_113090f90);
        lVar7 = lVar8;
        _objc_retain(lVar8);
        _objc_release(lStack_78);
        if (lVar8 != 0) {
          uVar10 = 0;
          goto LAB_1048214d4;
        }
        uVar10 = 1;
      }
      else {
        uVar6 = *(undefined8 *)(lStack_78 + _DAT_113090f90);
        _objc_retain(uVar6);
        func_0x00010c071ae0(lVar7);
        uVar10 = (uint)lVar7;
        _objc_release(uVar6);
        lVar7 = lStack_78;
LAB_1048214d4:
        _objc_release(lVar7);
      }
      if ((uVar11 & (uint)uVar5 & 1) != 0) {
        uVar9 = uVar9 & uVar10;
        goto LAB_1048214fc;
      }
    }
  }
  uVar9 = 0;
LAB_1048214fc:
  return uVar9 & 1;
}



/* Entry: 10482151c; end: 1048216af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482151c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_2c0 [608];
  
  puVar1 = (undefined8 *)(param_2 + _DAT_113090f78);
  uVar4 = puVar1[1];
  uVar7 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar7;
  uVar7 = *(undefined8 *)(param_2 + _DAT_113090f80);
  uVar2 = ((undefined8 *)(param_2 + _DAT_113090f80))[1];
  param_1[2] = uVar7;
  param_1[3] = uVar2;
  lVar5 = _DAT_113090f88;
  lVar3 = 0;
  FUN_10475cf44();
  lVar6 = (long)*(int *)(lVar3 + 0x18);
  lVar5 = *(long *)(param_2 + lVar5);
  if (lVar5 == 0) {
    lVar5 = 0;
    FUN_104739264();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))((long)param_1 + lVar6,1,1,lVar5);
    _swift_bridgeObjectRetain(uVar4);
    func_0x00010006c00c(uVar7,uVar2);
  }
  else {
    _swift_bridgeObjectRetain(uVar4);
    func_0x00010006c00c(uVar7,uVar2);
    _objc_retain(lVar5);
    func_0x0001047e75ac((long)param_1 + lVar6);
    lVar5 = 0;
    FUN_104739264();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))((long)param_1 + lVar6,0,1,lVar5);
  }
  lVar5 = (long)*(int *)(lVar3 + 0x1c);
  if (*(long *)(param_2 + _DAT_113090f90) != 0) {
    _objc_retain();
    FUN_104833ab4(auStack_2c0);
    _memcpy((long)param_1 + lVar5,auStack_2c0,0x260);
    func_0x000101553e8c((long)param_1 + lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  _objc_release(param_2);
  func_0x000101551a34(auStack_2c0);
  _memcpy((long)param_1 + lVar5,auStack_2c0,0x260);
  return;
}



/* Entry: 1048216b0; end: 10482170b; -[SCAdMediaShowcaseAttachment calloutText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048216b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090f78))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090f78);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10482170c; end: 104821767; -[SCAdMediaShowcaseAttachment showcaseToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482170c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113090f80);
  uVar2 = ((undefined8 *)(param_1 + _DAT_113090f80))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104821768; end: 104821777; -[SCAdMediaShowcaseAttachment deeplinkAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104821768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090f88));
  return;
}



/* Entry: 104821778; end: 104821787; -[SCAdMediaShowcaseAttachment webAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104821778(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090f90));
  return;
}



/* Entry: 104821788; end: 10482182b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104821788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090f78);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090f80);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113090f88) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113090f90) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10482182c; end: 104821bd7; -[SCAdMediaShowcaseAttachment initWithCalloutText:showcaseToken:deeplinkAttachment:webAttachment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10482182c(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lVar5 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar5 = param_2;
  }
  uVar4 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  _objc_release(uVar4);
  plVar1 = (long *)(param_1 + _DAT_113090f78);
  *plVar1 = param_3;
  plVar1[1] = lVar5;
  puVar2 = (undefined8 *)(param_1 + _DAT_113090f80);
  *puVar2 = param_4;
  puVar2[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113090f88) = param_5;
  *(undefined8 *)(param_1 + _DAT_113090f90) = param_6;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104821bd8; end: 104821c0b; -[SCAdMediaShowcaseAttachment hash] */

undefined8 FUN_104821bd8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1048211a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104821c0c; end: 104821c9b; -[SCAdMediaShowcaseAttachment isEqual:] */

uint FUN_104821c0c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1048212d0(&uStack_40);
  _objc_release(param_1);
  func_0x000104822498(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 104821c9c; end: 104821c9f; -[SCAdMediaShowcaseAttachment copyWithZone:] */

void FUN_104821c9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104821ca0; end: 104821e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104821ca0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_113090f78))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090f78);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x5f54554f4c4c4143;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f54554f4c4c4143,0xec00000054584554);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090f80);
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113090f80))[1]);
  uVar2 = 0x45534143574f4853;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45534143574f4853,0xee004e454b4f545f);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f210a10);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x415454415f424557;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x415454415f424557,0xee00544e454d4843);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104821e1c; end: 104821e6b; -[SCAdMediaShowcaseAttachment encodeWithCoder:] */

void FUN_104821e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104821ca0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104821e6c; end: 104821e9b;  */

void FUN_104821e6c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104821e9c(param_1);
  return;
}



/* Entry: 104821e9c; end: 1048222bf;  */

undefined8 FUN_104821e9c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 unaff_x20;
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
  uVar9 = 0;
  iVar3 = (int)&uStack_b0;
  iVar4 = (int)&uStack_b0;
  uVar5 = 0x5f54554f4c4c4143;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f54554f4c4c4143,0xec00000054584554);
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
    func_0x000104822498(&uStack_80,0x112d387f8,&UNK_10d902650);
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
  uVar7 = 0x45534143574f4853;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45534143574f4853,0xee004e454b4f545f);
  lVar8 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
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
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar6);
    func_0x000104822498(&uStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,PTR___s10Foundation4DataVN_110350ae0,6);
    uVar7 = uStack_b0;
    if ((uVar9 & 1) != 0) {
      uVar10 = 0xd000000000000013;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f210a10);
      lVar8 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
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
        func_0x000104822498(&uStack_80,0x112d387f8,&UNK_10d902650);
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        FUN_1047e97cc(0);
        _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,uVar10,6);
        uVar10 = uStack_b0;
        if (iVar3 == 0) {
          uVar10 = 0;
        }
      }
      uVar11 = 0x415454415f424557;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x415454415f424557,0xee00544e454d4843);
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
        func_0x000104822498(&uStack_80,0x112d387f8,&UNK_10d902650);
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        FUN_104834c18(0);
        _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,uVar11,6);
        uVar11 = uStack_b0;
        if (iVar4 == 0) {
          uVar11 = 0;
        }
      }
      if (lVar6 == 0) {
        uVar5 = 0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,lVar6);
        _swift_bridgeObjectRelease(lVar6);
      }
      uVar12 = uVar7;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar7,lStack_a8);
      func_0x00010bffaf00();
      func_0x00010006c090(uVar7,lStack_a8);
      _objc_release(uVar5);
      _objc_release(uVar12);
      _objc_release(param_1);
      _objc_release(uVar10);
      _objc_release(uVar11);
      return unaff_x20;
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar6);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1048222c0; end: 1048222e7; -[SCAdMediaShowcaseAttachment initWithCoder:] */

void FUN_1048222c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104821e9c();
  return;
}



/* Entry: 1048222e8; end: 104822373; -[SCAdMediaShowcaseAttachment description] */

void FUN_1048222e8(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_10475cf44();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_10482151c(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001048224d8(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      FUN_10475cf44);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104822374; end: 1048223ef; -[SCAdMediaShowcaseAttachment init] */

void FUN_104822374(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdMediaShowcaseAttachmentWrapper.swift",0x32,2,0x5f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048223bc);
  (*pcVar1)();
}



/* Entry: 1048223f0; end: 104822513; -[SCAdMediaShowcaseAttachment .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048223f0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090f78 + 8));
  func_0x00010006c090(*(undefined8 *)(param_1 + _DAT_113090f80),
                      ((undefined8 *)(param_1 + _DAT_113090f80))[1]);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113090f88));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113090f90));
  return;
}



/* Entry: 104822514; end: 104822533;  */

void FUN_104822514(void)

{
  _objc_opt_self(&PTR_PTR_1129d9ab8);
  return;
}



/* Entry: 104822534; end: 104822543; -[SCAdSnapBottomMedia adToLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104822534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090fc0));
  return;
}



/* Entry: 104822544; end: 104822553; -[SCAdSnapBottomMedia deepLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104822544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090fc8));
  return;
}



/* Entry: 104822554; end: 104822563; -[SCAdSnapBottomMedia appInstall] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104822554(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090fd0));
  return;
}



/* Entry: 104822564; end: 104822573; -[SCAdSnapBottomMedia webview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104822564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090fd8));
  return;
}



/* Entry: 104822574; end: 104822583; -[SCAdSnapBottomMedia collection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104822574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090fe0));
  return;
}



/* Entry: 104822584; end: 104822593; -[SCAdSnapBottomMedia adToCall] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104822584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090fe8));
  return;
}



/* Entry: 104822594; end: 1048225a3; -[SCAdSnapBottomMedia adToMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104822594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090ff0));
  return;
}


