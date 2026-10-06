/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104097824; end: 104097883; -[_TtC29PrivengSystemScopeGraphBridge37PrivengSystemScopeGraphBridgeServices init] */

void FUN_104097824(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PrivengSystemScopeGraphBridge.PrivengSystemScopeGraphBridgeServices",0x43,"init()",6,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104097850);
  (*pcVar1)();
}



/* Entry: 104097884; end: 104097927; -[_TtC29PrivengSystemScopeGraphBridge37PrivengSystemScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104097884(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11305ae90));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11305ae98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305aea0));
  return;
}



/* Entry: 104097928; end: 10409795f;  */

undefined1  [16] FUN_104097928(void)

{
  return ZEXT816(0x1107405e0);
}



/* Entry: 104097960; end: 1040979a3; -[SCPrivengSystemScopeGraphBridgeSaberEntryPoint end] */

void FUN_104097960(undefined8 param_1)

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



/* Entry: 1040979a4; end: 1040979d7;  */

void FUN_1040979a4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040979d8; end: 104097a1f; -[SCPrivengSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040979d8(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305aef8);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305af00));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305af08));
  return;
}



/* Entry: 104097a20; end: 104097a3f;  */

void FUN_104097a20(void)

{
  _objc_opt_self(&PTR_PTR_1129895b8);
  return;
}



/* Entry: 104097a40; end: 104097a4b; -[SCSCFideliusClientInitServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104097a40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305af38;
  _swift_beginAccess(param_1 + _DAT_11305af38,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104097a4c; end: 104097a57; -[SCSCFideliusClientInitServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104097a4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305af38;
  _swift_beginAccess(param_1 + _DAT_11305af38,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104097a58; end: 104097a63; -[SCSCFideliusClientInitServicesSaberServiceProvider privengSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104097a58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305af40;
  _swift_beginAccess(param_1 + _DAT_11305af40,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104097a64; end: 104097aa7;  */

void FUN_104097a64(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104097aa8; end: 104097ab3; -[SCSCFideliusClientInitServicesSaberServiceProvider setPrivengSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104097aa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305af40;
  _swift_beginAccess(param_1 + _DAT_11305af40,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104097ab4; end: 104097b07;  */

void FUN_104097ab4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104097b08; end: 104097d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104097b08(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x00010bf18280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4f284();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001040974bc();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11305ae90);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11305af48);
      *(long *)(unaff_x20 + _DAT_11305af48) = lVar4;
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
             "PrivengSystemScopeGraphBridge/SCSCFideliusClientInitServicesSaberServiceProvider.swift"
             ,0x56,2,0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104097c34);
  (*pcVar1)();
}



/* Entry: 104097d1c; end: 104097d4f; -[SCSCFideliusClientInitServicesSaberServiceProvider provide] */

void FUN_104097d1c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104097b08();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104097d50; end: 104097d83; -[SCSCFideliusClientInitServicesSaberServiceProvider __safeProvide] */

void FUN_104097d50(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000104097c34();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104097d84; end: 104097dc7; -[SCSCFideliusClientInitServicesSaberServiceProvider end] */

void FUN_104097d84(undefined8 param_1)

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



/* Entry: 104097dc8; end: 104097f5f;  */

void FUN_104097dc8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0e15b40)) {
      uVar2 = 0xd000000000000025;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000025,0x800000010f1ea4c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "PrivengSystemScopeGraphBridge/SCSCFideliusClientInitServicesSaberServiceProvider.swift"
                   ,0x56,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104097f60);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c57864();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 104097f60; end: 10409800b; -[SCSCFideliusClientInitServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_104097f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_104097dc8(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10409800c; end: 10409807f; -[SCSCFideliusClientInitServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409800c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305af38,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305af40,0);
  *(undefined8 *)(param_1 + _DAT_11305af48) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104098080; end: 1040980b3;  */

void FUN_104098080(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040980b4; end: 1040980fb; -[SCSCFideliusClientInitServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040980b4(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305af38);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305af40);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305af48));
  return;
}



