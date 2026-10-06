/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103fb9fcc; end: 103fb9fd7; -[SCSCMemoriesFileManagerServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fb9fcc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11303e328;
  _swift_beginAccess(param_1 + _DAT_11303e328,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fb9fd8; end: 103fb9fe3; -[SCSCMemoriesFileManagerServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fb9fd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11303e328;
  _swift_beginAccess(param_1 + _DAT_11303e328,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fb9fe4; end: 103fb9fef; -[SCSCMemoriesFileManagerServicesSaberServiceProvider memUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fb9fe4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11303e330;
  _swift_beginAccess(param_1 + _DAT_11303e330,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fb9ff0; end: 103fba033;  */

void FUN_103fb9ff0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103fba034; end: 103fba03f; -[SCSCMemoriesFileManagerServicesSaberServiceProvider setMemUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fba034(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11303e330;
  _swift_beginAccess(param_1 + _DAT_11303e330,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fba040; end: 103fba093;  */

void FUN_103fba040(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fba094; end: 103fba2a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fba094(void)

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
    func_0x000107c4cad0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103fb20d0();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11303d568);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11303e338);
      *(long *)(unaff_x20 + _DAT_11303e338) = lVar4;
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
             "MemUserSessionScopeGraphBridge/SCSCMemoriesFileManagerServicesSaberServiceProvider.swift"
             ,0x58,2,0x30,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fba1c0);
  (*pcVar1)();
}



/* Entry: 103fba2a8; end: 103fba2db; -[SCSCMemoriesFileManagerServicesSaberServiceProvider provide] */

void FUN_103fba2a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103fba094();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fba2dc; end: 103fba30f; -[SCSCMemoriesFileManagerServicesSaberServiceProvider __safeProvide] */

void FUN_103fba2dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103fba1c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fba310; end: 103fba353; -[SCSCMemoriesFileManagerServicesSaberServiceProvider end] */

void FUN_103fba310(undefined8 param_1)

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



/* Entry: 103fba354; end: 103fba4eb;  */

void FUN_103fba354(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffda) || (param_3 != -0x7ffffffef0e28990)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000026,0x800000010f1d7670,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "MemUserSessionScopeGraphBridge/SCSCMemoriesFileManagerServicesSaberServiceProvider.swift"
                   ,0x58,2,0x45,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103fba4ec);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c564e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103fba4ec; end: 103fba597; -[SCSCMemoriesFileManagerServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103fba4ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103fba354(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103fba598; end: 103fba60b; -[SCSCMemoriesFileManagerServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fba598(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11303e328,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11303e330,0);
  *(undefined8 *)(param_1 + _DAT_11303e338) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fba60c; end: 103fba63f;  */

void FUN_103fba60c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103fba640; end: 103fba687; -[SCSCMemoriesFileManagerServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fba640(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11303e328);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11303e330);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11303e338));
  return;
}



/* Entry: 103fba688; end: 103fba6a7;  */

void FUN_103fba688(void)

{
  _objc_opt_self(&PTR_PTR_11303e380);
  return;
}



/* Entry: 103fba6a8; end: 103fba6b3; -[SCSCMemoriesSnapDocDownloadingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fba6a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11303e3e8;
  _swift_beginAccess(param_1 + _DAT_11303e3e8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fba6b4; end: 103fba6bf; -[SCSCMemoriesSnapDocDownloadingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fba6b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11303e3e8;
  _swift_beginAccess(param_1 + _DAT_11303e3e8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fba6c0; end: 103fba6cb; -[SCSCMemoriesSnapDocDownloadingServicesSaberServiceProvider memUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fba6c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11303e3f0;
  _swift_beginAccess(param_1 + _DAT_11303e3f0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fba6cc; end: 103fba70f;  */

void FUN_103fba6cc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103fba710; end: 103fba71b; -[SCSCMemoriesSnapDocDownloadingServicesSaberServiceProvider setMemUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fba710(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11303e3f0;
  _swift_beginAccess(param_1 + _DAT_11303e3f0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fba71c; end: 103fba76f;  */

void FUN_103fba71c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fba770; end: 103fba983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fba770(void)

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
    func_0x000107c4cad0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103fb21fc();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11303d570);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11303e3f8);
      *(long *)(unaff_x20 + _DAT_11303e3f8) = lVar4;
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
             "MemUserSessionScopeGraphBridge/SCSCMemoriesSnapDocDownloadingServicesSaberServiceProvider.swift"
             ,0x5f,2,0x30,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fba89c);
  (*pcVar1)();
}



/* Entry: 103fba984; end: 103fba9b7; -[SCSCMemoriesSnapDocDownloadingServicesSaberServiceProvider provide] */

void FUN_103fba984(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103fba770();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fba9b8; end: 103fba9eb; -[SCSCMemoriesSnapDocDownloadingServicesSaberServiceProvider __safeProvide] */

void FUN_103fba9b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103fba89c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fba9ec; end: 103fbaa2f; -[SCSCMemoriesSnapDocDownloadingServicesSaberServiceProvider end] */

void FUN_103fba9ec(undefined8 param_1)

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



/* Entry: 103fbaa30; end: 103fbabc7;  */

void FUN_103fbaa30(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffda) || (param_3 != -0x7ffffffef0e28990)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000026,0x800000010f1d7670,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "MemUserSessionScopeGraphBridge/SCSCMemoriesSnapDocDownloadingServicesSaberServiceProvider.swift"
                   ,0x5f,2,0x45,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103fbabc8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c564e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103fbabc8; end: 103fbac73; -[SCSCMemoriesSnapDocDownloadingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103fbabc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103fbaa30(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103fbac74; end: 103fbace7; -[SCSCMemoriesSnapDocDownloadingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbac74(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11303e3e8,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11303e3f0,0);
  *(undefined8 *)(param_1 + _DAT_11303e3f8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fbace8; end: 103fbad1b;  */

void FUN_103fbace8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103fbad1c; end: 103fbad63; -[SCSCMemoriesSnapDocDownloadingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbad1c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11303e3e8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11303e3f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11303e3f8));
  return;
}



/* Entry: 103fbad64; end: 103fbad83;  */

void FUN_103fbad64(void)

{
  _objc_opt_self(&PTR_PTR_11303e440);
  return;
}



/* Entry: 103fbad84; end: 103fbad8f; -[SCSCMemoriesUserDefaultsServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbad84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11303e4a8;
  _swift_beginAccess(param_1 + _DAT_11303e4a8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fbad90; end: 103fbad9b; -[SCSCMemoriesUserDefaultsServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbad90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11303e4a8;
  _swift_beginAccess(param_1 + _DAT_11303e4a8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fbad9c; end: 103fbada7; -[SCSCMemoriesUserDefaultsServicesSaberServiceProvider memUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbad9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11303e4b0;
  _swift_beginAccess(param_1 + _DAT_11303e4b0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fbada8; end: 103fbadeb;  */

void FUN_103fbada8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103fbadec; end: 103fbadf7; -[SCSCMemoriesUserDefaultsServicesSaberServiceProvider setMemUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbadec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11303e4b0;
  _swift_beginAccess(param_1 + _DAT_11303e4b0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fbadf8; end: 103fbae4b;  */

void FUN_103fbadf8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fbae4c; end: 103fbb05f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fbae4c(void)

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
    func_0x000107c4cad0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103fb2328();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11303d578);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11303e4b8);
      *(long *)(unaff_x20 + _DAT_11303e4b8) = lVar4;
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
             "MemUserSessionScopeGraphBridge/SCSCMemoriesUserDefaultsServicesSaberServiceProvider.swift"
             ,0x59,2,0x30,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fbaf78);
  (*pcVar1)();
}



/* Entry: 103fbb060; end: 103fbb093; -[SCSCMemoriesUserDefaultsServicesSaberServiceProvider provide] */

void FUN_103fbb060(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103fbae4c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fbb094; end: 103fbb0c7; -[SCSCMemoriesUserDefaultsServicesSaberServiceProvider __safeProvide] */

void FUN_103fbb094(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103fbaf78();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fbb0c8; end: 103fbb10b; -[SCSCMemoriesUserDefaultsServicesSaberServiceProvider end] */

void FUN_103fbb0c8(undefined8 param_1)

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



/* Entry: 103fbb10c; end: 103fbb2a3;  */

void FUN_103fbb10c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffda) || (param_3 != -0x7ffffffef0e28990)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000026,0x800000010f1d7670,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "MemUserSessionScopeGraphBridge/SCSCMemoriesUserDefaultsServicesSaberServiceProvider.swift"
                   ,0x59,2,0x45,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103fbb2a4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c564e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103fbb2a4; end: 103fbb34f; -[SCSCMemoriesUserDefaultsServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103fbb2a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103fbb10c(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103fbb350; end: 103fbb3c3; -[SCSCMemoriesUserDefaultsServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbb350(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11303e4a8,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11303e4b0,0);
  *(undefined8 *)(param_1 + _DAT_11303e4b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fbb3c4; end: 103fbb3f7;  */

void FUN_103fbb3c4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103fbb3f8; end: 103fbb43f; -[SCSCMemoriesUserDefaultsServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbb3f8(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11303e4a8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11303e4b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11303e4b8));
  return;
}



/* Entry: 103fbb440; end: 103fbb45f;  */

void FUN_103fbb440(void)

{
  _objc_opt_self(&PTR_PTR_11303e500);
  return;
}



/* Entry: 103fbb460; end: 103fbb46b; -[SCSnapDocMediaClaimingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbb460(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11303e568;
  _swift_beginAccess(param_1 + _DAT_11303e568,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fbb46c; end: 103fbb477; -[SCSnapDocMediaClaimingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbb46c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11303e568;
  _swift_beginAccess(param_1 + _DAT_11303e568,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fbb478; end: 103fbb483; -[SCSnapDocMediaClaimingServicesSaberServiceProvider memUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbb478(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11303e570;
  _swift_beginAccess(param_1 + _DAT_11303e570,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fbb484; end: 103fbb4c7;  */

void FUN_103fbb484(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103fbb4c8; end: 103fbb4d3; -[SCSnapDocMediaClaimingServicesSaberServiceProvider setMemUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbb4c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11303e570;
  _swift_beginAccess(param_1 + _DAT_11303e570,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fbb4d4; end: 103fbb527;  */

void FUN_103fbb4d4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fbb528; end: 103fbb73b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fbb528(void)

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
    func_0x000107c4cad0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103fb2454();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11303d588);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11303e578);
      *(long *)(unaff_x20 + _DAT_11303e578) = lVar4;
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
             "MemUserSessionScopeGraphBridge/SCSnapDocMediaClaimingServicesSaberServiceProvider.swift"
             ,0x57,2,0x30,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fbb654);
  (*pcVar1)();
}



/* Entry: 103fbb73c; end: 103fbb76f; -[SCSnapDocMediaClaimingServicesSaberServiceProvider provide] */

void FUN_103fbb73c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103fbb528();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fbb770; end: 103fbb7a3; -[SCSnapDocMediaClaimingServicesSaberServiceProvider __safeProvide] */

void FUN_103fbb770(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103fbb654();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fbb7a4; end: 103fbb7e7; -[SCSnapDocMediaClaimingServicesSaberServiceProvider end] */

void FUN_103fbb7a4(undefined8 param_1)

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



/* Entry: 103fbb7e8; end: 103fbb97f;  */

void FUN_103fbb7e8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffda) || (param_3 != -0x7ffffffef0e28990)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000026,0x800000010f1d7670,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "MemUserSessionScopeGraphBridge/SCSnapDocMediaClaimingServicesSaberServiceProvider.swift"
                   ,0x57,2,0x45,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103fbb980);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c564e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103fbb980; end: 103fbba2b; -[SCSnapDocMediaClaimingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103fbb980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103fbb7e8(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103fbba2c; end: 103fbba9f; -[SCSnapDocMediaClaimingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbba2c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11303e568,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11303e570,0);
  *(undefined8 *)(param_1 + _DAT_11303e578) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fbbaa0; end: 103fbbad3;  */

void FUN_103fbbaa0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103fbbad4; end: 103fbbb1b; -[SCSnapDocMediaClaimingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbbad4(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11303e568);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11303e570);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11303e578));
  return;
}



/* Entry: 103fbbb1c; end: 103fbbb3b;  */

void FUN_103fbbb1c(void)

{
  _objc_opt_self(&PTR_PTR_11303e5c0);
  return;
}



/* Entry: 103fbbb3c; end: 103fbbb53;  */

bool FUN_103fbbb3c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103fbbb54; end: 103fbbb93;  */

void FUN_103fbbb54(void)

{
  undefined *puVar1;
  
  if (puRam000000011303e628 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb6e80;
  _swift_getWitnessTable(&UNK_10dcb6e80,&UNK_11072bbc0);
  puRam000000011303e628 = puVar1;
  return;
}



/* Entry: 103fbbb94; end: 103fbbc7b;  */

void FUN_103fbbb94(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  
  uStack_38 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_80,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_80,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103fbbc7c; end: 103fbbc9f;  */

void FUN_103fbbc7c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = 0;
  *(bool *)(param_1 + 1) = lVar1 != 0;
  return;
}



/* Entry: 103fbbca0; end: 103fbbcef;  */

void FUN_103fbbca0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103fbbe78();
                    /* WARNING: Could not recover jumptable at 0x00010bdb4bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation15_BridgedNSErrorPAAE7_domainSSvg_1103506f8)(param_1,uVar1);
  return;
}



/* Entry: 103fbbcf0; end: 103fbbcfb;  */

void FUN_103fbbcf0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE9_userInfoyXlSgvg_11034ee00)();
  return;
}



/* Entry: 103fbbcfc; end: 103fbbd3b;  */

void FUN_103fbbcfc(void)

{
  undefined *puVar1;
  
  if (puRam000000011303e630 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb6fa8;
  _swift_getWitnessTable(&UNK_10dcb6fa8,&UNK_11072bbc0);
  puRam000000011303e630 = puVar1;
  return;
}



/* Entry: 103fbbd3c; end: 103fbbd3f;  */

void FUN_103fbbd3c(void)

{
  undefined *puVar1;
  
  if (puRam000000011303e638 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb6ea8;
  _swift_getWitnessTable(&UNK_10dcb6ea8,&UNK_11072bbc0);
  puRam000000011303e638 = puVar1;
  return;
}



/* Entry: 103fbbd40; end: 103fbbd7f;  */

void FUN_103fbbd40(void)

{
  undefined *puVar1;
  
  if (puRam000000011303e638 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb6ea8;
  _swift_getWitnessTable(&UNK_10dcb6ea8,&UNK_11072bbc0);
  puRam000000011303e638 = puVar1;
  return;
}



/* Entry: 103fbbd80; end: 103fbbd83;  */

void FUN_103fbbd80(void)

{
  undefined *puVar1;
  
  if (puRam000000011303e640 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb6ee8;
  _swift_getWitnessTable(&UNK_10dcb6ee8,&UNK_11072bbc0);
  puRam000000011303e640 = puVar1;
  return;
}



/* Entry: 103fbbd84; end: 103fbbdc3;  */

void FUN_103fbbd84(void)

{
  undefined *puVar1;
  
  if (puRam000000011303e640 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb6ee8;
  _swift_getWitnessTable(&UNK_10dcb6ee8,&UNK_11072bbc0);
  puRam000000011303e640 = puVar1;
  return;
}



/* Entry: 103fbbdc4; end: 103fbbde7;  */

void FUN_103fbbdc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d3a158 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___sSis17FixedWidthIntegersMc_11034def8;
  func_0x000107c61520(PTR___sSis17FixedWidthIntegersMc_11034def8,PTR___sSiN_11034deb0);
  puRam0000000112d3a158 = puVar1;
  return;
}



/* Entry: 103fbbde8; end: 103fbbe27;  */

void FUN_103fbbde8(void)

{
  undefined *puVar1;
  
  if (puRam000000011303e648 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb6f20;
  _swift_getWitnessTable(&UNK_10dcb6f20,&UNK_11072bbc0);
  puRam000000011303e648 = puVar1;
  return;
}



/* Entry: 103fbbe28; end: 103fbbe67;  */

void FUN_103fbbe28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_103fbbe78();
                    /* WARNING: Could not recover jumptable at 0x00010bdb4b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation15_BridgedNSErrorPAAE08_bridgedC0xSgSo0C0Ch_tcfC_1103506e0)
            (param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 103fbbe68; end: 103fbbe77;  */

undefined1  [16] FUN_103fbbe68(void)

{
  return ZEXT816(0x11072bbc0);
}



/* Entry: 103fbbe78; end: 103fbbeb7;  */

void FUN_103fbbe78(void)

{
  undefined *puVar1;
  
  if (puRam000000011303e650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb6f60;
  _swift_getWitnessTable(&UNK_10dcb6f60,&UNK_11072bbc0);
  puRam000000011303e650 = puVar1;
  return;
}



/* Entry: 103fbbeb8; end: 103fbbf43; -[_TtC47MemPlatBackupDependencyEntriesResolvingServices47MemPlatBackupDependencyEntriesResolvingServices resolverObjC] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbbeb8(undefined8 param_1)

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



/* Entry: 103fbbf44; end: 103fbbfa3; -[_TtC47MemPlatBackupDependencyEntriesResolvingServices47MemPlatBackupDependencyEntriesResolvingServices init] */

void FUN_103fbbf44(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MemPlatBackupDependencyEntriesResolvingServices.MemPlatBackupDependencyEntriesResolvingServices"
             ,0x5f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fbbf70);
  (*pcVar1)();
}



/* Entry: 103fbbfa4; end: 103fbbfcb; -[_TtC47MemPlatBackupDependencyEntriesResolvingServices47MemPlatBackupDependencyEntriesResolvingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbbfa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11303e658));
  return;
}



/* Entry: 103fbbfcc; end: 103fbc00b;  */

void FUN_103fbbfcc(void)

{
  undefined *puVar1;
  
  if (puRam000000011303e688 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb7060;
  _swift_getWitnessTable(&UNK_10dcb7060,&UNK_11072bce0);
  puRam000000011303e688 = puVar1;
  return;
}



/* Entry: 103fbc00c; end: 103fbc0b7;  */

void FUN_103fbc00c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103fbc0b8; end: 103fbc0f7;  */

void FUN_103fbc0b8(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *param_2 + 1;
  lVar2 = 0;
  if (uVar1 < 2) {
    lVar2 = *param_2;
  }
  *param_1 = lVar2;
  *(bool *)(param_1 + 1) = 1 < uVar1;
  return;
}



/* Entry: 103fbc0f8; end: 103fbc16b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbc0f8(void)

{
  func_0x0001003a5b88();
  return;
}



/* Entry: 103fbc16c; end: 103fbc1c7; -[_TtC26SCCloudSyncDataCapServices24CloudSyncDataCapServices init] */

void FUN_103fbc16c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCloudSyncDataCapServices.CloudSyncDataCapServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fbc198);
  (*pcVar1)();
}



/* Entry: 103fbc1c8; end: 103fbc1d7; -[_TtC26SCCloudSyncDataCapServices24CloudSyncDataCapServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbc1c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11303e690));
  return;
}



/* Entry: 103fbc1d8; end: 103fbc267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103fbc1d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303e6c0) = param_1;
  uVar1 = param_1;
  _swift_retain();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_11303e6c8) = uVar1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  _swift_release(param_1);
  _swift_release(param_2);
  return puVar2;
}



/* Entry: 103fbc268; end: 103fbc2c3; -[MemPlatBackupLoggingServices init] */

void FUN_103fbc268(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMemPlatBackupLoggingServices.MemPlatBackupLoggingServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fbc294);
  (*pcVar1)();
}



/* Entry: 103fbc2c4; end: 103fbc2fb; -[MemPlatBackupLoggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbc2c4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303e6c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11303e6c8));
  return;
}



/* Entry: 103fbc2fc; end: 103fbc307;  */

undefined8 FUN_103fbc2fc(void)

{
  return 1;
}



/* Entry: 103fbc308; end: 103fbc347;  */

void FUN_103fbc308(void)

{
  undefined *puVar1;
  
  if (puRam000000011303e6f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb71d8;
  _swift_getWitnessTable(&UNK_10dcb71d8,&UNK_11072be48);
  puRam000000011303e6f8 = puVar1;
  return;
}



/* Entry: 103fbc348; end: 103fbc39b;  */

void FUN_103fbc348(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,0x646f63736e617274,0xe900000000000065);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103fbc39c; end: 103fbc3b7;  */

void FUN_103fbc39c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0x646f63736e617274,0xe900000000000065);
  return;
}



/* Entry: 103fbc3b8; end: 103fbc407;  */

void FUN_103fbc3b8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,0x646f63736e617274,0xe900000000000065);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103fbc408; end: 103fbc473;  */

void FUN_103fbc408(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 103fbc474; end: 103fbc57f;  */

void FUN_103fbc474(undefined8 *param_1)

{
  *param_1 = 0x646f63736e617274;
  param_1[1] = 0xe900000000000065;
  return;
}



/* Entry: 103fbc580; end: 103fbc6a3;  */

undefined1  [16] FUN_103fbc580(long param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lStack_18;
  
  if (param_1 < 3) {
    if (param_1 == 0) {
      auVar5._8_8_ = 0x800000010efc9f70;
      auVar5._0_8_ = 0xd000000000000011;
      return auVar5;
    }
    if (param_1 == 1) {
      auVar3._8_8_ = 0x800000010efc9f30;
      auVar3._0_8_ = 0xd000000000000013;
      return auVar3;
    }
    if (param_1 == 2) {
      auVar6._8_8_ = 0x800000010efc9f50;
      auVar6._0_8_ = 0xd000000000000014;
      return auVar6;
    }
  }
  else if (param_1 < 5) {
    if (param_1 == 3) {
      auVar2._8_8_ = 0x800000010efc9ef0;
      auVar2._0_8_ = 0xd000000000000017;
      return auVar2;
    }
    if (param_1 == 4) {
      auVar7._8_8_ = 0x800000010efc9ed0;
      auVar7._0_8_ = 0xd00000000000001c;
      return auVar7;
    }
  }
  else {
    if (param_1 == 5) {
      auVar4._8_8_ = 0x800000010efc9eb0;
      auVar4._0_8_ = 0xd00000000000001b;
      return auVar4;
    }
    if (param_1 == 6) {
      auVar8._8_8_ = 0x800000010efc9f10;
      auVar8._0_8_ = 0xd000000000000010;
      return auVar8;
    }
  }
  lStack_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_11072bec0,&lStack_18,&UNK_11072bec0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fbc6a4);
  (*pcVar1)();
}


