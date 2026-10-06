/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10408b108; end: 10408b113; -[SCSCLensCollectionsMockServicesWrapperSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408b108(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113058cd8;
  _swift_beginAccess(param_1 + _DAT_113058cd8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10408b114; end: 10408b11f; -[SCSCLensCollectionsMockServicesWrapperSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408b114(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113058cd8;
  _swift_beginAccess(param_1 + _DAT_113058cd8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10408b120; end: 10408b12b; -[SCSCLensCollectionsMockServicesWrapperSaberServiceProvider lensSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408b120(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113058ce0;
  _swift_beginAccess(param_1 + _DAT_113058ce0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10408b12c; end: 10408b16f;  */

void FUN_10408b12c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10408b170; end: 10408b17b; -[SCSCLensCollectionsMockServicesWrapperSaberServiceProvider setLensSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408b170(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113058ce0;
  _swift_beginAccess(param_1 + _DAT_113058ce0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10408b17c; end: 10408b1cf;  */

void FUN_10408b17c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10408b1d0; end: 10408b3e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10408b1d0(void)

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
    func_0x000107c4b484();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010408a8e4();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113058c20);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113058ce8);
      *(long *)(unaff_x20 + _DAT_113058ce8) = lVar4;
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
             "LensSystemScopeGraphBridge/SCSCLensCollectionsMockServicesWrapperSaberServiceProvider.swift"
             ,0x5b,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10408b2fc);
  (*pcVar1)();
}



/* Entry: 10408b3e4; end: 10408b417; -[SCSCLensCollectionsMockServicesWrapperSaberServiceProvider provide] */

void FUN_10408b3e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10408b1d0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10408b418; end: 10408b44b; -[SCSCLensCollectionsMockServicesWrapperSaberServiceProvider __safeProvide] */

void FUN_10408b418(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010408b2fc();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10408b44c; end: 10408b48f; -[SCSCLensCollectionsMockServicesWrapperSaberServiceProvider end] */

void FUN_10408b44c(undefined8 param_1)

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



/* Entry: 10408b490; end: 10408b627;  */

void FUN_10408b490(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0e17690)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000022,0x800000010f1e8970,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "LensSystemScopeGraphBridge/SCSCLensCollectionsMockServicesWrapperSaberServiceProvider.swift"
                   ,0x5b,2,0x35,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10408b628);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c55e98();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10408b628; end: 10408b6d3; -[SCSCLensCollectionsMockServicesWrapperSaberServiceProvider setValue:forIvarName:] */

void FUN_10408b628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10408b490(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10408b6d4; end: 10408b747; -[SCSCLensCollectionsMockServicesWrapperSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408b6d4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113058cd8,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113058ce0,0);
  *(undefined8 *)(param_1 + _DAT_113058ce8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10408b748; end: 10408b77b;  */

void FUN_10408b748(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10408b77c; end: 10408b7c3; -[SCSCLensCollectionsMockServicesWrapperSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408b77c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113058cd8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113058ce0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113058ce8));
  return;
}



/* Entry: 10408b7c4; end: 10408b7e3;  */

void FUN_10408b7c4(void)

{
  _objc_opt_self(&PTR_PTR_113058d30);
  return;
}



/* Entry: 10408b7e4; end: 10408b7ef; -[SCSCLensDataLoggerServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408b7e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113058d98;
  _swift_beginAccess(param_1 + _DAT_113058d98,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10408b7f0; end: 10408b7fb; -[SCSCLensDataLoggerServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408b7f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113058d98;
  _swift_beginAccess(param_1 + _DAT_113058d98,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10408b7fc; end: 10408b807; -[SCSCLensDataLoggerServicesSaberServiceProvider lensSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408b7fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113058da0;
  _swift_beginAccess(param_1 + _DAT_113058da0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10408b808; end: 10408b84b;  */

void FUN_10408b808(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10408b84c; end: 10408b857; -[SCSCLensDataLoggerServicesSaberServiceProvider setLensSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408b84c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113058da0;
  _swift_beginAccess(param_1 + _DAT_113058da0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10408b858; end: 10408b8ab;  */

void FUN_10408b858(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10408b8ac; end: 10408babf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10408b8ac(void)

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
    func_0x000107c4b484();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010408aa10();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113058c28);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113058da8);
      *(long *)(unaff_x20 + _DAT_113058da8) = lVar4;
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
             "LensSystemScopeGraphBridge/SCSCLensDataLoggerServicesSaberServiceProvider.swift",0x4f,
             2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10408b9d8);
  (*pcVar1)();
}



/* Entry: 10408bac0; end: 10408baf3; -[SCSCLensDataLoggerServicesSaberServiceProvider provide] */

void FUN_10408bac0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10408b8ac();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10408baf4; end: 10408bb27; -[SCSCLensDataLoggerServicesSaberServiceProvider __safeProvide] */

void FUN_10408baf4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010408b9d8();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10408bb28; end: 10408bb6b; -[SCSCLensDataLoggerServicesSaberServiceProvider end] */

void FUN_10408bb28(undefined8 param_1)

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



/* Entry: 10408bb6c; end: 10408bd03;  */

void FUN_10408bb6c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0e17690)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000022,0x800000010f1e8970,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "LensSystemScopeGraphBridge/SCSCLensDataLoggerServicesSaberServiceProvider.swift"
                   ,0x4f,2,0x35,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10408bd04);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c55e98();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10408bd04; end: 10408bdaf; -[SCSCLensDataLoggerServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10408bd04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10408bb6c(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10408bdb0; end: 10408be23; -[SCSCLensDataLoggerServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408bdb0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113058d98,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113058da0,0);
  *(undefined8 *)(param_1 + _DAT_113058da8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10408be24; end: 10408be57;  */

void FUN_10408be24(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10408be58; end: 10408be9f; -[SCSCLensDataLoggerServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408be58(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113058d98);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113058da0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113058da8));
  return;
}



/* Entry: 10408bea0; end: 10408bebf;  */

void FUN_10408bea0(void)

{
  _objc_opt_self(&PTR_PTR_113058df0);
  return;
}



/* Entry: 10408bec0; end: 10408becb; -[SCSCLensFavoritesMockedServicesWrapperSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408bec0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113058e58;
  _swift_beginAccess(param_1 + _DAT_113058e58,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10408becc; end: 10408bed7; -[SCSCLensFavoritesMockedServicesWrapperSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408becc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113058e58;
  _swift_beginAccess(param_1 + _DAT_113058e58,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10408bed8; end: 10408bee3; -[SCSCLensFavoritesMockedServicesWrapperSaberServiceProvider lensSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408bed8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113058e60;
  _swift_beginAccess(param_1 + _DAT_113058e60,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10408bee4; end: 10408bf27;  */

void FUN_10408bee4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10408bf28; end: 10408bf33; -[SCSCLensFavoritesMockedServicesWrapperSaberServiceProvider setLensSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408bf28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113058e60;
  _swift_beginAccess(param_1 + _DAT_113058e60,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10408bf34; end: 10408bf87;  */

void FUN_10408bf34(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10408bf88; end: 10408c19b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10408bf88(void)

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
    func_0x000107c4b484();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010408ab3c();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113058c30);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113058e68);
      *(long *)(unaff_x20 + _DAT_113058e68) = lVar4;
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
             "LensSystemScopeGraphBridge/SCSCLensFavoritesMockedServicesWrapperSaberServiceProvider.swift"
             ,0x5b,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10408c0b4);
  (*pcVar1)();
}



/* Entry: 10408c19c; end: 10408c1cf; -[SCSCLensFavoritesMockedServicesWrapperSaberServiceProvider provide] */

void FUN_10408c19c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10408bf88();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10408c1d0; end: 10408c203; -[SCSCLensFavoritesMockedServicesWrapperSaberServiceProvider __safeProvide] */

void FUN_10408c1d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010408c0b4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10408c204; end: 10408c247; -[SCSCLensFavoritesMockedServicesWrapperSaberServiceProvider end] */

void FUN_10408c204(undefined8 param_1)

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



/* Entry: 10408c248; end: 10408c3df;  */

void FUN_10408c248(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0e17690)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000022,0x800000010f1e8970,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "LensSystemScopeGraphBridge/SCSCLensFavoritesMockedServicesWrapperSaberServiceProvider.swift"
                   ,0x5b,2,0x35,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10408c3e0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c55e98();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10408c3e0; end: 10408c48b; -[SCSCLensFavoritesMockedServicesWrapperSaberServiceProvider setValue:forIvarName:] */

void FUN_10408c3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10408c248(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10408c48c; end: 10408c4ff; -[SCSCLensFavoritesMockedServicesWrapperSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408c48c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113058e58,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113058e60,0);
  *(undefined8 *)(param_1 + _DAT_113058e68) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10408c500; end: 10408c533;  */

void FUN_10408c500(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10408c534; end: 10408c57b; -[SCSCLensFavoritesMockedServicesWrapperSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408c534(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113058e58);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113058e60);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113058e68));
  return;
}



/* Entry: 10408c57c; end: 10408c59b;  */

void FUN_10408c57c(void)

{
  _objc_opt_self(&PTR_PTR_113058eb0);
  return;
}



/* Entry: 10408c59c; end: 10408c5a7; -[SCSCLensPreferencesStorageServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408c59c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113058f18;
  _swift_beginAccess(param_1 + _DAT_113058f18,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10408c5a8; end: 10408c5b3; -[SCSCLensPreferencesStorageServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408c5a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113058f18;
  _swift_beginAccess(param_1 + _DAT_113058f18,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10408c5b4; end: 10408c5bf; -[SCSCLensPreferencesStorageServicesSaberServiceProvider lensSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408c5b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113058f20;
  _swift_beginAccess(param_1 + _DAT_113058f20,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10408c5c0; end: 10408c603;  */

void FUN_10408c5c0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10408c604; end: 10408c60f; -[SCSCLensPreferencesStorageServicesSaberServiceProvider setLensSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408c604(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113058f20;
  _swift_beginAccess(param_1 + _DAT_113058f20,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10408c610; end: 10408c663;  */

void FUN_10408c610(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10408c664; end: 10408c877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10408c664(void)

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
    func_0x000107c4b484();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010408ac68();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113058c38);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113058f28);
      *(long *)(unaff_x20 + _DAT_113058f28) = lVar4;
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
             "LensSystemScopeGraphBridge/SCSCLensPreferencesStorageServicesSaberServiceProvider.swift"
             ,0x57,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10408c790);
  (*pcVar1)();
}



/* Entry: 10408c878; end: 10408c8ab; -[SCSCLensPreferencesStorageServicesSaberServiceProvider provide] */

void FUN_10408c878(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10408c664();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10408c8ac; end: 10408c8df; -[SCSCLensPreferencesStorageServicesSaberServiceProvider __safeProvide] */

void FUN_10408c8ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010408c790();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10408c8e0; end: 10408c923; -[SCSCLensPreferencesStorageServicesSaberServiceProvider end] */

void FUN_10408c8e0(undefined8 param_1)

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



/* Entry: 10408c924; end: 10408cabb;  */

void FUN_10408c924(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0e17690)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000022,0x800000010f1e8970,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "LensSystemScopeGraphBridge/SCSCLensPreferencesStorageServicesSaberServiceProvider.swift"
                   ,0x57,2,0x35,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10408cabc);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c55e98();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10408cabc; end: 10408cb67; -[SCSCLensPreferencesStorageServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10408cabc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10408c924(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10408cb68; end: 10408cbdb; -[SCSCLensPreferencesStorageServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408cb68(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113058f18,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113058f20,0);
  *(undefined8 *)(param_1 + _DAT_113058f28) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10408cbdc; end: 10408cc0f;  */

void FUN_10408cbdc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10408cc10; end: 10408cc57; -[SCSCLensPreferencesStorageServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408cc10(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113058f18);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113058f20);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113058f28));
  return;
}



/* Entry: 10408cc58; end: 10408cc77;  */

void FUN_10408cc58(void)

{
  _objc_opt_self(&PTR_PTR_113058f70);
  return;
}



/* Entry: 10408cc78; end: 10408cc83; -[SCSCLensUnlockerMockServicesWrapperSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408cc78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113058fd8;
  _swift_beginAccess(param_1 + _DAT_113058fd8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10408cc84; end: 10408cc8f; -[SCSCLensUnlockerMockServicesWrapperSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408cc84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113058fd8;
  _swift_beginAccess(param_1 + _DAT_113058fd8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10408cc90; end: 10408cc9b; -[SCSCLensUnlockerMockServicesWrapperSaberServiceProvider lensSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408cc90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113058fe0;
  _swift_beginAccess(param_1 + _DAT_113058fe0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10408cc9c; end: 10408ccdf;  */

void FUN_10408cc9c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10408cce0; end: 10408cceb; -[SCSCLensUnlockerMockServicesWrapperSaberServiceProvider setLensSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408cce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113058fe0;
  _swift_beginAccess(param_1 + _DAT_113058fe0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10408ccec; end: 10408cd3f;  */

void FUN_10408ccec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10408cd40; end: 10408cf53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10408cd40(void)

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
    func_0x000107c4b484();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010408ad94();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113058c40);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113058fe8);
      *(long *)(unaff_x20 + _DAT_113058fe8) = lVar4;
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
             "LensSystemScopeGraphBridge/SCSCLensUnlockerMockServicesWrapperSaberServiceProvider.swift"
             ,0x58,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10408ce6c);
  (*pcVar1)();
}



/* Entry: 10408cf54; end: 10408cf87; -[SCSCLensUnlockerMockServicesWrapperSaberServiceProvider provide] */

void FUN_10408cf54(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10408cd40();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10408cf88; end: 10408cfbb; -[SCSCLensUnlockerMockServicesWrapperSaberServiceProvider __safeProvide] */

void FUN_10408cf88(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010408ce6c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10408cfbc; end: 10408cfff; -[SCSCLensUnlockerMockServicesWrapperSaberServiceProvider end] */

void FUN_10408cfbc(undefined8 param_1)

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



/* Entry: 10408d000; end: 10408d197;  */

void FUN_10408d000(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0e17690)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000022,0x800000010f1e8970,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "LensSystemScopeGraphBridge/SCSCLensUnlockerMockServicesWrapperSaberServiceProvider.swift"
                   ,0x58,2,0x35,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10408d198);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c55e98();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10408d198; end: 10408d243; -[SCSCLensUnlockerMockServicesWrapperSaberServiceProvider setValue:forIvarName:] */

void FUN_10408d198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10408d000(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10408d244; end: 10408d2b7; -[SCSCLensUnlockerMockServicesWrapperSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408d244(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113058fd8,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113058fe0,0);
  *(undefined8 *)(param_1 + _DAT_113058fe8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10408d2b8; end: 10408d2eb;  */

void FUN_10408d2b8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10408d2ec; end: 10408d333; -[SCSCLensUnlockerMockServicesWrapperSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408d2ec(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113058fd8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113058fe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113058fe8));
  return;
}



/* Entry: 10408d334; end: 10408d353;  */

void FUN_10408d334(void)

{
  _objc_opt_self(&PTR_PTR_113059030);
  return;
}



/* Entry: 10408d354; end: 10408d3bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408d354(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x000100093dd4();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_1130590a0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  _swift_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10408d3c0; end: 10408d3c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408d3c0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x000100093dd4();
  _objc_allocWithZone();
  *(long *)(lVar2 + _DAT_1130590a0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain();
  _objc_msgSendSuper2(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10408d3c8; end: 10408d413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408d3c8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130590a0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10408d414; end: 10408d473; -[_TtC35SCLensCollectionsMockImplementation36SCLensCollectionsMockServicesWrapper init] */

void FUN_10408d414(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensCollectionsMockImplementation.SCLensCollectionsMockServicesWrapper",0x48,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10408d440);
  (*pcVar1)();
}



/* Entry: 10408d474; end: 10408d493; -[_TtC35SCLensCollectionsMockImplementation36SCLensCollectionsMockServicesWrapper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408d474(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130590a0));
  return;
}



/* Entry: 10408d494; end: 10408d4bf; +[_TtC35SCLensCollectionsMockImplementation32LensCollectionsMokedDataProvider lensCollectionIdKey] */

void FUN_10408d494(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1e8ba0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10408d4c0; end: 10408d517; +[_TtC35SCLensCollectionsMockImplementation32LensCollectionsMokedDataProvider lensCollectionKey] */

void FUN_10408d4c0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6c6f632d736e656c,0xef6e6f697463656c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10408d518; end: 10408d557; +[_TtC35SCLensCollectionsMockImplementation32LensCollectionsMokedDataProvider instance] */

void FUN_10408d518(void)

{
  if (lRam00000001130590d0 != -1) {
    _swift_once(0x1130590d0,0x10408d4f4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138130d0);
  return;
}



/* Entry: 10408d558; end: 10408d747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408d558(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_90;
  long lStack_88;
  undefined *puStack_68;
  
  _swift_getObjectType();
  lVar1 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar6 = *(long *)(lVar1 + -8);
  lStack_88 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar7 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_90 = _DAT_1130590d8;
  uVar3 = 0;
  FUN_10408f100(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar2);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100029608();
  uVar5 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar4 = uVar5;
  func_0x00010002964c();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj(lVar8,&puStack_68,uVar5,uVar4,lVar1,uVar3)
  ;
  (**(code **)(lVar6 + 0x68))
            (lVar7,*(undefined4 *)
                    PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_88);
  uVar5 = 0xd000000000000037;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd000000000000037,0x800000010f1e8b60,lVar2,lVar8,lVar7,0);
  *(undefined8 *)(unaff_x20 + lStack_90) = uVar5;
  *(undefined **)(unaff_x20 + _DAT_1130590e0) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  _objc_msgSendSuper2(&stack0xffffffffffffff88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10408d748; end: 10408d767; -[_TtC35SCLensCollectionsMockImplementation32LensCollectionsMokedDataProvider init] */

void FUN_10408d748(void)

{
  FUN_10408d558();
  return;
}



/* Entry: 10408d768; end: 10408d97f;  */

undefined * FUN_10408d768(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lStack_38;
  
  uVar3 = param_1;
  FUN_10408d9f0();
  puVar4 = PTR_PTR_1126deb80;
  _objc_allocWithZone(PTR_PTR_1126deb80);
  func_0x00010bfee200();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  puVar5 = puVar4;
  func_0x000107c5e4bc(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_1);
  uVar6 = 0x6c6f632074736574;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6c6f632074736574,0xef6e6f697463656c);
  puVar4 = puVar5;
  func_0x000107c5e6f0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar6);
  uVar6 = 0xd00000000000006d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000006d,0x800000010f1e8bc0);
  puVar5 = puVar4;
  func_0x000107c5e830(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar6);
  lStack_38 = 0;
  uVar6 = 0;
  FUN_10408f100(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  __sSa10FoundationE26_forceBridgeFromObjectiveC_6resultySo7NSArrayC_SayxGSgztFZ
            (uVar3,&lStack_38,uVar6);
  lVar1 = lStack_38;
  if (lStack_38 != 0) {
    lVar7 = lStack_38;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lStack_38,uVar6);
    _swift_bridgeObjectRelease(lVar1);
    puVar4 = puVar5;
    func_0x000107c5e680(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(lVar7);
    puVar5 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126ae6b8;
    _objc_opt_self(PTR_PTR_1126ae6b8);
    puVar8 = PTR_PTR_1126af5d0;
    _objc_opt_self(PTR_PTR_1126af5d0);
    func_0x000107c5c3c8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(puVar5);
    _objc_release(puVar8);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10408d980);
  (*pcVar2)();
}



/* Entry: 10408d980; end: 10408d9ef; -[_TtC35SCLensCollectionsMockImplementation32LensCollectionsMokedDataProvider lensCollectionForCollectionId:] */

void FUN_10408d980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_1);
  FUN_10408d768(param_3,param_2,PTR___swiftEmptyArrayStorage_11034f1c8);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10408d9f0; end: 10408dc03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10408d9f0(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_90 [16];
  ulong uStack_68;
  
  uVar7 = 0x112d530a8;
  func_0x0001000285a8(0x112d530a8,&UNK_10d919940);
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
            (&uStack_68,FUN_10408f140,auStack_90,uVar7);
  if (uStack_68 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uStack_68 & 0xffffffffffffff8) + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar9 = uStack_68 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uStack_68) {
      uVar9 = uStack_68;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
  if (uVar9 != 0) {
    uVar10 = 0;
    do {
      if ((uStack_68 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uStack_68 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10408db88);
          (*pcVar1)();
        }
        uVar2 = *(ulong *)(uStack_68 + uVar10 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar2 = uVar10;
        func_0x000100ff3f88(uVar10,uStack_68);
      }
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10408db84);
        (*pcVar1)();
      }
      uVar11 = uVar10 + 1;
      uVar3 = uVar2;
      FUN_10408e488();
      _objc_release(uVar2);
      puVar5 = puVar6;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      if (((((ulong)puVar5 & 1) == 0) || ((long)puVar6 < 0)) ||
         (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar6 >> 0x3e == 0) {
          puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar6) {
            puVar4 = puVar6;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg(puVar4);
        }
        puVar5 = (undefined *)0x0;
        func_0x000100fe2a60(0,puVar4 + 1,1,puVar6);
      }
      uVar8 = (ulong)puVar5 & 0xffffffffffffff8;
      uVar2 = *(ulong *)(uVar8 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        func_0x000100fe2a60(puVar6,uVar2 + 1,1,puVar5);
        uVar8 = (ulong)puVar6 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar8 + 0x10) = uVar2 + 1;
      *(ulong *)(uVar8 + uVar2 * 8 + 0x20) = uVar3;
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar9);
  }
  _swift_bridgeObjectRelease(uStack_68);
  uVar7 = 0;
  FUN_10408f100(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  puVar5 = puVar6;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar6,uVar7);
  _swift_bridgeObjectRelease(puVar6);
  return puVar5;
}



/* Entry: 10408dc04; end: 10408dc9f; -[_TtC35SCLensCollectionsMockImplementation32LensCollectionsMokedDataProvider lensCollectionForCollectionId:prefetchedLenses:] */

void FUN_10408dc04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = 0;
  FUN_10408f100(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar1);
  _objc_retain(param_1);
  FUN_10408d768(param_3,param_2,param_4);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10408dca0; end: 10408dd6f; -[_TtC35SCLensCollectionsMockImplementation32LensCollectionsMokedDataProvider lensesForLensCollectionId:] */

void FUN_10408dca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_1);
  FUN_10408d9f0(param_3,param_2,PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_opt_self(PTR_PTR_1126ae6b8);
  puVar2 = PTR_PTR_1126af5d0;
  _objc_opt_self(PTR_PTR_1126af5d0);
  func_0x000107c5c3c8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10408dd70; end: 10408de6b; -[_TtC35SCLensCollectionsMockImplementation32LensCollectionsMokedDataProvider lensesForLensCollectionId:prefetchedLenses:] */

void FUN_10408dd70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = 0;
  FUN_10408f100(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar1);
  _objc_retain(param_1);
  FUN_10408d9f0(param_3,param_2,param_4);
  puVar2 = PTR_PTR_1126ae6b8;
  _objc_opt_self(PTR_PTR_1126ae6b8);
  puVar3 = PTR_PTR_1126af5d0;
  _objc_opt_self(PTR_PTR_1126af5d0);
  func_0x000107c5c3c8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_4);
  _objc_release(param_3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10408de6c; end: 10408e1b3;  */

/* WARNING: Removing unreachable block (ram,0x00010408ded4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408de6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  ulong uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  ppuVar10 = &puStack_c0;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
  func_0x00010006c00c(param_1,param_2);
  lVar3 = param_1;
  func_0x00010130c4a4(param_1,param_2);
  func_0x00010006c090(param_1,param_2);
  if (lVar3 == 0) {
    return;
  }
  func_0x000107c57e2c(lVar3);
  lVar6 = lVar3;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    uStack_78 = 0;
    puStack_80 = (undefined *)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&puStack_80);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_b8 = uStack_78;
  puStack_c0 = puStack_80;
  puStack_a8 = (undefined *)lStack_68;
  puStack_b0 = (undefined *)uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&puStack_c0);
  }
  else {
    uVar4 = 0;
    FUN_10408f100(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar9 = PTR___sypN_11034f1a8;
    puVar5 = &uStack_88;
    _swift_dynamicCast(puVar5,&puStack_c0,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar5 & 1) != 0) {
      puStack_c0 = (undefined *)0x0;
      uVar4 = uStack_88;
      _objc_retain(uStack_88);
      __sSD10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo12NSDictionaryC_SDyxq_GSgztFZ
                ();
      _objc_release(uVar4);
      puVar11 = puStack_c0;
      if (puStack_c0 == (undefined *)0x0) {
        _objc_release(uVar4);
      }
      else {
        if (*(long *)(puStack_c0 + 0x10) != 0) {
          _swift_bridgeObjectRetain(puStack_c0);
          uVar12 = 0;
          lVar6 = -0x2fffffffffffffee;
          func_0x000100029284(0xd000000000000012);
          if ((uVar12 & 1) == 0) {
            _objc_release(uVar4);
            _objc_release(lVar3);
            _swift_bridgeObjectRelease_n(puVar11,2);
            return;
          }
          func_0x0001000bb420(*(long *)(puVar11 + 0x38) + lVar6 * 0x20,&puStack_c0);
          _swift_bridgeObjectRelease(puVar11);
          ppuVar7 = &puStack_80;
          _swift_dynamicCast(ppuVar7,&puStack_c0,puVar9 + 8,PTR___sSSN_11034da80,6);
          uVar1 = uStack_78;
          puVar9 = puStack_80;
          if (((ulong)ppuVar7 & 1) != 0) {
            uVar13 = *(undefined8 *)(unaff_x20 + _DAT_1130590d8);
            puVar8 = &UNK_11073f1f8;
            _swift_allocObject(&UNK_11073f1f8,0x30,7);
            *(long *)(puVar8 + 0x10) = unaff_x20;
            *(undefined **)(puVar8 + 0x18) = puVar9;
            *(undefined8 *)(puVar8 + 0x20) = uVar1;
            *(undefined **)(puVar8 + 0x28) = puVar11;
            puVar9 = &UNK_11073f220;
            _swift_allocObject(&UNK_11073f220,0x20,7);
            *(code **)(puVar9 + 0x10) = FUN_10408f098;
            *(undefined **)(puVar9 + 0x18) = puVar8;
            pcStack_a0 = FUN_10408f0a4;
            puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_b8 = 0x42000000;
            puStack_b0 = &UNK_10006eb60;
            puStack_a8 = &UNK_11073f238;
            puStack_98 = puVar9;
            __Block_copy(&puStack_c0);
            puVar11 = puStack_98;
            _objc_retain();
            _swift_retain(puVar9);
            _swift_release(puVar11);
            func_0x00010006eaa4(uVar13,ppuVar10);
            _objc_release(lVar3);
            _objc_release(uVar4);
            __Block_release(ppuVar10);
            puVar11 = puVar9;
            _swift_isEscapingClosureAtFileLocation(puVar9,"",0x7b,0x54,0x13,1);
            _swift_release(puVar9);
            _swift_release(puVar8);
            if (((ulong)puVar11 & 1) == 0) {
              return;
            }
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10408e148);
            (*pcVar2)();
          }
        }
        _objc_release(uVar4);
        _swift_bridgeObjectRelease(puVar11);
      }
    }
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 10408e1b4; end: 10408e34b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408e1b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lStack_68;
  undefined1 auStack_60 [32];
  
  if (*(long *)(param_4 + 0x10) == 0) {
LAB_10408e2e0:
    _swift_beginAccess(param_1 + _DAT_1130590e0,auStack_60,0x21,0);
  }
  else {
    _swift_bridgeObjectRetain(param_4);
    lVar1 = 0x6c6f632d736e656c;
    uVar5 = 0;
    func_0x000100029284(0x6c6f632d736e656c);
    if ((uVar5 & 1) == 0) {
      _swift_bridgeObjectRelease(param_4);
      goto LAB_10408e2e0;
    }
    func_0x0001000bb420(*(long *)(param_4 + 0x38) + lVar1 * 0x20,auStack_60);
    _swift_bridgeObjectRelease(param_4);
    uVar2 = 0x112d530a8;
    func_0x0001000285a8(0x112d530a8,&UNK_10d919940);
    plVar3 = &lStack_68;
    _swift_dynamicCast(plVar3,auStack_60,PTR___sypN_11034f1a8 + 8,uVar2,6);
    lVar1 = lStack_68;
    if (((ulong)plVar3 & 1) == 0) goto LAB_10408e2e0;
    plVar3 = (long *)(param_1 + _DAT_1130590e0);
    _swift_beginAccess(plVar3,auStack_60,0x21,0);
    if (lVar1 != 0) {
      _swift_bridgeObjectRetain(param_3);
      lVar4 = *plVar3;
      _swift_isUniquelyReferenced_nonNull_native(lVar4);
      lStack_68 = *plVar3;
      *plVar3 = -0x8000000000000000;
      FUN_10408e98c(lVar1,param_2,param_3,lVar4);
      _swift_bridgeObjectRelease(param_3);
      *plVar3 = lStack_68;
      goto LAB_10408e32c;
    }
  }
  _swift_bridgeObjectRetain(param_3);
  FUN_10408e8d0(param_2,param_3);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(param_2);
LAB_10408e32c:
  _swift_endAccess(auStack_60);
  return;
}



/* Entry: 10408e34c; end: 10408e3bf; -[_TtC35SCLensCollectionsMockImplementation32LensCollectionsMokedDataProvider addLensData:] */

void FUN_10408e34c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_3);
  _objc_release(uVar1);
  FUN_10408de6c(param_3,param_2);
  func_0x00010006c090(param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10408e3c0; end: 10408e487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408e3c0(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_1130590e0;
  _swift_beginAccess(param_2 + _DAT_1130590e0,auStack_58,0x20,0);
  lVar1 = *(long *)(param_2 + lVar1);
  if (*(long *)(lVar1 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar1);
    func_0x000100029284();
    if ((param_4 & 1) != 0) {
      puVar2 = *(undefined **)(*(long *)(lVar1 + 0x38) + param_3 * 8);
      _swift_bridgeObjectRetain(puVar2);
      _swift_endAccess(auStack_58);
      _swift_bridgeObjectRelease(lVar1);
      goto LAB_10408e468;
    }
    _swift_bridgeObjectRelease(lVar1);
  }
  _swift_endAccess(auStack_58);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_10408e468:
  *param_1 = puVar2;
  return;
}


