/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103e29fe8; end: 103e2a02b; -[SCSCMinervaServicesSaberServiceProvider end] */

void FUN_103e29fe8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e2a02c; end: 103e2a1c3;  */

void FUN_103e2a02c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0e41360)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000028,0x800000010f1beca0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "CameoUserSessionScopeGraphBridge/SCSCMinervaServicesSaberServiceProvider.swift",
                   0x4e,2,0x3d,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2a1c4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52f98();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e2a1c4; end: 103e2a26f; -[SCSCMinervaServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e2a1c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_103e2a02c(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e2a270; end: 103e2a2e3; -[SCSCMinervaServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2a270(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113015da8,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113015db0,0);
  *(undefined8 *)(param_1 + _DAT_113015db8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e2a2e4; end: 103e2a317;  */

void FUN_103e2a2e4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e2a318; end: 103e2a35f; -[SCSCMinervaServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2a318(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113015da8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113015db0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113015db8));
  return;
}



/* Entry: 103e2a360; end: 103e2a37f;  */

void FUN_103e2a360(void)

{
  _objc_opt_self(&PTR_PTR_113015e00);
  return;
}



/* Entry: 103e2a380; end: 103e2a3d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103e2a380(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_113015e68);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 103e2a3d4; end: 103e2a42f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2a3d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113015e68);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 103e2a430; end: 103e2a46f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103e2a430(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113015e68;
  _swift_beginAccess(unaff_x20 + _DAT_113015e68,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103e2af14;
  return auVar2;
}



/* Entry: 103e2a470; end: 103e2a487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103e2a470(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_113015e70);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 103e2a488; end: 103e2a4c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103e2a488(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113015e70;
  _swift_beginAccess(unaff_x20 + _DAT_113015e70,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103e2af10;
  return auVar2;
}



/* Entry: 103e2a4c8; end: 103e2a4df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103e2a4c8(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_113015e78);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 103e2a4e0; end: 103e2a51f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103e2a4e0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113015e78;
  _swift_beginAccess(unaff_x20 + _DAT_113015e78,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103e2a520;
  return auVar2;
}



/* Entry: 103e2a520; end: 103e2a53b;  */

void FUN_103e2a520(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103e2a53c; end: 103e2a57b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103e2a53c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113015e80;
  _swift_beginAccess(unaff_x20 + _DAT_113015e80,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103e2af18;
  return auVar2;
}



/* Entry: 103e2a57c; end: 103e2a587;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103e2a57c(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_113015e88);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 103e2a588; end: 103e2a5d7;  */

undefined1  [16] FUN_103e2a588(long *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *param_1);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 103e2a5d8; end: 103e2a5e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2a5d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113015e88);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 103e2a5e4; end: 103e2a63b;  */

void FUN_103e2a5e4(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_3);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 103e2a63c; end: 103e2a67b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103e2a63c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113015e88;
  _swift_beginAccess(unaff_x20 + _DAT_113015e88,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103e2af1c;
  return auVar2;
}



/* Entry: 103e2a67c; end: 103e2a90f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2a67c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_d8 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113015e70);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113015e78);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_113015e80);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_113015e88);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar5 = (undefined8 *)(unaff_x20 + _DAT_113015e68);
  *puVar5 = param_1;
  puVar5[1] = param_2;
  _swift_beginAccess(puVar1,auStack_80,1,0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _swift_beginAccess(puVar2,auStack_98,1,0);
  *puVar2 = param_5;
  puVar2[1] = param_6;
  _swift_beginAccess(puVar3,auStack_b0,1,0);
  *puVar3 = param_7;
  puVar3[1] = param_8;
  _swift_beginAccess(puVar4,auStack_c8,1,0);
  uVar6 = puVar4[1];
  *puVar4 = param_9;
  puVar4[1] = param_10;
  _swift_bridgeObjectRelease(uVar6);
  _objc_msgSendSuper2(auStack_d8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e2a910; end: 103e2a92f;  */

void FUN_103e2a910(void)

{
  _objc_opt_self(&PTR_PTR_112951c90);
  return;
}



/* Entry: 103e2a930; end: 103e2ac27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103e2a930(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar5 = param_1;
  func_0x000107c5d984();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    _objc_release(param_1);
    return (long *)0x0;
  }
  lVar6 = lVar5;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar11 = param_2;
  _objc_release(lVar5);
  lVar7 = param_1;
  func_0x000107c42120();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar11;
  lVar5 = param_1;
  if (lVar7 == 0) {
LAB_103e2a9f4:
    func_0x000107c5db08();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar8 = lVar7;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar7);
    lVar9 = lVar11;
    __sSS5countSivg();
    _swift_bridgeObjectRelease(lVar11);
    if (lVar8 < 1) goto LAB_103e2a9f4;
    func_0x000107c42120();
    _objc_retainAutoreleasedReturnValue();
  }
  if (lVar5 == 0) {
    _objc_release(param_1);
    _swift_bridgeObjectRelease(param_2);
    return (long *)0x0;
  }
  lVar7 = lVar5;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar11 = lVar9;
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x000107c5db08();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    lStack_f8 = 0;
    lStack_f0 = 0;
    lStack_108 = lVar11;
  }
  else {
    lStack_f0 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_108 = lVar11;
    _objc_release(lVar5);
    lStack_f8 = lVar11;
  }
  lVar5 = param_1;
  func_0x000107c3e9e8();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lStack_108;
  if (lVar5 == 0) {
LAB_103e2aaa8:
    lStack_108 = 0;
    lStack_100 = 0;
  }
  else {
    lVar8 = lVar5;
    func_0x000107c3e978();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar11 = lStack_108;
    if (lVar8 == 0) goto LAB_103e2aaa8;
    lStack_100 = lVar8;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar11 = lStack_108;
    _objc_release(lVar8);
  }
  lVar5 = param_1;
  func_0x000107c3e9e8();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    lVar8 = lVar5;
    func_0x000107c3ea1c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar8 != 0) {
      lStack_110 = lVar8;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release();
      goto LAB_103e2ab04;
    }
  }
  lVar8 = lVar5;
  lStack_110 = 0;
  lVar11 = 0;
LAB_103e2ab04:
  FUN_103e2a910();
  lVar5 = lVar8;
  _objc_allocWithZone();
  plVar10 = (long *)(lVar5 + _DAT_113015e70);
  *plVar10 = 0;
  plVar10[1] = 0;
  plVar1 = (long *)(lVar5 + _DAT_113015e78);
  *plVar1 = 0;
  plVar1[1] = 0;
  plVar2 = (long *)(lVar5 + _DAT_113015e80);
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar3 = (long *)(lVar5 + _DAT_113015e88);
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar4 = (long *)(lVar5 + _DAT_113015e68);
  *plVar4 = lVar6;
  plVar4[1] = param_2;
  _swift_beginAccess(plVar10,auStack_80,1,0);
  *plVar10 = lStack_f0;
  plVar10[1] = lStack_f8;
  _swift_beginAccess(plVar1,auStack_98,1,0);
  *plVar1 = lVar7;
  plVar1[1] = lVar9;
  _swift_beginAccess(plVar2,auStack_b0,1,0);
  lVar9 = plVar2[1];
  *plVar2 = lStack_100;
  plVar2[1] = lStack_108;
  _swift_bridgeObjectRelease(lVar9);
  _swift_beginAccess(plVar3,auStack_c8,1,0);
  lVar9 = plVar3[1];
  *plVar3 = lStack_110;
  plVar3[1] = lVar11;
  _swift_bridgeObjectRelease(lVar9);
  plVar10 = &lStack_d8;
  lStack_d8 = lVar5;
  lStack_d0 = lVar8;
  _objc_msgSendSuper2(plVar10,PTR_s_init_1125d9248);
  _objc_release(param_1);
  return plVar10;
}



/* Entry: 103e2ac28; end: 103e2ad1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103e2ac28(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  long alStack_68 [3];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    FUN_103e2a910();
    plVar2 = alStack_68;
    _swift_dynamicCast(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,param_1,6);
    if (((ulong)plVar2 & 1) != 0) {
      plVar2 = (long *)(unaff_x20 + _DAT_113015e68);
      _swift_beginAccess(plVar2,auStack_50,0,0);
      lVar3 = *plVar2;
      lVar1 = plVar2[1];
      plVar2 = (long *)(alStack_68[0] + _DAT_113015e68);
      _swift_beginAccess(plVar2,alStack_68,0,0);
      if (lVar3 == *plVar2 && lVar1 == plVar2[1]) {
        _objc_release(alStack_68[0]);
        uVar4 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (lVar3,lVar1,*plVar2,plVar2[1],0);
        uVar4 = (uint)lVar3;
        _objc_release(alStack_68[0]);
      }
      goto LAB_103e2acf4;
    }
  }
  uVar4 = 0;
LAB_103e2acf4:
  return uVar4 & 1;
}



/* Entry: 103e2ad1c; end: 103e2ad9b; -[_TtC33SCDreams2PFriendSelectionServices18Dreams2PFriendInfo isEqual:] */

uint FUN_103e2ad1c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103e2ac28(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103e2ad9c; end: 103e2ae37; -[_TtC33SCDreams2PFriendSelectionServices18Dreams2PFriendInfo hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e2ad9c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  puVar1 = (undefined8 *)(param_1 + _DAT_113015e68);
  _swift_beginAccess(puVar1,auStack_90,0,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  _objc_retain(param_1);
  _swift_bridgeObjectRetain(uVar3);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 103e2ae38; end: 103e2ae93; -[_TtC33SCDreams2PFriendSelectionServices18Dreams2PFriendInfo init] */

void FUN_103e2ae38(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCDreams2PFriendSelectionServices.Dreams2PFriendInfo",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2ae64);
  (*pcVar1)();
}



/* Entry: 103e2ae94; end: 103e2af0f; -[_TtC33SCDreams2PFriendSelectionServices18Dreams2PFriendInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2ae94(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113015e68 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113015e70 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113015e78 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113015e80 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113015e88 + 8))
  ;
  return;
}



/* Entry: 103e2af10; end: 103e2af1f;  */

void FUN_103e2af10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103e2af20; end: 103e2af93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2af20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113015eb8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113015ec0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113015ec8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e2af94; end: 103e2afd3; -[_TtC33SCDreams2PFriendSelectionServices31Dreams2PFriendSelectionServices friendsServiceSCLazy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2af94(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001003a5b88();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e2afd4; end: 103e2b033; -[_TtC33SCDreams2PFriendSelectionServices31Dreams2PFriendSelectionServices init] */

void FUN_103e2afd4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCDreams2PFriendSelectionServices.Dreams2PFriendSelectionServices",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2b000);
  (*pcVar1)();
}



/* Entry: 103e2b034; end: 103e2b07b; -[_TtC33SCDreams2PFriendSelectionServices31Dreams2PFriendSelectionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2b034(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113015eb8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113015ec0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113015ec8));
  return;
}



/* Entry: 103e2b07c; end: 103e2b103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e2b07c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a4cd04();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_113015ef8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_113015f00) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2b104);
  (*pcVar1)();
}



/* Entry: 103e2b104; end: 103e2b163; -[_TtC33CameraUserSessionScopeGraphBridge48CameraUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103e2b104(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CameraUserSessionScopeGraphBridge.CameraUserSessionScopeGraphBridgeSaberEntryPoint",
             0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2b130);
  (*pcVar1)();
}



/* Entry: 103e2b164; end: 103e2b19b; -[_TtC33CameraUserSessionScopeGraphBridge48CameraUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2b164(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113015ef8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113015f00));
  return;
}



/* Entry: 103e2b19c; end: 103e2b1c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2b19c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_113015f00),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_113015ef8));
  return;
}



/* Entry: 103e2b1c4; end: 103e2b25f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e2b1c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113016560);
  *(undefined8 *)(unaff_x20 + _DAT_113015f30) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113015f38) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e2b260; end: 103e2b2bf; -[_TtC33CameraUserSessionScopeGraphBridge41SCCameraActivePathServicesSaberEntryPoint init] */

void FUN_103e2b260(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CameraUserSessionScopeGraphBridge.SCCameraActivePathServicesSaberEntryPoint",0x4b,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2b28c);
  (*pcVar1)();
}



/* Entry: 103e2b2c0; end: 103e2b353; -[_TtC33CameraUserSessionScopeGraphBridge41SCCameraActivePathServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2b2c0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113015f30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113015f38));
  return;
}



/* Entry: 103e2b354; end: 103e2b35b;  */

undefined8 FUN_103e2b354(void)

{
  return 0;
}



/* Entry: 103e2b35c; end: 103e2b3f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e2b35c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113016568);
  *(undefined8 *)(unaff_x20 + _DAT_113015f68) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113015f70) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e2b3f8; end: 103e2b457; -[_TtC33CameraUserSessionScopeGraphBridge52SCCameraCaptureRequestHandlerServicesSaberEntryPoint init] */

void FUN_103e2b3f8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CameraUserSessionScopeGraphBridge.SCCameraCaptureRequestHandlerServicesSaberEntryPoint"
             ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2b424);
  (*pcVar1)();
}



/* Entry: 103e2b458; end: 103e2b4eb; -[_TtC33CameraUserSessionScopeGraphBridge52SCCameraCaptureRequestHandlerServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2b458(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113015f68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113015f70));
  return;
}



/* Entry: 103e2b4ec; end: 103e2b4f3;  */

undefined8 FUN_103e2b4ec(void)

{
  return 0;
}



/* Entry: 103e2b4f4; end: 103e2b557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e2b4f4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113016570);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e2b558; end: 103e2b55f;  */

void FUN_103e2b558(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e2b560; end: 103e2b5ff;  */

void FUN_103e2b560(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e2b600; end: 103e2b61f;  */

void FUN_103e2b600(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e2b620; end: 103e2b683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e2b620(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113016578);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e2b684; end: 103e2b68b;  */

void FUN_103e2b684(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e2b68c; end: 103e2b6af;  */

void FUN_103e2b68c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e2b6b0; end: 103e2b6cf;  */

void FUN_103e2b6b0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e2b6d0; end: 103e2b733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e2b6d0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113016580);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e2b734; end: 103e2b73b;  */

void FUN_103e2b734(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e2b73c; end: 103e2b7db;  */

void FUN_103e2b73c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e2b7dc; end: 103e2b7fb;  */

void FUN_103e2b7dc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e2b7fc; end: 103e2b85f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e2b7fc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113016588);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e2b860; end: 103e2b867;  */

void FUN_103e2b860(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e2b868; end: 103e2b907;  */

void FUN_103e2b868(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e2b908; end: 103e2b927;  */

void FUN_103e2b908(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e2b928; end: 103e2b98b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e2b928(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113016590);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e2b98c; end: 103e2b993;  */

void FUN_103e2b98c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e2b994; end: 103e2ba33;  */

void FUN_103e2b994(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e2ba34; end: 103e2ba53;  */

void FUN_103e2ba34(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e2ba54; end: 103e2bab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e2ba54(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113016598);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e2bab8; end: 103e2babf;  */

void FUN_103e2bab8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e2bac0; end: 103e2bb5f;  */

void FUN_103e2bac0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e2bb60; end: 103e2bb7f;  */

void FUN_103e2bb60(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e2bb80; end: 103e2bbe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e2bb80(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130165a0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e2bbe4; end: 103e2bbeb;  */

void FUN_103e2bbe4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e2bbec; end: 103e2bc8b;  */

void FUN_103e2bbec(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e2bc8c; end: 103e2bcab;  */

void FUN_103e2bc8c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e2bcac; end: 103e2bd97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2bcac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113016560) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113016568) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113016570) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113016578) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113016580) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113016588) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113016590) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113016598) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_1130165a0) = param_9;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e2bd98; end: 103e2bdf7; -[_TtC33CameraUserSessionScopeGraphBridge41CameraUserSessionScopeGraphBridgeServices init] */

void FUN_103e2bd98(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CameraUserSessionScopeGraphBridge.CameraUserSessionScopeGraphBridgeServices",0x4b,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2bdc4);
  (*pcVar1)();
}



/* Entry: 103e2bdf8; end: 103e2befb; -[_TtC33CameraUserSessionScopeGraphBridge41CameraUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2bdf8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113016560));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113016568));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113016570));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113016578));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113016580));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113016588));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113016590));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113016598));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130165a0));
  return;
}



/* Entry: 103e2befc; end: 103e2bf33;  */

undefined1  [16] FUN_103e2befc(void)

{
  return ZEXT816(0x1107165f8);
}



/* Entry: 103e2bf34; end: 103e2bf77; -[SCCameraUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103e2bf34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e2bf78; end: 103e2bfab;  */

void FUN_103e2bf78(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e2bfac; end: 103e2bff3; -[SCCameraUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2bfac(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130165f8);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113016600));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113016608));
  return;
}



/* Entry: 103e2bff4; end: 103e2c013;  */

void FUN_103e2bff4(void)

{
  _objc_opt_self(&PTR_PTR_112952210);
  return;
}



/* Entry: 103e2c014; end: 103e2c057; -[SCSCCameraActivePathServicesSaberEntryPoint end] */

void FUN_103e2c014(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e2c058; end: 103e2c08b;  */

void FUN_103e2c058(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e2c08c; end: 103e2c0e3; -[SCSCCameraActivePathServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2c08c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113016638);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113016640);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113016648));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113016650));
  return;
}



