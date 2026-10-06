/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1040931bc; end: 1040931c3;  */

void FUN_1040931bc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1040931c4; end: 104093263;  */

void FUN_1040931c4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104093264; end: 104093283;  */

void FUN_104093264(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 104093284; end: 10409330f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104093284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113059f58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113059f60) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113059f68) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113059f70) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104093310; end: 10409336f; -[_TtC24MeSystemScopeGraphBridge32MeSystemScopeGraphBridgeServices init] */

void FUN_104093310(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MeSystemScopeGraphBridge.MeSystemScopeGraphBridgeServices",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409333c);
  (*pcVar1)();
}



/* Entry: 104093370; end: 104093423; -[_TtC24MeSystemScopeGraphBridge32MeSystemScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104093370(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113059f60));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113059f70));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113059f58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113059f68));
  return;
}



/* Entry: 104093424; end: 10409345b;  */

undefined1  [16] FUN_104093424(void)

{
  return ZEXT816(0x11073fd48);
}



/* Entry: 10409345c; end: 10409349f; -[SCMeSystemScopeGraphBridgeSaberEntryPoint end] */

void FUN_10409345c(undefined8 param_1)

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



/* Entry: 1040934a0; end: 1040934d3;  */

void FUN_1040934a0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040934d4; end: 10409351b; -[SCMeSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040934d4(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113059fc8);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113059fd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113059fd8));
  return;
}



/* Entry: 10409351c; end: 10409353b;  */

void FUN_10409351c(void)

{
  _objc_opt_self(&PTR_PTR_112988238);
  return;
}



/* Entry: 10409353c; end: 10409357f; -[SCSCAudioSessionServicesSaberEntryPoint end] */

void FUN_10409353c(undefined8 param_1)

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



/* Entry: 104093580; end: 1040935b3;  */

void FUN_104093580(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040935b4; end: 10409360b; -[SCSCAudioSessionServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040935b4(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305a008);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305a010);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305a018));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305a020));
  return;
}



/* Entry: 10409360c; end: 10409362b;  */

void FUN_10409360c(void)

{
  _objc_opt_self(&PTR_PTR_112988300);
  return;
}



/* Entry: 10409362c; end: 10409366f; -[SCSCPlayerServicesSaberEntryPoint end] */

void FUN_10409362c(undefined8 param_1)

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



/* Entry: 104093670; end: 1040936a3;  */

void FUN_104093670(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040936a4; end: 1040936fb; -[SCSCPlayerServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040936a4(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305a050);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305a058);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305a060));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305a068));
  return;
}



/* Entry: 1040936fc; end: 10409371b;  */

void FUN_1040936fc(void)

{
  _objc_opt_self(&PTR_PTR_1129883d0);
  return;
}



/* Entry: 10409371c; end: 104093727; -[SCSCAudioCaptureServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409371c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305a098;
  _swift_beginAccess(param_1 + _DAT_11305a098,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104093728; end: 104093733; -[SCSCAudioCaptureServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104093728(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305a098;
  _swift_beginAccess(param_1 + _DAT_11305a098,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104093734; end: 10409373f; -[SCSCAudioCaptureServicesSaberServiceProvider meSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104093734(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305a0a0;
  _swift_beginAccess(param_1 + _DAT_11305a0a0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104093740; end: 104093783;  */

