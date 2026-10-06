/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103e2c57c; end: 103e2c713;  */

void FUN_103e2c57c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e408c0)) {
      uVar2 = 0xd000000000000029;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000029,0x800000010f1bf740,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "CameraUserSessionScopeGraphBridge/SCSCCameraCircumstanceEngineServicesSaberServiceProvider.swift"
                   ,0x60,2,0x39,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2c714);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c53118();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e2c714; end: 103e2c7bf; -[SCSCCameraCircumstanceEngineServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e2c714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103e2c57c(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e2c7c0; end: 103e2c833; -[SCSCCameraCircumstanceEngineServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2c7c0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_1130166c8,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_1130166d0,0);
  *(undefined8 *)(param_1 + _DAT_1130166d8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e2c834; end: 103e2c867;  */

void FUN_103e2c834(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e2c868; end: 103e2c8af; -[SCSCCameraCircumstanceEngineServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2c868(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130166c8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130166d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130166d8));
  return;
}



/* Entry: 103e2c8b0; end: 103e2c8cf;  */

void FUN_103e2c8b0(void)

{
  _objc_opt_self(&PTR_PTR_113016720);
  return;
}



/* Entry: 103e2c8d0; end: 103e2c9fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e2c8d0(void)

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
      func_0x000100b593a4();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113016578);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113016798);
      *(long *)(unaff_x20 + _DAT_113016798) = lVar4;
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
             "CameraUserSessionScopeGraphBridge/SCSCCameraConfigurationServicesSaberServiceProvider.swift"
             ,0x5b,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2c9fc);
  (*pcVar1)();
}



/* Entry: 103e2c9fc; end: 103e2ca2f; -[SCSCCameraConfigurationServicesSaberServiceProvider provide] */

void FUN_103e2c9fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e2c8d0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e2ca30; end: 103e2ca73; -[SCSCCameraConfigurationServicesSaberServiceProvider end] */

void FUN_103e2ca30(undefined8 param_1)

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



/* Entry: 103e2ca74; end: 103e2caa7;  */

void FUN_103e2ca74(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e2caa8; end: 103e2caef; -[SCSCCameraConfigurationServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2caa8(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113016788);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113016790);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113016798));
  return;
}



/* Entry: 103e2caf0; end: 103e2cb0f;  */

void FUN_103e2caf0(void)

{
  _objc_opt_self(&PTR_PTR_1130167e0);
  return;
}



/* Entry: 103e2cb10; end: 103e2cb1b; -[SCSCCameraDimensionsServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2cb10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113016848;
  _swift_beginAccess(param_1 + _DAT_113016848,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e2cb1c; end: 103e2cb27; -[SCSCCameraDimensionsServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2cb1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113016848;
  _swift_beginAccess(param_1 + _DAT_113016848,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e2cb28; end: 103e2cb33; -[SCSCCameraDimensionsServicesSaberServiceProvider cameraUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2cb28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113016850;
  _swift_beginAccess(param_1 + _DAT_113016850,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e2cb34; end: 103e2cb77;  */

void FUN_103e2cb34(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e2cb78; end: 103e2cb83; -[SCSCCameraDimensionsServicesSaberServiceProvider setCameraUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2cb78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113016850;
  _swift_beginAccess(param_1 + _DAT_113016850,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e2cb84; end: 103e2cbd7;  */

void FUN_103e2cb84(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e2cbd8; end: 103e2cdeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e2cbd8(void)

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
      func_0x000103e2b760();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113016580);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113016858);
      *(long *)(unaff_x20 + _DAT_113016858) = lVar4;
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
             "CameraUserSessionScopeGraphBridge/SCSCCameraDimensionsServicesSaberServiceProvider.swift"
             ,0x58,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2cd04);
  (*pcVar1)();
}



/* Entry: 103e2cdec; end: 103e2ce1f; -[SCSCCameraDimensionsServicesSaberServiceProvider provide] */

void FUN_103e2cdec(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e2cbd8();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e2ce20; end: 103e2ce53; -[SCSCCameraDimensionsServicesSaberServiceProvider __safeProvide] */

void FUN_103e2ce20(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e2cd04();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e2ce54; end: 103e2ce97; -[SCSCCameraDimensionsServicesSaberServiceProvider end] */

void FUN_103e2ce54(undefined8 param_1)

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



/* Entry: 103e2ce98; end: 103e2d02f;  */

void FUN_103e2ce98(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e408c0)) {
      uVar2 = 0xd000000000000029;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000029,0x800000010f1bf740,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "CameraUserSessionScopeGraphBridge/SCSCCameraDimensionsServicesSaberServiceProvider.swift"
                   ,0x58,2,0x39,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2d030);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c53118();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e2d030; end: 103e2d0db; -[SCSCCameraDimensionsServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e2d030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103e2ce98(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e2d0dc; end: 103e2d14f; -[SCSCCameraDimensionsServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2d0dc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113016848,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113016850,0);
  *(undefined8 *)(param_1 + _DAT_113016858) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e2d150; end: 103e2d183;  */

void FUN_103e2d150(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e2d184; end: 103e2d1cb; -[SCSCCameraDimensionsServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2d184(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113016848);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113016850);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113016858));
  return;
}



/* Entry: 103e2d1cc; end: 103e2d1eb;  */

void FUN_103e2d1cc(void)

{
  _objc_opt_self(&PTR_PTR_1130168a0);
  return;
}



/* Entry: 103e2d1ec; end: 103e2d1f7; -[SCSCCameraFeatureLoggingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2d1ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113016908;
  _swift_beginAccess(param_1 + _DAT_113016908,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e2d1f8; end: 103e2d203; -[SCSCCameraFeatureLoggingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2d1f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113016908;
  _swift_beginAccess(param_1 + _DAT_113016908,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e2d204; end: 103e2d20f; -[SCSCCameraFeatureLoggingServicesSaberServiceProvider cameraUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2d204(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113016910;
  _swift_beginAccess(param_1 + _DAT_113016910,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e2d210; end: 103e2d253;  */

void FUN_103e2d210(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e2d254; end: 103e2d25f; -[SCSCCameraFeatureLoggingServicesSaberServiceProvider setCameraUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2d254(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113016910;
  _swift_beginAccess(param_1 + _DAT_113016910,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e2d260; end: 103e2d2b3;  */

void FUN_103e2d260(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e2d2b4; end: 103e2d4c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e2d2b4(void)

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
      func_0x000103e2b88c();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113016588);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113016918);
      *(long *)(unaff_x20 + _DAT_113016918) = lVar4;
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
             "CameraUserSessionScopeGraphBridge/SCSCCameraFeatureLoggingServicesSaberServiceProvider.swift"
             ,0x5c,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2d3e0);
  (*pcVar1)();
}



/* Entry: 103e2d4c8; end: 103e2d4fb; -[SCSCCameraFeatureLoggingServicesSaberServiceProvider provide] */

void FUN_103e2d4c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e2d2b4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e2d4fc; end: 103e2d52f; -[SCSCCameraFeatureLoggingServicesSaberServiceProvider __safeProvide] */

void FUN_103e2d4fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e2d3e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e2d530; end: 103e2d573; -[SCSCCameraFeatureLoggingServicesSaberServiceProvider end] */

void FUN_103e2d530(undefined8 param_1)

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



/* Entry: 103e2d574; end: 103e2d70b;  */

void FUN_103e2d574(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e408c0)) {
      uVar2 = 0xd000000000000029;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000029,0x800000010f1bf740,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "CameraUserSessionScopeGraphBridge/SCSCCameraFeatureLoggingServicesSaberServiceProvider.swift"
                   ,0x5c,2,0x39,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2d70c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c53118();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e2d70c; end: 103e2d7b7; -[SCSCCameraFeatureLoggingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e2d70c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103e2d574(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e2d7b8; end: 103e2d82b; -[SCSCCameraFeatureLoggingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2d7b8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113016908,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113016910,0);
  *(undefined8 *)(param_1 + _DAT_113016918) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e2d82c; end: 103e2d85f;  */

void FUN_103e2d82c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e2d860; end: 103e2d8a7; -[SCSCCameraFeatureLoggingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2d860(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113016908);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113016910);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113016918));
  return;
}



/* Entry: 103e2d8a8; end: 103e2d8c7;  */

void FUN_103e2d8a8(void)

{
  _objc_opt_self(&PTR_PTR_113016960);
  return;
}



/* Entry: 103e2d8c8; end: 103e2d8d3; -[SCSCCameraMLServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2d8c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130169c8;
  _swift_beginAccess(param_1 + _DAT_1130169c8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e2d8d4; end: 103e2d8df; -[SCSCCameraMLServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2d8d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130169c8;
  _swift_beginAccess(param_1 + _DAT_1130169c8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e2d8e0; end: 103e2d8eb; -[SCSCCameraMLServicesSaberServiceProvider cameraUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2d8e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130169d0;
  _swift_beginAccess(param_1 + _DAT_1130169d0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e2d8ec; end: 103e2d92f;  */

void FUN_103e2d8ec(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e2d930; end: 103e2d93b; -[SCSCCameraMLServicesSaberServiceProvider setCameraUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2d930(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130169d0;
  _swift_beginAccess(param_1 + _DAT_1130169d0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e2d93c; end: 103e2d98f;  */

void FUN_103e2d93c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e2d990; end: 103e2dba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e2d990(void)

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
      func_0x000103e2b9b8();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113016590);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130169d8);
      *(long *)(unaff_x20 + _DAT_1130169d8) = lVar4;
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
             "CameraUserSessionScopeGraphBridge/SCSCCameraMLServicesSaberServiceProvider.swift",0x50
             ,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2dabc);
  (*pcVar1)();
}



/* Entry: 103e2dba4; end: 103e2dbd7; -[SCSCCameraMLServicesSaberServiceProvider provide] */

void FUN_103e2dba4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e2d990();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e2dbd8; end: 103e2dc0b; -[SCSCCameraMLServicesSaberServiceProvider __safeProvide] */

void FUN_103e2dbd8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e2dabc();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e2dc0c; end: 103e2dc4f; -[SCSCCameraMLServicesSaberServiceProvider end] */

void FUN_103e2dc0c(undefined8 param_1)

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



/* Entry: 103e2dc50; end: 103e2dde7;  */

void FUN_103e2dc50(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e408c0)) {
      uVar2 = 0xd000000000000029;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000029,0x800000010f1bf740,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "CameraUserSessionScopeGraphBridge/SCSCCameraMLServicesSaberServiceProvider.swift"
                   ,0x50,2,0x39,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2dde8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c53118();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e2dde8; end: 103e2de93; -[SCSCCameraMLServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e2dde8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103e2dc50(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e2de94; end: 103e2df07; -[SCSCCameraMLServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2de94(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_1130169c8,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_1130169d0,0);
  *(undefined8 *)(param_1 + _DAT_1130169d8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e2df08; end: 103e2df3b;  */

void FUN_103e2df08(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e2df3c; end: 103e2df83; -[SCSCCameraMLServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2df3c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130169c8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130169d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130169d8));
  return;
}



/* Entry: 103e2df84; end: 103e2dfa3;  */

void FUN_103e2df84(void)

{
  _objc_opt_self(&PTR_PTR_113016a20);
  return;
}



/* Entry: 103e2dfa4; end: 103e2dfaf; -[SCSCCameraUserLoggingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2dfa4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113016a88;
  _swift_beginAccess(param_1 + _DAT_113016a88,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e2dfb0; end: 103e2dfbb; -[SCSCCameraUserLoggingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2dfb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113016a88;
  _swift_beginAccess(param_1 + _DAT_113016a88,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e2dfbc; end: 103e2dfc7; -[SCSCCameraUserLoggingServicesSaberServiceProvider cameraUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2dfbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113016a90;
  _swift_beginAccess(param_1 + _DAT_113016a90,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e2dfc8; end: 103e2e00b;  */

void FUN_103e2dfc8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e2e00c; end: 103e2e017; -[SCSCCameraUserLoggingServicesSaberServiceProvider setCameraUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2e00c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113016a90;
  _swift_beginAccess(param_1 + _DAT_113016a90,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e2e018; end: 103e2e06b;  */

void FUN_103e2e018(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e2e06c; end: 103e2e27f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e2e06c(void)

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
      func_0x000103e2bae4();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113016598);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113016a98);
      *(long *)(unaff_x20 + _DAT_113016a98) = lVar4;
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
             "CameraUserSessionScopeGraphBridge/SCSCCameraUserLoggingServicesSaberServiceProvider.swift"
             ,0x59,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2e198);
  (*pcVar1)();
}



/* Entry: 103e2e280; end: 103e2e2b3; -[SCSCCameraUserLoggingServicesSaberServiceProvider provide] */

void FUN_103e2e280(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e2e06c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e2e2b4; end: 103e2e2e7; -[SCSCCameraUserLoggingServicesSaberServiceProvider __safeProvide] */

void FUN_103e2e2b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e2e198();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e2e2e8; end: 103e2e32b; -[SCSCCameraUserLoggingServicesSaberServiceProvider end] */

void FUN_103e2e2e8(undefined8 param_1)

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



/* Entry: 103e2e32c; end: 103e2e4c3;  */

void FUN_103e2e32c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e408c0)) {
      uVar2 = 0xd000000000000029;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000029,0x800000010f1bf740,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "CameraUserSessionScopeGraphBridge/SCSCCameraUserLoggingServicesSaberServiceProvider.swift"
                   ,0x59,2,0x39,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2e4c4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c53118();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e2e4c4; end: 103e2e56f; -[SCSCCameraUserLoggingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e2e4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103e2e32c(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e2e570; end: 103e2e5e3; -[SCSCCameraUserLoggingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2e570(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113016a88,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113016a90,0);
  *(undefined8 *)(param_1 + _DAT_113016a98) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e2e5e4; end: 103e2e617;  */

void FUN_103e2e5e4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e2e618; end: 103e2e65f; -[SCSCCameraUserLoggingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2e618(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113016a88);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113016a90);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113016a98));
  return;
}



/* Entry: 103e2e660; end: 103e2e67f;  */

void FUN_103e2e660(void)

{
  _objc_opt_self(&PTR_PTR_113016ae0);
  return;
}



/* Entry: 103e2e680; end: 103e2e68b; -[SCSCViewfinderDataSourceFactoryServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2e680(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113016b48;
  _swift_beginAccess(param_1 + _DAT_113016b48,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e2e68c; end: 103e2e697; -[SCSCViewfinderDataSourceFactoryServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2e68c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113016b48;
  _swift_beginAccess(param_1 + _DAT_113016b48,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e2e698; end: 103e2e6a3; -[SCSCViewfinderDataSourceFactoryServicesSaberServiceProvider cameraUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2e698(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113016b50;
  _swift_beginAccess(param_1 + _DAT_113016b50,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e2e6a4; end: 103e2e6e7;  */

void FUN_103e2e6a4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e2e6e8; end: 103e2e6f3; -[SCSCViewfinderDataSourceFactoryServicesSaberServiceProvider setCameraUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2e6e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113016b50;
  _swift_beginAccess(param_1 + _DAT_113016b50,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e2e6f4; end: 103e2e747;  */

void FUN_103e2e6f4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e2e748; end: 103e2e95b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e2e748(void)

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
      func_0x000103e2bc10();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_1130165a0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113016b58);
      *(long *)(unaff_x20 + _DAT_113016b58) = lVar4;
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
             "CameraUserSessionScopeGraphBridge/SCSCViewfinderDataSourceFactoryServicesSaberServiceProvider.swift"
             ,99,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2e874);
  (*pcVar1)();
}



/* Entry: 103e2e95c; end: 103e2e98f; -[SCSCViewfinderDataSourceFactoryServicesSaberServiceProvider provide] */

void FUN_103e2e95c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e2e748();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e2e990; end: 103e2e9c3; -[SCSCViewfinderDataSourceFactoryServicesSaberServiceProvider __safeProvide] */

void FUN_103e2e990(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e2e874();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e2e9c4; end: 103e2ea07; -[SCSCViewfinderDataSourceFactoryServicesSaberServiceProvider end] */

void FUN_103e2e9c4(undefined8 param_1)

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



/* Entry: 103e2ea08; end: 103e2eb9f;  */

void FUN_103e2ea08(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e408c0)) {
      uVar2 = 0xd000000000000029;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000029,0x800000010f1bf740,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "CameraUserSessionScopeGraphBridge/SCSCViewfinderDataSourceFactoryServicesSaberServiceProvider.swift"
                   ,99,2,0x39,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2eba0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c53118();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e2eba0; end: 103e2ec4b; -[SCSCViewfinderDataSourceFactoryServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e2eba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103e2ea08(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e2ec4c; end: 103e2ecbf; -[SCSCViewfinderDataSourceFactoryServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2ec4c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113016b48,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113016b50,0);
  *(undefined8 *)(param_1 + _DAT_113016b58) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e2ecc0; end: 103e2ecf3;  */

void FUN_103e2ecc0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e2ecf4; end: 103e2ed3b; -[SCSCViewfinderDataSourceFactoryServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2ecf4(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113016b48);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113016b50);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113016b58));
  return;
}



/* Entry: 103e2ed3c; end: 103e2ed5b;  */

void FUN_103e2ed3c(void)

{
  _objc_opt_self(&PTR_PTR_113016ba0);
  return;
}



/* Entry: 103e2ed5c; end: 103e2ee0f;  */

undefined8 FUN_103e2ed5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 unaff_x20;
  
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(in_x4,in_x5);
  func_0x000107c412b0(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x4);
  return unaff_x20;
}



/* Entry: 103e2ee10; end: 103e2ee1f; -[_TtC37SCViewfinderDataSourceFactoryServices37SCViewfinderDataSourceFactoryServices cameraDataSourceFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2ee10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113016c08));
  return;
}



/* Entry: 103e2ee20; end: 103e2ee2f; -[_TtC37SCViewfinderDataSourceFactoryServices37SCViewfinderDataSourceFactoryServices cameraLegacyDataSourceFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2ee20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113016c10));
  return;
}



/* Entry: 103e2ee30; end: 103e2ee3f; -[_TtC37SCViewfinderDataSourceFactoryServices37SCViewfinderDataSourceFactoryServices plainBuffersDataSourceFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2ee30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113016c18));
  return;
}



/* Entry: 103e2ee40; end: 103e2eeb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2ee40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113016c08) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113016c10) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113016c18) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e2eeb4; end: 103e2ef13; -[_TtC37SCViewfinderDataSourceFactoryServices37SCViewfinderDataSourceFactoryServices init] */

void FUN_103e2eeb4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCViewfinderDataSourceFactoryServices.SCViewfinderDataSourceFactoryServices",0x4b,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2eee0);
  (*pcVar1)();
}



/* Entry: 103e2ef14; end: 103e2efa7; -[_TtC37SCViewfinderDataSourceFactoryServices37SCViewfinderDataSourceFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2ef14(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113016c08));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113016c10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113016c18));
  return;
}



/* Entry: 103e2efa8; end: 103e2f007; -[_TtC26SCCameraActivePathServices26SCCameraActivePathServices init] */

void FUN_103e2efa8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCameraActivePathServices.SCCameraActivePathServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e2efd4);
  (*pcVar1)();
}