/* Entry: 103e2c0e4; end: 103e2c103;  */

void FUN_103e2c0e4(void)

{
  _objc_opt_self(&PTR_PTR_1129522d8);
  return;
}



/* Entry: 103e2c104; end: 103e2c147; -[SCSCCameraCaptureRequestHandlerServicesSaberEntryPoint end] */

void FUN_103e2c104(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e2c148; end: 103e2c17b;  */

void FUN_103e2c148(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e2c17c; end: 103e2c1d3; -[SCSCCameraCaptureRequestHandlerServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2c17c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113016680);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113016688);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113016690));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113016698));
  return;
}



/* Entry: 103e2c1d4; end: 103e2c1f3;  */

void FUN_103e2c1d4(void)

{
  _objc_opt_self(&PTR_PTR_1129523a8);
  return;
}



/* Entry: 103e2c1f4; end: 103e2c1ff; -[SCSCCameraCircumstanceEngineServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2c1f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130166c8;
  _swift_beginAccess(param_1 + _DAT_1130166c8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e2c200; end: 103e2c20b; -[SCSCCameraCircumstanceEngineServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2c200(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130166c8;
  _swift_beginAccess(param_1 + _DAT_1130166c8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e2c20c; end: 103e2c217; -[SCSCCameraCircumstanceEngineServicesSaberServiceProvider cameraUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2c20c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130166d0;
  _swift_beginAccess(param_1 + _DAT_1130166d0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e2c218; end: 103e2c25b;  */