void FUN_104093740(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104093784; end: 10409378f; -[SCSCAudioCaptureServicesSaberServiceProvider setMeSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104093784(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305a0a0;
  _swift_beginAccess(param_1 + _DAT_11305a0a0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104093790; end: 1040937e3;  */

void FUN_104093790(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1040937e4; end: 1040939f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1040937e4(void)

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
    func_0x000107c4c918();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001040930bc();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113059f58);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11305a0a8);
      *(long *)(unaff_x20 + _DAT_11305a0a8) = lVar4;
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
             "MeSystemScopeGraphBridge/SCSCAudioCaptureServicesSaberServiceProvider.swift",0x4b,2,
             0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104093910);
  (*pcVar1)();
}



/* Entry: 1040939f8; end: 104093a2b; -[SCSCAudioCaptureServicesSaberServiceProvider provide] */

void FUN_1040939f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1040937e4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104093a2c; end: 104093a5f; -[SCSCAudioCaptureServicesSaberServiceProvider __safeProvide] */

void FUN_104093a2c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000104093910();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104093a60; end: 104093aa3; -[SCSCAudioCaptureServicesSaberServiceProvider end] */

void FUN_104093a60(undefined8 param_1)

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



/* Entry: 104093aa4; end: 104093c3b;  */

void FUN_104093aa4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef0e16910)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000020,0x800000010f1e96f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "MeSystemScopeGraphBridge/SCSCAudioCaptureServicesSaberServiceProvider.swift",
                   0x4b,2,0x34,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104093c3c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c563c8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 104093c3c; end: 104093ce7; -[SCSCAudioCaptureServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_104093c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_104093aa4(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 104093ce8; end: 104093d5b; -[SCSCAudioCaptureServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104093ce8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305a098,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305a0a0,0);
  *(undefined8 *)(param_1 + _DAT_11305a0a8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104093d5c; end: 104093d8f;  */

void FUN_104093d5c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104093d90; end: 104093dd7; -[SCSCAudioCaptureServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104093d90(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305a098);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305a0a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305a0a8));
  return;
}



/* Entry: 104093dd8; end: 104093df7;  */

void FUN_104093dd8(void)

{
  _objc_opt_self(&PTR_PTR_11305a0f0);
  return;
}



/* Entry: 104093df8; end: 104093e03; -[SCSCDeviceMotionServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104093df8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305a158;
  _swift_beginAccess(param_1 + _DAT_11305a158,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104093e04; end: 104093e0f; -[SCSCDeviceMotionServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104093e04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305a158;
  _swift_beginAccess(param_1 + _DAT_11305a158,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104093e10; end: 104093e1b; -[SCSCDeviceMotionServicesSaberServiceProvider meSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104093e10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305a160;
  _swift_beginAccess(param_1 + _DAT_11305a160,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104093e1c; end: 104093e5f;  */

void FUN_104093e1c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104093e60; end: 104093e6b; -[SCSCDeviceMotionServicesSaberServiceProvider setMeSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104093e60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305a160;
  _swift_beginAccess(param_1 + _DAT_11305a160,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104093e6c; end: 104093ebf;  */

void FUN_104093e6c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104093ec0; end: 1040940d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104093ec0(void)

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
    func_0x000107c4c918();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001040931e8();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113059f68);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11305a168);
      *(long *)(unaff_x20 + _DAT_11305a168) = lVar4;
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
             "MeSystemScopeGraphBridge/SCSCDeviceMotionServicesSaberServiceProvider.swift",0x4b,2,
             0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104093fec);
  (*pcVar1)();
}



/* Entry: 1040940d4; end: 104094107; -[SCSCDeviceMotionServicesSaberServiceProvider provide] */

void FUN_1040940d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104093ec0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104094108; end: 10409413b; -[SCSCDeviceMotionServicesSaberServiceProvider __safeProvide] */

void FUN_104094108(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000104093fec();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10409413c; end: 10409417f; -[SCSCDeviceMotionServicesSaberServiceProvider end] */

void FUN_10409413c(undefined8 param_1)

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



/* Entry: 104094180; end: 104094317;  */

void FUN_104094180(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef0e16910)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000020,0x800000010f1e96f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "MeSystemScopeGraphBridge/SCSCDeviceMotionServicesSaberServiceProvider.swift",
                   0x4b,2,0x34,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104094318);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c563c8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 104094318; end: 1040943c3; -[SCSCDeviceMotionServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_104094318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_104094180(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1040943c4; end: 104094437; -[SCSCDeviceMotionServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040943c4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305a158,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305a160,0);
  *(undefined8 *)(param_1 + _DAT_11305a168) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104094438; end: 10409446b;  */

void FUN_104094438(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10409446c; end: 1040944b3; -[SCSCDeviceMotionServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409446c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305a158);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305a160);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305a168));
  return;
}



/* Entry: 1040944b4; end: 1040944d3;  */

void FUN_1040944b4(void)

{
  _objc_opt_self(&PTR_PTR_11305a1b0);
  return;
}



