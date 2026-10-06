/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ff2590; end: 103ff25d3; -[SCSCComplianceEngineSaberServiceProvider end] */

void FUN_103ff2590(undefined8 param_1)

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



/* Entry: 103ff25d4; end: 103ff276b;  */

void FUN_103ff25d4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e230f0)) {
      uVar2 = 0xd000000000000027;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000027,0x800000010f1dcf10,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "SemcUserSessionScopeGraphBridge/SCSCComplianceEngineSaberServiceProvider.swift",
                   0x4e,2,0x38,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ff276c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c58e88();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103ff276c; end: 103ff2817; -[SCSCComplianceEngineSaberServiceProvider setValue:forIvarName:] */

void FUN_103ff276c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103ff25d4(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103ff2818; end: 103ff288b; -[SCSCComplianceEngineSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff2818(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113045b18,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113045b20,0);
  *(undefined8 *)(param_1 + _DAT_113045b28) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ff288c; end: 103ff28bf;  */

void FUN_103ff288c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ff28c0; end: 103ff2907; -[SCSCComplianceEngineSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff28c0(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113045b18);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113045b20);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113045b28));
  return;
}



/* Entry: 103ff2908; end: 103ff2927;  */

void FUN_103ff2908(void)

{
  _objc_opt_self(&PTR_PTR_113045b70);
  return;
}



/* Entry: 103ff2928; end: 103ff2933; -[SCSCInAppWarningServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff2928(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113045bd8;
  _swift_beginAccess(param_1 + _DAT_113045bd8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ff2934; end: 103ff293f; -[SCSCInAppWarningServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff2934(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113045bd8;
  _swift_beginAccess(param_1 + _DAT_113045bd8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ff2940; end: 103ff294b; -[SCSCInAppWarningServicesSaberServiceProvider semcUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff2940(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113045be0;
  _swift_beginAccess(param_1 + _DAT_113045be0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ff294c; end: 103ff298f;  */

void FUN_103ff294c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103ff2990; end: 103ff299b; -[SCSCInAppWarningServicesSaberServiceProvider setSemcUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff2990(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113045be0;
  _swift_beginAccess(param_1 + _DAT_113045be0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ff299c; end: 103ff29ef;  */

void FUN_103ff299c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ff29f0; end: 103ff2c03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ff29f0(void)

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
    func_0x000107c51d84();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103fefe44();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113045718);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113045be8);
      *(long *)(unaff_x20 + _DAT_113045be8) = lVar4;
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
             "SemcUserSessionScopeGraphBridge/SCSCInAppWarningServicesSaberServiceProvider.swift",
             0x52,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ff2b1c);
  (*pcVar1)();
}



/* Entry: 103ff2c04; end: 103ff2c37; -[SCSCInAppWarningServicesSaberServiceProvider provide] */

