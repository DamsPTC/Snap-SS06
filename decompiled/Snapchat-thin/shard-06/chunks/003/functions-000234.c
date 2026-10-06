/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1047cc43c; end: 1047cc463; -[SCAdMediaPlayerDecision initWithCoder:] */

void FUN_1047cc43c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047cc2f8();
  return;
}



/* Entry: 1047cc464; end: 1047cc47f; -[SCAdMediaPlayerDecision description] */

void FUN_1047cc464(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047cc480; end: 1047cc4fb; -[SCAdMediaPlayerDecision init] */

void FUN_1047cc480(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdMediaPlayerDecisionWrapper.swift",0x2e,2,0x55,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047cc4c8);
  (*pcVar1)();
}



/* Entry: 1047cc4fc; end: 1047cc4ff; -[SCAdMediaPlayerDecision .cxx_destruct] */

void FUN_1047cc4fc(void)

{
  return;
}



/* Entry: 1047cc500; end: 1047cc51f;  */

void FUN_1047cc500(void)

{
  _objc_opt_self(&PTR_PTR_1129d45b0);
  return;
}



/* Entry: 1047cc520; end: 1047cc523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cc520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f498) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308f4a0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308f4a8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047cc524; end: 1047cc5c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1047cc524(undefined8 param_1)

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
      iVar1 = *(int *)(unaff_x20 + _DAT_11308f4d8);
      iVar2 = *(int *)(lStack_58 + _DAT_11308f4d8);
      _objc_release();
      return iVar1 == iVar2;
    }
  }
  return false;
}



/* Entry: 1047cc5c4; end: 1047cc5d7; -[SCAdMultiSegmentDecision multiSegmentType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047cc5c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f4d8);
}



/* Entry: 1047cc5d8; end: 1047cc623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cc5d8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f4d8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047cc624; end: 1047cc66f; -[SCAdMultiSegmentDecision initWithMultiSegmentType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cc624(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308f4d8) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047cc670; end: 1047cc6b7; -[SCAdMultiSegmentDecision hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cc670(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308f4d8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047cc6b8; end: 1047cc737; -[SCAdMultiSegmentDecision isEqual:] */

uint FUN_1047cc6b8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047cc524(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047cc738; end: 1047cc73b; -[SCAdMultiSegmentDecision copyWithZone:] */

void FUN_1047cc738(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047cc73c; end: 1047cc7c7; -[SCAdMultiSegmentDecision encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cc73c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20e000);
  func_0x00010bf92fc0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047cc7c8; end: 1047cc7f7;  */

void FUN_1047cc7c8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047cc7f8(param_1);
  return;
}



/* Entry: 1047cc7f8; end: 1047cc8a3;  */

undefined8 FUN_1047cc7f8(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20e000);
  uVar2 = param_1;
  func_0x00010bf66f40();
  _objc_release(uVar1);
  if (uVar2 < 3) {
    func_0x00010c02caa0();
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



/* Entry: 1047cc8a4; end: 1047cc8cb; -[SCAdMultiSegmentDecision initWithCoder:] */

void FUN_1047cc8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047cc7f8();
  return;
}



/* Entry: 1047cc8cc; end: 1047cc8e7; -[SCAdMultiSegmentDecision description] */

void FUN_1047cc8cc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047cc8e8; end: 1047cc963; -[SCAdMultiSegmentDecision init] */

void FUN_1047cc8e8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdMultiSegmentDecisionWrapper.swift",0x2f,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047cc930);
  (*pcVar1)();
}



/* Entry: 1047cc964; end: 1047cc967; -[SCAdMultiSegmentDecision .cxx_destruct] */

void FUN_1047cc964(void)

{
  return;
}



/* Entry: 1047cc968; end: 1047cc987;  */

void FUN_1047cc968(void)

{
  _objc_opt_self(&PTR_PTR_1129d4690);
  return;
}



/* Entry: 1047cc988; end: 1047cc98b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cc988(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f4d8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047cc98c; end: 1047cca2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1047cc98c(undefined8 param_1)

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
      iVar1 = *(int *)(unaff_x20 + _DAT_11308f508);
      iVar2 = *(int *)(lStack_58 + _DAT_11308f508);
      _objc_release();
      return iVar1 == iVar2;
    }
  }
  return false;
}



/* Entry: 1047cca2c; end: 1047cca3f; -[SCAdProductDecision productType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047cca2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f508);
}



/* Entry: 1047cca40; end: 1047cca8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cca40(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f508) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047cca8c; end: 1047ccad7; -[SCAdProductDecision initWithProductType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cca8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308f508) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047ccad8; end: 1047ccb1f; -[SCAdProductDecision hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ccad8(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308f508));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047ccb20; end: 1047ccb9f; -[SCAdProductDecision isEqual:] */

uint FUN_1047ccb20(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047cc98c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047ccba0; end: 1047ccba3; -[SCAdProductDecision copyWithZone:] */

void FUN_1047ccba0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047ccba4; end: 1047cccff; -[SCAdProductDecision encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ccba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0x5f544355444f5250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544355444f5250,0xec00000045505954);
  func_0x00010bf92fc0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047ccd00; end: 1047ccdc7; -[SCAdProductDecision initWithCoder:] */

undefined8 FUN_1047ccd00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  uVar1 = 0x5f544355444f5250;
  uVar3 = 0x45505954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544355444f5250);
  uVar2 = param_3;
  func_0x00010bf66f40(param_3);
  _objc_release(uVar1);
  func_0x0001046b9f80(uVar2);
  if ((uVar3 & 0xff) == 1) {
    _objc_release(param_3);
    uVar2 = param_1;
    _swift_getObjectType(param_1);
    _swift_deallocPartialClassInstance(param_1,uVar2,0x10,7);
    param_1 = 0;
  }
  else {
    func_0x00010c03a9a0(param_1);
    _objc_release(param_3);
  }
  return param_1;
}