void FUN_103e2c218(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e2c25c; end: 103e2c267; -[SCSCCameraCircumstanceEngineServicesSaberServiceProvider setCameraUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2c25c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130166d0;
  _swift_beginAccess(param_1 + _DAT_1130166d0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e2c268; end: 103e2c2bb;  */

void FUN_103e2c268(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e2c2bc; end: 103e2c4cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e2c2bc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3f2c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103e2b584();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113016570);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130166d8);
      *(long *)(unaff_x20 + _DAT_1130166d8) = lVar4;
      _swift_retain();
      _swift_retain(lVar4);
      _swift_release(uVar5);
      func_0x000100083b20(&uStack_48);
      _swift_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      return uStack_48;
    }
    _objc_release(lVar2);
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
             "CameraUserSessionScopeGraphBridge/SCSCCameraCircumstanceEngineServicesSaberServiceProvider.swift"
             ,0x60,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2c3e8);
  (*pcVar1)();
}



/* Entry: 103e2c4d0; end: 103e2c503; -[SCSCCameraCircumstanceEngineServicesSaberServiceProvider provide] */

void FUN_103e2c4d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e2c2bc();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e2c504; end: 103e2c537; -[SCSCCameraCircumstanceEngineServicesSaberServiceProvider __safeProvide] */

void FUN_103e2c504(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e2c3e8();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e2c538; end: 103e2c57b; -[SCSCCameraCircumstanceEngineServicesSaberServiceProvider end] */

void FUN_103e2c538(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