/* Entry: 1040944d4; end: 10409455b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1040944d4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a21900();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_11305a218) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_11305a220) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409455c);
  (*pcVar1)();
}



/* Entry: 10409455c; end: 1040945bb; -[_TtC28MetricSystemScopeGraphBridge43MetricSystemScopeGraphBridgeSaberEntryPoint init] */

void FUN_10409455c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MetricSystemScopeGraphBridge.MetricSystemScopeGraphBridgeSaberEntryPoint",0x48,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104094588);
  (*pcVar1)();
}



/* Entry: 1040945bc; end: 1040945f3; -[_TtC28MetricSystemScopeGraphBridge43MetricSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040945bc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305a218));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305a220));
  return;
}



/* Entry: 1040945f4; end: 10409461b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040945f4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_11305a220),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_11305a218));
  return;
}



/* Entry: 10409461c; end: 1040946b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10409461c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11305a2d0);
  *(undefined8 *)(unaff_x20 + _DAT_11305a250) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11305a258) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 1040946b8; end: 104094717; -[_TtC28MetricSystemScopeGraphBridge50SCGraphenePerformanceLoggerServicesSaberEntryPoint init] */

void FUN_1040946b8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MetricSystemScopeGraphBridge.SCGraphenePerformanceLoggerServicesSaberEntryPoint",0x4f,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040946e4);
  (*pcVar1)();
}



/* Entry: 104094718; end: 1040947ab; -[_TtC28MetricSystemScopeGraphBridge50SCGraphenePerformanceLoggerServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104094718(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11305a250));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305a258));
  return;
}



/* Entry: 1040947ac; end: 1040947b3;  */

undefined8 FUN_1040947ac(void)

{
  return 0;
}



/* Entry: 1040947b4; end: 10409484f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1040947b4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11305a2d8);
  *(undefined8 *)(unaff_x20 + _DAT_11305a288) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11305a290) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 104094850; end: 1040948af; -[_TtC28MetricSystemScopeGraphBridge33SCGrapheneServicesSaberEntryPoint init] */

void FUN_104094850(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MetricSystemScopeGraphBridge.SCGrapheneServicesSaberEntryPoint",0x3e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409487c);
  (*pcVar1)();
}



/* Entry: 1040948b0; end: 104094943; -[_TtC28MetricSystemScopeGraphBridge33SCGrapheneServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040948b0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11305a288));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305a290));
  return;
}



/* Entry: 104094944; end: 10409494b;  */

undefined8 FUN_104094944(void)

{
  return 0;
}



/* Entry: 10409494c; end: 1040949af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409494c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11305a2d0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11305a2d8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040949b0; end: 104094a0f; -[_TtC28MetricSystemScopeGraphBridge36MetricSystemScopeGraphBridgeServices init] */

void FUN_1040949b0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MetricSystemScopeGraphBridge.MetricSystemScopeGraphBridgeServices",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040949dc);
  (*pcVar1)();
}



/* Entry: 104094a10; end: 104094aa3; -[_TtC28MetricSystemScopeGraphBridge36MetricSystemScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104094a10(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11305a2d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305a2d8));
  return;
}



/* Entry: 104094aa4; end: 104094adb;  */

undefined1  [16] FUN_104094aa4(void)

{
  return ZEXT816(0x11073ff20);
}



/* Entry: 104094adc; end: 104094b1f; -[SCMetricSystemScopeGraphBridgeSaberEntryPoint end] */

void FUN_104094adc(undefined8 param_1)

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



/* Entry: 104094b20; end: 104094b53;  */

void FUN_104094b20(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104094b54; end: 104094b9b; -[SCMetricSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104094b54(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305a330);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305a338));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305a340));
  return;
}



/* Entry: 104094b9c; end: 104094bbb;  */

void FUN_104094b9c(void)

{
  _objc_opt_self(&PTR_PTR_112988850);
  return;
}



/* Entry: 104094bbc; end: 104094bff; -[SCSCGraphenePerformanceLoggerServicesSaberEntryPoint end] */

void FUN_104094bbc(undefined8 param_1)

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



/* Entry: 104094c00; end: 104094c33;  */

void FUN_104094c00(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104094c34; end: 104094c8b; -[SCSCGraphenePerformanceLoggerServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104094c34(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305a370);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305a378);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305a380));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305a388));
  return;
}