/* Entry: 1047ccdc8; end: 1047ccde3; -[SCAdProductDecision description] */

void FUN_1047ccdc8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047ccde4; end: 1047cce5f; -[SCAdProductDecision init] */

void FUN_1047ccde4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdProductDecisionWrapper.swift",
             0x2a,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047cce2c);
  (*pcVar1)();
}



/* Entry: 1047cce60; end: 1047cce63; -[SCAdProductDecision .cxx_destruct] */

void FUN_1047cce60(void)

{
  return;
}



/* Entry: 1047cce64; end: 1047cce83;  */

void FUN_1047cce64(void)

{
  _objc_opt_self(&PTR_PTR_1129d4760);
  return;
}



/* Entry: 1047cce84; end: 1047cce87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cce84(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f508) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047cce88; end: 1047ccf67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cce88(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_130 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_allocWithZone();
  uStack_68 = param_1[0x11];
  uStack_70 = param_1[0x10];
  uStack_58 = param_1[0x13];
  uStack_60 = param_1[0x12];
  uStack_48 = param_1[0x15];
  uStack_50 = param_1[0x14];
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_78 = param_1[0xf];
  uStack_80 = param_1[0xe];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  FUN_1047cbe84(0);
  _objc_allocWithZone();
  puVar1 = &uStack_f0;
  FUN_1047c986c();
  *(undefined8 **)(unaff_x20 + _DAT_11308f538) = puVar1;
  uStack_118 = param_1[0x17];
  uStack_120 = param_1[0x16];
  uStack_110 = param_1[0x18];
  uStack_108 = (undefined1)param_1[0x19];
  uStack_ff = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_107 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_100 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  FUN_1047c92a8(0);
  _objc_allocWithZone();
  puVar1 = &uStack_120;
  FUN_1047c87cc();
  *(undefined8 **)(unaff_x20 + _DAT_11308f540) = puVar1;
  _objc_msgSendSuper2(auStack_130,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047ccf68; end: 1047cd243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ccf68(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_198 [72];
  undefined1 auStack_150 [72];
  undefined1 auStack_108 [72];
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  FUN_1047c9d50();
  __ss6HasherV8_combineyySuF();
  lVar2 = *(long *)(unaff_x20 + _DAT_11308f540);
  __ss6HasherVABycfC(auStack_c0);
  lVar1 = *(long *)(lVar2 + _DAT_11308f3b0);
  __ss6HasherVABycfC(auStack_108);
  lVar1 = *(long *)(lVar1 + _DAT_11308f570);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_108);
    _objc_release(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(lVar2 + _DAT_11308f3b8);
  __ss6HasherVABycfC(auStack_150);
  lVar1 = *(long *)(lVar1 + _DAT_11308f5d0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_150);
    _objc_release(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(lVar2 + _DAT_11308f3c0);
  __ss6HasherVABycfC(auStack_198);
  lVar1 = *(long *)(lVar1 + _DAT_11308f5a0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_198);
    _objc_release(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047cd244; end: 1047cd253; -[SCAdSpec decisions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cd244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f538));
  return;
}



/* Entry: 1047cd254; end: 1047cd263; -[SCAdSpec configurations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cd254(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f540));
  return;
}



/* Entry: 1047cd264; end: 1047cd2c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cd264(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f538) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308f540) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047cd2c8; end: 1047cd33f; -[SCAdSpec initWithDecisions:configurations:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cd2c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308f538) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308f540) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1047cd340; end: 1047cd373; -[SCAdSpec hash] */

