/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104056df8; end: 104056e03; -[SCSCOneTapLoginMultiAccountRepositoriesServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104056df8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113051ad0;
  _swift_beginAccess(param_1 + _DAT_113051ad0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104056e04; end: 104056e0f; -[SCSCOneTapLoginMultiAccountRepositoriesServicesSaberServiceProvider activSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104056e04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113051ad8;
  _swift_beginAccess(param_1 + _DAT_113051ad8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104056e10; end: 104056e53;  */

void FUN_104056e10(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104056e54; end: 104056e5f; -[SCSCOneTapLoginMultiAccountRepositoriesServicesSaberServiceProvider setActivSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104056e54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113051ad8;
  _swift_beginAccess(param_1 + _DAT_113051ad8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104056e60; end: 104056eb3;  */

void FUN_104056e60(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104056eb4; end: 1040570c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104056eb4(void)

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
    func_0x00010beef620();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010404f2e0();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113050d60);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113051ae0);
      *(long *)(unaff_x20 + _DAT_113051ae0) = lVar4;
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
             "ActivSystemScopeGraphBridge/SCSCOneTapLoginMultiAccountRepositoriesServicesSaberServiceProvider.swift"
             ,0x65,2,0x36,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104056fe0);
  (*pcVar1)();
}



/* Entry: 1040570c8; end: 1040570fb; -[SCSCOneTapLoginMultiAccountRepositoriesServicesSaberServiceProvider provide] */

void FUN_1040570c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104056eb4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1040570fc; end: 10405712f; -[SCSCOneTapLoginMultiAccountRepositoriesServicesSaberServiceProvider __safeProvide] */

void FUN_1040570fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000104056fe0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104057130; end: 104057173; -[SCSCOneTapLoginMultiAccountRepositoriesServicesSaberServiceProvider end] */

void FUN_104057130(undefined8 param_1)

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



/* Entry: 104057174; end: 10405730b;  */

void FUN_104057174(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0e1c5d0)) {
      uVar2 = 0xd000000000000023;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000023,0x800000010f1e3a30,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "ActivSystemScopeGraphBridge/SCSCOneTapLoginMultiAccountRepositoriesServicesSaberServiceProvider.swift"
                   ,0x65,2,0x4b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10405730c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c521a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10405730c; end: 1040573b7; -[SCSCOneTapLoginMultiAccountRepositoriesServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10405730c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_104057174(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1040573b8; end: 10405742b; -[SCSCOneTapLoginMultiAccountRepositoriesServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040573b8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113051ad0,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113051ad8,0);
  *(undefined8 *)(param_1 + _DAT_113051ae0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10405742c; end: 10405745f;  */

void FUN_10405742c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104057460; end: 1040574a7; -[SCSCOneTapLoginMultiAccountRepositoriesServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104057460(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113051ad0);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113051ad8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113051ae0));
  return;
}



/* Entry: 1040574a8; end: 1040574c7;  */

void FUN_1040574a8(void)

{
  _objc_opt_self(&PTR_PTR_113051b28);
  return;
}



/* Entry: 1040574c8; end: 1040574d3; -[SCSCRegistrationDeviceInfoServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040574c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113051b90;
  _swift_beginAccess(param_1 + _DAT_113051b90,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040574d4; end: 1040574df; -[SCSCRegistrationDeviceInfoServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040574d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113051b90;
  _swift_beginAccess(param_1 + _DAT_113051b90,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1040574e0; end: 1040574eb; -[SCSCRegistrationDeviceInfoServicesSaberServiceProvider activSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040574e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113051b98;
  _swift_beginAccess(param_1 + _DAT_113051b98,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040574ec; end: 10405752f;  */

void FUN_1040574ec(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104057530; end: 10405753b; -[SCSCRegistrationDeviceInfoServicesSaberServiceProvider setActivSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104057530(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113051b98;
  _swift_beginAccess(param_1 + _DAT_113051b98,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10405753c; end: 10405758f;  */

void FUN_10405753c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104057590; end: 1040577a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104057590(void)

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
    func_0x00010beef620();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010404f40c();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113050d68);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113051ba0);
      *(long *)(unaff_x20 + _DAT_113051ba0) = lVar4;
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
             "ActivSystemScopeGraphBridge/SCSCRegistrationDeviceInfoServicesSaberServiceProvider.swift"
             ,0x58,2,0x36,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040576bc);
  (*pcVar1)();
}



/* Entry: 1040577a4; end: 1040577d7; -[SCSCRegistrationDeviceInfoServicesSaberServiceProvider provide] */

void FUN_1040577a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104057590();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1040577d8; end: 10405780b; -[SCSCRegistrationDeviceInfoServicesSaberServiceProvider __safeProvide] */

void FUN_1040577d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001040576bc();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10405780c; end: 10405784f; -[SCSCRegistrationDeviceInfoServicesSaberServiceProvider end] */

void FUN_10405780c(undefined8 param_1)

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



/* Entry: 104057850; end: 1040579e7;  */

void FUN_104057850(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0e1c5d0)) {
      uVar2 = 0xd000000000000023;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000023,0x800000010f1e3a30,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "ActivSystemScopeGraphBridge/SCSCRegistrationDeviceInfoServicesSaberServiceProvider.swift"
                   ,0x58,2,0x4b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1040579e8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c521a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1040579e8; end: 104057a93; -[SCSCRegistrationDeviceInfoServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1040579e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_104057850(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 104057a94; end: 104057b07; -[SCSCRegistrationDeviceInfoServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104057a94(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113051b90,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113051b98,0);
  *(undefined8 *)(param_1 + _DAT_113051ba0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104057b08; end: 104057b3b;  */

void FUN_104057b08(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104057b3c; end: 104057b83; -[SCSCRegistrationDeviceInfoServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104057b3c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113051b90);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113051b98);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113051ba0));
  return;
}



/* Entry: 104057b84; end: 104057ba3;  */

void FUN_104057b84(void)

{
  _objc_opt_self(&PTR_PTR_113051be8);
  return;
}



/* Entry: 104057ba4; end: 104057baf; -[SCSCRegistrationSessionServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104057ba4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113051c50;
  _swift_beginAccess(param_1 + _DAT_113051c50,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104057bb0; end: 104057bbb; -[SCSCRegistrationSessionServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104057bb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113051c50;
  _swift_beginAccess(param_1 + _DAT_113051c50,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104057bbc; end: 104057bc7; -[SCSCRegistrationSessionServicesSaberServiceProvider activSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104057bbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113051c58;
  _swift_beginAccess(param_1 + _DAT_113051c58,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104057bc8; end: 104057c0b;  */

void FUN_104057bc8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104057c0c; end: 104057c17; -[SCSCRegistrationSessionServicesSaberServiceProvider setActivSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104057c0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113051c58;
  _swift_beginAccess(param_1 + _DAT_113051c58,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104057c18; end: 104057c6b;  */

void FUN_104057c18(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104057c6c; end: 104057e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104057c6c(void)

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
    func_0x00010beef620();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010404f538();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113050d70);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113051c60);
      *(long *)(unaff_x20 + _DAT_113051c60) = lVar4;
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
             "ActivSystemScopeGraphBridge/SCSCRegistrationSessionServicesSaberServiceProvider.swift"
             ,0x55,2,0x36,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104057d98);
  (*pcVar1)();
}



/* Entry: 104057e80; end: 104057eb3; -[SCSCRegistrationSessionServicesSaberServiceProvider provide] */

void FUN_104057e80(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104057c6c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104057eb4; end: 104057ee7; -[SCSCRegistrationSessionServicesSaberServiceProvider __safeProvide] */

void FUN_104057eb4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000104057d98();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104057ee8; end: 104057f2b; -[SCSCRegistrationSessionServicesSaberServiceProvider end] */

void FUN_104057ee8(undefined8 param_1)

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



/* Entry: 104057f2c; end: 1040580c3;  */

void FUN_104057f2c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0e1c5d0)) {
      uVar2 = 0xd000000000000023;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000023,0x800000010f1e3a30,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "ActivSystemScopeGraphBridge/SCSCRegistrationSessionServicesSaberServiceProvider.swift"
                   ,0x55,2,0x4b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1040580c4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c521a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1040580c4; end: 10405816f; -[SCSCRegistrationSessionServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1040580c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_104057f2c(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 104058170; end: 1040581e3; -[SCSCRegistrationSessionServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104058170(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113051c50,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113051c58,0);
  *(undefined8 *)(param_1 + _DAT_113051c60) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040581e4; end: 104058217;  */

void FUN_1040581e4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104058218; end: 10405825f; -[SCSCRegistrationSessionServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104058218(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113051c50);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113051c58);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113051c60));
  return;
}



/* Entry: 104058260; end: 10405827f;  */

void FUN_104058260(void)

{
  _objc_opt_self(&PTR_PTR_113051ca8);
  return;
}



/* Entry: 104058280; end: 10405828b; -[SCSCSettingsEventLoggerServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104058280(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113051d10;
  _swift_beginAccess(param_1 + _DAT_113051d10,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10405828c; end: 104058297; -[SCSCSettingsEventLoggerServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405828c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113051d10;
  _swift_beginAccess(param_1 + _DAT_113051d10,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104058298; end: 1040582a3; -[SCSCSettingsEventLoggerServicesSaberServiceProvider activSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104058298(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113051d18;
  _swift_beginAccess(param_1 + _DAT_113051d18,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040582a4; end: 1040582e7;  */

void FUN_1040582a4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1040582e8; end: 1040582f3; -[SCSCSettingsEventLoggerServicesSaberServiceProvider setActivSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040582e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113051d18;
  _swift_beginAccess(param_1 + _DAT_113051d18,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1040582f4; end: 104058347;  */

void FUN_1040582f4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104058348; end: 10405855b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104058348(void)

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
    func_0x00010beef620();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010404f664();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113050d78);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113051d20);
      *(long *)(unaff_x20 + _DAT_113051d20) = lVar4;
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
             "ActivSystemScopeGraphBridge/SCSCSettingsEventLoggerServicesSaberServiceProvider.swift"
             ,0x55,2,0x36,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104058474);
  (*pcVar1)();
}



/* Entry: 10405855c; end: 10405858f; -[SCSCSettingsEventLoggerServicesSaberServiceProvider provide] */

void FUN_10405855c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104058348();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104058590; end: 1040585c3; -[SCSCSettingsEventLoggerServicesSaberServiceProvider __safeProvide] */

void FUN_104058590(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000104058474();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1040585c4; end: 104058607; -[SCSCSettingsEventLoggerServicesSaberServiceProvider end] */

void FUN_1040585c4(undefined8 param_1)

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



/* Entry: 104058608; end: 10405879f;  */

void FUN_104058608(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0e1c5d0)) {
      uVar2 = 0xd000000000000023;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000023,0x800000010f1e3a30,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "ActivSystemScopeGraphBridge/SCSCSettingsEventLoggerServicesSaberServiceProvider.swift"
                   ,0x55,2,0x4b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1040587a0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c521a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1040587a0; end: 10405884b; -[SCSCSettingsEventLoggerServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1040587a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_104058608(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10405884c; end: 1040588bf; -[SCSCSettingsEventLoggerServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405884c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113051d10,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113051d18,0);
  *(undefined8 *)(param_1 + _DAT_113051d20) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040588c0; end: 1040588f3;  */

void FUN_1040588c0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040588f4; end: 10405893b; -[SCSCSettingsEventLoggerServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040588f4(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113051d10);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113051d18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113051d20));
  return;
}



/* Entry: 10405893c; end: 10405895b;  */

void FUN_10405893c(void)

{
  _objc_opt_self(&PTR_PTR_113051d68);
  return;
}



/* Entry: 10405895c; end: 104058967; -[SCSCUnauthenticatedScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405895c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113051dd0;
  _swift_beginAccess(param_1 + _DAT_113051dd0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104058968; end: 104058973; -[SCSCUnauthenticatedScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104058968(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113051dd0;
  _swift_beginAccess(param_1 + _DAT_113051dd0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104058974; end: 10405897f; -[SCSCUnauthenticatedScopeServicesSaberServiceProvider activSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104058974(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113051dd8;
  _swift_beginAccess(param_1 + _DAT_113051dd8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104058980; end: 1040589c3;  */

void FUN_104058980(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1040589c4; end: 1040589cf; -[SCSCUnauthenticatedScopeServicesSaberServiceProvider setActivSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040589c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113051dd8;
  _swift_beginAccess(param_1 + _DAT_113051dd8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1040589d0; end: 104058a23;  */

void FUN_1040589d0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104058a24; end: 104058c37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104058a24(void)

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
    func_0x00010beef620();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010404f790();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113050d88);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113051de0);
      *(long *)(unaff_x20 + _DAT_113051de0) = lVar4;
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
             "ActivSystemScopeGraphBridge/SCSCUnauthenticatedScopeServicesSaberServiceProvider.swift"
             ,0x56,2,0x36,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104058b50);
  (*pcVar1)();
}



/* Entry: 104058c38; end: 104058c6b; -[SCSCUnauthenticatedScopeServicesSaberServiceProvider provide] */

void FUN_104058c38(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104058a24();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104058c6c; end: 104058c9f; -[SCSCUnauthenticatedScopeServicesSaberServiceProvider __safeProvide] */

void FUN_104058c6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000104058b50();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104058ca0; end: 104058ce3; -[SCSCUnauthenticatedScopeServicesSaberServiceProvider end] */

void FUN_104058ca0(undefined8 param_1)

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



/* Entry: 104058ce4; end: 104058e7b;  */

void FUN_104058ce4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0e1c5d0)) {
      uVar2 = 0xd000000000000023;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000023,0x800000010f1e3a30,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "ActivSystemScopeGraphBridge/SCSCUnauthenticatedScopeServicesSaberServiceProvider.swift"
                   ,0x56,2,0x4b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104058e7c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c521a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 104058e7c; end: 104058f27; -[SCSCUnauthenticatedScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_104058e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_104058ce4(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 104058f28; end: 104058f9b; -[SCSCUnauthenticatedScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104058f28(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113051dd0,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113051dd8,0);
  *(undefined8 *)(param_1 + _DAT_113051de0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104058f9c; end: 104058fcf;  */

void FUN_104058f9c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104058fd0; end: 104059017; -[SCSCUnauthenticatedScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104058fd0(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113051dd0);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113051dd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113051de0));
  return;
}



/* Entry: 104059018; end: 104059037;  */

void FUN_104059018(void)

{
  _objc_opt_self(&PTR_PTR_113051e28);
  return;
}



/* Entry: 104059038; end: 104059043; -[SCSCUpdatesFrequencyServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104059038(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113051e90;
  _swift_beginAccess(param_1 + _DAT_113051e90,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104059044; end: 10405904f; -[SCSCUpdatesFrequencyServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104059044(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113051e90;
  _swift_beginAccess(param_1 + _DAT_113051e90,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104059050; end: 10405905b; -[SCSCUpdatesFrequencyServicesSaberServiceProvider activSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104059050(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113051e98;
  _swift_beginAccess(param_1 + _DAT_113051e98,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10405905c; end: 10405909f;  */

void FUN_10405905c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1040590a0; end: 1040590ab; -[SCSCUpdatesFrequencyServicesSaberServiceProvider setActivSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040590a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113051e98;
  _swift_beginAccess(param_1 + _DAT_113051e98,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1040590ac; end: 1040590ff;  */

void FUN_1040590ac(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104059100; end: 104059313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104059100(void)

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
    func_0x00010beef620();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010404f8bc();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113050d90);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113051ea0);
      *(long *)(unaff_x20 + _DAT_113051ea0) = lVar4;
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
             "ActivSystemScopeGraphBridge/SCSCUpdatesFrequencyServicesSaberServiceProvider.swift",
             0x52,2,0x36,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10405922c);
  (*pcVar1)();
}



/* Entry: 104059314; end: 104059347; -[SCSCUpdatesFrequencyServicesSaberServiceProvider provide] */

void FUN_104059314(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104059100();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104059348; end: 10405937b; -[SCSCUpdatesFrequencyServicesSaberServiceProvider __safeProvide] */

void FUN_104059348(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010405922c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10405937c; end: 1040593bf; -[SCSCUpdatesFrequencyServicesSaberServiceProvider end] */

void FUN_10405937c(undefined8 param_1)

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



/* Entry: 1040593c0; end: 104059557;  */

void FUN_1040593c0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0e1c5d0)) {
      uVar2 = 0xd000000000000023;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000023,0x800000010f1e3a30,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "ActivSystemScopeGraphBridge/SCSCUpdatesFrequencyServicesSaberServiceProvider.swift"
                   ,0x52,2,0x4b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104059558);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c521a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 104059558; end: 104059603; -[SCSCUpdatesFrequencyServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_104059558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1040593c0(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 104059604; end: 104059677; -[SCSCUpdatesFrequencyServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104059604(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113051e90,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113051e98,0);
  *(undefined8 *)(param_1 + _DAT_113051ea0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104059678; end: 1040596ab;  */

void FUN_104059678(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040596ac; end: 1040596f3; -[SCSCUpdatesFrequencyServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040596ac(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113051e90);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113051e98);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113051ea0));
  return;
}



/* Entry: 1040596f4; end: 104059713;  */

void FUN_1040596f4(void)

{
  _objc_opt_self(&PTR_PTR_113051ee8);
  return;
}



/* Entry: 104059714; end: 10405971f; -[SCSCUserIPInferredLocationServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104059714(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113051f50;
  _swift_beginAccess(param_1 + _DAT_113051f50,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104059720; end: 10405972b; -[SCSCUserIPInferredLocationServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104059720(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113051f50;
  _swift_beginAccess(param_1 + _DAT_113051f50,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10405972c; end: 104059737; -[SCSCUserIPInferredLocationServicesSaberServiceProvider activSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405972c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113051f58;
  _swift_beginAccess(param_1 + _DAT_113051f58,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104059738; end: 10405977b;  */

void FUN_104059738(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10405977c; end: 104059787; -[SCSCUserIPInferredLocationServicesSaberServiceProvider setActivSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405977c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113051f58;
  _swift_beginAccess(param_1 + _DAT_113051f58,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}