/* Entry: 1040980fc; end: 10409811b;  */

void FUN_1040980fc(void)

{
  _objc_opt_self(&PTR_PTR_11305af90);
  return;
}



/* Entry: 10409811c; end: 104098127; -[SCSCFideliusLoggingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409811c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305aff8;
  _swift_beginAccess(param_1 + _DAT_11305aff8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104098128; end: 104098133; -[SCSCFideliusLoggingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104098128(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305aff8;
  _swift_beginAccess(param_1 + _DAT_11305aff8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104098134; end: 10409813f; -[SCSCFideliusLoggingServicesSaberServiceProvider privengSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104098134(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305b000;
  _swift_beginAccess(param_1 + _DAT_11305b000,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104098140; end: 104098183;  */

void FUN_104098140(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104098184; end: 10409818f; -[SCSCFideliusLoggingServicesSaberServiceProvider setPrivengSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104098184(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305b000;
  _swift_beginAccess(param_1 + _DAT_11305b000,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104098190; end: 1040981e3;  */

void FUN_104098190(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1040981e4; end: 1040983f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1040981e4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x00010bf18280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4f284();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001040975e8();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11305ae98);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11305b008);
      *(long *)(unaff_x20 + _DAT_11305b008) = lVar4;
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
             "PrivengSystemScopeGraphBridge/SCSCFideliusLoggingServicesSaberServiceProvider.swift",
             0x53,2,0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104098310);
  (*pcVar1)();
}



/* Entry: 1040983f8; end: 10409842b; -[SCSCFideliusLoggingServicesSaberServiceProvider provide] */

void FUN_1040983f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1040981e4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10409842c; end: 10409845f; -[SCSCFideliusLoggingServicesSaberServiceProvider __safeProvide] */

void FUN_10409842c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000104098310();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104098460; end: 1040984a3; -[SCSCFideliusLoggingServicesSaberServiceProvider end] */

void FUN_104098460(undefined8 param_1)

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



/* Entry: 1040984a4; end: 10409863b;  */

void FUN_1040984a4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0e15b40)) {
      uVar2 = 0xd000000000000025;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000025,0x800000010f1ea4c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "PrivengSystemScopeGraphBridge/SCSCFideliusLoggingServicesSaberServiceProvider.swift"
                   ,0x53,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10409863c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c57864();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10409863c; end: 1040986e7; -[SCSCFideliusLoggingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10409863c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1040984a4(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1040986e8; end: 10409875b; -[SCSCFideliusLoggingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040986e8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305aff8,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305b000,0);
  *(undefined8 *)(param_1 + _DAT_11305b008) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10409875c; end: 10409878f;  */

void FUN_10409875c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104098790; end: 1040987d7; -[SCSCFideliusLoggingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104098790(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305aff8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305b000);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305b008));
  return;
}



/* Entry: 1040987d8; end: 1040987f7;  */

void FUN_1040987d8(void)

{
  _objc_opt_self(&PTR_PTR_11305b050);
  return;
}



/* Entry: 1040987f8; end: 104098803; -[SCSCFideliusStorageServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040987f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305b0b8;
  _swift_beginAccess(param_1 + _DAT_11305b0b8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104098804; end: 10409880f; -[SCSCFideliusStorageServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104098804(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305b0b8;
  _swift_beginAccess(param_1 + _DAT_11305b0b8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104098810; end: 10409881b; -[SCSCFideliusStorageServicesSaberServiceProvider privengSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104098810(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305b0c0;
  _swift_beginAccess(param_1 + _DAT_11305b0c0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409881c; end: 10409885f;  */

void FUN_10409881c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104098860; end: 10409886b; -[SCSCFideliusStorageServicesSaberServiceProvider setPrivengSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104098860(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305b0c0;
  _swift_beginAccess(param_1 + _DAT_11305b0c0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10409886c; end: 1040988bf;  */

void FUN_10409886c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1040988c0; end: 104098ad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1040988c0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x00010bf18280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4f284();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000104097714();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11305aea0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11305b0c8);
      *(long *)(unaff_x20 + _DAT_11305b0c8) = lVar4;
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
             "PrivengSystemScopeGraphBridge/SCSCFideliusStorageServicesSaberServiceProvider.swift",
             0x53,2,0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040989ec);
  (*pcVar1)();
}



/* Entry: 104098ad4; end: 104098b07; -[SCSCFideliusStorageServicesSaberServiceProvider provide] */

void FUN_104098ad4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1040988c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104098b08; end: 104098b3b; -[SCSCFideliusStorageServicesSaberServiceProvider __safeProvide] */

void FUN_104098b08(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001040989ec();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104098b3c; end: 104098b7f; -[SCSCFideliusStorageServicesSaberServiceProvider end] */

void FUN_104098b3c(undefined8 param_1)

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



/* Entry: 104098b80; end: 104098d17;  */

void FUN_104098b80(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0e15b40)) {
      uVar2 = 0xd000000000000025;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000025,0x800000010f1ea4c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "PrivengSystemScopeGraphBridge/SCSCFideliusStorageServicesSaberServiceProvider.swift"
                   ,0x53,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104098d18);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c57864();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 104098d18; end: 104098dc3; -[SCSCFideliusStorageServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_104098d18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_104098b80(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 104098dc4; end: 104098e37; -[SCSCFideliusStorageServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104098dc4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305b0b8,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305b0c0,0);
  *(undefined8 *)(param_1 + _DAT_11305b0c8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104098e38; end: 104098e6b;  */

void FUN_104098e38(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104098e6c; end: 104098eb3; -[SCSCFideliusStorageServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104098e6c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305b0b8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305b0c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305b0c8));
  return;
}



/* Entry: 104098eb4; end: 104098ed3;  */

void FUN_104098eb4(void)

{
  _objc_opt_self(&PTR_PTR_11305b110);
  return;
}



/* Entry: 104098ed4; end: 1040997df;  */

long FUN_104098ed4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1040997e0; end: 1040997ef; -[_TtC28SCFideliusClientInitServices28SCFideliusClientInitServices fideliusClientInitInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040997e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11305b178));
  return;
}



/* Entry: 1040997f0; end: 10409983b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040997f0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11305b178) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10409983c; end: 10409989b; -[_TtC28SCFideliusClientInitServices28SCFideliusClientInitServices init] */

void FUN_10409983c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCFideliusClientInitServices.SCFideliusClientInitServices",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104099868);
  (*pcVar1)();
}



