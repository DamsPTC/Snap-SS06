/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103e2f008; end: 103e2f017; -[_TtC26SCCameraActivePathServices26SCCameraActivePathServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2f008(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113016c48));
  return;
}



/* Entry: 103e2f018; end: 103e2f09f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e2f018(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a4d34c();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_113016c78) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_113016c80) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2f0a0);
  (*pcVar1)();
}



/* Entry: 103e2f0a0; end: 103e2f0ff; -[_TtC36ClientresUserSessionScopeGraphBridge51ClientresUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103e2f0a0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ClientresUserSessionScopeGraphBridge.ClientresUserSessionScopeGraphBridgeSaberEntryPoint"
             ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2f0cc);
  (*pcVar1)();
}



/* Entry: 103e2f100; end: 103e2f137; -[_TtC36ClientresUserSessionScopeGraphBridge51ClientresUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2f100(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113016c78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113016c80));
  return;
}



/* Entry: 103e2f138; end: 103e2f15f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2f138(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_113016c80),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_113016c78));
  return;
}



/* Entry: 103e2f160; end: 103e2f1fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e2f160(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113016dd0);
  *(undefined8 *)(unaff_x20 + _DAT_113016cb0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113016cb8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e2f1fc; end: 103e2f25b; -[_TtC36ClientresUserSessionScopeGraphBridge44SCMemoryUsageReporterServicesSaberEntryPoint init] */

void FUN_103e2f1fc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ClientresUserSessionScopeGraphBridge.SCMemoryUsageReporterServicesSaberEntryPoint",
             0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2f228);
  (*pcVar1)();
}



/* Entry: 103e2f25c; end: 103e2f2ef; -[_TtC36ClientresUserSessionScopeGraphBridge44SCMemoryUsageReporterServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2f25c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113016cb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113016cb8));
  return;
}



/* Entry: 103e2f2f0; end: 103e2f2f7;  */

undefined8 FUN_103e2f2f0(void)

{
  return 0;
}



/* Entry: 103e2f2f8; end: 103e2f35b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e2f2f8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113016dc8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e2f35c; end: 103e2f363;  */

void FUN_103e2f35c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e2f364; end: 103e2f403;  */

void FUN_103e2f364(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e2f404; end: 103e2f423;  */

void FUN_103e2f404(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e2f424; end: 103e2f487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2f424(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113016dc8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113016dd0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e2f488; end: 103e2f4e7; -[_TtC36ClientresUserSessionScopeGraphBridge44ClientresUserSessionScopeGraphBridgeServices init] */

void FUN_103e2f488(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ClientresUserSessionScopeGraphBridge.ClientresUserSessionScopeGraphBridgeServices",
             0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2f4b4);
  (*pcVar1)();
}



/* Entry: 103e2f4e8; end: 103e2f57b; -[_TtC36ClientresUserSessionScopeGraphBridge44ClientresUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2f4e8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113016dd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113016dc8));
  return;
}



/* Entry: 103e2f57c; end: 103e2f5b3;  */

undefined1  [16] FUN_103e2f57c(void)

{
  return ZEXT816(0x110716920);
}



/* Entry: 103e2f5b4; end: 103e2f5f7; -[SCClientresUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103e2f5b4(undefined8 param_1)

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



/* Entry: 103e2f5f8; end: 103e2f62b;  */

void FUN_103e2f5f8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e2f62c; end: 103e2f673; -[SCClientresUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2f62c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113016e28);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113016e30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113016e38));
  return;
}



/* Entry: 103e2f674; end: 103e2f693;  */

void FUN_103e2f674(void)

{
  _objc_opt_self(&PTR_PTR_112952a58);
  return;
}



/* Entry: 103e2f694; end: 103e2f6d7; -[SCSCMemoryUsageReporterServicesSaberEntryPoint end] */

void FUN_103e2f694(undefined8 param_1)

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



/* Entry: 103e2f6d8; end: 103e2f70b;  */