undefined8 FUN_1047cd340(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047ccf68();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047cd374; end: 1047cd3f3; -[SCAdSpec isEqual:] */

uint FUN_1047cd374(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001047cd134(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047cd3f4; end: 1047cd3f7; -[SCAdSpec copyWithZone:] */

void FUN_1047cd3f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047cd3f8; end: 1047cd4cf; -[SCAdSpec encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cd3f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0x4e4f495349434544;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f495349434544,0xe900000000000053);
  func_0x00010bf93020(param_3);
  _objc_release(uVar1);
  uVar1 = 0x52554749464e4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x52554749464e4f43,0xee00534e4f495441);
  func_0x00010bf93020(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047cd4d0; end: 1047cd4ff;  */

void FUN_1047cd4d0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047cd500(param_1);
  return;
}



/* Entry: 1047cd500; end: 1047cd70b;  */

undefined8 FUN_1047cd500(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 unaff_x20;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar2 = 0x4e4f495349434544;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f495349434544,0xe900000000000053);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
LAB_1047cd6b4:
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar2 = 0;
    FUN_1047cbe84(0);
    puVar1 = PTR___sypN_11034f1a8;
    plVar4 = &lStack_88;
    _swift_dynamicCast(plVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar2,6);
    lVar3 = lStack_88;
    if (((ulong)plVar4 & 1) != 0) {
      uVar2 = 0x52554749464e4f43;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x52554749464e4f43,0xee00534e4f495441);
      lVar5 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar5 == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar5);
        _swift_unknownObjectRelease(lVar5);
      }
      uStack_58 = uStack_78;
      uStack_60 = uStack_80;
      lStack_48 = lStack_68;
      uStack_50 = uStack_70;
      if (lStack_68 == 0) {
        _objc_release(param_1);
        param_1 = lVar3;
        goto LAB_1047cd6b4;
      }
      uVar2 = 0;
      FUN_1047c92a8(0);
      plVar4 = &lStack_88;
      _swift_dynamicCast(plVar4,&uStack_60,puVar1 + 8,uVar2,6);
      if (((ulong)plVar4 & 1) != 0) {
        func_0x00010c009720();
        _objc_release(param_1);
        _objc_release(lStack_88);
        _objc_release(lVar3);
        return unaff_x20;
      }
      _objc_release(param_1);
      param_1 = lVar3;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047cd70c; end: 1047cd733; -[SCAdSpec initWithCoder:] */