/* Entry: 104094c8c; end: 104094cab;  */

void FUN_104094c8c(void)

{
  _objc_opt_self(&PTR_PTR_112988918);
  return;
}



/* Entry: 104094cac; end: 104094cef; -[SCSCGrapheneServicesSaberEntryPoint end] */

void FUN_104094cac(undefined8 param_1)

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



/* Entry: 104094cf0; end: 104094d23;  */

void FUN_104094cf0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104094d24; end: 104094d7b; -[SCSCGrapheneServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104094d24(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305a3b8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305a3c0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305a3c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305a3d0));
  return;
}



/* Entry: 104094d7c; end: 104094d9b;  */

void FUN_104094d7c(void)

{
  _objc_opt_self(&PTR_PTR_1129889e8);
  return;
}



/* Entry: 104094d9c; end: 104094e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104094d9c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a21f48();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_11305a400) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_11305a408) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104094e24);
  (*pcVar1)();
}



/* Entry: 104094e24; end: 104094e83; -[_TtC24MmSystemScopeGraphBridge39MmSystemScopeGraphBridgeSaberEntryPoint init] */

void FUN_104094e24(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MmSystemScopeGraphBridge.MmSystemScopeGraphBridgeSaberEntryPoint",0x40,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104094e50);
  (*pcVar1)();
}



/* Entry: 104094e84; end: 104094ebb; -[_TtC24MmSystemScopeGraphBridge39MmSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104094e84(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305a400));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305a408));
  return;
}



/* Entry: 104094ebc; end: 104094ee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104094ebc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_11305a408),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_11305a400));
  return;
}



/* Entry: 104094ee4; end: 104094f7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104094ee4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11305a558);
  *(undefined8 *)(unaff_x20 + _DAT_11305a438) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11305a440) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 104094f80; end: 104094fdf; -[_TtC24MmSystemScopeGraphBridge43SCApplicationStorageServicesSaberEntryPoint init] */

void FUN_104094f80(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MmSystemScopeGraphBridge.SCApplicationStorageServicesSaberEntryPoint",0x44,"init()",6,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104094fac);
  (*pcVar1)();
}



/* Entry: 104094fe0; end: 104095073; -[_TtC24MmSystemScopeGraphBridge43SCApplicationStorageServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104094fe0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11305a438));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305a440));
  return;
}



/* Entry: 104095074; end: 10409507b;  */

undefined8 FUN_104095074(void)

{
  return 0;
}



/* Entry: 10409507c; end: 1040950df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10409507c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11305a550);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1040950e0; end: 1040950e7;  */

void FUN_1040950e0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1040950e8; end: 104095187;  */

void FUN_1040950e8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104095188; end: 1040951a7;  */

void FUN_104095188(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1040951a8; end: 10409520b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040951a8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11305a550) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11305a558) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10409520c; end: 10409526b; -[_TtC24MmSystemScopeGraphBridge32MmSystemScopeGraphBridgeServices init] */

void FUN_10409520c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MmSystemScopeGraphBridge.MmSystemScopeGraphBridgeServices",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104095238);
  (*pcVar1)();
}



/* Entry: 10409526c; end: 1040952ff; -[_TtC24MmSystemScopeGraphBridge32MmSystemScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409526c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11305a558));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305a550));
  return;
}



/* Entry: 104095300; end: 104095337;  */

undefined1  [16] FUN_104095300(void)

{
  return ZEXT816(0x1107400f0);
}



/* Entry: 104095338; end: 10409537b; -[SCMmSystemScopeGraphBridgeSaberEntryPoint end] */

void FUN_104095338(undefined8 param_1)

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



/* Entry: 10409537c; end: 1040953af;  */

void FUN_10409537c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040953b0; end: 1040953f7; -[SCMmSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040953b0(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305a5b0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305a5b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305a5c0));
  return;
}



/* Entry: 1040953f8; end: 104095417;  */

void FUN_1040953f8(void)

{
  _objc_opt_self(&PTR_PTR_112988d10);
  return;
}



/* Entry: 104095418; end: 10409545b; -[SCSCApplicationStorageServicesSaberEntryPoint end] */

void FUN_104095418(undefined8 param_1)

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