void FUN_103e2f6d8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e2f70c; end: 103e2f763; -[SCSCMemoryUsageReporterServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2f70c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113016e68);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113016e70);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113016e78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113016e80));
  return;
}



/* Entry: 103e2f764; end: 103e2f783;  */

void FUN_103e2f764(void)

{
  _objc_opt_self(&PTR_PTR_112952b20);
  return;
}



/* Entry: 103e2f784; end: 103e2f78f; -[SCSCImageFetchingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2f784(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113016eb0;
  _swift_beginAccess(param_1 + _DAT_113016eb0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e2f790; end: 103e2f79b; -[SCSCImageFetchingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2f790(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113016eb0;
  _swift_beginAccess(param_1 + _DAT_113016eb0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e2f79c; end: 103e2f7a7; -[SCSCImageFetchingServicesSaberServiceProvider clientresUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2f79c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113016eb8;
  _swift_beginAccess(param_1 + _DAT_113016eb8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e2f7a8; end: 103e2f7eb;  */

void FUN_103e2f7a8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e2f7ec; end: 103e2f7f7; -[SCSCImageFetchingServicesSaberServiceProvider setClientresUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2f7ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113016eb8;
  _swift_beginAccess(param_1 + _DAT_113016eb8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e2f7f8; end: 103e2f84b;  */

void FUN_103e2f7f8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e2f84c; end: 103e2fa5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e2f84c(void)

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
    func_0x000107c3fbfc();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103e2f388();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113016dc8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113016ec0);
      *(long *)(unaff_x20 + _DAT_113016ec0) = lVar4;
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
             "ClientresUserSessionScopeGraphBridge/SCSCImageFetchingServicesSaberServiceProvider.swift"
             ,0x58,2,0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2f978);
  (*pcVar1)();
}



/* Entry: 103e2fa60; end: 103e2fa93; -[SCSCImageFetchingServicesSaberServiceProvider provide] */