void FUN_1047cd70c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047cd500();
  return;
}



/* Entry: 1047cd734; end: 1047cd777; -[SCAdSpec description] */

void FUN_1047cd734(undefined8 param_1)

{
  undefined1 auStack_100 [224];
  
  _objc_retain();
  FUN_1047cd82c(auStack_100);
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047cd778; end: 1047cd7f3; -[SCAdSpec init] */

void FUN_1047cd778(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdSpecWrapper.swift",0x1f,2,0x49,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047cd7c0);
  (*pcVar1)();
}



/* Entry: 1047cd7f4; end: 1047cd82b; -[SCAdSpec .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cd7f4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f538));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308f540));
  return;
}



/* Entry: 1047cd82c; end: 1047cdac3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cd82c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(*(undefined8 *)(param_3 + _DAT_11308f538));
  FUN_1047cbb80(&uStack_120);
  lVar4 = _DAT_11308f5d0;
  lVar7 = *(long *)(param_3 + _DAT_11308f540);
  lVar6 = *(long *)(*(long *)(lVar7 + _DAT_11308f3b0) + _DAT_11308f570);
  bVar1 = lVar6 == 0;
  if (bVar1) {
    lVar8 = *(long *)(lVar7 + _DAT_11308f3b8);
    puVar5 = &UNK_10dd356e0;
    _swift_getKeyPath(&UNK_10dd356e0);
    lVar4 = *(long *)(lVar8 + lVar4);
    _objc_retain(lVar7);
    lVar6 = 0;
  }
  else {
    lVar8 = lVar7;
    _objc_retain();
    func_0x00010c067fc0();
    lVar4 = _DAT_11308f5d0;
    lVar8 = *(long *)(lVar8 + _DAT_11308f3b8);
    puVar5 = &UNK_10dd356e0;
    _swift_getKeyPath(&UNK_10dd356e0);
    lVar4 = *(long *)(lVar8 + lVar4);
  }
  bVar3 = lVar4 != 0;
  if (bVar3) {
    _objc_retain();
    _objc_retain();
    _objc_retain(lVar8);
    func_0x00010bf885a0(lVar4);
    _objc_release(lVar8);
    _objc_release(lVar4);
    _objc_release(lVar4);
    _swift_release(puVar5);
    lVar8 = _DAT_11308f5a0;
    lVar4 = *(long *)(lVar7 + _DAT_11308f3c0);
    puVar5 = &UNK_10dd35718;
    _swift_getKeyPath(&UNK_10dd35718);
    lVar8 = *(long *)(lVar4 + lVar8);
  }
  else {
    _swift_release(puVar5);
    lVar8 = _DAT_11308f5a0;
    lVar4 = *(long *)(lVar7 + _DAT_11308f3c0);
    puVar5 = &UNK_10dd35718;
    _swift_getKeyPath(&UNK_10dd35718);
    lVar8 = *(long *)(lVar4 + lVar8);
    param_2 = 0;
  }
  bVar2 = lVar8 == 0;
  if (bVar2) {
    lVar9 = 0;
  }
  else {
    _objc_retain();
    _objc_retain();
    _objc_retain(lVar4);
    lVar9 = lVar8;
    func_0x00010c067fc0();
    _objc_release(lVar7);
    _objc_release(lVar4);
    _objc_release(lVar8);
    lVar7 = lVar8;
  }
  _objc_release(lVar7);
  _swift_release(puVar5);
  param_1[0x11] = uStack_98;
  param_1[0x10] = uStack_a0;
  param_1[0x13] = uStack_88;
  param_1[0x12] = uStack_90;
  param_1[0x15] = uStack_78;
  param_1[0x14] = uStack_80;
  param_1[9] = uStack_d8;
  param_1[8] = uStack_e0;
  param_1[0xb] = uStack_c8;
  param_1[10] = uStack_d0;
  param_1[0xd] = uStack_b8;
  param_1[0xc] = uStack_c0;
  param_1[0xf] = uStack_a8;
  param_1[0xe] = uStack_b0;
  param_1[1] = uStack_118;
  *param_1 = uStack_120;
  param_1[3] = uStack_108;
  param_1[2] = uStack_110;
  param_1[5] = uStack_f8;
  param_1[4] = uStack_100;
  param_1[7] = uStack_e8;
  param_1[6] = uStack_f0;
  param_1[0x16] = lVar6;
  *(bool *)(param_1 + 0x17) = bVar1;
  param_1[0x18] = param_2;
  *(bool *)(param_1 + 0x19) = !bVar3;
  param_1[0x1a] = lVar9;
  *(bool *)(param_1 + 0x1b) = bVar2;
  return;
}



/* Entry: 1047cdac4; end: 1047cdae3;  */

void FUN_1047cdac4(void)

{
  _objc_opt_self(&PTR_PTR_1129d4830);
  return;
}



/* Entry: 1047cdae4; end: 1047cdb63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cdae4(undefined8 param_1,char param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  if (param_2 == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11308f570) = puVar1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047cdb64; end: 1047cdc83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047cdb64(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
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
      lVar5 = *(long *)(unaff_x20 + _DAT_11308f570);
      lVar4 = *(long *)(lStack_68 + _DAT_11308f570);
      if (lVar5 != 0) {
        uVar3 = 0;
        if (lVar4 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar4);
          _objc_retain(lVar5);
          lVar2 = lVar5;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar3 = (uint)lVar2;
          _objc_release(lVar5);
          _objc_release(lVar4);
        }
        _objc_release(lStack_68);
        goto LAB_1047cdc3c;
      }
      lVar5 = lVar4;
      _objc_retain(lVar4);
      _objc_release(lStack_68);
      if (lVar4 == 0) {
        uVar3 = 1;
        goto LAB_1047cdc3c;
      }
      _objc_release(lVar5);
    }
  }
  uVar3 = 0;
LAB_1047cdc3c:
  return uVar3 & 1;
}



/* Entry: 1047cdc84; end: 1047cdc93; -[SCAdEndCardConfiguration screenshotDisplayQuantity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cdc84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f570));
  return;
}



/* Entry: 1047cdc94; end: 1047cdcdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cdc94(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f570) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047cdce0; end: 1047cdd37; -[SCAdEndCardConfiguration initWithScreenshotDisplayQuantity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cdce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308f570) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1047cdd38; end: 1047cdddb; -[SCAdEndCardConfiguration hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1047cdd38(long param_1)

{
  long lVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = *(long *)(param_1 + _DAT_11308f570);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar1 = param_1;
    _objc_retain(param_1);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(param_1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1047cdddc; end: 1047cde5b; -[SCAdEndCardConfiguration isEqual:] */

uint FUN_1047cdddc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047cdb64(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047cde5c; end: 1047cde5f; -[SCAdEndCardConfiguration copyWithZone:] */

void FUN_1047cde5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047cde60; end: 1047cdeeb; -[SCAdEndCardConfiguration encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cde60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20e0a0);
  func_0x00010bf93020(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1047cdeec; end: 1047cdf2b;  */

undefined8 FUN_1047cdeec(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1047ce020(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047cdf2c; end: 1047cdf67; -[SCAdEndCardConfiguration initWithCoder:] */

undefined8 FUN_1047cdf2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1047ce020();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1047cdf68; end: 1047cdf93; -[SCAdEndCardConfiguration description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cdf68(long param_1)

{
  func_0x00010c067fc0(*(undefined8 *)(param_1 + _DAT_11308f570));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047cdf94; end: 1047ce00f; -[SCAdEndCardConfiguration init] */

void FUN_1047cdf94(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdEndCardConfigurationWrapper.swift",0x2f,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047cdfdc);
  (*pcVar1)();
}



/* Entry: 1047ce010; end: 1047ce01f; -[SCAdEndCardConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ce010(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308f570));
  return;
}



/* Entry: 1047ce020; end: 1047ce11f;  */

undefined8 FUN_1047ce020(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20e0a0);
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (param_1 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_70,param_1);
    _swift_unknownObjectRelease(param_1);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    func_0x00010006e7f4(&uStack_50);
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    puVar2 = &uStack_78;
    _swift_dynamicCast(puVar2,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
    uVar1 = uStack_78;
    if ((int)puVar2 == 0) {
      uVar1 = 0;
    }
  }
  func_0x00010c0426e0();
  _objc_release(uVar1);
  return unaff_x20;
}



/* Entry: 1047ce120; end: 1047ce13f;  */

void FUN_1047ce120(void)

{
  _objc_opt_self(&PTR_PTR_1129d4908);
  return;
}



/* Entry: 1047ce140; end: 1047ce1bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ce140(undefined8 param_1,char param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  if (param_2 == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11308f5a0) = puVar1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047ce1c0; end: 1047ce2df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047ce1c0(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
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
      lVar5 = *(long *)(unaff_x20 + _DAT_11308f5a0);
      lVar4 = *(long *)(lStack_68 + _DAT_11308f5a0);
      if (lVar5 != 0) {
        uVar3 = 0;
        if (lVar4 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar4);
          _objc_retain(lVar5);
          lVar2 = lVar5;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar3 = (uint)lVar2;
          _objc_release(lVar5);
          _objc_release(lVar4);
        }
        _objc_release(lStack_68);
        goto LAB_1047ce298;
      }
      lVar5 = lVar4;
      _objc_retain(lVar4);
      _objc_release(lStack_68);
      if (lVar4 == 0) {
        uVar3 = 1;
        goto LAB_1047ce298;
      }
      _objc_release(lVar5);
    }
  }
  uVar3 = 0;
LAB_1047ce298:
  return uVar3 & 1;
}



/* Entry: 1047ce2e0; end: 1047ce2ef; -[SCAdProgressBarConfiguration segmentIntervalMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ce2e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f5a0));
  return;
}



/* Entry: 1047ce2f0; end: 1047ce33b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ce2f0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f5a0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047ce33c; end: 1047ce393; -[SCAdProgressBarConfiguration initWithSegmentIntervalMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ce33c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308f5a0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1047ce394; end: 1047ce437; -[SCAdProgressBarConfiguration hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1047ce394(long param_1)

{
  long lVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = *(long *)(param_1 + _DAT_11308f5a0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar1 = param_1;
    _objc_retain(param_1);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(param_1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1047ce438; end: 1047ce4b7; -[SCAdProgressBarConfiguration isEqual:] */

uint FUN_1047ce438(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047ce1c0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047ce4b8; end: 1047ce4bb; -[SCAdProgressBarConfiguration copyWithZone:] */

void FUN_1047ce4b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047ce4bc; end: 1047ce547; -[SCAdProgressBarConfiguration encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ce4bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20e0f0);
  func_0x00010bf93020(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1047ce548; end: 1047ce587;  */

undefined8 FUN_1047ce548(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1047ce67c(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047ce588; end: 1047ce5c3; -[SCAdProgressBarConfiguration initWithCoder:] */

undefined8 FUN_1047ce588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1047ce67c();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1047ce5c4; end: 1047ce5ef; -[SCAdProgressBarConfiguration description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ce5c4(long param_1)

{
  func_0x00010c067fc0(*(undefined8 *)(param_1 + _DAT_11308f5a0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047ce5f0; end: 1047ce66b; -[SCAdProgressBarConfiguration init] */

void FUN_1047ce5f0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdProgressBarConfigurationWrapper.swift",0x33,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047ce638);
  (*pcVar1)();
}



/* Entry: 1047ce66c; end: 1047ce67b; -[SCAdProgressBarConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ce66c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308f5a0));
  return;
}



/* Entry: 1047ce67c; end: 1047ce77b;  */

undefined8 FUN_1047ce67c(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20e0f0);
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (param_1 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_70,param_1);
    _swift_unknownObjectRelease(param_1);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    func_0x00010006e7f4(&uStack_50);
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    puVar2 = &uStack_78;
    _swift_dynamicCast(puVar2,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
    uVar1 = uStack_78;
    if ((int)puVar2 == 0) {
      uVar1 = 0;
    }
  }
  func_0x00010c043a00();
  _objc_release(uVar1);
  return unaff_x20;
}



/* Entry: 1047ce77c; end: 1047ce79b;  */

void FUN_1047ce77c(void)

{
  _objc_opt_self(&PTR_PTR_1129d49d8);
  return;
}



/* Entry: 1047ce79c; end: 1047ce827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ce79c(undefined8 param_1,char param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  if (param_2 == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_11308f5d0) = puVar1;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047ce828; end: 1047ce947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047ce828(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
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
      lVar5 = *(long *)(unaff_x20 + _DAT_11308f5d0);
      lVar4 = *(long *)(lStack_68 + _DAT_11308f5d0);
      if (lVar5 != 0) {
        uVar3 = 0;
        if (lVar4 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar4);
          _objc_retain(lVar5);
          lVar2 = lVar5;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar3 = (uint)lVar2;
          _objc_release(lVar5);
          _objc_release(lVar4);
        }
        _objc_release(lStack_68);
        goto LAB_1047ce900;
      }
      lVar5 = lVar4;
      _objc_retain(lVar4);
      _objc_release(lStack_68);
      if (lVar4 == 0) {
        uVar3 = 1;
        goto LAB_1047ce900;
      }
      _objc_release(lVar5);
    }
  }
  uVar3 = 0;
LAB_1047ce900:
  return uVar3 & 1;
}



/* Entry: 1047ce948; end: 1047ce957; -[SCAdPromotedStoryTileConfiguration attachmentToScreenRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ce948(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f5d0));
  return;
}



/* Entry: 1047ce958; end: 1047ce9a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ce958(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f5d0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047ce9a4; end: 1047ce9fb; -[SCAdPromotedStoryTileConfiguration initWithAttachmentToScreenRatio:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ce9a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308f5d0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1047ce9fc; end: 1047cea9f; -[SCAdPromotedStoryTileConfiguration hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1047ce9fc(long param_1)

{
  long lVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = *(long *)(param_1 + _DAT_11308f5d0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar1 = param_1;
    _objc_retain(param_1);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(param_1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1047ceaa0; end: 1047ceb1f; -[SCAdPromotedStoryTileConfiguration isEqual:] */

uint FUN_1047ceaa0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047ce828(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047ceb20; end: 1047ceb23; -[SCAdPromotedStoryTileConfiguration copyWithZone:] */

void FUN_1047ceb20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047ceb24; end: 1047cebaf; -[SCAdPromotedStoryTileConfiguration encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ceb24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20e150);
  func_0x00010bf93020(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1047cebb0; end: 1047cebef;  */

undefined8 FUN_1047cebb0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1047cece4(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047cebf0; end: 1047cec2b; -[SCAdPromotedStoryTileConfiguration initWithCoder:] */

undefined8 FUN_1047cebf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1047cece4();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1047cec2c; end: 1047cec57; -[SCAdPromotedStoryTileConfiguration description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cec2c(long param_1)

{
  func_0x00010bf885a0(*(undefined8 *)(param_1 + _DAT_11308f5d0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047cec58; end: 1047cecd3; -[SCAdPromotedStoryTileConfiguration init] */

void FUN_1047cec58(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdPromotedStoryTileConfigurationWrapper.swift",0x39,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047ceca0);
  (*pcVar1)();
}



/* Entry: 1047cecd4; end: 1047cece3; -[SCAdPromotedStoryTileConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cecd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308f5d0));
  return;
}