/* Entry: 10409989c; end: 1040998ab; -[_TtC28SCFideliusClientInitServices28SCFideliusClientInitServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409989c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305b178));
  return;
}



/* Entry: 1040998ac; end: 1040998d7; +[_TtC28SCFideliusClientInitServices19SCFideliusConstants deviceGraphKey] */

void FUN_1040998ac(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1ea5f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040998d8; end: 104099903; +[_TtC28SCFideliusClientInitServices19SCFideliusConstants identityBackupKey] */

void FUN_1040998d8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1ea610);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104099904; end: 10409994f; +[_TtC28SCFideliusClientInitServices19SCFideliusConstants deviceIDKey] */

void FUN_104099904(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1ea680);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104099950; end: 10409998b; -[_TtC28SCFideliusClientInitServices19SCFideliusConstants init] */

void FUN_104099950(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000104099930();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10409998c; end: 1040999bb;  */

void FUN_10409998c(void)

{
  func_0x000104099930();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040999bc; end: 1040999bf; -[_TtC28SCFideliusClientInitServices19SCFideliusConstants .cxx_destruct] */

void FUN_1040999bc(void)

{
  return;
}



/* Entry: 1040999c0; end: 1040999cb; -[SCFideliusUserKey iwek] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040999c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11305b1d0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11305b1d0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1040999cc; end: 1040999d7; -[SCFideliusUserKey privateKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040999cc(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_11305b1d8))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11305b1d8);
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



/* Entry: 1040999d8; end: 1040999e3; -[SCFideliusUserKey publicKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040999d8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_11305b1e0))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11305b1e0);
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



/* Entry: 1040999e4; end: 104099a53;  */

void FUN_1040999e4(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + *param_3))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + *param_3);
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