void FUN_103ff2c04(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103ff29f0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103ff2c38; end: 103ff2c6b; -[SCSCInAppWarningServicesSaberServiceProvider __safeProvide] */

void FUN_103ff2c38(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103ff2b1c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103ff2c6c; end: 103ff2caf; -[SCSCInAppWarningServicesSaberServiceProvider end] */

void FUN_103ff2c6c(undefined8 param_1)

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



/* Entry: 103ff2cb0; end: 103ff2e47;  */

void FUN_103ff2cb0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e230f0)) {
      uVar2 = 0xd000000000000027;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000027,0x800000010f1dcf10,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "SemcUserSessionScopeGraphBridge/SCSCInAppWarningServicesSaberServiceProvider.swift"
                   ,0x52,2,0x38,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ff2e48);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c58e88();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103ff2e48; end: 103ff2ef3; -[SCSCInAppWarningServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103ff2e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103ff2cb0(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103ff2ef4; end: 103ff2f67; -[SCSCInAppWarningServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff2ef4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113045bd8,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113045be0,0);
  *(undefined8 *)(param_1 + _DAT_113045be8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ff2f68; end: 103ff2f9b;  */

void FUN_103ff2f68(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ff2f9c; end: 103ff2fe3; -[SCSCInAppWarningServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff2f9c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113045bd8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113045be0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113045be8));
  return;
}



/* Entry: 103ff2fe4; end: 103ff3003;  */

void FUN_103ff2fe4(void)

{
  _objc_opt_self(&PTR_PTR_113045c30);
  return;
}



/* Entry: 103ff3004; end: 103ff300f; -[SCSCUserSessionValidationServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff3004(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113045c98;
  _swift_beginAccess(param_1 + _DAT_113045c98,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ff3010; end: 103ff301b; -[SCSCUserSessionValidationServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff3010(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113045c98;
  _swift_beginAccess(param_1 + _DAT_113045c98,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ff301c; end: 103ff3027; -[SCSCUserSessionValidationServicesSaberServiceProvider semcUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff301c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113045ca0;
  _swift_beginAccess(param_1 + _DAT_113045ca0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ff3028; end: 103ff306b;  */

void FUN_103ff3028(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103ff306c; end: 103ff3077; -[SCSCUserSessionValidationServicesSaberServiceProvider setSemcUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff306c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113045ca0;
  _swift_beginAccess(param_1 + _DAT_113045ca0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ff3078; end: 103ff30cb;  */

void FUN_103ff3078(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ff30cc; end: 103ff32df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ff30cc(void)

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
    func_0x000107c51d84();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103feff70();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113045728);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113045ca8);
      *(long *)(unaff_x20 + _DAT_113045ca8) = lVar4;
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
             "SemcUserSessionScopeGraphBridge/SCSCUserSessionValidationServicesSaberServiceProvider.swift"
             ,0x5b,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ff31f8);
  (*pcVar1)();
}



/* Entry: 103ff32e0; end: 103ff3313; -[SCSCUserSessionValidationServicesSaberServiceProvider provide] */

void FUN_103ff32e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103ff30cc();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103ff3314; end: 103ff3347; -[SCSCUserSessionValidationServicesSaberServiceProvider __safeProvide] */

void FUN_103ff3314(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103ff31f8();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103ff3348; end: 103ff338b; -[SCSCUserSessionValidationServicesSaberServiceProvider end] */

void FUN_103ff3348(undefined8 param_1)

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



/* Entry: 103ff338c; end: 103ff3523;  */

void FUN_103ff338c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e230f0)) {
      uVar2 = 0xd000000000000027;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000027,0x800000010f1dcf10,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "SemcUserSessionScopeGraphBridge/SCSCUserSessionValidationServicesSaberServiceProvider.swift"
                   ,0x5b,2,0x38,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ff3524);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c58e88();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103ff3524; end: 103ff35cf; -[SCSCUserSessionValidationServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103ff3524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103ff338c(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103ff35d0; end: 103ff3643; -[SCSCUserSessionValidationServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff35d0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113045c98,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113045ca0,0);
  *(undefined8 *)(param_1 + _DAT_113045ca8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ff3644; end: 103ff3677;  */

void FUN_103ff3644(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ff3678; end: 103ff36bf; -[SCSCUserSessionValidationServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff3678(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113045c98);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113045ca0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113045ca8));
  return;
}



/* Entry: 103ff36c0; end: 103ff36df;  */

void FUN_103ff36c0(void)

{
  _objc_opt_self(&PTR_PTR_113045cf0);
  return;
}



/* Entry: 103ff36e0; end: 103ff36eb; -[SCSCUserTwoFAServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff36e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113045d58;
  _swift_beginAccess(param_1 + _DAT_113045d58,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ff36ec; end: 103ff36f7; -[SCSCUserTwoFAServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff36ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113045d58;
  _swift_beginAccess(param_1 + _DAT_113045d58,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ff36f8; end: 103ff3703; -[SCSCUserTwoFAServicesSaberServiceProvider semcUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff36f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113045d60;
  _swift_beginAccess(param_1 + _DAT_113045d60,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ff3704; end: 103ff3747;  */

void FUN_103ff3704(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103ff3748; end: 103ff3753; -[SCSCUserTwoFAServicesSaberServiceProvider setSemcUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff3748(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113045d60;
  _swift_beginAccess(param_1 + _DAT_113045d60,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ff3754; end: 103ff37a7;  */

void FUN_103ff3754(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ff37a8; end: 103ff39bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ff37a8(void)

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
    func_0x000107c51d84();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103ff009c();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113045730);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113045d68);
      *(long *)(unaff_x20 + _DAT_113045d68) = lVar4;
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
             "SemcUserSessionScopeGraphBridge/SCSCUserTwoFAServicesSaberServiceProvider.swift",0x4f,
             2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ff38d4);
  (*pcVar1)();
}



/* Entry: 103ff39bc; end: 103ff39ef; -[SCSCUserTwoFAServicesSaberServiceProvider provide] */

void FUN_103ff39bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103ff37a8();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103ff39f0; end: 103ff3a23; -[SCSCUserTwoFAServicesSaberServiceProvider __safeProvide] */

void FUN_103ff39f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103ff38d4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103ff3a24; end: 103ff3a67; -[SCSCUserTwoFAServicesSaberServiceProvider end] */

void FUN_103ff3a24(undefined8 param_1)

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



/* Entry: 103ff3a68; end: 103ff3bff;  */

void FUN_103ff3a68(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e230f0)) {
      uVar2 = 0xd000000000000027;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000027,0x800000010f1dcf10,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "SemcUserSessionScopeGraphBridge/SCSCUserTwoFAServicesSaberServiceProvider.swift"
                   ,0x4f,2,0x38,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ff3c00);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c58e88();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103ff3c00; end: 103ff3cab; -[SCSCUserTwoFAServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103ff3c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103ff3a68(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103ff3cac; end: 103ff3d1f; -[SCSCUserTwoFAServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff3cac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113045d58,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113045d60,0);
  *(undefined8 *)(param_1 + _DAT_113045d68) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ff3d20; end: 103ff3d53;  */

void FUN_103ff3d20(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ff3d54; end: 103ff3d9b; -[SCSCUserTwoFAServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff3d54(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113045d58);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113045d60);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113045d68));
  return;
}



/* Entry: 103ff3d9c; end: 103ff3dbb;  */

void FUN_103ff3d9c(void)

{
  _objc_opt_self(&PTR_PTR_113045db0);
  return;
}



/* Entry: 103ff3dbc; end: 103ff3dc7; -[SCTinselServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff3dbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113045e18;
  _swift_beginAccess(param_1 + _DAT_113045e18,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ff3dc8; end: 103ff3dd3; -[SCTinselServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff3dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113045e18;
  _swift_beginAccess(param_1 + _DAT_113045e18,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ff3dd4; end: 103ff3ddf; -[SCTinselServicesSaberServiceProvider semcUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff3dd4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113045e20;
  _swift_beginAccess(param_1 + _DAT_113045e20,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ff3de0; end: 103ff3e23;  */

void FUN_103ff3de0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103ff3e24; end: 103ff3e2f; -[SCTinselServicesSaberServiceProvider setSemcUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff3e24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113045e20;
  _swift_beginAccess(param_1 + _DAT_113045e20,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ff3e30; end: 103ff3e83;  */

void FUN_103ff3e30(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ff3e84; end: 103ff4097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ff3e84(void)

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
    func_0x000107c51d84();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103ff01c8();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113045738);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113045e28);
      *(long *)(unaff_x20 + _DAT_113045e28) = lVar4;
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
             "SemcUserSessionScopeGraphBridge/SCTinselServicesSaberServiceProvider.swift",0x4a,2,
             0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ff3fb0);
  (*pcVar1)();
}



/* Entry: 103ff4098; end: 103ff40cb; -[SCTinselServicesSaberServiceProvider provide] */

void FUN_103ff4098(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103ff3e84();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103ff40cc; end: 103ff40ff; -[SCTinselServicesSaberServiceProvider __safeProvide] */

void FUN_103ff40cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103ff3fb0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103ff4100; end: 103ff4143; -[SCTinselServicesSaberServiceProvider end] */

void FUN_103ff4100(undefined8 param_1)

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



/* Entry: 103ff4144; end: 103ff42db;  */

void FUN_103ff4144(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e230f0)) {
      uVar2 = 0xd000000000000027;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000027,0x800000010f1dcf10,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "SemcUserSessionScopeGraphBridge/SCTinselServicesSaberServiceProvider.swift",0x4a
                   ,2,0x38,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ff42dc);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c58e88();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103ff42dc; end: 103ff4387; -[SCTinselServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103ff42dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103ff4144(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103ff4388; end: 103ff43fb; -[SCTinselServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff4388(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113045e18,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113045e20,0);
  *(undefined8 *)(param_1 + _DAT_113045e28) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ff43fc; end: 103ff442f;  */

void FUN_103ff43fc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ff4430; end: 103ff4477; -[SCTinselServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff4430(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113045e18);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113045e20);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113045e28));
  return;
}



/* Entry: 103ff4478; end: 103ff4497;  */

void FUN_103ff4478(void)

{
  _objc_opt_self(&PTR_PTR_113045e70);
  return;
}



/* Entry: 103ff4498; end: 103ff478f;  */

void FUN_103ff4498(ulong *param_1,ulong param_2,ulong param_3,ulong param_4,char param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_1f0 [96];
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
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
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_90 = 0;
  uStack_98 = 0x3000000000000000;
  uStack_a0 = 0;
  uStack_88 = 0xc000000000000000;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0xf000000000000000;
  if (param_5 == '\0') {
    uVar12 = param_2;
    func_0x000107c5ea00();
    uVar9 = param_2;
    func_0x000107c4d118();
    uVar10 = param_2;
    func_0x00010bf65700();
    func_0x000103ff4790(param_2,param_3,param_4,0);
    func_0x000101553d58(0,0,0,0xf000000000000000);
    uStack_68 = 0xc000000000000000;
    uStack_70 = 0;
    uStack_80 = uVar12 & 0xffffffff | uVar9 << 0x20;
    uStack_78 = uVar10 & 0xffffffff;
  }
  else if (param_5 == '\x01') {
    uVar12 = 0;
    if (((param_3 & 0xff) != 1) && (param_2 < 5)) {
      uVar12 = *(ulong *)(&UNK_10dcbf348 + param_2 * 8);
    }
    func_0x00010174b838(0,0,0,0,0,0x3000000000000000);
    uStack_b0 = 0;
    uStack_b8 = 1;
    uStack_a0 = 0;
    uStack_a8 = 0xe000000000000000;
    uStack_98 = 0xe000000000000000;
    uStack_c0 = uVar12;
  }
  else {
    _swift_bridgeObjectRetain(param_4);
    uVar12 = param_2;
    _objc_retain();
    uVar9 = uVar12;
    func_0x000107c5ea00();
    uVar10 = uVar12;
    func_0x000107c4d118();
    uVar11 = uVar12;
    func_0x00010bf65700();
    _objc_release(uVar12);
    func_0x000101553d58(0,0,0,0xf000000000000000);
    uStack_68 = 0xc000000000000000;
    uStack_70 = 0;
    uStack_80 = uVar9 & 0xffffffff | uVar10 << 0x20;
    uStack_78 = uVar11 & 0xffffffff;
    func_0x000103ff4790(param_2,param_3,param_4,2);
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRetain(0xe000000000000000);
    func_0x00010006c00c(0,0xc000000000000000);
    func_0x00010174b838(0,0,0,0,0,0x3000000000000000);
    uStack_a8 = 0xe000000000000000;
    uStack_b0 = 0;
    uStack_98 = 0xc000000000000000;
    uStack_a0 = 0;
    uStack_c0 = param_3;
    uStack_b8 = param_4;
    _swift_bridgeObjectRelease(0xe000000000000000);
    _swift_bridgeObjectRelease(param_4);
    func_0x00010006c090(0,0xc000000000000000);
  }
  uVar8 = uStack_68;
  uVar7 = uStack_70;
  uVar6 = uStack_78;
  uVar5 = uStack_80;
  uVar4 = uStack_88;
  uVar3 = uStack_90;
  uVar2 = uStack_98;
  uVar1 = uStack_a0;
  uVar11 = uStack_a8;
  uVar10 = uStack_b0;
  uVar9 = uStack_b8;
  uVar12 = uStack_c0;
  uStack_168 = uStack_98;
  uStack_170 = uStack_a0;
  uStack_158 = uStack_88;
  uStack_160 = uStack_90;
  uStack_148 = uStack_78;
  uStack_150 = uStack_80;
  uStack_138 = uStack_68;
  uStack_140 = uStack_70;
  uStack_188 = uStack_b8;
  uStack_190 = uStack_c0;
  uStack_178 = uStack_a8;
  uStack_180 = uStack_b0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0xff;
  func_0x000103ff47cc(&uStack_190,auStack_1f0);
  FUN_103ff54fc(&uStack_130,0x113045ed8,&UNK_10dcbf340);
  func_0x000103ff4808(&uStack_c0);
  param_1[1] = uVar9;
  *param_1 = uVar12;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  param_1[0xb] = uVar8;
  param_1[10] = uVar7;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0xc000000000000000;
  param_1[0xd] = 0;
  return;
}



/* Entry: 103ff4790; end: 103ff483b;  */

void FUN_103ff4790(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\x02') {
    _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
    return;
  }
  if (param_4 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 103ff483c; end: 103ff4a07;  */

void FUN_103ff483c(long *param_1,ulong param_2,ulong param_3,char param_4,ulong param_5,char param_6
                  ,byte param_7)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  undefined1 auStack_1a0 [80];
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined5 uStack_118;
  uint3 uStack_113;
  undefined5 uStack_110;
  undefined3 uStack_10b;
  uint5 uStack_108;
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
  undefined1 uStack_a0;
  long lStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  long lStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined5 uStack_58;
  uint3 uStack_53;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  lStack_80 = 0;
  uStack_78 = 1;
  lStack_68 = -0x4000000000000000;
  lStack_70 = 0;
  uStack_58 = 0;
  uStack_53 = 0xf00000;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4b = 0;
  uStack_44 = 0;
  uStack_48 = 0;
  lStack_90 = (param_2 & 0xff) + 1;
  uStack_88 = 1;
  bVar9 = (param_3 & 0xffffffff00000000) == 0;
  bVar10 = (param_5 & 0xffffffff00000000) == 0;
  if ((bVar9 && param_4 != '\x01') || (bVar10 && param_6 != '\x01')) {
    uVar1 = 0x100000000;
    if (bVar9 && param_4 != '\x01') {
      uVar1 = param_3;
    }
    uVar11 = 0x100000000;
    if (bVar10 && param_6 != '\x01') {
      uVar11 = param_5 & 0xffffffff;
    }
    func_0x00010174b89c(0,0xf000000000000000,0,0);
    uStack_53 = 0xc00000;
    uStack_50 = (undefined5)uVar1;
    uStack_4b = (undefined3)(uVar1 >> 0x28);
    uStack_48 = (undefined4)uVar11;
    uStack_44 = (undefined1)(uVar11 >> 0x20);
  }
  lVar8 = lStack_68;
  lVar7 = lStack_70;
  lVar5 = lStack_90;
  uStack_58 = 0;
  uStack_60 = 0;
  if (param_7 < 2) {
    if (param_7 == 0) {
      lStack_80 = 1;
    }
    else {
      lStack_80 = 2;
    }
  }
  else {
    if (param_7 != 2) goto LAB_103ff4948;
    lStack_80 = 3;
  }
  uStack_78 = 1;
LAB_103ff4948:
  lVar6 = lStack_80;
  uStack_10b = uStack_4b;
  uStack_108 = (uint5)(CONCAT17(uStack_44,CONCAT43(uStack_48,uStack_4b)) >> 0x18);
  uStack_110 = uStack_50;
  lStack_128 = lStack_68;
  lStack_130 = lStack_70;
  uStack_118 = 0;
  uStack_113 = uStack_53;
  uStack_120 = 0;
  lVar3 = CONCAT71(uStack_87,uStack_88);
  lVar4 = CONCAT71(uStack_77,uStack_78);
  lStack_150 = lStack_90;
  lStack_140 = lStack_80;
  lVar2 = CONCAT35(uStack_4b,uStack_50);
  uVar11 = (ulong)uStack_108;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0xff;
  uVar1 = (ulong)uStack_53;
  lStack_148 = lVar3;
  lStack_138 = lVar4;
  FUN_103ff4a08(&lStack_150,auStack_1a0);
  FUN_103ff54fc(&uStack_100,0x113045ed8,&UNK_10dcbf340);
  func_0x000103ff4a44(&lStack_90);
  param_1[1] = lVar3;
  *param_1 = lVar5;
  param_1[3] = lVar4;
  param_1[2] = lVar6;
  param_1[5] = lVar8;
  param_1[4] = lVar7;
  param_1[7] = uVar1 << 0x28;
  param_1[6] = 0;
  param_1[8] = lVar2;
  param_1[9] = uVar11;
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xe] = -0x4000000000000000;
  param_1[0xd] = 0;
  return;
}



/* Entry: 103ff4a08; end: 103ff4a77;  */

undefined8 FUN_103ff4a08(undefined8 param_1,undefined8 param_2)

{
  FUN_104003810(param_2,param_1);
  return param_2;
}



/* Entry: 103ff4a78; end: 103ff505f;  */

long * FUN_103ff4a78(byte *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  bVar6 = *param_1;
  lVar8 = *(long *)param_1;
  plVar7 = *(long **)param_1;
  plVar10 = *(long **)param_1;
  uVar12 = *(ulong *)(param_1 + 8);
  uVar9 = (uint)(*(ulong *)(param_1 + 0x30) >> 0x3c) & 3 | (param_1[0x38] & 0x3f) << 2;
  if (uVar9 < 2) {
    if (uVar9 == 0) {
      _swift_bridgeObjectRelease(param_3);
      plVar10 = (long *)((ulong)bVar6 & 1);
    }
    else {
      lVar2 = *(long *)(param_1 + 0x10);
      lVar4 = *(long *)(param_1 + 0x18);
      lVar3 = *(long *)(param_1 + 0x20);
      lVar5 = *(long *)(param_1 + 0x28);
      uVar13 = *(ulong *)(param_1 + 0x30) & 0xcfffffffffffffff;
      uVar1 = (ulong)bVar6 | ((ulong)*(uint7 *)(param_1 + 1) & 0xffffffffff) << 8;
      if ((uVar12 & 0x2000000000000000) != 0) {
        uVar1 = uVar12 >> 0x38 & 0xf;
      }
      lStack_88 = lVar2;
      lStack_80 = lVar4;
      lStack_78 = lVar3;
      lStack_70 = lVar5;
      uStack_68 = uVar13;
      if (uVar1 == 0) {
        func_0x00010174c278(lVar2,lVar4,lVar3);
        func_0x00010006c00c(lVar5,uVar13);
      }
      else {
        _swift_bridgeObjectRetain(uVar12);
        func_0x00010174c278(lVar2,lVar4,lVar3);
        func_0x00010006c00c(lVar5,uVar13);
        _swift_bridgeObjectRelease(param_3);
        param_3 = uVar12;
        param_2 = lVar8;
      }
      uVar11 = 0;
      FUN_104063788(0);
      plVar10 = &lStack_88;
      func_0x000103ff4c30(plVar10,param_2,param_3,uVar11);
      func_0x00010174c210(param_1);
    }
  }
  else if (uVar9 == 2) {
    _swift_bridgeObjectRelease(param_3);
  }
  else if (uVar9 == 3) {
    func_0x00010174c210();
    _swift_bridgeObjectRelease(param_3);
    plVar10 = (long *)0x0;
  }
  else {
    _swift_bridgeObjectRelease(param_3);
    plVar10 = plVar7;
  }
  return plVar10;
}



/* Entry: 103ff5060; end: 103ff5073;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103ff5060(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6)

{
  uint uVar1;
  
  if (((param_6 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    return;
  }
  if ((param_6 >> 0x3d & 1) == 0) {
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_4);
    param_3 = param_5;
    param_4 = param_6;
  }
  else {
    _swift_bridgeObjectRetain(param_2);
  }
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3);
  return;
}



/* Entry: 103ff5074; end: 103ff50cf;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103ff5074(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6)

{
  uint uVar1;
  
  if ((param_6 >> 0x3d & 1) == 0) {
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_4);
    param_3 = param_5;
    param_4 = param_6;
  }
  else {
    _swift_bridgeObjectRetain(param_2);
  }
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3);
  return;
}



/* Entry: 103ff50d0; end: 103ff51ef;  */

ulong * FUN_103ff50d0(long *param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  puVar4 = (ulong *)*param_1;
  lVar6 = param_1[1];
  uVar7 = (uint)((ulong)param_1[6] >> 0x3c) & 3;
  puVar5 = puVar4;
  if (1 < uVar7 - 2) {
    bVar3 = *(byte *)(param_1 + 2);
    if (uVar7 == 0) {
      lVar1 = param_1[4];
      lVar2 = param_1[5];
      lVar8 = param_1[3];
      uVar9 = param_1[6] & 0xcfffffffffffffff;
      uVar10 = (ulong)*(uint *)((long)param_1 + 0x11) << 8 |
               (ulong)*(uint3 *)((long)param_1 + 0x15) << 0x28 | (ulong)bVar3;
      uStack_88 = uVar10;
      lStack_80 = lVar8;
      lStack_78 = lVar1;
      lStack_70 = lVar2;
      uStack_68 = uVar9;
      FUN_104063788(0);
      _swift_bridgeObjectRetain(lVar6);
      func_0x00010174c278(uVar10,lVar8,lVar1);
      func_0x00010006c00c(lVar2,uVar9);
      puVar5 = &uStack_88;
      func_0x000103ff4c30(puVar5,puVar4,lVar6);
      func_0x00010174c33c(param_1);
    }
    else {
      func_0x00010174c33c(param_1);
      puVar5 = (ulong *)((ulong)bVar3 & 1);
    }
  }
  return puVar5;
}



/* Entry: 103ff51f0; end: 103ff5317;  */

ulong FUN_103ff51f0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ff5318);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_103ff5318(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ff5314);
      (*pcVar1)();
    }
    FUN_103ff5398(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      _memmove(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar3;
}



/* Entry: 103ff5318; end: 103ff5397;  */

undefined * FUN_103ff5318(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_103ff572c();
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 103ff5398; end: 103ff548f;  */

long FUN_103ff5398(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103ff548c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ff5490);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_104063688(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_104063688(0);
      _swift_arrayInitWithCopy
                (param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,uVar4)
      ;
      _swift_bridgeObjectRelease(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103ff5488);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 103ff5490; end: 103ff54a3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103ff5490(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6)

{
  uint uVar1;
  
  if (((param_6 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    return;
  }
  _swift_bridgeObjectRelease(param_2);
  if ((param_6 >> 0x3d & 1) == 0) {
    _swift_bridgeObjectRelease(param_4);
    param_3 = param_5;
    param_4 = param_6;
  }
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 103ff54a4; end: 103ff54fb;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103ff54a4(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6)

{
  uint uVar1;
  
  _swift_bridgeObjectRelease(param_2);
  if ((param_6 >> 0x3d & 1) == 0) {
    _swift_bridgeObjectRelease(param_4);
    param_3 = param_5;
    param_4 = param_6;
  }
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 103ff54fc; end: 103ff5607;  */

undefined8 FUN_103ff54fc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103ff5608; end: 103ff5667; -[AgeVerificationChallengeProvidingServices init] */

void FUN_103ff5608(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ComplianceEngineService.AgeVerificationChallengeProvidingServices",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ff5634);
  (*pcVar1)();
}



/* Entry: 103ff5668; end: 103ff5677; -[AgeVerificationChallengeProvidingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff5668(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113045ee0));
  return;
}



/* Entry: 103ff5678; end: 103ff572b;  */

undefined * FUN_103ff5678(ulong param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uStack_28;
  
  if (param_1 < 9) {
    puVar2 = &UNK_10174c52c;
    FUN_103ff5748(&UNK_10174c52c,0x113045f10,&UNK_10dcbf3f0);
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x18) = 3;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    puVar3 = PTR_PTR_1126b1278;
    _objc_opt_self();
    func_0x000107c4fa84();
    _objc_retainAutoreleasedReturnValue();
    *(undefined **)(puVar2 + 0x20) = puVar3;
    return puVar2;
  }
  uStack_28 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_11073c4f0,&uStack_28,&UNK_11073c4f0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ff572c);
  (*pcVar1)();
}



/* Entry: 103ff572c; end: 103ff5747;  */

void FUN_103ff572c(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x113045f18;
  plVar5 = (long *)&UNK_10dcbf3f8;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_104063688();
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103ff5748; end: 103ff57b3;  */

void FUN_103ff5748(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103ff57b4; end: 103ff584b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff57b4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113045f20) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ff584c; end: 103ff58ab; -[ComplianceEngineAgeVerificationChallengeProvidingServices init] */

void FUN_103ff584c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ComplianceEngineService.ComplianceEngineAgeVerificationChallengeProvidingServices",
             0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ff5878);
  (*pcVar1)();
}



/* Entry: 103ff58ac; end: 103ff58bb; -[ComplianceEngineAgeVerificationChallengeProvidingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff58ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113045f20));
  return;
}



/* Entry: 103ff58bc; end: 103ff596b;  */

uint FUN_103ff58bc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  FUN_103ff596c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103ff596c; end: 103ff5b37;  */

uint FUN_103ff596c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined3 uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  byte bStack_b0;
  undefined4 uStack_af;
  undefined2 uStack_ab;
  undefined1 uStack_a9;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar10 = param_2[1];
  uVar7 = *param_1;
  uVar9 = param_1[1];
  uVar12 = param_1[6];
  uVar11 = (uint)(uVar12 >> 0x3c) & 3;
  if (uVar11 < 2) {
    uVar6 = param_1[2];
    if (uVar11 == 0) {
      uVar13 = param_2[6];
      if ((uVar13 & 0x3000000000000000) == 0) {
        uVar4 = *(undefined1 *)((long)param_1 + 0x17);
        uVar5 = *(undefined3 *)((long)param_1 + 0x15);
        uVar3 = *(undefined4 *)((long)param_1 + 0x11);
        uVar1 = param_1[3];
        uVar2 = param_1[4];
        uVar14 = param_1[5];
        uVar18 = param_2[3];
        uVar17 = param_2[2];
        uVar16 = param_2[5];
        uVar15 = param_2[4];
        if (((uVar7 == *param_2) && (uVar9 == uVar10)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar7 & 1) != 0)) {
          uStack_ab = (undefined2)uVar5;
          uStack_90 = uVar12 & 0xcfffffffffffffff;
          pbVar8 = &bStack_b0;
          bStack_b0 = (byte)uVar6;
          uStack_af = uVar3;
          uStack_a9 = uVar4;
          uStack_a8 = uVar1;
          uStack_a0 = uVar2;
          uStack_98 = uVar14;
          uStack_88 = uVar17;
          uStack_80 = uVar18;
          uStack_78 = uVar15;
          uStack_70 = uVar16;
          uStack_68 = uVar13;
          func_0x000103ff7748(pbVar8,&uStack_88);
          uVar11 = (uint)pbVar8;
          goto LAB_103ff5b14;
        }
      }
    }
    else if (((param_2[6] & 0x3000000000000000) == 0x1000000000000000) &&
            (((uVar12 = param_2[2], uVar7 == *param_2 && (uVar9 == uVar10)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar7 & 1) != 0)))) {
      uVar11 = (byte)((byte)uVar6 ^ (byte)uVar12) ^ 1;
      goto LAB_103ff5b14;
    }
  }
  else if (uVar11 == 2) {
    if ((param_2[6] & 0x3000000000000000) == 0x2000000000000000) {
      if (uVar9 == 0) {
LAB_103ff5b0c:
        if (uVar10 == 0) {
LAB_103ff5b04:
          uVar11 = 1;
          goto LAB_103ff5b14;
        }
      }
      else if (uVar10 != 0) {
        uVar12 = *param_2;
joined_r0x000103ff5aec:
        if (((uVar7 == uVar12) && (uVar9 == uVar10)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar7 & 1) != 0)) goto LAB_103ff5b04;
      }
    }
  }
  else if (((param_2[6] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    if (uVar9 == 0) goto LAB_103ff5b0c;
    if (uVar10 != 0) {
      uVar12 = *param_2;
      goto joined_r0x000103ff5aec;
    }
  }
  uVar11 = 0;
LAB_103ff5b14:
  return uVar11 & 1;
}



/* Entry: 103ff5b38; end: 103ff5cef;  */

uint FUN_103ff5b38(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  
  uVar5 = param_2[1];
  uVar2 = *param_1;
  uVar7 = *param_1;
  uVar4 = param_1[1];
  uVar6 = param_1[6];
  uVar1 = (uint)(uVar6 >> 0x3c) & 3 | ((byte)param_1[7] & 0x3f) << 2;
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      if (((uint)(param_2[6] >> 0x3c) & 3) == 0 && (param_2[7] & 0x3f) == 0) {
        uVar1 = (byte)((byte)*param_1 ^ (byte)*param_2) ^ 1;
        goto LAB_103ff5cd4;
      }
    }
    else {
      uVar7 = param_2[6];
      if (((uint)(uVar7 >> 0x3c) & 3 | ((byte)param_2[7] & 0x3f) << 2) == 1) {
        uVar13 = param_1[3];
        uVar12 = param_1[2];
        uVar9 = param_1[5];
        uVar8 = param_1[4];
        uVar15 = param_2[3];
        uVar14 = param_2[2];
        uVar11 = param_2[5];
        uVar10 = param_2[4];
        if ((uVar2 == *param_2 && uVar4 == uVar5) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) != 0)) {
          uStack_50 = uVar6 & 0xcfffffffffffffff;
          uStack_28 = uVar7 & 0xcfffffffffffffff;
          puVar3 = &uStack_70;
          uStack_70 = uVar12;
          uStack_68 = uVar13;
          uStack_60 = uVar8;
          uStack_58 = uVar9;
          uStack_48 = uVar14;
          uStack_40 = uVar15;
          uStack_38 = uVar10;
          uStack_30 = uVar11;
          func_0x000103ff7748(puVar3,&uStack_48);
          uVar1 = (uint)puVar3;
          goto LAB_103ff5cd4;
        }
      }
    }
  }
  else if (uVar1 == 2) {
    if (((uint)(param_2[6] >> 0x3c) & 3 | ((byte)param_2[7] & 0x3f) << 2) == 2) goto LAB_103ff5c20;
  }
  else if (uVar1 == 3) {
    if (((uint)(param_2[6] >> 0x3c) & 3 | ((byte)param_2[7] & 0x3f) << 2) == 3) {
LAB_103ff5c20:
      if (uVar4 == 0) {
        if (uVar5 == 0) goto LAB_103ff5ce8;
      }
      else if ((uVar5 != 0) &&
              ((uVar7 == *param_2 && uVar4 == uVar5 ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar7 & 1) != 0)))) {
LAB_103ff5ce8:
        uVar1 = 1;
        goto LAB_103ff5cd4;
      }
    }
  }
  else if (((uint)(param_2[6] >> 0x3c) & 3 | ((byte)param_2[7] & 0x3f) << 2) == 4)
  goto LAB_103ff5c20;
  uVar1 = 0;