void FUN_103e2fa60(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e2f84c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e2fa94; end: 103e2fac7; -[SCSCImageFetchingServicesSaberServiceProvider __safeProvide] */

void FUN_103e2fa94(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e2f978();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e2fac8; end: 103e2fb0b; -[SCSCImageFetchingServicesSaberServiceProvider end] */

void FUN_103e2fac8(undefined8 param_1)

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



/* Entry: 103e2fb0c; end: 103e2fca3;  */

void FUN_103e2fb0c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0e401f0)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd00000000000002c,0x800000010f1bfe10,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "ClientresUserSessionScopeGraphBridge/SCSCImageFetchingServicesSaberServiceProvider.swift"
                   ,0x58,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2fca4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c534a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e2fca4; end: 103e2fd4f; -[SCSCImageFetchingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e2fca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103e2fb0c(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e2fd50; end: 103e2fdc3; -[SCSCImageFetchingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2fd50(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113016eb0,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113016eb8,0);
  *(undefined8 *)(param_1 + _DAT_113016ec0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e2fdc4; end: 103e2fdf7;  */

void FUN_103e2fdc4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e2fdf8; end: 103e2fe3f; -[SCSCImageFetchingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2fdf8(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113016eb0);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113016eb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113016ec0));
  return;
}



/* Entry: 103e2fe40; end: 103e2fe5f;  */

void FUN_103e2fe40(void)

{
  _objc_opt_self(&PTR_PTR_113016f08);
  return;
}



/* Entry: 103e2fe60; end: 103e2fee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e2fe60(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a4d994();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_113016f70) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_113016f78) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2fee8);
  (*pcVar1)();
}



/* Entry: 103e2fee8; end: 103e2ff47; -[_TtC29CmUserSessionScopeGraphBridge44CmUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103e2fee8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CmUserSessionScopeGraphBridge.CmUserSessionScopeGraphBridgeSaberEntryPoint",0x4a,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2ff14);
  (*pcVar1)();
}



/* Entry: 103e2ff48; end: 103e2ff7f; -[_TtC29CmUserSessionScopeGraphBridge44CmUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2ff48(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113016f70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113016f78));
  return;
}



/* Entry: 103e2ff80; end: 103e2ffa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2ff80(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_113016f78),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_113016f70));
  return;
}



/* Entry: 103e2ffa8; end: 103e30043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e2ffa8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_1130174a8);
  *(undefined8 *)(unaff_x20 + _DAT_113016fa8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113016fb0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e30044; end: 103e300a3; -[_TtC29CmUserSessionScopeGraphBridge40SCContentDeliveryServicesSaberEntryPoint init] */

void FUN_103e30044(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CmUserSessionScopeGraphBridge.SCContentDeliveryServicesSaberEntryPoint",0x46,"init()",
             6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e30070);
  (*pcVar1)();
}



/* Entry: 103e300a4; end: 103e30137; -[_TtC29CmUserSessionScopeGraphBridge40SCContentDeliveryServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e300a4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113016fa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113016fb0));
  return;
}



/* Entry: 103e30138; end: 103e3013f;  */

undefined8 FUN_103e30138(void)

{
  return 0;
}



/* Entry: 103e30140; end: 103e301db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e30140(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_1130174b0);
  *(undefined8 *)(unaff_x20 + _DAT_113016fe0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113016fe8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e301dc; end: 103e3023b; -[_TtC29CmUserSessionScopeGraphBridge47SCContentManagerPlaybackServicesSaberEntryPoint init] */

void FUN_103e301dc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CmUserSessionScopeGraphBridge.SCContentManagerPlaybackServicesSaberEntryPoint",0x4d,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e30208);
  (*pcVar1)();
}



/* Entry: 103e3023c; end: 103e302cf; -[_TtC29CmUserSessionScopeGraphBridge47SCContentManagerPlaybackServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e3023c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113016fe0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113016fe8));
  return;
}



/* Entry: 103e302d0; end: 103e302d7;  */

undefined8 FUN_103e302d0(void)

{
  return 0;
}



/* Entry: 103e302d8; end: 103e30373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e302d8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_1130174b8);
  *(undefined8 *)(unaff_x20 + _DAT_113017018) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113017020) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e30374; end: 103e303d3; -[_TtC29CmUserSessionScopeGraphBridge39SCContentManagerServicesSaberEntryPoint init] */

void FUN_103e30374(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CmUserSessionScopeGraphBridge.SCContentManagerServicesSaberEntryPoint",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e303a0);
  (*pcVar1)();
}



/* Entry: 103e303d4; end: 103e30467; -[_TtC29CmUserSessionScopeGraphBridge39SCContentManagerServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e303d4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113017018));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113017020));
  return;
}



/* Entry: 103e30468; end: 103e3046f;  */

undefined8 FUN_103e30468(void)

{
  return 0;
}



/* Entry: 103e30470; end: 103e3050b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e30470(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_1130174d8);
  *(undefined8 *)(unaff_x20 + _DAT_113017050) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113017058) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e3050c; end: 103e3056b; -[_TtC29CmUserSessionScopeGraphBridge51SCOnDemandResourceDownloaderServicesSaberEntryPoint init] */

void FUN_103e3050c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CmUserSessionScopeGraphBridge.SCOnDemandResourceDownloaderServicesSaberEntryPoint",
             0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e30538);
  (*pcVar1)();
}



/* Entry: 103e3056c; end: 103e305ff; -[_TtC29CmUserSessionScopeGraphBridge51SCOnDemandResourceDownloaderServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e3056c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113017050));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113017058));
  return;
}



/* Entry: 103e30600; end: 103e30607;  */

undefined8 FUN_103e30600(void)

{
  return 0;
}



/* Entry: 103e30608; end: 103e3066b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e30608(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130174c0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e3066c; end: 103e30673;  */

void FUN_103e3066c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e30674; end: 103e30713;  */