/* Entry: 104099a54; end: 104099a5f; -[SCFideliusUserKey publicKeyStringWithHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104099a54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11305b1e8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11305b1e8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104099a60; end: 104099a6f; -[SCFideliusUserKey version] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104099a60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11305b1f0);
}



/* Entry: 104099a70; end: 104099a7b; -[SCFideliusUserKey hashedBeta] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104099a70(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11305b1f8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11305b1f8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104099a7c; end: 104099ad3;  */

void FUN_104099a7c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104099ad4; end: 104099bbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104099ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11305b1d0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11305b1d8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11305b1e0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11305b1e8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11305b1f0) = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11305b1f8);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104099bbc; end: 104099d8f; -[SCFideliusUserKey initWithIwek:privateKey:publicKey:publicKeyStringWithHeader:version:hashedBeta:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104099bbc(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  undefined8 param_7,long param_8)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_90;
  long lStack_88;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lStack_90 = 0;
    lStack_88 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_90 = param_2;
    lStack_88 = param_3;
  }
  if (param_4 == 0) {
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_8);
    param_4 = 0;
    lVar5 = -0x1000000000000000;
    lVar9 = param_2;
  }
  else {
    lVar5 = param_4;
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_8);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    lVar9 = param_2;
    _objc_release(lVar5);
    lVar5 = param_2;
  }
  if (param_5 == 0) {
    lVar6 = 0;
    lVar3 = -0x1000000000000000;
    lVar8 = lVar9;
  }
  else {
    lVar6 = param_5;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    lVar8 = lVar9;
    _objc_release(param_5);
    lVar3 = lVar9;
  }
  if (param_6 == 0) {
    lVar9 = 0;
    lVar2 = 0;
    lVar7 = lVar8;
  }
  else {
    lVar9 = param_6;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar7 = lVar8;
    _objc_release(param_6);
    lVar2 = lVar8;
  }
  if (param_8 == 0) {
    lVar8 = 0;
    lVar7 = 0;
  }
  else {
    lVar8 = param_8;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(param_8);
  }
  plVar1 = (long *)(param_1 + _DAT_11305b1d0);
  *plVar1 = lStack_88;
  plVar1[1] = lStack_90;
  plVar1 = (long *)(param_1 + _DAT_11305b1d8);
  *plVar1 = param_4;
  plVar1[1] = lVar5;
  plVar1 = (long *)(param_1 + _DAT_11305b1e0);
  *plVar1 = lVar6;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_1 + _DAT_11305b1e8);
  *plVar1 = lVar9;
  plVar1[1] = lVar2;
  *(undefined8 *)(param_1 + _DAT_11305b1f0) = param_7;
  plVar1 = (long *)(param_1 + _DAT_11305b1f8);
  *plVar1 = lVar8;
  plVar1[1] = lVar7;
  lStack_70 = param_1;
  lStack_68 = lVar4;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104099d90; end: 104099ef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104099d90(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b0 [16];
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
  
  puVar2 = auStack_c0;
  _objc_allocWithZone();
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11305b1d0);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11305b1d8);
  puVar1[1] = uStack_68;
  *puVar1 = uStack_70;
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11305b1e0);
  puVar1[1] = uStack_78;
  *puVar1 = uStack_80;
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uVar3 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11305b1e8);
  puVar1[1] = param_1[7];
  *puVar1 = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11305b1f0) = param_1[8];
  uStack_98 = param_1[10];
  uStack_a0 = param_1[9];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11305b1f8);
  puVar1[1] = uStack_98;
  *puVar1 = uStack_a0;
  FUN_104099ef8(&uStack_60,auStack_b0,0x112d35ff8,&UNK_10d900cd0);
  FUN_104099ef8(&uStack_70,auStack_b0,0x112d56fe0,&UNK_10d91dda0);
  FUN_104099ef8(&uStack_80,auStack_b0,0x112d56fe0,&UNK_10d91dda0);
  FUN_104099ef8(&uStack_90,auStack_b0,0x112d35ff8,&UNK_10d900cd0);
  FUN_104099ef8(&uStack_a0,auStack_b0,0x112d35ff8,&UNK_10d900cd0);
  _objc_msgSendSuper2(auStack_c0,PTR_s_init_1125d9248);
  func_0x000104099f40(param_1);
  return puVar2;
}



