/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103e8da78; end: 103e8da83; -[SCSCLensUnlockableMetadataServicesSaberServiceProvider setLensUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8da78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130296b0;
  _swift_beginAccess(param_1 + _DAT_1130296b0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e8da84; end: 103e8dad7;  */

void FUN_103e8da84(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e8dad8; end: 103e8dceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e8dad8(void)

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
    func_0x000107c4b520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103e764e8();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_1130267e0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130296b8);
      *(long *)(unaff_x20 + _DAT_1130296b8) = lVar4;
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
             "LensUserSessionScopeGraphBridge/SCSCLensUnlockableMetadataServicesSaberServiceProvider.swift"
             ,0x5c,2,0x6c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e8dc04);
  (*pcVar1)();
}



/* Entry: 103e8dcec; end: 103e8dd1f; -[SCSCLensUnlockableMetadataServicesSaberServiceProvider provide] */

void FUN_103e8dcec(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e8dad8();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e8dd20; end: 103e8dd53; -[SCSCLensUnlockableMetadataServicesSaberServiceProvider __safeProvide] */

void FUN_103e8dd20(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e8dc04();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e8dd54; end: 103e8dd97; -[SCSCLensUnlockableMetadataServicesSaberServiceProvider end] */

void FUN_103e8dd54(undefined8 param_1)

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



/* Entry: 103e8dd98; end: 103e8df2f;  */

void FUN_103e8dd98(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e36f20)) {
      uVar2 = 0xd000000000000027;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000027,0x800000010f1c90e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "LensUserSessionScopeGraphBridge/SCSCLensUnlockableMetadataServicesSaberServiceProvider.swift"
                   ,0x5c,2,0x81,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e8df30);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c55ef0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e8df30; end: 103e8dfdb; -[SCSCLensUnlockableMetadataServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e8df30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103e8dd98(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e8dfdc; end: 103e8e04f; -[SCSCLensUnlockableMetadataServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8dfdc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_1130296a8,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_1130296b0,0);
  *(undefined8 *)(param_1 + _DAT_1130296b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e8e050; end: 103e8e083;  */

void FUN_103e8e050(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e8e084; end: 103e8e0cb; -[SCSCLensUnlockableMetadataServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8e084(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130296a8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130296b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130296b8));
  return;
}



/* Entry: 103e8e0cc; end: 103e8e0eb;  */

void FUN_103e8e0cc(void)

{
  _objc_opt_self(&PTR_PTR_113029700);
  return;
}



/* Entry: 103e8e0ec; end: 103e8e0f7; -[SCSCLensUnlockerServiceSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8e0ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113029768;
  _swift_beginAccess(param_1 + _DAT_113029768,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e8e0f8; end: 103e8e103; -[SCSCLensUnlockerServiceSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8e0f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113029768;
  _swift_beginAccess(param_1 + _DAT_113029768,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e8e104; end: 103e8e10f; -[SCSCLensUnlockerServiceSaberServiceProvider lensUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8e104(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113029770;
  _swift_beginAccess(param_1 + _DAT_113029770,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e8e110; end: 103e8e153;  */

void FUN_103e8e110(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e8e154; end: 103e8e15f; -[SCSCLensUnlockerServiceSaberServiceProvider setLensUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8e154(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113029770;
  _swift_beginAccess(param_1 + _DAT_113029770,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e8e160; end: 103e8e1b3;  */

void FUN_103e8e160(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e8e1b4; end: 103e8e3c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e8e1b4(void)

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
    func_0x000107c4b520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103e76614();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_1130267e8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113029778);
      *(long *)(unaff_x20 + _DAT_113029778) = lVar4;
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
             "LensUserSessionScopeGraphBridge/SCSCLensUnlockerServiceSaberServiceProvider.swift",
             0x51,2,0x6c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e8e2e0);
  (*pcVar1)();
}



/* Entry: 103e8e3c8; end: 103e8e3fb; -[SCSCLensUnlockerServiceSaberServiceProvider provide] */

void FUN_103e8e3c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e8e1b4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e8e3fc; end: 103e8e42f; -[SCSCLensUnlockerServiceSaberServiceProvider __safeProvide] */

void FUN_103e8e3fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e8e2e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e8e430; end: 103e8e473; -[SCSCLensUnlockerServiceSaberServiceProvider end] */

void FUN_103e8e430(undefined8 param_1)

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



/* Entry: 103e8e474; end: 103e8e60b;  */

void FUN_103e8e474(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e36f20)) {
      uVar2 = 0xd000000000000027;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000027,0x800000010f1c90e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "LensUserSessionScopeGraphBridge/SCSCLensUnlockerServiceSaberServiceProvider.swift"
                   ,0x51,2,0x81,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e8e60c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c55ef0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e8e60c; end: 103e8e6b7; -[SCSCLensUnlockerServiceSaberServiceProvider setValue:forIvarName:] */

void FUN_103e8e60c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103e8e474(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e8e6b8; end: 103e8e72b; -[SCSCLensUnlockerServiceSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8e6b8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113029768,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113029770,0);
  *(undefined8 *)(param_1 + _DAT_113029778) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e8e72c; end: 103e8e75f;  */

void FUN_103e8e72c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e8e760; end: 103e8e7a7; -[SCSCLensUnlockerServiceSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8e760(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113029768);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113029770);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113029778));
  return;
}



/* Entry: 103e8e7a8; end: 103e8e7c7;  */

void FUN_103e8e7a8(void)

{
  _objc_opt_self(&PTR_PTR_1130297c0);
  return;
}



/* Entry: 103e8e7c8; end: 103e8e7d3; -[SCSCLensUserDataProviderServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8e7c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113029828;
  _swift_beginAccess(param_1 + _DAT_113029828,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e8e7d4; end: 103e8e7df; -[SCSCLensUserDataProviderServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8e7d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113029828;
  _swift_beginAccess(param_1 + _DAT_113029828,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e8e7e0; end: 103e8e7eb; -[SCSCLensUserDataProviderServicesSaberServiceProvider lensUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8e7e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113029830;
  _swift_beginAccess(param_1 + _DAT_113029830,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e8e7ec; end: 103e8e82f;  */

void FUN_103e8e7ec(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e8e830; end: 103e8e83b; -[SCSCLensUserDataProviderServicesSaberServiceProvider setLensUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8e830(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113029830;
  _swift_beginAccess(param_1 + _DAT_113029830,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e8e83c; end: 103e8e88f;  */

void FUN_103e8e83c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e8e890; end: 103e8eaa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e8e890(void)

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
    func_0x000107c4b520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103e76740();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_1130267f0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113029838);
      *(long *)(unaff_x20 + _DAT_113029838) = lVar4;
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
             "LensUserSessionScopeGraphBridge/SCSCLensUserDataProviderServicesSaberServiceProvider.swift"
             ,0x5a,2,0x6c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e8e9bc);
  (*pcVar1)();
}



/* Entry: 103e8eaa4; end: 103e8ead7; -[SCSCLensUserDataProviderServicesSaberServiceProvider provide] */

void FUN_103e8eaa4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e8e890();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e8ead8; end: 103e8eb0b; -[SCSCLensUserDataProviderServicesSaberServiceProvider __safeProvide] */

void FUN_103e8ead8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e8e9bc();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e8eb0c; end: 103e8eb4f; -[SCSCLensUserDataProviderServicesSaberServiceProvider end] */

void FUN_103e8eb0c(undefined8 param_1)

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



/* Entry: 103e8eb50; end: 103e8ece7;  */

void FUN_103e8eb50(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e36f20)) {
      uVar2 = 0xd000000000000027;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000027,0x800000010f1c90e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "LensUserSessionScopeGraphBridge/SCSCLensUserDataProviderServicesSaberServiceProvider.swift"
                   ,0x5a,2,0x81,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e8ece8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c55ef0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e8ece8; end: 103e8ed93; -[SCSCLensUserDataProviderServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e8ece8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103e8eb50(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e8ed94; end: 103e8ee07; -[SCSCLensUserDataProviderServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8ed94(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113029828,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113029830,0);
  *(undefined8 *)(param_1 + _DAT_113029838) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e8ee08; end: 103e8ee3b;  */

void FUN_103e8ee08(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e8ee3c; end: 103e8ee83; -[SCSCLensUserDataProviderServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8ee3c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113029828);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113029830);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113029838));
  return;
}



/* Entry: 103e8ee84; end: 103e8eea3;  */

void FUN_103e8ee84(void)

{
  _objc_opt_self(&PTR_PTR_113029880);
  return;
}



/* Entry: 103e8eea4; end: 103e8eeaf; -[SCSCLensesStudySettingsProviderServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8eea4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130298e8;
  _swift_beginAccess(param_1 + _DAT_1130298e8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e8eeb0; end: 103e8eebb; -[SCSCLensesStudySettingsProviderServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8eeb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130298e8;
  _swift_beginAccess(param_1 + _DAT_1130298e8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e8eebc; end: 103e8eec7; -[SCSCLensesStudySettingsProviderServicesSaberServiceProvider lensUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8eebc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130298f0;
  _swift_beginAccess(param_1 + _DAT_1130298f0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e8eec8; end: 103e8ef0b;  */

void FUN_103e8eec8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e8ef0c; end: 103e8ef17; -[SCSCLensesStudySettingsProviderServicesSaberServiceProvider setLensUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8ef0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130298f0;
  _swift_beginAccess(param_1 + _DAT_1130298f0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e8ef18; end: 103e8ef6b;  */

void FUN_103e8ef18(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e8ef6c; end: 103e8f17f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e8ef6c(void)

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
    func_0x000107c4b520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103e7686c();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113026800);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130298f8);
      *(long *)(unaff_x20 + _DAT_1130298f8) = lVar4;
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
             "LensUserSessionScopeGraphBridge/SCSCLensesStudySettingsProviderServicesSaberServiceProvider.swift"
             ,0x61,2,0x6c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e8f098);
  (*pcVar1)();
}



/* Entry: 103e8f180; end: 103e8f1b3; -[SCSCLensesStudySettingsProviderServicesSaberServiceProvider provide] */

void FUN_103e8f180(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e8ef6c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e8f1b4; end: 103e8f1e7; -[SCSCLensesStudySettingsProviderServicesSaberServiceProvider __safeProvide] */

void FUN_103e8f1b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e8f098();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e8f1e8; end: 103e8f22b; -[SCSCLensesStudySettingsProviderServicesSaberServiceProvider end] */

void FUN_103e8f1e8(undefined8 param_1)

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



/* Entry: 103e8f22c; end: 103e8f3c3;  */

void FUN_103e8f22c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e36f20)) {
      uVar2 = 0xd000000000000027;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000027,0x800000010f1c90e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "LensUserSessionScopeGraphBridge/SCSCLensesStudySettingsProviderServicesSaberServiceProvider.swift"
                   ,0x61,2,0x81,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e8f3c4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c55ef0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e8f3c4; end: 103e8f46f; -[SCSCLensesStudySettingsProviderServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e8f3c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103e8f22c(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e8f470; end: 103e8f4e3; -[SCSCLensesStudySettingsProviderServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8f470(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_1130298e8,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_1130298f0,0);
  *(undefined8 *)(param_1 + _DAT_1130298f8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e8f4e4; end: 103e8f517;  */

void FUN_103e8f4e4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e8f518; end: 103e8f55f; -[SCSCLensesStudySettingsProviderServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8f518(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130298e8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130298f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130298f8));
  return;
}



/* Entry: 103e8f560; end: 103e8f57f;  */

void FUN_103e8f560(void)

{
  _objc_opt_self(&PTR_PTR_113029940);
  return;
}



/* Entry: 103e8f580; end: 103e8f58b; -[SCSCNGLStudySettingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8f580(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130299a8;
  _swift_beginAccess(param_1 + _DAT_1130299a8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e8f58c; end: 103e8f597; -[SCSCNGLStudySettingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8f58c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130299a8;
  _swift_beginAccess(param_1 + _DAT_1130299a8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e8f598; end: 103e8f5a3; -[SCSCNGLStudySettingServicesSaberServiceProvider lensUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8f598(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130299b0;
  _swift_beginAccess(param_1 + _DAT_1130299b0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e8f5a4; end: 103e8f5e7;  */

void FUN_103e8f5a4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e8f5e8; end: 103e8f5f3; -[SCSCNGLStudySettingServicesSaberServiceProvider setLensUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8f5e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130299b0;
  _swift_beginAccess(param_1 + _DAT_1130299b0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e8f5f4; end: 103e8f647;  */

void FUN_103e8f5f4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e8f648; end: 103e8f85b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e8f648(void)

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
    func_0x000107c4b520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103e76998();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113026810);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130299b8);
      *(long *)(unaff_x20 + _DAT_1130299b8) = lVar4;
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
             "LensUserSessionScopeGraphBridge/SCSCNGLStudySettingServicesSaberServiceProvider.swift"
             ,0x55,2,0x6c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e8f774);
  (*pcVar1)();
}



/* Entry: 103e8f85c; end: 103e8f88f; -[SCSCNGLStudySettingServicesSaberServiceProvider provide] */

void FUN_103e8f85c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e8f648();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e8f890; end: 103e8f8c3; -[SCSCNGLStudySettingServicesSaberServiceProvider __safeProvide] */

void FUN_103e8f890(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e8f774();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e8f8c4; end: 103e8f907; -[SCSCNGLStudySettingServicesSaberServiceProvider end] */

void FUN_103e8f8c4(undefined8 param_1)

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



/* Entry: 103e8f908; end: 103e8fa9f;  */

void FUN_103e8f908(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e36f20)) {
      uVar2 = 0xd000000000000027;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000027,0x800000010f1c90e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "LensUserSessionScopeGraphBridge/SCSCNGLStudySettingServicesSaberServiceProvider.swift"
                   ,0x55,2,0x81,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e8faa0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c55ef0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e8faa0; end: 103e8fb4b; -[SCSCNGLStudySettingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e8faa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103e8f908(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e8fb4c; end: 103e8fbbf; -[SCSCNGLStudySettingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8fb4c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_1130299a8,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_1130299b0,0);
  *(undefined8 *)(param_1 + _DAT_1130299b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e8fbc0; end: 103e8fbf3;  */

void FUN_103e8fbc0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e8fbf4; end: 103e8fc3b; -[SCSCNGLStudySettingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8fbf4(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130299a8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130299b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130299b8));
  return;
}



/* Entry: 103e8fc3c; end: 103e8fc5b;  */

void FUN_103e8fc3c(void)

{
  _objc_opt_self(&PTR_PTR_113029a00);
  return;
}



/* Entry: 103e8fc5c; end: 103e8fc67; -[SCSCOnDeviceMLModelsPreloadingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8fc5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113029a68;
  _swift_beginAccess(param_1 + _DAT_113029a68,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e8fc68; end: 103e8fc73; -[SCSCOnDeviceMLModelsPreloadingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8fc68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113029a68;
  _swift_beginAccess(param_1 + _DAT_113029a68,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e8fc74; end: 103e8fc7f; -[SCSCOnDeviceMLModelsPreloadingServicesSaberServiceProvider lensUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8fc74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113029a70;
  _swift_beginAccess(param_1 + _DAT_113029a70,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e8fc80; end: 103e8fcc3;  */

void FUN_103e8fc80(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e8fcc4; end: 103e8fccf; -[SCSCOnDeviceMLModelsPreloadingServicesSaberServiceProvider setLensUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e8fcc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113029a70;
  _swift_beginAccess(param_1 + _DAT_113029a70,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e8fcd0; end: 103e8fd23;  */

void FUN_103e8fcd0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e8fd24; end: 103e8ff37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e8fd24(void)

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
    func_0x000107c4b520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103e76ac4();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113026818);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113029a78);
      *(long *)(unaff_x20 + _DAT_113029a78) = lVar4;
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
             "LensUserSessionScopeGraphBridge/SCSCOnDeviceMLModelsPreloadingServicesSaberServiceProvider.swift"
             ,0x60,2,0x6c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e8fe50);
  (*pcVar1)();
}



/* Entry: 103e8ff38; end: 103e8ff6b; -[SCSCOnDeviceMLModelsPreloadingServicesSaberServiceProvider provide] */

void FUN_103e8ff38(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e8fd24();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e8ff6c; end: 103e8ff9f; -[SCSCOnDeviceMLModelsPreloadingServicesSaberServiceProvider __safeProvide] */

void FUN_103e8ff6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e8fe50();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e8ffa0; end: 103e8ffe3; -[SCSCOnDeviceMLModelsPreloadingServicesSaberServiceProvider end] */

void FUN_103e8ffa0(undefined8 param_1)

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



/* Entry: 103e8ffe4; end: 103e9017b;  */

void FUN_103e8ffe4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e36f20)) {
      uVar2 = 0xd000000000000027;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000027,0x800000010f1c90e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "LensUserSessionScopeGraphBridge/SCSCOnDeviceMLModelsPreloadingServicesSaberServiceProvider.swift"
                   ,0x60,2,0x81,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e9017c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c55ef0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e9017c; end: 103e90227; -[SCSCOnDeviceMLModelsPreloadingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e9017c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103e8ffe4(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e90228; end: 103e9029b; -[SCSCOnDeviceMLModelsPreloadingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e90228(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113029a68,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113029a70,0);
  *(undefined8 *)(param_1 + _DAT_113029a78) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e9029c; end: 103e902cf;  */

void FUN_103e9029c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e902d0; end: 103e90317; -[SCSCOnDeviceMLModelsPreloadingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e902d0(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113029a68);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113029a70);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113029a78));
  return;
}



/* Entry: 103e90318; end: 103e90337;  */

void FUN_103e90318(void)

{
  _objc_opt_self(&PTR_PTR_113029ac0);
  return;
}



/* Entry: 103e90338; end: 103e90343; -[SCSCPerceptionConfigurationServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e90338(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113029b28;
  _swift_beginAccess(param_1 + _DAT_113029b28,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e90344; end: 103e9034f; -[SCSCPerceptionConfigurationServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e90344(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113029b28;
  _swift_beginAccess(param_1 + _DAT_113029b28,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e90350; end: 103e9035b; -[SCSCPerceptionConfigurationServicesSaberServiceProvider lensUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e90350(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113029b30;
  _swift_beginAccess(param_1 + _DAT_113029b30,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e9035c; end: 103e9039f;  */

void FUN_103e9035c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e903a0; end: 103e903ab; -[SCSCPerceptionConfigurationServicesSaberServiceProvider setLensUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e903a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113029b30;
  _swift_beginAccess(param_1 + _DAT_113029b30,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e903ac; end: 103e903ff;  */

void FUN_103e903ac(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e90400; end: 103e90613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e90400(void)

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
    func_0x000107c4b520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103e76bf0();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113026820);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113029b38);
      *(long *)(unaff_x20 + _DAT_113029b38) = lVar4;
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
             "LensUserSessionScopeGraphBridge/SCSCPerceptionConfigurationServicesSaberServiceProvider.swift"
             ,0x5d,2,0x6c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e9052c);
  (*pcVar1)();
}



/* Entry: 103e90614; end: 103e90647; -[SCSCPerceptionConfigurationServicesSaberServiceProvider provide] */

void FUN_103e90614(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e90400();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