void FUN_103e30674(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e30714; end: 103e30733;  */

void FUN_103e30714(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e30734; end: 103e30797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e30734(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130174c8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e30798; end: 103e3079f;  */

void FUN_103e30798(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e307a0; end: 103e3083f;  */

void FUN_103e307a0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e30840; end: 103e3085f;  */

void FUN_103e30840(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e30860; end: 103e308c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e30860(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130174d0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e308c4; end: 103e308cb;  */

void FUN_103e308c4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e308cc; end: 103e308ef;  */

void FUN_103e308cc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e308f0; end: 103e3090f;  */

void FUN_103e308f0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e30910; end: 103e30973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e30910(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130174e0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e30974; end: 103e3097b;  */

void FUN_103e30974(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e3097c; end: 103e30a1b;  */

void FUN_103e3097c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e30a1c; end: 103e30a3b;  */

void FUN_103e30a1c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e30a3c; end: 103e30a9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e30a3c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130174e8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e30aa0; end: 103e30aa7;  */

void FUN_103e30aa0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e30aa8; end: 103e30b47;  */

void FUN_103e30aa8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e30b48; end: 103e30b67;  */

void FUN_103e30b48(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e30b68; end: 103e30c53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e30b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130174a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130174b0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130174b8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130174c0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_1130174c8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_1130174d0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_1130174d8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_1130174e0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_1130174e8) = param_9;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e30c54; end: 103e30cb3; -[_TtC29CmUserSessionScopeGraphBridge37CmUserSessionScopeGraphBridgeServices init] */

void FUN_103e30c54(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CmUserSessionScopeGraphBridge.CmUserSessionScopeGraphBridgeServices",0x43,"init()",6,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e30c80);
  (*pcVar1)();
}



/* Entry: 103e30cb4; end: 103e30db7; -[_TtC29CmUserSessionScopeGraphBridge37CmUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e30cb4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130174a8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130174b0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130174b8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130174d8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130174c0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130174c8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130174d0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130174e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130174e8));
  return;
}



/* Entry: 103e30db8; end: 103e30def;  */

undefined1  [16] FUN_103e30db8(void)

{
  return ZEXT816(0x110716bb8);
}



/* Entry: 103e30df0; end: 103e30e33; -[SCCmUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103e30df0(undefined8 param_1)

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



/* Entry: 103e30e34; end: 103e30e67;  */

void FUN_103e30e34(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e30e68; end: 103e30eaf; -[SCCmUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e30e68(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113017540);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113017548));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113017550));
  return;
}



/* Entry: 103e30eb0; end: 103e30ecf;  */

void FUN_103e30eb0(void)

{
  _objc_opt_self(&PTR_PTR_112953120);
  return;
}



/* Entry: 103e30ed0; end: 103e30f13; -[SCSCContentDeliveryServicesSaberEntryPoint end] */

void FUN_103e30ed0(undefined8 param_1)

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



/* Entry: 103e30f14; end: 103e30f47;  */

void FUN_103e30f14(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e30f48; end: 103e30f9f; -[SCSCContentDeliveryServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e30f48(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113017580);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113017588);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113017590));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113017598));
  return;
}



/* Entry: 103e30fa0; end: 103e30fbf;  */

void FUN_103e30fa0(void)

{
  _objc_opt_self(&PTR_PTR_1129531e8);
  return;
}



/* Entry: 103e30fc0; end: 103e31003; -[SCSCContentManagerPlaybackServicesSaberEntryPoint end] */

void FUN_103e30fc0(undefined8 param_1)

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



/* Entry: 103e31004; end: 103e31037;  */

void FUN_103e31004(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e31038; end: 103e3108f; -[SCSCContentManagerPlaybackServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e31038(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130175c8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130175d0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130175d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130175e0));
  return;
}



/* Entry: 103e31090; end: 103e310af;  */

void FUN_103e31090(void)

{
  _objc_opt_self(&PTR_PTR_1129532b8);
  return;
}



/* Entry: 103e310b0; end: 103e310f3; -[SCSCContentManagerServicesSaberEntryPoint end] */

void FUN_103e310b0(undefined8 param_1)

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



/* Entry: 103e310f4; end: 103e31127;  */

void FUN_103e310f4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e31128; end: 103e3117f; -[SCSCContentManagerServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e31128(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113017610);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113017618);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113017620));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113017628));
  return;
}