/* Entry: 104099ef8; end: 104099f73;  */

undefined8 FUN_104099ef8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104099f74; end: 104099f77; -[SCFideliusUserKey copyWithZone:] */

void FUN_104099f74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104099f78; end: 10409a1eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104099f78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_11305b1d0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11305b1d0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4b455749;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4b455749,0xe400000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_11305b1d8))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11305b1d8);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
  }
  else {
    uVar1 = 0;
  }
  uVar2 = 0x5f45544156495250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f45544156495250,0xeb0000000059454b);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_11305b1e0))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11305b1e0);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
  }
  else {
    uVar1 = 0;
  }
  uVar2 = 0x4b5f43494c425550;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4b5f43494c425550,0xea00000000005945);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11305b1e8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11305b1e8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd00000000000001d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1ea6a0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x4e4f4953524556;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f4953524556,0xe700000000000000);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11305b1f8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11305b1f8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x425f444548534148;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x425f444548534148,0xeb00000000415445);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10409a1ec; end: 10409a23b; -[SCFideliusUserKey encodeWithCoder:] */

void FUN_10409a1ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104099f78(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10409a23c; end: 10409a26b;  */

void FUN_10409a23c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10409a26c(param_1);
  return;
}



/* Entry: 10409a26c; end: 10409a7e7;  */