LAB_103ff5cd4:
  return uVar1 & 1;
}



/* Entry: 103ff5cf0; end: 103ff5d67;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103ff5cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,ulong param_7)

{
  uint uVar1;
  
  _swift_bridgeObjectRetain(param_2);
  if ((param_7 & 0x3000000000000000) != 0) {
    return;
  }
  func_0x00010174c278(param_3,param_4,param_5);
  uVar1 = (uint)(param_7 >> 0x3e);
  if (uVar1 == 1) {
    param_6 = param_7 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_6);
  return;
}



/* Entry: 103ff5d68; end: 103ff5d7f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103ff5d68(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  uVar2 = param_1[4];
  uVar4 = param_1[5];
  uVar5 = param_1[6];
  _swift_bridgeObjectRelease(*param_1,param_1[1]);
  if ((uVar5 & 0x3000000000000000) != 0) {
    return;
  }
  func_0x00010174c2bc(uVar1,uVar3,uVar2);
  uVar6 = (uint)(uVar5 >> 0x3e);
  if (uVar6 == 1) {
    uVar4 = uVar5 & 0x3fffffffffffffff;
  }
  else if (uVar6 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar4);
  return;
}



/* Entry: 103ff5d80; end: 103ff5df7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103ff5d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,ulong param_7)

{
  uint uVar1;
  
  _swift_bridgeObjectRelease(param_2);
  if ((param_7 & 0x3000000000000000) != 0) {
    return;
  }
  func_0x00010174c2bc(param_3,param_4,param_5);
  uVar1 = (uint)(param_7 >> 0x3e);
  if (uVar1 == 1) {
    param_6 = param_7 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_6);
  return;
}



/* Entry: 103ff5df8; end: 103ff5efb;  */

undefined8 * FUN_103ff5df8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  FUN_103ff5cf0(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  return param_1;
}