undefined8 FUN_10409a26c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 unaff_x20;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar3 = 0x4b455749;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4b455749,0xe400000000000000);
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
  puVar2 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar10 = 0;
    uVar3 = 0;
  }
  else {
    puVar5 = &uStack_b0;
    _swift_dynamicCast(puVar5,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar10 = uStack_a8;
    uVar3 = uStack_b0;
    if ((int)puVar5 == 0) {
      uVar3 = 0;
      uVar10 = 0;
    }
  }
  uVar6 = 0x5f45544156495250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f45544156495250,0xeb0000000059454b);
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
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar9 = 0xf000000000000000;
    uVar6 = 0;
  }
  else {
    puVar5 = &uStack_b0;
    _swift_dynamicCast(puVar5,&uStack_80,puVar2 + 8,PTR___s10Foundation4DataVN_110350ae0,6);
    uVar9 = uStack_a8;
    uVar6 = uStack_b0;
    if ((int)puVar5 == 0) {
      uVar6 = 0;
      uVar9 = 0xf000000000000000;
    }
  }
  uVar7 = 0x4b5f43494c425550;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4b5f43494c425550,0xea00000000005945);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
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
    func_0x00010006e7f4(&uStack_80);
    uStack_c0 = 0;
    uVar8 = 0xf000000000000000;
  }
  else {
    puVar5 = &uStack_b0;
    _swift_dynamicCast(puVar5,&uStack_80,puVar2 + 8,PTR___s10Foundation4DataVN_110350ae0,6);
    uVar8 = uStack_a8;
    uStack_c0 = uStack_b0;
    if ((int)puVar5 == 0) {
      uStack_c0 = 0;
      uVar8 = 0xf000000000000000;
    }
  }
  uVar7 = 0xd00000000000001d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1ea6a0);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
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
    func_0x00010006e7f4(&uStack_80);
    uStack_d8 = 0;
    uVar12 = 0;
  }
  else {
    puVar5 = &uStack_b0;
    _swift_dynamicCast(puVar5,&uStack_80,puVar2 + 8,PTR___sSSN_11034da80,6);
    uVar12 = uStack_a8;
    uStack_d8 = uStack_b0;
    if ((int)puVar5 == 0) {
      uStack_d8 = 0;
      uVar12 = 0;
    }
  }
  uVar7 = 0x4e4f4953524556;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f4953524556,0xe700000000000000);
  func_0x00010bf66f40();
  _objc_release(uVar7);
  uVar7 = 0x425f444548534148;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x425f444548534148,0xeb00000000415445);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
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
    func_0x00010006e7f4(&uStack_80);
    uStack_e0 = 0;
    uVar1 = 0;
  }
  else {
    puVar5 = &uStack_b0;
    _swift_dynamicCast(puVar5,&uStack_80,puVar2 + 8,PTR___sSSN_11034da80,6);
    uVar1 = uStack_a8;
    uStack_e0 = uStack_b0;
    if ((int)puVar5 == 0) {
      uStack_e0 = 0;
      uVar1 = 0;
    }
  }
  if (uVar10 == 0) {
    uVar3 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar10);
    _swift_bridgeObjectRelease(uVar10);
  }
  if (uVar9 >> 0x3c < 0xf) {
    func_0x00010006c00c(uVar6,uVar9);
    uVar7 = uVar6;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar6,uVar9);
    func_0x0001000b44c0(uVar6,uVar9);
  }
  else {
    uVar7 = 0;
  }
  if (uVar8 >> 0x3c < 0xf) {
    func_0x00010006c00c(uStack_c0,uVar8);
    uVar11 = uStack_c0;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uStack_c0,uVar8);
    func_0x0001000b44c0(uStack_c0,uVar8);
  }
  else {
    uVar11 = 0;
  }
  if (uVar12 == 0) {
    uStack_d8 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_d8,uVar12);
    _swift_bridgeObjectRelease(uVar12);
  }
  if (uVar1 == 0) {
    uStack_e0 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_e0,uVar1);
    _swift_bridgeObjectRelease(uVar1);
  }
  func_0x00010c020660(unaff_x20);
  func_0x0001000b44c0(uVar6,uVar9);
  func_0x0001000b44c0(uStack_c0,uVar8);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar11);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 10409a7e8; end: 10409a80f; -[SCFideliusUserKey initWithCoder:] */

void FUN_10409a7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10409a26c();
  return;
}



/* Entry: 10409a810; end: 10409a843; -[SCFideliusUserKey description] */

void FUN_10409a810(void)

{
  undefined1 auStack_68 [88];
  
  FUN_10409a93c(auStack_68);
  func_0x000104099f40(auStack_68);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409a844; end: 10409a8bf; -[SCFideliusUserKey init] */

void FUN_10409a844(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCFideliusClientInitServices/SCFideliusUserKeyWrapper.swift",0x3b,2,0x5b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409a88c);
  (*pcVar1)();
}



/* Entry: 10409a8c0; end: 10409a93b; -[SCFideliusUserKey .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409a8c0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11305b1d0 + 8));
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_11305b1d8),
                      ((undefined8 *)(param_1 + _DAT_11305b1d8))[1]);
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_11305b1e0),
                      ((undefined8 *)(param_1 + _DAT_11305b1e0))[1]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11305b1e8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11305b1f8 + 8))
  ;
  return;
}



/* Entry: 10409a93c; end: 10409aa27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409a93c(undefined8 *param_1,long param_2)

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
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11305b1d0);
  uVar6 = ((undefined8 *)(param_2 + _DAT_11305b1d0))[1];
  uVar2 = *(undefined8 *)(param_2 + _DAT_11305b1d8);
  uVar7 = ((undefined8 *)(param_2 + _DAT_11305b1d8))[1];
  uVar3 = *(undefined8 *)(param_2 + _DAT_11305b1e0);
  uVar8 = ((undefined8 *)(param_2 + _DAT_11305b1e0))[1];
  uVar11 = *(undefined8 *)(param_2 + _DAT_11305b1f0);
  uVar4 = *(undefined8 *)(param_2 + _DAT_11305b1e8);
  uVar9 = ((undefined8 *)(param_2 + _DAT_11305b1e8))[1];
  uVar5 = *(undefined8 *)(param_2 + _DAT_11305b1f8);
  uVar10 = ((undefined8 *)(param_2 + _DAT_11305b1f8))[1];
  _swift_bridgeObjectRetain(uVar6);
  func_0x000100de78a0(uVar2,uVar7);
  func_0x000100de78a0(uVar3,uVar8);
  *param_1 = uVar1;
  param_1[1] = uVar6;
  param_1[2] = uVar2;
  param_1[3] = uVar7;
  param_1[4] = uVar3;
  param_1[5] = uVar8;
  param_1[6] = uVar4;
  param_1[7] = uVar9;
  param_1[8] = uVar11;
  param_1[9] = uVar5;
  param_1[10] = uVar10;
  _swift_bridgeObjectRetain(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar10);
  return;
}



/* Entry: 10409aa28; end: 10409aa47;  */

void FUN_10409aa28(void)

{
  _objc_opt_self(&PTR_PTR_1129898c8);
  return;
}



/* Entry: 10409aa48; end: 10409aa57; -[SCFideliusClientInitInfo tempIdentity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409aa48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11305b228));
  return;
}



/* Entry: 10409aa58; end: 10409aa9f; -[SCFideliusClientInitInfo hashedKeys] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409aa58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11305b230);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10409aaa0; end: 10409ab03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409aaa0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11305b228) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11305b230) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10409ab04; end: 10409ab87; -[SCFideliusClientInitInfo initWithTempIdentity:hashedKeys:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409ab04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_4,PTR___sSSN_11034da80);
  *(undefined8 *)(param_1 + _DAT_11305b228) = param_3;
  *(undefined8 *)(param_1 + _DAT_11305b230) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10409ab88; end: 10409abc7;  */

undefined8 FUN_10409ab88(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_10409b0e8(param_1);
  FUN_10409b2a4(param_1);
  return uVar1;
}



/* Entry: 10409abc8; end: 10409abcb; -[SCFideliusClientInitInfo copyWithZone:] */

void FUN_10409abc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10409abcc; end: 10409ac97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409abcc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x4544495f504d4554;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4544495f504d4554,0xed0000595449544e);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11305b230);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,PTR___sSSN_11034da80);
  uVar2 = 0x4b5f444548534148;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4b5f444548534148,0xeb00000000535945);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10409ac98; end: 10409ace7; -[SCFideliusClientInitInfo encodeWithCoder:] */

void FUN_10409ac98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10409abcc(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10409ace8; end: 10409ad17;  */

void FUN_10409ace8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10409ad18(param_1);
  return;
}



/* Entry: 10409ad18; end: 10409af4f;  */

undefined8 FUN_10409ad18(long param_1)

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
  
  uVar2 = 0x4544495f504d4554;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4544495f504d4554,0xed0000595449544e);
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
LAB_10409aef8:
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar2 = 0;
    FUN_10409aa28(0);
    puVar1 = PTR___sypN_11034f1a8;
    plVar4 = &lStack_88;
    _swift_dynamicCast(plVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar2,6);
    lVar3 = lStack_88;
    if (((ulong)plVar4 & 1) != 0) {
      uVar2 = 0x4b5f444548534148;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4b5f444548534148,0xeb00000000535945);
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
        goto LAB_10409aef8;
      }
      uVar2 = 0x112d38270;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      plVar4 = &lStack_88;
      _swift_dynamicCast(plVar4,&uStack_60,puVar1 + 8,uVar2,6);
      if (((ulong)plVar4 & 1) != 0) {
        lVar5 = lStack_88;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lStack_88,PTR___sSSN_11034da80);
        _swift_bridgeObjectRelease(lStack_88);
        func_0x00010c050f20();
        _objc_release(lVar5);
        _objc_release(param_1);
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



/* Entry: 10409af50; end: 10409af77; -[SCFideliusClientInitInfo initWithCoder:] */

void FUN_10409af50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10409ad18();
  return;
}


